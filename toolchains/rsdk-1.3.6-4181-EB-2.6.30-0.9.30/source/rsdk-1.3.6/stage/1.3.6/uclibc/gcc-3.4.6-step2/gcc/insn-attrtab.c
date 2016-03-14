/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      extract_constrain_insn_cached (insn);
      if ((abs ((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - ((insn_current_reference_address (insn)) + (4)))) < (131072))
        {
	  return 4;
        }
      else if ((flag_pic && ! TARGET_EMBEDDED_PIC) != (0))
        {
	  return 24 /* 0x18 */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if (((flag_pic && ! TARGET_EMBEDDED_PIC) == (0)) || ((abs ((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - ((insn_current_reference_address (insn)) + (4)))) < (131072)))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 296:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 320:
    case 318:
    case 316:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_YES))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_YES))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((which_alternative == 1) && ((TARGET_MIPS16) != (0)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else
        {
	  return 4;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else
        {
	  return 4;
        }

    case 200:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 8;
        }
      else
        {
	  if (which_alternative == 3)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  if (which_alternative == 1)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 198:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 8;
        }
      else
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 196:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  if (which_alternative == 3)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 195:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (which_alternative == 1)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 4;
        }
      else
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 193:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  if (which_alternative == 5)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 191:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 4)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 8;
	    }
	  else
	    {
	      return 12 /* 0xc */;
	    }
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  if (which_alternative == 5)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (which_alternative == 2)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 4;
        }
      else
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  if (((1 << which_alternative) & 0x6))
	    {
	      return mips_const_insns (operands[1]) * 4;
	    }
	  else if (((1 << which_alternative) & 0x10088))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 8)
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else if (((1 << which_alternative) & 0xfc00))
        {
	  return 4;
        }
      else if (which_alternative == 16)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 17)
        {
	  return 4;
        }
      else
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 4)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 8;
	    }
	  else
	    {
	      return 12 /* 0xc */;
	    }
        }
      else if (((1 << which_alternative) & 0xe0))
        {
	  if (which_alternative == 5)
	    {
	      return mips_const_insns (operands[1]) * 4;
	    }
	  else if (which_alternative == 6)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  if (((1 << which_alternative) & 0x6))
	    {
	      return mips_const_insns (operands[1]) * 4;
	    }
	  else if (((1 << which_alternative) & 0x4088))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 8)
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else if (((1 << which_alternative) & 0x1c00))
        {
	  return 4;
        }
      else if (which_alternative == 13)
        {
	  return 8;
        }
      else if (which_alternative == 14)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 15)
        {
	  return 8;
        }
      else
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }

    case 175:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (which_alternative == 4)
        {
	  return 12 /* 0xc */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  if (which_alternative == 5)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 8;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((1 << which_alternative) & 0x104))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0xf0))
        {
	  return 8;
        }
      else if (which_alternative == 8)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 9)
        {
	  return 8;
        }
      else
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }

    case 178:
    case 173:
    case 160:
    case 159:
    case 156:
    case 155:
      extract_constrain_insn_cached (insn);
      return mips_fetch_insns (operands[0]) * 4;

    case 129:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if ((TARGET_MIPS16) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }

    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      extract_constrain_insn_cached (insn);
      return mips_fetch_insns (operands[1]) * 4;

    case 109:
    case 108:
    case 107:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else if ((TARGET_MIPS16) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 72:
    case 71:
    case 70:
    case 69:
      extract_constrain_insn_cached (insn);
      if ((TARGET_CHECK_ZERO_DIV) != (0))
        {
	  if ((TARGET_MIPS16) != (0))
	    {
	      return 12 /* 0xc */;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }
      else
        {
	  return 4;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 163:
    case 161:
    case 533:
    case 532:
    case 531:
    case 530:
    case 349:
    case 348:
    case 346:
    case 344:
    case 343:
    case 342:
    case 297:
    case 243:
    case 242:
    case 226:
    case 218:
    case 211:
    case 172:
    case 171:
    case 29:
    case 26:
    case 24:
      return 8;

    case 350:
    case 310:
    case 204:
    case 78:
    case 77:
      return 12 /* 0xc */;

    case 307:
      return 20 /* 0x14 */;

    case 304:
    case 205:
      return 0;

    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 303:
    case 302:
    case 39:
      return 24 /* 0x18 */;

    case 347:
    case 345:
    case 227:
    case 224:
    case 219:
    case 212:
    case 86:
    case 20:
    case 9:
    case 296:
      return 16 /* 0x10 */;

    case 273:
    case 271:
    case 261:
    case 259:
      extract_insn_cached (insn);
      if (m16_uimm8_m1_1 (operands[2], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 269:
    case 267:
    case 257:
    case 255:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 229:
    case 223:
    case 221:
    case 216:
    case 214:
    case 209:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 225:
    case 217:
    case 210:
      return 48 /* 0x30 */;

    case 206:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 146:
    case 144:
      return 36 /* 0x24 */;

    case 103:
    case 101:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 82:
    case 81:
      return 28 /* 0x1c */;

    case 76:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 75:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 74:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 73:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 68:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 67:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 66:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 65:
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 37:
      extract_constrain_insn_cached (insn);
      if ((GENERATE_MULT3_DI) != (0))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 16:
    case 8:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 14:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm5_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 13:
      extract_insn_cached (insn);
      if (m16_uimm5_4 (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 12:
    case 6:
      extract_insn_cached (insn);
      if (m16_simm8_8 (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 10:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 7:
      extract_insn_cached (insn);
      if (m16_uimm8_4 (operands[1], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
      return 0;

    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 0;
        }

    case 533:
    case 532:
    case 531:
    case 530:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 307:
    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 9;
        }
      else
        {
	  return 0;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || (((which_alternative == 1) && (((mips_tune) == (CPU_R7000)))) || ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0)))
        {
	  return 9;
        }
      else
        {
	  return 0;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x1e))) || ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1e))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x1a)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 4) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if (((which_alternative == 4) && (((mips_tune) == (CPU_R5500)))) || (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if (((which_alternative == 4) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 9;
        }
      else if (((which_alternative == 4) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 195:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_R5500)))) || (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 9;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x32)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x41)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x32)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x41))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x41))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xb6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x4f)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x43))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x43))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((!((1 << which_alternative) & 0x7f)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((!((1 << which_alternative) & 0x7f)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x4b)) || ((!((1 << which_alternative) & 0x7f)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((!((1 << which_alternative) & 0x7f)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x30))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 185:
    case 184:
    case 183:
    case 182:
      if (((mips_tune) == (CPU_R5500)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 9;
        }
      else
        {
	  return 0;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x43)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x43))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x43))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xb4)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x30))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2fd40)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x27))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x27))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x7000)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x7000)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((!((1 << which_alternative) & 0x3fdc8)) || ((((1 << which_alternative) & 0x7000)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x7000)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x28d40))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x10088))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5400))) && (which_alternative == 7)) || (((which_alternative == 8) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3f)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3f))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 8) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 8) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0xbf)) || ((which_alternative == 8) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((which_alternative == 8) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7)) || (((which_alternative == 8) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3f)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xbd40)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x27))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x27))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x1c00)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x1c00)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((!((1 << which_alternative) & 0xfdc8)) || ((((1 << which_alternative) & 0x1c00)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x1c00)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xa140))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x4088))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5400))) && (which_alternative == 6)) || (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 7) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 7) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x5f)) || ((which_alternative == 7) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((which_alternative == 7) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6)) || (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x280)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x104)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2f0)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x70)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x70)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((!((1 << which_alternative) & 0x3f4)) || ((((1 << which_alternative) & 0x70)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x70)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x280))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x104))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 150:
    case 149:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 0;
        }

    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 109:
    case 108:
    case 107:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((mips_tune) == (CPU_R5400)))) || (((((mips_tune) == (CPU_R5400))) && (which_alternative == 0)) || (((which_alternative == 1) && (((mips_tune) == (CPU_R5500)))) || (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R7000))) && (which_alternative == 0)) || (((which_alternative == 1) && ((((mips_tune) == (CPU_R7000))) || (((mips_tune) == (CPU_R9000))))) || (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || (((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 152:
    case 151:
    case 148:
    case 106:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R7000))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 0;
        }

    case 89:
    case 88:
    case 80:
    case 79:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 76:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 48 /* 0x30 */;
        }
      else
        {
	  return 0;
        }

    case 75:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 118 /* 0x76 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 0;
        }

    case 74:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 62 /* 0x3e */;
        }
      else
        {
	  return 0;
        }

    case 73:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 122 /* 0x7a */;
        }
      else
        {
	  return 0;
        }

    case 72:
    case 70:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 74 /* 0x4a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 70 /* 0x46 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 0;
        }

    case 71:
    case 69:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 41 /* 0x29 */;
        }
      else
        {
	  return 0;
        }

    case 68:
    case 66:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 0;
        }

    case 67:
    case 65:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 120 /* 0x78 */;
        }
      else
        {
	  return 0;
        }

    case 64:
    case 62:
    case 60:
    case 58:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 63:
    case 61:
    case 59:
    case 57:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 0;
        }

    case 53:
    case 52:
    case 37:
    case 36:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 7;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5400))) && (which_alternative != 0)) || ((((mips_tune) == (CPU_R5500))) && (which_alternative != 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative != 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative != 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative != 0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 56:
    case 55:
    case 54:
    case 45:
    case 44:
    case 35:
    case 32:
    case 31:
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 34:
    case 29:
    case 28:
    case 27:
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 26:
    case 25:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 24:
    case 23:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 0;
        }

    case 18:
    case 4:
      if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R7000)))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 17:
    case 3:
      if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R7000)))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || ((((mips_tune) == (CPU_R7000))) || ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SR71000)))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}


#if AUTOMATON_ALTS
int
insn_alts (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
      return 0;

    case 533:
    case 532:
    case 531:
    case 530:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 307:
    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) || (((mips_tune) == (CPU_R9000))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 0;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0)))
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 0;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x6)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x6)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x6)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 4) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 64 /* 0x40 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 195:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 64 /* 0x40 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xc)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xc)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((((1 << which_alternative) & 0xc)) || ((!((1 << which_alternative) & 0x7f)) && (hilo_operand (operands[0], VOIDmode)))) || ((!((1 << which_alternative) & 0x7f)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x4f)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xc)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 189:
    case 188:
    case 187:
    case 186:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 0;
        }

    case 185:
    case 184:
    case 183:
    case 182:
      if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 0;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x2fd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x2fd67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x2fd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2fd67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((!((1 << which_alternative) & 0x2fd67)) || ((((1 << which_alternative) & 0x7000)) && (hilo_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x7000)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x2fd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x2fd40)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x2fd67)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xc0)))
        {
	  return 1;
        }
      else if (((which_alternative == 8) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3f))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xc0)))
        {
	  return 1;
        }
      else if (((which_alternative == 8) && (((mips_tune) == (CPU_R5500)))) || ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((((1 << which_alternative) & 0xc0)) || ((which_alternative == 8) && (hilo_operand (operands[0], VOIDmode)))) || ((which_alternative == 8) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xc0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 8))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xc0)))
        {
	  return 4;
        }
      else if (((which_alternative == 8) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3f))))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xbd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xbd67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xbd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xbd67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((!((1 << which_alternative) & 0xbd67)) || ((((1 << which_alternative) & 0x1c00)) && (hilo_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x1c00)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xbd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xbd40)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xbd67)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R5500)))) || ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((((1 << which_alternative) & 0x60)) || ((which_alternative == 7) && (hilo_operand (operands[0], VOIDmode)))) || ((which_alternative == 7) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x60)))
        {
	  return 4;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x2f3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x2f3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x2f3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2f3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((!((1 << which_alternative) & 0x2f3)) || ((((1 << which_alternative) & 0x70)) && (hilo_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x70)) && (! (hilo_operand (operands[0], VOIDmode))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x2f3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x2f0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x2f3)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x73)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 206:
    case 178:
    case 173:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 160:
    case 159:
    case 158:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
    case 109:
    case 108:
    case 107:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case 72:
    case 71:
    case 70:
    case 69:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5400))) && (which_alternative != 0)) || ((((mips_tune) == (CPU_R5500))) && (which_alternative != 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative != 0)) || (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative != 0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 56:
    case 55:
    case 54:
    case 45:
    case 44:
    case 35:
    case 32:
    case 31:
      if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_R7000)))) || (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3))) || ((which_alternative == 2) && (((mips_tune) == (CPU_R9000))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 34:
    case 29:
    case 28:
    case 27:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
    case 106:
    case 89:
    case 88:
    case 80:
    case 79:
    case 76:
    case 75:
    case 74:
    case 73:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
    case 59:
    case 58:
    case 57:
    case 26:
    case 25:
    case 24:
    case 23:
    case 18:
    case 17:
    case 4:
    case 3:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 342:
    case 309:
    case 308:
    case 304:
    case 205:
    case 204:
    case 163:
    case 161:
    case 140:
    case 137:
    case 135:
    case 132:
    case 130:
    case 113:
    case 112:
    case 82:
    case 81:
    case 78:
    case 77:
    case 2:
    case 1:
    case 0:
      if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || ((((mips_tune) == (CPU_R7000))) || ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SR71000)))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    }
}

#endif

static int
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 54 /* 0x36 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 88 /* 0x58 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 54 /* 0x36 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 79 /* 0x4f */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 328:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 34 /* 0x22 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 54 /* 0x36 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 78 /* 0x4e */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 126 /* 0x7e */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
      return 128 /* 0x80 */;

    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 48 /* 0x30 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 66 /* 0x42 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 87 /* 0x57 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 119 /* 0x77 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 533:
    case 532:
    case 531:
    case 530:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 307:
    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 28 /* 0x1c */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 65 /* 0x41 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 94 /* 0x5e */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 97 /* 0x61 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 6;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 32 /* 0x20 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 64 /* 0x40 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 86 /* 0x56 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 104 /* 0x68 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 6;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 32 /* 0x20 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 64 /* 0x40 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 86 /* 0x56 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 104 /* 0x68 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x18)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x18)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 2))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 4) && (((mips_tune) == (CPU_R5400))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 29 /* 0x1d */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R5500))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 55 /* 0x37 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R7000))))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 3))
        {
	  return 76 /* 0x4c */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R9000))))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 100 /* 0x64 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 195:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 29 /* 0x1d */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5500))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 55 /* 0x37 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 76 /* 0x4c */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R9000))))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 100 /* 0x64 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x32)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x41)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x32)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x41)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x32)))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x43)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x30)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x43)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((!((1 << which_alternative) & 0x7f)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((!((1 << which_alternative) & 0x7f)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 2))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 3))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((!((1 << which_alternative) & 0x7f)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((!((1 << which_alternative) & 0x7f)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 189:
    case 188:
    case 187:
    case 186:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 56 /* 0x38 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 77 /* 0x4d */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 101 /* 0x65 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 185:
    case 184:
    case 183:
    case 182:
      if (((mips_tune) == (CPU_R5500)))
        {
	  return 29 /* 0x1d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 76 /* 0x4c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 100 /* 0x64 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x43)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x30)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x43)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7000)))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x27)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7000)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x27)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x7000)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x7000)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x7000)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x7000)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x10088)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x28d40)))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7000)))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 7))
        {
	  return 3;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_R5400))))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 7))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_R5500))))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 7))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 8) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 8) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 7))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((which_alternative == 8) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((which_alternative == 8) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 99 /* 0x63 */;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1c00)))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x27)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1c00)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x27)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x1c00)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x1c00)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x1c00)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x1c00)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xa140)))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1c00)))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x27)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5400))))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 7) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 7) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((which_alternative == 7) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((which_alternative == 7) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 99 /* 0x63 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x280)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x70)))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x104)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x280)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x70)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x70)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x70)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x70)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && ((((1 << which_alternative) & 0x70)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x280)))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x70)))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 206:
    case 178:
    case 173:
    case 160:
    case 159:
    case 156:
    case 155:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 56 /* 0x38 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 77 /* 0x4d */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 99 /* 0x63 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 150:
    case 149:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 50 /* 0x32 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 89 /* 0x59 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 120 /* 0x78 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 54 /* 0x36 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 55 /* 0x37 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 78 /* 0x4e */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 29 /* 0x1d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 76 /* 0x4c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 98 /* 0x62 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 109:
    case 108:
    case 107:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 54 /* 0x36 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 56 /* 0x38 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 78 /* 0x4e */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 152:
    case 151:
    case 148:
    case 106:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 49 /* 0x31 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 89 /* 0x59 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 120 /* 0x78 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 89:
    case 88:
    case 80:
    case 79:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 47 /* 0x2f */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 66 /* 0x42 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 87 /* 0x57 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 118 /* 0x76 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 76:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 51 /* 0x33 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 92 /* 0x5c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 123 /* 0x7b */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 75:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 25 /* 0x19 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 52 /* 0x34 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 71 /* 0x47 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 124 /* 0x7c */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 74:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 45 /* 0x2d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 70 /* 0x46 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 92 /* 0x5c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 121 /* 0x79 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 73:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 20 /* 0x14 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 46 /* 0x2e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 122 /* 0x7a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 72:
    case 70:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 13 /* 0xd */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 39 /* 0x27 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 58 /* 0x3a */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 83 /* 0x53 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 110 /* 0x6e */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 71:
    case 69:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 57 /* 0x39 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 82 /* 0x52 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 109 /* 0x6d */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 68:
    case 66:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 45 /* 0x2d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 70 /* 0x46 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 92 /* 0x5c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 116 /* 0x74 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 67:
    case 65:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 20 /* 0x14 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 46 /* 0x2e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 117 /* 0x75 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 64:
    case 62:
    case 60:
    case 58:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 43 /* 0x2b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 73 /* 0x49 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 90 /* 0x5a */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 114 /* 0x72 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 63:
    case 61:
    case 59:
    case 57:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 18 /* 0x12 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 44 /* 0x2c */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 74 /* 0x4a */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 91 /* 0x5b */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 115 /* 0x73 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 53:
    case 52:
    case 37:
    case 36:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 81 /* 0x51 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) && (which_alternative != 0))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative != 0))
        {
	  return 53 /* 0x35 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative != 0))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative != 0))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative != 0))
        {
	  return 125 /* 0x7d */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 56:
    case 55:
    case 54:
    case 45:
    case 44:
    case 35:
    case 32:
    case 31:
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 80 /* 0x50 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5500))))
        {
	  return 53 /* 0x35 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 80 /* 0x50 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R9000))))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 125 /* 0x7d */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 34:
    case 29:
    case 28:
    case 27:
      extract_insn_cached (insn);
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 80 /* 0x50 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 26:
    case 25:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 15 /* 0xf */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 41 /* 0x29 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 73 /* 0x49 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 90 /* 0x5a */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 114 /* 0x72 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 24:
    case 23:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 74 /* 0x4a */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 91 /* 0x5b */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 115 /* 0x73 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 18:
    case 4:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 40 /* 0x28 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 89 /* 0x59 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 17:
    case 3:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 40 /* 0x28 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 89 /* 0x59 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 113 /* 0x71 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 342:
    case 309:
    case 308:
    case 304:
    case 205:
    case 204:
    case 163:
    case 161:
    case 140:
    case 137:
    case 135:
    case 132:
    case 130:
    case 113:
    case 112:
    case 2:
    case 1:
    case 0:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 0;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 27 /* 0x1b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 75 /* 0x4b */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 95 /* 0x5f */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 96 /* 0x60 */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 82:
    case 81:
    case 78:
    case 77:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 26 /* 0x1a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 53 /* 0x35 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 75 /* 0x4b */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 95 /* 0x5f */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 125 /* 0x7d */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    default:
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 34 /* 0x22 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 54 /* 0x36 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 78 /* 0x4e */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 128 /* 0x80 */;
        }

    }
}

int
result_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R6000)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R6000)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if ((which_alternative == 3) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x84)) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((((1 << which_alternative) & 0x84)) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0x32)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x84)) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((((1 << which_alternative) & 0x84)) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x10088)) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((((1 << which_alternative) & 0x10088)) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0x28d40)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 6) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if ((which_alternative == 6) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x4088)) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((((1 << which_alternative) & 0x4088)) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0xa140)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if ((which_alternative == 5) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x104)) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if (((((1 << which_alternative) & 0x104)) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || (((1 << which_alternative) & 0x280)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 195:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 185:
    case 184:
    case 183:
    case 182:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 89:
    case 88:
    case 80:
    case 79:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000)))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 76:
    case 74:
      if ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000)))))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else
        {
	  return 1;
        }

    case 75:
    case 73:
      if ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000)))))))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 1;
        }

    case 72:
    case 70:
      if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4300))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R4650))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 35 /* 0x23 */;
        }

    case 71:
    case 69:
      if (((mips_tune) == (CPU_R4000)))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))
        {
	  return 35 /* 0x23 */;
        }
      else
        {
	  return 1;
        }

    case 68:
    case 66:
      if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R6000)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 1;
        }

    case 67:
    case 65:
      if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R6000)))) && (! (((mips_tune) == (CPU_R4300)))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 1;
        }

    case 53:
    case 52:
    case 37:
    case 36:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000)))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((which_alternative == 0) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative == 0) && ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600)))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 0) && ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))
        {
	  return 5;
        }
      else if ((which_alternative == 0) && (((mips_tune) == (CPU_R4650))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x3)) && ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000)))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((1 << which_alternative) & 0x3)) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((1 << which_alternative) & 0x3)) && ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600)))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((1 << which_alternative) & 0x3)) && ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))
        {
	  return 5;
        }
      else if ((((1 << which_alternative) & 0x3)) && (((mips_tune) == (CPU_R4650))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 56:
    case 55:
    case 54:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 35:
    case 34:
    case 32:
    case 31:
    case 29:
    case 28:
    case 27:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 26:
    case 25:
      if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 8;
        }
      else if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R6000)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))
        {
	  return 7;
        }
      else if ((((mips_tune) == (CPU_R6000))) || (((mips_tune) == (CPU_R4300))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R5000)))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 24:
    case 23:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R6000)))) && (! (((mips_tune) == (CPU_R5000)))))))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 6;
        }
      else
        {
	  return 5;
        }

    case 18:
    case 17:
    case 4:
    case 3:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R6000)))) && (! (((mips_tune) == (CPU_R4300)))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R6000))) || (((mips_tune) == (CPU_R4300))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

static int
divide_unit_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 76:
    case 74:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R4600))))
        {
	  return 31 /* 0x1f */;
        }
      else if (! (((mips_tune) == (CPU_R4300))))
        {
	  return 54 /* 0x36 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 75:
    case 73:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R4600))))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 68:
    case 66:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R4600))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else if (! (((mips_tune) == (CPU_R4300))))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 67:
    case 65:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R4600))))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 19 /* 0x13 */;
        }
      else if (! (((mips_tune) == (CPU_R4300))))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 112 /* 0x70 */;

    }
}

static int
mult_unit_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 26:
    case 25:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 4;
        }
      else if ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4650)))) && (! (((mips_tune) == (CPU_R4600))))))
        {
	  return 7;
        }
      else
        {
	  return 8;
        }

    case 24:
    case 23:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 5;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 8;

    }
}

static int
adder_unit_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
      if ((((mips_tune) == (CPU_R6000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000)))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 1;
        }
      else if (! (((mips_tune) == (CPU_R4300))))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 89:
    case 88:
    case 80:
    case 79:
      if (((mips_tune) == (CPU_R6000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R5000))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R4600)))))))
        {
	  return 1;
        }
      else if (! (((mips_tune) == (CPU_R4300))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 18:
    case 17:
    case 4:
    case 3:
      if (((mips_tune) == (CPU_R6000)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

static int
imuldiv_unit_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x7f)) && ((((((((((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R4000)))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x7000)) && ((((((((((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R4000)))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 8) && ((((((((((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R4000)))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x1c00)) && ((((((((((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R4000)))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 7) && ((((((((((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R4000)))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x70)) && ((((((((((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R4000)))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 89:
    case 88:
    case 80:
    case 79:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 72:
    case 70:
      if (((mips_tune) == (CPU_R5000)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R4120))) || (((mips_tune) == (CPU_R4100))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R4000)))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 71:
    case 69:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R4120))) || (((mips_tune) == (CPU_R4100))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 35 /* 0x23 */;
        }
      else if (! (((mips_tune) == (CPU_R4000))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 53:
    case 52:
    case 37:
    case 36:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_R4120))) || (((mips_tune) == (CPU_R4100))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((mips_tune) == (CPU_R4300))))
        {
	  return 5;
        }
      else if ((which_alternative == 0) && (((mips_tune) == (CPU_R4000))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 0) && (((mips_tune) == (CPU_R5000))))
        {
	  return 5;
        }
      else if ((which_alternative == 0) && ((((mips_tune) == (CPU_R4120))) || (((mips_tune) == (CPU_R4100)))))
        {
	  return 1;
        }
      else if ((which_alternative == 0) && (((mips_tune) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 0) && (((mips_tune) == (CPU_R4650))))
        {
	  return 4;
        }
      else if ((which_alternative == 0) && ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative == 0) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000)))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x3)) && (((mips_tune) == (CPU_R4300))))
        {
	  return 5;
        }
      else if ((((1 << which_alternative) & 0x3)) && (((mips_tune) == (CPU_R4000))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((1 << which_alternative) & 0x3)) && (((mips_tune) == (CPU_R5000))))
        {
	  return 5;
        }
      else if ((((1 << which_alternative) & 0x3)) && ((((mips_tune) == (CPU_R4120))) || (((mips_tune) == (CPU_R4100)))))
        {
	  return 1;
        }
      else if ((((1 << which_alternative) & 0x3)) && (((mips_tune) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((1 << which_alternative) & 0x3)) && (((mips_tune) == (CPU_R4650))))
        {
	  return 4;
        }
      else if ((((1 << which_alternative) & 0x3)) && ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((1 << which_alternative) & 0x3)) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000)))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 56:
    case 55:
    case 54:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 35:
    case 34:
    case 32:
    case 31:
    case 29:
    case 28:
    case 27:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R4120))) || (((mips_tune) == (CPU_R4100))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 26:
    case 25:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 5;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 24:
    case 23:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 8;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 18:
    case 17:
    case 4:
    case 3:
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 3;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 69 /* 0x45 */;

    }
}

static unsigned int
imuldiv_unit_blockage_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65605 /* min 1, max 69 */;

    }
}

static int
memory_unit_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((((((((((mips_tune) == (CPU_R5000))) || (((mips_tune) == (CPU_R4300)))) || (((mips_tune) == (CPU_R4120)))) || (((mips_tune) == (CPU_R4100)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R3900)))) || (((mips_tune) == (CPU_R3000)))) || ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000)))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0x1e))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 1)))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0x1e)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 4) && (((mips_tune) == (CPU_R5000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4300))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4120))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4100))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4650))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4600))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R3000))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (((1 << which_alternative) & 0x7))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 3)))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 195:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((mips_tune) == (CPU_R5000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4300))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4120))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4100))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4650))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4600))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R3000))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (which_alternative == 0)) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 1)))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 0))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (((1 << which_alternative) & 0x41))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x84))))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x41)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0x3c))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 2)))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0x3c)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (((1 << which_alternative) & 0x43))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x84))))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x43)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (((1 << which_alternative) & 0x7027))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x10088))))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0x3fdef)))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x7027)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0xc0))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 6)))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0xc0)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (((1 << which_alternative) & 0x1c27))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x4088))))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x1c27)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0x60))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 5)))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R3000))) && (((1 << which_alternative) & 0x73))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x104))))
        {
	  return 3;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (!((1 << which_alternative) & 0x3f7)))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (((1 << which_alternative) & 0x73)))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 206:
    case 189:
    case 188:
    case 187:
    case 186:
    case 178:
    case 173:
    case 160:
    case 159:
    case 156:
    case 155:
      return 1;

    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5000))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4120))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4100))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4650))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4600))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R3900))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R3000))) && (which_alternative == 0)) || (((which_alternative == 1) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000)))))))))))) || (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 0)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 185:
    case 184:
    case 183:
    case 182:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      if ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 109:
    case 108:
    case 107:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((mips_tune) == (CPU_R5000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4300))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4120))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4120))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4100))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4100))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4650))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4600))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3900))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R3000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && ((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))))
        {
	  return 1;
        }
      else if (((! (((mips_tune) == (CPU_R5000)))) && ((! (((mips_tune) == (CPU_R4300)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R3900)))) && (! (((mips_tune) == (CPU_R3000))))))))))) && (which_alternative == 0))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

