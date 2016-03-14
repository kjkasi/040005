/* mips-opc.c -- MIPS opcode list.
   Copyright 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002
   2003, 2004, 2005 Free Software Foundation, Inc.
   Contributed by Ralph Campbell and OSF
   Commented and modified by Ian Lance Taylor, Cygnus Support
   Extended for MIPS32 support by Anders Norlander, and by SiByte, Inc.
   MIPS-3D, MDMX, and MIPS32 Release 2 support added by Broadcom
   Corporation (SiByte).

This file is part of GDB, GAS, and the GNU binutils.

GDB, GAS, and the GNU binutils are free software; you can redistribute
them and/or modify them under the terms of the GNU General Public
License as published by the Free Software Foundation; either version
1, or (at your option) any later version.

GDB, GAS, and the GNU binutils are distributed in the hope that they
will be useful, but WITHOUT ANY WARRANTY; without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this file; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#include <stdio.h>
#include "sysdep.h"
#include "opcode/mips.h"

/* Short hand so the lines aren't too long.  */

#define LDD     INSN_LOAD_MEMORY_DELAY
#define LCD INSN_LOAD_COPROC_DELAY
#define UBD     INSN_UNCOND_BRANCH_DELAY
#define CBD INSN_COND_BRANCH_DELAY
#define COD     INSN_COPROC_MOVE_DELAY
#define CLD INSN_COPROC_MEMORY_DELAY
#define CBL INSN_COND_BRANCH_LIKELY
#define TRAP INSN_TRAP
#define SM INSN_STORE_MEMORY

#define WR_d    INSN_WRITE_GPR_D
#define WR_t    INSN_WRITE_GPR_T
#define WR_31   INSN_WRITE_GPR_31
#define WR_D    INSN_WRITE_FPR_D
#define WR_T INSN_WRITE_FPR_T
#define WR_S INSN_WRITE_FPR_S
#define RD_s    INSN_READ_GPR_S
#define RD_b    INSN_READ_GPR_S
#define RD_t    INSN_READ_GPR_T
#define RD_S    INSN_READ_FPR_S
#define RD_T    INSN_READ_FPR_T
#define RD_R INSN_READ_FPR_R
#define WR_CC INSN_WRITE_COND_CODE
#define RD_CC INSN_READ_COND_CODE
#define RD_C0   INSN_COP
#define RD_C1 INSN_COP
#define RD_C2   INSN_COP
#define RD_C3   INSN_COP
#define WR_C0   INSN_COP
#define WR_C1 INSN_COP
#define WR_C2   INSN_COP
#define WR_C3   INSN_COP

#define WR_HI INSN_WRITE_HI
#define RD_HI INSN_READ_HI
#define MOD_HI  WR_HI|RD_HI

#define WR_LO INSN_WRITE_LO
#define RD_LO INSN_READ_LO
#define MOD_LO  WR_LO|RD_LO

#define WR_HILO WR_HI|WR_LO
#define RD_HILO RD_HI|RD_LO
#define MOD_HILO WR_HILO|RD_HILO

#define IS_M    INSN_MULT

#define WR_MACC INSN2_WRITE_MDMX_ACC
#define RD_MACC INSN2_READ_MDMX_ACC

#define I1 INSN_ISA1
#define I2 INSN_ISA2
#define I3 INSN_ISA3
#define I4 INSN_ISA4
#define I5 INSN_ISA5
#define I32 INSN_ISA32
#define I64     INSN_ISA64
#define I33 INSN_ISA32R2
#define I65 INSN_ISA64R2

/* MIPS64 MIPS-3D ASE support.  */
#define I16     INSN_MIPS16

/* MIPS DSP ASE support.
   NOTE:
   1. MIPS DSP ASE includes 4 accumulators ($ac0 - $ac3).  $ac0 is the pair
   of original HI and LO.  $ac1, $ac2 and $ac3 are new registers, and have
   the same structure as $ac0 (HI + LO).  For DSP instructions that write or
   read accumulators (that may be $ac0), we add WR_a (WR_HILO) or RD_a
   (RD_HILO) attritubes, such that HILO dependences are maintained
   conservatively.

   2. For some mul. instructions that use integer registers as destinations
   but destroy HI+LO as side-effect, we add WR_HILO to their attritubes.

   3. MIPS DSP ASE includes a new DSP control register, which has 6 fields
   (ccond, outflag, EFI, c, scount, pos).  Many DSP instructions read or write
   certain fields of the DSP control register.  For simplicity, we decide not
   to track dependences of these fields.
   However, "bposge32" is a branch instruction that depends on the "pos"
   field.  In order to make sure that GAS does not reorder DSP instructions
   that writes the "pos" field and "bposge32", we add DSP_VOLA (INSN_TRAP)
   attritube to those instructions that write the "pos" field.  */

#define WR_a WR_HILO /* Write dsp accumulators (reuse WR_HILO)  */
#define RD_a RD_HILO /* Read dsp accumulators (reuse RD_HILO)  */
#define MOD_a WR_a|RD_a

/* 2006-01-19 tonywu: define RLXn to simplify opcode listing */
#define RLX0 INSN_ISA4180
#define RLX1 INSN_ISA5280
#define RLX2 INSN_ISA4181|INSN_ISA5181
#define RLX3 INSN_ISA4281|INSN_ISA5281

#define RLXA (RLX0|RLX1|RLX2|RLX3)
#define RLXB (RLX1|RLX2|RLX3)

#define RAD1 INSN_ISA5181|INSN_ISA5280|INSN_ISA5281
#define RAD2 INSN_ISA5281

/* The order of overloaded instructions matters.  Label arguments and
   register arguments look the same. Instructions that can have either
   for arguments must apear in the correct order in this table for the
   assembler to pick the right one. In other words, entries with
   immediate operands must apear after the same instruction with
   registers.

   Because of the lookup algorithm used, entries with the same opcode
   name must be contiguous.

   Many instructions are short hand for other instructions (i.e., The
   jal <register> instruction is short for jalr <register>).  */

