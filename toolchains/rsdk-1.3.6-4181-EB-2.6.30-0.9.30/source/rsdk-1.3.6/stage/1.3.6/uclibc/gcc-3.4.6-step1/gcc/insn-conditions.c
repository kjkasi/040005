/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "insn-constants.h"

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "gensupport.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

/* If we don't have __builtin_constant_p, or it's not acceptable in
   array initializers, fall back to assuming that all conditions
   potentially vary at run time.  It works in 3.0.1 and later; 3.0
   only when not optimizing.  */
#if (GCC_VERSION >= 3001) || ((GCC_VERSION == 3000) && !__OPTIMIZE__)
# define MAYBE_EVAL(expr) (__builtin_constant_p(expr) ? (int) (expr) : -1)
#else
# define MAYBE_EVAL(expr) -1
#endif

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time. */

const struct c_test insn_conditions[] = {
  { "TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE\n\
   && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
   && !TARGET_MIPS16) },
  { "(ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && TARGET_64BIT",
    MAYBE_EVAL ((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && TARGET_64BIT) },
  { "TARGET_EMBEDDED_PIC",
    MAYBE_EVAL (TARGET_EMBEDDED_PIC) },
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))) },
  { "(TARGET_MIPS3900\n\
   || ISA_HAS_MADD_MSUB)\n\
   && !TARGET_MIPS16",
    MAYBE_EVAL ((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16) },
  { "ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_64BIT",
    MAYBE_EVAL (ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_64BIT) },
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)\n\
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))",
    MAYBE_EVAL (!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))) },
  { "reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))\n\
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))",
    MAYBE_EVAL (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))) },
  { "TARGET_64BIT && !TARGET_MIPS16&& reload_completed",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16&& reload_completed) },
  { "TARGET_64BIT && (GENERATE_MULT3_DI || TARGET_MIPS4000)",
    MAYBE_EVAL (TARGET_64BIT && (GENERATE_MULT3_DI || TARGET_MIPS4000)) },
  { "reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER\n\
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER\n\
   && (INTVAL (operands[2]) & 32) != 0",
    MAYBE_EVAL (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0) },
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode)\n\
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))",
    MAYBE_EVAL (!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[3]) == LO_REGNUM",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM) },
  { "(TARGET_MAD || ISA_HAS_MACC)\n\
   && !TARGET_64BIT",
    MAYBE_EVAL ((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT) },
  { "reload_completed",
    MAYBE_EVAL (reload_completed) },
  { "!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && (INTVAL (operands[2]) & 63) < 32\n\
   && (INTVAL (operands[2]) & 63) != 0",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0) },
  { "TARGET_MIPS16 && TARGET_64BIT",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT) },
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode)\n\
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)\n\
       || operands[1] == CONST0_RTX (DImode))",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode))) },
  { "!TARGET_MIPS16 && INTVAL (operands[2]) < 32767",
    MAYBE_EVAL (!TARGET_MIPS16 && INTVAL (operands[2]) < 32767) },
  { "TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE\n\
    && !TARGET_MIPS16\n\
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)",
    MAYBE_EVAL (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && !TARGET_MIPS16
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)) },
  { "TARGET_MAD",
    MAYBE_EVAL (TARGET_MAD) },
  { "ISA_HAS_MULHI",
    MAYBE_EVAL (ISA_HAS_MULHI) },
  { "!ISA_HAS_MULHI",
    MAYBE_EVAL (!ISA_HAS_MULHI) },
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    MAYBE_EVAL (TARGET_SIBCALLS && SIBLING_CALL_P (insn)) },
  { "TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64)",
    MAYBE_EVAL (TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64)) },
  { "TARGET_64BIT && !TARGET_MIPS4000",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS4000) },
  { "Pmode == DImode",
    MAYBE_EVAL (Pmode == DImode) },
  { "!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16) },
  { "reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE\n\
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER\n\
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER\n\
   && (INTVAL (operands[2]) & 32) != 0",
    MAYBE_EVAL (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0) },
  { "TARGET_64BIT && ISA_HAS_COND_TRAP",
    MAYBE_EVAL (TARGET_64BIT && ISA_HAS_COND_TRAP) },
  { "TARGET_DEBUG_C_MODE && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_DEBUG_C_MODE && !TARGET_MIPS16) },
  { "TARGET_HARD_FLOAT && HAVE_SQRT_P()",
    MAYBE_EVAL (TARGET_HARD_FLOAT && HAVE_SQRT_P()) },
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0))) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))) },
  { "TARGET_EXPLICIT_RELOCS && !TARGET_XGOT&& reload_completed",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && !TARGET_XGOT&& reload_completed) },
  { "TARGET_HARD_FLOAT && !TARGET_4300_MUL_FIX",
    MAYBE_EVAL (TARGET_HARD_FLOAT && !TARGET_4300_MUL_FIX) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W) },
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W) },
  { "TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT) },
  { "TARGET_SIBCALLS",
    MAYBE_EVAL (TARGET_SIBCALLS) },
  { "ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_unsafe_math_optimizations",
    MAYBE_EVAL (ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_unsafe_math_optimizations) },
  { "!(Pmode == DImode)",
    MAYBE_EVAL (!(Pmode == DImode)) },
  { "TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767) },
  { "TARGET_64BIT && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16) },
  { "ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) },
  { "TARGET_MIPS16",
    MAYBE_EVAL (TARGET_MIPS16) },
  { "TARGET_MIPS16 && TARGET_64BIT && !TARGET_DEBUG_D_MODE\n\
   && reload_completed\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT && !TARGET_DEBUG_D_MODE
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) },
  { "TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16\n\
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)",
    MAYBE_EVAL (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)) },
  { "TARGET_64BIT && TARGET_MIPS16",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16) },
  { "TARGET_EXPLICIT_RELOCS && !TARGET_XGOT",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) },
  { "ISA_HAS_CLZ_CLO",
    MAYBE_EVAL (ISA_HAS_CLZ_CLO) },
  { "ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))) },
  { "ISA_HAS_MACC && reload_completed",
    MAYBE_EVAL (ISA_HAS_MACC && reload_completed) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && INTVAL (operands[1]) < 0\n\
   && INTVAL (operands[1]) > - 0x8000",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) < 0
   && INTVAL (operands[1]) > - 0x8000) },
  { "ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_FUSED_MADD",
    MAYBE_EVAL (ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_FUSED_MADD) },
  { "ISA_HAS_DCLZ_DCLO",
    MAYBE_EVAL (ISA_HAS_DCLZ_DCLO) },
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || nonmemory_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || nonmemory_operand (operands[1], SFmode))) },
  { "ISA_HAS_PREFETCH",
    MAYBE_EVAL (ISA_HAS_PREFETCH) },
  { "ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_FUSED_MADD",
    MAYBE_EVAL (ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_FUSED_MADD) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[3]))",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3]))) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) },
  { "TARGET_HARD_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))) },
  { "TARGET_MIPS16 && TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != REG\n\
       || REGNO (operands[1]) >= FIRST_PSEUDO_REGISTER\n\
       || M16_REG_P (REGNO (operands[1]))\n\
       || REGNO (operands[1]) == ARG_POINTER_REGNUM\n\
       || REGNO (operands[1]) == FRAME_POINTER_REGNUM\n\
       || REGNO (operands[1]) == STACK_POINTER_REGNUM)\n\
   && (GET_CODE (operands[2]) != REG\n\
       || REGNO (operands[2]) >= FIRST_PSEUDO_REGISTER\n\
       || M16_REG_P (REGNO (operands[2]))\n\
       || REGNO (operands[2]) == ARG_POINTER_REGNUM\n\
       || REGNO (operands[2]) == FRAME_POINTER_REGNUM\n\
       || REGNO (operands[2]) == STACK_POINTER_REGNUM)",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT
   && (GET_CODE (operands[1]) != REG
       || REGNO (operands[1]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[1]))
       || REGNO (operands[1]) == ARG_POINTER_REGNUM
       || REGNO (operands[1]) == FRAME_POINTER_REGNUM
       || REGNO (operands[1]) == STACK_POINTER_REGNUM)
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[2]))
       || REGNO (operands[2]) == ARG_POINTER_REGNUM
       || REGNO (operands[2]) == FRAME_POINTER_REGNUM
       || REGNO (operands[2]) == STACK_POINTER_REGNUM)) },
  { "reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE\n\
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER\n\
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER\n\
   && (INTVAL (operands[2]) & 32) != 0",
    MAYBE_EVAL (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0) },
  { "ISA_HAS_8CC && TARGET_HARD_FLOAT",
    MAYBE_EVAL (ISA_HAS_8CC && TARGET_HARD_FLOAT) },
  { "ISA_HAS_MACC\n\
   && true_regnum (operands[0]) == LO_REGNUM\n\
   && GP_REG_P (true_regnum (operands[4]))",
    MAYBE_EVAL (ISA_HAS_MACC
   && true_regnum (operands[0]) == LO_REGNUM
   && GP_REG_P (true_regnum (operands[4]))) },
  { "ISA_HAS_MACC && GENERATE_MULT3_SI\n\
   && true_regnum (operands[1]) == LO_REGNUM\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && GP_REG_P (true_regnum (operands[3]))",
    MAYBE_EVAL (ISA_HAS_MACC && GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3]))) },
  { "TARGET_64BIT",
    MAYBE_EVAL (TARGET_64BIT) },
  { "ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD",
    MAYBE_EVAL (ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD) },
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)",
    MAYBE_EVAL (reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)) },
  { "ISA_HAS_SEB_SEH",
    MAYBE_EVAL (ISA_HAS_SEB_SEH) },
  { "reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))\n\
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))",
    MAYBE_EVAL (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))) },
  { "!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && (INTVAL (operands[2]) & 32) != 0",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 32) != 0) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[1]) == LO_REGNUM",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_4300_MUL_FIX",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_4300_MUL_FIX) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))) },
  { "TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2])&& reload_completed",
    MAYBE_EVAL (TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2])&& reload_completed) },
  { "reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER\n\
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER\n\
   && (INTVAL (operands[2]) & 63) < 32\n\
   && (INTVAL (operands[2]) & 63) != 0",
    MAYBE_EVAL (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0) },
  { "ISA_HAS_FP4 && TARGET_HARD_FLOAT",
    MAYBE_EVAL (ISA_HAS_FP4 && TARGET_HARD_FLOAT) },
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))) },
  { "ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT",
    MAYBE_EVAL (ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT) },
  { "!TARGET_64BIT && ISA_HAS_MULS",
    MAYBE_EVAL (!TARGET_64BIT && ISA_HAS_MULS) },
  { "TARGET_HARD_FLOAT && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)",
    MAYBE_EVAL (TARGET_HARD_FLOAT && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) },
  { "! TARGET_64BIT",
    MAYBE_EVAL (! TARGET_64BIT) },
  { "!TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode)\n\
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)\n\
       || operands[1] == CONST0_RTX (DImode))",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode))) },
  { "GENERATE_MULT3_SI\n\
   || TARGET_MAD",
    MAYBE_EVAL (GENERATE_MULT3_SI
   || TARGET_MAD) },
  { "reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))\n\
   && INTVAL (operands[2]) > 0",
    MAYBE_EVAL (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0) },
  { "TARGET_EXPLICIT_RELOCS && TARGET_XGOT",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && TARGET_XGOT) },
  { "ISA_HAS_ROTR_SI",
    MAYBE_EVAL (ISA_HAS_ROTR_SI) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))) },
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || nonmemory_operand (operands[1], DFmode))",
    MAYBE_EVAL ((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || nonmemory_operand (operands[1], DFmode))) },
  { "reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER\n\
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER\n\
   && (INTVAL (operands[2]) & 63) < 32\n\
   && (INTVAL (operands[2]) & 63) != 0",
    MAYBE_EVAL (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0) },
  { "ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == SImode",
    MAYBE_EVAL (ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == SImode) },
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT) },
  { "TARGET_ABICALLS",
    MAYBE_EVAL (TARGET_ABICALLS) },
  { "TARGET_MIPS16 && !(Pmode == DImode)",
    MAYBE_EVAL (TARGET_MIPS16 && !(Pmode == DImode)) },
  { "TARGET_HARD_FLOAT && TARGET_4300_MUL_FIX",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_4300_MUL_FIX) },
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || nonmemory_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || nonmemory_operand (operands[1], SFmode))) },
  { "mips_can_use_return_insn ()",
    MAYBE_EVAL (mips_can_use_return_insn ()) },
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    MAYBE_EVAL (!TARGET_MIPS16 && !TARGET_MEMCPY) },
  { "ISA_HAS_ROTR_DI",
    MAYBE_EVAL (ISA_HAS_ROTR_DI) },
  { "TARGET_64BIT && TARGET_MIPS16 && INTVAL (operands[2]) < 32767",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16 && INTVAL (operands[2]) < 32767) },
  { "ISA_HAS_MACC",
    MAYBE_EVAL (ISA_HAS_MACC) },
  { "reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))\n\
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))\n\
   && (REGNO (operands[0]) != REGNO (operands[1])\n\
       || REGNO (operands[0]) != REGNO (operands[2]))",
    MAYBE_EVAL (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2]))) },
  { "!TARGET_MIPS16",
    MAYBE_EVAL (!TARGET_MIPS16) },
  { "ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == DImode",
    MAYBE_EVAL (ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == DImode) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))) },
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)\n\
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))",
    MAYBE_EVAL (!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))) },
  { "ISA_HAS_MADD_MSUB",
    MAYBE_EVAL (ISA_HAS_MADD_MSUB) },
  { "ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE",
    MAYBE_EVAL (ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) },
  { "!TARGET_MIPS16 && TARGET_64BIT",
    MAYBE_EVAL (!TARGET_MIPS16 && TARGET_64BIT) },
  { "!TARGET_64BIT && ISA_HAS_MSAC",
    MAYBE_EVAL (!TARGET_64BIT && ISA_HAS_MSAC) },
  { "!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0) },
  { "reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])",
    MAYBE_EVAL (reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) },
  { "TARGET_MIPS16\n\
   && GET_CODE (operands[1]) == REG\n\
   && REGNO (operands[1]) == 24\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && dead_or_set_p (insn, operands[0])",
    MAYBE_EVAL (TARGET_MIPS16
   && GET_CODE (operands[1]) == REG
   && REGNO (operands[1]) == 24
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && dead_or_set_p (insn, operands[0])) },
  { "reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER\n\
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER\n\
   && (INTVAL (operands[2]) & 32) != 0",
    MAYBE_EVAL (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0) },
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || nonmemory_operand (operands[1], DFmode))",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || nonmemory_operand (operands[1], DFmode))) },
  { "ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD",
    MAYBE_EVAL (ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD) },
  { "ISA_HAS_COND_TRAP",
    MAYBE_EVAL (ISA_HAS_COND_TRAP) },
  { "TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64)&& reload_completed",
    MAYBE_EVAL (TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64)&& reload_completed) },
  { "TARGET_MIPS16\n\
   && (GET_CODE (operands[1]) != REG\n\
       || REGNO (operands[1]) >= FIRST_PSEUDO_REGISTER\n\
       || M16_REG_P (REGNO (operands[1]))\n\
       || REGNO (operands[1]) == ARG_POINTER_REGNUM\n\
       || REGNO (operands[1]) == FRAME_POINTER_REGNUM\n\
       || REGNO (operands[1]) == STACK_POINTER_REGNUM)\n\
   && (GET_CODE (operands[2]) != REG\n\
       || REGNO (operands[2]) >= FIRST_PSEUDO_REGISTER\n\
       || M16_REG_P (REGNO (operands[2]))\n\
       || REGNO (operands[2]) == ARG_POINTER_REGNUM\n\
       || REGNO (operands[2]) == FRAME_POINTER_REGNUM\n\
       || REGNO (operands[2]) == STACK_POINTER_REGNUM)",
    MAYBE_EVAL (TARGET_MIPS16
   && (GET_CODE (operands[1]) != REG
       || REGNO (operands[1]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[1]))
       || REGNO (operands[1]) == ARG_POINTER_REGNUM
       || REGNO (operands[1]) == FRAME_POINTER_REGNUM
       || REGNO (operands[1]) == STACK_POINTER_REGNUM)
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[2]))
       || REGNO (operands[2]) == ARG_POINTER_REGNUM
       || REGNO (operands[2]) == FRAME_POINTER_REGNUM
       || REGNO (operands[2]) == STACK_POINTER_REGNUM)) },
  { "ISA_HAS_MULS",
    MAYBE_EVAL (ISA_HAS_MULS) },
  { "TARGET_64BIT&& reload_completed",
    MAYBE_EVAL (TARGET_64BIT&& reload_completed) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f) },
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W) },
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    MAYBE_EVAL (!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))) },
  { "ISA_HAS_PREFETCH && Pmode == DImode",
    MAYBE_EVAL (ISA_HAS_PREFETCH && Pmode == DImode) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_4300_MUL_FIX",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_4300_MUL_FIX) },
  { "TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32) },
  { "TARGET_SPLIT_CALLS",
    MAYBE_EVAL (TARGET_SPLIT_CALLS) },
  { "TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16) },
  { "reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))\n\
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))\n\
   && (REGNO (operands[0]) != REGNO (operands[1])\n\
       || REGNO (operands[0]) != REGNO (operands[2]))",
    MAYBE_EVAL (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2]))) },
  { "ISA_HAS_MACC && GENERATE_MULT3_SI\n\
   && true_regnum (operands[1]) == LO_REGNUM\n\
   && peep2_reg_dead_p (3, operands[1])\n\
   && GP_REG_P (true_regnum (operands[6]))",
    MAYBE_EVAL (ISA_HAS_MACC && GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (3, operands[1])
   && GP_REG_P (true_regnum (operands[6]))) },
  { "!TARGET_MIPS4000 || TARGET_MIPS16",
    MAYBE_EVAL (!TARGET_MIPS4000 || TARGET_MIPS16) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[1]))",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1]))) },
  { "reload_completed && !TARGET_DEBUG_D_MODE",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE) },
  { "TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG\n\
   && REGNO (operands[0]) == 24\n\
   && dead_or_set_p (insn, operands[0])\n\
   && GET_CODE (operands[1]) == REG\n\
   && M16_REG_P (REGNO (operands[1]))",
    MAYBE_EVAL (TARGET_MIPS16
   && GET_CODE (operands[0]) == REG
   && REGNO (operands[0]) == 24
   && dead_or_set_p (insn, operands[0])
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))) },
  { "GENERATE_MULT3_SI\n\
   && true_regnum (operands[0]) == LO_REGNUM\n\
   && GP_REG_P (true_regnum (operands[4]))\n\
   && peep2_reg_dead_p (2, operands[0])",
    MAYBE_EVAL (GENERATE_MULT3_SI
   && true_regnum (operands[0]) == LO_REGNUM
   && GP_REG_P (true_regnum (operands[4]))
   && peep2_reg_dead_p (2, operands[0])) },
  { "TARGET_MIPS16 && INTVAL (operands[2]) < 32767",
    MAYBE_EVAL (TARGET_MIPS16 && INTVAL (operands[2]) < 32767) },
  { "TARGET_64BIT && reload_completed",
    MAYBE_EVAL (TARGET_64BIT && reload_completed) },
  { "!TARGET_64BIT",
    MAYBE_EVAL (!TARGET_64BIT) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) },
  { "TARGET_EXPLICIT_RELOCS",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W) },
  { "TARGET_MIPS16 && TARGET_64BIT\n\
   && GET_CODE (operands[1]) == REG\n\
   && REGNO (operands[1]) == 24\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && dead_or_set_p (insn, operands[0])",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT
   && GET_CODE (operands[1]) == REG
   && REGNO (operands[1]) == 24
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && dead_or_set_p (insn, operands[0])) },
  { "reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT\n\
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16\n\
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))\n\
   && INTVAL (operands[2]) > 0",
    MAYBE_EVAL (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0) },
  { "TARGET_ABICALLS && TARGET_NEWABI",
    MAYBE_EVAL (TARGET_ABICALLS && TARGET_NEWABI) },
  { "TARGET_MIPS4000 && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_MIPS4000 && !TARGET_MIPS16) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))) },
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)",
    MAYBE_EVAL (reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)) },
  { "TARGET_MIPS16 && TARGET_64BIT\n\
   && GET_CODE (operands[0]) == REG\n\
   && REGNO (operands[0]) == 24\n\
   && dead_or_set_p (insn, operands[0])\n\
   && GET_CODE (operands[1]) == REG\n\
   && M16_REG_P (REGNO (operands[1]))",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT
   && GET_CODE (operands[0]) == REG
   && REGNO (operands[0]) == 24
   && dead_or_set_p (insn, operands[0])
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))) },
  { "TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16)",
    MAYBE_EVAL (TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16)) },
  { "(TARGET_64BIT || !TARGET_DEBUG_G_MODE) && !TARGET_MIPS16",
    MAYBE_EVAL ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && !TARGET_MIPS16) },
  { "TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16) },
  { "TARGET_EMBEDDED_PIC\n\
   && GET_CODE (operands[1]) == SYMBOL_REF",
    MAYBE_EVAL (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF) },
  { "ISA_HAS_FP4 && TARGET_HARD_FLOAT && flag_unsafe_math_optimizations",
    MAYBE_EVAL (ISA_HAS_FP4 && TARGET_HARD_FLOAT && flag_unsafe_math_optimizations) },
  { "ISA_HAS_MSAC",
    MAYBE_EVAL (ISA_HAS_MSAC) },
  { "TARGET_EXPLICIT_RELOCS && TARGET_XGOT&& reload_completed",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && TARGET_XGOT&& reload_completed) },
  { "TARGET_64BIT && GET_CODE (operands[4]) == GET_CODE (operands[5])",
    MAYBE_EVAL (TARGET_64BIT && GET_CODE (operands[4]) == GET_CODE (operands[5])) },
  { "TARGET_MIPS16 && Pmode == DImode",
    MAYBE_EVAL (TARGET_MIPS16 && Pmode == DImode) },
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)",
    MAYBE_EVAL (reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)) },
  { "TARGET_EXPLICIT_RELOCS&& reload_completed",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS&& reload_completed) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || nonmemory_operand (operands[1], DFmode))",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || nonmemory_operand (operands[1], DFmode))) },
  { "ISA_HAS_PREFETCH && Pmode == SImode",
    MAYBE_EVAL (ISA_HAS_PREFETCH && Pmode == SImode) },
  { "! TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16",
    MAYBE_EVAL (! TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16) },
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[0]) == REG\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))) },
  { "TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2])",
    MAYBE_EVAL (TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2])) },
};

const size_t n_insn_conditions = 174;
const int insn_elision_unavailable = 0;