int
function_units_used (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_mode attr_mode = get_attr_mode (insn);
  enum attr_type attr_type = get_attr_type (insn);
  unsigned long accum = 0;

  accum |= ((((attr_type == TYPE_LOAD) && ((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))))) || ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))) || ((attr_type == TYPE_STORE) || (attr_type == TYPE_XFER))) ? (1) : (0));
  accum |= (((attr_type == TYPE_HILO) || ((((attr_type == TYPE_IMUL) || (attr_type == TYPE_IMADD)) && (((((((((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4000))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))) || ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))) || (((mips_tune) == (CPU_R4650)))) || ((attr_mode == MODE_SI) && ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))) || ((attr_mode == MODE_DI) && ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))) || ((attr_mode == MODE_SI) && ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))) || ((attr_mode == MODE_DI) && (((mips_tune) == (CPU_R4300))))) || ((attr_mode == MODE_DI) && (((mips_tune) == (CPU_R5000)))))) || (((attr_type == TYPE_IDIV) && (((((((((((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4000))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))))) || ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || (((mips_tune) == (CPU_R4600)))) || (((mips_tune) == (CPU_R4650)))) || (((mips_tune) == (CPU_R4000)))) || ((attr_mode == MODE_SI) && ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))) || ((attr_mode == MODE_DI) && ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))) || ((attr_mode == MODE_SI) && (((mips_tune) == (CPU_R4300))))) || ((attr_mode == MODE_DI) && (((mips_tune) == (CPU_R4300))))) || ((attr_mode == MODE_SI) && (((mips_tune) == (CPU_R5000))))) || ((attr_mode == MODE_DI) && (((mips_tune) == (CPU_R5000)))))) || (((attr_type == TYPE_FADD) && (((mips_tune) == (CPU_R4300)))) || ((((attr_type == TYPE_FCMP) || ((attr_type == TYPE_FABS) || (attr_type == TYPE_FNEG))) && (((mips_tune) == (CPU_R4300)))) || ((attr_type == TYPE_FMUL) && (((attr_mode == MODE_SF) && (((mips_tune) == (CPU_R4300)))) || ((attr_mode == MODE_DF) && (((mips_tune) == (CPU_R4300))))))))))) ? (2) : (0));
  accum |= ((((attr_type == TYPE_FCMP) && (((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R6000))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))) || ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R6000)))))) || (((mips_tune) == (CPU_R5000))))) || (((attr_type == TYPE_FADD) && (((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R6000))) || (((mips_tune) == (CPU_R4300))))))) || ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || (((mips_tune) == (CPU_R6000))))) || (((attr_type == TYPE_FABS) || (attr_type == TYPE_FNEG)) && ((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))) || ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))))))) ? (4) : (0));
  accum |= ((((attr_type == TYPE_FDIV) && ((((((attr_mode == MODE_SF) && (((((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R6000))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))) || ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || (((mips_tune) == (CPU_R6000)))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((mips_tune) == (CPU_R5000))))) || ((attr_mode == MODE_DF) && (! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R6000))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R4300))))))))))) || ((attr_mode == MODE_DF) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))) || ((attr_mode == MODE_DF) && (((mips_tune) == (CPU_R6000))))) || ((attr_mode == MODE_DF) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))))) || (((attr_type == TYPE_FSQRT) || (attr_type == TYPE_FRSQRT)) && (((((attr_mode == MODE_SF) && (((! ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((mips_tune) == (CPU_R5000))))) || ((attr_mode == MODE_DF) && (! ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))))) || ((attr_mode == MODE_DF) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))) || ((attr_mode == MODE_DF) && (((mips_tune) == (CPU_R5000))))))) ? (16) : (0));
  accum |= (((attr_type == TYPE_FMUL) && (((((attr_mode == MODE_SF) && ((((! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R6000))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))) || ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R5000)))))) || (((mips_tune) == (CPU_R6000)))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))) || ((attr_mode == MODE_DF) && (! ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R6000))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000)))))))))) || ((attr_mode == MODE_DF) && ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R5000))))))) || ((attr_mode == MODE_DF) && (((mips_tune) == (CPU_R6000)))))) ? (8) : (0));

  if (accum && accum == (accum & -accum))
    {
      int i;
      for (i = 0; accum >>= 1; ++i) continue;
      accum = i;
    }
  else
    accum = ~accum;
  return accum;
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 320:
    case 318:
    case 316:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_NO))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_NO))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 321:
    case 319:
    case 317:
    case 315:
    case 314:
    case 313:
    case 307:
    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 296:
      return 1;

    case 533:
    case 532:
    case 531:
    case 530:
    case 297:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) == (0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_can_delay
get_attr_can_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
      extract_constrain_insn_cached (insn);
      if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x32)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((((1 << which_alternative) & 0x7f)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if (((((!((1 << which_alternative) & 0x10088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x28d40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x7000)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 8) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if (((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xa140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x1c00)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if (((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x280)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x70)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 195:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 185:
    case 184:
    case 183:
    case 182:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      extract_constrain_insn_cached (insn);
      if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 34:
    case 29:
    case 28:
    case 27:
      extract_constrain_insn_cached (insn);
      if ((! ((TARGET_MIPS4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 533:
    case 532:
    case 531:
    case 530:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 307:
    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      return CAN_DELAY_NO;

    default:
      extract_constrain_insn_cached (insn);
      if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    }
}

enum attr_extended_mips16
get_attr_extended_mips16 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 107:
    case 108:
    case 109:
    case 129:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 316:
    case 318:
    case 320:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else
        {
	  return EXTENDED_MIPS16_YES;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return EXTENDED_MIPS16_NO;

    }
}

enum attr_got
get_attr_got (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 162:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
      return GOT_LOAD;

    case 161:
    case 163:
      return GOT_XGOT_HIGH;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return GOT_UNSET;

    }
}

enum attr_hazard
get_attr_hazard (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
      extract_constrain_insn_cached (insn);
      if ((ISA_HAS_FCMP_DELAY) != (0))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((ISA_HAS_XFER_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 202:
    case 201:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((which_alternative == 0) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 199:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x18)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x84)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x32)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x30)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else if ((!((1 << which_alternative) & 0x7f)) && (((ISA_HAS_HILO_INTERLOCKS) == (0)) && (hilo_operand (operands[1], VOIDmode))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x84)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x30)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x10088)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x28d40)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else if ((((1 << which_alternative) & 0x7000)) && (((ISA_HAS_HILO_INTERLOCKS) == (0)) && (hilo_operand (operands[1], VOIDmode))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 6) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 8) && (((ISA_HAS_HILO_INTERLOCKS) == (0)) && (hilo_operand (operands[1], VOIDmode))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x4088)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0xa140)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else if ((((1 << which_alternative) & 0x1c00)) && (((ISA_HAS_HILO_INTERLOCKS) == (0)) && (hilo_operand (operands[1], VOIDmode))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 7) && (((ISA_HAS_HILO_INTERLOCKS) == (0)) && (hilo_operand (operands[1], VOIDmode))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x104)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x280)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else if ((((1 << which_alternative) & 0x70)) && (((ISA_HAS_HILO_INTERLOCKS) == (0)) && (hilo_operand (operands[1], VOIDmode))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 195:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 119:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 312:
    case 311:
    case 310:
    case 224:
    case 185:
    case 184:
    case 183:
    case 182:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 158:
    case 157:
    case 154:
    case 153:
    case 141:
    case 138:
    case 136:
    case 133:
    case 131:
    case 128:
    case 126:
    case 124:
    case 122:
    case 120:
    case 118:
      extract_constrain_insn_cached (insn);
      if ((ISA_HAS_LOAD_DELAY) != (0))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 34:
    case 29:
    case 28:
    case 27:
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS4000) != (0))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return HAZARD_NONE;

    }
}

enum attr_jal_macro
get_attr_jal_macro (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 320:
    case 318:
    case 316:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TARGET_ABICALLS != 0;
        }
      else
        {
	  return (TARGET_ABICALLS && !TARGET_NEWABI) != 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return JAL_MACRO_NO;

    }
}

enum attr_jal
get_attr_jal (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 316:
    case 318:
    case 320:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return JAL_INDIRECT;
        }
      else
        {
	  return JAL_DIRECT;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return JAL_UNSET;

    }
}

enum attr_mode
get_attr_mode (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 274:
    case 275:
    case 276:
    case 277:
    case 278:
    case 279:
    case 280:
    case 281:
    case 282:
    case 283:
    case 284:
    case 285:
    case 286:
    case 287:
    case 288:
    case 289:
    case 290:
    case 291:
    case 292:
    case 293:
    case 294:
    case 295:
      return MODE_FPSW;

    case 3:
    case 17:
    case 23:
    case 24:
    case 57:
    case 59:
    case 61:
    case 63:
    case 65:
    case 67:
    case 73:
    case 75:
    case 79:
    case 88:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 149:
    case 150:
    case 184:
    case 185:
    case 188:
    case 189:
    case 197:
    case 198:
    case 199:
    case 200:
    case 339:
    case 340:
    case 341:
    case 347:
      return MODE_DF;

    case 4:
    case 18:
    case 25:
    case 26:
    case 58:
    case 60:
    case 62:
    case 64:
    case 66:
    case 68:
    case 74:
    case 76:
    case 80:
    case 89:
    case 106:
    case 148:
    case 151:
    case 152:
    case 182:
    case 183:
    case 186:
    case 187:
    case 194:
    case 195:
    case 196:
    case 201:
    case 202:
    case 203:
    case 336:
    case 337:
    case 338:
    case 346:
      return MODE_SF;

    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 20:
    case 21:
    case 22:
    case 36:
    case 37:
    case 52:
    case 53:
    case 70:
    case 72:
    case 78:
    case 82:
    case 84:
    case 86:
    case 87:
    case 91:
    case 94:
    case 95:
    case 98:
    case 99:
    case 102:
    case 103:
    case 105:
    case 117:
    case 118:
    case 121:
    case 122:
    case 127:
    case 128:
    case 129:
    case 131:
    case 141:
    case 157:
    case 158:
    case 159:
    case 160:
    case 170:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 208:
    case 211:
    case 212:
    case 213:
    case 214:
    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 231:
    case 246:
    case 247:
    case 249:
    case 252:
    case 253:
    case 256:
    case 257:
    case 260:
    case 261:
    case 264:
    case 265:
    case 268:
    case 269:
    case 272:
    case 273:
    case 333:
    case 334:
    case 335:
    case 345:
    case 350:
      return MODE_DI;

    case 116:
    case 123:
    case 124:
    case 190:
    case 191:
    case 343:
    case 348:
      return MODE_HI;

    case 192:
    case 193:
    case 342:
      return MODE_QI;

    case 205:
    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 296:
    case 297:
    case 298:
    case 299:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 328:
    case 530:
    case 531:
    case 532:
    case 533:
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 0:
    case 1:
    case 2:
    case 112:
    case 113:
    case 130:
    case 132:
    case 135:
    case 137:
    case 140:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 204:
    case 206:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
    case 317:
    case 318:
    case 319:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
    case 325:
    case 326:
    case 327:
    case 329:
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_single_insn
get_attr_single_insn (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4);

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 199:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 200:
    case 196:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 198:
    case 197:
    case 194:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 181:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 179:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return TYPE_XFER;
        }
      else if (((1 << which_alternative) & 0x7000))
        {
	  return TYPE_HILO;
        }
      else if (which_alternative == 15)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 16)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 17)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_CONST;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 176:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x1c00))
        {
	  return TYPE_HILO;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 14)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 15)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return TYPE_HILO;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMADD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 30:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IMADD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 107:
    case 108:
    case 109:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_DARITH;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 119:
    case 121:
    case 123:
    case 125:
    case 127:
    case 129:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 195:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 201:
    case 202:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 203:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 328:
      return TYPE_NOP;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 77:
    case 78:
    case 81:
    case 82:
      return TYPE_MULTI;

    case 75:
    case 76:
      return TYPE_FRSQRT;

    case 73:
    case 74:
      return TYPE_FSQRT;

    case 106:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
      return TYPE_FCVT;

    case 274:
    case 275:
    case 276:
    case 277:
    case 278:
    case 279:
    case 280:
    case 281:
    case 282:
    case 283:
    case 284:
    case 285:
    case 286:
    case 287:
    case 288:
    case 289:
    case 290:
    case 291:
    case 292:
    case 293:
    case 294:
    case 295:
      return TYPE_FCMP;

    case 88:
    case 89:
      return TYPE_FNEG;

    case 79:
    case 80:
      return TYPE_FABS;

    case 65:
    case 66:
    case 67:
    case 68:
      return TYPE_FDIV;

    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
      return TYPE_FMADD;

    case 23:
    case 24:
    case 25:
    case 26:
      return TYPE_FMUL;

    case 3:
    case 4:
    case 17:
    case 18:
      return TYPE_FADD;

    case 69:
    case 70:
    case 71:
    case 72:
      return TYPE_IDIV;

    case 31:
    case 32:
    case 35:
    case 44:
    case 45:
    case 54:
    case 55:
    case 56:
      return TYPE_IMADD;

    case 27:
    case 28:
    case 29:
    case 34:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
      return TYPE_IMUL;

    case 9:
    case 10:
    case 11:
    case 20:
    case 21:
    case 86:
    case 91:
    case 94:
    case 95:
    case 98:
    case 99:
    case 102:
    case 105:
    case 110:
    case 111:
    case 114:
    case 115:
    case 116:
    case 210:
    case 211:
    case 212:
    case 217:
    case 218:
    case 219:
    case 225:
    case 226:
    case 227:
      return TYPE_DARITH;

    case 330:
    case 331:
    case 332:
    case 333:
    case 334:
    case 335:
    case 336:
    case 337:
    case 338:
    case 339:
    case 340:
    case 341:
      return TYPE_CONDMOVE;

    case 323:
    case 326:
      return TYPE_PREFETCHX;

    case 322:
    case 324:
    case 325:
    case 327:
      return TYPE_PREFETCH;

    case 155:
    case 156:
    case 159:
    case 160:
    case 173:
    case 178:
    case 186:
    case 187:
    case 188:
    case 189:
    case 206:
      return TYPE_STORE;

    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 162:
    case 118:
    case 120:
    case 122:
    case 124:
    case 126:
    case 128:
    case 131:
    case 133:
    case 136:
    case 138:
    case 141:
    case 153:
    case 154:
    case 157:
    case 158:
    case 182:
    case 183:
    case 184:
    case 185:
    case 224:
    case 310:
    case 311:
    case 312:
      return TYPE_LOAD;

    case 320:
    case 318:
    case 316:
    case 307:
    case 313:
    case 314:
    case 315:
    case 317:
    case 319:
    case 321:
      return TYPE_CALL;

    case 296:
    case 298:
    case 299:
    case 300:
    case 301:
    case 302:
    case 303:
    case 305:
    case 306:
      return TYPE_JUMP;

    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 297:
    case 530:
    case 531:
    case 532:
    case 533:
      return TYPE_BRANCH;

    case 309:
    case 308:
    case 204:
    case 163:
    case 161:
    case 140:
    case 137:
    case 135:
    case 132:
    case 130:
    case 113:
    case 112:
    case 2:
    case 1:
    case 0:
    case 205:
    case 304:
    case 342:
    case 343:
    case 344:
    case 345:
    case 346:
    case 347:
    case 348:
    case 349:
    case 350:
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

int
eligible_for_delay (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 320:
    case 318:
    case 316:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_NO))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_NO))))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 321:
    case 319:
    case 317:
    case 315:
    case 314:
    case 313:
    case 307:
      slot += 3 * 1;
      break;
      break;

    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 296:
      slot += 2 * 1;
      break;
      break;

    case 533:
    case 532:
    case 531:
    case 530:
    case 297:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) == (0))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case 295:
        case 294:
        case 293:
        case 292:
        case 291:
        case 290:
        case 289:
        case 288:
        case 287:
        case 286:
        case 285:
        case 284:
        case 283:
        case 282:
        case 281:
        case 280:
        case 279:
        case 278:
        case 277:
        case 276:
        case 275:
        case 274:
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 203:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:
        case 201:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:
        case 196:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 198:
        case 197:
        case 194:
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x32)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
        case 190:
	  extract_constrain_insn_cached (insn);
	  if (((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((((1 << which_alternative) & 0x7f)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 181:
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 179:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x10088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x28d40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x7000)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 180:
        case 177:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 8) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 176:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xa140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x1c00)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
        case 191:
        case 175:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x280)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x70)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 119:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 312:
        case 311:
        case 310:
        case 224:
        case 185:
        case 184:
        case 183:
        case 182:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
        case 162:
        case 158:
        case 157:
        case 154:
        case 153:
        case 141:
        case 138:
        case 136:
        case 133:
        case 131:
        case 128:
        case 126:
        case 124:
        case 122:
        case 120:
        case 118:
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 43:
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 34:
        case 29:
        case 28:
        case 27:
	  extract_constrain_insn_cached (insn);
	  if ((! ((TARGET_MIPS4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 533:
        case 532:
        case 531:
        case 530:
        case 321:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 307:
        case 306:
        case 305:
        case 303:
        case 302:
        case 301:
        case 300:
        case 299:
        case 298:
        case 297:
        case 296:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 236:
        case 235:
        case 234:
        case 233:
        case 232:
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 295:
        case 294:
        case 293:
        case 292:
        case 291:
        case 290:
        case 289:
        case 288:
        case 287:
        case 286:
        case 285:
        case 284:
        case 283:
        case 282:
        case 281:
        case 280:
        case 279:
        case 278:
        case 277:
        case 276:
        case 275:
        case 274:
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 203:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:
        case 201:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:
        case 196:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 198:
        case 197:
        case 194:
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x32)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
        case 190:
	  extract_constrain_insn_cached (insn);
	  if (((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((((1 << which_alternative) & 0x7f)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 181:
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 179:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x10088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x28d40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x7000)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 180:
        case 177:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 8) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 176:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xa140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x1c00)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
        case 191:
        case 175:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x280)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x70)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 119:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 312:
        case 311:
        case 310:
        case 224:
        case 185:
        case 184:
        case 183:
        case 182:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
        case 162:
        case 158:
        case 157:
        case 154:
        case 153:
        case 141:
        case 138:
        case 136:
        case 133:
        case 131:
        case 128:
        case 126:
        case 124:
        case 122:
        case 120:
        case 118:
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 43:
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 34:
        case 29:
        case 28:
        case 27:
	  extract_constrain_insn_cached (insn);
	  if ((! ((TARGET_MIPS4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 533:
        case 532:
        case 531:
        case 530:
        case 321:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 307:
        case 306:
        case 305:
        case 303:
        case 302:
        case 301:
        case 300:
        case 299:
        case 298:
        case 297:
        case 296:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 236:
        case 235:
        case 234:
        case 233:
        case 232:
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 295:
        case 294:
        case 293:
        case 292:
        case 291:
        case 290:
        case 289:
        case 288:
        case 287:
        case 286:
        case 285:
        case 284:
        case 283:
        case 282:
        case 281:
        case 280:
        case 279:
        case 278:
        case 277:
        case 276:
        case 275:
        case 274:
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 203:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:
        case 201:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:
        case 196:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 198:
        case 197:
        case 194:
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x32)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
        case 190:
	  extract_constrain_insn_cached (insn);
	  if (((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((((1 << which_alternative) & 0x7f)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 181:
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 179:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x10088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x28d40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x7000)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 180:
        case 177:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 8) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 176:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xa140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x1c00)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
        case 191:
        case 175:
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x280)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x70)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 119:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 312:
        case 311:
        case 310:
        case 224:
        case 185:
        case 184:
        case 183:
        case 182:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
        case 162:
        case 158:
        case 157:
        case 154:
        case 153:
        case 141:
        case 138:
        case 136:
        case 133:
        case 131:
        case 128:
        case 126:
        case 124:
        case 122:
        case 120:
        case 118:
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 43:
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 34:
        case 29:
        case 28:
        case 27:
	  extract_constrain_insn_cached (insn);
	  if ((! ((TARGET_MIPS4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 533:
        case 532:
        case 531:
        case 530:
        case 321:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 307:
        case 306:
        case 305:
        case 303:
        case 302:
        case 301:
        case 300:
        case 299:
        case 298:
        case 297:
        case 296:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 236:
        case 235:
        case 234:
        case 233:
        case 232:
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      abort ();
    }
}

int
eligible_for_annul_false (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 320:
    case 318:
    case 316:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_NO))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_NO))))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 321:
    case 319:
    case 317:
    case 315:
    case 314:
    case 313:
    case 307:
      slot += 3 * 1;
      break;
      break;

    case 306:
    case 305:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 296:
      slot += 2 * 1;
      break;
      break;

    case 533:
    case 532:
    case 531:
    case 530:
    case 297:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) == (0))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 295:
        case 294:
        case 293:
        case 292:
        case 291:
        case 290:
        case 289:
        case 288:
        case 287:
        case 286:
        case 285:
        case 284:
        case 283:
        case 282:
        case 281:
        case 280:
        case 279:
        case 278:
        case 277:
        case 276:
        case 275:
        case 274:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 203:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:
        case 201:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:
        case 196:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 198:
        case 197:
        case 194:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x32)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 192:
        case 190:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((((1 << which_alternative) & 0x7f)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 181:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 179:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((!((1 << which_alternative) & 0x10088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x28d40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x7000)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 180:
        case 177:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 8) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 176:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xa140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x1c00)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 193:
        case 191:
        case 175:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 174:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x280)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((!((1 << which_alternative) & 0x70)) || ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) || (! (hilo_operand (operands[1], VOIDmode)))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 195:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 119:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 312:
        case 311:
        case 310:
        case 224:
        case 185:
        case 184:
        case 183:
        case 182:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
        case 162:
        case 158:
        case 157:
        case 154:
        case 153:
        case 141:
        case 138:
        case 136:
        case 133:
        case 131:
        case 128:
        case 126:
        case 124:
        case 122:
        case 120:
        case 118:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 43:
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 34:
        case 29:
        case 28:
        case 27:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((TARGET_MIPS4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 533:
        case 532:
        case 531:
        case 530:
        case 321:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 307:
        case 306:
        case 305:
        case 303:
        case 302:
        case 301:
        case 300:
        case 299:
        case 298:
        case 297:
        case 296:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 236:
        case 235:
        case 234:
        case 233:
        case 232:
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      abort ();
    }
}

static int
imuldiv_unit_blockage (rtx executing_insn, rtx candidate_insn)
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 179:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 176:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 174:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 89:
    case 88:
    case 80:
    case 79:
      casenum = 23 /* 0x17 */;
      break;

    case 72:
    case 70:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  casenum = 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  casenum = 21 /* 0x15 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 71:
    case 69:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  casenum = 18 /* 0x12 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  casenum = 20 /* 0x14 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 53:
    case 52:
    case 37:
    case 36:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 7;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  casenum = 9;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 33:
      extract_constrain_insn_cached (insn);
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 6;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 30:
      extract_constrain_insn_cached (insn);
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 6;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 56:
    case 55:
    case 54:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 35:
    case 34:
    case 32:
    case 31:
    case 29:
    case 28:
    case 27:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 6;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 26:
    case 25:
      casenum = 24 /* 0x18 */;
      break;

    case 24:
    case 23:
      casenum = 25 /* 0x19 */;
      break;

    case 18:
    case 17:
    case 4:
    case 3:
      casenum = 22 /* 0x16 */;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 27 /* 0x1b */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 5;

    case 3:
      return 12 /* 0xc */;

    case 4:
      return 10 /* 0xa */;

    case 5:
      return 4;

    case 6:
      return 1;

    case 7:
      return 4;

    case 8:
      return 5;

    case 9:
      return 8;

    case 10:
      return 9;

    case 11:
      return 38 /* 0x26 */;

    case 12:
      return 35 /* 0x23 */;

    case 13:
      return 42 /* 0x2a */;

    case 14:
      return 36 /* 0x24 */;

    case 15:
      return 69 /* 0x45 */;

    case 16:
      return 35 /* 0x23 */;

    case 17:
      return 67 /* 0x43 */;

    case 18:
      return 37 /* 0x25 */;

    case 19:
      return 69 /* 0x45 */;

    case 20:
      return 36 /* 0x24 */;

    case 21:
      return 68 /* 0x44 */;

    case 22:
      return 3;

    case 23:
      return 1;

    case 24:
      return 5;

    case 25:
      return 8;

    case 27:
      return 58 /* 0x3a */;

    default:
      abort ();
    }
}

