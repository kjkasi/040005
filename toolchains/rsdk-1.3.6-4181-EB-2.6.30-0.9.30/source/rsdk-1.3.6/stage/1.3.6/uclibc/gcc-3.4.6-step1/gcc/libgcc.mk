srcdir = /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc
VPATH = /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc
EQ = =

force:

libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_divdi3.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_moddi3.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivdi3.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_umoddi3.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udiv_w_sdiv.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivmoddi4.o
libgcc/./_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_sf -c fp-bit.c -o libgcc/./_pack_sf.o
libgcc/./_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_sf -c fp-bit.c -o libgcc/./_unpack_sf.o
libgcc/./_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_sf -c fp-bit.c -o libgcc/./_addsub_sf.o
libgcc/./_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_sf -c fp-bit.c -o libgcc/./_mul_sf.o
libgcc/./_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_sf -c fp-bit.c -o libgcc/./_div_sf.o
libgcc/./_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/./_fpcmp_parts_sf.o
libgcc/./_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_sf -c fp-bit.c -o libgcc/./_compare_sf.o
libgcc/./_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_sf -c fp-bit.c -o libgcc/./_eq_sf.o
libgcc/./_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_sf -c fp-bit.c -o libgcc/./_ne_sf.o
libgcc/./_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_sf -c fp-bit.c -o libgcc/./_gt_sf.o
libgcc/./_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_sf -c fp-bit.c -o libgcc/./_ge_sf.o
libgcc/./_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_sf -c fp-bit.c -o libgcc/./_lt_sf.o
libgcc/./_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_sf -c fp-bit.c -o libgcc/./_le_sf.o
libgcc/./_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_sf -c fp-bit.c -o libgcc/./_unord_sf.o
libgcc/./_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_sf -c fp-bit.c -o libgcc/./_si_to_sf.o
libgcc/./_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_si -c fp-bit.c -o libgcc/./_sf_to_si.o
libgcc/./_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_sf -c fp-bit.c -o libgcc/./_negate_sf.o
libgcc/./_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_sf -c fp-bit.c -o libgcc/./_make_sf.o
libgcc/./_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_df -c fp-bit.c -o libgcc/./_sf_to_df.o
libgcc/./_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_tf -c fp-bit.c -o libgcc/./_sf_to_tf.o
libgcc/./_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_sf -c fp-bit.c -o libgcc/./_thenan_sf.o
libgcc/./_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_usi -c fp-bit.c -o libgcc/./_sf_to_usi.o
libgcc/./_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_sf -c fp-bit.c -o libgcc/./_usi_to_sf.o
libgcc/./_pack_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_df -c dp-bit.c -o libgcc/./_pack_df.o
libgcc/./_unpack_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_df -c dp-bit.c -o libgcc/./_unpack_df.o
libgcc/./_addsub_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_df -c dp-bit.c -o libgcc/./_addsub_df.o
libgcc/./_mul_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_df -c dp-bit.c -o libgcc/./_mul_df.o
libgcc/./_div_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_df -c dp-bit.c -o libgcc/./_div_df.o
libgcc/./_fpcmp_parts_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_df -c dp-bit.c -o libgcc/./_fpcmp_parts_df.o
libgcc/./_compare_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_df -c dp-bit.c -o libgcc/./_compare_df.o
libgcc/./_eq_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_df -c dp-bit.c -o libgcc/./_eq_df.o
libgcc/./_ne_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_df -c dp-bit.c -o libgcc/./_ne_df.o
libgcc/./_gt_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_df -c dp-bit.c -o libgcc/./_gt_df.o
libgcc/./_ge_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_df -c dp-bit.c -o libgcc/./_ge_df.o
libgcc/./_lt_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_df -c dp-bit.c -o libgcc/./_lt_df.o
libgcc/./_le_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_df -c dp-bit.c -o libgcc/./_le_df.o
libgcc/./_unord_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_df -c dp-bit.c -o libgcc/./_unord_df.o
libgcc/./_si_to_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_df -c dp-bit.c -o libgcc/./_si_to_df.o
libgcc/./_df_to_si.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_si -c dp-bit.c -o libgcc/./_df_to_si.o
libgcc/./_negate_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_df -c dp-bit.c -o libgcc/./_negate_df.o
libgcc/./_make_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_df -c dp-bit.c -o libgcc/./_make_df.o
libgcc/./_df_to_sf.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_sf -c dp-bit.c -o libgcc/./_df_to_sf.o
libgcc/./_df_to_tf.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_tf -c dp-bit.c -o libgcc/./_df_to_tf.o
libgcc/./_thenan_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_df -c dp-bit.c -o libgcc/./_thenan_df.o
libgcc/./_df_to_usi.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_usi -c dp-bit.c -o libgcc/./_df_to_usi.o
libgcc/./_usi_to_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_df -c dp-bit.c -o libgcc/./_usi_to_df.o
libgcc/./unwind-dw2.o: stmp-dirs /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde-glibc.o: stmp-dirs /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-dw2-fde-glibc.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-dw2-fde-glibc.c -o libgcc/./unwind-dw2-fde-glibc.o
libgcc/./unwind-sjlj.o: stmp-dirs /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
libgcc/./gthr-gnat.o: stmp-dirs /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gthr-gnat.c -o libgcc/./gthr-gnat.o
libgcc/./unwind-c.o: stmp-dirs /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/unwind-c.c -o libgcc/./unwind-c.o
libgcc/./_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/./_gcov.o
libgcc/./_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_add.o
libgcc/./_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_single.o
libgcc/./_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_delta.o

