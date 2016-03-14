/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"

static const char *
output_0 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (ISA_HAS_COND_TRAP)
    return "teq\t$0,$0";
  /* The IRIX 6 O32 assembler requires the first break operand.  */
  else if (TARGET_MIPS16 || !TARGET_GAS)
    return "break 0";
  else
    return "break";
}
}

static const char * const output_5[] = {
  "addu\t%0,%z1,%2",
  "addiu\t%0,%z1,%2",
};

static const char *
output_8 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[0]) == REGNO (operands[1]))
    return "addu\t%0,%2";
  else
    return "addu\t%0,%1,%2";
}
}

static const char *
output_9 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return (REGNO (operands[0]) == REGNO (operands[1])
	  && REGNO (operands[0]) == REGNO (operands[2]))
    ? "srl\t%3,%L0,31\n\tsll\t%M0,%M0,1\n\tsll\t%L0,%L1,1\n\taddu\t%M0,%M0,%3"
    : "addu\t%L0,%L1,%L2\n\tsltu\t%3,%L0,%L2\n\taddu\t%M0,%M1,%M2\n\taddu\t%M0,%M0,%3";
}
}

static const char * const output_10[] = {
  "addu\t%L0,%L1,%2\n\tsltu\t%3,%L0,%2\n\taddu\t%M0,%M1,%3",
  "move\t%L0,%L1\n\tmove\t%M0,%M1",
  "subu\t%L0,%L1,%n2\n\tsltu\t%3,%L0,%2\n\tsubu\t%M0,%M1,1\n\taddu\t%M0,%M0,%3",
};

static const char * const output_11[] = {
  "daddu\t%0,%z1,%2",
  "daddiu\t%0,%z1,%2",
};

static const char *
output_14 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[0]) == REGNO (operands[1]))
    return "daddu\t%0,%2";
  else
    return "daddu\t%0,%1,%2";
}
}

static const char * const output_15[] = {
  "addu\t%0,%z1,%2",
  "addiu\t%0,%z1,%2",
};

static const char *
output_16 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[0]) == REGNO (operands[1]))
    return "addu\t%0,%2";
  else
    return "addu\t%0,%1,%2";
}
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 1)
    return "mult\t%1,%2";
  if (TARGET_MAD
      || TARGET_MIPS5400
      || TARGET_MIPS5500
      || TARGET_MIPS7000
      || TARGET_MIPS9000
      || ISA_MIPS32
      || ISA_MIPS32R2
      || ISA_MIPS64)
    return "mul\t%0,%1,%2";
  return "mult\t%0,%1,%2";
}
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  static const char *const madd[] = { "madd\t%1,%2", "madd\t%0,%1,%2" };
  if (which_alternative == 2)
    return "#";
  if (ISA_HAS_MADD_MSUB && which_alternative != 0)
    return "#";
  return madd[which_alternative];
}
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 1)
    return "macc\t%0,%1,%2";
  else if (TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    return "macc\t%.,%1,%2";
}
}

static const char * const output_33[] = {
  "msub\t%2,%3",
  "#",
  "#",
};

static const char * const output_34[] = {
  "muls\t$0,%1,%2",
  "muls\t%0,%1,%2",
};

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 1)
    return "msac\t%0,%2,%3";
  else if (TARGET_MIPS5500)
    return "msub\t%2,%3";
  else
    return "msac\t$0,%2,%3";
}
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GENERATE_MULT3_DI)
    return "dmult\t%0,%1,%2";
  else
    return "dmult\t%1,%2\n\tmflo\t%0";
}
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[4]) == SIGN_EXTEND)
    return "mult\t%2,%3";
  else
    return "multu\t%2,%3";
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS5500)
    return "msub\t%1,%2";
  else
    return "msac\t$0,%1,%2";
}
}

static const char *
output_45 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS5500)
    return "msubu\t%1,%2";
  else
    return "msacu\t$0,%1,%2";
}
}

static const char * const output_47[] = {
  "multu\t%1,%2",
  "mulhiu\t%0,%1,%2",
};

static const char * const output_48[] = {
  "mulshiu\t%.,%1,%2",
  "mulshiu\t%0,%1,%2",
};

static const char * const output_50[] = {
  "mult\t%1,%2",
  "mulhi\t%0,%1,%2",
};

static const char * const output_51[] = {
  "mulshi\t%.,%1,%2",
  "mulshi\t%0,%1,%2",
};

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MAD)
    return "madu\t%1,%2";
  else if (TARGET_MIPS5500)
    return "maddu\t%1,%2";
  else
    return "maccu\t%.,%1,%2";
}
}

static const char *
output_56 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MAD)
    return "mad\t%1,%2";
  else if (TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    return "macc\t%.,%1,%2";
}
}

static const char *
output_65 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "div.d\t%0,%1,%2\n\tmov.d\t%0,%0";
  else
    return "div.d\t%0,%1,%2";
}
}

static const char *
output_66 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "div.s\t%0,%1,%2\n\tmov.s\t%0,%0";
  else
    return "div.s\t%0,%1,%2";
}
}

static const char *
output_67 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "recip.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "recip.d\t%0,%2";
}
}

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "recip.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "recip.s\t%0,%2";
}
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("div\t$0,%1,%2", operands); }
}

static const char *
output_70 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("ddiv\t$0,%1,%2", operands); }
}

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("divu\t$0,%1,%2", operands); }
}

static const char *
output_72 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("ddivu\t$0,%1,%2", operands); }
}

static const char *
output_73 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "sqrt.d\t%0,%1\n\tmov.d\t%0,%0";
  else
    return "sqrt.d\t%0,%1";
}
}

static const char *
output_74 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "sqrt.s\t%0,%1\n\tmov.s\t%0,%0";
  else
    return "sqrt.s\t%0,%1";
}
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = const0_rtx;

  if (REGNO (operands[0]) == REGNO (operands[1]))
    {
      if (GENERATE_BRANCHLIKELY)
	return "%(bltzl\t%1,1f\n\tsubu\t%0,%z2,%0\n%~1:%)";
      else
	return "bgez\t%1,1f%#\n\tsubu\t%0,%z2,%0\n%~1:";
    }
  else
    return "%(bgez\t%1,1f\n\tmove\t%0,%1\n\tsubu\t%0,%z2,%0\n%~1:%)";
}
}

static const char *
output_78 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  unsigned int regno1;
  operands[2] = const0_rtx;

  if (GET_CODE (operands[1]) == REG)
    regno1 = REGNO (operands[1]);
  else
    regno1 = REGNO (XEXP (operands[1], 0));

  if (REGNO (operands[0]) == regno1)
    return "%(bltzl\t%1,1f\n\tdsubu\t%0,%z2,%0\n%~1:%)";
  else
    return "%(bgez\t%1,1f\n\tmove\t%0,%1\n\tdsubu\t%0,%z2,%0\n%~1:%)";
}
}

static const char *
output_81 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (optimize && find_reg_note (insn, REG_DEAD, operands[1]))
    return "%(move\t%0,%.\n\tbeq\t%1,%.,2f\n%~1:\tand\t%2,%1,0x0001\n\taddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tsrl\t%1,%1,1\n%~2:%)";

  return "%(move\t%0,%.\n\tmove\t%3,%1\n\tbeq\t%3,%.,2f\n%~1:\tand\t%2,%3,0x0001\n\taddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tsrl\t%3,%3,1\n%~2:%)";
}
}

static const char *
output_82 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (optimize && find_reg_note (insn, REG_DEAD, operands[1]))
    return "%(move\t%0,%.\n\tbeq\t%1,%.,2f\n%~1:\tand\t%2,%1,0x0001\n\tdaddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tdsrl\t%1,%1,1\n%~2:%)";

  return "%(move\t%0,%.\n\tmove\t%3,%1\n\tbeq\t%3,%.,2f\n%~1:\tand\t%2,%3,0x0001\n\tdaddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tdsrl\t%3,%3,1\n%~2:%)";
}
}

static const char *
output_85 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS16)
    return "neg\t%0,%1";
  else
    return "subu\t%0,%.,%1";
}
}

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char * const output_92[] = {
  "and\t%0,%1,%2",
  "andi\t%0,%1,%x2",
};

static const char * const output_94[] = {
  "and\t%0,%1,%2",
  "andi\t%0,%1,%x2",
};