static int
imuldiv_unit_conflict_cost (rtx executing_insn, rtx candidate_insn)
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 192:
    case 190:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 179:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 180:
    case 177:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 176:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 193:
    case 191:
    case 175:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 174:
      extract_constrain_insn_cached (insn);
      casenum = 0;
      break;

    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 89:
    case 88:
    case 80:
    case 79:
      casenum = 23 /* 0x17 */;
      break;

    case 72:
    case 70:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  casenum = 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  casenum = 21 /* 0x15 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 71:
    case 69:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  casenum = 18 /* 0x12 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  casenum = 20 /* 0x14 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 53:
    case 52:
    case 37:
    case 36:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 7;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  casenum = 9;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 33:
      extract_constrain_insn_cached (insn);
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 6;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 30:
      extract_constrain_insn_cached (insn);
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 6;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 56:
    case 55:
    case 54:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 35:
    case 34:
    case 32:
    case 31:
    case 29:
    case 28:
    case 27:
      if ((! (((mips_tune) == (CPU_R3000)))) && ((! (((mips_tune) == (CPU_R3900)))) && ((! (((mips_tune) == (CPU_R4000)))) && ((! (((mips_tune) == (CPU_R4600)))) && ((! (((mips_tune) == (CPU_R4650)))) && ((! (((mips_tune) == (CPU_R4100)))) && ((! (((mips_tune) == (CPU_R4120)))) && ((! (((mips_tune) == (CPU_R4300)))) && (! (((mips_tune) == (CPU_R5000))))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_tune) == (CPU_R4000))) || (((mips_tune) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  casenum = 6;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 26:
    case 25:
      casenum = 24 /* 0x18 */;
      break;

    case 24:
    case 23:
      casenum = 25 /* 0x19 */;
      break;

    case 18:
    case 17:
    case 4:
    case 3:
      casenum = 22 /* 0x16 */;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 27 /* 0x1b */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 5;

    case 3:
      return 12 /* 0xc */;

    case 4:
      return 10 /* 0xa */;

    case 5:
      return 4;

    case 6:
      return 1;

    case 7:
      return 4;

    case 8:
      return 5;

    case 9:
      return 8;

    case 10:
      return 9;

    case 11:
      return 38 /* 0x26 */;

    case 12:
      return 35 /* 0x23 */;

    case 13:
      return 42 /* 0x2a */;

    case 14:
      return 36 /* 0x24 */;

    case 15:
      return 69 /* 0x45 */;

    case 16:
      return 35 /* 0x23 */;

    case 17:
      return 67 /* 0x43 */;

    case 18:
      return 37 /* 0x25 */;

    case 19:
      return 69 /* 0x45 */;

    case 20:
      return 36 /* 0x24 */;

    case 21:
      return 68 /* 0x44 */;

    case 22:
      return 3;

    case 23:
      return 1;

    case 24:
      return 5;

    case 25:
      return 8;

    case 27:
      return 58 /* 0x3a */;

    default:
      abort ();
    }
}

const struct function_unit_desc function_units[] = {
  {"memory", 1, 1, 0, 1, 1, memory_unit_ready_cost, 0, 1, 0, 0}, 
  {"imuldiv", 2, 1, 0, 0, 69, imuldiv_unit_ready_cost, imuldiv_unit_conflict_cost, 69, imuldiv_unit_blockage_range, imuldiv_unit_blockage}, 
  {"adder", 4, 1, 1, 1, 1, adder_unit_ready_cost, 0, 1, 0, 0}, 
  {"mult", 8, 1, 1, 1, 1, mult_unit_ready_cost, 0, 1, 0, 0}, 
  {"divide", 16, 1, 1, 1, 1, divide_unit_ready_cost, 0, 1, 0, 0}, 
};


int max_dfa_issue_rate = 6;
/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr54_translate[] ATTRIBUTE_UNUSED = {
    0,     1,     2,     2,     2,     1,     1,     1,     1,     1,
    1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     0,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     5};

/* Vector for state transitions.  */
static const unsigned char vr54_transitions[] ATTRIBUTE_UNUSED = {
    4,    10,     7,     1,     0,     0,    12,     5,     2,    12,
    1,     0,    12,     3,    12,    12,     2,     0,    12,     4,
   12,    12,     3,     0,    12,    12,    12,    12,     4,     0,
   12,     6,     3,    12,     5,     0,    12,    12,     4,    12,
    6,     0,    12,     8,    12,     2,     7,     0,    12,     9,
   12,     3,     8,     0,    12,    12,    12,     4,     9,     0,
   12,    11,     8,     5,    10,     0,    12,    12,     9,     6,
   11,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char vr54_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     1,     1,     1,     1,     0,     2,     1,     0,
    1,     1,     0,     2,     0,     0,     1,     1,     0,     1,
    0,     0,     1,     1,     0,     0,     0,     0,     1,     1,
    0,     1,     1,     0,     1,     1,     0,     0,     1,     0,
    1,     1,     0,     2,     0,     1,     1,     1,     0,     1,
    0,     1,     1,     1,     0,     0,     0,     1,     1,     1,
    0,     1,     1,     1,     1,     1,     0,     0,     1,     1,
    1,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr54_min_issue_delay[] ATTRIBUTE_UNUSED = {
    2,    75,    44,   242,    77,    40,   163,   136,    48};

/* Vector for locked state flags.  */
static const unsigned char vr54_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr54_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr55_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
    3,     4,     4,     4,     4,     5,     5,     5,     5,     5,
    6,     5,     5,     5,     5,     5,     5,     6,     6,     6,
    6,     5,     5,     1,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     7};

/* Vector for state transitions.  */
static const unsigned char vr55_transitions[] ATTRIBUTE_UNUSED = {
    0,     6,    47,    45,    37,    25,     1,     0,     1,    48,
   24,    22,    14,     2,    48,     0,     2,    48,    13,    11,
    3,    48,    48,     0,     3,    48,    10,     8,     4,    48,
   48,     0,     4,    48,     7,     5,    48,    48,    48,     0,
    5,    48,     6,    48,    48,    48,    48,     0,     6,    48,
   48,    48,    48,    48,    48,     0,     7,    48,    48,     6,
   48,    48,    48,     0,     8,    48,     9,    48,     5,    48,
   48,     0,     9,    48,    48,    48,     6,    48,    48,     0,
   10,    48,    48,     9,     7,    48,    48,     0,    11,    48,
   12,    48,     8,    48,    48,     0,    12,    48,    48,    48,
    9,    48,    48,     0,    13,    48,    48,    12,    10,    48,
   48,     0,    14,    48,    21,    19,    15,     3,    48,     0,
   15,    48,    18,    16,    48,     4,    48,     0,    16,    48,
   17,    48,    48,     5,    48,     0,    17,    48,    48,    48,
   48,     6,    48,     0,    18,    48,    48,    17,    48,     7,
   48,     0,    19,    48,    20,    48,    16,     8,    48,     0,
   20,    48,    48,    48,    17,     9,    48,     0,    21,    48,
   48,    20,    18,    10,    48,     0,    22,    48,    23,    48,
   19,    11,    48,     0,    23,    48,    48,    48,    20,    12,
   48,     0,    24,    48,    48,    23,    21,    13,    48,     0,
   25,    48,    36,    34,    26,    48,     2,     0,    26,    48,
   33,    31,    27,    48,     3,     0,    27,    48,    30,    28,
   48,    48,     4,     0,    28,    48,    29,    48,    48,    48,
    5,     0,    29,    48,    48,    48,    48,    48,     6,     0,
   30,    48,    48,    29,    48,    48,     7,     0,    31,    48,
   32,    48,    28,    48,     8,     0,    32,    48,    48,    48,
   29,    48,     9,     0,    33,    48,    48,    32,    30,    48,
   10,     0,    34,    48,    35,    48,    31,    48,    11,     0,
   35,    48,    48,    48,    32,    48,    12,     0,    36,    48,
   48,    35,    33,    48,    13,     0,    37,    48,    44,    42,
   38,    26,    14,     0,    38,    48,    41,    39,    48,    27,
   15,     0,    39,    48,    40,    48,    48,    28,    16,     0,
   40,    48,    48,    48,    48,    29,    17,     0,    41,    48,
   48,    40,    48,    30,    18,     0,    42,    48,    43,    48,
   39,    31,    19,     0,    43,    48,    48,    48,    40,    32,
   20,     0,    44,    48,    48,    43,    41,    33,    21,     0,
   45,    48,    46,    48,    42,    34,    22,     0,    46,    48,
   48,    48,    43,    35,    23,     0,    47,    48,    48,    46,
   44,    36,    24,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char vr55_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     2,     1,     1,     1,     1,     0,
    1,     1,     2,     1,     0,     1,     1,     0,     1,     1,
    2,     0,     0,     1,     1,     0,     1,     1,     1,     0,
    0,     1,     1,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     1,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     1,
    0,     0,     0,     1,     1,     0,     1,     0,     1,     0,
    0,     1,     1,     0,     0,     0,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    1,     0,     2,     0,     0,     1,     1,     0,     0,     0,
    2,     0,     0,     1,     1,     0,     0,     1,     2,     0,
    0,     1,     1,     0,     1,     1,     1,     1,     0,     1,
    1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
    1,     0,     0,     1,     0,     1,     1,     0,     0,     0,
    0,     1,     0,     1,     1,     0,     0,     1,     0,     1,
    0,     1,     1,     0,     1,     0,     1,     1,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     1,     1,     0,
    0,     1,     1,     1,     0,     1,     1,     0,     1,     0,
    2,     1,     0,     1,     1,     0,     0,     0,     2,     1,
    0,     1,     1,     0,     0,     1,     2,     1,     0,     1,
    1,     0,     1,     1,     2,     0,     1,     1,     1,     0,
    1,     1,     1,     0,     1,     1,     1,     0,     1,     1,
    0,     0,     1,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    1,     0,     0,     1,     0,     0,     1,     1,     1,     0,
    1,     0,     1,     0,     1,     1,     1,     0,     0,     0,
    1,     0,     1,     1,     1,     0,     0,     1,     1,     0,
    1,     1,     1,     0,     1,     0,     2,     0,     1,     1,
    1,     0,     0,     0,     2,     0,     1,     1,     1,     0,
    0,     1,     2,     0,     1,     1,     1,     0,     1,     1,
    1,     1,     1,     1,     1,     0,     1,     1,     0,     1,
    1,     1,     1,     0,     1,     0,     0,     1,     1,     1,
    1,     0,     0,     0,     0,     1,     1,     1,     1,     0,
    0,     1,     0,     1,     1,     1,     1,     0,     1,     0,
    1,     1,     1,     1,     1,     0,     0,     0,     1,     1,
    1,     1,     1,     0,     0,     1,     1,     1,     1,     1,
    1,     0,     1,     0,     2,     1,     1,     1,     1,     0,
    0,     0,     2,     1,     1,     1,     1,     0,     0,     1,
    2,     1,     1,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr55_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,    66,    70,    70,    78,    94,   126,   110,    86,   118,
  102,    86,   118,   102,    66,    74,    90,   122,   106,    82,
  114,    98,    82,   114,    98,    68,    68,    76,    92,   124,
  108,    84,   116,   100,    84,   116,   100,    64,    72,    88,
  120,   104,    80,   112,    96,    80,   112,    96};

/* Vector for locked state flags.  */
static const unsigned char vr55_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr55_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm7000_other_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     1,     2,     2,     3,     3,     3,
    3,     3,     3,     3,     1,     4,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     5,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     6};

/* Vector for state transitions.  */
static const unsigned char rm7000_other_transitions[] ATTRIBUTE_UNUSED = {
    0,     3,     3,     2,     1,     1,     0,     1,     4,     4,
    4,     4,     4,     0,     2,     1,     1,     4,     4,     4,
    0,     3,     1,     4,     1,     1,     4,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm7000_other_state_alts[] ATTRIBUTE_UNUSED = {
    1,     4,     2,     2,     2,     1,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     1,     1,     0,     0,     0,
    1,     1,     1,     0,     1,     1,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm7000_other_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,   248,   113,    32};

/* Vector for locked state flags.  */
static const unsigned char rm7000_other_dead_lock[] = {
    0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm7000_other_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm7000_fdiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    2,     3,     4,     5,     6,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     7};

/* Vector for state transitions.  */
static const unsigned char rm7000_fdiv_transitions[] ATTRIBUTE_UNUSED = {
    0,     5,    20,   206,   145,     2,     1,     0,     1,   111,
   81,   205,   146,   207,   207,     2,     2,   112,    82,   115,
    3,   207,   207,     0,     3,   207,   207,   207,   207,   207,
  207,     4,     4,   207,   207,   207,   207,   114,   113,     5,
    5,   207,   207,   207,   207,   112,   111,     6,     6,   207,
  207,   207,   207,   110,   109,     7,     7,   207,   207,   207,
  207,   108,   107,     8,     8,   207,   207,   207,   207,   106,
  105,     9,     9,   207,   207,   207,   207,   104,   103,    10,
   10,   207,   207,   207,   207,   102,   101,    11,    11,   207,
  207,   207,   207,   100,    99,    12,    12,   207,   207,   207,
  207,    98,    97,    13,    13,   207,   207,   207,   207,    96,
   95,    14,    14,   207,   207,   207,   207,    94,    93,    15,
   15,   207,   207,   207,   207,    92,    91,    16,    16,   207,
  207,   207,   207,    90,    89,    17,    17,   207,   207,   207,
  207,    88,    87,    18,    18,   207,   207,   207,   207,    86,
   85,    19,    19,   207,   207,   207,   207,    84,    83,    20,
   20,   207,   207,   207,   207,    82,    81,    21,    21,   207,
  207,   207,   207,    80,    79,    22,    22,   207,   207,   207,
  207,    78,    77,    23,    23,   207,   207,   207,   207,    76,
   75,    24,    24,   207,   207,   207,   207,    74,    73,    25,
   25,   207,   207,   207,   207,    72,    71,    26,    26,   207,
  207,   207,   207,    70,    69,    27,    27,   207,   207,   207,
  207,    68,    67,    28,    28,   207,   207,   207,   207,    66,
   65,    29,    29,   207,   207,   207,   207,    64,    63,    30,
   30,   207,   207,   207,   207,    62,    61,    31,    31,   207,
  207,   207,   207,    60,    59,    32,    32,   207,   207,   207,
  207,    58,    57,    33,    33,   207,   207,   207,   207,    56,
   55,    34,    34,   207,   207,   207,   207,    54,    53,    35,
   35,   207,   207,   207,   207,    52,    51,    36,    36,   207,
  207,   207,   207,    50,    49,    37,    37,   207,   207,   207,
  207,    48,    47,    38,    38,   207,   207,   207,   207,    46,
   45,    39,    39,   207,   207,   207,   207,    44,    43,    40,
   40,   207,   207,   207,   207,    42,    41,     0,    41,   207,
  207,   207,   207,   207,   207,     2,    42,   207,   207,   207,
  207,   207,   207,     0,    43,   207,   207,   207,   207,   207,
  207,    42,    44,   207,   207,   207,   207,   207,   207,    40,
   45,   207,   207,   207,   207,   207,   207,    44,    46,   207,
  207,   207,   207,   207,   207,    39,    47,   207,   207,   207,
  207,   207,   207,    46,    48,   207,   207,   207,   207,   207,
  207,    38,    49,   207,   207,   207,   207,   207,   207,    48,
   50,   207,   207,   207,   207,   207,   207,    37,    51,   207,
  207,   207,   207,   207,   207,    50,    52,   207,   207,   207,
  207,   207,   207,    36,    53,   207,   207,   207,   207,   207,
  207,    52,    54,   207,   207,   207,   207,   207,   207,    35,
   55,   207,   207,   207,   207,   207,   207,    54,    56,   207,
  207,   207,   207,   207,   207,    34,    57,   207,   207,   207,
  207,   207,   207,    56,    58,   207,   207,   207,   207,   207,
  207,    33,    59,   207,   207,   207,   207,   207,   207,    58,
   60,   207,   207,   207,   207,   207,   207,    32,    61,   207,
  207,   207,   207,   207,   207,    60,    62,   207,   207,   207,
  207,   207,   207,    31,    63,   207,   207,   207,   207,   207,
  207,    62,    64,   207,   207,   207,   207,   207,   207,    30,
   65,   207,   207,   207,   207,   207,   207,    64,    66,   207,
  207,   207,   207,   207,   207,    29,    67,   207,   207,   207,
  207,   207,   207,    66,    68,   207,   207,   207,   207,   207,
  207,    28,    69,   207,   207,   207,   207,   207,   207,    68,
   70,   207,   207,   207,   207,   207,   207,    27,    71,   207,
  207,   207,   207,   207,   207,    70,    72,   207,   207,   207,
  207,   207,   207,    26,    73,   207,   207,   207,   207,   207,
  207,    72,    74,   207,   207,   207,   207,   207,   207,    25,
   75,   207,   207,   207,   207,   207,   207,    74,    76,   207,
  207,   207,   207,   207,   207,    24,    77,   207,   207,   207,
  207,   207,   207,    76,    78,   207,   207,   207,   207,   207,
  207,    23,    79,   207,   207,   207,   207,   207,   207,    78,
   80,   207,   207,   207,   207,   207,   207,    22,    81,   207,
  207,   207,   207,   207,   207,    80,    82,   207,   207,   207,
  207,   207,   207,    21,    83,   207,   207,   207,   207,   207,
  207,    82,    84,   207,   207,   207,   207,   207,   207,    20,
   85,   207,   207,   207,   207,   207,   207,    84,    86,   207,
  207,   207,   207,   207,   207,    19,    87,   207,   207,   207,
  207,   207,   207,    86,    88,   207,   207,   207,   207,   207,
  207,    18,    89,   207,   207,   207,   207,   207,   207,    88,
   90,   207,   207,   207,   207,   207,   207,    17,    91,   207,
  207,   207,   207,   207,   207,    90,    92,   207,   207,   207,
  207,   207,   207,    16,    93,   207,   207,   207,   207,   207,
  207,    92,    94,   207,   207,   207,   207,   207,   207,    15,
   95,   207,   207,   207,   207,   207,   207,    94,    96,   207,
  207,   207,   207,   207,   207,    14,    97,   207,   207,   207,
  207,   207,   207,    96,    98,   207,   207,   207,   207,   207,
  207,    13,    99,   207,   207,   207,   207,   207,   207,    98,
  100,   207,   207,   207,   207,   207,   207,    12,   101,   207,
  207,   207,   207,   207,   207,   100,   102,   207,   207,   207,
  207,   207,   207,    11,   103,   207,   207,   207,   207,   207,
  207,   102,   104,   207,   207,   207,   207,   207,   207,    10,
  105,   207,   207,   207,   207,   207,   207,   104,   106,   207,
  207,   207,   207,   207,   207,     9,   107,   207,   207,   207,
  207,   207,   207,   106,   108,   207,   207,   207,   207,   207,
  207,     8,   109,   207,   207,   207,   207,   207,   207,   108,
  110,   207,   207,   207,   207,   207,   207,     7,   111,   207,
  207,   207,   207,   207,   207,   110,   112,   207,   207,   207,
  207,   207,   207,     6,   113,   207,   207,   207,   207,   207,
  207,   112,   114,   207,   207,   207,   207,   207,   207,     5,
  115,   207,   207,   207,   207,   207,   207,   116,   116,   207,
  207,   207,   207,   204,   203,   117,   117,   207,   207,   207,
  207,   202,   201,   118,   118,   207,   207,   207,   207,   200,
  199,   119,   119,   207,   207,   207,   207,   198,   197,   120,
  120,   207,   207,   207,   207,   196,   195,   121,   121,   207,
  207,   207,   207,   194,   193,   122,   122,   207,   207,   207,
  207,   192,   191,   123,   123,   207,   207,   207,   207,   190,
  189,   124,   124,   207,   207,   207,   207,   188,   187,   125,
  125,   207,   207,   207,   207,   186,   185,   126,   126,   207,
  207,   207,   207,   184,   183,   127,   127,   207,   207,   207,
  207,   182,   181,   128,   128,   207,   207,   207,   207,   180,
  179,   129,   129,   207,   207,   207,   207,   178,   177,   130,
  130,   207,   207,   207,   207,   176,   175,   131,   131,   207,
  207,   207,   207,   174,   173,   132,   132,   207,   207,   207,
  207,   172,   171,   133,   133,   207,   207,   207,   207,   170,
  169,   134,   134,   207,   207,   207,   207,   168,   167,   135,
  135,   207,   207,   207,   207,   166,   165,   136,   136,   207,
  207,   207,   207,   164,   163,   137,   137,   207,   207,   207,
  207,   162,   161,   138,   138,   207,   207,   207,   207,   160,
  159,   139,   139,   207,   207,   207,   207,   158,   157,   140,
  140,   207,   207,   207,   207,   156,   155,   141,   141,   207,
  207,   207,   207,   154,   153,   142,   142,   207,   207,   207,
  207,   152,   151,   143,   143,   207,   207,   207,   207,   150,
  149,   144,   144,   207,   207,   207,   207,   148,   147,   145,
  145,   207,   207,   207,   207,     3,   146,     4,   146,   207,
  207,   207,   207,   207,   207,   114,   147,   207,   207,   207,
  207,   207,   207,     3,   148,   207,   207,   207,   207,   207,
  207,   145,   149,   207,   207,   207,   207,   207,   207,   148,
  150,   207,   207,   207,   207,   207,   207,   144,   151,   207,
  207,   207,   207,   207,   207,   150,   152,   207,   207,   207,
  207,   207,   207,   143,   153,   207,   207,   207,   207,   207,
  207,   152,   154,   207,   207,   207,   207,   207,   207,   142,
  155,   207,   207,   207,   207,   207,   207,   154,   156,   207,
  207,   207,   207,   207,   207,   141,   157,   207,   207,   207,
  207,   207,   207,   156,   158,   207,   207,   207,   207,   207,
  207,   140,   159,   207,   207,   207,   207,   207,   207,   158,
  160,   207,   207,   207,   207,   207,   207,   139,   161,   207,
  207,   207,   207,   207,   207,   160,   162,   207,   207,   207,
  207,   207,   207,   138,   163,   207,   207,   207,   207,   207,
  207,   162,   164,   207,   207,   207,   207,   207,   207,   137,
  165,   207,   207,   207,   207,   207,   207,   164,   166,   207,
  207,   207,   207,   207,   207,   136,   167,   207,   207,   207,
  207,   207,   207,   166,   168,   207,   207,   207,   207,   207,
  207,   135,   169,   207,   207,   207,   207,   207,   207,   168,
  170,   207,   207,   207,   207,   207,   207,   134,   171,   207,
  207,   207,   207,   207,   207,   170,   172,   207,   207,   207,
  207,   207,   207,   133,   173,   207,   207,   207,   207,   207,
  207,   172,   174,   207,   207,   207,   207,   207,   207,   132,
  175,   207,   207,   207,   207,   207,   207,   174,   176,   207,
  207,   207,   207,   207,   207,   131,   177,   207,   207,   207,
  207,   207,   207,   176,   178,   207,   207,   207,   207,   207,
  207,   130,   179,   207,   207,   207,   207,   207,   207,   178,
  180,   207,   207,   207,   207,   207,   207,   129,   181,   207,
  207,   207,   207,   207,   207,   180,   182,   207,   207,   207,
  207,   207,   207,   128,   183,   207,   207,   207,   207,   207,
  207,   182,   184,   207,   207,   207,   207,   207,   207,   127,
  185,   207,   207,   207,   207,   207,   207,   184,   186,   207,
  207,   207,   207,   207,   207,   126,   187,   207,   207,   207,
  207,   207,   207,   186,   188,   207,   207,   207,   207,   207,
  207,   125,   189,   207,   207,   207,   207,   207,   207,   188,
  190,   207,   207,   207,   207,   207,   207,   124,   191,   207,
  207,   207,   207,   207,   207,   190,   192,   207,   207,   207,
  207,   207,   207,   123,   193,   207,   207,   207,   207,   207,
  207,   192,   194,   207,   207,   207,   207,   207,   207,   122,
  195,   207,   207,   207,   207,   207,   207,   194,   196,   207,
  207,   207,   207,   207,   207,   121,   197,   207,   207,   207,
  207,   207,   207,   196,   198,   207,   207,   207,   207,   207,
  207,   120,   199,   207,   207,   207,   207,   207,   207,   198,
  200,   207,   207,   207,   207,   207,   207,   119,   201,   207,
  207,   207,   207,   207,   207,   200,   202,   207,   207,   207,
  207,   207,   207,   118,   203,   207,   207,   207,   207,   207,
  207,   202,   204,   207,   207,   207,   207,   207,   207,   117,
  205,   207,   207,   207,   207,   207,   207,   204,   206,   207,
  207,   207,   207,   115,   205,   116};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm7000_fdiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     2,     2,     1,     1,     2,
    2,     2,     2,     0,     0,     1,     1,     2,     2,     2,
    2,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     2,     2,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm7000_fdiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     2,     2,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,    38,    38,    38,    38,     1,
    1,     0,     0,    37,    37,    37,    37,     0,     0,     0,
    0,    36,    36,    36,    36,     0,     0,     0,     0,    35,
   35,    35,    35,     0,     0,     0,     0,    34,    34,    34,
   34,     0,     0,     0,     0,    33,    33,    33,    33,     0,
    0,     0,     0,    32,    32,    32,    32,     0,     0,     0,
    0,    31,    31,    31,    31,     0,     0,     0,     0,    30,
   30,    30,    30,     0,     0,     0,     0,    29,    29,    29,
   29,     0,     0,     0,     0,    28,    28,    28,    28,     0,
    0,     0,     0,    27,    27,    27,    27,     0,     0,     0,
    0,    26,    26,    26,    26,     0,     0,     0,     0,    25,
   25,    25,    25,     0,     0,     0,     0,    24,    24,    24,
   24,     0,     0,     0,     0,    23,    23,    23,    23,     0,
    0,     0,     0,    22,    22,    22,    22,     0,     0,     0,
    0,    21,    21,    21,    21,     0,     0,     0,     0,    20,
   20,    20,    20,     0,     0,     0,     0,    19,    19,    19,
   19,     0,     0,     0,     0,    18,    18,    18,    18,     0,
    0,     0,     0,    17,    17,    17,    17,     0,     0,     0,
    0,    16,    16,    16,    16,     0,     0,     0,     0,    15,
   15,    15,    15,     0,     0,     0,     0,    14,    14,    14,
   14,     0,     0,     0,     0,    13,    13,    13,    13,     0,
    0,     0,     0,    12,    12,    12,    12,     0,     0,     0,
    0,    11,    11,    11,    11,     0,     0,     0,     0,    10,
   10,    10,    10,     0,     0,     0,     0,     9,     9,     9,
    9,     0,     0,     0,     0,     8,     8,     8,     8,     0,
    0,     0,     0,     7,     7,     7,     7,     0,     0,     0,
    0,     6,     6,     6,     6,     0,     0,     0,     0,     5,
    5,     5,     5,     0,     0,     0,     0,     4,     4,     4,
    4,     0,     0,     0,     0,     3,     3,     3,     3,     0,
    0,     0,     0,     2,     2,     2,     2,     0,     0,     0,
    0,     1,     1,     1,     1,     0,     0,     0,     0,     1,
    1,     1,     1,     2,     2,     0,     0,     1,     1,     1,
    1,     1,     1,     0,     0,     2,     2,     2,     2,     2,
    2,     0,     0,     2,     2,     2,     2,     1,     1,     0,
    0,     3,     3,     3,     3,     2,     2,     0,     0,     3,
    3,     3,     3,     1,     1,     0,     0,     4,     4,     4,
    4,     2,     2,     0,     0,     4,     4,     4,     4,     1,
    1,     0,     0,     5,     5,     5,     5,     2,     2,     0,
    0,     5,     5,     5,     5,     1,     1,     0,     0,     6,
    6,     6,     6,     2,     2,     0,     0,     6,     6,     6,
    6,     1,     1,     0,     0,     7,     7,     7,     7,     2,
    2,     0,     0,     7,     7,     7,     7,     1,     1,     0,
    0,     8,     8,     8,     8,     2,     2,     0,     0,     8,
    8,     8,     8,     1,     1,     0,     0,     9,     9,     9,
    9,     2,     2,     0,     0,     9,     9,     9,     9,     1,
    1,     0,     0,    10,    10,    10,    10,     2,     2,     0,
    0,    10,    10,    10,    10,     1,     1,     0,     0,    11,
   11,    11,    11,     2,     2,     0,     0,    11,    11,    11,
   11,     1,     1,     0,     0,    12,    12,    12,    12,     2,
    2,     0,     0,    12,    12,    12,    12,     1,     1,     0,
    0,    13,    13,    13,    13,     2,     2,     0,     0,    13,
   13,    13,    13,     1,     1,     0,     0,    14,    14,    14,
   14,     2,     2,     0,     0,    14,    14,    14,    14,     1,
    1,     0,     0,    15,    15,    15,    15,     2,     2,     0,
    0,    15,    15,    15,    15,     1,     1,     0,     0,    16,
   16,    16,    16,     2,     2,     0,     0,    16,    16,    16,
   16,     1,     1,     0,     0,    17,    17,    17,    17,     2,
    2,     0,     0,    17,    17,    17,    17,     1,     1,     0,
    0,    18,    18,    18,    18,     2,     2,     0,     0,    18,
   18,    18,    18,     1,     1,     0,     0,    19,    19,    19,
   19,     2,     2,     0,     0,    19,    19,    19,    19,     1,
    1,     0,     0,    20,    20,    20,    20,     2,     2,     0,
    0,    20,    20,    20,    20,     1,     1,     0,     0,    21,
   21,    21,    21,     2,     2,     0,     0,    21,    21,    21,
   21,     1,     1,     0,     0,    22,    22,    22,    22,     2,
    2,     0,     0,    22,    22,    22,    22,     1,     1,     0,
    0,    23,    23,    23,    23,     2,     2,     0,     0,    23,
   23,    23,    23,     1,     1,     0,     0,    24,    24,    24,
   24,     2,     2,     0,     0,    24,    24,    24,    24,     1,
    1,     0,     0,    25,    25,    25,    25,     2,     2,     0,
    0,    25,    25,    25,    25,     1,     1,     0,     0,    26,
   26,    26,    26,     2,     2,     0,     0,    26,    26,    26,
   26,     1,     1,     0,     0,    27,    27,    27,    27,     2,
    2,     0,     0,    27,    27,    27,    27,     1,     1,     0,
    0,    28,    28,    28,    28,     2,     2,     0,     0,    28,
   28,    28,    28,     1,     1,     0,     0,    29,    29,    29,
   29,     2,     2,     0,     0,    29,    29,    29,    29,     1,
    1,     0,     0,    30,    30,    30,    30,     2,     2,     0,
    0,    30,    30,    30,    30,     1,     1,     0,     0,    31,
   31,    31,    31,     2,     2,     0,     0,    31,    31,    31,
   31,     1,     1,     0,     0,    32,    32,    32,    32,     2,
    2,     0,     0,    32,    32,    32,    32,     1,     1,     0,
    0,    33,    33,    33,    33,     2,     2,     0,     0,    33,
   33,    33,    33,     1,     1,     0,     0,    34,    34,    34,
   34,     2,     2,     0,     0,    34,    34,    34,    34,     1,
    1,     0,     0,    35,    35,    35,    35,     2,     2,     0,
    0,    35,    35,    35,    35,     1,     1,     0,     0,    36,
   36,    36,    36,     2,     2,     0,     0,    36,    36,    36,
   36,     1,     1,     0,     0,    37,    37,    37,    37,     2,
    2,     0,     0,    37,    37,    37,    37,     1,     1,     0,
    0,    68,    68,    68,    68,     1,     1,     0,     0,    67,
   67,    67,    67,     0,     0,     0,     0,    66,    66,    66,
   66,     0,     0,     0,     0,    65,    65,    65,    65,     0,
    0,     0,     0,    64,    64,    64,    64,     0,     0,     0,
    0,    63,    63,    63,    63,     0,     0,     0,     0,    62,
   62,    62,    62,     0,     0,     0,     0,    61,    61,    61,
   61,     0,     0,     0,     0,    60,    60,    60,    60,     0,
    0,     0,     0,    59,    59,    59,    59,     0,     0,     0,
    0,    58,    58,    58,    58,     0,     0,     0,     0,    57,
   57,    57,    57,     0,     0,     0,     0,    56,    56,    56,
   56,     0,     0,     0,     0,    55,    55,    55,    55,     0,
    0,     0,     0,    54,    54,    54,    54,     0,     0,     0,
    0,    53,    53,    53,    53,     0,     0,     0,     0,    52,
   52,    52,    52,     0,     0,     0,     0,    51,    51,    51,
   51,     0,     0,     0,     0,    50,    50,    50,    50,     0,
    0,     0,     0,    49,    49,    49,    49,     0,     0,     0,
    0,    48,    48,    48,    48,     0,     0,     0,     0,    47,
   47,    47,    47,     0,     0,     0,     0,    46,    46,    46,
   46,     0,     0,     0,     0,    45,    45,    45,    45,     0,
    0,     0,     0,    44,    44,    44,    44,     0,     0,     0,
    0,    43,    43,    43,    43,     0,     0,     0,     0,    42,
   42,    42,    42,     0,     0,     0,     0,    41,    41,    41,
   41,     0,     0,     0,     0,    40,    40,    40,    40,     0,
    0,     0,     0,    39,    39,    39,    39,     0,     0,     0,
    0,    38,    38,    38,    38,     0,     0,     0,     0,    38,
   38,    38,    38,     2,     2,     0,     0,    39,    39,    39,
   39,     2,     2,     0,     0,    39,    39,    39,    39,     1,
    1,     0,     0,    40,    40,    40,    40,     2,     2,     0,
    0,    40,    40,    40,    40,     1,     1,     0,     0,    41,
   41,    41,    41,     2,     2,     0,     0,    41,    41,    41,
   41,     1,     1,     0,     0,    42,    42,    42,    42,     2,
    2,     0,     0,    42,    42,    42,    42,     1,     1,     0,
    0,    43,    43,    43,    43,     2,     2,     0,     0,    43,
   43,    43,    43,     1,     1,     0,     0,    44,    44,    44,
   44,     2,     2,     0,     0,    44,    44,    44,    44,     1,
    1,     0,     0,    45,    45,    45,    45,     2,     2,     0,
    0,    45,    45,    45,    45,     1,     1,     0,     0,    46,
   46,    46,    46,     2,     2,     0,     0,    46,    46,    46,
   46,     1,     1,     0,     0,    47,    47,    47,    47,     2,
    2,     0,     0,    47,    47,    47,    47,     1,     1,     0,
    0,    48,    48,    48,    48,     2,     2,     0,     0,    48,
   48,    48,    48,     1,     1,     0,     0,    49,    49,    49,
   49,     2,     2,     0,     0,    49,    49,    49,    49,     1,
    1,     0,     0,    50,    50,    50,    50,     2,     2,     0,
    0,    50,    50,    50,    50,     1,     1,     0,     0,    51,
   51,    51,    51,     2,     2,     0,     0,    51,    51,    51,
   51,     1,     1,     0,     0,    52,    52,    52,    52,     2,
    2,     0,     0,    52,    52,    52,    52,     1,     1,     0,
    0,    53,    53,    53,    53,     2,     2,     0,     0,    53,
   53,    53,    53,     1,     1,     0,     0,    54,    54,    54,
   54,     2,     2,     0,     0,    54,    54,    54,    54,     1,
    1,     0,     0,    55,    55,    55,    55,     2,     2,     0,
    0,    55,    55,    55,    55,     1,     1,     0,     0,    56,
   56,    56,    56,     2,     2,     0,     0,    56,    56,    56,
   56,     1,     1,     0,     0,    57,    57,    57,    57,     2,
    2,     0,     0,    57,    57,    57,    57,     1,     1,     0,
    0,    58,    58,    58,    58,     2,     2,     0,     0,    58,
   58,    58,    58,     1,     1,     0,     0,    59,    59,    59,
   59,     2,     2,     0,     0,    59,    59,    59,    59,     1,
    1,     0,     0,    60,    60,    60,    60,     2,     2,     0,
    0,    60,    60,    60,    60,     1,     1,     0,     0,    61,
   61,    61,    61,     2,     2,     0,     0,    61,    61,    61,
   61,     1,     1,     0,     0,    62,    62,    62,    62,     2,
    2,     0,     0,    62,    62,    62,    62,     1,     1,     0,
    0,    63,    63,    63,    63,     2,     2,     0,     0,    63,
   63,    63,    63,     1,     1,     0,     0,    64,    64,    64,
   64,     2,     2,     0,     0,    64,    64,    64,    64,     1,
    1,     0,     0,    65,    65,    65,    65,     2,     2,     0,
    0,    65,    65,    65,    65,     1,     1,     0,     0,    66,
   66,    66,    66,     2,     2,     0,     0,    66,    66,    66,
   66,     1,     1,     0,     0,    67,    67,    67,    67,     2,
    2,     0,     0,    67,    67,    67,    67,     1,     1,     0,
    0,    68,    68,    68,    68,     2,     2,     0,     0,    68,
   68,    68,    68,     0,     0,     0};

