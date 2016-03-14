# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2001, 2003 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.16-1.3.6

SHELL = /bin/sh


srcdir = /toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/po
top_srcdir = /toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd
VPATH = /toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/po

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
POFILES =  fr.po tr.po ja.po es.po sv.po da.po zh_CN.po ro.po
GMOFILES =  fr.gmo tr.gmo ja.gmo es.gmo sv.gmo da.gmo zh_CN.gmo ro.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aix386-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aix5ppc-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout0.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-adobe.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-cris.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aoutf1.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-ns32k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-sparcle.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-target.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aout-tic30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/aoutx.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/archive64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/archive.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/archures.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/armnetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/bfd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/bfdio.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/bfdwin.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/binary.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/bout.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cache.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cf-i386lynx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cf-m68klynx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cf-sparclynx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cisco-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff64-rs6000.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-a29k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-alpha.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-apollo.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-aux.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coffcode.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coffgen.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-go32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-h8300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-h8500.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-i860.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-i960.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cofflink.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-m68k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-m88k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-maxq.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-or32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-rs6000.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-sh.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-sparc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-stgo32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-svm68k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coffswap.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-tic30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-tic4x.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-tic54x.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-tic80.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-u68k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-w65.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-we32k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/coff-z8k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/corefile.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-a29k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-alpha.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-arc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-avr.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-cr16c.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-cris.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-crx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-d10v.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-d30v.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-dlx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-fr30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-frv.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-h8300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-h8500.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-hppa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-i370.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-i860.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-i960.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-ia64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-ip2k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-iq2000.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m10200.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m10300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m32r.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m68hc11.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m68hc12.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m68k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-m88k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-maxq.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-mcore.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-mmix.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-msp430.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-ns32k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-openrisc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-or32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-pdp11.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-pj.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-powerpc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-rs6000.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-s390.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-sh.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-sparc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-tic30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-tic4x.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-tic54x.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-tic80.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-v850.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-vax.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-w65.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-we32k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-xstormy16.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-xtensa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/cpu-z8k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/demo64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/dwarf1.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/dwarf2.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ecoff.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ecofflink.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ecoffswap.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/efi-app-ia32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/efi-app-ia64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-am33lin.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-arc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-avr.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-cr16c.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-cris.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-crx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-d10v.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-d30v.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-dlx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-fr30.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-frv.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-gen.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-h8300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-hppa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-hppa.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-i370.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-i860.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-i960.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-ip2k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-iq2000.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-m32r.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-m68hc11.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-m68hc12.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-m68hc1x.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-m68k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-m88k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-mcore.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-msp430.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-openrisc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-or32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-pj.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-ppc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-s390.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-sh64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-sh64-com.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-sh.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-sh-symbian.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-sparc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-v850.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-vax.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-xstormy16.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf32-xtensa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-alpha.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-gen.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-hppa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-hppa.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-mmix.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-ppc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-s390.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-sh64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-sparc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf64-x86-64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf-bfd.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elfcode.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elfcore.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf-eh-frame.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf-hppa.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elflink.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf-m10200.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf-m10300.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elfn32-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elf-strtab.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/elfxx-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/epoc-pe-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/epoc-pei-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/format.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/freebsd.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/genlink.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/go32stub.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/hash.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/hp300bsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/hp300hpux.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/hpux-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386aout.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386bsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386dynix.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386freebsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386linux.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386lynx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386mach3.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386msdos.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386netbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/i386os9k.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ieee.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ihex.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/init.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/irix-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libaout.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libbfd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libbfd.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libcoff.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libecoff.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libhppa.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libieee.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libnlm.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/liboasys.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libpei.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/libxcoff.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/linker.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/lynx-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/m68k4knetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/m68klinux.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/m68klynx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/m68knetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/m88kmach3.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/m88kopenbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/mach-o.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/mach-o.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/merge.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/mipsbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/mmo.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/netbsd.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/newsos3.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm32-alpha.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm32.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm32-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm32-ppc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm32-sparc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm64.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlmcode.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlmswap.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/nlm-target.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ns32k.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ns32knetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/oasys.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/opncls.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/osf-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pc532-mach.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pdp11.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pe-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pef.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pef.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pef-traceback.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pe-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pei-arm.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/peicode.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pei-i386.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pei-mcore.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pei-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pei-ppc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pei-sh.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pe-mcore.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pe-mips.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pe-ppc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/pe-sh.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/ppcboot.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/reloc16.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/reloc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/riscix.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/sco5-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/section.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/simple.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/som.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/som.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/sparclinux.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/sparclynx.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/sparcnetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/srec.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/stabs.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/stab-syms.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/sunos.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/syms.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/targets.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/tekhex.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/trad-core.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vax1knetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vaxbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vaxnetbsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/versados.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/version.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vms.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vms-gsd.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vms.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vms-hdr.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vms-misc.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/vms-tir.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/xcofflink.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/xcoff-target.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/xsym.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/xsym.h \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/xtensa-isa.c \
	/toolchain/openrsdk/rsdk-1.3.6/binutils-2.16/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../targmatch.h 

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

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --files-from=$(srcdir)/BLD-POTFILES.in
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
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

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

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
