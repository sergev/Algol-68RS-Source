# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this is

`a68toc` (Algol68toC): the DRA/RSRE Algol 68 RS portable compiler front-end with a C back-end,
extracted from the ELLA VLSI package, ported to Linux by Sian Mountbatten, later ported to
x86_64/aarch64/armhf/macOS by Neil Matthew. The compiler is written in Algol 68 and is
**self-hosting**: the translated `.c` files are committed alongside the `.a68` sources so the
compiler can be bootstrapped with only a C compiler. Not implemented: formats, `PAR`, `SEMA`.

## Build

```sh
export A68_NAMESEED=nameseed
make dist-clean
make                 # stage 1: GC setup, then compiles committed .c files -> src/a68toc
make Translate       # re-translate all .a68 -> .c using the freshly built src/a68toc
make dist-clean && make   # stage 2: compiler built from its own output
sudo make install    # /usr (or /usr/local on macOS)
```

- Sub-make failures propagate to the top-level exit status. `make -jN` works: directories build in
  sequence, C compiles run in parallel, but translation stays serial in `A68_ORDER` (chained by
  order-only prerequisites in `Algol68.mk`), because modules need each other's `.m` files and share
  `nameseed`.
- Progress is tracked by stamp files `c-stamp` (C dirs), `q-stamp` (QAD
  prelude). Delete them (or `make dist-clean`) to force a rebuild.
- GC: system libgc via `pkg-config bdw-gc` (`libgc-dev` / Homebrew `bdw-gc`) is required,
  giving `GC_CFLAGS`/`GC_LIBS`. `make install` bakes the GC flags into the installed `ca`.
- C is compiled with `-O2 -Wall -Wshadow -Werror` (forced via `override CFLAGS`). Generated C must stay
  warning-free under gcc and clang: the backend voids discarded call results, zero-initialises
  locals/SKIP/union temporaries, and marks declarations `A_UNUSED`. Changing that output needs a
  bootstrap through C that is not yet clean, so drop `-Werror` temporarily for that step.
- Build order matters: `library` → `a68config` → `liba68prel` → `src`, then `qad`.
- Self-hosting check: `make check` (see Tests below).
- Debian package: `dpkg-buildpackage -F`. Docs (`doc/`, `d-stamp`) are not built by default.

## Tests / examples

`make check` runs `scripts/check` on a scratch copy of the tree: the self-hosting fixed point
(stage-1 and stage-2 compilers produce the same C, ignoring timestamps), then `scripts/runtests`.
`make test` runs only `scripts/runtests` against the current build (work files in `tests/work`).
`make SANITIZE=undefined check` builds everything, including test programs, with UBSan.
No install is needed: `CA_A68TOC`, `CA_ROOT`, `CA_LIBDIR`, `CA_INCLUDES` (and `CA_CC`) point `ca`
at the build tree.

`scripts/runtests` covers:
- `tests/run/NAME.a68`: must exit 0 with stdout equal to `NAME.out`;
- `tests/fail/NAME.a68`: must fail at run time with stderr equal to `NAME.err`;
- `tests/error/NAME.a68`: must not compile; diagnostics equal to `NAME.err`;
- `examples/*.a68`: all compiled; run and diffed when `NAME.out` exists (`NAME.args`, `NAME.in`
  optional); plus `examples/tests` and the `logic68` part of `examples/logic`.

Expected outputs must be checked by hand for correctness, not just recorded.

The examples can also be run by hand. Those runs use
the **installed** `ca` driver (`/usr/bin/ca`, `/usr/share/algol68toc`), so install first:

```sh
cd examples && ca Abundant_odd_numbers.a68 && ./Abundant_odd_numbers
make -C examples/tests test     # separate compilation of DECS modules into a library; diffs expected-output.txt
make -C examples/logic logic68  # diffs expected.output; Makefile needs Algol W's awe.mk
```

`scripts/ca` is the user-level driver: runs `a68toc` → `gcc -O2 -DA68_CHECK` → links with
`Afirst.o -la68s -la68 -lgc -lm`. A file containing `PROGRAM ` is linked into an executable;
otherwise it is a `DECS` module, archived into `-M dir`/`-m lib` with its `.m` moved to `dir/m/`.

## Architecture

| Dir | Contents | Output |
|---|---|---|
| `library/` | Hand-written C runtime (heap/GC, strings, assignment, coercion, `Afirst.c` entry) | `liba68.a`, `Afirst.o` |
| `include/algol68/` | C headers included by every generated `.c` file | |
| `a68config/` | `a68config.a68`: base environment module every compile depends on | `a68config.o/.m` |
| `liba68prel/` | Algol 68 support prelude used **only by the compiler itself** (OS interface, I/O, strings) | `liba68prel.a` (not installed) |
| `src/` | The compiler (`a68toc.a68` main program + ~40 modules) | `src/a68toc` |
| `qad/` | "Quick and Dirty" Standard Prelude for user programs (van Vliet transput conversions) | `liba68s.a`, `standard.m` |
| `mm/` | Old module manager; obsolete, not built | |
| `algol68-devel/` | Sian Mountbatten's literate-programming (Web68/tang) work; not part of the build | |
| `doc/`, `PAME.4e/` | Texinfo manuals, man pages, "Programming Algol 68 Made Easy" (LaTeX) | |

### Module system
- Each `.a68` is either `PROGRAM name CONTEXT VOID USE ...` or `DECS name CONTEXT VOID USE ...`.
  Compiling a module emits `name.c` plus `name.m`, a module-interface file that later
  compilations `USE`. `.m` files are searched via `-dir` options in **reverse** order (last
  listed is searched first); `-lib` names the dir holding `a68config.m`. See `Algol68.mk`.
- The order of source lists in each subdir `Makefile` is dependency order.
- **Name seeds**: generated C identifiers are made unique from a 7-letter seed in the `nameseed`
  file (`-uname seedfile`), which the compiler advances. Each dir has an `rctr` file holding its
  starting seed (e.g. `src/rctr` = `AAAACTR`, `qad/rctr` = `AAAASP9`); `make nameseed` /
  `resetseed -f` copies `rctr` → `nameseed`. Re-translation must start from fresh seeds for
  reproducible output.
- **Staredits**: a source line starting with `*X` is kept only when star-char `X` is enabled via
  `-staredit` (compiler uses `CTSTAR=59LR`, QAD uses `QADSTAR=1234ABCD`); `%X` lines are the
  inverse. E.g. `*L` lines add `usefulops` to `USE` lists when building the compiler.

## Conventions

- When amending Algol 68 sources, add an entry to the amendments list in the file's header
  comment (per `INSTALL`); keep the DRA Crown Copyright legend intact.
- After changing any `.a68` in `src/`, `liba68prel/`, `a68config/`, or `qad/`, regenerate and
  commit the matching `.c`/`.m` files (`make Translate`), since the bootstrap depends on them.
  `qad/*.c` and `qad/*.m` are git-ignored and always regenerated.