/* Vector for locked state flags.  */
static const unsigned char rm7000_fdiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm7000_fdiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm7000_idiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
    0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     5};

/* Comb vector for state transitions.  */
static const unsigned char rm7000_idiv_transitions[] ATTRIBUTE_UNUSED = {
    0,    41,     9,     6,     1,     0,     1,     2,     3,     4,
    5,     2,     3,     4,     5,     6,     6,     7,     8,     9,
   10,     7,     8,     0,    10,    11,    11,    12,    13,    14,
   15,    12,    13,    14,    15,    16,    16,    17,    18,    19,
   20,    17,    18,    19,    20,    21,    21,    22,    23,    24,
   25,    22,    23,    24,    25,    26,    26,    27,    28,    29,
   30,    27,    28,    29,    30,    31,    31,    32,    33,    34,
   35,    32,    33,    34,    35,    36,    36,    37,    38,    39,
   40,    37,    38,    39,    40,    41,    41,    42,    43,    44,
   45,    42,    43,    44,    45,    46,    46,    47,    48,    49,
   50,    47,    48,    49,    50,    51,    51,    52,    53,    54,
   55,    52,    53,    54,    55,    56,    56,    57,    58,    59,
   60,    57,    58,    59,    60,    61,    61,    62,    63,    64,
   65,    62,    63,    64,    65,    66,    66,    67,    68,    69,
   69,    67,    68,     1};

/* Check vector for state transitions.  */
static const unsigned char rm7000_idiv_check[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   69,    66,    67,    68};

/* Base vector for state transitions.  */
static const unsigned char rm7000_idiv_base[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char rm7000_idiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     1,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char rm7000_idiv_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   69,    66,    67,    68};

/* Base vector for state insn alternatives.  */
static const unsigned char rm7000_idiv_base_state_alts[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm7000_idiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     8,     8,     8,
    8,     0,     0,     7,     7,     7,     7,     0,     0,     6,
    6,     6,     6,     0,     0,     5,     5,     5,     5,     0,
    0,     4,     4,     4,     4,     0,     0,     3,     3,     3,
    3,     0,     0,     2,     2,     2,     2,     0,     0,     1,
    1,     1,     1,     0,     0,    68,    68,    68,    68,     0,
    0,    67,    67,    67,    67,     0,     0,    66,    66,    66,
   66,     0,     0,    65,    65,    65,    65,     0,     0,    64,
   64,    64,    64,     0,     0,    63,    63,    63,    63,     0,
    0,    62,    62,    62,    62,     0,     0,    61,    61,    61,
   61,     0,     0,    60,    60,    60,    60,     0,     0,    59,
   59,    59,    59,     0,     0,    58,    58,    58,    58,     0,
    0,    57,    57,    57,    57,     0,     0,    56,    56,    56,
   56,     0,     0,    55,    55,    55,    55,     0,     0,    54,
   54,    54,    54,     0,     0,    53,    53,    53,    53,     0,
    0,    52,    52,    52,    52,     0,     0,    51,    51,    51,
   51,     0,     0,    50,    50,    50,    50,     0,     0,    49,
   49,    49,    49,     0,     0,    48,    48,    48,    48,     0,
    0,    47,    47,    47,    47,     0,     0,    46,    46,    46,
   46,     0,     0,    45,    45,    45,    45,     0,     0,    44,
   44,    44,    44,     0,     0,    43,    43,    43,    43,     0,
    0,    42,    42,    42,    42,     0,     0,    41,    41,    41,
   41,     0,     0,    40,    40,    40,    40,     0,     0,    39,
   39,    39,    39,     0,     0,    38,    38,    38,    38,     0,
    0,    37,    37,    37,    37,     0,     0,    36,    36,    36,
   36,     0,     0,    35,    35,    35,    35,     0,     0,    34,
   34,    34,    34,     0,     0,    33,    33,    33,    33,     0,
    0,    32,    32,    32,    32,     0,     0,    31,    31,    31,
   31,     0,     0,    30,    30,    30,    30,     0,     0,    29,
   29,    29,    29,     0,     0,    28,    28,    28,    28,     0,
    0,    27,    27,    27,    27,     0,     0,    26,    26,    26,
   26,     0,     0,    25,    25,    25,    25,     0,     0,    24,
   24,    24,    24,     0,     0,    23,    23,    23,    23,     0,
    0,    22,    22,    22,    22,     0,     0,    21,    21,    21,
   21,     0,     0,    20,    20,    20,    20,     0,     0,    19,
   19,    19,    19,     0,     0,    18,    18,    18,    18,     0,
    0,    17,    17,    17,    17,     0,     0,    16,    16,    16,
   16,     0,     0,    15,    15,    15,    15,     0,     0,    14,
   14,    14,    14,     0,     0,    13,    13,    13,    13,     0,
    0,    12,    12,    12,    12,     0,     0,    11,    11,    11,
   11,     0,     0,    10,    10,    10,    10,     0,     0,     9,
    9,     9,     9,     0};

/* Vector for locked state flags.  */
static const unsigned char rm7000_idiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm7000_idiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm9k_main_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     1,     2,     2,
    3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
    3,     4,     3,     3,     2,     5,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     6};

/* Vector for state transitions.  */
static const unsigned char rm9k_main_transitions[] ATTRIBUTE_UNUSED = {
    0,    23,    19,     4,     2,     1,     0,     1,    24,    24,
   24,    24,    24,     0,     2,    18,    14,    24,    24,    24,
    3,     3,    13,     9,    24,    24,    24,     4,     4,     5,
    7,    24,    24,    24,     0,     5,    24,     6,    24,    24,
   24,     0,     6,    24,     1,    24,    24,    24,     0,     7,
    6,     8,    24,    24,    24,     0,     8,     1,    24,    24,
   24,    24,     0,     9,    12,    10,    24,    24,    24,     4,
   10,    11,    24,    24,    24,    24,     4,    11,    24,    24,
   24,    24,    24,     4,    12,    24,    11,    24,    24,    24,
    4,    13,    24,    12,    24,    24,    24,     4,    14,    17,
   15,    24,    24,    24,     3,    15,    16,    24,    24,    24,
   24,     3,    16,    24,    24,    24,    24,    24,     3,    17,
   24,    16,    24,    24,    24,     3,    18,    24,    17,    24,
   24,    24,     3,    19,    22,    20,     7,    14,    24,     0,
   20,    21,    24,     8,    15,    24,     0,    21,    24,    24,
    1,    16,    24,     0,    22,    24,    21,     6,    17,    24,
    0,    23,    24,    22,     5,    18,    24,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm9k_main_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     2,     1,     1,     1,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     1,     2,     0,     0,     0,
    1,     1,     1,     2,     0,     0,     0,     1,     1,     1,
    2,     0,     0,     0,     1,     1,     0,     2,     0,     0,
    0,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    1,     1,     0,     0,     0,     1,     1,     1,     0,     0,
    0,     0,     1,     1,     1,     1,     0,     0,     0,     1,
    1,     1,     0,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     2,     0,     0,     0,     1,     1,     1,
    1,     0,     0,     0,     1,     1,     1,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     1,     1,     1,     1,     0,     1,
    1,     1,     0,     1,     1,     0,     1,     1,     0,     0,
    1,     1,     0,     1,     1,     0,     1,     1,     1,     0,
    1,     1,     0,     2,     1,     1,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm9k_main_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,    85,    64,    63,     0,   168,     1,    80,    69,
   65,    21,     0,    84,     5,    80,    10,   128,   106,     5,
  168,    18,   160,    74,   128,    63,     1,   252,    23,   240,
   79,   193,    63,     0,     4,     4,    16,    80,    65,     1,
    4,     4};

/* Vector for locked state flags.  */
static const unsigned char rm9k_main_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm9k_main_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm9k_imul_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     2,     3,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     4};

/* Vector for state transitions.  */
static const unsigned char rm9k_imul_transitions[] ATTRIBUTE_UNUSED = {
    0,    64,    33,     1,     0,     1,    71,    71,    71,     2,
    2,    71,    71,    71,     3,     3,    71,    71,    71,     4,
    4,    71,    71,    71,     5,     5,    71,    71,    71,     6,
    6,    71,    71,    71,     7,     7,    71,    71,    71,     8,
    8,    71,    71,    71,     9,     9,    71,    71,    71,    10,
   10,    71,    71,    71,    11,    11,    71,    71,    71,    12,
   12,    71,    71,    71,    13,    13,    71,    71,    71,    14,
   14,    71,    71,    71,    15,    15,    71,    71,    71,    16,
   16,    71,    71,    71,    17,    17,    71,    71,    71,    18,
   18,    71,    71,    71,    19,    19,    71,    71,    71,    20,
   20,    71,    71,    71,    21,    21,    71,    71,    71,    22,
   22,    71,    71,    71,    23,    23,    71,    71,    71,    24,
   24,    71,    71,    71,    25,    25,    71,    71,    71,    26,
   26,    71,    71,    71,    27,    27,    71,    71,    71,    28,
   28,    71,    71,    71,    29,    29,    71,    71,    71,    30,
   30,    71,    71,    71,    31,    31,    71,    71,    71,    32,
   32,    71,    71,    71,    33,    33,    71,    71,    71,    34,
   34,    71,    71,    71,    35,    35,    71,    71,    71,    36,
   36,    71,    71,    71,    37,    37,    71,    71,    71,    38,
   38,    71,    71,    71,    39,    39,    71,    71,    71,    40,
   40,    71,    71,    71,    41,    41,    71,    71,    71,    42,
   42,    71,    71,    71,    43,    43,    71,    71,    71,    44,
   44,    71,    71,    71,    45,    45,    71,    71,    71,    46,
   46,    71,    71,    71,    47,    47,    71,    71,    71,    48,
   48,    71,    71,    71,    49,    49,    71,    71,    71,    50,
   50,    71,    71,    71,    51,    51,    71,    71,    71,    52,
   52,    71,    71,    71,    53,    53,    71,    71,    71,    54,
   54,    71,    71,    71,    55,    55,    71,    71,    71,    56,
   56,    71,    71,    71,    57,    57,    71,    71,    71,    58,
   58,    71,    71,    71,    59,    59,    71,    71,    71,    60,
   60,    71,    71,    71,    61,    61,    71,    71,    71,    62,
   62,    71,    71,    71,    63,    63,    71,    71,    71,    64,
   64,    71,    71,    71,    65,    65,    71,    71,    71,    66,
   66,    71,    71,    71,    67,    67,    71,    71,    71,    68,
   68,    71,    71,    71,    69,    69,    71,    71,    71,    70,
   70,    71,    71,    71,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm9k_imul_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm9k_imul_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,    70,    70,    70,     0,
    0,    69,    69,    69,     0,     0,    68,    68,    68,     0,
    0,    67,    67,    67,     0,     0,    66,    66,    66,     0,
    0,    65,    65,    65,     0,     0,    64,    64,    64,     0,
    0,    63,    63,    63,     0,     0,    62,    62,    62,     0,
    0,    61,    61,    61,     0,     0,    60,    60,    60,     0,
    0,    59,    59,    59,     0,     0,    58,    58,    58,     0,
    0,    57,    57,    57,     0,     0,    56,    56,    56,     0,
    0,    55,    55,    55,     0,     0,    54,    54,    54,     0,
    0,    53,    53,    53,     0,     0,    52,    52,    52,     0,
    0,    51,    51,    51,     0,     0,    50,    50,    50,     0,
    0,    49,    49,    49,     0,     0,    48,    48,    48,     0,
    0,    47,    47,    47,     0,     0,    46,    46,    46,     0,
    0,    45,    45,    45,     0,     0,    44,    44,    44,     0,
    0,    43,    43,    43,     0,     0,    42,    42,    42,     0,
    0,    41,    41,    41,     0,     0,    40,    40,    40,     0,
    0,    39,    39,    39,     0,     0,    38,    38,    38,     0,
    0,    37,    37,    37,     0,     0,    36,    36,    36,     0,
    0,    35,    35,    35,     0,     0,    34,    34,    34,     0,
    0,    33,    33,    33,     0,     0,    32,    32,    32,     0,
    0,    31,    31,    31,     0,     0,    30,    30,    30,     0,
    0,    29,    29,    29,     0,     0,    28,    28,    28,     0,
    0,    27,    27,    27,     0,     0,    26,    26,    26,     0,
    0,    25,    25,    25,     0,     0,    24,    24,    24,     0,
    0,    23,    23,    23,     0,     0,    22,    22,    22,     0,
    0,    21,    21,    21,     0,     0,    20,    20,    20,     0,
    0,    19,    19,    19,     0,     0,    18,    18,    18,     0,
    0,    17,    17,    17,     0,     0,    16,    16,    16,     0,
    0,    15,    15,    15,     0,     0,    14,    14,    14,     0,
    0,    13,    13,    13,     0,     0,    12,    12,    12,     0,
    0,    11,    11,    11,     0,     0,    10,    10,    10,     0,
    0,     9,     9,     9,     0,     0,     8,     8,     8,     0,
    0,     7,     7,     7,     0,     0,     6,     6,     6,     0,
    0,     5,     5,     5,     0,     0,     4,     4,     4,     0,
    0,     3,     3,     3,     0,     0,     2,     2,     2,     0,
    0,     1,     1,     1,     0};

/* Vector for locked state flags.  */
static const unsigned char rm9k_imul_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm9k_imul_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm9k_fdiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     1,     2,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     3};