static const char * const output_96[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_98[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_100[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_101[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_102[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_103[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_107[] = {
  "sll\t%0,%1,0",
  "sw\t%1,%0",
};

static const char * const output_108[] = {
  "sll\t%0,%1,0",
  "sh\t%1,%0",
};

static const char * const output_109[] = {
  "sll\t%0,%1,0",
  "sb\t%1,%0",
};

static const char * const output_119[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_121[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_123[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_125[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_127[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_129[] = {
  "sll\t%0,%1,0",
  "lw\t%0,%1",
};

static const char *
output_144 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (set_nomacro)
    return ".set\tmacro\n\ttrunc.w.d %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.d %0,%1,%2";
}
}

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (set_nomacro)
    return ".set\tmacro\n\ttrunc.w.s %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.s %0,%1,%2";
}
}

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_175 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_176 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_177 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_179 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_180 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_181 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char * const output_190[] = {
  "move\t%0,%1",
  "li\t%0,%1",
  "lhu\t%0,%1",
  "sh\t%z1,%0",
  "mfc1\t%0,%1",
  "mtc1\t%1,%0",
  "mov.s\t%0,%1",
  "mt%0\t%1",
  "mf%1\t%0",
};

static const char * const output_191[] = {
  "move\t%0,%1",
  "move\t%0,%1",
  "move\t%0,%1",
  "li\t%0,%1",
  "li\t%0,%n1\n\tneg\t%0",
  "lhu\t%0,%1",
  "sh\t%1,%0",
  "mf%1\t%0",
};

static const char * const output_192[] = {
  "move\t%0,%1",
  "li\t%0,%1",
  "lbu\t%0,%1",
  "sb\t%z1,%0",
  "mfc1\t%0,%1",
  "mtc1\t%1,%0",
  "mov.s\t%0,%1",
  "mt%0\t%1",
  "mf%1\t%0",
};

static const char * const output_193[] = {
  "move\t%0,%1",
  "move\t%0,%1",
  "move\t%0,%1",
  "li\t%0,%1",
  "li\t%0,%n1\n\tneg\t%0",
  "lbu\t%0,%1",
  "sb\t%1,%0",
  "mf%1\t%0",
};

static const char *
output_194 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_195 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_196 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_197 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[1] = mips_subword (operands[1], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (set_nomacro && which_alternative == 1)
    return ".set\tmacro\n\t.cprestore\t%0\n\t.set\tnomacro";
  else
    return ".cprestore\t%0";
}
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "sll\t%0,%2";

  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%M0,%L1,%2\n\tmove\t%L0,%.";
}
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  int amount = INTVAL (operands[2]);

  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);

  return "sll\t%M0,%M1,%2\n\tsrl\t%3,%L1,%4\n\tor\t%M0,%M0,%3\n\tsll\t%L0,%L1,%2";
}
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsll\t%0,%1,%2";
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "dsll\t%0,%2";

  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsll\t%0,%1,%2";
}
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sra\t%0,%1,%2";
}
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "sra\t%0,%2";

  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sra\t%0,%1,%2";
}
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sra\t%L0,%M1,%2\n\tsra\t%M0,%M1,31";
}
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  int amount = INTVAL (operands[2]);

  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);

  return "srl\t%L0,%L1,%2\n\tsll\t%3,%M1,%4\n\tor\t%L0,%L0,%3\n\tsra\t%M0,%M1,%2";
}
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsra\t%0,%1,%2";
}
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsra\t%0,%2";
}
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srl\t%0,%1,%2";
}
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "srl\t%0,%2";

  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srl\t%0,%1,%2";
}
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "srl\t%L0,%M1,%2\n\tmove\t%M0,%.";
}
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  int amount = INTVAL (operands[2]);

  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);

  return "srl\t%L0,%L1,%2\n\tsll\t%3,%M1,%4\n\tor\t%L0,%L0,%3\n\tsrl\t%M0,%M1,%2";
}
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsrl\t%0,%1,%2";
}
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsrl\t%0,%2";
}
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_SR71K && GET_CODE (operands[2]) != CONST_INT)
    return "rorv\t%0,%1,%2";

  if ((GET_CODE (operands[2]) == CONST_INT)
      && (INTVAL (operands[2]) < 0 || INTVAL (operands[2]) >= 32))
    abort ();

  return "ror\t%0,%1,%2";
}
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_SR71K)
    {
      if (GET_CODE (operands[2]) != CONST_INT)
	return "drorv\t%0,%1,%2";

      if (INTVAL (operands[2]) >= 32 && INTVAL (operands[2]) <= 63)
	return "dror32\t%0,%1,%2";
    }

  if ((GET_CODE (operands[2]) == CONST_INT)
      && (INTVAL (operands[2]) < 0 || INTVAL (operands[2]) >= 64))
    abort ();

  return "dror\t%0,%1,%2";
}
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/1,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_233 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/1,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_235 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_238 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_239 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_240 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_242 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[2] != pc_rtx)
    {
      if (which_alternative == 0)
	return "b%C0z\t%1,%2";
      else
	return "bt%C0z\t%2";
    }
  else
    {
      if (which_alternative == 0)
	return "b%N0z\t%1,%3";
      else
	return "bt%N0z\t%3";
    }
}
}

static const char *
output_243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[2] != pc_rtx)
    {
      if (which_alternative == 0)
	return "b%C0z\t%1,%2";
      else
	return "bt%C0z\t%2";
    }
  else
    {
      if (which_alternative == 0)
	return "b%N0z\t%1,%3";
      else
	return "bt%N0z\t%3";
    }
}
}

static const char *
output_258 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2])+1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2])+1);
  return "slt\t%1,%2";
}
}

static const char *
output_260 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2])+1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_261 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2])+1);
  return "slt\t%1,%2";
}
}

static const char *
output_270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_271 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2])+1);
  return "sltu\t%1,%2";
}
}

static const char *
output_272 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2])+1);
  return "sltu\t%1,%2";
}
}

static const char *
output_296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (flag_pic && ! TARGET_EMBEDDED_PIC)
    {
      if (get_attr_length (insn) <= 8)
	return "%*b\t%l0%/";
      else
	{
	  output_asm_insn (mips_output_load_label (), operands);
	  return "%*jr\t%@%/%]";
	}
    }
  else
    return "%*j\t%l0%/";
}
}

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
    if (set_nomacro)
      return "%(bal\t%S1\n\tsll\t%2,%0,2\n%~%S1:\n\taddu\t%2,%2,$31%)\n\t\
.set macro\n\tlw\t%2,%1-%S1(%2)\n\t.set nomacro\n\taddu\t%2,%2,$31\n\t%*j\t%2%/";
    return
  "%(bal\t%S1\n\tsll\t%2,%0,2\n%~%S1:\n\taddu\t%2,%2,$31%)\n\t\
lw\t%2,%1-%S1(%2)\n\taddu\t%2,%2,$31\n\t%*j\t%2%/"
    ;
  }
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
    if (set_nomacro)
      return "%(bal\t%S1\n\tsll\t%2,%0,3\n%~%S1:\n\tdaddu\t%2,%2,$31%)\n\t\
.set macro\n\tld\t%2,%1-%S1(%2)\n\t.set nomacro\n\tdaddu\t%2,%2,$31\n\t%*j\t%2%/";
    return
  "%(bal\t%S1\n\tsll\t%2,%0,3\n%~%S1:\n\tdaddu\t%2,%2,$31%)\n\t\
ld\t%2,%1-%S1(%2)\n\tdaddu\t%2,%2,$31\n\t%*j\t%2%/"
    ;
  }
}

static const char * const output_313[] = {
  "%*jr\t%0%/",
  "%*j\t%0%/",
};

static const char * const output_314[] = {
  "%*jr\t%1%/",
  "%*j\t%1%/",
};

static const char * const output_315[] = {
  "%*jr\t%1%/",
  "%*j\t%1%/",
};

static const char *
output_316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return TARGET_SPLIT_CALLS ? "#" : "%*jal\t%0%/"; }
}

static const char *
output_318 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return TARGET_SPLIT_CALLS ? "#" : "%*jal\t%1%/"; }
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return TARGET_SPLIT_CALLS ? "#" : "%*jal\t%1%/"; }
}

static const char *
output_322 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_emit_prefetch (operands); }
}

static const char *
output_323 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_emit_prefetch (operands); }
}

static const char *
output_324 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[3] = const0_rtx;
  return mips_emit_prefetch (operands);
}
}

static const char *
output_325 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_emit_prefetch (operands); }
}

static const char *
output_326 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_emit_prefetch (operands); }
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[3] = const0_rtx;
  return mips_emit_prefetch (operands);
}
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
    if (set_noreorder)
      return "nop";
    else
      return "#nop";
  }
}

static const char * const output_330[] = {
  "mov%B4\t%0,%z2,%1",
  "mov%b4\t%0,%z3,%1",
};

static const char * const output_331[] = {
  "mov%B4\t%0,%z2,%1",
  "mov%b4\t%0,%z3,%1",
};

static const char * const output_332[] = {
  "mov%T3\t%0,%z1,%4",
  "mov%t3\t%0,%z2,%4",
};

static const char * const output_333[] = {
  "mov%B4\t%0,%z2,%1",
  "mov%b4\t%0,%z3,%1",
};

static const char * const output_334[] = {
  "mov%B4\t%0,%z2,%1",
  "mov%b4\t%0,%z3,%1",
};

static const char * const output_335[] = {
  "mov%T3\t%0,%z1,%4",
  "mov%t3\t%0,%z2,%4",
};

static const char * const output_336[] = {
  "mov%B4.s\t%0,%2,%1",
  "mov%b4.s\t%0,%3,%1",
};

static const char * const output_337[] = {
  "mov%B4.s\t%0,%2,%1",
  "mov%b4.s\t%0,%3,%1",
};

