/* Aonexit.c - on_exit() emulation for systems without it (macOS)

   glibc's on_exit(fn, arg) registers fn to be called at exit as
   fn(status, arg).  macOS only has atexit(), whose handlers get no
   arguments, so:

   - each A_on_exit() call stores (fn, arg) on a stack and registers one
     more instance of A_onexit_run() with atexit().  atexit() handlers run
     in reverse order of registration, so the n-th A_onexit_run() call
     pops the n-th most recent entry, and on_exit and atexit handlers
     interleave in the same order as with glibc;

   - the exit status cannot be read back at exit time, so A_exit() (used
     by the Algol 68 `exit' and `stop') records it before calling exit().
     A return from main() reports the default status 0, which is what
     generated main() functions return.  Faults call abort(), which runs
     no exit handlers on any system.

   The table is static, not malloc'ed, so that the garbage collector,
   which scans static data, sees the `arg' pointers into its heap.
*/

#if defined(__MACH__)

#include <stdlib.h>
#include <algol68/Alibrary.h>

typedef void (*A_onexit_fn)(int status, void *arg);

#define A_ONEXIT_MAX 64

static struct A_onexit_entry {
    A_onexit_fn fn;
    void *arg;
} A_onexit_stack[A_ONEXIT_MAX];
static int A_onexit_count;
static int A_exit_status;

static void A_onexit_run(void)
{
    if (A_onexit_count > 0) {
        struct A_onexit_entry e = A_onexit_stack[--A_onexit_count];
        e.fn(A_exit_status, e.arg);
    }
}

int A_on_exit(void *fn, void *arg)
{
    if (A_onexit_count == A_ONEXIT_MAX)
        return -1;
    if (atexit(A_onexit_run) != 0)
        return -1;
    A_onexit_stack[A_onexit_count].fn = (A_onexit_fn)fn;
    A_onexit_stack[A_onexit_count].arg = arg;
    A_onexit_count++;
    return 0;
}

void A_exit(int status)
{
    A_exit_status = status;
    exit(status);
}

#else

/* ISO C forbids an empty translation unit. */
typedef int A_onexit_unused;

#endif