/* Vector for state transitions.  */
static const unsigned char rm9k_fdiv_transitions[] ATTRIBUTE_UNUSED = {
    0,    16,     1,     0,     1,    38,    38,     2,     2,    38,
   38,     3,     3,    38,    38,     4,     4,    38,    38,     5,
    5,    38,    38,     6,     6,    38,    38,     7,     7,    38,
   38,     8,     8,    38,    38,     9,     9,    38,    38,    10,
   10,    38,    38,    11,    11,    38,    38,    12,    12,    38,
   38,    13,    13,    38,    38,    14,    14,    38,    38,    15,
   15,    38,    38,    16,    16,    38,    38,    17,    17,    38,
   38,    18,    18,    38,    38,    19,    19,    38,    38,    20,
   20,    38,    38,    21,    21,    38,    38,    22,    22,    38,
   38,    23,    23,    38,    38,    24,    24,    38,    38,    25,
   25,    38,    38,    26,    26,    38,    38,    27,    27,    38,
   38,    28,    28,    38,    38,    29,    29,    38,    38,    30,
   30,    38,    38,    31,    31,    38,    38,    32,    32,    38,
   38,    33,    33,    38,    38,    34,    34,    38,    38,    35,
   35,    38,    38,    36,    36,    38,    38,    37,    37,    38,
   38,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm9k_fdiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm9k_fdiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,    37,    37,     0,     0,    36,
   36,     0,     0,    35,    35,     0,     0,    34,    34,     0,
    0,    33,    33,     0,     0,    32,    32,     0,     0,    31,
   31,     0,     0,    30,    30,     0,     0,    29,    29,     0,
    0,    28,    28,     0,     0,    27,    27,     0,     0,    26,
   26,     0,     0,    25,    25,     0,     0,    24,    24,     0,
    0,    23,    23,     0,     0,    22,    22,     0,     0,    21,
   21,     0,     0,    20,    20,     0,     0,    19,    19,     0,
    0,    18,    18,     0,     0,    17,    17,     0,     0,    16,
   16,     0,     0,    15,    15,     0,     0,    14,    14,     0,
    0,    13,    13,     0,     0,    12,    12,     0,     0,    11,
   11,     0,     0,    10,    10,     0,     0,     9,     9,     0,
    0,     8,     8,     0,     0,     7,     7,     0,     0,     6,
    6,     0,     0,     5,     5,     0,     0,     4,     4,     0,
    0,     3,     3,     0,     0,     2,     2,     0,     0,     1,
    1,     0};

/* Vector for locked state flags.  */
static const unsigned char rm9k_fdiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm9k_fdiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cpu_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     2,     2,     2,
    3,     4,     2,     4,     3,     2,     2,     2,     2,     2,
    2,     2,     5,     5,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     1,     2,     6};

/* Vector for state transitions.  */
static const unsigned char sr71_cpu_transitions[] ATTRIBUTE_UNUSED = {
    0,    19,    12,   158,   155,     1,     0,     1,   160,    13,
  152,   154,   153,     2,     2,   160,    64,   152,   151,     3,
    0,     3,   160,    65,   160,   160,   160,     4,     4,   160,
   75,   150,    10,     5,     0,     5,   160,     6,   160,   160,
  160,     2,     6,   160,     7,   160,   160,   160,     2,     7,
  160,     8,   160,   160,   160,     2,     8,   160,     9,   160,
  160,   160,     2,     9,   160,   160,   160,   160,   160,     2,
   10,   160,    76,   160,   160,   160,    11,    11,   160,    73,
  149,   148,   147,    12,    12,   160,    45,   145,    42,    13,
    0,    13,   160,    39,    31,    23,    14,     2,    14,   160,
   20,   160,   160,   160,    15,    15,   160,    16,   160,   160,
  160,     0,    16,   160,    17,   160,   160,   160,     0,    17,
  160,    18,   160,   160,   160,     0,    18,   160,    19,   160,
  160,   160,     0,    19,   160,   160,   160,   160,   160,     0,
   20,   160,    21,   160,   160,   160,    15,    21,   160,    22,
  160,   160,   160,    15,    22,   160,   160,   160,   160,   160,
   15,    23,   160,    29,   160,   160,   160,    24,    24,   160,
   25,   160,   160,   160,    12,    25,   160,    26,   160,   160,
  160,    12,    26,   160,    27,   160,   160,   160,    12,    27,
  160,    28,   160,   160,   160,    12,    28,   160,   160,   160,
  160,   160,    12,    29,   160,    30,   160,   160,   160,    24,
   30,   160,   160,   160,   160,   160,    24,    31,   160,    32,
  160,   160,   160,    34,    32,   160,    33,   160,   160,   160,
   34,    33,   160,   160,   160,   160,   160,    34,    34,   160,
   35,   160,   160,   160,    13,    35,   160,    36,   160,   160,
  160,    13,    36,   160,    37,   160,   160,   160,    13,    37,
  160,    38,   160,   160,   160,    13,    38,   160,   160,   160,
  160,   160,    13,    39,   160,    40,    32,    29,    20,     2,
   40,   160,    41,    33,    30,    21,     2,    41,   160,   160,
  160,   160,    22,     2,    42,   160,    46,   144,    43,    23,
   11,    43,   160,    47,   160,   160,   160,    44,    44,   160,
  140,   160,   160,   160,    45,    45,   160,   138,    55,    46,
   39,     0,    46,   160,    54,    48,    47,    29,    11,    47,
  160,   160,   160,   160,   160,    44,    48,   160,   160,   160,
  160,   160,    49,    49,   160,    50,   160,   160,   160,    39,
   50,   160,    51,   160,   160,   160,    39,    51,   160,    52,
  160,   160,   160,    39,    52,   160,    53,   160,   160,   160,
   39,    53,   160,   160,   160,   160,   160,    39,    54,   160,
  160,   160,   160,    30,    11,    55,   160,   137,   131,    48,
   32,    56,    56,   160,    94,   130,    62,    57,    13,    57,
  160,    58,   160,   160,   160,     6,    58,   160,    59,   160,
  160,   160,     6,    59,   160,    60,   160,   160,   160,     6,
   60,   160,    61,   160,   160,   160,     6,    61,   160,   160,
  160,   160,   160,     6,    62,   160,    95,   160,   160,   160,
   63,    63,   160,   111,   160,   160,   160,    64,    64,   160,
  127,    31,    69,    65,     0,    65,   160,    66,   160,   160,
  160,     4,    66,   160,    67,   160,   160,   160,     4,    67,
  160,    68,   160,   160,   160,     4,    68,   160,   160,   160,
  160,   160,     4,    69,   160,   125,   160,   160,   160,    70,
   70,   160,    89,   124,    72,    71,    12,    71,   160,    63,
  160,   160,   160,    64,    72,   160,    90,   160,   160,   160,
   73,    73,   160,   121,   118,    88,    74,    12,    74,   160,
   85,   160,   160,   160,    75,    75,   160,    82,    79,    76,
    6,     0,    76,   160,    77,   160,   160,   160,    11,    77,
  160,    78,   160,   160,   160,    11,    78,   160,   160,   160,
  160,   160,    11,    79,   160,    80,   160,   160,   160,    56,
   80,   160,    81,   160,   160,   160,    56,    81,   160,   160,
  160,   160,   160,    56,    82,   160,    83,    80,    77,     7,
    0,    83,   160,    84,    81,    78,     8,     0,    84,   160,
  160,   160,   160,     9,     0,    85,   160,    86,   160,   160,
  160,    75,    86,   160,    87,   160,   160,   160,    75,    87,
  160,   160,   160,   160,   160,    75,    88,   160,   116,   160,
  160,   160,    89,    89,   160,   110,    93,    90,    63,    12,
   90,   160,    91,   160,   160,   160,    73,    91,   160,    92,
  160,   160,   160,    73,    92,   160,   160,   160,   160,   160,
   73,    93,   160,   108,   160,   160,   160,    94,    94,   160,
  105,    98,    95,    58,    13,    95,   160,    96,   160,   160,
  160,    63,    96,   160,    97,   160,   160,   160,    63,    97,
  160,   160,   160,   160,   160,    63,    98,   160,   103,   160,
  160,   160,    99,    99,   160,   100,   160,   160,   160,    65,
  100,   160,   101,   160,   160,   160,    65,   101,   160,   102,
  160,   160,   160,    65,   102,   160,   160,   160,   160,   160,
   65,   103,   160,   104,   160,   160,   160,    99,   104,   160,
  160,   160,   160,   160,    99,   105,   160,   106,   103,    96,
   59,    13,   106,   160,   107,   104,    97,    60,    13,   107,
  160,   160,   160,   160,    61,    13,   108,   160,   109,   160,
  160,   160,    94,   109,   160,   160,   160,   160,   160,    94,
  110,   160,   114,   108,    91,   111,    12,   111,   160,   112,
  160,   160,   160,    64,   112,   160,   113,   160,   160,   160,
   64,   113,   160,   160,   160,   160,   160,    64,   114,   160,
  115,   109,    92,   112,    12,   115,   160,   160,   160,   160,
  113,    12,   116,   160,   117,   160,   160,   160,    89,   117,
  160,   160,   160,   160,   160,    89,   118,   160,   119,   160,
  160,   160,    35,   119,   160,   120,   160,   160,   160,    35,
  120,   160,   160,   160,   160,   160,    35,   121,   160,   122,
  119,   116,    85,    12,   122,   160,   123,   120,   117,    86,
   12,   123,   160,   160,   160,   160,    87,    12,   124,   160,
   93,   160,   160,   160,    94,   125,   160,   126,   160,   160,
  160,    70,   126,   160,   160,   160,   160,   160,    70,   127,
  160,   128,    32,   125,    66,     0,   128,   160,   129,    33,
  126,    67,     0,   129,   160,   160,   160,   160,    68,     0,
  130,   160,    98,   160,   160,   160,    99,   131,   160,   160,
  160,   160,   160,   132,   132,   160,   133,   160,   160,   160,
   20,   133,   160,   134,   160,   160,   160,    20,   134,   160,
  135,   160,   160,   160,    20,   135,   160,   136,   160,   160,
  160,    20,   136,   160,   160,   160,   160,   160,    20,   137,
  160,   160,   160,   160,    33,    56,   138,   160,   139,   137,
   54,    40,     0,   139,   160,   160,   160,   160,    41,     0,
  140,   160,   141,   160,   160,   160,    45,   141,   160,   142,
  160,   160,   160,    45,   142,   160,   143,   160,   160,   160,
   45,   143,   160,   160,   160,   160,   160,    45,   144,   160,
   48,   160,   160,   160,    49,   145,   160,    55,   146,   144,
   31,    56,   146,   160,   131,   160,   160,   160,   132,   147,
  160,    74,   160,   160,   160,    75,   148,   160,    88,   160,
  160,   160,    89,   149,   160,   118,   160,   160,   160,    35,
  150,   160,    79,   160,   160,   160,    56,   151,   160,    69,
  160,   160,   160,    70,   152,   160,    31,   160,   160,   160,
   34,   153,   160,    14,   160,   160,   160,    15,   154,   160,
   23,   160,   160,   160,    24,   155,   160,    42,   157,   156,
  154,    11,   156,   160,    43,   160,   160,   160,    44,   157,
  160,   144,   160,   160,   160,    49,   158,   160,   145,   159,
  157,   152,    56,   159,   160,   146,   160,   160,   160,   132,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cpu_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     4,    64,    32,     2,     1,     1,     0,     4,
   32,    16,     1,     1,     1,     0,     4,    32,    16,     1,
    1,     1,     0,     4,     0,     0,     0,     1,     1,     0,
    4,    32,    16,     1,     1,     1,     0,     4,     0,     0,
    0,     1,     1,     0,     3,     0,     0,     0,     1,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     4,
   32,    16,     1,     1,     1,     0,     3,    48,    24,     2,
    1,     1,     0,     3,    24,    12,     1,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     4,     0,     0,
    0,     1,     1,     0,     3,     0,     0,     0,     1,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     2,     0,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     0,     2,     0,     0,     0,     1,     1,     0,
    4,     0,     0,     0,     1,     1,     0,     3,     0,     0,
    0,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    4,     0,     0,     0,     1,     1,     0,     3,     0,     0,
    0,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     2,    16,     8,     1,     1,
    1,     0,     1,     8,     4,     1,     1,     1,     0,     0,
    0,     0,     1,     1,     1,     0,     2,    12,     6,     1,
    1,     1,     0,     1,     0,     0,     0,     1,     1,     0,
    4,     0,     0,     0,     1,     1,     0,     2,    32,    16,
    2,     1,     1,     0,     1,     6,     3,     1,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     4,     0,     0,     0,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     1,     1,     1,     0,     1,     3,     3,
    1,     1,     1,     0,     4,    16,    16,     1,     1,     1,
    0,     4,     0,     0,     0,     1,     1,     0,     3,     0,
    0,     0,     1,     1,     0,     2,     0,     0,     0,     1,
    1,     0,     1,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     3,     0,     0,     0,
    1,     1,     0,     3,     0,     0,     0,     1,     1,     0,
    3,    24,    12,     1,     1,     1,     0,     3,     0,     0,
    0,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     2,     0,     0,     0,     1,
    1,     0,     4,    32,    16,     1,     1,     1,     0,     4,
    0,     0,     0,     1,     1,     0,     3,     0,     0,     0,
    1,     1,     0,     3,    24,    12,     1,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     3,    24,    12,
    1,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     2,     0,     0,     0,     1,
    1,     0,     1,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     2,    16,     8,     1,
    1,     1,     0,     1,     8,     4,     1,     1,     1,     0,
    0,     0,     0,     1,     1,     1,     0,     2,     0,     0,
    0,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     0,     3,    24,    12,     1,     1,
    1,     0,     2,     0,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     0,     2,     0,     0,     0,     1,     1,     0,
    3,    12,    12,     1,     1,     1,     0,     2,     0,     0,
    0,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     0,     3,     0,     0,     0,     1,
    1,     0,     2,     0,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     0,     1,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     1,     1,     0,     2,     8,     8,
    1,     1,     1,     0,     1,     4,     4,     1,     1,     1,
    0,     0,     0,     0,     1,     1,     1,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     2,    16,     8,     1,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    1,     8,     4,     1,     1,     1,     0,     0,     0,     0,
    1,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     0,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     1,     1,     0,     2,
   16,     8,     1,     1,     1,     0,     1,     8,     4,     1,
    1,     1,     0,     0,     0,     0,     1,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     1,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     2,    16,     8,     1,     1,     1,     0,     1,     8,
    4,     1,     1,     1,     0,     0,     0,     0,     1,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     4,     0,     0,     0,
    1,     1,     0,     3,     0,     0,     0,     1,     1,     0,
    2,     0,     0,     0,     1,     1,     0,     1,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     1,     1,     1,     0,     1,    16,
    8,     2,     1,     1,     0,     0,     0,     0,     2,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    1,     0,     0,     0,     1,     1,     0,     2,     6,     6,
    1,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     4,     0,     0,     0,     1,     1,     0,     3,     0,
    0,     0,     1,     1,     0,     3,     0,     0,     0,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     3,
    0,     0,     0,     1,     1,     0,     3,     0,     0,     0,
    1,     1,     0,     4,     0,     0,     0,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     3,    18,     9,
    1,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     3,     9,
    9,     1,     1,     1,     0,     2,     0,     0,     0,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cpu_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,    32,     0,     0,     1,     0,     0,
    0,    32,    17,    16,     1,     0,     0,     0,    32,    17,
   16,     2,     1,    17,     0,    32,    17,    16,     2,     1,
   17,     0,    33,    17,    16,     3,     1,    17,     0,    32,
    0,     0,     1,     0,     0,     0,    32,     0,     0,     2,
    2,    34,     0,    16,    17,    16,     1,     1,    17,     0,
   16,    17,    16,     1,     1,    17,     0,    17,    17,    16,
    2,     2,    34,     0,    32,    34,    32,     2,    18,    34,
    0,    48,    34,    32,     2,     1,    17,     0,    32,    17,
   16,     2,     1,    17,     0,    32,    17,    16,     2,    17,
   17,     0,    48,    34,    32,     3,    18,    34,     0,    64,
   34,    32,     4,     2,    34,     0,    65,    34,    32,     3,
    1,    17,     0,    48,    17,    16,     3,     1,    17,     0,
   48,    17,    16,     3,    17,    17,     0,    32,     0,     0,
    2,     0,     0,     0,    33,    17,     0,     3,     0,     0,
    0,    48,    34,    32,     2,     1,    17,     0,    16,     0,
    0,     3,     0,     0,     0,    49,    34,    32,     4,    18,
   34,     0,    48,    17,    16,     3,     1,    17,     0,    48,
   17,    16,     3,     1,    17,     0,    49,    17,    16,     3,
   17,    16,     0,    64,     0,     0,     3,     0,     0,     0,
   48,    34,    32,     3,     2,    34,     0,    48,    34,    32,
    3,     2,    34,     0,    49,    34,    32,     3,     2,    34,
    0,    32,    17,    16,     1,     0,     0,     0,    32,    17,
   16,     2,     1,    17,     0,    32,    17,    16,     2,    17,
   17,     0,    48,    17,    16,     2,     0,     0,     0,    32,
   17,    16,     3,     1,    17,     0,    32,     0,     0,     2,
    1,    17,     0,    16,     0,     0,     3,     1,    17,     0,
   48,    17,    16,     3,    17,    17,     0,    64,    17,    16,
    4,     1,    17,     0,    65,    17,    16,     1,     0,     0,
    0,    16,     0,     0,     1,    17,    16,     0,    32,    17,
   16,     2,     1,    17,     0,    33,    17,    16,     3,     1,
   17,     0,    32,     0,     0,     3,     1,    17,     0,    48,
   17,    16,     3,    17,    17,     0,    64,    17,    16,     3,
    0,     0,     0,    48,    34,    32,     3,     2,    34,     0,
   49,    34,    32,     4,     3,    51,     0,    48,    34,    32,
    3,     2,    34,     0,    48,    34,    32,     3,    18,    34,
    0,    64,    51,    48,     4,    19,    51,     0,    48,     0,
    0,     3,     0,     0,     0,    49,    17,     0,     4,     1,
   17,     0,    65,    17,    16,     2,     0,     0,     0,    32,
   17,    16,     2,     1,    17,     0,    33,    17,    16,     2,
    0,     0,     0,    33,    17,     0,     3,     1,    17,     0,
   49,    17,    16,     4,     2,    34,     0,    64,    34,    32,
    4,    18,    34,     0,    32,     0,     0,     2,     0,     0,
    0,    33,    17,     0,     4,     1,    17,     0,    48,    17,
   16,     3,    17,    17,     0,    16,     0,     0,     1,     0,
    0,     0,    17,    17,     0,     4,     3,    51,     0,    65,
   68,    64,     3,     3,    51,     0,    48,    51,    48,     3,
    3,    51,     0,    48,    51,    48,     3,    19,    51,     0,
   65,    17,     0,     1,     0,     0,     0,    17,    17,     0,
    2,     1,    17,     0,    32,    17,    16,     2,     1,    17,
    0,    33,    17,    16,     4,     2,    34,     0,    64,     0,
    0,     4,     4,    68,     0,    32,    17,    16,     3,     1,
   17,     0,    64,    34,    32,     4,     1,    17,     0,    48,
   17,    16,     4,     2,    34,     0,    32,    34,    32,     3,
    2,    34,     0,    48,     0,     0,     3,     2,    34,     0,
   64,    34,    32,     4,     0,     0,     0,    64,    68,    64,
};

/* Vector for locked state flags.  */
static const unsigned char sr71_cpu_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cpu_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cpu1_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     2,     2,
    3,     3,     4,     3,     3,     4,     4,     5,     5,     5,
    5,     4,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     4,     6};

/* Vector for state transitions.  */
static const unsigned char sr71_cpu1_transitions[] ATTRIBUTE_UNUSED = {
    0,    79,     6,    77,     2,     1,     0,     1,    76,     7,
   74,    70,    80,     2,     2,    69,    15,    67,     3,    80,
    0,     3,    66,    16,     4,    80,    80,     0,     4,    65,
   17,    80,    80,    80,     5,     5,    64,    13,    62,    10,
   54,     6,     6,    53,    80,    51,    15,     7,     0,     7,
   50,    80,    48,     8,    80,     2,     8,    47,    80,     9,
   80,    80,     2,     9,    46,    80,    80,    80,    80,    10,
   10,    45,    25,    43,    11,    80,     6,    11,    42,    26,
   12,    80,    80,     6,    12,    41,    27,    80,    80,    80,
   13,    13,    40,    80,    38,    25,    14,     6,    14,    37,
   80,    35,    23,    80,    15,    15,    22,    80,    20,    16,
   80,     0,    16,    19,    80,    17,    80,    80,     0,    17,
   18,    80,    80,    80,    80,     5,    18,    80,    80,    80,
   80,    80,     5,    19,    80,    80,    18,    80,    80,     0,
   20,    21,    80,    80,    17,    80,     5,    21,    80,    80,
   80,    18,    80,     5,    22,    80,    80,    21,    19,    80,
    0,    23,    34,    80,    24,    80,    80,    15,    24,    33,
   80,    80,    80,    80,    25,    25,    32,    80,    30,    26,
   80,     6,    26,    29,    80,    27,    80,    80,     6,    27,
   28,    80,    80,    80,    80,    13,    28,    80,    80,    80,
   80,    80,    13,    29,    80,    80,    28,    80,    80,     6,
   30,    31,    80,    80,    27,    80,    13,    31,    80,    80,
   80,    28,    80,    13,    32,    80,    80,    31,    29,    80,
    6,    33,    80,    80,    80,    80,    80,    25,    34,    80,
   80,    33,    80,    80,    15,    35,    36,    80,    80,    24,
   80,    25,    36,    80,    80,    80,    33,    80,    25,    37,
   80,    80,    36,    34,    80,    15,    38,    39,    80,    80,
   30,    35,    13,    39,    80,    80,    80,    31,    36,    13,
   40,    80,    80,    39,    32,    37,     6,    41,    80,    28,
   80,    80,    80,    13,    42,    80,    29,    41,    80,    80,
    6,    43,    44,    30,    80,    12,    80,    13,    44,    80,
   31,    80,    41,    80,    13,    45,    80,    32,    44,    42,
   80,     6,    46,    80,    80,    80,    80,    80,    10,    47,
   80,    80,    46,    80,    80,     2,    48,    49,    80,    80,
    9,    80,    10,    49,    80,    80,    80,    46,    80,    10,
   50,    80,    80,    49,    47,    80,     2,    51,    52,    80,
   80,    20,    48,     5,    52,    80,    80,    80,    21,    49,
    5,    53,    80,    80,    52,    22,    50,     0,    54,    61,
   14,    59,    55,    80,    15,    55,    58,    23,    56,    80,
   80,    15,    56,    57,    24,    80,    80,    80,    25,    57,
   80,    33,    80,    80,    80,    25,    58,    80,    34,    57,
   80,    80,    15,    59,    60,    35,    80,    56,    80,    25,
   60,    80,    36,    80,    57,    80,    25,    61,    80,    37,
   60,    58,    80,    15,    62,    63,    38,    80,    43,    59,
   13,    63,    80,    39,    80,    44,    60,    13,    64,    80,
   40,    63,    45,    61,     6,    65,    80,    18,    80,    80,
   80,     5,    66,    80,    19,    65,    80,    80,     0,    67,
   68,    20,    80,     4,    80,     5,    68,    80,    21,    80,
   65,    80,     5,    69,    80,    22,    68,    66,    80,     0,
   70,    73,     8,    71,    80,    80,     2,    71,    72,     9,
   80,    80,    80,    10,    72,    80,    46,    80,    80,    80,
   10,    73,    80,    47,    72,    80,    80,     2,    74,    75,
   48,    80,    71,    80,    10,    75,    80,    49,    80,    72,
   80,    10,    76,    80,    50,    75,    73,    80,     2,    77,
   78,    51,    80,    67,    74,     5,    78,    80,    52,    80,
   68,    75,     5,    79,    80,    53,    78,    69,    76,     0,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cpu1_state_alts[] ATTRIBUTE_UNUSED = {
    1,     4,     4,    64,     8,     4,     1,     1,     4,     4,
   64,     4,     0,     1,     1,     4,     4,    64,     4,     0,
    1,     1,     4,     4,    64,     0,     0,     1,     1,     4,
    4,     0,     0,     0,     1,     1,     4,     4,    64,     8,
    4,     1,     1,     4,     0,    64,     8,     4,     1,     1,
    4,     0,    64,     4,     0,     1,     1,     4,     0,    64,
    0,     0,     1,     1,     4,     0,     0,     0,     0,     1,
    1,     4,     4,    64,     4,     0,     1,     1,     4,     4,
   64,     0,     0,     1,     1,     4,     4,     0,     0,     0,
    1,     1,     4,     0,    64,     8,     4,     1,     1,     4,
    0,    64,     4,     0,     1,     1,     4,     0,    64,     4,
    0,     1,     1,     4,     0,    64,     0,     0,     1,     1,
    4,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     0,    64,     0,     0,     1,
    1,     4,     0,     0,     4,     0,     1,     1,     0,     0,
    0,     4,     0,     1,     1,     0,     0,    64,     4,     0,
    1,     1,     4,     0,    64,     0,     0,     1,     1,     4,
    0,     0,     0,     0,     1,     1,     4,     0,    64,     4,
    0,     1,     1,     4,     0,    64,     0,     0,     1,     1,
    4,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     0,    64,     0,     0,     1,
    1,     4,     0,     0,     4,     0,     1,     1,     0,     0,
    0,     4,     0,     1,     1,     0,     0,    64,     4,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    0,    64,     0,     0,     1,     1,     4,     0,     0,     4,
    0,     1,     1,     0,     0,     0,     4,     0,     1,     1,
    0,     0,    64,     4,     0,     1,     1,     4,     0,     0,
    8,     4,     1,     1,     0,     0,     0,     8,     4,     1,
    1,     0,     0,    64,     8,     4,     1,     1,     0,     4,
    0,     0,     0,     1,     1,     0,     4,    64,     0,     0,
    1,     1,     4,     4,     0,     4,     0,     1,     1,     0,
    4,     0,     4,     0,     1,     1,     0,     4,    64,     4,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     0,    64,     0,     0,     1,     1,     4,     0,     0,
    4,     0,     1,     1,     0,     0,     0,     4,     0,     1,
    1,     0,     0,    64,     4,     0,     1,     1,     4,     0,
    0,     8,     4,     1,     1,     0,     0,     0,     8,     4,
    1,     1,     0,     0,    64,     8,     4,     1,     1,     4,
    4,    64,     4,     0,     1,     1,     4,     4,    64,     0,
    0,     1,     1,     4,     4,     0,     0,     0,     1,     1,
    0,     4,     0,     0,     0,     1,     1,     0,     4,    64,
    0,     0,     1,     1,     4,     4,     0,     4,     0,     1,
    1,     0,     4,     0,     4,     0,     1,     1,     0,     4,
   64,     4,     0,     1,     1,     4,     4,     0,     8,     4,
    1,     1,     0,     4,     0,     8,     4,     1,     1,     0,
    4,    64,     8,     4,     1,     1,     0,     4,     0,     0,
    0,     1,     1,     0,     4,    64,     0,     0,     1,     1,
    4,     4,     0,     4,     0,     1,     1,     0,     4,     0,
    4,     0,     1,     1,     0,     4,    64,     4,     0,     1,
    1,     4,     4,    64,     0,     0,     1,     1,     4,     4,
    0,     0,     0,     1,     1,     0,     4,     0,     0,     0,
    1,     1,     0,     4,    64,     0,     0,     1,     1,     4,
    4,     0,     4,     0,     1,     1,     0,     4,     0,     4,
    0,     1,     1,     0,     4,    64,     4,     0,     1,     1,
    4,     4,     0,     8,     4,     1,     1,     0,     4,     0,
    8,     4,     1,     1,     0,     4,    64,     8,     4,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cpu1_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,   128,     1,     0,    20,     1,    80,     0,
    0,    64,     1,     8,     4,    96,    21,   128,     1,     0,
   20,     1,    80,    32,     0,   130,     1,     4,     4,    80,
   21,    65,    85,     5,    20,     5,    16,    84,    65,    65,
    2,    24,    13,    96,    32,    64,   133,     3,    84,    29,
   80,    97,    64,   209,     7,    68,    24,    16,   117,   129,
  134,     3,    72,    29,    32,    96,   128,   208,     7,    64,
   24,     0,    69,    65,     5,     0,    68,    17,    16,    64,
   65,    86,     5,    24,     5,    32,    84,   129,    66,     1,
   64,    21,     0,    80,     0,     2,     0,    24,     1,    96,
   69,   129,     6,     0,    72,    17,    32,    64,   128,    16,
    4,    64,    16,     0,    69,    65,     5,     0,    68,    17,
   16,    64,    64,     6,     0,    88,    17,    96,    65,   128,
   18,     4,    72,    16,    32,     4,     1,    16,     4,     0,
};

/* Vector for locked state flags.  */
static const unsigned char sr71_cpu1_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cpu1_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cp1_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     2,     0,     2,     1,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     3};