static const char * const output_338[] = {
  "mov%T3.s\t%0,%1,%4",
  "mov%t3.s\t%0,%2,%4",
};

static const char * const output_339[] = {
  "mov%B4.d\t%0,%2,%1",
  "mov%b4.d\t%0,%3,%1",
};

static const char * const output_340[] = {
  "mov%B4.d\t%0,%2,%1",
  "mov%b4.d\t%0,%3,%1",
};

static const char * const output_341[] = {
  "mov%T3.d\t%0,%1,%4",
  "mov%t3.d\t%0,%2,%4",
};

static const char *
output_342 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  assemble_integer (operands[0], 1, BITS_PER_UNIT, 1);
  return "";
}
}

static const char *
output_343 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  assemble_integer (operands[0], 2, BITS_PER_UNIT * 2, 1);
  return "";
}
}

static const char *
output_344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  assemble_integer (operands[0], 4, BITS_PER_UNIT * 4, 1);
  return "";
}
}

static const char *
output_345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  assemble_integer (operands[0], 8, BITS_PER_UNIT * 8, 1);
  return "";
}
}

static const char *
output_346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  REAL_VALUE_TYPE d;

  if (GET_CODE (operands[0]) != CONST_DOUBLE)
    abort ();
  REAL_VALUE_FROM_CONST_DOUBLE (d, operands[0]);
  assemble_real (d, SFmode, GET_MODE_ALIGNMENT (SFmode));
  return "";
}
}

static const char *
output_347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  REAL_VALUE_TYPE d;

  if (GET_CODE (operands[0]) != CONST_DOUBLE)
    abort ();
  REAL_VALUE_FROM_CONST_DOUBLE (d, operands[0]);
  assemble_real (d, DFmode, GET_MODE_ALIGNMENT (DFmode));
  return "";
}
}

static const char *
output_530 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[3] != pc_rtx)
    return "b%C2z\t%1,%3";
  else
    return "b%N2z\t%1,%4";
}
}

static const char *
output_531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[3] != pc_rtx)
    return "b%C2z\t%1,%3";
  else
    return "b%N2z\t%1,%4";
}
}

static const char *
output_532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[3] != pc_rtx)
    return "bt%C2z\t%3";
  else
    return "bt%N2z\t%4";
}
}

static const char *
output_533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[3] != pc_rtx)
    return "bt%C2z\t%3";
  else
    return "bt%N2z\t%4";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    trap_cmp_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    trap_cmp_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    1
  },
  {
    small_int,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    small_int,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d,d",
    DImode,
    0,
    1
  },
  {
    small_int,
    "P,J,N",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    DImode,
    0,
    1
  },
  {
    small_int,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    small_int,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=l,X",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,*d,*d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,*d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,3,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,3",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,*d,*d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,*d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,1,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    extend_operator,
    "",
    DImode,
    0,
    0
  },
  {
    extend_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=h",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    extend_operator,
    "",
    DImode,
    0,
    0
  },
  {
    extend_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "+l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    const_float_1_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    const_float_1_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "%d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,t,t",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "%0,d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0,d,d",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    small_int,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "W",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    stack_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*x,*d,*x,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "d,iF,m,d,J,*x,*d,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "d,d,y,K,N,m,d,*x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*f,*d,*m,*x,*d,*x,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*f,*d*J,*m,*f,*f,*J,*x,*d,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,m,*d",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,m,d,*x",
    DImode,
    0,
    1
  },
  {
    stack_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*f,*d,*m,*d,*z,*x,*d,*x,*B*C*D,*B*C*D,*d,*m",
    SImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*f,*d*J,*m,*f,*f,*z,*d,J,*x,*d,*d,*m,*B*C*D,*B*C*D",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,m,*d",
    SImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,m,d,*x",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,*d,*d,*m,*d,*f,*f,*f,*m",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "z,*d,*m,*d,*f,*d,*f,*m,*f",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*d,*f,*f,*x,*d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "d,IK,m,dJ,*f,*d,*f,*d,*x",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "d,d,y,K,N,m,d,*x",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*d,*f,*f,*x,*d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "d,IK,m,dJ,*f,*d,*f,*d,*x",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "d,d,y,K,N,m,d,*x",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,*f,*d,*d,*d,*m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "f,G,m,fG,*d,*f,*G*d,*m,*d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "Gd,m,d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,d,y,m,d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,*f,*d,*d,*d,*m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "f,G,m,fG,*d,*f,*d*G,*m,*d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m,d,f,f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "dG,m,dG,f,d,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,d,y,m,d",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "I,i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    small_int,
    "IJK",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dn",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dn",
    DImode,
    0,
    1
  },
  {
    cmp_op,
    "",
    CCmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCmode,
    0,
    1
  },
  {
    cmp_op,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    cmp_op,
    "",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    equality_op,
    "",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    SImode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_op,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    DImode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    small_int,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    small_int,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    small_int,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    small_int,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    consttable_operand,
    "=g",
    QImode,
    0,
    1
  },
  {
    consttable_operand,
    "=g",
    HImode,
    0,
    1
  },
  {
    consttable_operand,
    "=g",
    SImode,
    0,
    1
  },
  {
    consttable_operand,
    "=g",
    DImode,
    0,
    1
  },
  {
    consttable_operand,
    "=g",
    SFmode,
    0,
    1
  },
  {
    consttable_operand,
    "=g",
    DFmode,
    0,
    1
  },
  {
    cmp_op,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    small_int,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    extend_operator,
    "",
    DImode,
    0,
    0
  },
  {
    extend_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    reg_or_const_float_1_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    reg_or_const_float_1_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=&f",
    TFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=&f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    small_int,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    equality_op,
    "",
    SImode,
    0,
    0
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    DImode,
    0,
    0
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    equality_op,
    "",
    SImode,
    0,
    0
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "t",
    DImode,
    0,
    1
  },
  {
    equality_op,
    "",
    DImode,
    0,
    0
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    small_data_pattern,
    "",
    VOIDmode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_0 },
#else
    { 0, 0, output_0 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*mips.md:654",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:662",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    3,
    0,
    1,
    1
  },
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  {
    "addsi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    (insn_gen_fn) gen_addsi3_internal,
    &operand_data[13],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:739",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%$,%$,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[16],
    1,
    0,
    1,
    1
  },
  {
    "*mips.md:751",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%$,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:763",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_8 },
#else
    { 0, 0, output_8 },
#endif
    0,
    &operand_data[19],
    3,
    0,
    3,
    3
  },
  {
    "adddi3_internal_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_9 },
#else
    { 0, 0, output_9 },
#endif
    (insn_gen_fn) gen_adddi3_internal_1,
    &operand_data[22],
    4,
    0,
    2,
    3
  },
  {
    "adddi3_internal_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    (insn_gen_fn) gen_adddi3_internal_2,
    &operand_data[26],
    4,
    0,
    3,
    2
  },
  {
    "adddi3_internal_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    (insn_gen_fn) gen_adddi3_internal_3,
    &operand_data[30],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:1056",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%$,%$,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[33],
    1,
    0,
    1,
    1
  },
  {
    "*mips.md:1068",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%$,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:1080",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_14 },
#else
    { 0, 0, output_14 },
#endif
    0,
    &operand_data[36],
    3,
    0,
    3,
    3
  },
  {
    "addsi3_internal_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    (insn_gen_fn) gen_addsi3_internal_2,
    &operand_data[39],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:1193",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_16 },
#else
    { 0, 0, output_16 },
#endif
    0,
    &operand_data[42],
    3,
    0,
    3,
    3
  },
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  {
    "subsi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_internal,
    &operand_data[45],
    3,
    0,
    1,
    1
  },
  {
    "subdi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%3,%L1,%L2\n\tsubu\t%L0,%L1,%L2\n\tsubu\t%M0,%M1,%M2\n\tsubu\t%M0,%M0,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3_internal,
    &operand_data[48],
    4,
    0,
    1,
    1
  },
  {
    "subdi3_internal_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3_internal_3,
    &operand_data[48],
    3,
    0,
    1,
    1
  },
  {
    "subsi3_internal_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_internal_2,
    &operand_data[52],
    3,
    0,
    1,
    1
  },
  {
    "muldf3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldf3_internal,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  {
    "muldf3_r4300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldf3_r4300,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  {
    "mulsf3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3_internal,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  {
    "mulsf3_r4300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3_r4300,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  {
    "mulsi3_mult3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    (insn_gen_fn) gen_mulsi3_mult3,
    &operand_data[55],
    5,
    0,
    2,
    3
  },
  {
    "mulsi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_internal,
    &operand_data[60],
    4,
    0,
    1,
    1
  },
  {
    "mulsi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_r4000,
    &operand_data[64],
    5,
    0,
    1,
    1
  },
  {
    "*mul_acc_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    0,
    &operand_data[69],
    7,
    0,
    3,
    3
  },
  {
    "*macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    0,
    &operand_data[76],
    6,
    0,
    2,
    3
  },
  {
    "*macc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macc\t%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[82],
    5,
    4,
    1,
    1
  },
  {
    "*mul_sub_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_33 },
#else
    { 0, output_33, 0 },
#endif
    0,
    &operand_data[87],
    7,
    0,
    3,
    2
  },
  {
    "*muls",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_34 },