const struct mips_opcode mips_builtin_opcodes[] = {
  /* These instructions appear first so that the disassembler will find
     them first.  The assemblers uses a hash table based on the
     instruction name anyhow.  */
  /* name,    args, match,     mask, pinfo,          pinfo2, membership */
  {"pref",        "k,o(b)",   0xcc000000, 0xfc000000, RD_b, 0, I4|I32},
  {"prefx",       "h,t(b)",   0x4c00000f, 0xfc0007ff, RD_b|RD_t, 0, I4},
  {"nop",         "",         0x00000000, 0xffffffff, 0, INSN2_ALIAS, I1}, /* sll */
  {"ssnop",       "",         0x00000040, 0xffffffff, 0, INSN2_ALIAS, I32|RLX3}, /* sll */
  {"ehb",         "",         0x000000c0, 0xffffffff, 0, INSN2_ALIAS, I33}, /* sll */
  {"li",          "t,j",      0x24000000, 0xffe00000, WR_t, INSN2_ALIAS, I1}, /* addiu */
  {"li",          "t,i",      0x34000000, 0xffe00000, WR_t, INSN2_ALIAS, I1}, /* ori */
  {"li",          "t,I",      0,          (int) M_LI, INSN_MACRO, 0, I1},
  {"move",        "d,s",      0,          (int) M_MOVE, INSN_MACRO, 0, I1},
  {"move",        "d,s",      0x0000002d, 0xfc1f07ff, WR_d|RD_s, INSN2_ALIAS, I3},/* daddu */
  {"move",        "d,s",      0x00000021, 0xfc1f07ff, WR_d|RD_s, INSN2_ALIAS, I1},/* addu */
  {"move",        "d,s",      0x00000025, 0xfc1f07ff, WR_d|RD_s, INSN2_ALIAS, I1},/* or */
  {"b",           "p",        0x10000000, 0xffff0000, UBD, INSN2_ALIAS, I1},/* beq 0,0 */
  {"b",           "p",        0x04010000, 0xffff0000, UBD, INSN2_ALIAS, I1},/* bgez 0 */
  {"bal",         "p",        0x04110000, 0xffff0000, UBD|WR_31, INSN2_ALIAS, I1},/* bgezal 0*/
  {"abs",         "d,v",      0,          (int) M_ABS, INSN_MACRO, 0, I1},
  {"abs.s",       "D,V",      0x46000005, 0xffff003f, WR_D|RD_S|FP_S, 0, I1},
  {"abs.d",       "D,V",      0x46200005, 0xffff003f, WR_D|RD_S|FP_D, 0, I1},
  {"abs.ps",      "D,V",      0x46c00005, 0xffff003f, WR_D|RD_S|FP_D, 0, I5},
  {"add",         "d,v,t",    0x00000020, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"add",         "t,r,I",    0,          (int) M_ADD_I, INSN_MACRO, 0, I1},
  {"add.s",       "D,V,T",    0x46000000, 0xffe0003f, WR_D|RD_S|RD_T|FP_S, 0, I1},
  {"add.d",       "D,V,T",    0x46200000, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I1},
  {"add.ps",      "D,V,T",    0x46c00000, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  {"addi",        "t,r,j",    0x20000000, 0xfc000000, WR_t|RD_s, 0, I1},
  {"addiu",       "t,r,j",    0x24000000, 0xfc000000, WR_t|RD_s, 0, I1},
  {"addu",        "d,v,t",    0x00000021, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"addu",        "t,r,I",    0,          (int) M_ADDU_I, INSN_MACRO, 0, I1},
  {"alnv.ps",     "D,V,T,s",  0x4c00001e, 0xfc00003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  {"and",         "d,v,t",    0x00000024, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"and",         "t,r,I",    0,          (int) M_AND_I, INSN_MACRO, 0, I1},
  {"andi",        "t,r,i",    0x30000000, 0xfc000000, WR_t|RD_s, 0, I1},
  /* b is at the top of the table.  */
  /* bal is at the top of the table.  */
  /* bc0[tf]l? are at the bottom of the table.  */
  {"bc1f",        "p",        0x45000000, 0xffff0000, CBD|RD_CC|FP_S, 0, I1},
  {"bc1f",        "N,p",      0x45000000, 0xffe30000, CBD|RD_CC|FP_S, 0, I4|I32},
  {"bc1fl",       "p",        0x45020000, 0xffff0000, CBL|RD_CC|FP_S, 0, I2},
  {"bc1fl",       "N,p",      0x45020000, 0xffe30000, CBL|RD_CC|FP_S, 0, I4|I32},
  {"bc1t",        "p",        0x45010000, 0xffff0000, CBD|RD_CC|FP_S, 0, I1},
  {"bc1t",        "N,p",      0x45010000, 0xffe30000, CBD|RD_CC|FP_S, 0, I4|I32},
  {"bc1tl",       "p",        0x45030000, 0xffff0000, CBL|RD_CC|FP_S, 0, I2},
  {"bc1tl",       "N,p",      0x45030000, 0xffe30000, CBL|RD_CC|FP_S, 0, I4|I32},
  {"bc2f",        "p",        0x49000000, 0xffff0000, CBD|RD_CC, 0, I1},
  {"bc2fl",       "p",        0x49020000, 0xffff0000, CBL|RD_CC, 0, I2},
  {"bc2t",        "p",        0x49010000, 0xffff0000, CBD|RD_CC, 0, I1},
  {"bc2tl",       "p",        0x49030000, 0xffff0000, CBL|RD_CC, 0, I2},
  {"bc3f",        "p",        0x4d000000, 0xffff0000, CBD|RD_CC, 0, I1},
  {"bc3fl",       "p",        0x4d020000, 0xffff0000, CBL|RD_CC, 0, I2},
  {"bc3t",        "p",        0x4d010000, 0xffff0000, CBD|RD_CC, 0, I1},
  {"bc3tl",       "p",        0x4d030000, 0xffff0000, CBL|RD_CC, 0, I2},
  {"beqz",        "s,p",      0x10000000, 0xfc1f0000, CBD|RD_s, 0, I1},
  {"beqzl",       "s,p",      0x50000000, 0xfc1f0000, CBL|RD_s, 0, I2},
  {"beq",         "s,t,p",    0x10000000, 0xfc000000, CBD|RD_s|RD_t, 0, I1},
  {"beq",         "s,I,p",    0,          (int) M_BEQ_I, INSN_MACRO, 0, I1},
  {"beql",        "s,t,p",    0x50000000, 0xfc000000, CBL|RD_s|RD_t, 0, I2},
  {"beql",        "s,I,p",    0,          (int) M_BEQL_I, INSN_MACRO, 0, I2},
  {"bge",         "s,t,p",    0,          (int) M_BGE, INSN_MACRO, 0, I1},
  {"bge",         "s,I,p",    0,          (int) M_BGE_I, INSN_MACRO, 0, I1},
  {"bgel",        "s,t,p",    0,          (int) M_BGEL, INSN_MACRO, 0, I2},
  {"bgel",        "s,I,p",    0,          (int) M_BGEL_I, INSN_MACRO, 0, I2},
  {"bgeu",        "s,t,p",    0,          (int) M_BGEU, INSN_MACRO, 0, I1},
  {"bgeu",        "s,I,p",    0,          (int) M_BGEU_I, INSN_MACRO, 0, I1},
  {"bgeul",       "s,t,p",    0,          (int) M_BGEUL, INSN_MACRO, 0, I2},
  {"bgeul",       "s,I,p",    0,          (int) M_BGEUL_I, INSN_MACRO, 0, I2},
  {"bgez",        "s,p",      0x04010000, 0xfc1f0000, CBD|RD_s, 0, I1},
  {"bgezl",       "s,p",      0x04030000, 0xfc1f0000, CBL|RD_s, 0, I2},
  {"bgezal",      "s,p",      0x04110000, 0xfc1f0000, CBD|RD_s|WR_31, 0, I1},
  {"bgezall",     "s,p",      0x04130000, 0xfc1f0000, CBL|RD_s|WR_31, 0, I2},
  {"bgt",         "s,t,p",    0,          (int) M_BGT, INSN_MACRO, 0, I1},
  {"bgt",         "s,I,p",    0,          (int) M_BGT_I, INSN_MACRO, 0, I1},
  {"bgtl",        "s,t,p",    0,          (int) M_BGTL, INSN_MACRO, 0, I2},
  {"bgtl",        "s,I,p",    0,          (int) M_BGTL_I, INSN_MACRO, 0, I2},
  {"bgtu",        "s,t,p",    0,          (int) M_BGTU, INSN_MACRO, 0, I1},
  {"bgtu",        "s,I,p",    0,          (int) M_BGTU_I, INSN_MACRO, 0, I1},
  {"bgtul",       "s,t,p",    0,          (int) M_BGTUL, INSN_MACRO, 0, I2},
  {"bgtul",       "s,I,p",    0,          (int) M_BGTUL_I, INSN_MACRO, 0, I2},
  {"bgtz",        "s,p",      0x1c000000, 0xfc1f0000, CBD|RD_s, 0, I1},
  {"bgtzl",       "s,p",      0x5c000000, 0xfc1f0000, CBL|RD_s, 0, I2},
  {"ble",         "s,t,p",    0,          (int) M_BLE, INSN_MACRO, 0, I1},
  {"ble",         "s,I,p",    0,          (int) M_BLE_I, INSN_MACRO, 0, I1},
  {"blel",        "s,t,p",    0,          (int) M_BLEL, INSN_MACRO, 0, I2},
  {"blel",        "s,I,p",    0,          (int) M_BLEL_I, INSN_MACRO, 0, I2},
  {"bleu",        "s,t,p",    0,          (int) M_BLEU, INSN_MACRO, 0, I1},
  {"bleu",        "s,I,p",    0,          (int) M_BLEU_I, INSN_MACRO, 0, I1},
  {"bleul",       "s,t,p",    0,          (int) M_BLEUL, INSN_MACRO, 0, I2},
  {"bleul",       "s,I,p",    0,          (int) M_BLEUL_I, INSN_MACRO, 0, I2},
  {"blez",        "s,p",      0x18000000, 0xfc1f0000, CBD|RD_s, 0, I1},
  {"blezl",       "s,p",      0x58000000, 0xfc1f0000, CBL|RD_s, 0, I2},
  {"blt",         "s,t,p",    0,          (int) M_BLT, INSN_MACRO, 0, I1},
  {"blt",         "s,I,p",    0,          (int) M_BLT_I, INSN_MACRO, 0, I1},
  {"bltl",        "s,t,p",    0,          (int) M_BLTL, INSN_MACRO, 0, I2},
  {"bltl",        "s,I,p",    0,          (int) M_BLTL_I, INSN_MACRO, 0, I2},
  {"bltu",        "s,t,p",    0,          (int) M_BLTU, INSN_MACRO, 0, I1},
  {"bltu",        "s,I,p",    0,          (int) M_BLTU_I, INSN_MACRO, 0, I1},
  {"bltul",       "s,t,p",    0,          (int) M_BLTUL, INSN_MACRO, 0, I2},
  {"bltul",       "s,I,p",    0,          (int) M_BLTUL_I, INSN_MACRO, 0, I2},
  {"bltz",        "s,p",      0x04000000, 0xfc1f0000, CBD|RD_s, 0, I1},
  {"bltzl",       "s,p",      0x04020000, 0xfc1f0000, CBL|RD_s, 0, I2},
  {"bltzal",      "s,p",      0x04100000, 0xfc1f0000, CBD|RD_s|WR_31, 0, I1},
  {"bltzall",     "s,p",      0x04120000, 0xfc1f0000, CBL|RD_s|WR_31, 0, I2},
  {"bnez",        "s,p",      0x14000000, 0xfc1f0000, CBD|RD_s, 0, I1},
  {"bnezl",       "s,p",      0x54000000, 0xfc1f0000, CBL|RD_s, 0, I2},
  {"bne",         "s,t,p",    0x14000000, 0xfc000000, CBD|RD_s|RD_t, 0, I1},
  {"bne",         "s,I,p",    0,          (int) M_BNE_I, INSN_MACRO, 0, I1},
  {"bnel",        "s,t,p",    0x54000000, 0xfc000000, CBL|RD_s|RD_t, 0, I2},
  {"bnel",        "s,I,p",    0,          (int) M_BNEL_I, INSN_MACRO, 0, I2},
  {"break",       "",         0x0000000d, 0xffffffff, TRAP, 0, I1},
  {"break",       "c",        0x0000000d, 0xfc00ffff, TRAP, 0, I1},
  {"break",       "c,q",      0x0000000d, 0xfc00003f, TRAP, 0, I1},
  {"c.f.d",       "S,T",      0x46200030, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.f.d",       "M,S,T",    0x46200030, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.f.s",       "S,T",      0x46000030, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.f.s",       "M,S,T",    0x46000030, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.f.ps",      "S,T",      0x46c00030, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.f.ps",      "M,S,T",    0x46c00030, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.un.d",      "S,T",      0x46200031, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.un.d",      "M,S,T",    0x46200031, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.un.s",      "S,T",      0x46000031, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.un.s",      "M,S,T",    0x46000031, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.un.ps",     "S,T",      0x46c00031, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.un.ps",     "M,S,T",    0x46c00031, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.eq.d",      "S,T",      0x46200032, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.eq.d",      "M,S,T",    0x46200032, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.eq.s",      "S,T",      0x46000032, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.eq.s",      "M,S,T",    0x46000032, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.eq.ps",     "S,T",      0x46c00032, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.eq.ps",     "M,S,T",    0x46c00032, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ueq.d",     "S,T",      0x46200033, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ueq.d",     "M,S,T",    0x46200033, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ueq.s",     "S,T",      0x46000033, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ueq.s",     "M,S,T",    0x46000033, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.ueq.ps",    "S,T",      0x46c00033, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ueq.ps",    "M,S,T",    0x46c00033, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.olt.d",     "S,T",      0x46200034, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.olt.d",     "M,S,T",    0x46200034, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.olt.s",     "S,T",      0x46000034, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.olt.s",     "M,S,T",    0x46000034, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.olt.ps",    "S,T",      0x46c00034, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.olt.ps",    "M,S,T",    0x46c00034, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ult.d",     "S,T",      0x46200035, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ult.d",     "M,S,T",    0x46200035, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ult.s",     "S,T",      0x46000035, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ult.s",     "M,S,T",    0x46000035, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.ult.ps",    "S,T",      0x46c00035, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ult.ps",    "M,S,T",    0x46c00035, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ole.d",     "S,T",      0x46200036, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ole.d",     "M,S,T",    0x46200036, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ole.s",     "S,T",      0x46000036, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ole.ps",    "S,T",      0x46c00036, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ole.ps",    "M,S,T",    0x46c00036, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ule.d",     "S,T",      0x46200037, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ule.d",     "M,S,T",    0x46200037, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ule.s",     "S,T",      0x46000037, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ule.s",     "M,S,T",    0x46000037, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.ule.ps",    "S,T",      0x46c00037, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ule.ps",    "M,S,T",    0x46c00037, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.sf.d",      "S,T",      0x46200038, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.sf.d",      "M,S,T",    0x46200038, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.sf.s",      "S,T",      0x46000038, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.sf.s",      "M,S,T",    0x46000038, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.sf.ps",     "S,T",      0x46c00038, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.sf.ps",     "M,S,T",    0x46c00038, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ngle.d",    "S,T",      0x46200039, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ngle.d",    "M,S,T",    0x46200039, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ngle.s",    "S,T",      0x46000039, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ngle.s",    "M,S,T",    0x46000039, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.ngle.ps",   "S,T",      0x46c00039, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ngle.ps",   "M,S,T",    0x46c00039, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.seq.d",     "S,T",      0x4620003a, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.seq.d",     "M,S,T",    0x4620003a, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.seq.s",     "S,T",      0x4600003a, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.seq.s",     "M,S,T",    0x4600003a, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.seq.ps",    "S,T",      0x46c0003a, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.seq.ps",    "M,S,T",    0x46c0003a, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ngl.d",     "S,T",      0x4620003b, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ngl.d",     "M,S,T",    0x4620003b, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ngl.s",     "S,T",      0x4600003b, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ngl.s",     "M,S,T",    0x4600003b, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.ngl.ps",    "S,T",      0x46c0003b, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ngl.ps",    "M,S,T",    0x46c0003b, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.lt.d",      "S,T",      0x4620003c, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.lt.d",      "M,S,T",    0x4620003c, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.lt.s",      "S,T",      0x4600003c, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.lt.s",      "M,S,T",    0x4600003c, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.lt.ps",     "S,T",      0x46c0003c, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.lt.ps",     "M,S,T",    0x46c0003c, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.nge.d",     "S,T",      0x4620003d, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.nge.d",     "M,S,T",    0x4620003d, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.nge.s",     "S,T",      0x4600003d, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.nge.s",     "M,S,T",    0x4600003d, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.nge.ps",    "S,T",      0x46c0003d, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.nge.ps",    "M,S,T",    0x46c0003d, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.le.d",      "S,T",      0x4620003e, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.le.d",      "M,S,T",    0x4620003e, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.le.s",      "S,T",      0x4600003e, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.le.s",      "M,S,T",    0x4600003e, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.le.ps",     "S,T",      0x46c0003e, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.le.ps",     "M,S,T",    0x46c0003e, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ngt.d",     "S,T",      0x4620003f, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I1},
  {"c.ngt.d",     "M,S,T",    0x4620003f, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I4|I32},
  {"c.ngt.s",     "S,T",      0x4600003f, 0xffe007ff, RD_S|RD_T|WR_CC|FP_S, 0, I1},
  {"c.ngt.s",     "M,S,T",    0x4600003f, 0xffe000ff, RD_S|RD_T|WR_CC|FP_S, 0, I4|I32},
  {"c.ngt.ps",    "S,T",      0x46c0003f, 0xffe007ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"c.ngt.ps",    "M,S,T",    0x46c0003f, 0xffe000ff, RD_S|RD_T|WR_CC|FP_D, 0, I5},
  {"cache",       "k,o(b)",   0xbc000000, 0xfc000000, RD_b,                 0, I3|I32|RLXB},
  {"cache",       "k,A(b)",   0,          (int) M_CACHE_AB, INSN_MACRO,     0, I3|I32},
  {"ceil.l.d",    "D,S",      0x4620000a, 0xffff003f, WR_D|RD_S|FP_D,       0, I3},
  {"ceil.l.s",    "D,S",      0x4600000a, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I3},
  {"ceil.w.d",    "D,S",      0x4620000e, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I2},
  {"ceil.w.s",    "D,S",      0x4600000e, 0xffff003f, WR_D|RD_S|FP_S,       0, I2},
  {"cfc0",        "t,G",      0x40400000, 0xffe007ff, LCD|WR_t|RD_C0,       0, I1},
  {"cfc0",        "t,G,#H",   0x40400000, 0xffe007c0, LCD|WR_t|RD_C0,       0, RLX3},
  {"cfc1",        "t,G",      0x44400000, 0xffe007ff, LCD|WR_t|RD_C1|FP_S,  0, I1},
  {"cfc1",        "t,G,#H",   0x44400000, 0xffe007c0, LCD|WR_t|RD_C1|FP_S,  0, RLX3},
  {"cfc1",        "t,S",      0x44400000, 0xffe007ff, LCD|WR_t|RD_C1|FP_S,  0, I1},
  {"cfc2",        "t,G",      0x48400000, 0xffe007ff, LCD|WR_t|RD_C2,       0, I1},
  {"cfc2",        "t,G,#H",   0x48400000, 0xffe007c0, LCD|WR_t|RD_C2,       0, RLX3},
  {"cfc3",        "t,G",      0x4c400000, 0xffe007ff, LCD|WR_t|RD_C3,       0, I1},
  {"cfc3",        "t,G,#H",   0x4c400000, 0xffe007c0, LCD|WR_t|RD_C3,       0, RLX3},
  {"clo",         "U,s",      0x70000021, 0xfc0007ff, WR_d|WR_t|RD_s,       0, I32},
  {"clz",         "U,s",      0x70000020, 0xfc0007ff, WR_d|WR_t|RD_s,       0, I32},
  {"ctc0",        "t,G,#H",   0x40c00000, 0xffe007c0, COD|RD_t|WR_CC,       0, RLX3},
  {"ctc0",        "t,G",      0x40c00000, 0xffe007ff, COD|RD_t|WR_CC,       0, I1},
  {"ctc1",        "t,G",      0x44c00000, 0xffe007ff, COD|RD_t|WR_CC|FP_S,  0, I1},
  {"ctc1",        "t,G,#H",   0x44c00000, 0xffe007c0, COD|RD_t|WR_CC|FP_S,  0, RLX3},
  {"ctc1",        "t,S",      0x44c00000, 0xffe007ff, COD|RD_t|WR_CC|FP_S,  0, I1},
  {"ctc2",        "t,G",      0x48c00000, 0xffe007ff, COD|RD_t|WR_CC,       0, I1},
  {"ctc2",        "t,G,#H",   0x48c00000, 0xffe007c0, COD|RD_t|WR_CC,       0, RLX3},
  {"ctc3",        "t,G",      0x4cc00000, 0xffe007ff, COD|RD_t|WR_CC,       0, I1},
  {"ctc3",        "t,G,#H",   0x4cc00000, 0xffe007c0, COD|RD_t|WR_CC,       0, RLX3},
  {"cvt.d.l",     "D,S",      0x46a00021, 0xffff003f, WR_D|RD_S|FP_D,       0, I3},
  {"cvt.d.s",     "D,S",      0x46000021, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I1},
  {"cvt.d.w",     "D,S",      0x46800021, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I1},
  {"cvt.l.d",     "D,S",      0x46200025, 0xffff003f, WR_D|RD_S|FP_D,       0, I3},
  {"cvt.l.s",     "D,S",      0x46000025, 0xffff003f, WR_D|RD_S|FP_S|FP_S,  0, I3},
  {"cvt.s.l",     "D,S",      0x46a00020, 0xffff003f, WR_D|RD_S|FP_S|FP_S,  0, I3},
  {"cvt.s.d",     "D,S",      0x46200020, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I1},
  {"cvt.s.w",     "D,S",      0x46800020, 0xffff003f, WR_D|RD_S|FP_S,       0, I1},
  {"cvt.s.pl",    "D,S",      0x46c00028, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I5},
  {"cvt.s.pu",    "D,S",      0x46c00020, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I5},
  {"cvt.w.d",     "D,S",      0x46200024, 0xffff003f, WR_D|RD_S|FP_S|FP_D,  0, I1},
  {"cvt.w.s",     "D,S",      0x46000024, 0xffff003f, WR_D|RD_S|FP_S,       0, I1},
  {"cvt.ps.s",    "D,V,T",    0x46000026, 0xffe0003f, WR_D|RD_S|RD_T|FP_S|FP_D, 0, I5},
  {"dabs",        "d,v",      0,          (int) M_DABS, INSN_MACRO,         0, I3},
  {"dadd",        "d,v,t",    0x0000002c, 0xfc0007ff, WR_d|RD_s|RD_t,       0, I3},
  {"dadd",        "t,r,I",    0,          (int) M_DADD_I, INSN_MACRO,       0, I3},
  {"daddi",       "t,r,j",    0x60000000, 0xfc000000, WR_t|RD_s,            0, I3},
  {"daddiu",      "t,r,j",    0x64000000, 0xfc000000, WR_t|RD_s,            0, I3},
  {"daddu",       "d,v,t",    0x0000002d, 0xfc0007ff, WR_d|RD_s|RD_t,       0, I3},
  {"daddu",       "t,r,I",    0,          (int) M_DADDU_I, INSN_MACRO,      0, I3},
  {"dclo",        "U,s",      0x70000025, 0xfc0007ff, RD_s|WR_d|WR_t,       0, I64},
  {"dclz",        "U,s",      0x70000024, 0xfc0007ff, RD_s|WR_d|WR_t,       0, I64},
  /* dctr and dctw are used on the r5000.  */
  {"dctr",        "o(b)",     0xbc050000, 0xfc1f0000, RD_b,         0, I3},
  {"dctw",        "o(b)",     0xbc090000, 0xfc1f0000, RD_b,         0, I3},
  {"deret",       "",         0x4200001f, 0xffffffff, 0,            0, I32|RLXA},
  {"dext",        "t,r,I,+I", 0,          (int) M_DEXT, INSN_MACRO, 0, I65},
  {"dext",        "t,r,+A,+C",0x7c000003, 0xfc00003f, WR_t|RD_s,    0, I65},
  {"dextm",       "t,r,+A,+G",0x7c000001, 0xfc00003f, WR_t|RD_s,    0, I65},
  {"dextu",       "t,r,+E,+H",0x7c000002, 0xfc00003f, WR_t|RD_s,    0, I65},
  /* For ddiv, see the comments about div.  */
  {"ddiv",        "z,s,t",    0x0000001e, 0xfc00ffff, RD_s|RD_t|WR_HILO, 0, I3},
  {"ddiv",        "d,v,t",    0,          (int) M_DDIV_3, INSN_MACRO,    0, I3},
  {"ddiv",        "d,v,I",    0,          (int) M_DDIV_3I, INSN_MACRO,   0, I3},
  /* For ddivu, see the comments about div.  */
  {"ddivu",       "z,s,t",    0x0000001f, 0xfc00ffff, RD_s|RD_t|WR_HILO, 0, I3},
  {"ddivu",       "d,v,t",    0,          (int) M_DDIVU_3, INSN_MACRO,   0, I3},
  {"ddivu",       "d,v,I",    0,          (int) M_DDIVU_3I, INSN_MACRO,  0, I3},
  {"di",          "",         0x41606000, 0xffffffff, WR_t|WR_C0,        0, I33},
  {"di",          "t",        0x41606000, 0xffe0ffff, WR_t|WR_C0,        0, I33},
  {"dins",        "t,r,I,+I", 0,          (int) M_DINS, INSN_MACRO,      0, I65},
  {"dins",        "t,r,+A,+B", 0x7c000007, 0xfc00003f, WR_t|RD_s,        0, I65},
  {"dinsm",       "t,r,+A,+F", 0x7c000005, 0xfc00003f, WR_t|RD_s,        0, I65},
  {"dinsu",       "t,r,+E,+F", 0x7c000006, 0xfc00003f, WR_t|RD_s,        0, I65},
  /* The MIPS assembler treats the div opcode with two operands as
     though the first operand appeared twice (the first operand is both
     a source and a destination).  To get the div machine instruction,
     you must use an explicit destination of $0.  */
  {"div",         "z,s,t",    0x0000001a, 0xfc00ffff, RD_s|RD_t|WR_HILO,    0, I1},
  {"div",         "z,t",      0x0000001a, 0xffe0ffff, RD_s|RD_t|WR_HILO,    0, I1},
  {"div",         "d,v,t",    0,          (int) M_DIV_3, INSN_MACRO,        0, I1},
  {"div",         "d,v,I",    0,          (int) M_DIV_3I, INSN_MACRO,       0, I1},
  {"div.d",       "D,V,T",    0x46200003, 0xffe0003f, WR_D|RD_S|RD_T|FP_D,  0, I1},
  {"div.s",       "D,V,T",    0x46000003, 0xffe0003f, WR_D|RD_S|RD_T|FP_S,  0, I1},
  /* For divu, see the comments about div.  */                              
  {"divu",        "z,s,t",    0x0000001b, 0xfc00ffff, RD_s|RD_t|WR_HILO,    0, I1},
  {"divu",        "z,t",      0x0000001b, 0xffe0ffff, RD_s|RD_t|WR_HILO,    0, I1},
  {"divu",        "d,v,t",    0,          (int) M_DIVU_3, INSN_MACRO,       0, I1},
  {"divu",        "d,v,I",    0,          (int) M_DIVU_3I, INSN_MACRO,      0, I1},
  {"dla",         "t,A(b)",   0,          (int) M_DLA_AB, INSN_MACRO,       0, I3},
  {"dlca",        "t,A(b)",   0,          (int) M_DLCA_AB, INSN_MACRO,      0, I3},
  {"dli",         "t,j",      0x24000000, 0xffe00000, WR_t,                 0, I3}, /* addiu */
  {"dli",         "t,i",      0x34000000, 0xffe00000, WR_t,                 0, I3}, /* ori */
  {"dli",         "t,I",      0,          (int) M_DLI, INSN_MACRO,          0, I3},
  {"dmfc0",       "t,G",      0x40200000, 0xffe007ff, LCD|WR_t|RD_C0,       0, I3},
  {"dmfc0",       "t,+D",     0x40200000, 0xffe007f8, LCD|WR_t|RD_C0,       0, I64},
  {"dmfc0",       "t,G,H",    0x40200000, 0xffe007f8, LCD|WR_t|RD_C0,       0, I64},
  {"dmtc0",       "t,G",      0x40a00000, 0xffe007ff, COD|RD_t|WR_C0|WR_CC, 0, I3},
  {"dmtc0",       "t,+D",     0x40a00000, 0xffe007f8, COD|RD_t|WR_C0|WR_CC, 0, I64},
  {"dmtc0",       "t,G,H",    0x40a00000, 0xffe007f8, COD|RD_t|WR_C0|WR_CC, 0, I64},
  {"dmfc1",       "t,S",      0x44200000, 0xffe007ff, LCD|WR_t|RD_S|FP_D,   0, I3},
  {"dmfc1",       "t,G",      0x44200000, 0xffe007ff, LCD|WR_t|RD_S|FP_D,   0, I3},
  {"dmtc1",       "t,S",      0x44a00000, 0xffe007ff, COD|RD_t|WR_S|FP_D,   0, I3},
  {"dmtc1",       "t,G",      0x44a00000, 0xffe007ff, COD|RD_t|WR_S|FP_D,   0, I3},
  {"dmfc2",       "t,G",      0x48200000, 0xffe007ff, LCD|WR_t|RD_C2,       0, I3},
  {"dmfc2",       "t,G,H",    0x48200000, 0xffe007f8, LCD|WR_t|RD_C2,       0, I64},
  {"dmtc2",       "t,G",      0x48a00000, 0xffe007ff, COD|RD_t|WR_C2|WR_CC, 0, I3},
  {"dmtc2",       "t,G,H",    0x48a00000, 0xffe007f8, COD|RD_t|WR_C2|WR_CC, 0, I64},
  {"dmfc3",       "t,G",      0x4c200000, 0xffe007ff, LCD|WR_t|RD_C3,       0, I3},
  {"dmfc3",       "t,G,H",    0x4c200000, 0xffe007f8, LCD|WR_t|RD_C3,       0, I64},
  {"dmtc3",       "t,G",      0x4ca00000, 0xffe007ff, COD|RD_t|WR_C3|WR_CC, 0, I3},
  {"dmtc3",       "t,G,H",    0x4ca00000, 0xffe007f8, COD|RD_t|WR_C3|WR_CC, 0, I64},
  {"dmul",        "d,v,t",    0,          (int) M_DMUL, INSN_MACRO,         0, I3},
  {"dmul",        "d,v,I",    0,          (int) M_DMUL_I, INSN_MACRO,       0, I3},
  {"dmulo",       "d,v,t",    0,          (int) M_DMULO, INSN_MACRO,        0, I3},
  {"dmulo",       "d,v,I",    0,          (int) M_DMULO_I, INSN_MACRO,      0, I3},
  {"dmulou",      "d,v,t",    0,          (int) M_DMULOU, INSN_MACRO,       0, I3},
  {"dmulou",      "d,v,I",    0,          (int) M_DMULOU_I, INSN_MACRO,     0, I3},
  {"dmult",       "s,t",      0x0000001c, 0xfc00ffff, RD_s|RD_t|WR_HILO,    0, I3},
  {"dmultu",      "s,t",      0x0000001d, 0xfc00ffff, RD_s|RD_t|WR_HILO,    0, I3},
  {"dneg",        "d,w",      0x0000002e, 0xffe007ff, WR_d|RD_t, 0, I3}, /* dsub 0 */
  {"dnegu",       "d,w",      0x0000002f, 0xffe007ff, WR_d|RD_t, 0, I3}, /* dsubu 0*/
  {"drem",        "z,s,t",    0x0000001e, 0xfc00ffff, RD_s|RD_t|WR_HILO,    0, I3},
  {"drem",        "d,v,t",    3,          (int) M_DREM_3, INSN_MACRO, 0, I3},
  {"drem",        "d,v,I",    3,          (int) M_DREM_3I, INSN_MACRO, 0, I3},
  {"dremu",       "z,s,t",    0x0000001f, 0xfc00ffff, RD_s|RD_t|WR_HILO,      0, I3},
  {"dremu",       "d,v,t",    3,          (int) M_DREMU_3, INSN_MACRO, 0, I3},
  {"dremu",       "d,v,I",    3,          (int) M_DREMU_3I, INSN_MACRO, 0, I3},
  {"drol",        "d,v,t",    0,          (int) M_DROL, INSN_MACRO,     0, I3},
  {"drol",        "d,v,I",    0,          (int) M_DROL_I, INSN_MACRO, 0, I3},
  {"dror",        "d,v,t",    0,          (int) M_DROR, INSN_MACRO,     0, I3},
  {"dror",        "d,v,I",    0,          (int) M_DROR_I, INSN_MACRO, 0, I3},
  {"dror",        "d,w,<",    0x0020003a, 0xffe0003f, WR_d|RD_t, 0, I65},
  {"drorv",       "d,t,s",    0x00000056, 0xfc0007ff, RD_t|RD_s|WR_d, 0, I65},
  {"dror32",      "d,w,<",    0x0020003e, 0xffe0003f, WR_d|RD_t, 0, I65},
  {"drotl",       "d,v,t",    0,          (int) M_DROL, INSN_MACRO,     0, I65},
  {"drotl",       "d,v,I",    0,          (int) M_DROL_I, INSN_MACRO, 0, I65},
  {"drotr",       "d,v,t",    0,          (int) M_DROR, INSN_MACRO,     0, I65},
  {"drotr",       "d,v,I",    0,          (int) M_DROR_I, INSN_MACRO, 0, I65},
  {"drotrv",      "d,t,s",    0x00000056, 0xfc0007ff, RD_t|RD_s|WR_d, 0, I65},
  {"drotr32",     "d,w,<",    0x0020003e, 0xffe0003f, WR_d|RD_t, 0, I65},
  {"dsbh",        "d,w",      0x7c0000a4, 0xffe007ff, WR_d|RD_t, 0, I65},
  {"dshd",        "d,w",      0x7c000164, 0xffe007ff, WR_d|RD_t, 0, I65},
  {"dsllv",       "d,t,s",    0x00000014, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I3},
  {"dsll32",      "d,w,<",    0x0000003c, 0xffe0003f, WR_d|RD_t, 0, I3},
  {"dsll",        "d,w,s",    0x00000014, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I3}, /* dsllv */
  {"dsll",        "d,w,>",    0x0000003c, 0xffe0003f, WR_d|RD_t, 0, I3}, /* dsll32 */
  {"dsll",        "d,w,<",    0x00000038, 0xffe0003f, WR_d|RD_t, 0, I3},
  {"dsrav",       "d,t,s",    0x00000017, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I3},
  {"dsra32",      "d,w,<",    0x0000003f, 0xffe0003f, WR_d|RD_t, 0, I3},
  {"dsra",        "d,w,s",    0x00000017, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I3}, /* dsrav */
  {"dsra",        "d,w,>",    0x0000003f, 0xffe0003f, WR_d|RD_t, 0, I3}, /* dsra32 */
  {"dsra",        "d,w,<",    0x0000003b, 0xffe0003f, WR_d|RD_t, 0, I3},
  {"dsrlv",       "d,t,s",    0x00000016, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I3},
  {"dsrl32",      "d,w,<",    0x0000003e, 0xffe0003f, WR_d|RD_t, 0, I3},
  {"dsrl",        "d,w,s",    0x00000016, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I3}, /* dsrlv */
  {"dsrl",        "d,w,>",    0x0000003e, 0xffe0003f, WR_d|RD_t, 0, I3}, /* dsrl32 */
  {"dsrl",        "d,w,<",    0x0000003a, 0xffe0003f, WR_d|RD_t, 0, I3},
  {"dsub",        "d,v,t",    0x0000002e, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I3},
  {"dsub",        "d,v,I",    0,          (int) M_DSUB_I, INSN_MACRO, 0, I3},
  {"dsubu",       "d,v,t",    0x0000002f, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I3},
  {"dsubu",       "d,v,I",    0,          (int) M_DSUBU_I, INSN_MACRO, 0, I3},
  {"ei",          "",         0x41606020, 0xffffffff, WR_t|WR_C0, 0, I33},
  {"ei",          "t",        0x41606020, 0xffe0ffff, WR_t|WR_C0, 0, I33},
  {"eret",        "",         0x42000018, 0xffffffff, 0,      0, I3|I32},
  {"ext",         "t,r,+A,+C",0x7c000000, 0xfc00003f, WR_t|RD_s,    0, I33},
  {"floor.l.d",   "D,S",      0x4620000b, 0xffff003f, WR_D|RD_S|FP_D, 0, I3},
  {"floor.l.s",   "D,S",      0x4600000b, 0xffff003f, WR_D|RD_S|FP_S|FP_S, 0, I3},
  {"floor.w.d",   "D,S",      0x4620000f, 0xffff003f, WR_D|RD_S|FP_S|FP_D, 0, I2},
  {"floor.w.s",   "D,S",      0x4600000f, 0xffff003f, WR_D|RD_S|FP_S, 0, I2},
  {"ins",         "t,r,+A,+B",0x7c000004, 0xfc00003f, WR_t|RD_s,    0, I33},
  {"jr",          "s",        0x00000008, 0xfc1fffff, UBD|RD_s, 0, I1},
  {"jr.hb",       "s",        0x00000408, 0xfc1fffff, UBD|RD_s, 0, I33},
  {"j",           "s",        0x00000008, 0xfc1fffff, UBD|RD_s, 0, I1}, /* jr */
  /* SVR4 PIC code requires special handling for j, so it must be a
     macro.  */
  {"j",           "a",        0,          (int) M_J_A, INSN_MACRO, 0, I1},
  /* This form of j is used by the disassembler and internally by the
     assembler, but will never match user input (because the line above
     will match first).  */
  {"j",           "a",        0x08000000, 0xfc000000, UBD, 0, I1},
  {"jalr",        "s",        0x0000f809, 0xfc1fffff, UBD|RD_s|WR_d, 0, I1},
  {"jalr",        "d,s",      0x00000009, 0xfc1f07ff, UBD|RD_s|WR_d, 0, I1},
  {"jalr.hb",     "s",        0x0000fc09, 0xfc1fffff, UBD|RD_s|WR_d, 0, I33},
  {"jalr.hb",     "d,s",      0x00000409, 0xfc1f07ff, UBD|RD_s|WR_d, 0, I33},
  /* SVR4 PIC code requires special handling for jal, so it must be a
     macro.  */
  {"jal",         "d,s",      0,          (int) M_JAL_2, INSN_MACRO, 0, I1},
  {"jal",         "s",        0,          (int) M_JAL_1, INSN_MACRO, 0, I1},
  {"jal",         "a",        0,          (int) M_JAL_A, INSN_MACRO, 0, I1},
  /* This form of jal is used by the disassembler and internally by the
     assembler, but will never match user input (because the line above
     will match first).  */
  {"jal",         "a",        0x0c000000, 0xfc000000, UBD|WR_31, 0, I1},
  {"jalx",        "a",        0x74000000, 0xfc000000, UBD|WR_31, 0, I16|I1},
  {"la",          "t,A(b)",   0,    (int) M_LA_AB, INSN_MACRO, 0, I1},
  {"lb",          "t,o(b)",   0x80000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lb",          "t,A(b)",   0,    (int) M_LB_AB, INSN_MACRO, 0, I1},
  {"lbu",         "t,o(b)",   0x90000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lbu",         "t,A(b)",   0,    (int) M_LBU_AB, INSN_MACRO, 0, I1},
  {"lca",         "t,A(b)",   0,    (int) M_LCA_AB, INSN_MACRO, 0, I1},
  {"ld",          "t,o(b)",   0xdc000000, 0xfc000000, WR_t|RD_b, 0, I3},
  {"ld",          "t,o(b)",   0,    (int) M_LD_OB, INSN_MACRO, 0, I1},
  {"ld",          "t,A(b)",   0,    (int) M_LD_AB, INSN_MACRO, 0, I1},
  {"ldc1",        "T,o(b)",   0xd4000000, 0xfc000000, CLD|RD_b|WR_T|FP_D, 0, I2},
  {"ldc1",        "E,o(b)",   0xd4000000, 0xfc000000, CLD|RD_b|WR_T|FP_D, 0, I2},
  {"ldc1",        "T,A(b)",   0,    (int) M_LDC1_AB, INSN_MACRO, 0, I2},
  {"ldc1",        "E,A(b)",   0,    (int) M_LDC1_AB, INSN_MACRO, 0, I2},
  {"l.d",         "T,o(b)",   0xd4000000, 0xfc000000, CLD|RD_b|WR_T|FP_D, 0, I2}, /* ldc1 */
  {"l.d",         "T,o(b)",   0,    (int) M_L_DOB, INSN_MACRO, 0, I1},
  {"l.d",         "T,A(b)",   0,    (int) M_L_DAB, INSN_MACRO, 0, I1},
  {"ldc2",        "E,o(b)",   0xd8000000, 0xfc000000, CLD|RD_b|WR_CC, 0, I2},
  {"ldc2",        "E,A(b)",   0,    (int) M_LDC2_AB, INSN_MACRO, 0, I2},
  {"ldc3",        "E,o(b)",   0xdc000000, 0xfc000000, CLD|RD_b|WR_CC, 0, I2},
  {"ldc3",        "E,A(b)",   0,    (int) M_LDC3_AB, INSN_MACRO, 0, I2},
  {"ldl",         "t,o(b)",   0x68000000, 0xfc000000, LDD|WR_t|RD_b, 0, I3},
  {"ldl",         "t,A(b)",   0,    (int) M_LDL_AB, INSN_MACRO, 0, I3},
  {"ldr",         "t,o(b)",   0x6c000000, 0xfc000000, LDD|WR_t|RD_b, 0, I3},
  {"ldr",         "t,A(b)",   0,    (int) M_LDR_AB, INSN_MACRO, 0, I3},
  {"ldxc1",       "D,t(b)",   0x4c000001, 0xfc00f83f, LDD|WR_D|RD_t|RD_b|FP_D, 0, I4},
  {"lh",          "t,o(b)",   0x84000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lh",          "t,A(b)",   0,    (int) M_LH_AB, INSN_MACRO, 0, I1},
  {"lhu",         "t,o(b)",   0x94000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lhu",         "t,A(b)",   0,    (int) M_LHU_AB, INSN_MACRO, 0, I1},
  /* li is at the start of the table.  */
  {"li.d",        "t,F",      0,      (int) M_LI_D, INSN_MACRO, 0, I1},
  {"li.d",        "T,L",      0,      (int) M_LI_DD, INSN_MACRO, 0, I1},
  {"li.s",        "t,f",      0,      (int) M_LI_S, INSN_MACRO, 0, I1},
  {"li.s",        "T,l",      0,      (int) M_LI_SS, INSN_MACRO, 0, I1},
  {"ll",          "t,o(b)",   0xc0000000, 0xfc000000, LDD|RD_b|WR_t, 0, I2|RLX2|RLX3},
  {"ll",          "t,A(b)",   0,    (int) M_LL_AB, INSN_MACRO, 0, I2|RLX2|RLX3},
  {"lld",         "t,o(b)",   0xd0000000, 0xfc000000, LDD|RD_b|WR_t, 0, I3},
  {"lld",         "t,A(b)",   0,    (int) M_LLD_AB, INSN_MACRO, 0, I3},
  {"lui",         "t,u",      0x3c000000, 0xffe00000, WR_t, 0, I1},
  {"luxc1",       "D,t(b)",   0x4c000005, 0xfc00f83f, LDD|WR_D|RD_t|RD_b, 0, I5},
  {"lw",          "t,o(b)",   0x8c000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lw",          "t,A(b)",   0,    (int) M_LW_AB, INSN_MACRO, 0, I1},
  {"lwc0",        "E,o(b)",   0xc0000000, 0xfc000000, CLD|RD_b|WR_CC, 0, I1},
  {"lwc0",        "E,A(b)",   0,    (int) M_LWC0_AB, INSN_MACRO, 0, I1},
  {"lwc1",        "T,o(b)",   0xc4000000, 0xfc000000, CLD|RD_b|WR_T|FP_S, 0, I1},
  {"lwc1",        "E,o(b)",   0xc4000000, 0xfc000000, CLD|RD_b|WR_T|FP_S, 0, I1},
  {"lwc1",        "T,A(b)",   0,    (int) M_LWC1_AB, INSN_MACRO, 0, I1},
  {"lwc1",        "E,A(b)",   0,    (int) M_LWC1_AB, INSN_MACRO, 0, I1},
  {"l.s",         "T,o(b)",   0xc4000000, 0xfc000000, CLD|RD_b|WR_T|FP_S, 0, I1}, /* lwc1 */
  {"l.s",         "T,A(b)",   0,    (int) M_LWC1_AB, INSN_MACRO, 0, I1},
  {"lwc2",        "E,o(b)",   0xc8000000, 0xfc000000, CLD|RD_b|WR_CC, 0, I1},
  {"lwc2",        "E,A(b)",   0,    (int) M_LWC2_AB, INSN_MACRO, 0, I1},
  {"lwc3",        "E,o(b)",   0xcc000000, 0xfc000000, CLD|RD_b|WR_CC, 0, I1},
  {"lwc3",        "E,A(b)",   0,    (int) M_LWC3_AB, INSN_MACRO, 0, I1},
  {"lwl",         "t,o(b)",   0x88000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lwl",         "t,A(b)",   0,    (int) M_LWL_AB, INSN_MACRO, 0, I1},
  {"lcache",      "t,o(b)",   0x88000000, 0xfc000000, LDD|RD_b|WR_t, 0, I2}, /* same */
  {"lcache",      "t,A(b)",   0,    (int) M_LWL_AB, INSN_MACRO, 0, I2}, /* as lwl */
  {"lwr",         "t,o(b)",   0x98000000, 0xfc000000, LDD|RD_b|WR_t, 0, I1},
  {"lwr",         "t,A(b)",   0,    (int) M_LWR_AB, INSN_MACRO, 0, I1},
  {"flush",       "t,o(b)",   0x98000000, 0xfc000000, LDD|RD_b|WR_t, 0, I2}, /* same */
  {"flush",       "t,A(b)",   0,    (int) M_LWR_AB, INSN_MACRO, 0, I2}, /* as lwr */
  {"lwu",         "t,o(b)",   0x9c000000, 0xfc000000, LDD|RD_b|WR_t, 0, I3},
  {"lwu",         "t,A(b)",   0,    (int) M_LWU_AB, INSN_MACRO, 0, I3},
  {"lwxc1",       "D,t(b)",   0x4c000000, 0xfc00f83f, LDD|WR_D|RD_t|RD_b|FP_D, 0, I4},
  /* 2006-01-19 tonywu: */
  {"mad",         "s,t",      0x70000000, 0xfc00ffff, RD_s|RD_t|MOD_HILO,     0, RLXA},
  {"madu",        "s,t",      0x70000001, 0xfc00ffff, RD_s|RD_t|MOD_HILO,     0, RLXA},
  /* 2006-01-19 tonywu: */
  {"madd.d",      "D,R,S,T",  0x4c000021, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D,    0, I4},
  {"madd.s",      "D,R,S,T",  0x4c000020, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_S,    0, I4},
  {"madd.ps",     "D,R,S,T",  0x4c000026, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D,    0, I5},
  {"madd",        "s,t",      0x70000000, 0xfc00ffff, RD_s|RD_t|MOD_HILO,          0, I32},
  {"maddu",       "s,t",      0x70000001, 0xfc00ffff, RD_s|RD_t|MOD_HILO,          0, I32},
  {"mfc0",        "t,G",      0x40000000, 0xffe007ff, LCD|WR_t|RD_C0, 0, I1},
  {"mfc0",        "t,G,#H",   0x40000000, 0xffe007c0, LCD|WR_t|RD_C0, 0, RLX3},
  {"mfc0",        "t,+D",     0x40000000, 0xffe007f8, LCD|WR_t|RD_C0, 0, I32},
  {"mfc0",        "t,G,H",    0x40000000, 0xffe007f8, LCD|WR_t|RD_C0, 0, I32},
  {"mfc1",        "t,S",      0x44000000, 0xffe007ff, LCD|WR_t|RD_S|FP_S, 0, I1},
  {"mfc1",        "t,G",      0x44000000, 0xffe007ff, LCD|WR_t|RD_S|FP_S, 0, I1},
  {"mfc1",        "t,G,#H",   0x44000000, 0xffe007c0, LCD|WR_t|RD_S|FP_S, 0, RLX3},
  {"mfhc1",       "t,S",      0x44600000, 0xffe007ff, LCD|WR_t|RD_S|FP_D, 0, I33},
  {"mfhc1",       "t,G",      0x44600000, 0xffe007ff, LCD|WR_t|RD_S|FP_D, 0, I33},
  {"mfc2",        "t,G",      0x48000000, 0xffe007ff, LCD|WR_t|RD_C2,       0, I1},
  {"mfc2",        "t,G,#H",   0x48000000, 0xffe007c0, LCD|WR_t|RD_C2,       0, RLX3},
  {"mfc2",        "t,G,H",    0x48000000, 0xffe007f8, LCD|WR_t|RD_C2,       0, I32},
  {"mfhc2",       "t,i",      0x48600000, 0xffe00000, LCD|WR_t|RD_C2,       0, I33},
  {"mfc3",        "t,G",      0x4c000000, 0xffe007ff, LCD|WR_t|RD_C3, 0, I1},
  {"mfc3",        "t,G,#H",   0x4c000000, 0xffe007c0, LCD|WR_t|RD_C3, 0, RLX3},
  {"mfc3",        "t,G,H",    0x4c000000, 0xffe007f8, LCD|WR_t|RD_C3, 0, I32},
  {"mfhi",        "d",        0x00000010, 0xffff07ff, WR_d|RD_HI, 0, I1},
  {"mflo",        "d",        0x00000012, 0xffff07ff, WR_d|RD_LO, 0, I1},
  {"mov.d",       "D,S",      0x46200006, 0xffff003f, WR_D|RD_S|FP_D, 0, I1},
  {"mov.s",       "D,S",      0x46000006, 0xffff003f, WR_D|RD_S|FP_S, 0, I1},
  {"mov.ps",      "D,S",      0x46c00006, 0xffff003f, WR_D|RD_S|FP_D, 0, I5},
  {"movf",        "d,s,N",    0x00000001, 0xfc0307ff, WR_d|RD_s|RD_CC|FP_S|FP_D, 0, I4|I32},
  {"movf.d",      "D,S,N",    0x46200011, 0xffe3003f, WR_D|RD_S|RD_CC|FP_D,   0, I4|I32},
  {"movf.s",      "D,S,N",    0x46000011, 0xffe3003f, WR_D|RD_S|RD_CC|FP_S,   0, I4|I32},
  {"movf.ps",     "D,S,N",    0x46c00011, 0xffe3003f, WR_D|RD_S|RD_CC|FP_D, 0, I5},
  {"movn",        "d,v,t",    0x0000000b, 0xfc0007ff, WR_d|RD_s|RD_t,     0, I4|I32|RLXB},
  {"movn.d",      "D,S,t",    0x46200013, 0xffe0003f, WR_D|RD_S|RD_t|FP_D,    0, I4|I32},
  {"movn.s",      "D,S,t",    0x46000013, 0xffe0003f, WR_D|RD_S|RD_t|FP_S,    0, I4|I32},
  {"movn.ps",     "D,S,t",    0x46c00013, 0xffe0003f, WR_D|RD_S|RD_t|FP_D,    0, I5},
  {"movt",        "d,s,N",    0x00010001, 0xfc0307ff, WR_d|RD_s|RD_CC|FP_S|FP_D, 0, I4|I32},
  {"movt.d",      "D,S,N",    0x46210011, 0xffe3003f, WR_D|RD_S|RD_CC|FP_D,   0, I4|I32},
  {"movt.s",      "D,S,N",    0x46010011, 0xffe3003f, WR_D|RD_S|RD_CC|FP_S,   0, I4|I32},
  {"movt.ps",     "D,S,N",    0x46c10011, 0xffe3003f, WR_D|RD_S|RD_CC|FP_D, 0, I5},

  {"movz",        "d,v,t",    0x0000000a, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I4|I32|RLXB},
  {"movz.d",      "D,S,t",    0x46200012, 0xffe0003f, WR_D|RD_S|RD_t|FP_D,    0, I4|I32},
  {"movz.s",      "D,S,t",    0x46000012, 0xffe0003f, WR_D|RD_S|RD_t|FP_S,    0, I4|I32},
  {"movz.ps",     "D,S,t",    0x46c00012, 0xffe0003f, WR_D|RD_S|RD_t|FP_D,    0, I5},
  /* move is at the top of the table.  */
  {"msub.d",      "D,R,S,T",  0x4c000029, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D, 0, I4},
  {"msub.s",      "D,R,S,T",  0x4c000028, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_S, 0, I4},
  {"msub.ps",     "D,R,S,T",  0x4c00002e, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D, 0, I5},
  /* 2006-01-19 tonywu: */
  {"msub",        "s,t",      0x70000004, 0xfc00ffff, RD_s|RD_t|MOD_HILO,     0,  I32|RLXA},
  {"msubu",       "s,t",      0x70000005, 0xfc00ffff, RD_s|RD_t|MOD_HILO,     0,  I32|RLXA},
  {"mtc0",        "t,G",      0x40800000, 0xffe007ff, COD|RD_t|WR_C0|WR_CC,   0,  I1},
  {"mtc0",        "t,G,#H",   0x40800000, 0xffe007c0, COD|RD_t|WR_C0|WR_CC,   0,  RLX3},
  {"mtc0",        "t,+D",     0x40800000, 0xffe007f8, COD|RD_t|WR_C0|WR_CC,   0,  I32},
  {"mtc0",        "t,G,H",    0x40800000, 0xffe007f8, COD|RD_t|WR_C0|WR_CC,   0,  I32},
  {"mtc1",        "t,S",      0x44800000, 0xffe007ff, COD|RD_t|WR_S|FP_S,     0,  I1},
  {"mtc1",        "t,G",      0x44800000, 0xffe007ff, COD|RD_t|WR_S|FP_S,     0,  I1},
  {"mtc1",        "t,G,#H",   0x44800000, 0xffe007c0, COD|RD_t|WR_S|FP_S,     0,  RLX3},
  {"mthc1",       "t,S",      0x44e00000, 0xffe007ff, COD|RD_t|WR_S|FP_D,     0,  I33},
  {"mthc1",       "t,G",      0x44e00000, 0xffe007ff, COD|RD_t|WR_S|FP_D,     0,  I33},
  {"mtc2",        "t,G",      0x48800000, 0xffe007ff, COD|RD_t|WR_C2|WR_CC,   0,  I1},
  {"mtc2",        "t,G,#H",   0x48800000, 0xffe007c0, COD|RD_t|WR_C2|WR_CC,   0,  RLX3},
  {"mtc2",        "t,G,H",    0x48800000, 0xffe007f8, COD|RD_t|WR_C2|WR_CC,   0,  I32},
  {"mthc2",       "t,i",      0x48e00000, 0xffe00000, COD|RD_t|WR_C2|WR_CC,   0,  I33},
  {"mtc3",        "t,G",      0x4c800000, 0xffe007ff, COD|RD_t|WR_C3|WR_CC,   0,  I1},
  {"mtc3",        "t,G,#H",   0x4c800000, 0xffe007c0, COD|RD_t|WR_C3|WR_CC,   0,  RLX3},
  {"mtc3",        "t,G,H",    0x4c800000, 0xffe007f8, COD|RD_t|WR_C3|WR_CC,   0,  I32},
  {"mthi",        "s",        0x00000011, 0xfc1fffff, RD_s|WR_HI,             0,  I1},
  {"mtlo",        "s",        0x00000013, 0xfc1fffff, RD_s|WR_LO,             0,  I1},
  {"mul.d",       "D,V,T",    0x46200002, 0xffe0003f, WR_D|RD_S|RD_T|FP_D,    0,  I1},
  {"mul.s",       "D,V,T",    0x46000002, 0xffe0003f, WR_D|RD_S|RD_T|FP_S,    0,  I1},
  {"mul.ps",      "D,V,T",    0x46c00002, 0xffe0003f, WR_D|RD_S|RD_T|FP_D,    0,  I5},
  {"mul",         "d,v,t",    0x70000002, 0xfc0007ff, WR_d|RD_s|RD_t|WR_HILO, 0,  I32},
  {"mul",         "d,v,t",    0,    (int) M_MUL, INSN_MACRO, 0, I1},
  {"mul",         "d,v,I",    0,    (int) M_MUL_I, INSN_MACRO, 0, I1},
  {"mulo",        "d,v,t",    0,    (int) M_MULO, INSN_MACRO, 0, I1},
  {"mulo",        "d,v,I",    0,    (int) M_MULO_I, INSN_MACRO, 0, I1},
  {"mulou",       "d,v,t",    0,    (int) M_MULOU, INSN_MACRO, 0, I1},
  {"mulou",       "d,v,I",    0,    (int) M_MULOU_I, INSN_MACRO, 0, I1},
  {"mult",        "s,t",      0x00000018, 0xfc00ffff, RD_s|RD_t|WR_HILO|IS_M, 0, I1},
  {"multu",       "s,t",      0x00000019, 0xfc00ffff, RD_s|RD_t|WR_HILO|IS_M, 0, I1},
  {"neg",         "d,w",      0x00000022, 0xffe007ff, WR_d|RD_t, 0, I1}, /* sub 0 */
  {"negu",        "d,w",      0x00000023, 0xffe007ff, WR_d|RD_t, 0, I1}, /* subu 0 */
  {"neg.d",       "D,V",      0x46200007, 0xffff003f, WR_D|RD_S|FP_D, 0, I1},
  {"neg.s",       "D,V",      0x46000007, 0xffff003f, WR_D|RD_S|FP_S, 0, I1},
  {"neg.ps",      "D,V",      0x46c00007, 0xffff003f, WR_D|RD_S|FP_D, 0, I5},
  {"nmadd.d",     "D,R,S,T",  0x4c000031, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D, 0, I4},
  {"nmadd.s",     "D,R,S,T",  0x4c000030, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_S, 0, I4},
  {"nmadd.ps",    "D,R,S,T",  0x4c000036, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D, 0, I5},
  {"nmsub.d",     "D,R,S,T",  0x4c000039, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D, 0, I4},
  {"nmsub.s",     "D,R,S,T",  0x4c000038, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_S, 0, I4},
  {"nmsub.ps",    "D,R,S,T",  0x4c00003e, 0xfc00003f, RD_R|RD_S|RD_T|WR_D|FP_D, 0, I5},
  /* nop is at the start of the table.  */
  {"nor",         "d,v,t",    0x00000027, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"nor",         "t,r,I",    0,    (int) M_NOR_I, INSN_MACRO, 0, I1},
  {"not",         "d,v",      0x00000027, 0xfc1f07ff, WR_d|RD_s|RD_t, 0, I1},/*nor d,s,0*/
  {"or",          "d,v,t",    0x00000025, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"or",          "t,r,I",    0,    (int) M_OR_I, INSN_MACRO, 0, I1},
  {"ori",         "t,r,i",    0x34000000, 0xfc000000, WR_t|RD_s, 0, I1},
  {"pll.ps",      "D,V,T",    0x46c0002c, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  {"plu.ps",      "D,V,T",    0x46c0002d, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  /* pref and prefx are at the start of the table.  */
  {"pul.ps",      "D,V,T",    0x46c0002e, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  {"puu.ps",      "D,V,T",    0x46c0002f, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  {"recip.d",     "D,S",      0x46200015, 0xffff003f, WR_D|RD_S|FP_D, 0, I4},
  {"recip.s",     "D,S",      0x46000015, 0xffff003f, WR_D|RD_S|FP_S, 0, I4},
  {"rem",         "z,s,t",    0x0000001a, 0xfc00ffff, RD_s|RD_t|WR_HILO,      0, I1},
  {"rem",         "d,v,t",    0,    (int) M_REM_3, INSN_MACRO, 0, I1},
  {"rem",         "d,v,I",    0,    (int) M_REM_3I, INSN_MACRO, 0, I1},
  {"remu",        "z,s,t",    0x0000001b, 0xfc00ffff, RD_s|RD_t|WR_HILO,      0, I1},
  {"remu",        "d,v,t",    0,    (int) M_REMU_3, INSN_MACRO, 0, I1},
  {"remu",        "d,v,I",    0,    (int) M_REMU_3I, INSN_MACRO, 0, I1},
  {"rdhwr",       "t,K",      0x7c00003b, 0xffe007ff, WR_t, 0, I33},
  {"rdpgpr",      "d,w",      0x41400000, 0xffe007ff, WR_d, 0, I33},
  {"rfe",         "",         0x42000010, 0xffffffff, 0, 0, I1},
  {"rol",         "d,v,t",    0,    (int) M_ROL, INSN_MACRO, 0, I1},
  {"rol",         "d,v,I",    0,    (int) M_ROL_I, INSN_MACRO, 0, I1},
  {"ror",         "d,v,t",    0,    (int) M_ROR, INSN_MACRO, 0, I1},
  {"ror",         "d,v,I",    0,    (int) M_ROR_I, INSN_MACRO, 0, I1},
  {"ror",         "d,w,<",    0x00200002, 0xffe0003f, WR_d|RD_t, 0, I33},
  {"rorv",        "d,t,s",    0x00000046, 0xfc0007ff, RD_t|RD_s|WR_d, 0, I33},
  {"rotl",        "d,v,t",    0,    (int) M_ROL, INSN_MACRO, 0, I33},
  {"rotl",        "d,v,I",    0,    (int) M_ROL_I, INSN_MACRO, 0, I33},
  {"rotr",        "d,v,t",    0,    (int) M_ROR, INSN_MACRO, 0, I33},
  {"rotr",        "d,v,I",    0,    (int) M_ROR_I, INSN_MACRO, 0, I33},
  {"rotrv",       "d,t,s",    0x00000046, 0xfc0007ff, RD_t|RD_s|WR_d, 0, I33},
  {"round.l.d",   "D,S",      0x46200008, 0xffff003f, WR_D|RD_S|FP_D, 0, I3},
  {"round.l.s",   "D,S",      0x46000008, 0xffff003f, WR_D|RD_S|FP_S|FP_D, 0, I3},
  {"round.w.d",   "D,S",      0x4620000c, 0xffff003f, WR_D|RD_S|FP_S|FP_D, 0, I2},
  {"round.w.s",   "D,S",      0x4600000c, 0xffff003f, WR_D|RD_S|FP_S, 0, I2},
  {"rsqrt.d",     "D,S",      0x46200016, 0xffff003f, WR_D|RD_S|FP_D, 0, I4},
  {"rsqrt.s",     "D,S",      0x46000016, 0xffff003f, WR_D|RD_S|FP_S, 0, I4},
  {"sb",          "t,o(b)",   0xa0000000, 0xfc000000, SM|RD_t|RD_b, 0, I1},
  {"sb",          "t,A(b)",   0,    (int) M_SB_AB, INSN_MACRO,         0, I1},
  {"sc",          "t,o(b)",   0xe0000000, 0xfc000000, SM|RD_t|WR_t|RD_b, 0, I2|RLX2|RLX3},
  {"sc",          "t,A(b)",   0,    (int) M_SC_AB, INSN_MACRO,         0, I2|RLX2|RLX3},
  {"scd",         "t,o(b)",   0xf0000000, 0xfc000000, SM|RD_t|WR_t|RD_b, 0, I3},
  {"scd",         "t,A(b)",   0,    (int) M_SCD_AB, INSN_MACRO,         0, I3},
  {"sd",          "t,o(b)",   0xfc000000, 0xfc000000, SM|RD_t|RD_b, 0, I3},
  {"sd",          "t,o(b)",   0,    (int) M_SD_OB, INSN_MACRO,         0, I1},
  {"sd",          "t,A(b)",   0,    (int) M_SD_AB, INSN_MACRO,         0,      I1},
  /* 2006-01-11 tonywu: commmented out old sdbbp */
#if 0
  {"sdbbp",   "", 0x0000000e, 0xffffffff, TRAP,           0, I1},
  {"sdbbp",   "c", 0x0000000e, 0xfc00ffff, TRAP, 0, I1},
  {"sdbbp",   "c,q", 0x0000000e, 0xfc00003f, TRAP, 0, I1},
#endif
  {"sdbbp",       "",         0x7000003f, 0xffffffff, TRAP,           0, I32|RLXA},
  {"sdbbp",       "B",        0x7000003f, 0xfc00003f, TRAP,           0, I32|RLXA},
  {"sdc1",        "T,o(b)",   0xf4000000, 0xfc000000, SM|RD_T|RD_b|FP_D, 0, I2},
  {"sdc1",        "E,o(b)",   0xf4000000, 0xfc000000, SM|RD_T|RD_b|FP_D, 0, I2},
  {"sdc1",        "T,A(b)",   0,    (int) M_SDC1_AB, INSN_MACRO, 0, I2},
  {"sdc1",        "E,A(b)",   0,    (int) M_SDC1_AB, INSN_MACRO, 0, I2},
  {"sdc2",        "E,o(b)",   0xf8000000, 0xfc000000, SM|RD_C2|RD_b, 0, I2},
  {"sdc2",        "E,A(b)",   0,    (int) M_SDC2_AB, INSN_MACRO, 0, I2},
  {"sdc3",        "E,o(b)",   0xfc000000, 0xfc000000, SM|RD_C3|RD_b, 0, I2},
  {"sdc3",        "E,A(b)",   0,    (int) M_SDC3_AB, INSN_MACRO, 0, I2},
  {"s.d",         "T,o(b)",   0xf4000000, 0xfc000000, SM|RD_T|RD_b|FP_D, 0, I2},
  {"s.d",         "T,o(b)",   0,    (int) M_S_DOB, INSN_MACRO, 0, I1},
  {"s.d",         "T,A(b)",   0,    (int) M_S_DAB, INSN_MACRO, 0, I1},
  {"sdl",         "t,o(b)",   0xb0000000, 0xfc000000, SM|RD_t|RD_b, 0, I3},
  {"sdl",         "t,A(b)",   0,    (int) M_SDL_AB, INSN_MACRO, 0, I3},
  {"sdr",         "t,o(b)",   0xb4000000, 0xfc000000, SM|RD_t|RD_b, 0, I3},
  {"sdr",         "t,A(b)",   0,    (int) M_SDR_AB, INSN_MACRO, 0, I3},
  {"sdxc1",       "S,t(b)",   0x4c000009, 0xfc0007ff, SM|RD_S|RD_t|RD_b|FP_D, 0, I4},
  {"seb",         "d,w",      0x7c000420, 0xffe007ff, WR_d|RD_t, 0, I33},
  {"seh",         "d,w",      0x7c000620, 0xffe007ff, WR_d|RD_t, 0, I33},
  {"seq",         "d,v,t",    0,    (int) M_SEQ, INSN_MACRO, 0, I1},
  {"seq",         "d,v,I",    0,    (int) M_SEQ_I, INSN_MACRO, 0, I1},
  {"sge",         "d,v,t",    0,    (int) M_SGE, INSN_MACRO, 0, I1},
  {"sge",         "d,v,I",    0,    (int) M_SGE_I, INSN_MACRO, 0, I1},
  {"sgeu",        "d,v,t",    0,    (int) M_SGEU, INSN_MACRO, 0, I1},
  {"sgeu",        "d,v,I",    0,    (int) M_SGEU_I, INSN_MACRO, 0, I1},
  {"sgt",         "d,v,t",    0,    (int) M_SGT, INSN_MACRO, 0, I1},
  {"sgt",         "d,v,I",    0,    (int) M_SGT_I, INSN_MACRO, 0, I1},
  {"sgtu",        "d,v,t",    0,    (int) M_SGTU, INSN_MACRO, 0, I1},
  {"sgtu",        "d,v,I",    0,    (int) M_SGTU_I, INSN_MACRO, 0, I1},
  {"sh",          "t,o(b)",   0xa4000000, 0xfc000000, SM|RD_t|RD_b, 0, I1},
  {"sh",          "t,A(b)",   0,    (int) M_SH_AB, INSN_MACRO, 0, I1},
  {"sle",         "d,v,t",    0,    (int) M_SLE, INSN_MACRO, 0, I1},
  {"sle",         "d,v,I",    0,    (int) M_SLE_I, INSN_MACRO, 0, I1},
  {"sleu",        "d,v,t",    0,    (int) M_SLEU, INSN_MACRO, 0, I1},
  {"sleu",        "d,v,I",    0,    (int) M_SLEU_I, INSN_MACRO, 0, I1},
  {"sllv",        "d,t,s",    0x00000004, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I1},
  {"sll",         "d,w,s",    0x00000004, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I1}, /* sllv */
  {"sll",         "d,w,<",    0x00000000, 0xffe0003f, WR_d|RD_t, 0, I1},
  {"slt",         "d,v,t",    0x0000002a, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"slt",         "d,v,I",    0,    (int) M_SLT_I, INSN_MACRO, 0, I1},
  {"slti",        "t,r,j",    0x28000000, 0xfc000000, WR_t|RD_s, 0, I1},
  {"sltiu",       "t,r,j",    0x2c000000, 0xfc000000, WR_t|RD_s, 0, I1},
  {"sltu",        "d,v,t",    0x0000002b, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"sltu",        "d,v,I",    0,    (int) M_SLTU_I, INSN_MACRO, 0, I1},
  {"sne",         "d,v,t",    0,    (int) M_SNE, INSN_MACRO, 0, I1},
  {"sne",         "d,v,I",    0,    (int) M_SNE_I, INSN_MACRO, 0, I1},
  {"sqrt.d",      "D,S",      0x46200004, 0xffff003f, WR_D|RD_S|FP_D, 0, I2},
  {"sqrt.s",      "D,S",      0x46000004, 0xffff003f, WR_D|RD_S|FP_S, 0, I2},
  {"srav",        "d,t,s",    0x00000007, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I1},
  {"sra",         "d,w,s",    0x00000007, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I1}, /* srav */
  {"sra",         "d,w,<",    0x00000003, 0xffe0003f, WR_d|RD_t, 0, I1},
  {"srlv",        "d,t,s",    0x00000006, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I1},
  {"srl",         "d,w,s",    0x00000006, 0xfc0007ff, WR_d|RD_t|RD_s, 0, I1}, /* srlv */
  {"srl",         "d,w,<",    0x00000002, 0xffe0003f, WR_d|RD_t, 0, I1},
  /* ssnop is at the start of the table.  */
  {"sub",         "d,v,t",    0x00000022, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"sub",         "d,v,I",    0,    (int) M_SUB_I, INSN_MACRO, 0, I1},
  {"sub.d",       "D,V,T",    0x46200001, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I1},
  {"sub.s",       "D,V,T",    0x46000001, 0xffe0003f, WR_D|RD_S|RD_T|FP_S, 0, I1},
  {"sub.ps",      "D,V,T",    0x46c00001, 0xffe0003f, WR_D|RD_S|RD_T|FP_D, 0, I5},
  {"subu",        "d,v,t",    0x00000023, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"subu",        "d,v,I",    0,    (int) M_SUBU_I, INSN_MACRO, 0, I1},
  {"suxc1",       "S,t(b)",   0x4c00000d, 0xfc0007ff, SM|RD_S|RD_t|RD_b, 0, I5},
  {"sw",          "t,o(b)",   0xac000000, 0xfc000000, SM|RD_t|RD_b, 0, I1},
  {"sw",          "t,A(b)",   0,    (int) M_SW_AB, INSN_MACRO, 0, I1},
  {"swc0",        "E,o(b)",   0xe0000000, 0xfc000000, SM|RD_C0|RD_b, 0, I1},
  {"swc0",        "E,A(b)",   0,    (int) M_SWC0_AB, INSN_MACRO, 0, I1},
  {"swc1",        "T,o(b)",   0xe4000000, 0xfc000000, SM|RD_T|RD_b|FP_S, 0, I1},
  {"swc1",        "E,o(b)",   0xe4000000, 0xfc000000, SM|RD_T|RD_b|FP_S, 0, I1},
  {"swc1",        "T,A(b)",   0,    (int) M_SWC1_AB, INSN_MACRO, 0, I1},
  {"swc1",        "E,A(b)",   0,    (int) M_SWC1_AB, INSN_MACRO, 0, I1},
  {"s.s",         "T,o(b)",   0xe4000000, 0xfc000000, SM|RD_T|RD_b|FP_S, 0, I1}, /* swc1 */
  {"s.s",         "T,A(b)",   0,    (int) M_SWC1_AB, INSN_MACRO, 0, I1},
  {"swc2",        "E,o(b)",   0xe8000000, 0xfc000000, SM|RD_C2|RD_b, 0, I1},
  {"swc2",        "E,A(b)",   0,    (int) M_SWC2_AB, INSN_MACRO, 0, I1},
  {"swc3",        "E,o(b)",   0xec000000, 0xfc000000, SM|RD_C3|RD_b, 0, I1},
  {"swc3",        "E,A(b)",   0,    (int) M_SWC3_AB, INSN_MACRO, 0, I1},
  {"swl",         "t,o(b)",   0xa8000000, 0xfc000000, SM|RD_t|RD_b, 0, I1},
  {"swl",         "t,A(b)",   0,    (int) M_SWL_AB, INSN_MACRO, 0, I1},
  {"scache",      "t,o(b)",   0xa8000000, 0xfc000000, RD_t|RD_b, 0, I2}, /* same */
  {"scache",      "t,A(b)",   0,    (int) M_SWL_AB, INSN_MACRO, 0, I2}, /* as swl */
  {"swr",         "t,o(b)",   0xb8000000, 0xfc000000, SM|RD_t|RD_b, 0, I1},
  {"swr",         "t,A(b)",   0,    (int) M_SWR_AB, INSN_MACRO, 0, I1},
  {"invalidate",  "t,o(b)",   0xb8000000, 0xfc000000, RD_t|RD_b, 0, I2}, /* same */
  {"invalidate",  "t,A(b)",   0,    (int) M_SWR_AB, INSN_MACRO, 0, I2}, /* as swr */
  {"swxc1",       "S,t(b)",   0x4c000008, 0xfc0007ff, SM|RD_S|RD_t|RD_b|FP_S, 0, I4},
  {"sync",        "",         0x0000000f, 0xffffffff, INSN_SYNC, 0, I2|RLX3},
  {"sync",        "#I",       0x0000000f, 0xfffff83f, INSN_SYNC, 0, RLX3},
  {"sync.p",      "",         0x0000040f, 0xffffffff, INSN_SYNC, 0, I2},
  {"sync.l",      "",         0x0000000f, 0xffffffff, INSN_SYNC, 0, I2},
  {"synci",       "o(b)",     0x041f0000, 0xfc1f0000, SM|RD_b, 0, I33},
  {"syscall",     "",         0x0000000c, 0xffffffff, TRAP, 0, I1},
  {"syscall",     "B",        0x0000000c, 0xfc00003f, TRAP, 0, I1},
  {"teqi",        "s,j",      0x040c0000, 0xfc1f0000, RD_s|TRAP, 0, I2},
  {"teq",         "s,t",      0x00000034, 0xfc00ffff, RD_s|RD_t|TRAP, 0, I2},
  {"teq",         "s,t,q",    0x00000034, 0xfc00003f, RD_s|RD_t|TRAP, 0, I2},
  {"teq",         "s,j",      0x040c0000, 0xfc1f0000, RD_s|TRAP, 0,  I2}, /* teqi */
  {"teq",         "s,I",      0,    (int) M_TEQ_I, INSN_MACRO, 0, I2},
  {"tgei",        "s,j",      0x04080000, 0xfc1f0000, RD_s|TRAP, 0, I2},
  {"tge",         "s,t",      0x00000030, 0xfc00ffff, RD_s|RD_t|TRAP, 0, I2},
  {"tge",         "s,t,q",    0x00000030, 0xfc00003f, RD_s|RD_t|TRAP, 0, I2},
  {"tge",         "s,j",      0x04080000, 0xfc1f0000, RD_s|TRAP, 0, I2}, /* tgei */
  {"tge",         "s,I",      0,    (int) M_TGE_I,    INSN_MACRO, 0, I2},
  {"tgeiu",       "s,j",      0x04090000, 0xfc1f0000, RD_s|TRAP, 0, I2},
  {"tgeu",        "s,t",      0x00000031, 0xfc00ffff, RD_s|RD_t|TRAP, 0, I2},
  {"tgeu",        "s,t,q",    0x00000031, 0xfc00003f, RD_s|RD_t|TRAP, 0, I2},
  {"tgeu",        "s,j",      0x04090000, 0xfc1f0000, RD_s|TRAP, 0, I2}, /* tgeiu */
  {"tgeu",        "s,I",      0,    (int) M_TGEU_I, INSN_MACRO, 0, I2},
  {"tlbp",        "",         0x42000008, 0xffffffff, INSN_TLB,       0, I1},
  {"tlbr",        "",         0x42000001, 0xffffffff, INSN_TLB,       0, I1},
  {"tlbwi",       "",         0x42000002, 0xffffffff, INSN_TLB,       0, I1},
  {"tlbwr",       "",         0x42000006, 0xffffffff, INSN_TLB,       0, I1},
  {"tlti",        "s,j",      0x040a0000, 0xfc1f0000, RD_s|TRAP, 0, I2},
  {"tlt",         "s,t",      0x00000032, 0xfc00ffff, RD_s|RD_t|TRAP, 0, I2},
  {"tlt",         "s,t,q",    0x00000032, 0xfc00003f, RD_s|RD_t|TRAP, 0, I2},
  {"tlt",         "s,j",      0x040a0000, 0xfc1f0000, RD_s|TRAP, 0, I2}, /* tlti */
  {"tlt",         "s,I",      0,    (int) M_TLT_I, INSN_MACRO, 0, I2},
  {"tltiu",       "s,j",      0x040b0000, 0xfc1f0000, RD_s|TRAP, 0, I2},
  {"tltu",        "s,t",      0x00000033, 0xfc00ffff, RD_s|RD_t|TRAP, 0, I2},
  {"tltu",        "s,t,q",    0x00000033, 0xfc00003f, RD_s|RD_t|TRAP, 0, I2},
  {"tltu",        "s,j",      0x040b0000, 0xfc1f0000, RD_s|TRAP, 0, I2}, /* tltiu */
  {"tltu",        "s,I",      0,    (int) M_TLTU_I, INSN_MACRO, 0, I2},
  {"tnei",        "s,j",      0x040e0000, 0xfc1f0000, RD_s|TRAP, 0, I2},
  {"tne",         "s,t",      0x00000036, 0xfc00ffff, RD_s|RD_t|TRAP, 0, I2},
  {"tne",         "s,t,q",    0x00000036, 0xfc00003f, RD_s|RD_t|TRAP, 0, I2},
  {"tne",         "s,j",      0x040e0000, 0xfc1f0000, RD_s|TRAP, 0, I2}, /* tnei */
  {"tne",         "s,I",      0,    (int) M_TNE_I, INSN_MACRO, 0, I2},
  {"trunc.l.d",   "D,S",      0x46200009, 0xffff003f, WR_D|RD_S|FP_D, 0, I3},
  {"trunc.l.s",   "D,S",      0x46000009, 0xffff003f, WR_D|RD_S|FP_S|FP_D, 0, I3},
  {"trunc.w.d",   "D,S",      0x4620000d, 0xffff003f, WR_D|RD_S|FP_S|FP_D, 0, I2},
  {"trunc.w.d",   "D,S,x",    0x4620000d, 0xffff003f, WR_D|RD_S|FP_S|FP_D, 0, I2},
  {"trunc.w.d",   "D,S,t",    0,    (int) M_TRUNCWD, INSN_MACRO, 0, I1},
  {"trunc.w.s",   "D,S",      0x4600000d, 0xffff003f, WR_D|RD_S|FP_S, 0, I2},
  {"trunc.w.s",   "D,S,x",    0x4600000d, 0xffff003f, WR_D|RD_S|FP_S, 0, I2},
  {"trunc.w.s",   "D,S,t",    0,    (int) M_TRUNCWS, INSN_MACRO, 0, I1},
  {"uld",         "t,o(b)",   0,          (int) M_ULD, INSN_MACRO,     0, I3},
  {"uld",         "t,A(b)",   0,          (int) M_ULD_A, INSN_MACRO, 0, I3},
  {"ulh",         "t,o(b)",   0,          (int) M_ULH, INSN_MACRO,     0, I1},
  {"ulh",         "t,A(b)",   0,          (int) M_ULH_A, INSN_MACRO, 0, I1},
  {"ulhu",        "t,o(b)",   0,          (int) M_ULHU, INSN_MACRO, 0, I1},
  {"ulhu",        "t,A(b)",   0,          (int) M_ULHU_A, INSN_MACRO, 0, I1},
  {"ulw",         "t,o(b)",   0,          (int) M_ULW, INSN_MACRO, 0, I1},
  {"ulw",         "t,A(b)",   0,          (int) M_ULW_A, INSN_MACRO, 0, I1},
  {"usd",         "t,o(b)",   0,          (int) M_USD, INSN_MACRO, 0, I3},
  {"usd",         "t,A(b)",   0,          (int) M_USD_A, INSN_MACRO, 0, I3},
  {"ush",         "t,o(b)",   0,          (int) M_USH, INSN_MACRO, 0, I1},
  {"ush",         "t,A(b)",   0,          (int) M_USH_A, INSN_MACRO, 0, I1},
  {"usw",         "t,o(b)",   0,          (int) M_USW, INSN_MACRO, 0, I1},
  {"usw",         "t,A(b)",   0,          (int) M_USW_A, INSN_MACRO, 0, I1},
  {"wait",        "",         0x42000020, 0xffffffff, TRAP,   0, I3|I32},
  {"wait",        "J",        0x42000020, 0xfe00003f, TRAP,   0, I32},
  {"wrpgpr",      "d,w",      0x41c00000, 0xffe007ff, RD_t, 0, I33},
  {"wsbh",        "d,w",      0x7c0000a0, 0xffe007ff, WR_d|RD_t, 0, I33},
  {"xor",         "d,v,t",    0x00000026, 0xfc0007ff, WR_d|RD_s|RD_t, 0, I1},
  {"xor",         "t,r,I",    0,    (int) M_XOR_I, INSN_MACRO, 0, I1},
  {"xori",        "t,r,i",    0x38000000, 0xfc000000, WR_t|RD_s, 0, I1},

  /* dbb: modified for supporting radiax instructions */
  /* 2006-01-19 tonywu: cleanup radiax instructions definition */
  /* 2008-07-12 tonywu: add taroko support */
  /* 2008-08-31 tonywu: add rad type */
  /*   d1: m0(3), m1(7), m2(11), m3(15) */
  /*   d2: m0l, m0h, m0 ~ m3l, m3h, m3 */
  /*   d3: m0l, m0h, ~ m3l, m3h */
  /*   d4: LXC0 */
  {"mta2",        "s,#d2",       0x7C00005D, 0xFC1F07ff, RD_s,      0, RAD1},
  {"mta2.g",      "s,#d2",       0x7C00015D, 0xFC1F07ff, RD_s,      0, RAD1},
  {"mfa",         "d,#t3",       0x7C00001C, 0xFFE007FF, WR_d,      0, RAD1},
  {"mfa",         "d,#t3,##",    0x7C00001C, 0xFFE0007F, WR_d,      0, RAD1},
  {"mfa2",        "d,#t1",       0x7C00005C, 0xFFE007FF, WR_d,      0, RAD1},
  {"mfa2",        "d,#t1,##",    0x7C00005C, 0xFFE0007F, WR_d,      0, RAD1},
  {"diva",        "#d1,s,t",     0x7C00001A, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"divau",       "#d1,s,t",     0x7C00021A, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"multa",       "#d1,s,t",     0x7C000112, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"multau",      "#d1,s,t",     0x7C000312, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imulta",      "#d1,s,t",     0x7C000102, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"imultau",     "#d1,s,t",     0x7C000302, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmulta",      "#d1,s,t",     0x7C000502, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"multa2",      "#d2,s,t",     0x7C000152, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imulta2",     "#d2,s,t",     0x7C000142, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmulta2",     "#d2,s,t",     0x7C000542, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"mulna2",      "#d2,s,t",     0x7C000153, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imulna2",     "#d2,s,t",     0x7C000143, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmulna2",     "#d2,s,t",     0x7C000543, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"cmulta",      "#d1,s,t",     0x7C00001B, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"icmulta",     "#d1,s,t",     0x7C00011B, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qcmulta",     "#d1,s,t",     0x7C00051B, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"madda",       "#d1,s,t",     0x7C000012, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"maddau",      "#d1,s,t",     0x7C000212, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imadda",      "#d1,s,t",     0x7C000002, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"imaddau",     "#d1,s,t",     0x7C000202, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmadda",      "#d1,s,t",     0x7C000402, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"madda2",      "#d2,s,t",     0x7C000052, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imadda2",     "#d2,s,t",     0x7C000042, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmadda2",     "#d2,s,t",     0x7C000442, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"madda2.s",    "#d2,s,t",     0x7C0000D2, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imadda2.s32", "#d2,s,t",     0x7C0000C2, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmadda2.s32", "#d2,s,t",     0x7C0004C2, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"imadda2.s40", "#d2,s,t",     0x7C0001C2, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmadda2.s40", "#d2,s,t",     0x7C0005C2, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"msuba",       "#d1,s,t",     0x7C000013, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"msubau",      "#d1,s,t",     0x7C000213, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imsuba",      "#d1,s,t",     0x7C000003, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"imsubau",     "#d1,s,t",     0x7C000203, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmsuba",      "#d1,s,t",     0x7C000403, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"msuba2",      "#d2,s,t",     0x7C000053, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imsuba2",     "#d2,s,t",     0x7C000043, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmsuba2",     "#d2,s,t",     0x7C000443, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"msuba2.s",    "#d2,s,t",     0x7C0000D3, 0xFC0007FF, RD_t|RD_s, 0, RAD1},
  {"imsuba2.s32", "#d2,s,t",     0x7C0000C3, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmsuba2.s32", "#d2,s,t",     0x7C0004C3, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"imsuba2.s40", "#d2,s,t",     0x7C0001C3, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"qmsuba2.s40", "#d2,s,t",     0x7C0005C3, 0xFC0007FF, RD_t|RD_s, 0, RAD2},
  {"addma",       "#d3,#s3,#t3", 0x7C00001E, 0xFC0007FF, 0, 0, RAD1},
  {"addma.s",     "#d3,#s3,#t3", 0x7C00009E, 0xFC0007FF, 0, 0, RAD1},
  {"addma.s32",   "#d3,#s3,#t3", 0x7C00041E, 0xFC0007FF, 0, 0, RAD2},
  {"addma.s40",   "#d3,#s3,#t3", 0x7C00049E, 0xFC0007FF, 0, 0, RAD2},
  {"subma",       "#d3,#s3,#t3", 0x7C00001F, 0xFC0007FF, 0, 0, RAD1},
  {"subma.s",     "#d3,#s3,#t3", 0x7C00009F, 0xFC0007FF, 0, 0, RAD1},
  {"subma.s32",   "#d3,#s3,#t3", 0x7C00041F, 0xFC0007FF, 0, 0, RAD2},
  {"subma.s40",   "#d3,#s3,#t3", 0x7C00049F, 0xFC0007FF, 0, 0, RAD2},
  {"rnda2",       "#t2",         0x7C000056, 0xFFE0FFFF, 0, 0, RAD1},
  {"rnda2",       "#t2,##",      0x7C000056, 0xFFE0F87F, 0, 0, RAD1},
  {"lt",          "#`,#@(b)",    0x7C000036, 0xFC00003F, LDD|RD_b|WR_t,  0, RAD1},
  {"st",          "#`,#@(b)",    0x7C00003E, 0xFC00003F, SM|RD_t|RD_b,   0, RAD1},
  {"ltp",         "#`,(b)#~",    0x7C0000f2, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"ltp.c0",      "#`,(b)#~",    0x7C000032, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"ltp.c1",      "#`,(b)#~",    0x7C000072, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"ltp.c2",      "#`,(b)#~",    0x7C0000b2, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lwp",         "t,(b)#~",     0x7C0000f3, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lwp.c0",      "t,(b)#~",     0x7C000033, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lwp.c1",      "t,(b)#~",     0x7C000073, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lwp.c2",      "t,(b)#~",     0x7C0000b3, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhp",         "t,(b)#~",     0x7C0000f1, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhp.c0",      "t,(b)#~",     0x7C000031, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhp.c1",      "t,(b)#~",     0x7C000071, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhp.c2",      "t,(b)#~",     0x7C0000b1, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhpu",        "t,(b)#~",     0x7C0000f5, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhpu.c0",     "t,(b)#~",     0x7C000035, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhpu.c1",     "t,(b)#~",     0x7C000075, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lhpu.c2",     "t,(b)#~",     0x7C0000b5, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbp",         "t,(b)#~",     0x7C0000f0, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbp.c0",      "t,(b)#~",     0x7C000030, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbp.c1",      "t,(b)#~",     0x7C000070, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbp.c2",      "t,(b)#~",     0x7C0000b0, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbpu",        "t,(b)#~",     0x7C0000f4, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbpu.c0",     "t,(b)#~",     0x7C000034, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbpu.c1",     "t,(b)#~",     0x7C000074, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"lbpu.c2",     "t,(b)#~",     0x7C0000b4, 0xFC0000FF, LDD|WR_t|RD_b,  0, RAD1},
  {"stp",         "#`,(b)#~",    0x7C0000fa, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"stp.c0",      "#`,(b)#~",    0x7C00003a, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"stp.c1",      "#`,(b)#~",    0x7C00007a, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"stp.c2",      "#`,(b)#~",    0x7C0000ba, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"swp",         "t,(b)#~",     0x7C0000fb, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"swp.c0",      "t,(b)#~",     0x7C00003b, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"swp.c1",      "t,(b)#~",     0x7C00007b, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"swp.c2",      "t,(b)#~",     0x7C0000bb, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"shp",         "t,(b)#~",     0x7C0000f9, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"shp.c0",      "t,(b)#~",     0x7C000039, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"shp.c1",      "t,(b)#~",     0x7C000079, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"shp.c2",      "t,(b)#~",     0x7C0000b9, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"sbp",         "t,(b)#~",     0x7C0000f8, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"sbp.c0",      "t,(b)#~",     0x7C000038, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"sbp.c1",      "t,(b)#~",     0x7C000078, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"sbp.c2",      "t,(b)#~",     0x7C0000b8, 0xFC0000FF, WR_t|RD_b,      0, RAD1},
  {"mtru",        "t,#u",        0x7C000025, 0xFFE007FF, RD_t,           0, RAD1},
  {"mfru",        "t,#u",        0x7C000024, 0xFFE007FF, RD_t,           0, RAD1},
  {"mtrk",        "t,#k",        0x7C0000A5, 0xFFE007FF, RD_t,           0, RAD1},
  {"mfrk",        "t,#k",        0x7C0000A4, 0xFFE007FF, RD_t,           0, RAD1},
  {"sllv2",       "d,t,s",       0x7C000044, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"srlv2",       "d,t,s",       0x7C000046, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"srav2",       "d,t,s",       0x7C000047, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"addr",        "d,s,t",       0x7C000021, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"addr.s",      "d,s,t",       0x7C0000A1, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"addr2",       "d,s,t",       0x7C000061, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"addr2.s",     "d,s,t",       0x7C0000E1, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"subr",        "d,s,t",       0x7C000023, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"subr.s",      "d,s,t",       0x7C0000A3, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"subr2",       "d,s,t",       0x7C000063, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"subr2.s",     "d,s,t",       0x7C0000E3, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"sltr2",       "d,s,t",       0x7C00006A, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"min",         "d,s,t",       0x7C000028, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"min2",        "d,s,t",       0x7C000068, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"max",         "d,s,t",       0x7C000029, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"max2",        "d,s,t",       0x7C000069, 0xFC0007FF, RD_t|RD_s|WR_d, 0, RAD1},
  {"absr",        "d,t",         0x7C00000F, 0xFFE007FF, RD_t|WR_d,      0, RAD1},
  {"absr.s",      "d,t",         0x7C00008F, 0xFFE007FF, RD_t|WR_d,      0, RAD1},
  {"absr2",       "d,t",         0x7C00004F, 0xFFE007FF, RD_t|WR_d,      0, RAD1},
  {"absr2.s",     "d,t",         0x7C0000CF, 0xFFE007FF, RD_t|WR_d,      0, RAD1},
  {"mux2.hh",     "d,s,t",       0x7C00064D, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"mux2.hl",     "d,s,t",       0x7C00044D, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"mux2.lh",     "d,s,t",       0x7C00024D, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"mux2.ll",     "d,s,t",       0x7C00004D, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cls",         "d,t",         0x7C00000E, 0xFFE007FF, RD_t|WR_d,      0, RAD1},
  {"bitrev",      "d,t,s",       0x7c00000c, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cmveqz",      "d,s,t",       0x7C000001, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cmveqz.h",    "d,s,t",       0x7C000081, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cmveqz.l",    "d,s,t",       0x7C000101, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cmvnez",      "d,s,t",       0x7C000041, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cmvnez.h",    "d,s,t",       0x7C0000c1, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  {"cmvnez.l",    "d,s,t",       0x7C000141, 0xFC0007FF, RD_s|RD_t|WR_d, 0, RAD1},
  /* 2006-07-12 tonywu: add taroko support */
  /* 2006-01-19 tonywu: cleanup radiax instructions definition */
  /* dbb:  modified for supporting radiax instructions */

  /* 2006-01-09 tonywu: COP0 registers */
  {"mflxc0",      "t,#d4",       0x40600000, 0xFFE007FF, LCD|WR_t|RD_C0, 0,       RLXB},
  {"mflxc0",      "t,#d4,#H",    0x40600000, 0xFFE007C0, LCD|WR_t|RD_C0, 0,       RLX3},
  {"mtlxc0",      "t,#d4",       0x40E00000, 0xFFE007FF, COD|RD_t|WR_C0|WR_CC, 0, RLXB},
  {"mtlxc0",      "t,#d4,#H",    0x40E00000, 0xFFE007C0, COD|RD_t|WR_C0|WR_CC, 0, RLX3},

  /* 2006-01-19 tonywu: MAC-DIV instructions */
  {"sleep",       "",            0x42000038, 0xffffffff, 0,         0, RLXA},
  {"sleep",       "#I",          0x42000038, 0xfffff83f, 0,         0, RLX3},
  {"madh",        "s,t",         0xF0000000, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"madl",        "s,t",         0xF0000002, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"mazh",        "s,t",         0xF0000004, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"mazl",        "s,t",         0xF0000006, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"msbh",        "s,t",         0xF0000010, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"msbl",        "s,t",         0xF0000012, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"mszh",        "s,t",         0xF0000014, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"mszl",        "s,t",         0xF0000016, 0xFC00FFFF, RD_s|RD_t, 0, RLXA},
  {"ltw",         "#`,#-(b)",    0x7800003C, 0xFC00003F, LDD|RD_b|WR_t, 0, INSN_ISA4181|INSN_ISA4281},

  /* dbb:  modified for supporting 4181 instructions */
  /* No hazard protection on coprocessor instructions--they shouldn't
     change the state of the processor and if they do it's up to the
     user to put in nops as necessary.  These are at the end so that the
     disassembler recognizes more specific versions first.  */
  {"c0",          "C",           0x42000000, 0xfe000000, 0, 0, I1},
  {"c1",          "C",           0x46000000, 0xfe000000, 0, 0, I1},
  {"c2",          "C",           0x4a000000, 0xfe000000, 0, 0, I1},
  {"c3",          "C",           0x4e000000, 0xfe000000, 0, 0, I1},
  {"cop0",        "C",           0,          (int) M_COP0, INSN_MACRO, 0, I1},
  {"cop1",        "C",           0,          (int) M_COP1, INSN_MACRO, 0, I1},
  {"cop2",        "C",           0,          (int) M_COP2, INSN_MACRO, 0, I1},
  {"cop3",        "C",           0,          (int) M_COP3, INSN_MACRO, 0, I1},
  /* Lexra opcode extensions. Register mode */
  {"udi0",        "d,v,t",       0x00000038, 0xfc0007ff, WR_d|RD_s|RD_t, 0, RLXB},
  {"udi1",        "d,v,t",       0x0000003a, 0xfc0007ff, WR_d|RD_s|RD_t, 0, RLXB},
  {"udi2",        "d,v,t",       0x0000003b, 0xfc0007ff, WR_d|RD_s|RD_t, 0, RLXB},
  {"udi3",        "d,v,t",       0x0000003c, 0xfc0007ff, WR_d|RD_s|RD_t, 0, RLXB},
  {"udi4",        "d,v,t",       0x0000003e, 0xfc0007ff, WR_d|RD_s|RD_t, 0, RLXB},
  {"udi5",        "d,v,t",       0x0000003f, 0xfc0007ff, WR_d|RD_s|RD_t, 0, RLXB},
  /* Lexra opcode extensions. Immediate mode */
  {"udi0i",       "t,r,j",       0x60000000, 0xfc000000, WR_t|RD_s, 0, RLXB},
  {"udi1i",       "t,r,j",       0x64000000, 0xfc000000, WR_t|RD_s, 0, RLXB},
  {"udi2i",       "t,r,j",       0x68000000, 0xfc000000, WR_t|RD_s, 0, RLXB},
  {"udi3i",       "t,r,j",       0x6c000000, 0xfc000000, WR_t|RD_s, 0, RLXB},
};

#define MIPS_NUM_OPCODES \
  ((sizeof mips_builtin_opcodes) / (sizeof (mips_builtin_opcodes[0])))
const int bfd_mips_num_builtin_opcodes = MIPS_NUM_OPCODES;

/* const removed from the following to allow for dynamic extensions to the
 * built-in instruction set. */
struct mips_opcode *mips_opcodes =
(struct mips_opcode *) mips_builtin_opcodes;
int bfd_mips_num_opcodes = MIPS_NUM_OPCODES;
#undef MIPS_NUM_OPCODES
