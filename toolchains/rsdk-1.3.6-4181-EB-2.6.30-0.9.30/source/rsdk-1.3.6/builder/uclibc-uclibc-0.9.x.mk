#
# Realtek Semiconductor Corp.
#
# uclibc Makefile for the RSDK/uclibc toolchain
#
# Tony Wu (tonywu@realtek.com.tw)
# Oct. 10, 2005
#

#----------------------------------------------------------------------------
# uClibc local variables
#----------------------------------------------------------------------------

# Anticipate the change.
UCLIBC_SRC := $(BASE_DIR)/uClibc-$(UCLIBC_VER)
UCLIBC_DIR := $(STAGE_DIR)/uClibc-$(UCLIBC_VER)

#----------------------------------------------------------------------------
# uClibc targets
#----------------------------------------------------------------------------

$(UCLIBC_DIR)/.prepared: $(BUILD_DIR)/.ulib-make-init
	cd $(BASE_DIR); tar cf - uClibc-$(UCLIBC_VER) | (cd $(STAGE_DIR); tar xfBp -)
	touch $(UCLIBC_DIR)/.prepared

$(UCLIBC_DIR)/.configured: $(UCLIBC_DIR)/.prepared
# copy default uclibc config file
	(cd $(UCLIBC_DIR); cp uclibc-config .config; $(MAKE) silentoldconfig)
	mkdir -p $(STAGE_DIR)/sysroot/usr/include
	mkdir -p $(STAGE_DIR)/sysroot/usr/lib
	mkdir -p $(STAGE_DIR)/sysroot/lib
	$(MAKE) -C $(UCLIBC_DIR) \
		PREFIX=$(STAGE_DIR)/sysroot/ \
		DEVEL_PREFIX=/usr/ \
		RUNTIME_PREFIX=/ \
		CROSS="" \
		HOSTCC="$(HOST_CC)" \
		install_headers \
		install_kernel_headers
	touch $(UCLIBC_DIR)/.configured

$(UCLIBC_DIR)/.compiled: $(UCLIBC_DIR)/.configured
	(cd $(UCLIBC_DIR); \
		$(MAKE) CROSS="$(TARGET_CROSS)" \
	)
	touch $(UCLIBC_DIR)/.compiled

$(UCLIBC_DIR)/.installed: $(UCLIBC_DIR)/.compiled
	$(MAKE) -C $(UCLIBC_DIR) \
		PREFIX=$(BUILD_DIR)/ \
		DEVEL_PREFIX=/ \
		RUNTIME_PREFIX=/ \
		CROSS="$(TARGET_CROSS)" \
		HOSTCC="$(HOST_CC)" \
		install_headers \
		install_kernel_headers
	$(MAKE) -C $(UCLIBC_DIR) \
		PREFIX=$(BUILD_DIR) \
		CROSS="$(TARGET_CROSS)" \
		DEVEL_PREFIX=/ \
		RUNTIME_PREFIX=/ \
		install
	sed -i -e 's,/lib/,,g' $(BUILD_DIR)/lib/libc.so
	touch $(UCLIBC_DIR)/.installed

uclibc-configured: $(UCLIBC_DIR)/.configured

uclibc: gcc-step1 $(UCLIBC_DIR)/.installed

uclibc-clean:
	-$(MAKE) -C $(UCLIBC_DIR) clean
	rm -f $(UCLIBC_DIR)/.config

uclibc-dirclean:
	rm -rf $(UCLIBC_DIR)
