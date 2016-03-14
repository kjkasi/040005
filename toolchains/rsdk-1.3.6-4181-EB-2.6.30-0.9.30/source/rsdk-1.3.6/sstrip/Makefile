#  Makefile for sstrip

sstrip: sstrip.c
	gcc -s -static -O2 -Wall -W -I. -include endian.h -o sstrip sstrip.c

clean:
	rm -f *.o sstrip