#else
    { 0, output_34, 0 },
#endif
    0,
    &operand_data[94],
    5,
    0,
    2,
    2
  },
  {
    "*msac",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    0,
    &operand_data[99],
    6,
    0,
    2,
    3
  },
  {
    "muldi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_internal,
    &operand_data[105],
    4,
    0,
    1,
    1
  },
  {
    "muldi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_37 },
#else
    { 0, 0, output_37 },
#endif
    (insn_gen_fn) gen_muldi3_internal2,
    &operand_data[109],
    5,
    0,
    1,
    3
  },
  {
    "mulsidi3_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_32bit,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*mulsidi3_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[117],
    8,
    0,
    1,
    1
  },
  {
    "*mulsidi3_64bit_parts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    0,
    &operand_data[125],
    6,
    2,
    1,
    3
  },
  {
    "umulsidi3_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_32bit,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*muls_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t$0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*umuls_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsu\t$0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*smsac_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_44 },
#else
    { 0, 0, output_44 },
#endif
    0,
    &operand_data[131],
    4,
    0,
    1,
    3
  },
  {
    "*umsac_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_45 },
#else
    { 0, 0, output_45 },
#endif
    0,
    &operand_data[131],
    4,
    0,
    1,
    3
  },
  {
    "umulsi3_highpart_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_internal,
    &operand_data[135],
    4,
    0,
    1,
    1
  },
  {
    "umulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_mulhi_internal,
    &operand_data[139],
    5,
    0,
    2,
    2
  },
  {
    "umulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_neg_mulhi_internal,
    &operand_data[139],
    5,
    0,
    2,
    2
  },
  {
    "smulsi3_highpart_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_internal,
    &operand_data[135],
    4,
    0,
    1,
    1
  },
  {
    "smulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_50 },
#else
    { 0, output_50, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_mulhi_internal,
    &operand_data[139],
    5,
    0,
    2,
    2
  },
  {
    "smulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_51 },
#else
    { 0, output_51, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_neg_mulhi_internal,
    &operand_data[139],
    5,
    0,
    2,
    2
  },
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[144],
    4,
    0,
    1,
    1
  },
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[144],
    4,
    0,
    1,
    1
  },
  {
    "madsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mad\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_madsi,
    &operand_data[148],
    4,
    1,
    1,
    1
  },
  {
    "*umul_acc_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    0,
    &operand_data[131],
    4,
    0,
    1,
    3
  },
  {
    "*smul_acc_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_56 },
#else
    { 0, 0, output_56 },
#endif
    0,
    &operand_data[131],
    4,
    0,
    1,
    3
  },
  {
    "*mips.md:2281",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[152],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2291",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2301",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[152],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2311",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2322",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[152],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2332",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2342",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[152],
    4,
    0,
    1,
    1
  },
  {
    "*mips.md:2352",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    4,
    0,
    1,
    1
  },
  {
    "*divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_65 },
#else
    { 0, 0, output_65 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    3
  },
  {
    "*divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_66 },
#else
    { 0, 0, output_66 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:2456",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_67 },
#else
    { 0, 0, output_67 },
#endif
    0,
    &operand_data[160],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:2476",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    0,
    &operand_data[163],
    3,
    0,
    1,
    3
  },
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[166],
    4,
    2,
    1,
    3
  },
  {
    "divmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_70 },
#else
    { 0, 0, output_70 },
#endif
    (insn_gen_fn) gen_divmoddi4,
    &operand_data[170],
    4,
    2,
    1,
    3
  },
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[166],
    4,
    2,
    1,
    3
  },
  {
    "udivmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_72 },
#else
    { 0, 0, output_72 },
#endif
    (insn_gen_fn) gen_udivmoddi4,
    &operand_data[170],
    4,
    2,
    1,
    3
  },
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_73 },
#else
    { 0, 0, output_73 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[7],
    2,
    0,
    1,
    3
  },
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_74 },
#else
    { 0, 0, output_74 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[10],
    2,
    0,
    1,
    3
  },
  {
    "*mips.md:2589",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_75 },
#else
    { 0, 0, output_75 },
#endif
    0,
    &operand_data[160],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:2609",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_76 },
#else
    { 0, 0, output_76 },
#endif
    0,
    &operand_data[163],
    3,
    0,
    1,
    3
  },
  {
    "abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_77 },
#else
    { 0, 0, output_77 },
#endif
    (insn_gen_fn) gen_abssi2,
    &operand_data[45],
    2,
    0,
    1,
    3
  },
  {
    "absdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_78 },
#else
    { 0, 0, output_78 },
#endif
    (insn_gen_fn) gen_absdi2,
    &operand_data[48],
    2,
    0,
    1,
    3
  },
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_81 },
#else
    { 0, 0, output_81 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[174],
    4,
    0,
    1,
    3
  },
  {
    "ffsdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_82 },
#else
    { 0, 0, output_82 },
#endif
    (insn_gen_fn) gen_ffsdi2,
    &operand_data[178],
    4,
    0,
    1,
    3
  },
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[45],
    2,
    0,
    1,
    1
  },
  {
    "clzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dclz\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzdi2,
    &operand_data[48],
    2,
    0,
    1,
    1
  },
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_85 },
#else
    { 0, 0, output_85 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[45],
    2,
    0,
    1,
    3
  },
  {
    "negdi2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%L0,%.,%L1\n\tsubu\t%M0,%.,%M1\n\tsltu\t%2,%.,%L0\n\tsubu\t%M0,%M0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdi2_internal,
    &operand_data[182],
    3,
    0,
    1,
    1
  },
  {
    "negdi2_internal_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdi2_internal_2,
    &operand_data[48],
    2,
    0,
    1,
    1
  },
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_90 },
#else
    { 0, 0, output_90 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[45],
    2,
    0,
    1,
    3
  },
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[48],
    2,
    0,
    1,
    3
  },
  {
    "*mips.md:2909",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:2920",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:2942",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_94 },
#else
    { 0, output_94, 0 },
#endif
    0,
    &operand_data[191],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:2953",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[194],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:2975",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:2986",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:3008",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_98 },
#else
    { 0, output_98, 0 },
#endif
    0,
    &operand_data[191],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:3019",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[194],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:3035",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_100 },
#else
    { 0, output_100, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:3046",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_101 },
#else
    { 0, output_101, 0 },
#endif
    0,
    &operand_data[197],
    3,
    0,
    3,
    2
  },
  {
    "*mips.md:3077",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_102 },
#else
    { 0, output_102, 0 },
#endif
    0,
    &operand_data[191],
    3,
    0,
    2,
    2
  },
  {
    "*mips.md:3088",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_103 },
#else
    { 0, output_103, 0 },
#endif
    0,
    &operand_data[200],
    3,
    0,
    3,
    2
  },
  {
    "*norsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[45],
    3,
    0,
    1,
    1
  },
  {
    "*nordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[48],
    3,
    0,
    1,
    1
  },
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[203],
    2,
    0,
    1,
    1
  },
  {
    "truncdisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    (insn_gen_fn) gen_truncdisi2,
    &operand_data[205],
    2,
    0,
    2,
    2
  },
  {
    "truncdihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_108 },
#else
    { 0, output_108, 0 },
#endif
    (insn_gen_fn) gen_truncdihi2,
    &operand_data[207],
    2,
    0,
    2,
    2
  },
  {
    "truncdiqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_109 },
#else
    { 0, output_109, 0 },
#endif
    (insn_gen_fn) gen_truncdiqi2,
    &operand_data[209],
    2,
    0,
    2,
    2
  },
  {
    "*mips.md:3189",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:3198",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3211",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3226",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3244",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3253",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3262",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[214],
    2,
    0,
    1,
    1
  },
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[52],
    2,
    0,
    1,
    1
  },
  {
    "*zero_extendsidi2_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[216],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3318",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_119 },
#else
    { 0, output_119, 0 },
#endif
    0,
    &operand_data[218],
    2,
    0,
    2,
    2
  },
  {
    "*mips.md:3329",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[220],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3352",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_121 },
#else
    { 0, output_121, 0 },
#endif
    0,
    &operand_data[222],
    2,
    0,
    2,
    2
  },
  {
    "*mips.md:3363",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[224],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_123 },
#else
    { 0, output_123, 0 },