/* Vector for state transitions.  */
static const unsigned char sr71_cp1_transitions[] ATTRIBUTE_UNUSED = {
    0,     1,     3,     0,     1,     4,     2,     0,     2,     4,
    4,     0,     3,     2,     4,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cp1_state_alts[] ATTRIBUTE_UNUSED = {
    1,    64,    32,     1,     1,     0,    32,     1,     1,     0,
    0,     1,     1,    64,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cp1_min_issue_delay[] ATTRIBUTE_UNUSED = {
    4,    98};

/* Vector for locked state flags.  */
static const unsigned char sr71_cp1_dead_lock[] = {
    0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cp1_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cp2_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     1,     1,     1,     2,     3,     3,     1,     1,
    4,     3,     3,     3,     3,     0,     0,     5};

/* Vector for state transitions.  */
static const unsigned char sr71_cp2_transitions[] ATTRIBUTE_UNUSED = {
    0,     4,     6,     5,     1,     0,     1,     8,     8,     8,
    8,     2,     2,     8,     8,     8,     8,     3,     3,     8,
    8,     8,     8,     4,     4,     8,     8,     8,     8,     5,
    5,     8,     8,     8,     8,     0,     6,     8,     8,     8,
    8,     7,     7,     8,     8,     8,     8,     1};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cp2_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     1,     1,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cp2_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     5,    85,    80,     4,    68,    64,     3,
   51,    48,     2,    34,    32,     1,    17,    16,     7,   119,
  112,     6,   102,    96};

/* Vector for locked state flags.  */
static const unsigned char sr71_cp2_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cp2_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_fextra_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     2,     0,     0,
    0,     3,     4,     5,     6,     0,     0,     7};

/* Comb vector for state transitions.  */
static const unsigned char sr71_fextra_transitions[] ATTRIBUTE_UNUSED = {
    0,   179,   121,   177,   119,   191,     1,     0,     1,     2,
    3,     4,     5,     6,     7,     2,     3,     4,     5,     6,
    7,     8,     8,     9,    10,    11,    12,    13,    14,     9,
   10,    11,    12,    13,    14,    15,    15,    16,    17,    18,
   19,    20,    21,    16,    17,    18,    19,    20,    21,    22,
   22,    23,    24,    25,    26,    27,    28,    23,    24,    25,
   26,    27,    28,    29,    29,    30,    31,    32,    33,    34,
   35,    30,    31,    32,    33,    34,    35,    36,    36,    37,
   38,    39,    40,    41,    42,    37,    38,    39,    40,    41,
   42,    43,    43,    44,    45,    46,    47,    48,    49,    44,
   45,    46,    47,    48,    49,    50,    50,    51,    52,    53,
   54,    55,    56,    51,    52,    53,    54,    55,    56,    57,
   57,    58,    59,    60,    61,    62,    63,    58,    59,    60,
   61,    62,    63,    64,    64,    65,    66,    67,    68,    69,
   70,    65,    66,    67,    68,    69,    70,    71,    71,    72,
   73,    74,    75,    76,    77,    72,    73,    74,    75,    76,
   77,    78,    78,    79,    80,    81,    82,    83,    84,    79,
   80,    81,    82,    83,    84,    85,    85,    86,    87,    88,
   89,    90,    91,    86,    87,    88,    89,    90,    91,    92,
   92,    93,    94,    95,    96,    97,    98,    93,    94,    95,
   96,    97,    98,    99,    99,   100,   101,   102,   103,   104,
  105,   100,   101,   102,   103,   104,   105,   106,   106,   107,
  108,   109,   110,   111,   112,   107,   108,   109,   110,   111,
  112,   113,   113,   114,   115,   116,   117,   118,   119,   114,
  115,   116,   117,   118,   119,   120,   120,   121,   122,   123,
  124,   125,   126,   121,   122,   123,   124,   125,   126,   127,
  127,   128,   129,   130,   131,   132,   133,   128,   129,   130,
  131,   132,   133,   134,   134,   135,   136,   137,   138,   139,
  140,   135,   136,   137,   138,   139,   140,   141,   141,   142,
  143,   144,   145,   146,   147,   142,   143,   144,   145,   146,
  147,   148,   148,   149,   150,   151,   152,   153,   154,   149,
  150,   151,   152,   153,   154,   155,   155,   156,   157,   158,
  159,   160,   161,   156,   157,   158,   159,   160,   161,   162,
  162,   163,   164,   165,   166,   167,   168,   163,   164,   165,
  166,   167,   168,   169,   169,   170,   171,   172,   173,   174,
  175,   170,   171,   172,   173,   174,   175,   176,   176,   177,
  178,   179,   180,   181,   182,   177,   178,   179,   180,   181,
  182,   183,   183,   184,   185,   186,   187,   188,   189,   184,
  185,   186,   187,   188,   189,   190,   190,   191,   192,   193,
  194,   195,   196,   191,   192,   193,   194,   195,   196,   197,
  197,   198,   199,   200,   201,   202,   203,   198,   199,   200,
  201,   202,   203,   204,   204,   205,   206,   207,   208,   209,
  210,   205,   206,   207,   208,   209,   210,   211,   211,   212,
  213,   214,   215,   216,   217,   212,   213,   214,   215,   216,
  217,   218,   218,   219,   220,   221,   222,   223,   224,   219,
  220,   221,   222,   223,   224,   225,   225,   226,   227,   228,
  229,   230,   230,   226,   227,   228,   229,     0};

/* Check vector for state transitions.  */
static const unsigned char sr71_fextra_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
    3,     4,     5,     6,     7,     1,     2,     3,     4,     5,
    6,     7,     8,     9,    10,    11,    12,    13,    14,     8,
    9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
   19,    20,    21,    15,    16,    17,    18,    19,    20,    21,
   22,    23,    24,    25,    26,    27,    28,    22,    23,    24,
   25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    29,    30,    31,    32,    33,    34,    35,    36,    37,
   38,    39,    40,    41,    42,    36,    37,    38,    39,    40,
   41,    42,    43,    44,    45,    46,    47,    48,    49,    43,
   44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   54,    55,    56,    50,    51,    52,    53,    54,    55,    56,
   57,    58,    59,    60,    61,    62,    63,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    64,    65,    66,    67,    68,    69,    70,    71,    72,
   73,    74,    75,    76,    77,    71,    72,    73,    74,    75,
   76,    77,    78,    79,    80,    81,    82,    83,    84,    78,
   79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
   89,    90,    91,    85,    86,    87,    88,    89,    90,    91,
   92,    93,    94,    95,    96,    97,    98,    92,    93,    94,
   95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
  105,    99,   100,   101,   102,   103,   104,   105,   106,   107,
  108,   109,   110,   111,   112,   106,   107,   108,   109,   110,
  111,   112,   113,   114,   115,   116,   117,   118,   119,   113,
  114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
  124,   125,   126,   120,   121,   122,   123,   124,   125,   126,
  127,   128,   129,   130,   131,   132,   133,   127,   128,   129,
  130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
  140,   134,   135,   136,   137,   138,   139,   140,   141,   142,
  143,   144,   145,   146,   147,   141,   142,   143,   144,   145,
  146,   147,   148,   149,   150,   151,   152,   153,   154,   148,
  149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  159,   160,   161,   155,   156,   157,   158,   159,   160,   161,
  162,   163,   164,   165,   166,   167,   168,   162,   163,   164,
  165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
  175,   169,   170,   171,   172,   173,   174,   175,   176,   177,
  178,   179,   180,   181,   182,   176,   177,   178,   179,   180,
  181,   182,   183,   184,   185,   186,   187,   188,   189,   183,
  184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
  194,   195,   196,   190,   191,   192,   193,   194,   195,   196,
  197,   198,   199,   200,   201,   202,   203,   197,   198,   199,
  200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
  210,   204,   205,   206,   207,   208,   209,   210,   211,   212,
  213,   214,   215,   216,   217,   211,   212,   213,   214,   215,
  216,   217,   218,   219,   220,   221,   222,   223,   224,   218,
  219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
  229,   230,   230,   225,   226,   227,   228,   229};

/* Base vector for state transitions.  */
static const unsigned short sr71_fextra_base[] = {
    0,     8,     9,    10,    11,    12,    13,    14,    22,    23,
   24,    25,    26,    27,    28,    36,    37,    38,    39,    40,
   41,    42,    50,    51,    52,    53,    54,    55,    56,    64,
   65,    66,    67,    68,    69,    70,    78,    79,    80,    81,
   82,    83,    84,    92,    93,    94,    95,    96,    97,    98,
  106,   107,   108,   109,   110,   111,   112,   120,   121,   122,
  123,   124,   125,   126,   134,   135,   136,   137,   138,   139,
  140,   148,   149,   150,   151,   152,   153,   154,   162,   163,
  164,   165,   166,   167,   168,   176,   177,   178,   179,   180,
  181,   182,   190,   191,   192,   193,   194,   195,   196,   204,
  205,   206,   207,   208,   209,   210,   218,   219,   220,   221,
  222,   223,   224,   232,   233,   234,   235,   236,   237,   238,
  246,   247,   248,   249,   250,   251,   252,   260,   261,   262,
  263,   264,   265,   266,   274,   275,   276,   277,   278,   279,
  280,   288,   289,   290,   291,   292,   293,   294,   302,   303,
  304,   305,   306,   307,   308,   316,   317,   318,   319,   320,
  321,   322,   330,   331,   332,   333,   334,   335,   336,   344,
  345,   346,   347,   348,   349,   350,   358,   359,   360,   361,
  362,   363,   364,   372,   373,   374,   375,   376,   377,   378,
  386,   387,   388,   389,   390,   391,   392,   400,   401,   402,
  403,   404,   405,   406,   414,   415,   416,   417,   418,   419,
  420,   428,   429,   430,   431,   432,   433,   434,   442,   443,
  444,   445,   446,   447,   448,   456,   457,   458,   459,   460,
};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char sr71_fextra_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     0,     0,     1,     1,     1,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char sr71_fextra_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
    3,     4,     5,     6,     7,     1,     2,     3,     4,     5,
    6,     7,     8,     9,    10,    11,    12,    13,    14,     8,
    9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
   19,    20,    21,    15,    16,    17,    18,    19,    20,    21,
   22,    23,    24,    25,    26,    27,    28,    22,    23,    24,
   25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    29,    30,    31,    32,    33,    34,    35,    36,    37,
   38,    39,    40,    41,    42,    36,    37,    38,    39,    40,
   41,    42,    43,    44,    45,    46,    47,    48,    49,    43,
   44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   54,    55,    56,    50,    51,    52,    53,    54,    55,    56,
   57,    58,    59,    60,    61,    62,    63,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    64,    65,    66,    67,    68,    69,    70,    71,    72,
   73,    74,    75,    76,    77,    71,    72,    73,    74,    75,
   76,    77,    78,    79,    80,    81,    82,    83,    84,    78,
   79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
   89,    90,    91,    85,    86,    87,    88,    89,    90,    91,
   92,    93,    94,    95,    96,    97,    98,    92,    93,    94,
   95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
  105,    99,   100,   101,   102,   103,   104,   105,   106,   107,
  108,   109,   110,   111,   112,   106,   107,   108,   109,   110,
  111,   112,   113,   114,   115,   116,   117,   118,   119,   113,
  114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
  124,   125,   126,   120,   121,   122,   123,   124,   125,   126,
  127,   128,   129,   130,   131,   132,   133,   127,   128,   129,
  130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
  140,   134,   135,   136,   137,   138,   139,   140,   141,   142,
  143,   144,   145,   146,   147,   141,   142,   143,   144,   145,
  146,   147,   148,   149,   150,   151,   152,   153,   154,   148,
  149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  159,   160,   161,   155,   156,   157,   158,   159,   160,   161,
  162,   163,   164,   165,   166,   167,   168,   162,   163,   164,
  165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
  175,   169,   170,   171,   172,   173,   174,   175,   176,   177,
  178,   179,   180,   181,   182,   176,   177,   178,   179,   180,
  181,   182,   183,   184,   185,   186,   187,   188,   189,   183,
  184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
  194,   195,   196,   190,   191,   192,   193,   194,   195,   196,
  197,   198,   199,   200,   201,   202,   203,   197,   198,   199,
  200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
  210,   204,   205,   206,   207,   208,   209,   210,   211,   212,
  213,   214,   215,   216,   217,   211,   212,   213,   214,   215,
  216,   217,   218,   219,   220,   221,   222,   223,   224,   218,
  219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
  229,   230,   230,   225,   226,   227,   228,   229};

/* Base vector for state insn alternatives.  */
static const unsigned short sr71_fextra_base_state_alts[] = {
    0,     8,     9,    10,    11,    12,    13,    14,    22,    23,
   24,    25,    26,    27,    28,    36,    37,    38,    39,    40,
   41,    42,    50,    51,    52,    53,    54,    55,    56,    64,
   65,    66,    67,    68,    69,    70,    78,    79,    80,    81,
   82,    83,    84,    92,    93,    94,    95,    96,    97,    98,
  106,   107,   108,   109,   110,   111,   112,   120,   121,   122,
  123,   124,   125,   126,   134,   135,   136,   137,   138,   139,
  140,   148,   149,   150,   151,   152,   153,   154,   162,   163,
  164,   165,   166,   167,   168,   176,   177,   178,   179,   180,
  181,   182,   190,   191,   192,   193,   194,   195,   196,   204,
  205,   206,   207,   208,   209,   210,   218,   219,   220,   221,
  222,   223,   224,   232,   233,   234,   235,   236,   237,   238,
  246,   247,   248,   249,   250,   251,   252,   260,   261,   262,
  263,   264,   265,   266,   274,   275,   276,   277,   278,   279,
  280,   288,   289,   290,   291,   292,   293,   294,   302,   303,
  304,   305,   306,   307,   308,   316,   317,   318,   319,   320,
  321,   322,   330,   331,   332,   333,   334,   335,   336,   344,
  345,   346,   347,   348,   349,   350,   358,   359,   360,   361,
  362,   363,   364,   372,   373,   374,   375,   376,   377,   378,
  386,   387,   388,   389,   390,   391,   392,   400,   401,   402,
  403,   404,   405,   406,   414,   415,   416,   417,   418,   419,
  420,   428,   429,   430,   431,   432,   433,   434,   442,   443,
  444,   445,   446,   447,   448,   456,   457,   458,   459,   460,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_fextra_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
  229,   229,   229,   229,   229,     0,     0,   228,   228,   228,
  228,   228,   228,     0,     0,   227,   227,   227,   227,   227,
  227,     0,     0,   226,   226,   226,   226,   226,   226,     0,
    0,   225,   225,   225,   225,   225,   225,     0,     0,   224,
  224,   224,   224,   224,   224,     0,     0,   223,   223,   223,
  223,   223,   223,     0,     0,   222,   222,   222,   222,   222,
  222,     0,     0,   221,   221,   221,   221,   221,   221,     0,
    0,   220,   220,   220,   220,   220,   220,     0,     0,   219,
  219,   219,   219,   219,   219,     0,     0,   218,   218,   218,
  218,   218,   218,     0,     0,   217,   217,   217,   217,   217,
  217,     0,     0,   216,   216,   216,   216,   216,   216,     0,
    0,   215,   215,   215,   215,   215,   215,     0,     0,   214,
  214,   214,   214,   214,   214,     0,     0,   213,   213,   213,
  213,   213,   213,     0,     0,   212,   212,   212,   212,   212,
  212,     0,     0,   211,   211,   211,   211,   211,   211,     0,
    0,   210,   210,   210,   210,   210,   210,     0,     0,   209,
  209,   209,   209,   209,   209,     0,     0,   208,   208,   208,
  208,   208,   208,     0,     0,   207,   207,   207,   207,   207,
  207,     0,     0,   206,   206,   206,   206,   206,   206,     0,
    0,   205,   205,   205,   205,   205,   205,     0,     0,   204,
  204,   204,   204,   204,   204,     0,     0,   203,   203,   203,
  203,   203,   203,     0,     0,   202,   202,   202,   202,   202,
  202,     0,     0,   201,   201,   201,   201,   201,   201,     0,
    0,   200,   200,   200,   200,   200,   200,     0,     0,   199,
  199,   199,   199,   199,   199,     0,     0,   198,   198,   198,
  198,   198,   198,     0,     0,   197,   197,   197,   197,   197,
  197,     0,     0,   196,   196,   196,   196,   196,   196,     0,
    0,   195,   195,   195,   195,   195,   195,     0,     0,   194,
  194,   194,   194,   194,   194,     0,     0,   193,   193,   193,
  193,   193,   193,     0,     0,   192,   192,   192,   192,   192,
  192,     0,     0,   191,   191,   191,   191,   191,   191,     0,
    0,   190,   190,   190,   190,   190,   190,     0,     0,   189,
  189,   189,   189,   189,   189,     0,     0,   188,   188,   188,
  188,   188,   188,     0,     0,   187,   187,   187,   187,   187,
  187,     0,     0,   186,   186,   186,   186,   186,   186,     0,
    0,   185,   185,   185,   185,   185,   185,     0,     0,   184,
  184,   184,   184,   184,   184,     0,     0,   183,   183,   183,
  183,   183,   183,     0,     0,   182,   182,   182,   182,   182,
  182,     0,     0,   181,   181,   181,   181,   181,   181,     0,
    0,   180,   180,   180,   180,   180,   180,     0,     0,   179,
  179,   179,   179,   179,   179,     0,     0,   178,   178,   178,
  178,   178,   178,     0,     0,   177,   177,   177,   177,   177,
  177,     0,     0,   176,   176,   176,   176,   176,   176,     0,
    0,   175,   175,   175,   175,   175,   175,     0,     0,   174,
  174,   174,   174,   174,   174,     0,     0,   173,   173,   173,
  173,   173,   173,     0,     0,   172,   172,   172,   172,   172,
  172,     0,     0,   171,   171,   171,   171,   171,   171,     0,
    0,   170,   170,   170,   170,   170,   170,     0,     0,   169,
  169,   169,   169,   169,   169,     0,     0,   168,   168,   168,
  168,   168,   168,     0,     0,   167,   167,   167,   167,   167,
  167,     0,     0,   166,   166,   166,   166,   166,   166,     0,
    0,   165,   165,   165,   165,   165,   165,     0,     0,   164,
  164,   164,   164,   164,   164,     0,     0,   163,   163,   163,
  163,   163,   163,     0,     0,   162,   162,   162,   162,   162,
  162,     0,     0,   161,   161,   161,   161,   161,   161,     0,
    0,   160,   160,   160,   160,   160,   160,     0,     0,   159,
  159,   159,   159,   159,   159,     0,     0,   158,   158,   158,
  158,   158,   158,     0,     0,   157,   157,   157,   157,   157,
  157,     0,     0,   156,   156,   156,   156,   156,   156,     0,
    0,   155,   155,   155,   155,   155,   155,     0,     0,   154,
  154,   154,   154,   154,   154,     0,     0,   153,   153,   153,
  153,   153,   153,     0,     0,   152,   152,   152,   152,   152,
  152,     0,     0,   151,   151,   151,   151,   151,   151,     0,
    0,   150,   150,   150,   150,   150,   150,     0,     0,   149,
  149,   149,   149,   149,   149,     0,     0,   148,   148,   148,
  148,   148,   148,     0,     0,   147,   147,   147,   147,   147,
  147,     0,     0,   146,   146,   146,   146,   146,   146,     0,
    0,   145,   145,   145,   145,   145,   145,     0,     0,   144,
  144,   144,   144,   144,   144,     0,     0,   143,   143,   143,
  143,   143,   143,     0,     0,   142,   142,   142,   142,   142,
  142,     0,     0,   141,   141,   141,   141,   141,   141,     0,
    0,   140,   140,   140,   140,   140,   140,     0,     0,   139,
  139,   139,   139,   139,   139,     0,     0,   138,   138,   138,
  138,   138,   138,     0,     0,   137,   137,   137,   137,   137,
  137,     0,     0,   136,   136,   136,   136,   136,   136,     0,
    0,   135,   135,   135,   135,   135,   135,     0,     0,   134,
  134,   134,   134,   134,   134,     0,     0,   133,   133,   133,
  133,   133,   133,     0,     0,   132,   132,   132,   132,   132,
  132,     0,     0,   131,   131,   131,   131,   131,   131,     0,
    0,   130,   130,   130,   130,   130,   130,     0,     0,   129,
  129,   129,   129,   129,   129,     0,     0,   128,   128,   128,
  128,   128,   128,     0,     0,   127,   127,   127,   127,   127,
  127,     0,     0,   126,   126,   126,   126,   126,   126,     0,
    0,   125,   125,   125,   125,   125,   125,     0,     0,   124,
  124,   124,   124,   124,   124,     0,     0,   123,   123,   123,
  123,   123,   123,     0,     0,   122,   122,   122,   122,   122,
  122,     0,     0,   121,   121,   121,   121,   121,   121,     0,
    0,   120,   120,   120,   120,   120,   120,     0,     0,   119,
  119,   119,   119,   119,   119,     0,     0,   118,   118,   118,
  118,   118,   118,     0,     0,   117,   117,   117,   117,   117,
  117,     0,     0,   116,   116,   116,   116,   116,   116,     0,
    0,   115,   115,   115,   115,   115,   115,     0,     0,   114,
  114,   114,   114,   114,   114,     0,     0,   113,   113,   113,
  113,   113,   113,     0,     0,   112,   112,   112,   112,   112,
  112,     0,     0,   111,   111,   111,   111,   111,   111,     0,
    0,   110,   110,   110,   110,   110,   110,     0,     0,   109,
  109,   109,   109,   109,   109,     0,     0,   108,   108,   108,
  108,   108,   108,     0,     0,   107,   107,   107,   107,   107,
  107,     0,     0,   106,   106,   106,   106,   106,   106,     0,
    0,   105,   105,   105,   105,   105,   105,     0,     0,   104,
  104,   104,   104,   104,   104,     0,     0,   103,   103,   103,
  103,   103,   103,     0,     0,   102,   102,   102,   102,   102,
  102,     0,     0,   101,   101,   101,   101,   101,   101,     0,
    0,   100,   100,   100,   100,   100,   100,     0,     0,    99,
   99,    99,    99,    99,    99,     0,     0,    98,    98,    98,
   98,    98,    98,     0,     0,    97,    97,    97,    97,    97,
   97,     0,     0,    96,    96,    96,    96,    96,    96,     0,
    0,    95,    95,    95,    95,    95,    95,     0,     0,    94,
   94,    94,    94,    94,    94,     0,     0,    93,    93,    93,
   93,    93,    93,     0,     0,    92,    92,    92,    92,    92,
   92,     0,     0,    91,    91,    91,    91,    91,    91,     0,
    0,    90,    90,    90,    90,    90,    90,     0,     0,    89,
   89,    89,    89,    89,    89,     0,     0,    88,    88,    88,
   88,    88,    88,     0,     0,    87,    87,    87,    87,    87,
   87,     0,     0,    86,    86,    86,    86,    86,    86,     0,
    0,    85,    85,    85,    85,    85,    85,     0,     0,    84,
   84,    84,    84,    84,    84,     0,     0,    83,    83,    83,
   83,    83,    83,     0,     0,    82,    82,    82,    82,    82,
   82,     0,     0,    81,    81,    81,    81,    81,    81,     0,
    0,    80,    80,    80,    80,    80,    80,     0,     0,    79,
   79,    79,    79,    79,    79,     0,     0,    78,    78,    78,
   78,    78,    78,     0,     0,    77,    77,    77,    77,    77,
   77,     0,     0,    76,    76,    76,    76,    76,    76,     0,
    0,    75,    75,    75,    75,    75,    75,     0,     0,    74,
   74,    74,    74,    74,    74,     0,     0,    73,    73,    73,
   73,    73,    73,     0,     0,    72,    72,    72,    72,    72,
   72,     0,     0,    71,    71,    71,    71,    71,    71,     0,
    0,    70,    70,    70,    70,    70,    70,     0,     0,    69,
   69,    69,    69,    69,    69,     0,     0,    68,    68,    68,
   68,    68,    68,     0,     0,    67,    67,    67,    67,    67,
   67,     0,     0,    66,    66,    66,    66,    66,    66,     0,
    0,    65,    65,    65,    65,    65,    65,     0,     0,    64,
   64,    64,    64,    64,    64,     0,     0,    63,    63,    63,
   63,    63,    63,     0,     0,    62,    62,    62,    62,    62,
   62,     0,     0,    61,    61,    61,    61,    61,    61,     0,
    0,    60,    60,    60,    60,    60,    60,     0,     0,    59,
   59,    59,    59,    59,    59,     0,     0,    58,    58,    58,
   58,    58,    58,     0,     0,    57,    57,    57,    57,    57,
   57,     0,     0,    56,    56,    56,    56,    56,    56,     0,
    0,    55,    55,    55,    55,    55,    55,     0,     0,    54,
   54,    54,    54,    54,    54,     0,     0,    53,    53,    53,
   53,    53,    53,     0,     0,    52,    52,    52,    52,    52,
   52,     0,     0,    51,    51,    51,    51,    51,    51,     0,
    0,    50,    50,    50,    50,    50,    50,     0,     0,    49,
   49,    49,    49,    49,    49,     0,     0,    48,    48,    48,
   48,    48,    48,     0,     0,    47,    47,    47,    47,    47,
   47,     0,     0,    46,    46,    46,    46,    46,    46,     0,
    0,    45,    45,    45,    45,    45,    45,     0,     0,    44,
   44,    44,    44,    44,    44,     0,     0,    43,    43,    43,
   43,    43,    43,     0,     0,    42,    42,    42,    42,    42,
   42,     0,     0,    41,    41,    41,    41,    41,    41,     0,
    0,    40,    40,    40,    40,    40,    40,     0,     0,    39,
   39,    39,    39,    39,    39,     0,     0,    38,    38,    38,
   38,    38,    38,     0,     0,    37,    37,    37,    37,    37,
   37,     0,     0,    36,    36,    36,    36,    36,    36,     0,
    0,    35,    35,    35,    35,    35,    35,     0,     0,    34,
   34,    34,    34,    34,    34,     0,     0,    33,    33,    33,
   33,    33,    33,     0,     0,    32,    32,    32,    32,    32,
   32,     0,     0,    31,    31,    31,    31,    31,    31,     0,
    0,    30,    30,    30,    30,    30,    30,     0,     0,    29,
   29,    29,    29,    29,    29,     0,     0,    28,    28,    28,
   28,    28,    28,     0,     0,    27,    27,    27,    27,    27,
   27,     0,     0,    26,    26,    26,    26,    26,    26,     0,
    0,    25,    25,    25,    25,    25,    25,     0,     0,    24,
   24,    24,    24,    24,    24,     0,     0,    23,    23,    23,
   23,    23,    23,     0,     0,    22,    22,    22,    22,    22,
   22,     0,     0,    21,    21,    21,    21,    21,    21,     0,
    0,    20,    20,    20,    20,    20,    20,     0,     0,    19,
   19,    19,    19,    19,    19,     0,     0,    18,    18,    18,
   18,    18,    18,     0,     0,    17,    17,    17,    17,    17,
   17,     0,     0,    16,    16,    16,    16,    16,    16,     0,
    0,    15,    15,    15,    15,    15,    15,     0,     0,    14,
   14,    14,    14,    14,    14,     0,     0,    13,    13,    13,
   13,    13,    13,     0,     0,    12,    12,    12,    12,    12,
   12,     0,     0,    11,    11,    11,    11,    11,    11,     0,
    0,    10,    10,    10,    10,    10,    10,     0,     0,     9,
    9,     9,     9,     9,     9,     0,     0,     8,     8,     8,
    8,     8,     8,     0,     0,     7,     7,     7,     7,     7,
    7,     0,     0,     6,     6,     6,     6,     6,     6,     0,
    0,     5,     5,     5,     5,     5,     5,     0,     0,     4,
    4,     4,     4,     4,     4,     0,     0,     3,     3,     3,
    3,     3,     3,     0,     0,     2,     2,     2,     2,     2,
    2,     0,     0,     1,     1,     1,     1,     1,     1,     0,
};

