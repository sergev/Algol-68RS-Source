# Algol68toC make include file
#
# Other macros used:
#  A68 A68_LIB A68_NAMESEED CTFLAGS QADFLAGS
# A68_ORDER lists a directory's generated .c files in translation order.

#---------------------- Macros --------------------------
# The following directory contains a68config.m
#
A68_ROOT=$(ACD)
#
# A68_DIRS is a list of directories where module info files (.m)
# can be found in reverse search order (the last will be the first searched).
#
A68_DIRS=-dir $(A68_ROOT) -dir .
#
# Different flags are required for the QAD standard prelude
ifeq ($(DEBUG),yes)
	CFLAGS:=-g $(NOR)
else
	CFLAGS:=$(NOR)
endif

ifeq ($(CURDIR),$(QAD))
	A68_FLAGS:=$(QADFLAGS)
else
	A68_FLAGS:=$(CTFLAGS)
endif

#---------------- Rules -----------------
%.c: %.a68
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) $<

%.o: %.c
	$(CC) $(CFLAGS) -DA68_CHECK -o $@ -c $<

# Translate one module at a time, in A68_ORDER: each needs the .m files of
# the previous ones and advances the shared nameseed. C compiles run in parallel.
a68_chain = $(if $(word 2,$1),$(eval $(word 2,$1) : | $(word 1,$1))$(call a68_chain,$(wordlist 2,$(words $1),$1)))
a68_goal := $(.DEFAULT_GOAL)
$(call a68_chain,$(A68_ORDER))
.DEFAULT_GOAL := $(a68_goal)
