/*
 * mtdram - a test mtd device
 * $Id: mtdram.c,v 1.33 2004/08/09 13:19:44 dwmw2 Exp $
 * Author: Alexander Larsson <alex@cendio.se>
 *
 * Copyright (c) 1999 Alexander Larsson <alex@cendio.se>
 *
 * This code is GPL
 *
 */

#include <linux/config.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/ioport.h>
#include <linux/vmalloc.h>
#include <linux/init.h>
#include <linux/mtd/compatmac.h>
#include <linux/mtd/mtd.h>

extern char *RAMrootfs;
extern unsigned int RAMrootfs_sz;

static unsigned long total_size;
static unsigned long erase_size = 128;
#define MTDRAM_TOTAL_SIZE (total_size * 1024)
#define MTDRAM_ERASE_SIZE (erase_size * 1024)

#ifdef MODULE
MODULE_PARM(total_size,"l");
MODULE_PARM_DESC(total_size, "Total device size in KiB");
MODULE_PARM(erase_size,"l");
MODULE_PARM_DESC(erase_size, "Device erase block size in KiB");
#endif

// We could store these in the mtd structure, but we only support 1 device..
static struct mtd_info *mtd_info;

static int ram_erase(struct mtd_info *mtd, struct erase_info *instr)
{
  if (instr->addr + instr->len > mtd->size)
    return -EINVAL;
	
  memset((char *)mtd->priv + instr->addr, 0xff, instr->len);
	
  instr->state = MTD_ERASE_DONE;
  mtd_erase_callback(instr);

  return 0;
}

static int ram_point(struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char **mtdbuf)
{
  if (from + len > mtd->size)
    return -EINVAL;
	
  *mtdbuf = mtd->priv + from;
  *retlen = len;
  return 0;
}

static void ram_unpoint (struct mtd_info *mtd, u_char *addr, loff_t from,
			 size_t len)
{
  DEBUG(MTD_DEBUG_LEVEL2, "ram_unpoint\n");
}

static int ram_read(struct mtd_info *mtd, loff_t from, size_t len,
	     size_t *retlen, u_char *buf)
{
  if (from + len > mtd->size)
    return -EINVAL;

  memcpy(buf, mtd->priv + from, len);

  *retlen=len;
  return 0;
}

static int ram_write(struct mtd_info *mtd, loff_t to, size_t len,
	      size_t *retlen, const u_char *buf)
{
  if (to + len > mtd->size)
        return -EINVAL;

  memcpy ((char *)mtd->priv + to, buf, len);

  *retlen=len;
  return 0;
}

static void __exit cleanup_mtdram(void)
{
  if (mtd_info) {
    del_mtd_device(mtd_info);
      //vfree(mtd_info->priv);
    kfree(mtd_info);
  }
}

int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
                       unsigned long size, char *name)
{
    memset(mtd, 0, sizeof(*mtd));

    /* Setup the MTD structure */
    mtd->name = name;
    mtd->type = MTD_RAM;
    mtd->flags = MTD_CAP_RAM;
    mtd->size = size;
    mtd->writesize = 1;
    mtd->erasesize = MTDRAM_ERASE_SIZE;
    mtd->priv = mapped_address;

    mtd->owner = THIS_MODULE;
    mtd->erase = ram_erase;
    mtd->point = ram_point;
    mtd->unpoint = ram_unpoint;
    mtd->read = ram_read;
    mtd->write = ram_write;

    printk("%s: add_mtd_device\n", __func__);
    if (add_mtd_device(mtd))
    {
        return -EIO;
    }

    return 0;
}


int __init init_mtdram(void)
{
    void *addr;
    int err;
    addr = RAMrootfs;
    total_size = RAMrootfs_sz;
    if (!total_size)
        return -EINVAL;
    printk("%s: \033[7msetup rootfs @ %x for %x\033[m\n", __func__, addr, total_size);
    /* Allocate some memory */
    mtd_info = (struct mtd_info *)kmalloc(sizeof(struct mtd_info), GFP_KERNEL);
    if (!mtd_info)
        return -ENOMEM;

    if (!addr)
    {
        kfree(mtd_info);
        mtd_info = NULL;
        return -ENOMEM;
    }
    err = mtdram_init_device(mtd_info, addr,total_size, "rootfs");
    if (err)
    {
        kfree(mtd_info);
        mtd_info = NULL;
        return err;
    }
    return err;
}

module_init(init_mtdram);
module_exit(cleanup_mtdram);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexander Larsson <alexl@redhat.com>");
MODULE_DESCRIPTION("Simulated MTD driver for rootfs");