./libgcc.a: stmp-dirs  libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o libgcc/./_pack_sf.o libgcc/./_unpack_sf.o libgcc/./_addsub_sf.o libgcc/./_mul_sf.o libgcc/./_div_sf.o libgcc/./_fpcmp_parts_sf.o libgcc/./_compare_sf.o libgcc/./_eq_sf.o libgcc/./_ne_sf.o libgcc/./_gt_sf.o libgcc/./_ge_sf.o libgcc/./_lt_sf.o libgcc/./_le_sf.o libgcc/./_unord_sf.o libgcc/./_si_to_sf.o libgcc/./_sf_to_si.o libgcc/./_negate_sf.o libgcc/./_make_sf.o libgcc/./_sf_to_df.o libgcc/./_sf_to_tf.o libgcc/./_thenan_sf.o libgcc/./_sf_to_usi.o libgcc/./_usi_to_sf.o libgcc/./_pack_df.o libgcc/./_unpack_df.o libgcc/./_addsub_df.o libgcc/./_mul_df.o libgcc/./_div_df.o libgcc/./_fpcmp_parts_df.o libgcc/./_compare_df.o libgcc/./_eq_df.o libgcc/./_ne_df.o libgcc/./_gt_df.o libgcc/./_ge_df.o libgcc/./_lt_df.o libgcc/./_le_df.o libgcc/./_unord_df.o libgcc/./_si_to_df.o libgcc/./_df_to_si.o libgcc/./_negate_df.o libgcc/./_make_df.o libgcc/./_df_to_sf.o libgcc/./_df_to_tf.o libgcc/./_thenan_df.o libgcc/./_df_to_usi.o libgcc/./_usi_to_df.o libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o  libgcc/./_eprintf.o libgcc/./__gcc_bcmp.o
	-rm -rf ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o libgcc/./_pack_sf.o libgcc/./_unpack_sf.o libgcc/./_addsub_sf.o libgcc/./_mul_sf.o libgcc/./_div_sf.o libgcc/./_fpcmp_parts_sf.o libgcc/./_compare_sf.o libgcc/./_eq_sf.o libgcc/./_ne_sf.o libgcc/./_gt_sf.o libgcc/./_ge_sf.o libgcc/./_lt_sf.o libgcc/./_le_sf.o libgcc/./_unord_sf.o libgcc/./_si_to_sf.o libgcc/./_sf_to_si.o libgcc/./_negate_sf.o libgcc/./_make_sf.o libgcc/./_sf_to_df.o libgcc/./_sf_to_tf.o libgcc/./_thenan_sf.o libgcc/./_sf_to_usi.o libgcc/./_usi_to_sf.o libgcc/./_pack_df.o libgcc/./_unpack_df.o libgcc/./_addsub_df.o libgcc/./_mul_df.o libgcc/./_div_df.o libgcc/./_fpcmp_parts_df.o libgcc/./_compare_df.o libgcc/./_eq_df.o libgcc/./_ne_df.o libgcc/./_gt_df.o libgcc/./_ge_df.o libgcc/./_lt_df.o libgcc/./_le_df.o libgcc/./_unord_df.o libgcc/./_si_to_df.o libgcc/./_df_to_si.o libgcc/./_negate_df.o libgcc/./_make_df.o libgcc/./_df_to_sf.o libgcc/./_df_to_tf.o libgcc/./_thenan_df.o libgcc/./_df_to_usi.o libgcc/./_usi_to_df.o libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o libgcc/./_eprintf.o libgcc/./__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) ./libgcc.a

./libgcov.a: stmp-dirs  libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	-rm -rf ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) ./libgcov.a

libgcc-stage-start:
	for dir in libgcc; do \
	  if [ -d $(stage)/$$dir ]; then true; else /bin/sh /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in libgcc; do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  mv $$dir/*.os $(stage)/$$dir || true; \
	  test ! -f $$dir/stacknote.s || mv $$dir/stacknote.s $(stage)/$$dir; \
	  test ! -f $$dir/libgcc.a || mv $$dir/lib* $(stage)/$$dir; \
	done

stmp-dirs: force
	for d in libgcc; do \
	  if [ -d $$d ]; then true; else /bin/sh /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi
crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtbegin.o
crtbeginT.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtbeginT.o
crtbeginS.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtbeginS.o
crtendS.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtendS.o
crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtend.o

all: stmp-dirs ./libgcc.a ./libgcov.a crtbegin.o crtbeginT.o crtbeginS.o crtendS.o crtend.o

install: stmp-dirs ./libgcc.a ./libgcov.a crtbegin.o crtbeginT.o crtbeginS.o crtendS.o crtend.o
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
	$(INSTALL_DATA) crtbegin.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) crtbeginT.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) crtbeginS.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) crtendS.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) crtend.o $(DESTDIR)$(libsubdir)/
