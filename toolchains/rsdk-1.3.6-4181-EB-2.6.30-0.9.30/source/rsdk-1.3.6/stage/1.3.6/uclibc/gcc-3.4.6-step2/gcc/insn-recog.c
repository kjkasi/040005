/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_353 (rtx *);
extern rtx gen_split_354 (rtx *);
extern rtx gen_split_356 (rtx *);
extern rtx gen_split_357 (rtx *);
extern rtx gen_split_358 (rtx *);
extern rtx gen_split_359 (rtx *);
extern rtx gen_split_360 (rtx *);
extern rtx gen_split_361 (rtx *);
extern rtx gen_split_364 (rtx *);
extern rtx gen_split_365 (rtx *);
extern rtx gen_peephole2_369 (rtx, rtx *);
extern rtx gen_split_370 (rtx *);
extern rtx gen_split_371 (rtx *);
extern rtx gen_peephole2_372 (rtx, rtx *);
extern rtx gen_peephole2_373 (rtx, rtx *);
extern rtx gen_peephole2_374 (rtx, rtx *);
extern rtx gen_split_375 (rtx *);
extern rtx gen_split_376 (rtx *);
extern rtx gen_split_379 (rtx *);
extern rtx gen_split_392 (rtx *);
extern rtx gen_split_393 (rtx *);
extern rtx gen_split_394 (rtx *);
extern rtx gen_split_401 (rtx *);
extern rtx gen_split_403 (rtx *);
extern rtx gen_split_405 (rtx *);
extern rtx gen_split_407 (rtx *);
extern rtx gen_split_409 (rtx *);
extern rtx gen_split_419 (rtx *);
extern rtx gen_split_420 (rtx *);
extern rtx gen_split_421 (rtx *);
extern rtx gen_split_422 (rtx *);
extern rtx gen_split_423 (rtx *);
extern rtx gen_split_424 (rtx *);
extern rtx gen_split_425 (rtx *);
extern rtx gen_split_426 (rtx *);
extern rtx gen_split_428 (rtx *);
extern rtx gen_split_430 (rtx *);
extern rtx gen_split_431 (rtx *);
extern rtx gen_split_432 (rtx *);
extern rtx gen_split_436 (rtx *);
extern rtx gen_split_438 (rtx *);
extern rtx gen_split_441 (rtx *);
extern rtx gen_split_442 (rtx *);
extern rtx gen_split_443 (rtx *);
extern rtx gen_split_446 (rtx *);
extern rtx gen_split_448 (rtx *);
extern rtx gen_split_449 (rtx *);
extern rtx gen_split_450 (rtx *);
extern rtx gen_split_451 (rtx *);
extern rtx gen_split_452 (rtx *);
extern rtx gen_split_454 (rtx *);
extern rtx gen_split_456 (rtx *);
extern rtx gen_split_457 (rtx *);
extern rtx gen_split_458 (rtx *);
extern rtx gen_split_459 (rtx *);
extern rtx gen_split_460 (rtx *);
extern rtx gen_split_462 (rtx *);
extern rtx gen_split_463 (rtx *);
extern rtx gen_split_465 (rtx *);
extern rtx gen_split_466 (rtx *);
extern rtx gen_split_467 (rtx *);
extern rtx gen_split_468 (rtx *);
extern rtx gen_split_469 (rtx *);
extern rtx gen_split_515 (rtx *);
extern rtx gen_split_516 (rtx *);
extern rtx gen_split_520 (rtx *);
extern rtx gen_split_522 (rtx *);
extern rtx gen_split_523 (rtx *);
extern rtx gen_split_534 (rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L16;
    case MINUS:
      goto L108;
    case MULT:
      goto L147;
    case NEG:
      goto L759;
    case DIV:
      goto L793;
    case SQRT:
      goto L861;
    case ABS:
      goto L895;
    case FLOAT_EXTEND:
      goto L1251;
    case FLOAT:
      goto L1302;
    case MEM:
      goto L1484;
    case UNSPEC:
      goto L3242;
    case IF_THEN_ELSE:
      goto L2597;
    default:
     break;
   }
  goto ret0;

 L16: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3245;
  goto ret0;

 L3245: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L728;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L17;
    }
  goto ret0;

 L728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L729;
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L730;
    }
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L731;
    }
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD))
    {
      return 57;
    }
  goto ret0;

 L17: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L18;
    }
  goto ret0;

 L18: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 3;
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3247;
  goto ret0;

 L3247: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L744;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L109;
    }
  goto ret0;

 L744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L745;
    }
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L746;
    }
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L747;
    }
  goto ret0;

 L747: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD))
    {
      return 59;
    }
  goto ret0;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L3249;
  goto ret0;

 L3249: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L779;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L110;
    }
  goto ret0;

 L779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L780;
    }
  goto ret0;

 L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L781;
    }
  goto ret0;

 L781: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD))
    {
      return 63;
    }
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 17;
    }
  goto ret0;

 L147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L148;
    }
  goto ret0;

 L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L149;
    }
  goto ret0;

 L149: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_4300_MUL_FIX))
    {
      return 23;
    }
 L155: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_4300_MUL_FIX))
    {
      return 24;
    }
  goto ret0;

 L759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3250;
  goto ret0;

 L3250: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L760;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L963;
    }
  goto ret0;

 L760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L761;
  goto ret0;

 L761: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L762;
    }
  goto ret0;

 L762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L763;
    }
  goto ret0;

 L763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L764;
    }
  goto ret0;

 L764: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FUSED_MADD))
    {
      return 61;
    }
  goto ret0;

 L963: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 88;
    }
  goto ret0;

 L793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3253;
  goto ret0;

 L3253: ATTRIBUTE_UNUSED_LABEL
  if (const_float_1_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L806;
    }
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L794;
    }
  goto ret0;

 L806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L3255;
  goto ret0;

 L3255: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L873;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L807;
    }
  goto ret0;

 L873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L874;
    }
  goto ret0;

 L874: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_unsafe_math_optimizations))
    {
      return 75;
    }
  goto ret0;

 L807: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_unsafe_math_optimizations))
    {
      return 67;
    }
  goto ret0;

 L794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L795;
    }
  goto ret0;

 L795: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 65;
    }
  goto ret0;

 L861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L862;
    }
  goto ret0;

 L862: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT))
    {
      return 73;
    }
  goto ret0;

 L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L896;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 79;
    }
  goto ret0;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1252;
    }
  goto ret0;

 L1252: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 142;
    }
  goto ret0;

 L1302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3256;
    case DImode:
      goto L3257;
    default:
      break;
    }
  goto ret0;

 L3256: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1303;
    }
  goto ret0;

 L1303: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 149;
    }
  goto ret0;

 L3257: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1308;
    }
  goto ret0;

 L1308: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 150;
    }
  goto ret0;

 L1484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3258;
    case DImode:
      goto L3259;
    default:
      break;
    }
  goto ret0;

 L3258: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1485;
  goto ret0;

 L1485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1486;
    }
  goto ret0;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1487;
    }
  goto ret0;

 L1487: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 184;
    }
  goto ret0;

 L3259: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1492;
  goto ret0;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1493;
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1494;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 185;
    }
  goto ret0;

 L3242: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L3260;
    case 2:
      goto L3261;
    default:
      break;
    }
  goto ret0;

 L3260: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L1570;
  goto ret0;

 L1570: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1571;
    }
  goto ret0;

 L1571: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 201;
    }
  goto ret0;

 L3261: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 1)
    goto L1575;
  goto ret0;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1576;
    }
  goto ret0;

 L1576: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1577;
    }
  goto ret0;

 L1577: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 202;
    }
  goto ret0;

 L2597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L2598;
    }
 L2615: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2616;
    }
  goto ret0;

 L2598: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L3262;
    case DImode:
      goto L3263;
    default:
      break;
    }
  goto L2615;

 L3262: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2599;
    }
  goto L2615;

 L2599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2600;
  goto L2615;

 L2600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2601;
    }
  x2 = XEXP (x1, 0);
  goto L2615;

 L2601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2602;
    }
  x2 = XEXP (x1, 0);
  goto L2615;

 L2602: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 339;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2615;

 L3263: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2608;
    }
  goto L2615;

 L2608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2609;
  goto L2615;

 L2609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2610;
    }
  x2 = XEXP (x1, 0);
  goto L2615;

 L2610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2611;
    }
  x2 = XEXP (x1, 0);
  goto L2615;

 L2611: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 340;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2615;

 L2616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[4] = x3;
      goto L2617;
    }
  goto ret0;

 L2617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2618;
  goto ret0;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2619;
    }
  goto ret0;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2620;
    }
  goto ret0;

 L2620: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 341;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == MEM)
    goto L1497;
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L21;
    }
 L3223: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1541;
    }
  goto ret0;

 L1497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3264;
    case DImode:
      goto L3265;
    default:
      break;
    }
  goto L3223;

 L3264: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1498;
  goto L3223;

 L1498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1499;
    }
  goto L3223;

 L1499: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1500;
    }
  goto L3223;

 L1500: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1501;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1501: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT))
    {
      return 186;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L3265: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1505;
  goto L3223;

 L1505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1506;
    }
  goto L3223;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1507;
    }
  goto L3223;

 L1507: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1508;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1508: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT))
    {
      return 187;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L21: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L3266;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3266: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L22;
    case MINUS:
      goto L114;
    case MULT:
      goto L159;
    case NEG:
      goto L768;
    case DIV:
      goto L799;
    case SQRT:
      goto L866;
    case ABS:
      goto L900;
    case FLOAT_TRUNCATE:
      goto L1069;
    case FLOAT:
      goto L1312;
    case MEM:
      goto L1470;
    case IF_THEN_ELSE:
      goto L2570;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3223;

 L22: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3278;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3278: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L736;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L23;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L737;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L738;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L739;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L739: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_FUSED_MADD))
    {
      return 58;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L24;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L24: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 4;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3280;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3280: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L752;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L115;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L753;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L754;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L755;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L755: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_FUSED_MADD))
    {
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L3282;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3282: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L787;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L116;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L788;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L789;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L789: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_FUSED_MADD))
    {
      return 64;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L116: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 18;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L160;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L161;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L161: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && !TARGET_4300_MUL_FIX))
    {
      return 25;
    }
 L167: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_4300_MUL_FIX))
    {
      return 26;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3283;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3283: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L769;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L968;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L770;
  x1 = XEXP (x0, 0);
  goto L3223;

 L770: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L771;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L771: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L772;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L773;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L773: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_NMADD_NMSUB && TARGET_HARD_FLOAT && TARGET_FUSED_MADD))
    {
      return 62;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L968: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 89;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3286;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3286: ATTRIBUTE_UNUSED_LABEL
  if (const_float_1_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L812;
    }
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L800;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L3288;
  x1 = XEXP (x0, 0);
  goto L3223;

 L3288: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L880;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L813;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L880: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L881;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L881: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && flag_unsafe_math_optimizations))
    {
      return 76;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L813: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && flag_unsafe_math_optimizations))
    {
      return 68;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L801;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L801: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)))
    {
      return 66;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L867;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L867: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && HAVE_SQRT_P()))
    {
      return 74;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L901;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L901: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 80;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1070;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1070: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 106;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3289;
    case DImode:
      goto L3290;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L3289: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1313;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1313: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 151;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L3290: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1318;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1318: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 152;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3291;
    case DImode:
      goto L3292;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L3291: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1471;
  x1 = XEXP (x0, 0);
  goto L3223;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1472;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1473;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1473: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT))
    {
      return 182;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L3292: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1478;
  x1 = XEXP (x0, 0);
  goto L3223;

 L1478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1479;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1480;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1480: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT))
    {
      return 183;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L2570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L2571;
    }
 L2588: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2589;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L2571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L3293;
    case DImode:
      goto L3294;
    default:
      break;
    }
  goto L2588;

 L3293: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2572;
    }
  goto L2588;

 L2572: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2573;
  goto L2588;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2574;
    }
  x2 = XEXP (x1, 0);
  goto L2588;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2575;
    }
  x2 = XEXP (x1, 0);
  goto L2588;

 L2575: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT))
    {
      return 336;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2588;

 L3294: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2581;
    }
  goto L2588;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2582;
  goto L2588;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2583;
    }
  x2 = XEXP (x1, 0);
  goto L2588;

 L2583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2584;
    }
  x2 = XEXP (x1, 0);
  goto L2588;

 L2584: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT))
    {
      return 337;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2588;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[4] = x3;
      goto L2590;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2591;
  x1 = XEXP (x0, 0);
  goto L3223;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2592;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L2592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2593;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L2593: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT))
    {
      return 338;
    }
  x1 = XEXP (x0, 0);
  goto L3223;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L1542;
    }
 L1549: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L1550;
    }
  goto ret0;

 L1542: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || nonmemory_operand (operands[1], SFmode))))
    {
      return 194;
    }
 L1546: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || nonmemory_operand (operands[1], SFmode))))
    {
      return 195;
    }
  x1 = XEXP (x0, 1);
  goto L1549;

 L1550: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 196;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L40;
    case MINUS:
      goto L120;
    case MULT:
      goto L182;
    case NEG:
      goto L332;
    case TRUNCATE:
      goto L499;
    case ABS:
      goto L885;
    case FFS:
      goto L915;
    case CLZ:
      goto L935;
    case NOT:
      goto L972;
    case AND:
      goto L1053;
    case IOR:
      goto L1005;
    case XOR:
      goto L1029;
    case SIGN_EXTEND:
      goto L1102;
    case ZERO_EXTEND:
      goto L1114;
    case FIX:
      goto L1256;
    case UNSPEC:
      goto L3331;
    case HIGH:
      goto L1372;
    case LO_SUM:
      goto L1377;
    case ASHIFT:
      goto L1594;
    case ASHIFTRT:
      goto L1652;
    case LSHIFTRT:
      goto L1703;
    case ROTATERT:
      goto L1760;
    case EQ:
      goto L1885;
    case NE:
      goto L1905;
    case GT:
      goto L1915;
    case LT:
      goto L1939;
    case LE:
      goto L1963;
    case GTU:
      goto L1987;
    case LTU:
      goto L2011;
    case LEU:
      goto L2035;
    case IF_THEN_ELSE:
      goto L2516;
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      goto L3316;
    default:
      goto ret0;
   }
 L3316: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1394;
    }
  goto ret0;

 L40: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3334;
  goto ret0;

 L3334: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L3337;
    case MULT:
      goto L236;
    default:
     break;
   }
 L3335: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L47;
    }
  goto ret0;

 L3337: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 29)
    goto L41;
  goto L3335;

 L41: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, SImode))
    {
      operands[1] = x2;
      goto L42;
    }
  x2 = XEXP (x1, 0);
  goto L3335;

 L42: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 7;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3335;

 L236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L237;
    }
  goto ret0;

 L237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L238;
    }
  goto ret0;

 L238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L239;
    }
 L703: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_MAD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 54;
    }
  goto ret0;

 L239: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 30;
    }
 L260: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 31;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L703;

 L47: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L48;
    }
  goto ret0;

 L48: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
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
       || REGNO (operands[2]) == STACK_POINTER_REGNUM)))
    {
      return 8;
    }
  goto ret0;

 L120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L121;
    }
  goto ret0;

 L121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3339;
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L314;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 19;
    }
  goto ret0;

 L314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L315;
    }
  goto ret0;

 L315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L316;
    }
  goto ret0;

 L316: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MADD_MSUB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 33;
    }
 L356: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 35;
    }
  goto ret0;

 L182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L183;
    }
  goto ret0;

 L183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L184;
    }
  goto ret0;

 L184: ATTRIBUTE_UNUSED_LABEL
  if ((GENERATE_MULT3_SI
   || TARGET_MAD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 27;
    }
 L199: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS4000 || TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 28;
    }
 L216: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS4000 && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 29;
    }
  goto ret0;

 L332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3340;
  goto ret0;

 L3340: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L333;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 85;
    }
  goto ret0;

 L333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L334;
    }
  goto ret0;

 L334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L335;
    }
  goto ret0;

 L335: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 34;
    }
  goto ret0;

 L499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3342;
  goto ret0;

 L3342: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L500;
    case ASHIFTRT:
      goto L1090;
    default:
     break;
   }
  goto ret0;

 L500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3344;
  goto ret0;

 L3344: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L501;
    case NEG:
      goto L554;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L3346;
    default:
      goto ret0;
   }
 L3346: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1098;
    }
  goto ret0;

 L501: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L3347;
  goto ret0;

 L3347: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L502;
    case SIGN_EXTEND:
      goto L580;
    default:
     break;
   }
  goto ret0;

 L502: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L503;
    }
  goto ret0;

 L503: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L504;
  goto ret0;

 L504: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L505;
    }
  goto ret0;

 L505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3349;
  goto ret0;

 L3349: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL)
    goto L3351;
  goto ret0;

 L3351: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 46;
    }
 L3352: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 47;
    }
  goto ret0;

 L580: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L581;
    }
  goto ret0;

 L581: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L582;
  goto ret0;

 L582: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L583;
    }
  goto ret0;

 L583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3353;
  goto ret0;

 L3353: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL)
    goto L3355;
  goto ret0;

 L3355: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 49;
    }
 L3356: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 50;
    }
  goto ret0;

 L554: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L555;
  goto ret0;

 L555: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L3357;
  goto ret0;

 L3357: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L556;
    case SIGN_EXTEND:
      goto L634;
    default:
     break;
   }
  goto ret0;

 L556: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L557;
    }
  goto ret0;

 L557: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L558;
  goto ret0;

 L558: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L559;
    }
  goto ret0;

 L559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32LL
      && (ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 48;
    }
  goto ret0;

 L634: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L635;
    }
  goto ret0;

 L635: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L636;
  goto ret0;

 L636: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L637;
    }
  goto ret0;

 L637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32LL
      && (ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 51;
    }
  goto ret0;

 L1098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32LL
      && (TARGET_64BIT && !TARGET_MIPS16))
    {
      return 111;
    }
  goto ret0;

 L1090: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1091;
    }
  goto ret0;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int (x3, DImode))
    {
      operands[2] = x3;
      goto L1092;
    }
  goto ret0;

 L1092: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32))
    {
      return 110;
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L886;
    }
  goto ret0;

 L886: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 77;
    }
  goto ret0;

 L915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L916;
    }
  goto ret0;

 L916: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 81;
    }
  goto ret0;

 L935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L936;
    }
  goto ret0;

 L936: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CLZ_CLO))
    {
      return 83;
    }
  goto ret0;

 L972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 90;
    }
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1054;
  if (uns_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L982;
    }
 L987: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L988;
    }
  goto ret0;

 L1054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1055;
    }
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1056;
  goto ret0;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1057;
    }
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 104;
    }
  goto ret0;

 L982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L983;
    }
  x2 = XEXP (x1, 0);
  goto L987;

 L983: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 92;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L987;

 L988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L989;
    }
  goto ret0;

 L989: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 93;
    }
  goto ret0;

 L1005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1006;
    }
 L1011: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1012;
    }
  goto ret0;

 L1006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1007;
    }
  x2 = XEXP (x1, 0);
  goto L1011;

 L1007: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 96;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1011;

 L1012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1013;
    }
  goto ret0;

 L1013: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 97;
    }
  goto ret0;

 L1029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1030;
    }
  goto ret0;

 L1030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1031;
    }
  goto ret0;

 L1031: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 100;
    }
 L1037: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 101;
    }
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3359;
    case QImode:
      goto L3360;
    default:
      break;
    }
  goto ret0;

 L3359: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1103;
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      return 132;
    }
 L3362: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 133;
    }
 L3363: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1216;
    }
  goto ret0;

 L1103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1104;
    }
  goto ret0;

 L1104: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 112;
    }
  goto ret0;

 L1216: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_SEB_SEH))
    {
      return 134;
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1109;
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 137;
    }
 L3365: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 138;
    }
 L3366: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1237;
    }
  goto ret0;

 L1109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1110;
    }
  goto ret0;

 L1110: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 113;
    }
  goto ret0;

 L1237: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_SEB_SEH))
    {
      return 139;
    }
  goto ret0;

 L1114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3367;
    case QImode:
      goto L3368;
    default:
      break;
    }
  goto ret0;

 L3367: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1115;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1143;
    }
 L3370: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1148;
    }
  goto ret0;

 L1115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1116;
    }
  goto ret0;

 L1116: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 114;
    }
  goto ret0;

 L1143: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 119;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3370;

 L1148: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 120;
    }
  goto ret0;

 L3368: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1121;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1173;
    }
 L3372: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1178;
    }
  goto ret0;

 L1121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1122;
    }
  goto ret0;

 L1122: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 115;
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 125;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3372;

 L1178: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 126;
    }
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3373;
    case SFmode:
      goto L3374;
    default:
      break;
    }
  goto ret0;

 L3373: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1257;
    }
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 143;
    }
 L1270: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 144;
    }
  goto ret0;

 L3374: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1275;
    }
  goto ret0;

 L1275: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 145;
    }
 L1288: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 146;
    }
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3375;
    case 3:
      goto L3376;
    default:
      break;
    }
  goto ret0;

 L3375: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 18)
    goto L1322;
  goto ret0;

 L1322: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1323;
    }
  goto ret0;

 L1323: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1324;
    }
  goto ret0;

 L1324: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 153;
    }
  goto ret0;

 L3376: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19LL:
      goto L1328;
    case 27LL:
      goto L2321;
    default:
      break;
    }
  goto ret0;

 L1328: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1329;
    }
  goto ret0;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1330;
    }
  goto ret0;

 L1330: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1331;
    }
  goto ret0;

 L1331: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 154;
    }
  goto ret0;

 L2321: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2322;
    }
  goto ret0;

 L2322: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2323;
    }
  goto ret0;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (TARGET_ABICALLS))
    {
      return 311;
    }
  goto ret0;

 L1372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3378;
  goto ret0;

 L3378: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1373;
    }
 L3379: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1403;
    }
  goto ret0;

 L1373: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT))
    {
      return 161;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3379;

 L1403: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS))
    {
      return 167;
    }
  goto ret0;

 L1377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1378;
    }
  goto ret0;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1379;
    }
 L1413: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1414;
    }
  goto ret0;

 L1379: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT))
    {
      return 162;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1413;

 L1414: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 169;
    }
 L1426: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 171;
    }
  goto ret0;

 L1594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1595;
    }
  goto ret0;

 L1595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1596;
    }
  goto ret0;

 L1596: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 207;
    }
 L1609: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 209;
    }
  goto ret0;

 L1652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1653;
    }
  goto ret0;

 L1653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1654;
    }
  goto ret0;

 L1654: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 215;
    }
 L1660: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 216;
    }
  goto ret0;

 L1703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3380;
  goto ret0;

 L3380: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1704;
    }
 L3381: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1716;
    }
  goto ret0;

 L1704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1705;
    }
  x2 = XEXP (x1, 0);
  goto L3381;

 L1705: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 222;
    }
 L1711: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 223;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3381;

 L1716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1717;
    }
  goto ret0;

 L1717: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 224;
    }
  goto ret0;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1761;
    }
  goto ret0;

 L1761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1762;
    }
  goto ret0;

 L1762: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_ROTR_SI))
    {
      return 230;
    }
  goto ret0;

 L1885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1886;
    }
  goto ret0;

 L1886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3382;
  goto ret0;

 L3382: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL)
    goto L3384;
  goto ret0;

 L3384: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 244;
    }
 L3385: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 245;
    }
  goto ret0;

 L1905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1906;
    }
  goto ret0;

 L1906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0LL
      && (!TARGET_MIPS16))
    {
      return 248;
    }
  goto ret0;

 L1915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1916;
    }
  goto ret0;

 L1916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1917;
    }
 L1922: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1923;
    }
  goto ret0;

 L1917: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 250;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1922;

 L1923: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 251;
    }
  goto ret0;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1940;
    }
  goto ret0;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1941;
    }
  goto ret0;

 L1941: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 254;
    }
 L1947: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 255;
    }
  goto ret0;

 L1963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1964;
    }
  goto ret0;

 L1964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, SImode))
    {
      operands[2] = x2;
      goto L1965;
    }
  goto ret0;

 L1965: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 258;
    }
 L1971: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 259;
    }
  goto ret0;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1988;
    }
  goto ret0;

 L1988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1989;
    }
 L1994: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1995;
    }
  goto ret0;

 L1989: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 262;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1994;

 L1995: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 263;
    }
  goto ret0;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2012;
    }
  goto ret0;

 L2012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2013;
    }
  goto ret0;

 L2013: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 266;
    }
 L2019: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 267;
    }
  goto ret0;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2036;
    }
  goto ret0;

 L2036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, SImode))
    {
      operands[2] = x2;
      goto L2037;
    }
  goto ret0;

 L2037: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 270;
    }
 L2043: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 271;
    }
  goto ret0;

 L2516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L2517;
    }
 L2534: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2535;
    }
  goto ret0;

 L2517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L3386;
    case DImode:
      goto L3387;
    default:
      break;
    }
  goto L2534;

 L3386: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2518;
    }
  goto L2534;

 L2518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2519;
  goto L2534;

 L2519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2520;
    }
  x2 = XEXP (x1, 0);
  goto L2534;

 L2520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2521;
    }
  x2 = XEXP (x1, 0);
  goto L2534;

 L2521: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE))
    {
      return 330;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2534;

 L3387: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2527;
    }
  goto L2534;

 L2527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2528;
  goto L2534;

 L2528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2529;
    }
  x2 = XEXP (x1, 0);
  goto L2534;

 L2529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2530;
    }
  x2 = XEXP (x1, 0);
  goto L2534;

 L2530: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE))
    {
      return 331;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2534;

 L2535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[4] = x3;
      goto L2536;
    }
  goto ret0;

 L2536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2537;
  goto ret0;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2538;
    }
  goto ret0;

 L2538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2539;
    }
  goto ret0;

 L2539: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT))
    {
      return 332;
    }
  goto ret0;

 L1394: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT))
    {
      return 165;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L82;
    case SIGN_EXTEND:
      goto L94;
    case MINUS:
      goto L134;
    case MULT:
      goto L369;
    case NEG:
      goto L447;
    case TRUNCATE:
      goto L655;
    case ABS:
      goto L890;
    case FFS:
      goto L930;
    case CLZ:
      goto L940;
    case NOT:
      goto L976;
    case AND:
      goto L993;
    case IOR:
      goto L1017;
    case XOR:
      goto L1041;
    case ZERO_EXTEND:
      goto L1132;
    case FIX:
      goto L1292;
    case UNSPEC:
      goto L3425;
    case HIGH:
      goto L1383;
    case LO_SUM:
      goto L1388;
    case ASHIFT:
      goto L1640;
    case ASHIFTRT:
      goto L1691;
    case LSHIFTRT:
      goto L1748;
    case ROTATERT:
      goto L1766;
    case EQ:
      goto L1895;
    case NE:
      goto L1910;
    case GT:
      goto L1927;
    case LT:
      goto L1951;
    case LE:
      goto L1975;
    case GTU:
      goto L1999;
    case LTU:
      goto L2023;
    case LEU:
      goto L2047;
    case IF_THEN_ELSE:
      goto L2543;
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      goto L3410;
    default:
      goto ret0;
   }
 L3410: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1398;
    }
  goto ret0;

 L82: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3428;
  goto ret0;

 L3428: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L3431;
    case MULT:
      goto L708;
    default:
     break;
   }
 L3429: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L89;
    }
  goto ret0;

 L3431: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 29)
    goto L83;
  goto L3429;

 L83: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, DImode))
    {
      operands[1] = x2;
      goto L84;
    }
  x2 = XEXP (x1, 0);
  goto L3429;

 L84: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT))
    {
      return 13;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3429;

 L708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3432;
  goto ret0;

 L3432: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L709;
    case SIGN_EXTEND:
      goto L719;
    default:
     break;
   }
  goto ret0;

 L709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L710;
    }
  goto ret0;

 L710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L711;
  goto ret0;

 L711: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L712;
    }
  goto ret0;

 L712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L713;
    }
  goto ret0;

 L713: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT))
    {
      return 55;
    }
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L720;
    }
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L721;
  goto ret0;

 L721: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L722;
    }
  goto ret0;

 L722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L723;
    }
  goto ret0;

 L723: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT))
    {
      return 56;
    }
  goto ret0;

 L89: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L90;
    }
  goto ret0;

 L90: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT
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
       || REGNO (operands[2]) == STACK_POINTER_REGNUM)))
    {
      return 14;
    }
  goto ret0;

 L94: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3434;
    case HImode:
      goto L3437;
    case QImode:
      goto L3439;
    default:
      break;
    }
  goto ret0;

 L3434: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L95;
    case MINUS:
      goto L141;
    case ASHIFT:
      goto L1601;
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L3436;
    default:
      goto ret0;
   }
 L3436: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1193;
    }
  goto ret0;

 L95: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L96;
    }
 L102: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L103;
    }
  goto ret0;

 L96: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L97;
    }
  x3 = XEXP (x2, 0);
  goto L102;

 L97: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 15;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L102;

 L103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L104;
    }
  goto ret0;

 L104: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT))
    {
      return 16;
    }
  goto ret0;

 L141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L142;
    }
  goto ret0;

 L142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L143;
    }
  goto ret0;

 L143: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 22;
    }
  goto ret0;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1602;
    }
  goto ret0;

 L1602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1603;
    }
  goto ret0;

 L1603: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 208;
    }
  goto ret0;

 L1193: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 129;
    }
  goto ret0;

 L3437: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1198;
    }
 L3438: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1203;
    }
  goto ret0;

 L1198: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 130;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3438;

 L1203: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 131;
    }
  goto ret0;

 L3439: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1242;
    }
 L3440: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1247;
    }
  goto ret0;

 L1242: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 140;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3440;

 L1247: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 141;
    }
  goto ret0;

 L134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3442;
  goto ret0;

 L3442: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L135;
    }
 L3443: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L466;
    }
  goto ret0;

 L135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L136;
    }
  x2 = XEXP (x1, 0);
  goto L3443;

 L136: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 21;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3443;

 L466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L467;
  goto ret0;

 L467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3444;
  goto ret0;

 L3444: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L468;
    case ZERO_EXTEND:
      goto L478;
    default:
     break;
   }
  goto ret0;

 L468: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L469;
    }
  goto ret0;

 L469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L470;
  goto ret0;

 L470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L471;
    }
  goto ret0;

 L471: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MSAC))
    {
      return 44;
    }
  goto ret0;

 L478: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L479;
    }
  goto ret0;

 L479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L480;
  goto ret0;

 L480: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L481;
    }
  goto ret0;

 L481: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MSAC))
    {
      return 45;
    }
  goto ret0;

 L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3447;
  goto ret0;

 L3447: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTEND)
    goto L393;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L370;
    }
 L3448: ATTRIBUTE_UNUSED_LABEL
  if (extend_operator (x2, DImode))
    {
      operands[1] = x2;
      goto L416;
    }
 L3449: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTEND)
    goto L440;
  goto ret0;

 L393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L394;
    }
  goto L3448;

 L394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L395;
  x2 = XEXP (x1, 0);
  goto L3448;

 L395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L396;
    }
  x2 = XEXP (x1, 0);
  goto L3448;

 L396: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 38;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3448;

 L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L371;
    }
  goto ret0;

 L371: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 36;
    }
 L388: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (GENERATE_MULT3_DI || TARGET_MIPS4000))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 37;
    }
  goto ret0;

 L416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L417;
    }
  goto L3449;

 L417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (extend_operator (x2, DImode))
    {
      operands[2] = x2;
      goto L418;
    }
  x2 = XEXP (x1, 0);
  goto L3449;

 L418: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L419;
    }
  x2 = XEXP (x1, 0);
  goto L3449;

 L419: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2]))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 39;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3449;

 L440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L441;
    }
  goto ret0;

 L441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L442;
  goto ret0;

 L442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L443;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 41;
    }
  goto ret0;

 L447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3450;
  goto ret0;

 L3450: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L448;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L958;
    }
  goto ret0;

 L448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3452;
  goto ret0;

 L3452: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L449;
    case ZERO_EXTEND:
      goto L458;
    default:
     break;
   }
  goto ret0;

 L449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L450;
    }
  goto ret0;

 L450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L451;
  goto ret0;

 L451: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L452;
    }
  goto ret0;

 L452: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 42;
    }
  goto ret0;

 L458: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L459;
    }
  goto ret0;

 L459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L460;
  goto ret0;

 L460: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L461;
    }
  goto ret0;

 L461: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 43;
    }
  goto ret0;

 L958: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 87;
    }
  goto ret0;

 L655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L656;
  goto ret0;

 L656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L657;
  goto ret0;

 L657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L3454;
  goto ret0;

 L3454: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L658;
    case ZERO_EXTEND:
      goto L682;
    default:
     break;
   }
  goto ret0;

 L658: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L659;
    }
  goto ret0;

 L659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L660;
  goto ret0;

 L660: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L661;
    }
  goto ret0;

 L661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 64LL
      && (TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 52;
    }
  goto ret0;

 L682: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L683;
    }
  goto ret0;

 L683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L684;
  goto ret0;

 L684: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L685;
    }
  goto ret0;

 L685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 64LL
      && (TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 53;
    }
  goto ret0;

 L890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L891;
    }
  goto ret0;

 L891: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 78;
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L931;
    }
  goto ret0;

 L931: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 82;
    }
  goto ret0;

 L940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L941;
    }
  goto ret0;

 L941: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_DCLZ_DCLO))
    {
      return 84;
    }
  goto ret0;

 L976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L977;
    }
  goto ret0;

 L977: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 91;
    }
  goto ret0;

 L993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3457;
  goto ret0;

 L3457: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1062;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L994;
    }
  goto ret0;

 L1062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1063;
    }
  goto ret0;

 L1063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1064;
  goto ret0;

 L1064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1065;
    }
  goto ret0;

 L1065: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 105;
    }
  goto ret0;

 L994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L995;
    }
 L1000: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1001;
    }
  goto ret0;

 L995: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 94;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1000;

 L1001: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 95;
    }
  goto ret0;

 L1017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1018;
    }
  goto ret0;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1019;
    }
 L1024: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1025;
    }
  goto ret0;

 L1019: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 98;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1024;

 L1025: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 99;
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1042;
    }
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1043;
    }
  goto ret0;

 L1043: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 102;
    }
 L1049: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 103;
    }
  goto ret0;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3458;
    case HImode:
      goto L3460;
    case QImode:
      goto L3462;
    default:
      break;
    }
  goto ret0;

 L3458: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1133;
    }
 L3459: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1138;
    }
  goto ret0;

 L1133: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 117;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3459;

 L1138: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 118;
    }
  goto ret0;

 L3460: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1153;
    }
 L3461: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1158;
    }
  goto ret0;

 L1153: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 121;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3461;

 L1158: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 122;
    }
  goto ret0;

 L3462: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1183;
    }
 L3463: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1188;
    }
  goto ret0;

 L1183: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 127;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3463;

 L1188: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 128;
    }
  goto ret0;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3464;
    case SFmode:
      goto L3465;
    default:
      break;
    }
  goto ret0;

 L3464: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1293;
    }
  goto ret0;

 L1293: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 147;
    }
  goto ret0;

 L3465: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1298;
    }
  goto ret0;

 L1298: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 148;
    }
  goto ret0;

 L3425: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3466;
    case 3:
      goto L3467;
    default:
      break;
    }
  goto ret0;

 L3466: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L1347;
  goto ret0;

 L1347: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1348;
    }
  goto ret0;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1349;
    }
  goto ret0;

 L1349: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 157;
    }
  goto ret0;

 L3467: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 23LL:
      goto L1353;
    case 27LL:
      goto L2327;
    default:
      break;
    }
  goto ret0;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1354;
    }
  goto ret0;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1355;
    }
  goto ret0;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1356;
    }
  goto ret0;

 L1356: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 158;
    }
  goto ret0;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2328;
    }
  goto ret0;

 L2328: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2329;
    }
  goto ret0;

 L2329: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (TARGET_ABICALLS))
    {
      return 312;
    }
  goto ret0;

 L1383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3469;
  goto ret0;

 L3469: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1384;
    }
 L3470: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1408;
    }
  goto ret0;

 L1384: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT))
    {
      return 163;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3470;

 L1408: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS))
    {
      return 168;
    }
  goto ret0;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1389;
    }
  goto ret0;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1390;
    }
 L1419: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1420;
    }
  goto ret0;

 L1390: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT))
    {
      return 164;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1419;

 L1420: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16 && TARGET_64BIT))
    {
      return 170;
    }
 L1432: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT))
    {
      return 172;
    }
  goto ret0;

 L1640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1641;
    }
  goto ret0;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1642;
    }
  goto ret0;

 L1642: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 213;
    }
 L1648: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 214;
    }
  goto ret0;

 L1691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1692;
    }
  goto ret0;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1693;
    }
  goto ret0;

 L1693: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 220;
    }
 L1699: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 221;
    }
  goto ret0;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1749;
    }
  goto ret0;

 L1749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1750;
    }
  goto ret0;

 L1750: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 228;
    }
 L1756: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 229;
    }
  goto ret0;

 L1766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1767;
    }
  goto ret0;

 L1767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1768;
    }
  goto ret0;

 L1768: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_ROTR_DI))
    {
      return 231;
    }
  goto ret0;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1896;
    }
  goto ret0;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3471;
  goto ret0;

 L3471: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL)
    goto L3473;
  goto ret0;

 L3473: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 246;
    }
 L3474: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 247;
    }
  goto ret0;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1911;
    }
  goto ret0;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0LL
      && (TARGET_64BIT && !TARGET_MIPS16))
    {
      return 249;
    }
  goto ret0;

 L1927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1928;
    }
  goto ret0;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1929;
    }
 L1934: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1935;
    }
  goto ret0;

 L1929: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 252;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1934;

 L1935: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 253;
    }
  goto ret0;

 L1951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1952;
    }
  goto ret0;

 L1952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1953;
    }
  goto ret0;

 L1953: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 256;
    }
 L1959: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 257;
    }
  goto ret0;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1976;
    }
  goto ret0;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, DImode))
    {
      operands[2] = x2;
      goto L1977;
    }
  goto ret0;

 L1977: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 260;
    }
 L1983: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 261;
    }
  goto ret0;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2000;
    }
  goto ret0;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2001;
    }
 L2006: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2007;
    }
  goto ret0;

 L2001: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 264;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2006;

 L2007: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 265;
    }
  goto ret0;

 L2023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2024;
    }
  goto ret0;

 L2024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2025;
    }
  goto ret0;

 L2025: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 268;
    }
 L2031: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 269;
    }
  goto ret0;

 L2047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2048;
    }
  goto ret0;

 L2048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, DImode))
    {
      operands[2] = x2;
      goto L2049;
    }
  goto ret0;

 L2049: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 272;
    }
 L2055: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16 && INTVAL (operands[2]) < 32767))
    {
      return 273;
    }
  goto ret0;

 L2543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L2544;
    }
 L2561: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2562;
    }
  goto ret0;

 L2544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L3475;
    case DImode:
      goto L3476;
    default:
      break;
    }
  goto L2561;

 L3475: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2545;
    }
  goto L2561;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2546;
  goto L2561;

 L2546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2547;
    }
  x2 = XEXP (x1, 0);
  goto L2561;

 L2547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2548;
    }
  x2 = XEXP (x1, 0);
  goto L2561;

 L2548: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && TARGET_64BIT))
    {
      return 333;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2561;

 L3476: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2554;
    }
  goto L2561;

 L2554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2555;
  goto L2561;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2556;
    }
  x2 = XEXP (x1, 0);
  goto L2561;

 L2556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2557;
    }
  x2 = XEXP (x1, 0);
  goto L2561;

 L2557: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && TARGET_64BIT))
    {
      return 334;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2561;

 L2562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[4] = x3;
      goto L2563;
    }
  goto ret0;

 L2563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L2564;
  goto ret0;

 L2564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2565;
    }
  goto ret0;

 L2565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2566;
    }
  goto ret0;

 L2566: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_64BIT))
    {
      return 335;
    }
  goto ret0;

 L1398: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT))
    {
      return 166;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (nonimmediate_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L1465;
    }
 L3225: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L2058;
    }
  goto ret0;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      operands[1] = x1;
      goto L1466;
    }
  x1 = XEXP (x0, 0);
  goto L3225;

 L1466: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_8CC && TARGET_HARD_FLOAT))
    {
      return 181;
    }
  x1 = XEXP (x0, 0);
  goto L3225;

 L2058: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode)
    goto L3496;
  goto ret0;

 L3496: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNORDERED:
      goto L2059;
    case UNLT:
      goto L2065;
    case UNEQ:
      goto L2071;
    case UNLE:
      goto L2077;
    case UNGT:
      goto L2083;
    case UNGE:
      goto L2089;
    case EQ:
      goto L2095;
    case LT:
      goto L2101;
    case LE:
      goto L2107;
    case GT:
      goto L2113;
    case GE:
      goto L2119;
    default:
     break;
   }
  goto ret0;

 L2059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3507;
    case SFmode:
      goto L3508;
    default:
      break;
    }
  goto ret0;

 L3507: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2060;
    }
  goto ret0;

 L2060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2061;
    }
  goto ret0;

 L2061: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 274;
    }
  goto ret0;

 L3508: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2126;
    }
  goto ret0;

 L2126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2127;
    }
  goto ret0;

 L2127: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 285;
    }
  goto ret0;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3509;
    case SFmode:
      goto L3510;
    default:
      break;
    }
  goto ret0;

 L3509: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2066;
    }
  goto ret0;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2067;
    }
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 275;
    }
  goto ret0;

 L3510: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2132;
    }
  goto ret0;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2133;
    }
  goto ret0;

 L2133: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 286;
    }
  goto ret0;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3511;
    case SFmode:
      goto L3512;
    default:
      break;
    }
  goto ret0;

 L3511: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2072;
    }
  goto ret0;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2073;
    }
  goto ret0;

 L2073: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 276;
    }
  goto ret0;

 L3512: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2138;
    }
  goto ret0;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2139;
    }
  goto ret0;

 L2139: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 287;
    }
  goto ret0;

 L2077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3513;
    case SFmode:
      goto L3514;
    default:
      break;
    }
  goto ret0;

 L3513: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2078;
    }
  goto ret0;

 L2078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2079;
    }
  goto ret0;

 L2079: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 277;
    }
  goto ret0;

 L3514: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2144;
    }
  goto ret0;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2145;
    }
  goto ret0;

 L2145: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 288;
    }
  goto ret0;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3515;
    case SFmode:
      goto L3516;
    default:
      break;
    }
  goto ret0;

 L3515: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2084;
    }
  goto ret0;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2085;
    }
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 278;
    }
  goto ret0;

 L3516: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2150;
    }
  goto ret0;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2151;
    }
  goto ret0;

 L2151: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 289;
    }
  goto ret0;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3517;
    case SFmode:
      goto L3518;
    default:
      break;
    }
  goto ret0;

 L3517: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2090;
    }
  goto ret0;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2091;
    }
  goto ret0;

 L2091: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 279;
    }
  goto ret0;

 L3518: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2156;
    }
  goto ret0;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2157;
    }
  goto ret0;

 L2157: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 290;
    }
  goto ret0;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3519;
    case SFmode:
      goto L3520;
    default:
      break;
    }
  goto ret0;

 L3519: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2096;
    }
  goto ret0;

 L2096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2097;
    }
  goto ret0;

 L2097: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 280;
    }
  goto ret0;

 L3520: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2162;
    }
  goto ret0;

 L2162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2163;
    }
  goto ret0;

 L2163: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 291;
    }
  goto ret0;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3521;
    case SFmode:
      goto L3522;
    default:
      break;
    }
  goto ret0;

 L3521: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2102;
    }
  goto ret0;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2103;
    }
  goto ret0;

 L2103: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 281;
    }
  goto ret0;

 L3522: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2168;
    }
  goto ret0;

 L2168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2169;
    }
  goto ret0;

 L2169: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 292;
    }
  goto ret0;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3523;
    case SFmode:
      goto L3524;
    default:
      break;
    }
  goto ret0;

 L3523: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2108;
    }
  goto ret0;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2109;
    }
  goto ret0;

 L2109: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 282;
    }
  goto ret0;

 L3524: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2174;
    }
  goto ret0;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2175;
    }
  goto ret0;

 L2175: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 293;
    }
  goto ret0;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3525;
    case SFmode:
      goto L3526;
    default:
      break;
    }
  goto ret0;

 L3525: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2114;
    }
  goto ret0;

 L2114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2115;
    }
  goto ret0;

 L2115: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 283;
    }
  goto ret0;

 L3526: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2180;
    }
  goto ret0;

 L2180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2181;
    }
  goto ret0;

 L2181: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 294;
    }
  goto ret0;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3527;
    case SFmode:
      goto L3528;
    default:
      break;
    }
  goto ret0;

 L3527: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2120;
    }
  goto ret0;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2121;
    }
  goto ret0;

 L2121: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 284;
    }
  goto ret0;

 L3528: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2186;
    }
  goto ret0;

 L2186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2187;
    }
  goto ret0;

 L2187: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 295;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DFmode:
      goto L3222;
    case SFmode:
      goto L3221;
    case SImode:
      goto L3218;
    case DImode:
      goto L3216;
    case HImode:
      goto L3212;
    case QImode:
      goto L3213;
    case BLKmode:
      goto L3215;
    case CCmode:
      goto L3220;
    default:
      break;
    }
 L1770: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2200;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2293;
    }
  goto ret0;

 L3222: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1511;
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L15;
    }
 L3224: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1553;
    }
  goto L1770;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3227;
    case DImode:
      goto L3228;
    default:
      break;
    }
  goto L3224;

 L3227: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1512;
  goto L3224;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1513;
    }
  goto L3224;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1514;
    }
  goto L3224;

 L1514: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1515;
    }
  x1 = XEXP (x0, 0);
  goto L3224;

 L1515: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 188;
    }
  x1 = XEXP (x0, 0);
  goto L3224;

 L3228: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1519;
  goto L3224;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1520;
    }
  goto L3224;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1521;
    }
  goto L3224;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1522;
    }
  x1 = XEXP (x0, 0);
  goto L3224;

 L1522: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_FP4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 189;
    }
  x1 = XEXP (x0, 0);
  goto L3224;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L3229;
  x1 = XEXP (x0, 0);
  goto L3224;

 L3229: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3224;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1554;
    }
 L1565: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1566;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1554: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || nonmemory_operand (operands[1], DFmode))))
    {
      return 197;
    }
 L1558: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || nonmemory_operand (operands[1], DFmode))))
    {
      return 198;
    }
 L1562: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || nonmemory_operand (operands[1], DFmode))))
    {
      return 199;
    }
  x1 = XEXP (x0, 1);
  goto L1565;

 L1566: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 200;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3221: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1770;

 L3218: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L3295;
    case REG:
      goto L3296;
    default:
     break;
   }
 L3205: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L27;
    }
 L3206: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 29)
    goto L33;
 L3207: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L39;
    }
 L3211: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1073;
    }
  goto L1770;

 L3295: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1454;
    }
  goto L3211;

 L1454: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (TARGET_MIPS16))
    {
      return 178;
    }
  x1 = XEXP (x0, 0);
  goto L3211;

 L3296: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 28)
    goto L2316;
  goto L3205;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L2317;
  x1 = XEXP (x0, 0);
  goto L3205;

 L2317: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0LL
      && (TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64)))
    {
      return 310;
    }
  x1 = XEXP (x0, 0);
  goto L3205;

 L27: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L28;
  x1 = XEXP (x0, 0);
  goto L3206;

 L28: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L29;
    }
  x1 = XEXP (x0, 0);
  goto L3206;

 L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L30;
    }
  x1 = XEXP (x0, 0);
  goto L3206;

 L30: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 5;
    }
  x1 = XEXP (x0, 0);
  goto L3206;

 L33: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L34;
  x1 = XEXP (x0, 0);
  goto L3207;

 L34: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L35;
  x1 = XEXP (x0, 0);
  goto L3207;

 L35: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, SImode))
    {
      operands[0] = x2;
      goto L36;
    }
  x1 = XEXP (x0, 0);
  goto L3207;

 L36: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 6;
    }
  x1 = XEXP (x0, 0);
  goto L3207;

 L39: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3297;
  x1 = XEXP (x0, 0);
  goto L3211;

 L3297: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3211;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3388;
 L1457: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1458;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3388: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1074;
    case UNSPEC:
      goto L3390;
    default:
     break;
   }
  goto L1457;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1075;
    }
  goto L1457;

 L1075: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 107;
    }
  x1 = XEXP (x0, 1);
  goto L1457;

 L3390: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 2)
    goto L1581;
  goto L1457;

 L1581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1582;
    }
  goto L1457;

 L1582: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 203;
    }
  x1 = XEXP (x0, 1);
  goto L1457;

 L1458: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))))
    {
      return 179;
    }
 L1462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 180;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3216: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1435;
    }
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L69;
    }
 L3209: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 29)
    goto L75;
 L3210: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L81;
    }
 L3217: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1438;
    }
  goto L1770;

 L1435: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (TARGET_MIPS16 && TARGET_64BIT))
    {
      return 173;
    }
  x1 = XEXP (x0, 0);
  goto L3217;

 L69: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L70;
  x1 = XEXP (x0, 0);
  goto L3209;

 L70: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L71;
    }
  x1 = XEXP (x0, 0);
  goto L3209;

 L71: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L72;
    }
  x1 = XEXP (x0, 0);
  goto L3209;

 L72: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 11;
    }
  x1 = XEXP (x0, 0);
  goto L3209;

 L75: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L76;
  x1 = XEXP (x0, 0);
  goto L3210;

 L76: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L77;
  x1 = XEXP (x0, 0);
  goto L3210;

 L77: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int (x2, DImode))
    {
      operands[0] = x2;
      goto L78;
    }
  x1 = XEXP (x0, 0);
  goto L3210;

 L78: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT))
    {
      return 12;
    }
  x1 = XEXP (x0, 0);
  goto L3210;

 L81: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3391;
  x1 = XEXP (x0, 0);
  goto L3217;

 L3391: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3217;

 L1438: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1439;
    }
 L1446: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1447;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1439: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode))))
    {
      return 174;
    }
 L1443: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 175;
    }
  x1 = XEXP (x0, 1);
  goto L1446;

 L1447: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode))))
    {
      return 176;
    }
 L1451: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 177;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3212: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1078;
    }
 L3214: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1125;
    }
  goto L1770;

 L1078: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1079;
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1526;
    }
  x1 = XEXP (x0, 0);
  goto L3214;

 L1079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1080;
    }
  x1 = XEXP (x0, 0);
  goto L3214;

 L1080: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 108;
    }
  x1 = XEXP (x0, 0);
  goto L3214;

 L1526: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))))
    {
      return 190;
    }
 L1530: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 191;
    }
  x1 = XEXP (x0, 0);
  goto L3214;

 L1125: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3477;
  x1 = XEXP (x0, 0);
  goto L1770;

 L3477: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1126;
    case SIGN_EXTEND:
      goto L1220;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L3479;
  x1 = XEXP (x0, 0);
  goto L1770;

 L3479: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1127;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1163;
    }
 L3481: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1168;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1128;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1128: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 116;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1163: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 123;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3481;

 L1168: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 124;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L3482;
  x1 = XEXP (x0, 0);
  goto L1770;

 L3482: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 135;
    }
 L3483: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 136;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3213: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1083;
    }
  goto L1770;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1084;
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L1534;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1085;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1085: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 109;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1534: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0))))
    {
      return 192;
    }
 L1538: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 193;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3215: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, BLKmode))
    {
      operands[0] = x1;
      goto L1334;
    }
  goto L1770;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L3484;
  x1 = XEXP (x0, 0);
  goto L1770;

 L3484: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L3488;
  x1 = XEXP (x0, 0);
  goto L1770;

 L3488: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3492;
    case 3:
      goto L3493;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3492: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 20LL:
      goto L1335;
    case 24LL:
      goto L1360;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1336;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1336: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1337;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1337: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 155;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1361;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1361: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1362;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1362: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 159;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3493: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 21LL:
      goto L1341;
    case 25LL:
      goto L1366;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1341: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1342;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1342: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1343;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (!TARGET_MIPS16))
    {
      return 156;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1366: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1367;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1367: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1368;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L1368: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_64BIT && !TARGET_MIPS16))
    {
      return 160;
    }
  x1 = XEXP (x0, 0);
  goto L1770;

 L3220: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1770;

 L2200: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3529;
    case DImode:
      goto L3530;
    default:
      break;
    }
 L1771: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L1772;
    case LABEL_REF:
      goto L2191;
    default:
     break;
   }
  goto ret0;

 L3529: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2201;
    }
  goto L1771;

 L2201: ATTRIBUTE_UNUSED_LABEL
  if ((!(Pmode == DImode)))
    {
      return 298;
    }
  x1 = XEXP (x0, 1);
  goto L1771;

 L3530: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2205;
    }
  goto L1771;

 L2205: ATTRIBUTE_UNUSED_LABEL
  if ((Pmode == DImode))
    {
      return 299;
    }
  x1 = XEXP (x0, 1);
  goto L1771;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case CCmode:
      goto L3531;
    case SImode:
      goto L3532;
    case DImode:
      goto L3533;
    default:
      break;
    }
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  if (cmp_op (x2, CCmode))
    {
      operands[0] = x2;
      goto L1773;
    }
  goto ret0;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[2] = x3;
      goto L1774;
    }
  goto ret0;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L1775;
  goto ret0;

 L1775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1776;
    case PC:
      goto L1785;
    default:
     break;
   }
  goto ret0;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1777;

 L1777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_HARD_FLOAT))
    {
      return 232;
    }
  goto ret0;

 L1785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1786;
  goto ret0;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1787;

 L1787: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 233;
    }
  goto ret0;

 L3532: ATTRIBUTE_UNUSED_LABEL
  if (cmp_op (x2, SImode))
    {
      operands[0] = x2;
      goto L1792;
    }
 L3534: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, SImode))
    {
      operands[0] = x2;
      goto L1830;
    }
  goto ret0;

 L1792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1793;
    }
  goto L3534;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L1794;
  goto L3534;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1795;
    case PC:
      goto L1804;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3534;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1796;

 L1796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (!TARGET_MIPS16))
    {
      return 234;
    }
  x2 = XEXP (x1, 0);
  goto L3534;

 L1804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1805;
  x2 = XEXP (x1, 0);
  goto L3534;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1806;

 L1806: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 235;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3534;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3536;
  goto ret0;

 L3536: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1831;
    }
 L3537: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1869;
    }
  goto ret0;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1832;
    }
  x3 = XEXP (x2, 0);
  goto L3537;

 L1832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1833;
    case PC:
      goto L1851;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3537;

 L1833: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1834;

 L1834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (!TARGET_MIPS16))
    {
      return 238;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3537;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1852;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3537;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1853;

 L1853: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 240;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3537;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L1870;
  goto ret0;

 L1870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1871;
    }
  goto ret0;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1872;
    }
  goto ret0;

 L1872: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 242;
    }
  goto ret0;

 L3533: ATTRIBUTE_UNUSED_LABEL
  if (cmp_op (x2, DImode))
    {
      operands[0] = x2;
      goto L1811;
    }
 L3535: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, DImode))
    {
      operands[0] = x2;
      goto L1839;
    }
  goto ret0;

 L1811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1812;
    }
  goto L3535;

 L1812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L1813;
  goto L3535;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1814;
    case PC:
      goto L1823;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3535;

 L1814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1815;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (!TARGET_MIPS16))
    {
      return 236;
    }
  x2 = XEXP (x1, 0);
  goto L3535;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1824;
  x2 = XEXP (x1, 0);
  goto L3535;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1825;

 L1825: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 237;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3535;

 L1839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3538;
  goto ret0;

 L3538: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1840;
    }
 L3539: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1878;
    }
  goto ret0;

 L1840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L1841;
    }
  x3 = XEXP (x2, 0);
  goto L3539;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1842;
    case PC:
      goto L1861;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3539;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1843;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (!TARGET_MIPS16))
    {
      return 239;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3539;

 L1861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1862;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3539;

 L1862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1863;

 L1863: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 241;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3539;

 L1878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0LL)
    goto L1879;
  goto ret0;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1880;
    }
  goto ret0;

 L1880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1881;
    }
  goto ret0;

 L1881: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 243;
    }
  goto ret0;

 L2191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L2192;

 L2192: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 296;
    }
 L2197: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 297;
    }
  goto ret0;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L3540;
    case CALL:
      goto L2338;
    default:
     break;
   }
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 3)
    goto L2294;
  goto ret0;

 L2294: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2295;

 L2295: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 307;
    }
  goto ret0;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2339;
  goto ret0;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2340;
    }
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2341;

 L2341: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 314;
    }
 L2396: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 318;
    }
 L2414: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 319;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L53;
    case MINUS:
      goto L126;
    case MULT:
      goto L361;
    case SIGN_EXTEND:
      goto L424;
    case TRUNCATE:
      goto L642;
    case DIV:
      goto L829;
    case UDIV:
      goto L851;
    case NEG:
      goto L950;
    case ASHIFT:
      goto L1614;
    case ASHIFTRT:
      goto L1665;
    case LSHIFTRT:
      goto L1722;
    default:
     break;
   }
  goto ret0;

 L53: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L54;
    }
  goto ret0;

 L54: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L55;
    }
  if (small_int (x3, DImode))
    {
      operands[2] = x3;
      goto L64;
    }
  goto ret0;

 L55: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L56;
  goto ret0;

 L56: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L57;
    }
  goto ret0;

 L57: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 9;
    }
  goto ret0;

 L64: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L65;
  goto ret0;

 L65: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L66;
    }
  goto ret0;

 L66: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 10;
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L127;
    }
  goto ret0;

 L127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L128;
    }
  goto ret0;

 L128: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L129;
  goto ret0;

 L129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L130;
    }
  goto ret0;

 L130: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 20;
    }
  goto ret0;

 L361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L362;
    }
  goto ret0;

 L362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L363;
    }
  goto ret0;

 L363: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L364;
  goto ret0;

 L364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L365;
    }
  goto ret0;

 L365: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS4000))
    {
      return 36;
    }
  goto ret0;

 L424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L425;
  goto ret0;

 L425: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L426;
    }
  goto ret0;

 L426: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L427;
    }
  goto ret0;

 L427: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L428;
  goto ret0;

 L428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L429;
    }
  goto ret0;

 L429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L430;
  goto ret0;

 L430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L431;
  goto ret0;

 L431: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (extend_operator (x4, DImode))
    {
      operands[4] = x4;
      goto L432;
    }
  goto ret0;

 L432: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L433;
  goto ret0;

 L433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (extend_operator (x4, DImode))
    {
      operands[5] = x4;
      goto L434;
    }
  goto ret0;

 L434: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L435;
  goto ret0;

 L435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32LL
      && (TARGET_64BIT && GET_CODE (operands[4]) == GET_CODE (operands[5])))
    {
      return 40;
    }
  goto ret0;

 L642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L643;
  goto ret0;

 L643: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L644;
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L3555;
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L645;
    case ZERO_EXTEND:
      goto L669;
    default:
     break;
   }
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L646;
    }
  goto ret0;

 L646: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L647;
  goto ret0;

 L647: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L648;
    }
  goto ret0;

 L648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 64LL)
    goto L649;
  goto ret0;

 L649: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L650;
  goto ret0;

 L650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L651;
    }
  goto ret0;

 L651: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 52;
    }
  goto ret0;

 L669: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L670;
    }
  goto ret0;

 L670: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L671;
  goto ret0;

 L671: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L672;
    }
  goto ret0;

 L672: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 64LL)
    goto L673;
  goto ret0;

 L673: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L674;
  goto ret0;

 L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L675;
    }
  goto ret0;

 L675: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 53;
    }
  goto ret0;

 L829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L830;
    }
  goto ret0;

 L830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L831;
    }
  goto ret0;

 L831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L832;
  goto ret0;

 L832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L833;
    }
  goto ret0;

 L833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L834;
  goto ret0;

 L834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L835;
  goto ret0;

 L835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT))
    {
      return 70;
    }
  goto ret0;

 L851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L852;
    }
  goto ret0;

 L852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L853;
    }
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L854;
  goto ret0;

 L854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L855;
    }
  goto ret0;

 L855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L856;
  goto ret0;

 L856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L857;
  goto ret0;

 L857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT))
    {
      return 72;
    }
  goto ret0;

 L950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L951;
    }
  goto ret0;

 L951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L952;
  goto ret0;

 L952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L953;
    }
  goto ret0;

 L953: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 86;
    }
  goto ret0;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1615;
    }
  goto ret0;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1616;
    }
  if (small_int (x3, SImode))
    {
      operands[2] = x3;
      goto L1625;
    }
  goto ret0;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1617;
  goto ret0;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1618;
    }
  goto ret0;

 L1618: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 210;
    }
  goto ret0;

 L1625: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1626;
  goto ret0;

 L1626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1627;
    }
  goto ret0;

 L1627: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return 211;
    }
 L1636: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return 212;
    }
  goto ret0;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1666;
    }
  goto ret0;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1667;
    }
  if (small_int (x3, SImode))
    {
      operands[2] = x3;
      goto L1676;
    }
  goto ret0;

 L1667: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1668;
  goto ret0;

 L1668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1669;
    }
  goto ret0;

 L1669: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 217;
    }
  goto ret0;

 L1676: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1677;
  goto ret0;

 L1677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1678;
    }
  goto ret0;

 L1678: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0))
    {
      return 218;
    }
 L1687: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return 219;
    }
  goto ret0;

 L1722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1723;
    }
  goto ret0;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1724;
    }
  if (small_int (x3, SImode))
    {
      operands[2] = x3;
      goto L1733;
    }
  goto ret0;

 L1724: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1725;
  goto ret0;

 L1725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1726;
    }
  goto ret0;

 L1726: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
    {
      return 225;
    }
  goto ret0;

 L1733: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1734;
  goto ret0;

 L1734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1735;
    }
  goto ret0;

 L1735: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return 226;
    }
 L1744: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return 227;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L3542;
    case SImode:
      goto L3543;
    default:
      break;
    }
 L2208: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L2209;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2287;
    }
  goto ret0;

 L3542: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L52;
    }
  goto L2208;

 L52: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3544;
  x2 = XEXP (x1, 0);
  goto L2208;

 L3544: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2208;

 L3543: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L188;
    }
  goto L2208;

 L188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3557;
  x2 = XEXP (x1, 0);
  goto L2208;

 L3557: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L189;
    case PLUS:
      goto L283;
    case TRUNCATE:
      goto L486;
    case DIV:
      goto L818;
    case UDIV:
      goto L840;
    case FIX:
      goto L1262;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2208;

 L189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L190;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L191;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L191: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L192;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L193;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L193: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS4000 || TARGET_MIPS16))
    {
      return 28;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L284;
  x2 = XEXP (x1, 0);
  goto L2208;

 L284: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L285;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L286;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L287;
  x2 = XEXP (x1, 0);
  goto L2208;

 L287: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L288;
    case CLOBBER:
      goto L695;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L289;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L291: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L292: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L293;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (ISA_HAS_MACC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 32;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L696;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L696: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MAD))
    {
      return 54;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L487;
  x2 = XEXP (x1, 0);
  goto L2208;

 L487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L488;
  x2 = XEXP (x1, 0);
  goto L2208;

 L488: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L3563;
  x2 = XEXP (x1, 0);
  goto L2208;

 L3563: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L489;
    case SIGN_EXTEND:
      goto L567;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2208;

 L489: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L490;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L490: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L491;
  x2 = XEXP (x1, 0);
  goto L2208;

 L491: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L492;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L492: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32LL)
    goto L493;
  x2 = XEXP (x1, 0);
  goto L2208;

 L493: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L494;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L495;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L495: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI))
    {
      return 46;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L567: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L568;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L568: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L569;
  x2 = XEXP (x1, 0);
  goto L2208;

 L569: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L570;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L570: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32LL)
    goto L571;
  x2 = XEXP (x1, 0);
  goto L2208;

 L571: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L572;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L573;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L573: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI))
    {
      return 49;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L819;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L820;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L820: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L821;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L822;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L823;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L824;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 69;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L841;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L842;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L842: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L843;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L844;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L845;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L846;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 71;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L1262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L3565;
    case SFmode:
      goto L3566;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L3565: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1263;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1264;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L1264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1265;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L1265: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 144;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L3566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1281;
    }
  x2 = XEXP (x1, 0);
  goto L2208;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1282;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1283;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L1283: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 146;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2208;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3569;
    case DImode:
      goto L3570;
    default:
      break;
    }
  goto ret0;

 L3569: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2239;
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2210;
    }
  goto ret0;

 L2239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2240;
  goto ret0;

 L2240: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2241;
  goto ret0;

 L2241: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[0] = x5;
      goto L2242;
    }
  goto ret0;

 L2242: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4LL)
    goto L2243;
  goto ret0;

 L2243: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF)
    goto L2244;
  goto ret0;

 L2244: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  goto L2245;

 L2245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2246;
  goto ret0;

 L2246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2247;
    }
  goto ret0;

 L2247: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EMBEDDED_PIC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 302;
    }
  goto ret0;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2211;
  goto ret0;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2212;
  goto ret0;

 L2212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 300;

 L3570: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2267;
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2217;
    }
  goto ret0;

 L2267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2268;
  goto ret0;

 L2268: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L2269;
  goto ret0;

 L2269: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == MULT)
    goto L2270;
  goto ret0;

 L2270: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[0] = x6;
      goto L2271;
    }
  goto ret0;

 L2271: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 8LL)
    goto L2272;
  goto ret0;

 L2272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF)
    goto L2273;
  goto ret0;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  goto L2274;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2275;
  goto ret0;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2276;
    }
  goto ret0;

 L2276: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EMBEDDED_PIC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 303;
    }
  goto ret0;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2218;
  goto ret0;

 L2218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2219;
  goto ret0;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2220;

 L2220: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 301;
    }
  goto ret0;

 L2287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L3571;
    case CALL:
      goto L2346;
    default:
     break;
   }
  goto ret0;

 L3571: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 3)
    goto L2288;
  goto ret0;

 L2288: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  goto L2289;

 L2289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2290;
  goto ret0;

 L2290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF))
    {
      return 307;
    }
  goto ret0;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2347;
  goto ret0;

 L2347: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2348;
    }
  goto ret0;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2349;

 L2349: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2350;
    case CLOBBER:
      goto L2389;
    default:
     break;
   }
  goto ret0;

 L2350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2351;
    }
  goto ret0;

 L2351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2352;
  goto ret0;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2353;
  goto ret0;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2354;
  goto ret0;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 315;
    }
 L2442: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 320;
    }
 L2472: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 321;
    }
  goto ret0;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 318;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L172;
    case PLUS:
      goto L244;
    case NEG:
      goto L321;
    case MINUS:
      goto L340;
    case TRUNCATE:
      goto L510;
    case FFS:
      goto L906;
    default:
     break;
   }
  goto ret0;

 L172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L173;
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L174;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L175;
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L176;
    }
  goto ret0;

 L176: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L177;
  goto ret0;

 L177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L178;
    }
  goto ret0;

 L178: ATTRIBUTE_UNUSED_LABEL
  if ((GENERATE_MULT3_SI
   || TARGET_MAD))
    {
      return 27;
    }
 L210: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS4000 && !TARGET_MIPS16))
    {
      return 29;
    }
  goto ret0;

 L244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L245;
  goto ret0;

 L245: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L246;
    }
  goto ret0;

 L246: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L247;
    }
  goto ret0;

 L247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L248;
    }
 L268: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L269;
  goto ret0;

 L248: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L268;

 L249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L250;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L268;

 L250: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L251;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L268;

 L251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L252;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L268;

 L252: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC))
    {
      return 31;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L268;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L270;
  goto ret0;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L271;
    }
  goto ret0;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L272;
  goto ret0;

 L272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L273;
  goto ret0;

 L273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L274;
  goto ret0;

 L274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L275;
  goto ret0;

 L275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L276;
  goto ret0;

 L276: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L277;
  goto ret0;

 L277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L278;
    }
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC && reload_completed))
    {
      return 32;
    }
  goto ret0;

 L321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L322;
  goto ret0;

 L322: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L323;
    }
  goto ret0;

 L323: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L324;
    }
  goto ret0;

 L324: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L325;
  goto ret0;

 L325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L326;
    }
  goto ret0;

 L326: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L327;
  goto ret0;

 L327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L328;
    }
  goto ret0;

 L328: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULS))
    {
      return 34;
    }
  goto ret0;

 L340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L341;
    }
  goto ret0;

 L341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L342;
  goto ret0;

 L342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L343;
    }
  goto ret0;

 L343: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L344;
    }
  goto ret0;

 L344: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L345;
  goto ret0;

 L345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L346;
    }
  goto ret0;

 L346: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L347;
  goto ret0;

 L347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L348;
    }
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MSAC))
    {
      return 35;
    }
  goto ret0;

 L510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L511;
  goto ret0;

 L511: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L3582;
  goto ret0;

 L3582: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L512;
    case NEG:
      goto L538;
    default:
     break;
   }
  goto ret0;

 L512: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L3584;
  goto ret0;

 L3584: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L513;
    case SIGN_EXTEND:
      goto L591;
    default:
     break;
   }
  goto ret0;

 L513: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L514;
    }
  goto ret0;

 L514: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L515;
  goto ret0;

 L515: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L516;
    }
  goto ret0;

 L516: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32LL)
    goto L517;
  goto ret0;

 L517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L518;
  goto ret0;

 L518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L519;
    }
  goto ret0;

 L519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L520;
  goto ret0;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L521;
    }
  goto ret0;

 L521: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 47;
    }
  goto ret0;

 L591: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L592;
    }
  goto ret0;

 L592: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L593;
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L594;
    }
  goto ret0;

 L594: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32LL)
    goto L595;
  goto ret0;

 L595: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L596;
  goto ret0;

 L596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L597;
    }
  goto ret0;

 L597: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L598;
  goto ret0;

 L598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L599;
    }
  goto ret0;

 L599: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 50;
    }
  goto ret0;

 L538: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L539;
  goto ret0;

 L539: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L3586;
  goto ret0;

 L3586: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case ZERO_EXTEND:
      goto L540;
    case SIGN_EXTEND:
      goto L618;
    default:
     break;
   }
  goto ret0;

 L540: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L541;
    }
  goto ret0;

 L541: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L542;
  goto ret0;

 L542: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L543;
    }
  goto ret0;

 L543: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32LL)
    goto L544;
  goto ret0;

 L544: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L545;
  goto ret0;

 L545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L546;
    }
  goto ret0;

 L546: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L547;
  goto ret0;

 L547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L548;
    }
  goto ret0;

 L548: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 48;
    }
  goto ret0;

 L618: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L619;
    }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L620;
  goto ret0;

 L620: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L621;
    }
  goto ret0;

 L621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32LL)
    goto L622;
  goto ret0;

 L622: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L623;
  goto ret0;

 L623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L624;
    }
  goto ret0;

 L624: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L625;
  goto ret0;

 L625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L626;
    }
  goto ret0;

 L626: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 51;
    }
  goto ret0;

 L906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L907;
    }
  goto ret0;

 L907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L908;
  goto ret0;

 L908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L909;
    }
  goto ret0;

 L909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L910;
  goto ret0;

 L910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L911;
    }
  goto ret0;

 L911: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 81;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L50;
    case 3:
      goto L169;
    case 4:
      goto L218;
    default:
      break;
    }
  goto ret0;

 L50: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L51;
    case RETURN:
      goto L2282;
    case UNSPEC:
      goto L3541;
    case CALL:
      goto L2357;
    default:
     break;
   }
  goto ret0;

 L51: ATTRIBUTE_UNUSED_LABEL
  return recog_8 (x0, insn, pnum_clobbers);

 L2282: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2283;
  goto ret0;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 306;
    }
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L2298;
  goto ret0;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3572;
    case DImode:
      goto L3573;
    default:
      break;
    }
  goto ret0;

 L3572: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2299;
    }
  goto ret0;

 L2299: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2300;
  goto ret0;

 L2300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2301;
    }
  goto ret0;

 L2301: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_64BIT))
    {
      return 308;
    }
  goto ret0;

 L3573: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2308;
    }
  goto ret0;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2309;
  goto ret0;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2310;
    }
  goto ret0;

 L2310: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 309;
    }
  goto ret0;

 L2357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2358;
  goto ret0;

 L2358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2359;
    }
  goto ret0;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2360;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2361;
  goto ret0;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 316;
    }
  goto ret0;

 L169: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L170;
    case CALL:
      goto L2369;
    default:
     break;
   }
  goto ret0;

 L170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3574;
    case DImode:
      goto L3575;
    default:
      break;
    }
 L2223: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L2224;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2400;
    }
  goto ret0;

 L3574: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L171;
    }
  goto L2223;

 L171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3576;
  x2 = XEXP (x1, 0);
  goto L2223;

 L3576: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2223;

 L3575: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L375;
    }
  goto L2223;

 L375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3588;
  x2 = XEXP (x1, 0);
  goto L2223;

 L3588: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L376;
    case FFS:
      goto L921;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2223;

 L376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L377;
    }
  x2 = XEXP (x1, 0);
  goto L2223;

 L377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L378;
    }
  x2 = XEXP (x1, 0);
  goto L2223;

 L378: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L379;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L380;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L380: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L381;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L382;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L382: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (GENERATE_MULT3_DI || TARGET_MIPS4000)))
    {
      return 37;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L922;
    }
  x2 = XEXP (x1, 0);
  goto L2223;

 L922: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L923;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L924;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L924: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L925;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L926;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L926: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 82;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2223;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3590;
    case DImode:
      goto L3591;
    default:
      break;
    }
  goto ret0;

 L3590: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2225;
  goto ret0;

 L2225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2226;
  goto ret0;

 L2226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2227;
  goto ret0;

 L2227: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[0] = x5;
      goto L2228;
    }
  goto ret0;

 L2228: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4LL)
    goto L2229;
  goto ret0;

 L2229: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF)
    goto L2230;
  goto ret0;

 L2230: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  goto L2231;

 L2231: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2232;
  goto ret0;

 L2232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2233;
    }
  goto ret0;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2234;
  goto ret0;

 L2234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (TARGET_EMBEDDED_PIC))
    {
      return 302;
    }
  goto ret0;

 L3591: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2252;
  goto ret0;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2253;
  goto ret0;

 L2253: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L2254;
  goto ret0;

 L2254: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == MULT)
    goto L2255;
  goto ret0;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[0] = x6;
      goto L2256;
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 8LL)
    goto L2257;
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF)
    goto L2258;
  goto ret0;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  goto L2259;

 L2259: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2260;
  goto ret0;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2261;
    }
  goto ret0;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2262;
  goto ret0;

 L2262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (TARGET_EMBEDDED_PIC))
    {
      return 303;
    }
  goto ret0;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2401;
  goto ret0;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2402;
  goto ret0;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2403;
    }
  goto ret0;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2404;

 L2404: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2405;
    case SET:
      goto L2423;
    default:
     break;
   }
  goto ret0;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2406;
  goto ret0;

 L2406: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2407;
  goto ret0;

 L2407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (TARGET_SPLIT_CALLS))
    {
      return 319;
    }
  goto ret0;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2424;
    }
  goto ret0;

 L2424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2425;
  goto ret0;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2426;
  goto ret0;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2427;
  goto ret0;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2428;
  goto ret0;

 L2428: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2429;
  goto ret0;

 L2429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 320;
    }
  goto ret0;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2370;
  goto ret0;

 L2370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2371;
    }
  goto ret0;

 L2371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2372;

 L2372: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2373;
  goto ret0;

 L2373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2374;
  goto ret0;

 L2374: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2375;
  goto ret0;

 L2375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (TARGET_SPLIT_CALLS))
    {
      return 317;
    }
  goto ret0;

 L218: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L219;
  goto ret0;

 L219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3592;
    case DImode:
      goto L3593;
    default:
      break;
    }
 L2445: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2446;
    }
  goto ret0;

 L3592: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L220;
    }
  goto L2445;

 L220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3594;
  x2 = XEXP (x1, 0);
  goto L2445;

 L3594: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L221;
    case MINUS:
      goto L298;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2445;

 L221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L222;
  x2 = XEXP (x1, 0);
  goto L2445;

 L222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L223;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L223: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L224;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L225;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L225: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L226;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L227;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L227: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L229;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L229: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L230;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L231;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L231: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16))
    {
      return 30;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L299;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L300;
  x2 = XEXP (x1, 0);
  goto L2445;

 L300: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L301;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L301: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L302;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L302: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L303;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L304;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L304: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L305;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L306;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L306: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L307;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L308;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L308: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MADD_MSUB))
    {
      return 33;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L3593: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L400;
    }
  goto L2445;

 L400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L401;
  x2 = XEXP (x1, 0);
  goto L2445;

 L401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (extend_operator (x3, DImode))
    {
      operands[1] = x3;
      goto L402;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L403;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (extend_operator (x3, DImode))
    {
      operands[2] = x3;
      goto L404;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L405;
    }
  x2 = XEXP (x1, 0);
  goto L2445;

 L405: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L406;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L407;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L407: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L408;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[6] = x2;
      goto L409;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L410;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[7] = x2;
      goto L411;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L411: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2])))
    {
      return 39;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2445;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2447;
  goto ret0;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2448;
  goto ret0;

 L2448: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2449;
    }
  goto ret0;

 L2449: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2450;

 L2450: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2451;
  goto ret0;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2452;
    }
  goto ret0;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2453;
  goto ret0;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2454;
  goto ret0;

 L2454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2455;
  goto ret0;

 L2455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2456;
  goto ret0;

 L2456: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2457;
  goto ret0;

 L2457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2458;
  goto ret0;

 L2458: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2459;
  goto ret0;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (TARGET_SPLIT_CALLS))
    {
      return 321;
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case TRAP_IF:
      goto L1;
    case SET:
      goto L14;
    case PARALLEL:
      goto L3184;
    case UNSPEC_VOLATILE:
      goto L3187;
    case RETURN:
      goto L3190;
    case UNSPEC:
      goto L3191;
    case CALL:
      goto L2331;
    case PREFETCH:
      goto L2474;
    case CONST_INT:
      goto L3192;
    default:
     break;
   }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 1LL)
    goto L2;
  if (trap_cmp_op (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L5;
    }
  goto ret0;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL)
    {
      return 0;
    }
  goto ret0;

 L5: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6;
    }
 L10: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11;
    }
  goto ret0;

 L6: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7;
    }
  x2 = XEXP (x1, 0);
  goto L10;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL
      && (ISA_HAS_COND_TRAP))
    {
      return 1;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L10;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L12;
    }
  goto ret0;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL
      && (TARGET_64BIT && ISA_HAS_COND_TRAP))
    {
      return 2;
    }
  goto ret0;

 L14: ATTRIBUTE_UNUSED_LABEL
  return recog_6 (x0, insn, pnum_clobbers);

 L3184: ATTRIBUTE_UNUSED_LABEL
  return recog_10 (x0, insn, pnum_clobbers);

 L3187: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L3596;
    case 1:
      goto L3597;
    default:
      break;
    }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x0, 1) == 26)
    goto L1584;
  goto ret0;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L1585;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L1586;
    }
  goto ret0;

 L1586: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ABICALLS && TARGET_NEWABI))
    {
      return 204;
    }
  goto ret0;

 L3597: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 4LL:
      goto L1588;
    case 5LL:
      goto L1590;
    case 8LL:
      goto L2622;
    case 9LL:
      goto L2625;
    case 10LL:
      goto L2628;
    case 11LL:
      goto L2631;
    case 12LL:
      goto L2634;
    case 13LL:
      goto L2637;
    case 14LL:
      goto L2640;
    case 15LL:
      goto L2642;
    case 16LL:
      goto L2644;
    default:
      break;
    }
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    {
      return 205;
    }
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL)
    {
      return 304;
    }
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 206;
    }
  goto ret0;

 L2622: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2623;
    }
  goto ret0;

 L2623: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 342;
    }
  goto ret0;

 L2625: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2626;
    }
  goto ret0;

 L2626: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 343;
    }
  goto ret0;

 L2628: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2629;
    }
  goto ret0;

 L2629: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 344;
    }
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2632;
    }
  goto ret0;

 L2632: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 345;
    }
  goto ret0;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2635;
    }
  goto ret0;

 L2635: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 346;
    }
  goto ret0;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2638;
    }
  goto ret0;

 L2638: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 347;
    }
  goto ret0;

 L2640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL
      && (TARGET_MIPS16))
    {
      return 348;
    }
  goto ret0;

 L2642: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL
      && (TARGET_MIPS16))
    {
      return 349;
    }
  goto ret0;

 L2644: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0LL
      && (TARGET_MIPS16))
    {
      return 350;
    }
  goto ret0;

 L3190: ATTRIBUTE_UNUSED_LABEL
  if ((mips_can_use_return_insn ()))
    {
      return 305;
    }
  goto ret0;

 L3191: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 7)
    goto L2303;
  goto ret0;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3608;
    case DImode:
      goto L3609;
    default:
      break;
    }
  goto ret0;

 L3608: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2304;
    }
  goto ret0;

 L2304: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 308;
    }
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2313;
    }
  goto ret0;

 L2313: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 309;
    }
  goto ret0;

 L2331: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L2332;
  goto ret0;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2333;
    }
  goto ret0;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L2334;

 L2334: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 313;
    }
 L2366: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 316;
    }
 L2380: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 317;
    }
  goto ret0;

 L2474: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3610;
    case DImode:
      goto L3612;
    default:
      break;
    }
  goto ret0;

 L3610: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2475;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2489;
    }
  goto ret0;

 L2475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2483;
    }
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2484;
    }
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2477;
    }
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2485;
    }
  goto ret0;

 L2485: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L2486;
    }
  goto ret0;

 L2486: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == SImode))
    {
      return 323;
    }
  goto ret0;

 L2477: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2478;
    }
  goto ret0;

 L2478: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L2479;
    }
  goto ret0;

 L2479: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCH && Pmode == SImode))
    {
      return 322;
    }
  goto ret0;

 L2489: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2490;
    }
  goto ret0;

 L2490: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L2491;
    }
  goto ret0;

 L2491: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCH && Pmode == SImode))
    {
      return 324;
    }
  goto ret0;

 L3612: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2494;
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2508;
    }
  goto ret0;

 L2494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2502;
    }
  goto ret0;

 L2502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2503;
    }
  if (const_int_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2496;
    }
  goto ret0;

 L2503: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2504;
    }
  goto ret0;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, DImode))
    {
      operands[2] = x1;
      goto L2505;
    }
  goto ret0;

 L2505: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == DImode))
    {
      return 326;
    }
  goto ret0;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2497;
    }
  goto ret0;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, DImode))
    {
      operands[2] = x1;
      goto L2498;
    }
  goto ret0;

 L2498: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCH && Pmode == DImode))
    {
      return 325;
    }
  goto ret0;

 L2508: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2509;
    }
  goto ret0;

 L2509: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, DImode))
    {
      operands[2] = x1;
      goto L2510;
    }
  goto ret0;

 L2510: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCH && Pmode == DImode))
    {
      return 327;
    }
  goto ret0;

 L3192: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x0, 0) == XWINT (x0, 0))
    switch ((int) XWINT (x0, 0))
      {
      case 0LL:
        goto L3614;
      case 1LL:
        goto L3615;
      default:
        break;
      }
  goto ret0;

 L3614: ATTRIBUTE_UNUSED_LABEL
  return 328;

 L3615: ATTRIBUTE_UNUSED_LABEL
  return 329;
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3626;
    case DImode:
      goto L3621;
    case HImode:
      goto L3622;
    case QImode:
      goto L3623;
    case DFmode:
      goto L3625;
    default:
      break;
    }
  goto ret0;

 L3626: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    goto L3149;
 L3620: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2647;
    }
  goto ret0;

 L3149: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L3150;
  x1 = XEXP (x0, 0);
  goto L3620;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0LL
      && (TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64)&& reload_completed))
    {
      return gen_split_516 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3620;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3627;
 L2961: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2962;
    }
  goto ret0;

 L3627: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2648;
    case SIGN_EXTEND:
      goto L2866;
    case HIGH:
      goto L2908;
    case LO_SUM:
      goto L2913;
    case MEM:
      goto L2955;
    case ASHIFT:
      goto L2995;
    case ASHIFTRT:
      goto L3043;
    case LSHIFTRT:
      goto L3091;
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      goto L3631;
    default:
      goto L2961;
   }
 L3631: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2930;
    }
  goto L2961;

 L2648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2649;
 L2654: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2655;
    }
  goto L2961;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2650;
    }
  x2 = XEXP (x1, 0);
  goto L2654;

 L2650: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))))
    {
      return gen_split_353 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2654;

 L2655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2656;
    }
  goto L2961;

 L2656: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))))
    {
      return gen_split_354 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3636;
    case QImode:
      goto L3637;
    default:
      break;
    }
  goto L2961;

 L3636: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L2867;
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2889;
    }
  goto L2961;

 L2867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2868;
    }
  goto L2961;

 L2868: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16&& reload_completed))
    {
      return gen_split_392 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2889: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_403 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L3637: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L2873;
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2899;
    }
  goto L2961;

 L2873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2874;
    }
  goto L2961;

 L2874: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16&& reload_completed))
    {
      return gen_split_393 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2899: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_407 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3640;
  goto L2961;

 L3640: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2909;
    }
 L3641: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2939;
    }
  goto L2961;

 L2909: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT&& reload_completed))
    {
      return gen_split_419 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3641;

 L2939: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS&& reload_completed))
    {
      return gen_split_425 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2914;
    }
  goto L2961;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2915;
    }
  goto L2961;

 L2915: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT&& reload_completed))
    {
      return gen_split_420 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2956;
  goto L2961;

 L2956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2957;
  goto L2961;

 L2957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2958;
    }
  goto L2961;

 L2958: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))))
    {
      return gen_split_430 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2996;
    }
  goto L2961;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2997;
    }
  goto L2961;

 L2997: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_446 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L3043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3044;
    }
  goto L2961;

 L3044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3045;
    }
  goto L2961;

 L3045: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_454 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3642;
  goto L2961;

 L3642: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3092;
    }
 L3643: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3098;
    }
  goto L2961;

 L3092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3093;
    }
  x2 = XEXP (x1, 0);
  goto L3643;

 L3093: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_462 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3643;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_463 (operands);
    }
  goto L2961;

 L2930: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT&& reload_completed))
    {
      return gen_split_423 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L2961;

 L2962: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f))
    {
      return gen_split_431 (operands);
    }
 L2966: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) < 0
   && INTVAL (operands[1]) > - 0x8000))
    {
      return gen_split_432 (operands);
    }
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2695;
    }
 L3624: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2983;
    }
  goto ret0;

 L2695: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3644;
  x1 = XEXP (x0, 0);
  goto L3624;

 L3644: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2696;
    case ZERO_EXTEND:
      goto L2878;
    case SIGN_EXTEND:
      goto L2883;
    case HIGH:
      goto L2919;
    case LO_SUM:
      goto L2924;
    case MEM:
      goto L2948;
    case ASHIFT:
      goto L3037;
    case ASHIFTRT:
      goto L3085;
    case LSHIFTRT:
      goto L3138;
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      goto L3649;
    default:
      x1 = XEXP (x0, 0);
      goto L3624;
   }
 L3649: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2934;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2697;
 L2702: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2703;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2698;
    }
  x2 = XEXP (x1, 0);
  goto L2702;

 L2698: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))))
    {
      return gen_split_360 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2702;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2704;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2704: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))))
    {
      return gen_split_361 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2879;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2879: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT&& reload_completed))
    {
      return gen_split_394 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3654;
    case QImode:
      goto L3655;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3654: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2884;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2884: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && reload_completed))
    {
      return gen_split_401 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3655: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2904;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && reload_completed))
    {
      return gen_split_409 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3656;
  x1 = XEXP (x0, 0);
  goto L3624;

 L3656: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2920;
    }
 L3657: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2944;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2920: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT&& reload_completed))
    {
      return gen_split_421 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3657;

 L2944: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS&& reload_completed))
    {
      return gen_split_426 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2925;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2926;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2926: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT&& reload_completed))
    {
      return gen_split_422 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2949;
  x1 = XEXP (x0, 0);
  goto L3624;

 L2949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2950;
  x1 = XEXP (x0, 0);
  goto L3624;

 L2950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2951;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2951: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16 && reload_completed
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
	   && (INTVAL (operands[1]) & 7) != 0))))
    {
      return gen_split_428 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3038;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3039;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3039: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT && !TARGET_DEBUG_D_MODE
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_452 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3086;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3087;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3087: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT && !TARGET_DEBUG_D_MODE
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_460 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3139;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3140;
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L3140: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_469 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2934: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT&& reload_completed))
    {
      return gen_split_424 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L3624;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2984;
    }
  goto ret0;

 L2984: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_441 (operands);
    }
  goto ret0;

 L3622: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2892;
    }
  goto ret0;

 L2892: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3658;
  goto ret0;

 L3658: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L2893;
    case MEM:
      goto L2970;
    default:
     break;
   }
  goto ret0;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2894;
    }
  goto ret0;

 L2894: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_405 (operands);
    }
  goto ret0;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2971;
  goto ret0;

 L2971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2972;
  goto ret0;

 L2972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2973;
    }
  goto ret0;

 L2973: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))))
    {
      return gen_split_436 (operands);
    }
  goto ret0;

 L3623: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2976;
    }
  goto ret0;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L2977;
  goto ret0;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2978;
  goto ret0;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2979;
  goto ret0;

 L2979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2980;
    }
  goto ret0;

 L2980: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))))
    {
      return gen_split_438 (operands);
    }
  goto ret0;

 L3625: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2987;
    }
  goto ret0;

 L2987: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2988;
    }
  goto ret0;

 L2988: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_442 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L2658;
    case 4:
      goto L2738;
    case 3:
      goto L3168;
    default:
      break;
    }
  goto ret0;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2659;
    case UNSPEC:
      goto L3660;
    case CALL:
      goto L3153;
    default:
     break;
   }
  goto ret0;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2660;
    }
 L3160: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3161;
    }
  goto ret0;

 L2660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3661;
  x2 = XEXP (x1, 0);
  goto L3160;

 L3661: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2661;
    case MINUS:
      goto L2709;
    case ASHIFT:
      goto L3002;
    case ASHIFTRT:
      goto L3050;
    case LSHIFTRT:
      goto L3103;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3160;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2662;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2663;
    }
  if (small_int (x3, DImode))
    {
      operands[2] = x3;
      goto L2681;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2664;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2665;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2665: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2]))))
    {
      return gen_split_356 (operands);
    }
 L2674: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2]))))
    {
      return gen_split_357 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2683;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2683: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0))
    {
      return gen_split_358 (operands);
    }
 L2692: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0))
    {
      return gen_split_359 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2710;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L2710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2711;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2712;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2713;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L2713: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))))
    {
      return gen_split_364 (operands);
    }
 L2722: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))))
    {
      return gen_split_365 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3003;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int (x3, SImode))
    {
      operands[2] = x3;
      goto L3004;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3005;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3006;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3006: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return gen_split_448 (operands);
    }
 L3015: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return gen_split_449 (operands);
    }
 L3024: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return gen_split_450 (operands);
    }
 L3033: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return gen_split_451 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3051;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L3051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int (x3, SImode))
    {
      operands[2] = x3;
      goto L3052;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L3052: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3053;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3054;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3054: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return gen_split_456 (operands);
    }
 L3063: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return gen_split_457 (operands);
    }
 L3072: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return gen_split_458 (operands);
    }
 L3081: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return gen_split_459 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3104;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L3104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int (x3, SImode))
    {
      operands[2] = x3;
      goto L3105;
    }
  x2 = XEXP (x1, 0);
  goto L3160;

 L3105: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3106;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3107;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3107: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return gen_split_465 (operands);
    }
 L3116: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0))
    {
      return gen_split_466 (operands);
    }
 L3125: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return gen_split_467 (operands);
    }
 L3134: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0))
    {
      return gen_split_468 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3160;

 L3161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3162;
  goto ret0;

 L3162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3163;
  goto ret0;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3164;
    }
  goto ret0;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3165;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3166;
  goto ret0;

 L3166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)))
    {
      return gen_split_522 (operands);
    }
  goto ret0;

 L3660: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L3143;
  goto ret0;

 L3143: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3144;
    }
  goto ret0;

 L3144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3145;
  goto ret0;

 L3145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3146;
    }
  goto ret0;

 L3146: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE))
    {
      return gen_split_515 (operands);
    }
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3154;
  goto ret0;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3155;
    }
  goto ret0;

 L3155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3156;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3157;
  goto ret0;

 L3157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)))
    {
      return gen_split_520 (operands);
    }
  goto ret0;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2739;
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3666;
    case DImode:
      goto L3667;
    default:
      break;
    }
  goto ret0;

 L3666: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2740;
    }
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3668;
  goto ret0;

 L3668: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2741;
    case MINUS:
      goto L2822;
    default:
     break;
   }
  goto ret0;

 L2741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2742;
  goto ret0;

 L2742: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2743;
    }
  goto ret0;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2744;
    }
  goto ret0;

 L2744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2745;
    }
  goto ret0;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2746;
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2747;
    }
  goto ret0;

 L2747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2748;
  goto ret0;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L2749;
    }
  goto ret0;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2750;
  goto ret0;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L2751;
    }
  goto ret0;

 L2751: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3]))))
    {
      return gen_split_370 (operands);
    }
 L2766: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM))
    {
      return gen_split_371 (operands);
    }
  goto ret0;

 L2822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2823;
    }
  goto ret0;

 L2823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2824;
  goto ret0;

 L2824: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2825;
    }
  goto ret0;

 L2825: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2826;
    }
  goto ret0;

 L2826: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2827;
  goto ret0;

 L2827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2828;
    }
  goto ret0;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2829;
  goto ret0;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L2830;
    }
  goto ret0;

 L2830: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2831;
  goto ret0;

 L2831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L2832;
    }
  goto ret0;

 L2832: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1]))))
    {
      return gen_split_375 (operands);
    }
 L2847: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM))
    {
      return gen_split_376 (operands);
    }
  goto ret0;

 L3667: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2851;
    }
  goto ret0;

 L2851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L2852;
  goto ret0;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (extend_operator (x3, DImode))
    {
      operands[1] = x3;
      goto L2853;
    }
  goto ret0;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2854;
    }
  goto ret0;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (extend_operator (x3, DImode))
    {
      operands[2] = x3;
      goto L2855;
    }
  goto ret0;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L2856;
    }
  goto ret0;

 L2856: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2857;
  goto ret0;

 L2857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L2858;
    }
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2859;
  goto ret0;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[6] = x2;
      goto L2860;
    }
  goto ret0;

 L2860: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2861;
  goto ret0;

 L2861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[7] = x2;
      goto L2862;
    }
  goto ret0;

 L2862: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && GET_CODE (operands[1]) == GET_CODE (operands[2])&& reload_completed))
    {
      return gen_split_379 (operands);
    }
  goto ret0;

 L3168: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3169;
  goto ret0;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3170;
    }
  goto ret0;

 L3170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3171;
  goto ret0;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3172;
  goto ret0;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3173;
    }
  goto ret0;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3174;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3175;
  goto ret0;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3176;
    }
  goto ret0;

 L3176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3177;
  goto ret0;

 L3177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3178;
  goto ret0;

 L3178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3179;
  goto ret0;

 L3179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3180;
  goto ret0;

 L3180: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3181;
  goto ret0;

 L3181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)))
    {
      return gen_split_523 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L2646;
    case PARALLEL:
      goto L3616;
    case UNSPEC_VOLATILE:
      goto L3618;
    default:
     break;
   }
 L3182: ATTRIBUTE_UNUSED_LABEL
  if (small_data_pattern (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L3183;
    }
  goto ret0;

 L2646: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  goto L3182;

 L3616: ATTRIBUTE_UNUSED_LABEL
  tem = split_2 (x0, insn);
  if (tem != 0)
    return tem;
  goto L3182;

 L3618: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2
      && XINT (x0, 1) == 26)
    goto L2990;
  goto L3182;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L2991;

 L2991: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      return gen_split_443 (operands);
    }
  goto L3182;

 L3183: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_534 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L3670;
    case SET:
      goto L2785;
    default:
     break;
   }
  goto ret0;

 L3670: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 3)
    goto L2725;
  goto ret0;

 L2725: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2726;
  goto ret0;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2727;
    }
  goto ret0;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3671;
  goto ret0;

 L3671: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2728;
    case PLUS:
      goto L2772;
    default:
     break;
   }
  goto ret0;

 L2728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2729;
    }
  goto ret0;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2730;
    }
  goto ret0;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2731;
  goto ret0;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2732;
    }
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2733;
  goto ret0;

 L2733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L2734;
  goto ret0;

 L2734: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2735;
  goto ret0;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2736;
    }
  goto ret0;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (GENERATE_MULT3_SI
   && true_regnum (operands[0]) == LO_REGNUM
   && GP_REG_P (true_regnum (operands[4]))
   && peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_369 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2773;
  goto ret0;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2774;
    }
  goto ret0;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2775;
    }
  goto ret0;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L2776;
  goto ret0;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2777;
  goto ret0;

 L2777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2778;
    }
  goto ret0;

 L2778: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2779;
  goto ret0;

 L2779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L2780;
  goto ret0;

 L2780: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2781;
  goto ret0;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2782;
    }
  goto ret0;

 L2782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (ISA_HAS_MACC
   && true_regnum (operands[0]) == LO_REGNUM
   && GP_REG_P (true_regnum (operands[4]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_372 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2786;
    }
  goto ret0;

 L2786: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L2787;
    }
  goto ret0;

 L2787: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 3)
    goto L2788;
  goto ret0;

 L2788: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L2789;
  goto ret0;

 L2789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2790;
    }
 L2805: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[1]))
    goto L2806;
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2791;
  x3 = XEXP (x2, 0);
  goto L2805;

 L2791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2792;
  x3 = XEXP (x2, 0);
  goto L2805;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L2793;
    }
  x3 = XEXP (x2, 0);
  goto L2805;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L2794;
    }
  x3 = XEXP (x2, 0);
  goto L2805;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1]))
    goto L2795;
  x3 = XEXP (x2, 0);
  goto L2805;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L2796;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L2805;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L2797;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L2805;

 L2797: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L2798;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L2805;

 L2798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ISA_HAS_MACC && GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_373 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L2805;

 L2806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2807;
  goto ret0;

 L2807: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L2808;
  goto ret0;

 L2808: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2809;
    }
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L2810;
    }
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1]))
    goto L2811;
  goto ret0;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L2812;
  goto ret0;

 L2812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L2813;
    }
  goto ret0;

 L2813: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L2814;
  goto ret0;

 L2814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SCRATCH)
    goto L2815;
  goto ret0;

 L2815: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2816;
  goto ret0;

 L2816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L2817;
    }
  goto ret0;

 L2817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1])
      && (ISA_HAS_MACC && GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (3, operands[1])
   && GP_REG_P (true_regnum (operands[6]))))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_374 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