#endif
    0,
    &operand_data[226],
    2,
    0,
    2,
    2
  },
  {
    "*mips.md:3398",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[228],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3421",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_125 },
#else
    { 0, output_125, 0 },
#endif
    0,
    &operand_data[230],
    2,
    0,
    2,
    2
  },
  {
    "*mips.md:3432",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[232],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:3455",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_127 },
#else
    { 0, output_127, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  {
    "*mips.md:3466",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    1,
    1
  },
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_129 },
#else
    { 0, output_129, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[238],
    2,
    0,
    2,
    2
  },
  {
    "*extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[240],
    2,
    0,
    1,
    1
  },
  {
    "*extendhidi2_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lh\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[224],
    2,
    0,
    1,
    1
  },
  {
    "*extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    1,
    1
  },
  {
    "extendhisi2_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lh\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2_mem,
    &operand_data[220],
    2,
    0,
    1,
    1
  },
  {
    "extendhisi2_hw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "seh\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2_hw,
    &operand_data[244],
    2,
    0,
    1,
    1
  },
  {
    "*extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[246],
    2,
    0,
    1,
    1
  },
  {
    "*extendqihi2_internal_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[228],
    2,
    0,
    1,
    1
  },
  {
    "*extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[248],
    2,
    0,
    1,
    1
  },
  {
    "*extendqisi2_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[232],
    2,
    0,
    1,
    1
  },
  {
    "extendqisi2_hw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "seb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2_hw,
    &operand_data[250],
    2,
    0,
    1,
    1
  },
  {
    "*extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[252],
    2,
    0,
    1,
    1
  },
  {
    "*extendqidi2_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    1,
    1
  },
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[254],
    2,
    0,
    1,
    1
  },
  {
    "fix_truncdfsi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.d %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_insn,
    &operand_data[256],
    2,
    0,
    1,
    1
  },
  {
    "fix_truncdfsi2_macro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_144 },
#else
    { 0, 0, output_144 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_macro,
    &operand_data[256],
    3,
    0,
    1,
    3
  },
  {
    "fix_truncsfsi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.s %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2_insn,
    &operand_data[259],
    2,
    0,
    1,
    1
  },
  {
    "fix_truncsfsi2_macro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_146 },
#else
    { 0, 0, output_146 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2_macro,
    &operand_data[259],
    3,
    0,
    1,
    3
  },
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.d %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[262],
    2,
    0,
    1,
    1
  },
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.s %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[264],
    2,
    0,
    1,
    1
  },
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[266],
    2,
    0,
    1,
    1
  },
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.l\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[268],
    2,
    0,
    1,
    1
  },
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[270],
    2,
    0,
    1,
    1
  },
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.l\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[272],
    2,
    0,
    1,
    1
  },
  {
    "mov_lwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwl\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_lwl,
    &operand_data[274],
    3,
    0,
    1,
    1
  },
  {
    "mov_lwr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwr\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_lwr,
    &operand_data[274],
    4,
    0,
    1,
    1
  },
  {
    "mov_swl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swl\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_swl,
    &operand_data[278],
    3,
    0,
    1,
    1
  },
  {
    "mov_swr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swr\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_swr,
    &operand_data[281],
    3,
    1,
    1,
    1
  },
  {
    "mov_ldl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldl\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_ldl,
    &operand_data[284],
    3,
    0,
    1,
    1
  },
  {
    "mov_ldr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_ldr,
    &operand_data[284],
    4,
    0,
    1,
    1
  },
  {
    "mov_sdl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdl\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_sdl,
    &operand_data[288],
    3,
    0,
    1,
    1
  },
  {
    "mov_sdr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdr\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_sdr,
    &operand_data[291],
    3,
    1,
    1,
    1
  },
  {
    "*xgot_hisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[294],
    2,
    0,
    1,
    1
  },
  {
    "*xgot_losi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[296],
    3,
    0,
    1,
    1
  },
  {
    "*xgot_hidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[299],
    2,
    0,
    1,
    1
  },
  {
    "*xgot_lodi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[301],
    3,
    0,
    1,
    1
  },
  {
    "*got_dispsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[294],
    2,
    0,
    1,
    1
  },
  {
    "*got_dispdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[299],
    2,
    0,
    1,
    1
  },
  {
    "*got_pagesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[304],
    2,
    0,
    1,
    1
  },
  {
    "*got_pagedi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[306],
    2,
    0,
    1,
    1
  },
  {
    "*lowsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[308],
    3,
    0,
    1,
    1
  },
  {
    "*lowdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[311],
    3,
    0,
    1,
    1
  },
  {
    "*lowsi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[314],
    3,
    0,
    1,
    1
  },
  {
    "*lowdi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[317],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4347",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t$31,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[320],
    1,
    0,
    1,
    1
  },
  {
    "movdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    (insn_gen_fn) gen_movdi_internal,
    &operand_data[321],
    2,
    0,
    11,
    3
  },
  {
    "*mips.md:4368",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_175 },
#else
    { 0, 0, output_175 },
#endif
    0,
    &operand_data[323],
    2,
    0,
    8,
    3
  },
  {
    "movdi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_176 },
#else
    { 0, 0, output_176 },
#endif
    (insn_gen_fn) gen_movdi_internal2,
    &operand_data[325],
    2,
    0,
    17,
    3
  },
  {
    "*movdi_internal2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_177 },
#else
    { 0, 0, output_177 },
#endif
    0,
    &operand_data[327],
    2,
    0,
    9,
    3
  },
  {
    "*mips.md:4494",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t$31,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[329],
    1,
    0,
    1,
    1
  },
  {
    "movsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_179 },
#else
    { 0, 0, output_179 },
#endif
    (insn_gen_fn) gen_movsi_internal,
    &operand_data[330],
    2,
    0,
    19,
    3
  },
  {
    "*mips.md:4517",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_180 },
#else
    { 0, 0, output_180 },
#endif
    0,
    &operand_data[332],
    2,
    0,
    9,
    3
  },
  {
    "movcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_181 },
#else
    { 0, 0, output_181 },
#endif
    (insn_gen_fn) gen_movcc,
    &operand_data[334],
    2,
    0,
    9,
    3
  },
  {
    "*mips.md:4682",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4692",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[339],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4702",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[342],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4712",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[345],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4722",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[348],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4732",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[351],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4742",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[354],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:4752",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[357],
    3,
    0,
    1,
    1
  },
  {
    "movhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_190 },
#else
    { 0, output_190, 0 },
#endif
    (insn_gen_fn) gen_movhi_internal,
    &operand_data[360],
    2,
    0,
    9,
    2
  },
  {
    "*mips.md:4808",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_191 },
#else
    { 0, output_191, 0 },
#endif
    0,
    &operand_data[362],
    2,
    0,
    8,
    2
  },
  {
    "movqi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_192 },
#else
    { 0, output_192, 0 },
#endif
    (insn_gen_fn) gen_movqi_internal,
    &operand_data[364],
    2,
    0,
    9,
    2
  },
  {
    "*mips.md:4928",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_193 },
#else
    { 0, output_193, 0 },
#endif
    0,
    &operand_data[366],
    2,
    0,
    8,
    2
  },
  {
    "movsf_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_194 },
#else
    { 0, 0, output_194 },
#endif
    (insn_gen_fn) gen_movsf_internal1,
    &operand_data[368],
    2,
    0,
    9,
    3
  },
  {
    "movsf_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_195 },
#else
    { 0, 0, output_195 },
#endif
    (insn_gen_fn) gen_movsf_internal2,
    &operand_data[370],
    2,
    0,
    3,
    3
  },
  {
    "*mips.md:5012",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_196 },
#else
    { 0, 0, output_196 },
#endif
    0,
    &operand_data[372],
    2,
    0,
    5,
    3
  },
  {
    "movdf_internal1a",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_197 },
#else
    { 0, 0, output_197 },
