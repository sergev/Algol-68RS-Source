#!/usr/bin/make
#
# $Id: Makefile,v 1.5 2002-06-20 13:16:57 sian Exp $
#
.PHONY : install

all : resetseed ca
	echo "Nothing to be done for all"

install :
	$(INSTALLPROG) -p resetseed $(BINDIR)
	sed -e 's|^GC_CFLAGS=.*|GC_CFLAGS=$${CA_GC_CFLAGS-"$(GC_CFLAGS)"}|' \
	    -e 's|^GC_LIBS=.*|GC_LIBS=$${CA_GC_LIBS-"$(GC_LIBS)"}|' ca >ca.inst
	$(INSTALLPROG) ca.inst $(BINDIR)/ca
	$(RM) ca.inst