/* Vector for locked state flags.  */
static const unsigned char sr71_fextra_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_fextra_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_imacc_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
    4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     5};

/* Comb vector for state transitions.  */
static const unsigned char sr71_imacc_transitions[] ATTRIBUTE_UNUSED = {
    0,    70,    68,    33,     1,     0,     1,     2,     3,     4,
    5,     2,     3,     4,     5,     6,     6,     7,     8,     9,
   10,     7,     8,     9,    10,    11,    11,    12,    13,    14,
   15,    12,    13,    14,    15,    16,    16,    17,    18,    19,
   20,    17,    18,    19,    20,    21,    21,    22,    23,    24,
   25,    22,    23,    24,    25,    26,    26,    27,    28,    29,
   30,    27,    28,    29,    30,    31,    31,    32,    33,    34,
   35,    32,    33,    34,    35,    36,    36,    37,    38,    39,
   40,    37,    38,    39,    40,    41,    41,    42,    43,    44,
   45,    42,    43,    44,    45,    46,    46,    47,    48,    49,
   50,    47,    48,    49,    50,    51,    51,    52,    53,    54,
   55,    52,    53,    54,    55,    56,    56,    57,    58,    59,
   60,    57,    58,    59,    60,    61,    61,    62,    63,    64,
   65,    62,    63,    64,    65,    66,    66,    67,    68,    69,
   70,    67,    68,    69,    70,     0};

/* Check vector for state transitions.  */
static const unsigned char sr71_imacc_check[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    66,    67,    68,    69,    70};

/* Base vector for state transitions.  */
static const unsigned char sr71_imacc_base[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138,   139,
  140};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char sr71_imacc_state_alts[] ATTRIBUTE_UNUSED = {
    1,     4,     4,     4,     4,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char sr71_imacc_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    66,    67,    68,    69,    70};

/* Base vector for state insn alternatives.  */
static const unsigned char sr71_imacc_base_state_alts[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138,   139,
  140};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_imacc_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,    70,    70,    70,
   70,     0,     0,    69,    69,    69,    69,     0,     0,    68,
   68,    68,    68,     0,     0,    67,    67,    67,    67,     0,
    0,    66,    66,    66,    66,     0,     0,    65,    65,    65,
   65,     0,     0,    64,    64,    64,    64,     0,     0,    63,
   63,    63,    63,     0,     0,    62,    62,    62,    62,     0,
    0,    61,    61,    61,    61,     0,     0,    60,    60,    60,
   60,     0,     0,    59,    59,    59,    59,     0,     0,    58,
   58,    58,    58,     0,     0,    57,    57,    57,    57,     0,
    0,    56,    56,    56,    56,     0,     0,    55,    55,    55,
   55,     0,     0,    54,    54,    54,    54,     0,     0,    53,
   53,    53,    53,     0,     0,    52,    52,    52,    52,     0,
    0,    51,    51,    51,    51,     0,     0,    50,    50,    50,
   50,     0,     0,    49,    49,    49,    49,     0,     0,    48,
   48,    48,    48,     0,     0,    47,    47,    47,    47,     0,
    0,    46,    46,    46,    46,     0,     0,    45,    45,    45,
   45,     0,     0,    44,    44,    44,    44,     0,     0,    43,
   43,    43,    43,     0,     0,    42,    42,    42,    42,     0,
    0,    41,    41,    41,    41,     0,     0,    40,    40,    40,
   40,     0,     0,    39,    39,    39,    39,     0,     0,    38,
   38,    38,    38,     0,     0,    37,    37,    37,    37,     0,
    0,    36,    36,    36,    36,     0,     0,    35,    35,    35,
   35,     0,     0,    34,    34,    34,    34,     0,     0,    33,
   33,    33,    33,     0,     0,    32,    32,    32,    32,     0,
    0,    31,    31,    31,    31,     0,     0,    30,    30,    30,
   30,     0,     0,    29,    29,    29,    29,     0,     0,    28,
   28,    28,    28,     0,     0,    27,    27,    27,    27,     0,
    0,    26,    26,    26,    26,     0,     0,    25,    25,    25,
   25,     0,     0,    24,    24,    24,    24,     0,     0,    23,
   23,    23,    23,     0,     0,    22,    22,    22,    22,     0,
    0,    21,    21,    21,    21,     0,     0,    20,    20,    20,
   20,     0,     0,    19,    19,    19,    19,     0,     0,    18,
   18,    18,    18,     0,     0,    17,    17,    17,    17,     0,
    0,    16,    16,    16,    16,     0,     0,    15,    15,    15,
   15,     0,     0,    14,    14,    14,    14,     0,     0,    13,
   13,    13,    13,     0,     0,    12,    12,    12,    12,     0,
    0,    11,    11,    11,    11,     0,     0,    10,    10,    10,
   10,     0,     0,     9,     9,     9,     9,     0,     0,     8,
    8,     8,     8,     0,     0,     7,     7,     7,     7,     0,
    0,     6,     6,     6,     6,     0,     0,     5,     5,     5,
    5,     0,     0,     4,     4,     4,     4,     0,     0,     3,
    3,     3,     3,     0,     0,     2,     2,     2,     2,     0,
    0,     1,     1,     1,     1,     0};

/* Vector for locked state flags.  */
static const unsigned char sr71_imacc_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_imacc_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */


#define DFA__ADVANCE_CYCLE 127

struct DFA_chip
{
  unsigned char vr54_automaton_state;
  unsigned char vr55_automaton_state;
  unsigned char rm7000_other_automaton_state;
  unsigned char rm7000_fdiv_automaton_state;
  unsigned char rm7000_idiv_automaton_state;
  unsigned char rm9k_main_automaton_state;
  unsigned char rm9k_imul_automaton_state;
  unsigned char rm9k_fdiv_automaton_state;
  unsigned char sr71_cpu_automaton_state;
  unsigned char sr71_cpu1_automaton_state;
  unsigned char sr71_cp1_automaton_state;
  unsigned char sr71_cp2_automaton_state;
  unsigned char sr71_fextra_automaton_state;
  unsigned char sr71_imacc_automaton_state;
};


int max_insn_queue_index = 255;

