# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2003 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.16-0.3.0

SHELL = /bin/sh


srcdir = /toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/po
top_srcdir = /toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas
VPATH = /toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/po

prefix = /toolchain/openrsdk/rsdk-1.3.6/release/rsdk-1.3.6/linux/uclibc
exec_prefix = ${prefix}
datadir = $(prefix)/share
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = $(srcdir)/../../mkinstalldirs

CC = gcc
GENCAT = @GENCAT@
GMSGFMT = PATH=../src:$$PATH 
MSGFMT = 
XGETTEXT = PATH=../src:$$PATH 
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O3
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  fr.po tr.po es.po
GMOFILES =  fr.gmo tr.gmo es.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/app.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/app.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/as.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/as.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/as.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/asintl.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/atof-generic.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/atof-generic.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/bignum-copy.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/bignum-copy.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/bignum.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/bit_fix.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/cgen.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/cond.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/cond.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-crisaout.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-criself.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-i386aout.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-i386coff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-i386elf.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-mipsecoff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/e-mipself.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-aout.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-aout.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-bout.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-bout.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-coff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-coff.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-ecoff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-ecoff.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-elf.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-elf.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-evax.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-evax.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-hp300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-hp300.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-ieee.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-ieee.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-som.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-som.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-vms.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/obj-vms.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-a29k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-a29k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-alpha.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-alpha.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-arc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-arc.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-arm.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-avr.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-avr.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-cris.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-cris.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-crx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-crx.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-d10v.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-d10v.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-d30v.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-d30v.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-dlx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-dlx.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-fr30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-fr30.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-frv.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-frv.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-h8300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-h8300.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-h8500.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-h8500.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-hppa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-hppa.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i370.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i370.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i386.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i860.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i860.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i960.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-i960.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ia64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ia64.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ip2k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ip2k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m32r.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m32r.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m68hc11.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m68hc11.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m68k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m68k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m88k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-m88k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mcore.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mcore.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mips.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mmix.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mmix.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mn10200.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mn10200.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mn10300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-mn10300.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-msp430.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-msp430.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ns32k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ns32k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-openrisc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-openrisc.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-or32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-or32.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-pdp11.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-pdp11.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-pj.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-pj.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ppc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-ppc.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-s390.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-s390.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-sh64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-sh64.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-sh.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-sh.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-sparc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-sparc.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tahoe.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tahoe.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tic30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tic30.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tic54x.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tic54x.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tic80.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-tic80.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-v850.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-v850.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-vax.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-vax.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-w65.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-w65.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-xstormy16.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-xstormy16.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-xtensa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-xtensa.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-z8k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/config/tc-z8k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/depend.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/depend.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/dw2gencfi.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/dw2gencfi.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/dw2gencfi.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/dwarf2dbg.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/dwarf2dbg.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/dwarf2dbg.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/ecoff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/ecoff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/ecoff.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/ehopt.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/ehopt.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/emul.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/emul-target.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/expr.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/expr.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/expr.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum-copy.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum-copy.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum-konst.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum-konst.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum-mult.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/flonum-mult.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/frags.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/frags.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/frags.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/hash.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/hash.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/hash.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/input-file.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/input-file.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/input-file.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/input-scrub.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/input-scrub.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/itbl-lex.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/itbl-ops.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/itbl-ops.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/listing.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/listing.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/listing.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/literal.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/literal.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/macro.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/macro.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/macro.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/messages.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/messages.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/obj.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/output-file.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/output-file.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/output-file.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/read.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/read.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/read.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/sb.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/sb.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/sb.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/stabs.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/stabs.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/struc-symbol.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/subsegs.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/subsegs.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/subsegs.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/symbols.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/symbols.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/symbols.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/tc.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/write.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/write.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

dvi info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
