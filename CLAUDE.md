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
make                 # stage 1: builds bdwgc, then compiles committed .c files -> src/a68toc
make Translate       # re-translate all .a68 -> .c using the freshly built src/a68toc
make dist-clean && make   # stage 2: compiler built from its own output
sudo make install    # /usr (or /usr/local on macOS)
```

- Top-level `make` uses `-for d in ...; do $(MAKE) -C $$d; done` loops that **ignore sub-make
  failures**; check output for errors rather than trusting the exit status.
- Progress is tracked by stamp files `g-stamp` (bdwgc), `c-stamp` (C dirs), `q-stamp` (QAD
  prelude). Delete them (or `make dist-clean`) to force a rebuild.
- `bdwgc/` is extracted from `bdwgc.tar.gz` on first build and is git-ignored.
- Build order matters: `library` → `a68config` → `liba68prel` → `src`, then `qad`.
- Self-hosting check: translate, rebuild, translate again, and diff the generated `.c` files.
- Debian package: `dpkg-buildpackage -F`. Docs (`doc/`, `d-stamp`) are not built by default.

## Tests / examples

There is no unit-test suite. Verification is by self-compilation plus example programs, which use
the **installed** `ca` driver (`/usr/bin/ca`, `/usr/share/algol68toc`), so install first:

```sh
cd examples && ca Abundant_odd_numbers.a68 && ./Abundant_odd_numbers
make -C examples/tests test     # separate compilation of DECS modules into a library; diffs expected-output.txt
make -C examples/logic logic68  # diffs expected.output
```

`scripts/ca` is the user-level driver: runs `a68toc` → `gcc -O0 -DA68_CHECK` → links with
`Afirst.o -la68s -la68 -la68gc -lm`. A file containing `PROGRAM ` is linked into an executable;
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