static int
internal_min_issue_delay (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;
  int res = -1;

  switch (insn_code)
    {
    case 0: /* ir_vr54_unknown */
    case 1: /* ir_vr54_branch */
    case 2: /* ir_vr54_load */
    case 3: /* ir_vr54_store */
    case 4: /* ir_vr54_fstore */
    case 5: /* ir_vr54_condmove */
    case 6: /* ir_vr54_xfer */
    case 7: /* ir_vr54_hilo */
    case 8: /* ir_vr54_arith */
    case 9: /* ir_vr54_imul_si */
    case 10: /* ir_vr54_imul_di */
    case 11: /* ir_vr54_imadd_si */
    case 12: /* ir_vr54_idiv_si */
    case 13: /* ir_vr54_idiv_di */
    case 14: /* ir_vr54_fadd */
    case 15: /* ir_vr54_fmul_sf */
    case 16: /* ir_vr54_fmul_df */
    case 17: /* ir_vr54_fmadd_sf */
    case 18: /* ir_vr54_fmadd_df */
    case 19: /* ir_vr54_fdiv_sf */
    case 20: /* ir_vr54_fdiv_df */
    case 21: /* ir_vr54_fabs */
    case 22: /* ir_vr54_fcmp */
    case 23: /* ir_vr54_fcvt */
    case 24: /* ir_vr54_frsqrt_sf */
    case 25: /* ir_vr54_frsqrt_df */
    case 26: /* ir_vr54_multi */

      temp = vr54_min_issue_delay [(vr54_translate [insn_code] + chip->vr54_automaton_state * 6) / 8];
      temp = (temp >> (8 - (vr54_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 27: /* ir_vr55_unknown */
    case 28: /* ir_vr55_branch */
    case 29: /* ir_vr55_load */
    case 30: /* ir_vr55_store */
    case 31: /* ir_vr55_condmove */
    case 32: /* ir_vr55_xfer */
    case 33: /* ir_vr55_hilo */
    case 34: /* ir_vr55_arith */
    case 35: /* ir_vr55_imul_si */
    case 36: /* ir_vr55_imul_di */
    case 37: /* ir_vr55_imadd_si */
    case 38: /* ir_vr55_idiv_si */
    case 39: /* ir_vr55_idiv_di */
    case 40: /* ir_vr55_fadd */
    case 41: /* ir_vr55_fmul_sf */
    case 42: /* ir_vr55_fmul_df */
    case 43: /* ir_vr55_fmadd_sf */
    case 44: /* ir_vr55_fmadd_df */
    case 45: /* ir_vr55_fdiv_sf */
    case 46: /* ir_vr55_fdiv_df */
    case 47: /* ir_vr55_fabs */
    case 48: /* ir_vr55_fcmp */
    case 49: /* ir_vr55_fcvt_sf */
    case 50: /* ir_vr55_fcvt_df */
    case 51: /* ir_vr55_frsqrt_sf */
    case 52: /* ir_vr55_frsqrt_df */
    case 53: /* ir_vr55_multi */

      temp = vr55_min_issue_delay [(vr55_translate [insn_code] + chip->vr55_automaton_state * 8) / 8];
      temp = (temp >> (8 - (vr55_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 54: /* rm7_int_other */
    case 55: /* rm7_ld */
    case 56: /* rm7_st */
    case 60: /* rm7_impy_si_mul */
    case 62: /* rm7_mthilo */
    case 63: /* rm7_mfhilo */
    case 64: /* rm7_ixfer */
    case 65: /* rm7_ibr */
    case 66: /* rm7_fp_quick */
    case 67: /* rm7_fp_other */
    case 68: /* rm7_fp_cvt */
    case 75: /* rm7_unknown */

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 57: /* rm7_idiv_si */
    case 58: /* rm7_idiv_di */
    case 59: /* rm7_impy_si_mult */
    case 61: /* rm7_impy_di */

      temp = rm7000_idiv_min_issue_delay [rm7000_idiv_translate [insn_code] + chip->rm7000_idiv_automaton_state * 6];
      res = temp;

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;

    case 69: /* rm7_fp_divsqrt_df */
    case 70: /* rm7_fp_divsqrt_sf */
    case 71: /* rm7_fp_rsqrt_df */
    case 72: /* rm7_fp_rsqrt_sf */
    case 73: /* rm7_fp_mpy_sf */
    case 74: /* rm7_fp_mpy_df */

      temp = rm7000_fdiv_min_issue_delay [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
      res = temp;

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;

    case 76: /* rm9k_load */
    case 77: /* rm9k_store */
    case 78: /* rm9k_int */
    case 79: /* rm9k_int_cmove */
    case 80: /* rm9k_mulsi */
    case 84: /* rm9k_mfhilo */
    case 85: /* rm9k_mthilo */
    case 86: /* rm9k_xfer */
    case 87: /* rm9k_fquick */
    case 88: /* rm9k_fcmove */
    case 89: /* rm9k_fadd */
    case 90: /* rm9k_fmuls */
    case 91: /* rm9k_fmuld */
    case 94: /* rm9k_branch */
    case 95: /* rm9k_unknown */

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      res = temp;
      break;

    case 81: /* rm9k_muldi */
    case 82: /* rm9k_divsi */
    case 83: /* rm9k_divdi */

      temp = rm9k_imul_min_issue_delay [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
      res = temp;

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;
      break;

    case 92: /* rm9k_fdivs */
    case 93: /* rm9k_fdivd */

      temp = rm9k_fdiv_min_issue_delay [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
      res = temp;

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;
      break;

    case 96: /* ir_sr70_unknown */
    case 125: /* ir_sr70_multi */

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;
      break;

    case 97: /* ir_sr70_branch */
    case 98: /* ir_sr70_load */
    case 99: /* ir_sr70_store */
    case 102: /* ir_sr70_condmove */
    case 105: /* ir_sr70_hilo */
    case 106: /* ir_sr70_arith */
    case 111: /* ir_sr70_icmp */
    case 126: /* ir_sr70_nop */

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 100: /* ir_sr70_fload */
    case 101: /* ir_sr70_fstore */
    case 103: /* ir_sr70_xfer_from */
    case 104: /* ir_sr70_xfer_to */

      temp = sr71_cp1_min_issue_delay [(sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4) / 8];
      temp = (temp >> (8 - (sr71_cp1_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 107: /* ir_sr70_imul_si */
    case 108: /* ir_sr70_imul_di */
    case 109: /* ir_sr70_idiv_si */
    case 110: /* ir_sr70_idiv_di */

      temp = sr71_imacc_min_issue_delay [sr71_imacc_translate [insn_code] + chip->sr71_imacc_automaton_state * 6];
      res = temp;

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 112: /* ir_sr70_fadd_sf */
    case 113: /* ir_sr70_fadd_df */
    case 114: /* ir_sr70_fmul_sf */
    case 115: /* ir_sr70_fmul_df */
    case 118: /* ir_sr70_fabs */
    case 119: /* ir_sr70_fcmp */
    case 120: /* ir_sr70_fcvt */

      temp = sr71_cp2_min_issue_delay [(sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6) / 2];
      temp = (temp >> (8 - (sr71_cp2_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 116: /* ir_sr70_fdiv_sf */
    case 117: /* ir_sr70_fdiv_df */
    case 121: /* ir_sr70_fsqrt_sf */
    case 122: /* ir_sr70_fsqrt_df */
    case 123: /* ir_sr70_frsqrt_sf */
    case 124: /* ir_sr70_frsqrt_df */

      temp = sr71_fextra_min_issue_delay [sr71_fextra_translate [insn_code] + chip->sr71_fextra_automaton_state * 8];
      res = temp;

      temp = sr71_cp2_min_issue_delay [(sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6) / 2];
      temp = (temp >> (8 - (sr71_cp2_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 127: /* $advance_cycle */

      temp = sr71_imacc_min_issue_delay [sr71_imacc_translate [insn_code] + chip->sr71_imacc_automaton_state * 6];
      res = temp;

      temp = sr71_fextra_min_issue_delay [sr71_fextra_translate [insn_code] + chip->sr71_fextra_automaton_state * 8];
      if (temp > res)
        res = temp;

      temp = sr71_cp2_min_issue_delay [(sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6) / 2];
      temp = (temp >> (8 - (sr71_cp2_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = sr71_cp1_min_issue_delay [(sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4) / 8];
      temp = (temp >> (8 - (sr71_cp1_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = rm9k_fdiv_min_issue_delay [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
      if (temp > res)
        res = temp;

      temp = rm9k_imul_min_issue_delay [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
      if (temp > res)
        res = temp;

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = rm7000_idiv_min_issue_delay [rm7000_idiv_translate [insn_code] + chip->rm7000_idiv_automaton_state * 6];
      if (temp > res)
        res = temp;

      temp = rm7000_fdiv_min_issue_delay [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
      if (temp > res)
        res = temp;

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = vr55_min_issue_delay [(vr55_translate [insn_code] + chip->vr55_automaton_state * 8) / 8];
      temp = (temp >> (8 - (vr55_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = vr54_min_issue_delay [(vr54_translate [insn_code] + chip->vr54_automaton_state * 6) / 8];
      temp = (temp >> (8 - (vr54_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;


    default:
      res = -1;
      break;
    }
  return res;
}

static int
internal_state_transition (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;

  switch (insn_code)
    {
    case 0: /* ir_vr54_unknown */
    case 1: /* ir_vr54_branch */
    case 2: /* ir_vr54_load */
    case 3: /* ir_vr54_store */
    case 4: /* ir_vr54_fstore */
    case 5: /* ir_vr54_condmove */
    case 6: /* ir_vr54_xfer */
    case 7: /* ir_vr54_hilo */
    case 8: /* ir_vr54_arith */
    case 9: /* ir_vr54_imul_si */
    case 10: /* ir_vr54_imul_di */
    case 11: /* ir_vr54_imadd_si */
    case 12: /* ir_vr54_idiv_si */
    case 13: /* ir_vr54_idiv_di */
    case 14: /* ir_vr54_fadd */
    case 15: /* ir_vr54_fmul_sf */
    case 16: /* ir_vr54_fmul_df */
    case 17: /* ir_vr54_fmadd_sf */
    case 18: /* ir_vr54_fmadd_df */
    case 19: /* ir_vr54_fdiv_sf */
    case 20: /* ir_vr54_fdiv_df */
    case 21: /* ir_vr54_fabs */
    case 22: /* ir_vr54_fcmp */
    case 23: /* ir_vr54_fcvt */
    case 24: /* ir_vr54_frsqrt_sf */
    case 25: /* ir_vr54_frsqrt_df */
    case 26: /* ir_vr54_multi */
      {

        temp = vr54_transitions [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        if (temp >= 12)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr54_automaton_state = temp;
        return -1;
      }
    case 27: /* ir_vr55_unknown */
    case 28: /* ir_vr55_branch */
    case 29: /* ir_vr55_load */
    case 30: /* ir_vr55_store */
    case 31: /* ir_vr55_condmove */
    case 32: /* ir_vr55_xfer */
    case 33: /* ir_vr55_hilo */
    case 34: /* ir_vr55_arith */
    case 35: /* ir_vr55_imul_si */
    case 36: /* ir_vr55_imul_di */
    case 37: /* ir_vr55_imadd_si */
    case 38: /* ir_vr55_idiv_si */
    case 39: /* ir_vr55_idiv_di */
    case 40: /* ir_vr55_fadd */
    case 41: /* ir_vr55_fmul_sf */
    case 42: /* ir_vr55_fmul_df */
    case 43: /* ir_vr55_fmadd_sf */
    case 44: /* ir_vr55_fmadd_df */
    case 45: /* ir_vr55_fdiv_sf */
    case 46: /* ir_vr55_fdiv_df */
    case 47: /* ir_vr55_fabs */
    case 48: /* ir_vr55_fcmp */
    case 49: /* ir_vr55_fcvt_sf */
    case 50: /* ir_vr55_fcvt_df */
    case 51: /* ir_vr55_frsqrt_sf */
    case 52: /* ir_vr55_frsqrt_df */
    case 53: /* ir_vr55_multi */
      {

        temp = vr55_transitions [vr55_translate [insn_code] + chip->vr55_automaton_state * 8];
        if (temp >= 48)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr55_automaton_state = temp;
        return -1;
      }
    case 54: /* rm7_int_other */
    case 55: /* rm7_ld */
    case 56: /* rm7_st */
    case 60: /* rm7_impy_si_mul */
    case 62: /* rm7_mthilo */
    case 63: /* rm7_mfhilo */
    case 64: /* rm7_ixfer */
    case 65: /* rm7_ibr */
    case 66: /* rm7_fp_quick */
    case 67: /* rm7_fp_other */
    case 68: /* rm7_fp_cvt */
    case 75: /* rm7_unknown */
      {

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm7000_other_automaton_state = temp;
        return -1;
      }
    case 57: /* rm7_idiv_si */
    case 58: /* rm7_idiv_di */
    case 59: /* rm7_impy_si_mult */
    case 61: /* rm7_impy_di */
      {
        unsigned char _rm7000_idiv_automaton_state;

        temp = rm7000_idiv_base [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check [temp] != chip->rm7000_idiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_idiv_automaton_state = rm7000_idiv_transitions [temp];

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm7000_other_automaton_state = temp;
        chip->rm7000_idiv_automaton_state = _rm7000_idiv_automaton_state;
        return -1;
      }
    case 69: /* rm7_fp_divsqrt_df */
    case 70: /* rm7_fp_divsqrt_sf */
    case 71: /* rm7_fp_rsqrt_df */
    case 72: /* rm7_fp_rsqrt_sf */
    case 73: /* rm7_fp_mpy_sf */
    case 74: /* rm7_fp_mpy_df */
      {
        unsigned char _rm7000_fdiv_automaton_state;

        temp = rm7000_fdiv_transitions [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        if (temp >= 207)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_fdiv_automaton_state = temp;

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm7000_other_automaton_state = temp;
        chip->rm7000_fdiv_automaton_state = _rm7000_fdiv_automaton_state;
        return -1;
      }
    case 76: /* rm9k_load */
    case 77: /* rm9k_store */
    case 78: /* rm9k_int */
    case 79: /* rm9k_int_cmove */
    case 80: /* rm9k_mulsi */
    case 84: /* rm9k_mfhilo */
    case 85: /* rm9k_mthilo */
    case 86: /* rm9k_xfer */
    case 87: /* rm9k_fquick */
    case 88: /* rm9k_fcmove */
    case 89: /* rm9k_fadd */
    case 90: /* rm9k_fmuls */
    case 91: /* rm9k_fmuld */
    case 94: /* rm9k_branch */
    case 95: /* rm9k_unknown */
      {

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm9k_main_automaton_state = temp;
        return -1;
      }
    case 81: /* rm9k_muldi */
    case 82: /* rm9k_divsi */
    case 83: /* rm9k_divdi */
      {
        unsigned char _rm9k_imul_automaton_state;

        temp = rm9k_imul_transitions [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        if (temp >= 71)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_imul_automaton_state = temp;

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm9k_main_automaton_state = temp;
        chip->rm9k_imul_automaton_state = _rm9k_imul_automaton_state;
        return -1;
      }
    case 92: /* rm9k_fdivs */
    case 93: /* rm9k_fdivd */
      {
        unsigned char _rm9k_fdiv_automaton_state;

        temp = rm9k_fdiv_transitions [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        if (temp >= 38)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_fdiv_automaton_state = temp;

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm9k_main_automaton_state = temp;
        chip->rm9k_fdiv_automaton_state = _rm9k_fdiv_automaton_state;
        return -1;
      }
    case 96: /* ir_sr70_unknown */
    case 125: /* ir_sr70_multi */
      {

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        return -1;
      }
    case 97: /* ir_sr70_branch */
    case 98: /* ir_sr70_load */
    case 99: /* ir_sr70_store */
    case 102: /* ir_sr70_condmove */
    case 105: /* ir_sr70_hilo */
    case 106: /* ir_sr70_arith */
    case 111: /* ir_sr70_icmp */
    case 126: /* ir_sr70_nop */
      {
        unsigned char _sr71_cpu1_automaton_state;

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        return -1;
      }
    case 100: /* ir_sr70_fload */
    case 101: /* ir_sr70_fstore */
    case 103: /* ir_sr70_xfer_from */
    case 104: /* ir_sr70_xfer_to */
      {
        unsigned char _sr71_cp1_automaton_state;
        unsigned char _sr71_cpu1_automaton_state;

        temp = sr71_cp1_transitions [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp1_automaton_state = temp;

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_cp1_automaton_state = _sr71_cp1_automaton_state;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        return -1;
      }
    case 107: /* ir_sr70_imul_si */
    case 108: /* ir_sr70_imul_di */
    case 109: /* ir_sr70_idiv_si */
    case 110: /* ir_sr70_idiv_di */
      {
        unsigned char _sr71_imacc_automaton_state;
        unsigned char _sr71_cpu1_automaton_state;

        temp = sr71_imacc_base [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check [temp] != chip->sr71_imacc_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_imacc_automaton_state = sr71_imacc_transitions [temp];

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_imacc_automaton_state = _sr71_imacc_automaton_state;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        return -1;
      }
    case 112: /* ir_sr70_fadd_sf */
    case 113: /* ir_sr70_fadd_df */
    case 114: /* ir_sr70_fmul_sf */
    case 115: /* ir_sr70_fmul_df */
    case 118: /* ir_sr70_fabs */
    case 119: /* ir_sr70_fcmp */
    case 120: /* ir_sr70_fcvt */
      {
        unsigned char _sr71_cp2_automaton_state;

        temp = sr71_cp2_transitions [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        if (temp >= 8)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp2_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_cp2_automaton_state = _sr71_cp2_automaton_state;
        return -1;
      }
    case 116: /* ir_sr70_fdiv_sf */
    case 117: /* ir_sr70_fdiv_df */
    case 121: /* ir_sr70_fsqrt_sf */
    case 122: /* ir_sr70_fsqrt_df */
    case 123: /* ir_sr70_frsqrt_sf */
    case 124: /* ir_sr70_frsqrt_df */
      {
        unsigned char _sr71_fextra_automaton_state;
        unsigned char _sr71_cp2_automaton_state;

        temp = sr71_fextra_base [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check [temp] != chip->sr71_fextra_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_fextra_automaton_state = sr71_fextra_transitions [temp];

        temp = sr71_cp2_transitions [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        if (temp >= 8)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp2_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_fextra_automaton_state = _sr71_fextra_automaton_state;
        chip->sr71_cp2_automaton_state = _sr71_cp2_automaton_state;
        return -1;
      }
    case 127: /* $advance_cycle */
      {
        unsigned char _sr71_imacc_automaton_state;
        unsigned char _sr71_fextra_automaton_state;
        unsigned char _sr71_cp2_automaton_state;
        unsigned char _sr71_cp1_automaton_state;
        unsigned char _sr71_cpu1_automaton_state;
        unsigned char _sr71_cpu_automaton_state;
        unsigned char _rm9k_fdiv_automaton_state;
        unsigned char _rm9k_imul_automaton_state;
        unsigned char _rm9k_main_automaton_state;
        unsigned char _rm7000_idiv_automaton_state;
        unsigned char _rm7000_fdiv_automaton_state;
        unsigned char _rm7000_other_automaton_state;
        unsigned char _vr55_automaton_state;

        temp = sr71_imacc_base [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check [temp] != chip->sr71_imacc_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_imacc_automaton_state = sr71_imacc_transitions [temp];

        temp = sr71_fextra_base [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check [temp] != chip->sr71_fextra_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_fextra_automaton_state = sr71_fextra_transitions [temp];

        temp = sr71_cp2_transitions [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        if (temp >= 8)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp2_automaton_state = temp;

        temp = sr71_cp1_transitions [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp1_automaton_state = temp;

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu_automaton_state = temp;

        temp = rm9k_fdiv_transitions [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        if (temp >= 38)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_fdiv_automaton_state = temp;

        temp = rm9k_imul_transitions [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        if (temp >= 71)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_imul_automaton_state = temp;

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_main_automaton_state = temp;

        temp = rm7000_idiv_base [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check [temp] != chip->rm7000_idiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_idiv_automaton_state = rm7000_idiv_transitions [temp];

        temp = rm7000_fdiv_transitions [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        if (temp >= 207)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_fdiv_automaton_state = temp;

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_other_automaton_state = temp;

        temp = vr55_transitions [vr55_translate [insn_code] + chip->vr55_automaton_state * 8];
        if (temp >= 48)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr55_automaton_state = temp;

        temp = vr54_transitions [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        if (temp >= 12)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr54_automaton_state = temp;
        chip->sr71_imacc_automaton_state = _sr71_imacc_automaton_state;
        chip->sr71_fextra_automaton_state = _sr71_fextra_automaton_state;
        chip->sr71_cp2_automaton_state = _sr71_cp2_automaton_state;
        chip->sr71_cp1_automaton_state = _sr71_cp1_automaton_state;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        chip->sr71_cpu_automaton_state = _sr71_cpu_automaton_state;
        chip->rm9k_fdiv_automaton_state = _rm9k_fdiv_automaton_state;
        chip->rm9k_imul_automaton_state = _rm9k_imul_automaton_state;
        chip->rm9k_main_automaton_state = _rm9k_main_automaton_state;
        chip->rm7000_idiv_automaton_state = _rm7000_idiv_automaton_state;
        chip->rm7000_fdiv_automaton_state = _rm7000_fdiv_automaton_state;
        chip->rm7000_other_automaton_state = _rm7000_other_automaton_state;
        chip->vr55_automaton_state = _vr55_automaton_state;
        return -1;
      }

    default:
      return -1;
    }
}


static int *dfa_insn_codes;

static int dfa_insn_codes_length;

static void
dfa_insn_code_enlarge (int uid)
{
  int i = dfa_insn_codes_length;
  dfa_insn_codes_length = 2 * uid;
  dfa_insn_codes = xrealloc (dfa_insn_codes,
                 dfa_insn_codes_length * sizeof(int));
  for (; i < dfa_insn_codes_length; i++)
    dfa_insn_codes[i] = -1;
}

static inline int
dfa_insn_code (rtx insn)
{
  int uid = INSN_UID (insn);
  int insn_code;

  if (uid >= dfa_insn_codes_length)
    dfa_insn_code_enlarge (uid);

  insn_code = dfa_insn_codes[uid];
  if (insn_code < 0)
    {
      insn_code = internal_dfa_insn_code (insn);
      dfa_insn_codes[uid] = insn_code;
    }
  return insn_code;
}

int
state_transition (state_t state, rtx insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return -1;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_transition (insn_code, state);
}


#if AUTOMATON_STATE_ALTS

static int
internal_state_alts (int insn_code, struct DFA_chip *chip)
{
  int res;

  switch (insn_code)
    {
    case 0: /* ir_vr54_unknown */
    case 1: /* ir_vr54_branch */
    case 2: /* ir_vr54_load */
    case 3: /* ir_vr54_store */
    case 4: /* ir_vr54_fstore */
    case 5: /* ir_vr54_condmove */
    case 6: /* ir_vr54_xfer */
    case 7: /* ir_vr54_hilo */
    case 8: /* ir_vr54_arith */
    case 9: /* ir_vr54_imul_si */
    case 10: /* ir_vr54_imul_di */
    case 11: /* ir_vr54_imadd_si */
    case 12: /* ir_vr54_idiv_si */
    case 13: /* ir_vr54_idiv_di */
    case 14: /* ir_vr54_fadd */
    case 15: /* ir_vr54_fmul_sf */
    case 16: /* ir_vr54_fmul_df */
    case 17: /* ir_vr54_fmadd_sf */
    case 18: /* ir_vr54_fmadd_df */
    case 19: /* ir_vr54_fdiv_sf */
    case 20: /* ir_vr54_fdiv_df */
    case 21: /* ir_vr54_fabs */
    case 22: /* ir_vr54_fcmp */
    case 23: /* ir_vr54_fcvt */
    case 24: /* ir_vr54_frsqrt_sf */
    case 25: /* ir_vr54_frsqrt_df */
    case 26: /* ir_vr54_multi */
      {

        res = vr54_state_alts [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        break;
      }

    case 27: /* ir_vr55_unknown */
    case 28: /* ir_vr55_branch */
    case 29: /* ir_vr55_load */
    case 30: /* ir_vr55_store */
    case 31: /* ir_vr55_condmove */
    case 32: /* ir_vr55_xfer */
    case 33: /* ir_vr55_hilo */
    case 34: /* ir_vr55_arith */
    case 35: /* ir_vr55_imul_si */
    case 36: /* ir_vr55_imul_di */
    case 37: /* ir_vr55_imadd_si */
    case 38: /* ir_vr55_idiv_si */
    case 39: /* ir_vr55_idiv_di */
    case 40: /* ir_vr55_fadd */
    case 41: /* ir_vr55_fmul_sf */
    case 42: /* ir_vr55_fmul_df */
    case 43: /* ir_vr55_fmadd_sf */
    case 44: /* ir_vr55_fmadd_df */
    case 45: /* ir_vr55_fdiv_sf */
    case 46: /* ir_vr55_fdiv_df */
    case 47: /* ir_vr55_fabs */
    case 48: /* ir_vr55_fcmp */
    case 49: /* ir_vr55_fcvt_sf */
    case 50: /* ir_vr55_fcvt_df */
    case 51: /* ir_vr55_frsqrt_sf */
    case 52: /* ir_vr55_frsqrt_df */
    case 53: /* ir_vr55_multi */
      {

        res = vr55_state_alts [vr55_translate [insn_code] + chip->vr55_automaton_state * 8];
        break;
      }

    case 54: /* rm7_int_other */
    case 55: /* rm7_ld */
    case 56: /* rm7_st */
    case 60: /* rm7_impy_si_mul */
    case 62: /* rm7_mthilo */
    case 63: /* rm7_mfhilo */
    case 64: /* rm7_ixfer */
    case 65: /* rm7_ibr */
    case 66: /* rm7_fp_quick */
    case 67: /* rm7_fp_other */
    case 68: /* rm7_fp_cvt */
    case 75: /* rm7_unknown */
      {

        res = rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        break;
      }

    case 57: /* rm7_idiv_si */
    case 58: /* rm7_idiv_di */
    case 59: /* rm7_impy_si_mult */
    case 61: /* rm7_impy_di */
      {
        int temp;

        temp = rm7000_idiv_base_state_alts [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check_state_alts [temp] != chip->rm7000_idiv_automaton_state)
          return 0;
        else
          res = rm7000_idiv_state_alts [temp];
        res += rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        break;
      }

    case 69: /* rm7_fp_divsqrt_df */
    case 70: /* rm7_fp_divsqrt_sf */
    case 71: /* rm7_fp_rsqrt_df */
    case 72: /* rm7_fp_rsqrt_sf */
    case 73: /* rm7_fp_mpy_sf */
    case 74: /* rm7_fp_mpy_df */
      {

        res = rm7000_fdiv_state_alts [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        res += rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        break;
      }

    case 76: /* rm9k_load */
    case 77: /* rm9k_store */
    case 78: /* rm9k_int */
    case 79: /* rm9k_int_cmove */
    case 80: /* rm9k_mulsi */
    case 84: /* rm9k_mfhilo */
    case 85: /* rm9k_mthilo */
    case 86: /* rm9k_xfer */
    case 87: /* rm9k_fquick */
    case 88: /* rm9k_fcmove */
    case 89: /* rm9k_fadd */
    case 90: /* rm9k_fmuls */
    case 91: /* rm9k_fmuld */
    case 94: /* rm9k_branch */
    case 95: /* rm9k_unknown */
      {

        res = rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        break;
      }

    case 81: /* rm9k_muldi */
    case 82: /* rm9k_divsi */
    case 83: /* rm9k_divdi */
      {

        res = rm9k_imul_state_alts [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        res += rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        break;
      }

    case 92: /* rm9k_fdivs */
    case 93: /* rm9k_fdivd */
      {

        res = rm9k_fdiv_state_alts [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        res += rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        break;
      }

    case 96: /* ir_sr70_unknown */
    case 125: /* ir_sr70_multi */
      {

        res = sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 97: /* ir_sr70_branch */
    case 98: /* ir_sr70_load */
    case 99: /* ir_sr70_store */
    case 102: /* ir_sr70_condmove */
    case 105: /* ir_sr70_hilo */
    case 106: /* ir_sr70_arith */
    case 111: /* ir_sr70_icmp */
    case 126: /* ir_sr70_nop */
      {

        res = sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 100: /* ir_sr70_fload */
    case 101: /* ir_sr70_fstore */
    case 103: /* ir_sr70_xfer_from */
    case 104: /* ir_sr70_xfer_to */
      {

        res = sr71_cp1_state_alts [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        res += sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 107: /* ir_sr70_imul_si */
    case 108: /* ir_sr70_imul_di */
    case 109: /* ir_sr70_idiv_si */
    case 110: /* ir_sr70_idiv_di */
      {
        int temp;

        temp = sr71_imacc_base_state_alts [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check_state_alts [temp] != chip->sr71_imacc_automaton_state)
          return 0;
        else
          res = sr71_imacc_state_alts [temp];
        res += sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 112: /* ir_sr70_fadd_sf */
    case 113: /* ir_sr70_fadd_df */
    case 114: /* ir_sr70_fmul_sf */
    case 115: /* ir_sr70_fmul_df */
    case 118: /* ir_sr70_fabs */
    case 119: /* ir_sr70_fcmp */
    case 120: /* ir_sr70_fcvt */
      {

        res = sr71_cp2_state_alts [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 116: /* ir_sr70_fdiv_sf */
    case 117: /* ir_sr70_fdiv_df */
    case 121: /* ir_sr70_fsqrt_sf */
    case 122: /* ir_sr70_fsqrt_df */
    case 123: /* ir_sr70_frsqrt_sf */
    case 124: /* ir_sr70_frsqrt_df */
      {
        int temp;

        temp = sr71_fextra_base_state_alts [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check_state_alts [temp] != chip->sr71_fextra_automaton_state)
          return 0;
        else
          res = sr71_fextra_state_alts [temp];
        res += sr71_cp2_state_alts [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 127: /* $advance_cycle */
      {
        int temp;

        temp = sr71_imacc_base_state_alts [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check_state_alts [temp] != chip->sr71_imacc_automaton_state)
          return 0;
        else
          res = sr71_imacc_state_alts [temp];

        temp = sr71_fextra_base_state_alts [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check_state_alts [temp] != chip->sr71_fextra_automaton_state)
          return 0;
        else
          res += sr71_fextra_state_alts [temp];
        res += sr71_cp2_state_alts [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        res += sr71_cp1_state_alts [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        res += sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        res += rm9k_fdiv_state_alts [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        res += rm9k_imul_state_alts [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        res += rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];

        temp = rm7000_idiv_base_state_alts [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check_state_alts [temp] != chip->rm7000_idiv_automaton_state)
          return 0;
        else
          res += rm7000_idiv_state_alts [temp];
        res += rm7000_fdiv_state_alts [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        res += rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        res += vr55_state_alts [vr55_translate [insn_code] + chip->vr55_automaton_state * 8];
        res += vr54_state_alts [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        break;
      }


    default:
      res = 0;
      break;
    }
  return res;
}

int
state_alts (state, insn)
	state_t state;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_alts (insn_code, state);
}


#endif /* #if AUTOMATON_STATE_ALTS */

int
min_issue_delay (state_t state, rtx insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_min_issue_delay (insn_code, state);
}

static int
internal_state_dead_lock_p (struct DFA_chip *chip)
{
  if (vr54_dead_lock [chip->vr54_automaton_state])
    return 1/* TRUE */;
  if (vr55_dead_lock [chip->vr55_automaton_state])
    return 1/* TRUE */;
  if (rm7000_other_dead_lock [chip->rm7000_other_automaton_state])
    return 1/* TRUE */;
  if (rm7000_fdiv_dead_lock [chip->rm7000_fdiv_automaton_state])
    return 1/* TRUE */;
  if (rm7000_idiv_dead_lock [chip->rm7000_idiv_automaton_state])
    return 1/* TRUE */;
  if (rm9k_main_dead_lock [chip->rm9k_main_automaton_state])
    return 1/* TRUE */;
  if (rm9k_imul_dead_lock [chip->rm9k_imul_automaton_state])
    return 1/* TRUE */;
  if (rm9k_fdiv_dead_lock [chip->rm9k_fdiv_automaton_state])
    return 1/* TRUE */;
  if (sr71_cpu_dead_lock [chip->sr71_cpu_automaton_state])
    return 1/* TRUE */;
  if (sr71_cpu1_dead_lock [chip->sr71_cpu1_automaton_state])
    return 1/* TRUE */;
  if (sr71_cp1_dead_lock [chip->sr71_cp1_automaton_state])
    return 1/* TRUE */;
  if (sr71_cp2_dead_lock [chip->sr71_cp2_automaton_state])
    return 1/* TRUE */;
  if (sr71_fextra_dead_lock [chip->sr71_fextra_automaton_state])
    return 1/* TRUE */;
  if (sr71_imacc_dead_lock [chip->sr71_imacc_automaton_state])
    return 1/* TRUE */;
  return 0/* FALSE */;
}

int
state_dead_lock_p (state_t state)
{
  return internal_state_dead_lock_p (state);
}

int
state_size (void)
{
  return sizeof (struct DFA_chip);
}

static inline void
internal_reset (struct DFA_chip *chip)
{
  memset (chip, 0, sizeof (struct DFA_chip));
}

void
state_reset (state_t state)
{
  internal_reset (state);
}

int
min_insn_conflict_delay (state_t state, rtx insn, rtx insn2)
{
  struct DFA_chip DFA_chip;
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  memcpy (&DFA_chip, state, sizeof (DFA_chip));
  internal_reset (&DFA_chip);
  if (internal_state_transition (insn_code, &DFA_chip) > 0)
    abort ();
  return internal_min_issue_delay (insn2_code, &DFA_chip);
}

static int
internal_insn_latency (int insn_code ATTRIBUTE_UNUSED,
	int insn2_code ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	rtx insn2 ATTRIBUTE_UNUSED)
{
  static const unsigned char default_latencies[] =
    {
        1,   3,   2,   1,   1,   4,   2,   1,
        1,   3,   4,   3,  42,  74,   4,   5,
        6,   9,  10,  42,  72,   2,   2,   6,
       61, 121,   1,   1,   2,   3,   1,   2,
        2,   2,   1,   3,   4,   3,  42,  74,
        4,   5,   6,   9,  10,  30,  59,   2,
        2,   4,   6,  60, 118,   1,   1,   2,
        1,  36,  68,   5,   2,   9,   3,   1,
        2,   3,   4,   4,   4,  36,  21,  68,
       38,   4,   5,   1,   3,   1,   1,   2,
        3,   7,  38,  70,   1,   5,   2,   2,
        2,   6,   6,   9,  22,  37,   2,   1,
        1,   6,   2,   1,   9,   1,   4,   6,
        9,   1,   1,   4,   6,  41,  73,   1,
        8,  10,   8,  16,  60, 120,   4,  10,
       12,  62, 122,  48, 240,   1,   1,
    };
  if (insn_code >= DFA__ADVANCE_CYCLE || insn2_code >= DFA__ADVANCE_CYCLE)
    return 0;
  switch (insn_code)
    {
    }
  return default_latencies[insn_code];
}

int
insn_latency (rtx insn, rtx insn2)
{
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  return internal_insn_latency (insn_code, insn2_code, insn, insn2);
}

void
print_reservation (FILE *f, rtx insn ATTRIBUTE_UNUSED)
{
  static const char *const reservation_names[] =
    {
      "(vr54_dp0+vr54_dp1+vr54_mem+vr54_mac)",
      "vr54_dp0|vr54_dp1",
      "vr54_mem",
      "vr54_mem",
      "vr54_mem",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_mac",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "(vr54_dp0+vr54_dp1+vr54_mem+vr54_mac)",
      "(vr55_dp0+vr55_dp1+vr55_mem+vr55_mac+vr55_fp+vr55_bru)",
      "vr55_bru",
      "vr55_mem",
      "vr55_mem",
      "vr55_dp0|vr55_dp1",
      "vr55_dp0|vr55_dp1",
      "vr55_dp0|vr55_dp1",
      "vr55_dp0|vr55_dp1",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_fp",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_fp",
      "vr55_fp",
      "vr55_fp",
      "vr55_fp",
      "vr55_mac",
      "vr55_mac",
      "(vr55_dp0+vr55_dp1+vr55_mem+vr55_mac+vr55_fp+vr55_bru)",
      "rm7_iaddsub",
      "rm7_imem",
      "rm7_imem",
      "(rm7_impydiv+rm7_impydiv_iter*36)",
      "(rm7_impydiv+rm7_impydiv_iter*68)",
      "(rm7_impydiv+rm7_impydiv_iter*3)",
      "rm7_impydiv",
      "(rm7_impydiv+rm7_impydiv_iter*8)",
      "rm7_impydiv",
      "rm7_impydiv",
      "rm7_iaddsub",
      "rm7_branch",
      "rm7_fpadd",
      "rm7_fpadd",
      "rm7_fpadd",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*36)",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*21)",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*68)",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*38)",
      "(rm7_fpmpy+rm7_fpmpy_iter)",
      "(rm7_fpmpy+rm7_fpmpy_iter*2)",
      "rm7_single_dispatch",
      "rm9k_m",
      "rm9k_m",
      "rm9k_any1|rm9k_any2",
      "rm9k_any1|rm9k_any2",
      "rm9k_f_int",
      "(rm9k_f_int+rm9k_imul*7)",
      "(rm9k_f_int+rm9k_imul*38)",
      "(rm9k_f_int+rm9k_imul*70)",
      "rm9k_f_int",
      "rm9k_f_int",
      "rm9k_m",
      "rm9k_f_float",
      "rm9k_m",
      "rm9k_f_float",
      "rm9k_f_float",
      "rm9k_f_float*3",
      "(rm9k_f_float+rm9k_fdiv*22)",
      "(rm9k_f_float+rm9k_fdiv*37)",
      "rm9k_any1|rm9k_any2",
      "(rm9k_m+rm9k_f_int+rm9k_any1+rm9k_any2)",
      "serial_dispatch",
      "ri_branch",
      "ri_mem",
      "ri_mem",
      "(cpu_iss+cp1_iss),(ri_mem+rf_ldmem)",
      "(cpu_iss+cp1_iss),(fpu_mov+ri_mem)",
      "ri_insns",
      "(cpu_iss+cp1_iss),(fpu_mov+ri_mem)",
      "(cpu_iss+cp1_iss),(ri_mem+rf_ldmem)",
      "ri_insns",
      "ri_insns",
      "ri_alux,ipu_alux,ipu_macc_iter",
      "ri_alux,ipu_alux,ipu_macc_iter*3",
      "ri_alux,ipu_alux,ipu_macc_iter*38",
      "ri_alux,ipu_alux,ipu_macc_iter*70",
      "ri_insns",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu*6",
      "(rf_multi1+fpu_iter*51)",
      "(rf_multi1+fpu_iter*109)",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu*4",
      "(rf_multi1+fpu_iter*53)",
      "(rf_multi1+fpu_iter*111)",
      "(rf_multi1+fpu_iter*39)",
      "(rf_multi1+fpu_iter*229)",
      "serial_dispatch",
      "ri_insns",
      "nothing"
    };
  int insn_code;

  if (insn == 0)
    insn_code = DFA__ADVANCE_CYCLE;
  else
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        insn_code = DFA__ADVANCE_CYCLE;
    }
  fputs (reservation_names[insn_code], f);
}


#if CPU_UNITS_QUERY

int
get_cpu_unit_code (cpu_unit_name)
	const char *cpu_unit_name;
{
  struct name_code {const char *name; int code;};
  int cmp, l, m, h;
  static struct name_code name_code_table [] =
    {
    };

  /* The following is binary search: */
  l = 0;
  h = sizeof (name_code_table) / sizeof (struct name_code) - 1;
  while (l <= h)
    {
      m = (l + h) / 2;
      cmp = strcmp (cpu_unit_name, name_code_table [m].name);
      if (cmp < 0)
        h = m - 1;
      else if (cmp > 0)
        l = m + 1;
      else
        return name_code_table [m].code;
    }
  return -1;
}

int
cpu_unit_reservation_p (state, cpu_unit_code)
	state_t state;
	int cpu_unit_code;
{
  if (cpu_unit_code < 0 || cpu_unit_code >= 0)
    abort ();
  if ((vr54_reserved_units [((struct DFA_chip *) state)->vr54_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((vr55_reserved_units [((struct DFA_chip *) state)->vr55_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm7000_other_reserved_units [((struct DFA_chip *) state)->rm7000_other_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm7000_fdiv_reserved_units [((struct DFA_chip *) state)->rm7000_fdiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm7000_idiv_reserved_units [((struct DFA_chip *) state)->rm7000_idiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm9k_main_reserved_units [((struct DFA_chip *) state)->rm9k_main_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm9k_imul_reserved_units [((struct DFA_chip *) state)->rm9k_imul_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm9k_fdiv_reserved_units [((struct DFA_chip *) state)->rm9k_fdiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cpu_reserved_units [((struct DFA_chip *) state)->sr71_cpu_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cpu1_reserved_units [((struct DFA_chip *) state)->sr71_cpu1_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cp1_reserved_units [((struct DFA_chip *) state)->sr71_cp1_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cp2_reserved_units [((struct DFA_chip *) state)->sr71_cp2_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_fextra_reserved_units [((struct DFA_chip *) state)->sr71_fextra_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_imacc_reserved_units [((struct DFA_chip *) state)->sr71_imacc_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  return 0;
}


#endif /* #if CPU_UNITS_QUERY */

void
dfa_clean_insn_cache (void)
{
  int i;

  for (i = 0; i < dfa_insn_codes_length; i++)
    dfa_insn_codes [i] = -1;
}

void
dfa_start (void)
{
  dfa_insn_codes_length = get_max_uid ();
  dfa_insn_codes = xmalloc (dfa_insn_codes_length * sizeof (int));
  dfa_clean_insn_cache ();
}

void
dfa_finish (void)
{
  free (dfa_insn_codes);
}

int
const_num_delay_slots (rtx insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

int length_unit_log = 0;
