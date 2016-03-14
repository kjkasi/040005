
all:
	rm -rf ../rsdk/*
	cd rsdk-1.3.6/builder; make -f uclibc-makefile clean; make -f uclibc-makefile
	mv rsdk-1.3.6/release/rsdk-1.3.6/linux/uclibc/*  ../rsdk/

clean:
	rm -rf ../rsdk/*
	cd rsdk-1.3.6/builder; make -f uclibc-makefile clean;