#endif
    (insn_gen_fn) gen_movdf_internal1a,
    &operand_data[374],
    2,
    0,
    9,
    3
  },
  {
    "movdf_internal1b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_198 },
#else
    { 0, 0, output_198 },
#endif
    (insn_gen_fn) gen_movdf_internal1b,
    &operand_data[374],
    2,
    0,
    9,
    3
  },
  {
    "movdf_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    (insn_gen_fn) gen_movdf_internal2,
    &operand_data[376],
    2,
    0,
    6,
    3
  },
  {
    "*mips.md:5070",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    0,
    &operand_data[378],
    2,
    0,
    5,
    3
  },
  {
    "load_df_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    (insn_gen_fn) gen_load_df_low,
    &operand_data[380],
    2,
    0,
    2,
    3
  },
  {
    "load_df_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    (insn_gen_fn) gen_load_df_high,
    &operand_data[380],
    3,
    0,
    2,
    3
  },
  {
    "store_df_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    (insn_gen_fn) gen_store_df_high,
    &operand_data[383],
    2,
    0,
    2,
    3
  },
  {
    "loadgp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp,
    &operand_data[385],
    2,
    0,
    0,
    1
  },
  {
    "loadgp_blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "cprestore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    (insn_gen_fn) gen_cprestore,
    &operand_data[387],
    1,
    0,
    2,
    3
  },
  {
    "ashlsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    (insn_gen_fn) gen_ashlsi3_internal1,
    &operand_data[388],
    3,
    0,
    1,
    3
  },
  {
    "ashlsi3_internal1_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    (insn_gen_fn) gen_ashlsi3_internal1_extend,
    &operand_data[391],
    3,
    0,
    1,
    3
  },
  {
    "ashlsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    (insn_gen_fn) gen_ashlsi3_internal2,
    &operand_data[394],
    3,
    0,
    2,
    3
  },
  {
    "ashldi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sll\t%3,%2,26\n\tbgez\t%3,1f%#\n\tsll\t%M0,%L1,%2\n\t%(b\t3f\n\tmove\t%L0,%.%)\n\n%~1:\n\t%(beq\t%3,%.,2f\n\tsll\t%M0,%M1,%2%)\n\n\tsubu\t%3,%.,%2\n\tsrl\t%3,%L1,%3\n\tor\t%M0,%M0,%3\n%~2:\n\tsll\t%L0,%L1,%2\n%~3:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_internal,
    &operand_data[397],
    4,
    0,
    1,
    1
  },
  {
    "ashldi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    (insn_gen_fn) gen_ashldi3_internal2,
    &operand_data[401],
    4,
    0,
    1,
    3
  },
  {
    "ashldi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    (insn_gen_fn) gen_ashldi3_internal3,
    &operand_data[401],
    4,
    0,
    1,
    3
  },
  {
    "ashldi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    (insn_gen_fn) gen_ashldi3_internal4,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:5542",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[408],
    3,
    0,
    2,
    3
  },
  {
    "ashrsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    (insn_gen_fn) gen_ashrsi3_internal1,
    &operand_data[388],
    3,
    0,
    1,
    3
  },
  {
    "ashrsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    (insn_gen_fn) gen_ashrsi3_internal2,
    &operand_data[394],
    3,
    0,
    2,
    3
  },
  {
    "ashrdi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sll\t%3,%2,26\n\tbgez\t%3,1f%#\n\tsra\t%L0,%M1,%2\n\t%(b\t3f\n\tsra\t%M0,%M1,31%)\n\n%~1:\n\t%(beq\t%3,%.,2f\n\tsrl\t%L0,%L1,%2%)\n\n\tsubu\t%3,%.,%2\n\tsll\t%3,%M1,%3\n\tor\t%L0,%L0,%3\n%~2:\n\tsra\t%M0,%M1,%2\n%~3:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_internal,
    &operand_data[397],
    4,
    0,
    1,
    1
  },
  {
    "ashrdi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    (insn_gen_fn) gen_ashrdi3_internal2,
    &operand_data[401],
    4,
    0,
    1,
    3
  },
  {
    "ashrdi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    (insn_gen_fn) gen_ashrdi3_internal3,
    &operand_data[401],
    4,
    0,
    1,
    3
  },
  {
    "ashrdi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    (insn_gen_fn) gen_ashrdi3_internal4,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:5873",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    0,
    &operand_data[411],
    3,
    0,
    2,
    3
  },
  {
    "lshrsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    (insn_gen_fn) gen_lshrsi3_internal1,
    &operand_data[388],
    3,
    0,
    1,
    3
  },
  {
    "lshrsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    (insn_gen_fn) gen_lshrsi3_internal2,
    &operand_data[394],
    3,
    0,
    2,
    3
  },
  {
    "*mips.md:5993",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[414],
    3,
    0,
    1,
    1
  },
  {
    "lshrdi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sll\t%3,%2,26\n\tbgez\t%3,1f%#\n\tsrl\t%L0,%M1,%2\n\t%(b\t3f\n\tmove\t%M0,%.%)\n\n%~1:\n\t%(beq\t%3,%.,2f\n\tsrl\t%L0,%L1,%2%)\n\n\tsubu\t%3,%.,%2\n\tsll\t%3,%M1,%3\n\tor\t%L0,%L0,%3\n%~2:\n\tsrl\t%M0,%M1,%2\n%~3:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3_internal,
    &operand_data[397],
    4,
    0,
    1,
    1
  },
  {
    "lshrdi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    (insn_gen_fn) gen_lshrdi3_internal2,
    &operand_data[401],
    4,
    0,
    1,
    3
  },
  {
    "lshrdi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    (insn_gen_fn) gen_lshrdi3_internal3,
    &operand_data[401],
    4,
    0,
    1,
    3
  },
  {
    "lshrdi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    (insn_gen_fn) gen_lshrdi3_internal4,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:6224",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    0,
    &operand_data[411],
    3,
    0,
    2,
    3
  },
  {
    "rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[417],
    3,
    0,
    1,
    3
  },
  {
    "rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    (insn_gen_fn) gen_rotrdi3,
    &operand_data[420],
    3,
    0,
    1,
    3
  },
  {
    "branch_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    (insn_gen_fn) gen_branch_fp,
    &operand_data[423],
    3,
    0,
    1,
    3
  },
  {
    "branch_fp_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_233 },
#else
    { 0, 0, output_233 },
#endif
    (insn_gen_fn) gen_branch_fp_inverted,
    &operand_data[423],
    3,
    0,
    1,
    3
  },
  {
    "branch_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    (insn_gen_fn) gen_branch_zero,
    &operand_data[426],
    3,
    0,
    1,
    3
  },
  {
    "branch_zero_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_235 },
#else
    { 0, 0, output_235 },
#endif
    (insn_gen_fn) gen_branch_zero_inverted,
    &operand_data[426],
    3,
    0,
    1,
    3
  },
  {
    "branch_zero_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    (insn_gen_fn) gen_branch_zero_di,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  {
    "branch_zero_di_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    (insn_gen_fn) gen_branch_zero_di_inverted,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  {
    "branch_equality",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_238 },
#else
    { 0, 0, output_238 },
#endif
    (insn_gen_fn) gen_branch_equality,
    &operand_data[432],
    4,
    0,
    1,
    3
  },
  {
    "branch_equality_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_239 },
#else
    { 0, 0, output_239 },
#endif
    (insn_gen_fn) gen_branch_equality_di,
    &operand_data[436],
    4,
    0,
    1,
    3
  },
  {
    "branch_equality_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_240 },
#else
    { 0, 0, output_240 },
#endif
    (insn_gen_fn) gen_branch_equality_inverted,
    &operand_data[432],
    4,
    0,
    1,
    3
  },
  {
    "branch_equality_di_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    (insn_gen_fn) gen_branch_equality_di_inverted,
    &operand_data[436],
    4,
    0,
    1,
    3
  },
  {
    "*mips.md:6608",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_242 },
#else
    { 0, 0, output_242 },
#endif
    0,
    &operand_data[440],
    4,
    0,
    2,
    3
  },
  {
    "*mips.md:6636",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_243 },
#else
    { 0, 0, output_243 },
