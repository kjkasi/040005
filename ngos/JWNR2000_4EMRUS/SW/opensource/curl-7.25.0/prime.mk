all:
	$(SHELL) ./configure --host=mips-linux --with-ssl=$(LIBOPENSSL_DIR) --enable-shared=no --enable-static=yes
	make

clean:
	make clean