#endif
    0,
    &operand_data[444],
    4,
    0,
    2,
    3
  },
  {
    "seq_si_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_si_zero,
    &operand_data[45],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:6922",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[448],
    2,
    0,
    1,
    1
  },
  {
    "seq_di_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_di_zero,
    &operand_data[48],
    2,
    0,
    1,
    1
  },
  {
    "*mips.md:6940",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  {
    "sne_si_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sne_si_zero,
    &operand_data[45],
    2,
    0,
    1,
    1
  },
  {
    "sne_di_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sne_di_zero,
    &operand_data[48],
    2,
    0,
    1,
    1
  },
  {
    "sgt_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_si,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7134",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  {
    "sgt_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_di,
    &operand_data[458],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7152",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[48],
    3,
    0,
    1,
    1
  },
  {
    "slt_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_si,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7261",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[461],
    3,
    0,
    2,
    1
  },
  {
    "slt_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_di,
    &operand_data[464],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7284",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    2,
    1
  },
  {
    "sle_si_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_258 },
#else
    { 0, 0, output_258 },
#endif
    (insn_gen_fn) gen_sle_si_const,
    &operand_data[470],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:7335",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    0,
    &operand_data[473],
    3,
    0,
    1,
    3
  },
  {
    "sle_di_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_260 },
#else
    { 0, 0, output_260 },
#endif
    (insn_gen_fn) gen_sle_di_const,
    &operand_data[476],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:7362",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_261 },
#else
    { 0, 0, output_261 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  {
    "sgtu_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgtu_si,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7458",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  {
    "sgtu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgtu_di,
    &operand_data[458],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7476",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[482],
    3,
    0,
    1,
    1
  },
  {
    "sltu_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sltu_si,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7585",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[461],
    3,
    0,
    2,
    1
  },
  {
    "sltu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sltu_di,
    &operand_data[464],
    3,
    0,
    1,
    1
  },
  {
    "*mips.md:7608",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    2,
    1
  },
  {
    "sleu_si_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_270 },
#else
    { 0, 0, output_270 },
#endif
    (insn_gen_fn) gen_sleu_si_const,
    &operand_data[470],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:7659",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_271 },
#else
    { 0, 0, output_271 },
#endif
    0,
    &operand_data[473],
    3,
    0,
    1,
    3
  },
  {
    "sleu_di_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_272 },
#else
    { 0, 0, output_272 },
#endif
    (insn_gen_fn) gen_sleu_di_const,
    &operand_data[476],
    3,
    0,
    1,
    3
  },
  {
    "*mips.md:7686",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_273 },
#else
    { 0, 0, output_273 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  {
    "sunordered_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sunlt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "suneq_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sunle_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sungt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sunge_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "seq_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "slt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sle_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sgt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sge_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_df,
    &operand_data[485],
    3,
    0,
    1,
    1
  },
  {
    "sunordered_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sunlt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "suneq_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sunle_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sungt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sunge_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "seq_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "slt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sle_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sgt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "sge_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_sf,
    &operand_data[488],
    3,
    0,
    1,
    1
  },
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_296 },
#else
    { 0, 0, output_296 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[385],
    1,
    0,
    0,
    3
  },
  {
    "*mips.md:7997",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "b\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[385],
    1,
    0,
    0,
    1
  },
  {
    "indirect_jump_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump_internal1,
    &operand_data[46],
    1,
    0,
    1,
    1
  },
  {
    "indirect_jump_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump_internal2,
    &operand_data[49],
    1,
    0,
    1,
    1
  },
  {
    "tablejump_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tablejump_internal1,
    &operand_data[491],
    2,
    0,
    1,
    1
  },
  {
    "tablejump_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tablejump_internal2,
    &operand_data[493],
    2,
    0,
    1,
    1
  },
  {
    "casesi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_302 },
#else
    { 0, 0, output_302 },
#endif
    (insn_gen_fn) gen_casesi_internal,
    &operand_data[495],
    3,
    0,
    1,
    3
  },
  {
    "casesi_internal_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    (insn_gen_fn) gen_casesi_internal_di,
    &operand_data[498],
    3,
    0,
    1,
    3
  },
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t$31%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[501],
    1,
    0,
    0,
    1
  },
  {
    "get_fnaddr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%($LF%= = . + 8\n\tbal\t$LF%=\n\tnop;la\t%0,%1-$LF%=%)\n\taddu\t%0,%0,$31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_get_fnaddr,
    &operand_data[502],
    2,
    0,
    1,
    1
  },
  {
    "eh_set_lr_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_si,
    &operand_data[175],
    2,
    0,
    1,
    1
  },
  {
    "eh_set_lr_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_di,
    &operand_data[179],
    2,
    0,
    1,
    1
  },
  {
    "exception_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_exception_receiver,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "load_callsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_callsi,
    &operand_data[504],
    3,
    0,
    1,
    1
  },
  {
    "load_calldi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_calldi,
    &operand_data[507],
    3,
    0,
    1,
    1
  },
  {
    "sibcall_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_313 },
#else
    { 0, output_313, 0 },
#endif
    (insn_gen_fn) gen_sibcall_internal,
    &operand_data[510],
    2,
    0,
    2,
    2
  },
  {
    "sibcall_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_314 },
#else
    { 0, output_314, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value_internal,
    &operand_data[512],
    3,
    0,
    2,
    2
  },
  {
    "sibcall_value_multiple_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_315 },
#else
    { 0, output_315, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value_multiple_internal,
    &operand_data[512],
    4,
    2,
    2,
    2
  },
  {
    "call_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_316 },
#else
    { 0, 0, output_316 },
#endif
    (insn_gen_fn) gen_call_internal,
    &operand_data[516],
    2,
    0,
    2,
    3
  },
  {
    "call_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*jalr\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_call_split,
    &operand_data[518],
    2,
    0,
    1,
    1
  },
  {
    "call_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_318 },
#else
    { 0, 0, output_318 },
#endif
    (insn_gen_fn) gen_call_value_internal,
    &operand_data[515],
    3,
    0,
    2,
    3
  },
  {
    "call_value_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*jalr\t%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_call_value_split,
    &operand_data[520],
    3,
    0,
    1,
    1
  },
  {
    "call_value_multiple_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_320 },
#else
    { 0, 0, output_320 },
#endif
    (insn_gen_fn) gen_call_value_multiple_internal,
    &operand_data[523],
    4,
    2,
    2,
    3
  },
  {
    "call_value_multiple_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*jalr\t%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_call_value_multiple_split,
    &operand_data[527],
    4,
    2,
    1,
    1
  },
  {
    "prefetch_si_address",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_322 },
#else
    { 0, 0, output_322 },
#endif
    (insn_gen_fn) gen_prefetch_si_address,
    &operand_data[531],
    4,
    0,
    1,
    3
  },
  {
    "prefetch_indexed_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_323 },
#else
    { 0, 0, output_323 },
#endif
    (insn_gen_fn) gen_prefetch_indexed_si,
    &operand_data[535],
    4,
    0,
    1,
    3
  },
  {
    "prefetch_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_324 },
#else
    { 0, 0, output_324 },
#endif
    (insn_gen_fn) gen_prefetch_si,
    &operand_data[531],
    3,
    0,
    1,
    3
  },
  {
    "prefetch_di_address",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_325 },
#else
    { 0, 0, output_325 },
#endif
    (insn_gen_fn) gen_prefetch_di_address,
    &operand_data[539],
    4,
    0,
    1,
    3
  },
  {
    "prefetch_indexed_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_326 },
#else
    { 0, 0, output_326 },
#endif
    (insn_gen_fn) gen_prefetch_indexed_di,
    &operand_data[543],
    4,
    0,
    1,
    3
  },
  {
    "prefetch_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_327 },
#else
    { 0, 0, output_327 },
#endif
    (insn_gen_fn) gen_prefetch_di,
    &operand_data[539],
    3,
    0,
    1,
    3
  },
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%(nop%)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "hazard_nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_329 },
#else
    { 0, 0, output_329 },
#endif
    (insn_gen_fn) gen_hazard_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*mips.md:8790",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_330 },
#else
    { 0, output_330, 0 },
#endif
    0,
    &operand_data[547],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8805",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_331 },
#else
    { 0, output_331, 0 },
#endif
    0,
    &operand_data[552],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8820",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_332 },
#else
    { 0, output_332, 0 },
#endif
    0,
    &operand_data[557],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8836",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_333 },
#else
    { 0, output_333, 0 },
#endif
    0,
    &operand_data[562],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8851",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_334 },
#else
    { 0, output_334, 0 },
#endif
    0,
    &operand_data[567],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8866",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_335 },
#else
    { 0, output_335, 0 },
#endif
    0,
    &operand_data[572],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8882",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_336 },
#else
    { 0, output_336, 0 },
#endif
    0,
    &operand_data[577],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8897",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_337 },
#else
    { 0, output_337, 0 },
#endif
    0,
    &operand_data[582],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8912",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_338 },
#else
    { 0, output_338, 0 },
#endif
    0,
    &operand_data[587],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8928",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_339 },
#else
    { 0, output_339, 0 },
#endif
    0,
    &operand_data[592],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8943",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_340 },
#else
    { 0, output_340, 0 },
#endif
    0,
    &operand_data[597],
    5,
    0,
    2,
    2
  },
  {
    "*mips.md:8958",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_341 },
#else
    { 0, output_341, 0 },
#endif
    0,
    &operand_data[602],
    5,
    0,
    2,
    2
  },
  {
    "consttable_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_342 },
#else
    { 0, 0, output_342 },
#endif
    (insn_gen_fn) gen_consttable_qi,
    &operand_data[607],
    1,
    0,
    1,
    3
  },
  {
    "consttable_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_343 },
#else
    { 0, 0, output_343 },
#endif
    (insn_gen_fn) gen_consttable_hi,
    &operand_data[608],
    1,
    0,
    1,
    3
  },
  {
    "consttable_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_344 },
#else
    { 0, 0, output_344 },
#endif
    (insn_gen_fn) gen_consttable_si,
    &operand_data[609],
    1,
    0,
    1,
    3
  },
  {
    "consttable_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_345 },
#else
    { 0, 0, output_345 },
#endif
    (insn_gen_fn) gen_consttable_di,
    &operand_data[610],
    1,
    0,
    1,
    3
  },
  {
    "consttable_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_346 },
#else
    { 0, 0, output_346 },
#endif
    (insn_gen_fn) gen_consttable_sf,
    &operand_data[611],
    1,
    0,
    1,
    3
  },
  {
    "consttable_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_347 },
#else
    { 0, 0, output_347 },
#endif
    (insn_gen_fn) gen_consttable_df,
    &operand_data[612],
    1,
    0,
    1,
    3
  },
  {
    "align_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".align 1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_align_2,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "align_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".align 2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_align_4,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "align_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".align 3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_align_8,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "conditional_trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_conditional_trap,
    &operand_data[613],
    2,
    2,
    0,
    0
  },
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[615],
    3,
    0,
    0,
    0
  },
  {
    "addsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[618],
    2,
    0,
    0,
    0
  },
  {
    "adddi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[620],
    3,
    0,
    0,
    0
  },
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[623],
    3,
    1,
    0,
    0
  },
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[626],
    4,
    0,
    0,
    0
  },
  {
    "adddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[626],
    4,
    0,
    0,
    0
  },
  {
    "adddi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[630],
    4,
    0,
    0,
    0
  },
  {
    "subsi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[630],
    4,
    0,
    0,
    0
  },
  {
    "subsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[634],
    2,
    0,
    0,
    0
  },
  {
    "subsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[636],
    3,
    0,
    0,
    0
  },
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[639],
    3,
    0,
    0,
    0
  },
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[48],
    3,
    1,
    1,
    0
  },
  {
    "subdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[626],
    4,
    0,
    0,
    0
  },
  {
    "muldf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[626],
    4,
    0,
    0,
    0
  },
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[7],
    3,
    0,
    1,
    0
  },
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[10],
    3,
    0,
    1,
    0
  },
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[639],
    3,
    0,
    0,
    0
  },
  {
    "mulsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[639],
    5,
    0,
    0,
    0
  },
  {
    "mulsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    7,
    0,
    0,
    0
  },
  {
    "mulsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    7,
    0,
    0,
    0
  },
  {
    "mulsi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[639],
    5,
    0,
    0,
    0
  },
  {
    "muldi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[647],
    7,
    0,
    0,
    0
  },
  {
    "muldi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[647],
    7,
    0,
    0,
    0
  },
  {
    "muldi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    7,
    0,
    0,
    0
  },
  {
    "muldi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    7,
    0,
    0,
    0
  },
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[626],
    3,
    0,
    0,
    0
  },
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[654],
    3,
    0,
    0,
    0
  },
  {
    "mulsidi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[657],
    8,
    0,
    0,
    0
  },
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[654],
    3,
    0,
    0,
    0
  },
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[639],
    3,
    0,
    0,
    0
  },
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[639],
    3,
    0,
    0,
    0
  },
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[665],
    3,
    0,
    0,
    0
  },
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[668],
    3,
    0,
    0,
    0
  },
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[48],
    2,
    1,
    1,
    0
  },
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[185],
    3,
    0,
    2,
    0
  },
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[671],
    3,
    0,
    0,
    0
  },
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[185],
    3,
    0,
    2,
    0
  },
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[671],
    3,
    0,
    0,
    0
  },
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[185],
    3,
    0,
    2,
    0
  },
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[671],
    3,
    0,
    0,
    0
  },
  {
    "xordi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    0,
    0,
    0
  },
  {
    "xordi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[628],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[674],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[676],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[678],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[680],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[682],
    2,
    0,
    0,
    0
  },
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[676],
    2,
    0,
    0,
    0
  },
  {
    "extendhidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[684],
    2,
    0,
    0,
    0
  },
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[674],
    2,
    0,
    0,
    0
  },
  {
    "extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[686],
    2,
    0,
    0,
    0
  },
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[678],
    2,
    0,
    0,
    0
  },
  {
    "extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[687],
    2,
    0,
    0,
    0
  },
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[680],
    2,
    0,
    0,
    0
  },
  {
    "extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[689],
    2,
    0,
    0,
    0
  },
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[682],
    2,
    0,
    0,
    0
  },
  {
    "extendqidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[256],
    2,
    0,
    1,
    0
  },
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[259],
    2,
    0,
    1,
    0
  },
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[693],
    2,
    0,
    0,
    0
  },
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfdi2,
    &operand_data[695],
    2,
    0,
    0,
    0
  },
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[697],
    2,
    0,
    0,
    0
  },
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfdi2,
    &operand_data[699],
    2,
    0,
    0,
    0
  },
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[701],
    4,
    0,
    0,
    0
  },
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[702],
    4,
    0,
    0,
    0
  },
  {
    "insv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[706],
    2,
    0,
    0,
    0
  },
  {
    "insv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[708],
    3,
    0,
    0,
    0
  },
  {
    "insv+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[711],
    2,
    0,
    0,
    0
  },
  {
    "insv+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[713],
    3,
    0,
    0,
    0
  },
  {
    "movdi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[706],
    2,
    0,
    0,
    0
  },
  {
    "movdi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[711],
    2,
    0,
    0,
    0
  },
  {
    "movdi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[716],
    2,
    0,
    0,
    0
  },
  {
    "movdi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[718],
    2,
    0,
    0,
    0
  },
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[720],
    2,
    0,
    0,
    0
  },
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[634],
    2,
    0,
    0,
    0
  },
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[722],
    2,
    0,
    0,
    0
  },
  {
    "movsi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[618],
    2,
    0,
    0,
    0
  },
  {
    "movsi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[618],
    2,
    0,
    0,
    0
  },
  {
    "reload_incc-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[618],
    2,
    0,
    0,
    0
  },
  {
    "reload_incc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_incc,
    &operand_data[724],
    3,
    0,
    1,
    0
  },
  {
    "reload_outcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outcc,
    &operand_data[727],
    3,
    0,
    1,
    0
  },
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[730],
    2,
    0,
    0,
    0
  },
  {
    "movhi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[732],
    2,
    0,
    0,
    0
  },
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[734],
    2,
    0,
    0,
    0
  },
  {
    "movqi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[736],
    2,
    0,
    0,
    0
  },
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[738],
    2,
    0,
    0,
    0
  },
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[740],
    2,
    0,
    0,
    0
  },
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[742],
    2,
    0,
    0,
    0
  },
  {
    "movdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[740],
    2,
    0,
    0,
    0
  },
  {
    "movstrsi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[385],
    2,
    0,
    0,
    0
  },
  {
    "movstrsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstrsi,
    &operand_data[744],
    4,
    0,
    0,
    0
  },
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[388],
    3,
    0,
    1,
    0
  },
  {
    "ashlsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[620],
    3,
    0,
    0,
    0
  },
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[748],
    3,
    1,
    0,
    0
  },
  {
    "ashldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "ashldi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "ashldi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "ashrsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "ashrsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    3,
    0,
    0,
    0
  },
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[388],
    3,
    0,
    1,
    0
  },
  {
    "ashrsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[620],
    3,
    0,
    0,
    0
  },
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[748],
    3,
    1,
    0,
    0
  },
  {
    "ashrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "ashrdi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "ashrdi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "lshrsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "lshrsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    3,
    0,
    0,
    0
  },
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[388],
    3,
    0,
    1,
    0
  },
  {
    "lshrsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[620],
    3,
    0,
    0,
    0
  },
  {
    "lshrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[758],
    3,
    0,
    0,
    0
  },
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[748],
    3,
    1,
    0,
    0
  },
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "lshrdi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "lshrdi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "cmpsi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    4,
    0,
    0,
    0
  },
  {
    "cmpsi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    3,
    0,
    0,
    0
  },
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[761],
    2,
    0,
    0,
    0
  },
  {
    "tstsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tstsi,
    &operand_data[615],
    1,
    0,
    0,
    0
  },
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[624],
    2,
    0,
    0,
    0
  },
  {
    "tstdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tstdi,
    &operand_data[623],
    1,
    0,
    0,
    0
  },
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[763],
    2,
    0,
    0,
    0
  },
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[385],
    1,
    0,
    0,
    0
  },
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[17],
    1,
    2,
    1,
    0
  },
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[767],
    1,
    0,
    1,
    0
  },
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[767],
    2,
    0,
    1,
    0
  },
  {
    "tablejump_mips161",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump_mips161,
    &operand_data[769],
    2,
    0,
    1,
    0
  },
  {
    "tablejump_mips162",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump_mips162,
    &operand_data[769],
    2,
    0,
    1,
    0
  },
  {
    "casesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_casesi,
    &operand_data[771],
    7,
    3,
    0,
    0
  },
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_setup,
    &operand_data[386],
    1,
    0,
    0,
    0
  },
  {
    "builtin_longjmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_longjmp,
    &operand_data[778],
    1,
    0,
    1,
    0
  },
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_return,
    &operand_data[779],
    1,
    0,
    0,
    0
  },
  {
    "eh_return+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[780],
    2,
    0,
    0,
    0
  },
  {
    "sibcall-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  {
    "call+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[786],
    2,
    0,
    0,
    0
  },
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  {
    "call_value+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[788],
    3,
    0,
    0,
    0
  },
  {
    "untyped_call-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[788],
    4,
    0,
    0,
    0
  },
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[782],
    3,
    0,
    0,
    0
  },
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[792],
    3,
    0,
    0,
    0
  },
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[795],
    4,
    2,
    0,
    0
  },
  {
    "movdicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdicc,
    &operand_data[799],
    4,
    2,
    0,
    0
  },
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[803],
    4,
    2,
    0,
    0
  },
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[807],
    4,
    2,
    0,
    0
  },
  {
    "movdfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_530 },
#else
    { 0, 0, output_530 },
#endif
    0,
    &operand_data[811],
    5,
    0,
    1,
    3
  },
  {
    "movdfcc+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_531 },
#else
    { 0, 0, output_531 },
#endif
    0,
    &operand_data[816],
    5,
    0,
    1,
    3
  },
  {
    "movdfcc+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_532 },
#else
    { 0, 0, output_532 },
#endif
    0,
    &operand_data[821],
    5,
    0,
    1,
    3
  },
  {
    "movdfcc+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_533 },
#else
    { 0, 0, output_533 },
#endif
    0,
    &operand_data[826],
    5,
    0,
    1,
    3
  },
  {
    "movdfcc+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[831],
    1,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
