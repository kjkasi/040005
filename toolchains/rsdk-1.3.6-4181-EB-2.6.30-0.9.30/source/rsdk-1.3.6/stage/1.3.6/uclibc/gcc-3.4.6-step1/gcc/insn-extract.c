/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 533:
    case 532:
    case 531:
    case 530:
      for (i = XVECLEN (pat, 0) - 1; i >= 0; i--)
          ro[i] = *(ro_loc[i] = &XVECEXP (pat, 0, i));
      break;

    case 341:  /* *mips.md:8958 */
    case 338:  /* *mips.md:8912 */
    case 335:  /* *mips.md:8866 */
    case 332:  /* *mips.md:8820 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 340:  /* *mips.md:8943 */
    case 339:  /* *mips.md:8928 */
    case 337:  /* *mips.md:8897 */
    case 336:  /* *mips.md:8882 */
    case 334:  /* *mips.md:8851 */
    case 333:  /* *mips.md:8836 */
    case 331:  /* *mips.md:8805 */
    case 330:  /* *mips.md:8790 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 327:  /* prefetch_di */
    case 324:  /* prefetch_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 326:  /* prefetch_indexed_di */
    case 325:  /* prefetch_di_address */
    case 323:  /* prefetch_indexed_si */
    case 322:  /* prefetch_si_address */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 319:  /* call_value_split */
    case 318:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 317:  /* call_split */
    case 316:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 321:  /* call_value_multiple_split */
    case 320:  /* call_value_multiple_internal */
    case 315:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 314:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 313:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 309:  /* eh_set_lr_di */
    case 308:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 307:  /* get_fnaddr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 306:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 303:  /* casesi_internal_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 302:  /* casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 301:  /* tablejump_internal2 */
    case 300:  /* tablejump_internal1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 299:  /* indirect_jump_internal2 */
    case 298:  /* indirect_jump_internal1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 297:  /* *mips.md:7997 */
    case 296:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 243:  /* *mips.md:6636 */
    case 242:  /* *mips.md:6608 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 241:  /* branch_equality_di_inverted */
    case 240:  /* branch_equality_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 239:  /* branch_equality_di */
    case 238:  /* branch_equality */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 237:  /* branch_zero_di_inverted */
    case 235:  /* branch_zero_inverted */
    case 233:  /* branch_fp_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 236:  /* branch_zero_di */
    case 234:  /* branch_zero */
    case 232:  /* branch_fp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 347:  /* consttable_df */
    case 346:  /* consttable_sf */
    case 345:  /* consttable_di */
    case 344:  /* consttable_si */
    case 343:  /* consttable_hi */
    case 342:  /* consttable_qi */
    case 206:  /* cprestore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 204:  /* loadgp */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 203:  /* store_df_high */
    case 201:  /* load_df_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 189:  /* *mips.md:4752 */
    case 188:  /* *mips.md:4742 */
    case 187:  /* *mips.md:4732 */
    case 186:  /* *mips.md:4722 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 178:  /* *mips.md:4494 */
    case 173:  /* *mips.md:4347 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 200:  /* *mips.md:5070 */
    case 199:  /* movdf_internal2 */
    case 198:  /* movdf_internal1b */
    case 197:  /* movdf_internal1a */
    case 196:  /* *mips.md:5012 */
    case 195:  /* movsf_internal2 */
    case 194:  /* movsf_internal1 */
    case 193:  /* *mips.md:4928 */
    case 192:  /* movqi_internal */
    case 191:  /* *mips.md:4808 */
    case 190:  /* movhi_internal */
    case 181:  /* movcc */
    case 180:  /* *mips.md:4517 */
    case 179:  /* movsi_internal */
    case 177:  /* *movdi_internal2_mips16 */
    case 176:  /* movdi_internal2 */
    case 175:  /* *mips.md:4368 */
    case 174:  /* movdi_internal */
    case 166:  /* *got_dispdi */
    case 165:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 160:  /* mov_sdr */
    case 156:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 158:  /* mov_ldr */
    case 154:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 312:  /* load_calldi */
    case 311:  /* load_callsi */
    case 202:  /* load_df_high */
    case 159:  /* mov_sdl */
    case 157:  /* mov_ldl */
    case 155:  /* mov_swl */
    case 153:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 116:  /* *mips.md:3262 */
    case 115:  /* *mips.md:3253 */
    case 114:  /* *mips.md:3244 */
    case 113:  /* *mips.md:3226 */
    case 112:  /* *mips.md:3211 */
    case 111:  /* *mips.md:3198 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 146:  /* fix_truncsfsi2_macro */
    case 144:  /* fix_truncdfsi2_macro */
    case 86:  /* negdi2_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 82:  /* ffsdi2 */
    case 81:  /* ffssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 76:  /* *mips.md:2609 */
    case 75:  /* *mips.md:2589 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 249:  /* sne_di_zero */
    case 248:  /* sne_si_zero */
    case 247:  /* *mips.md:6940 */
    case 246:  /* seq_di_zero */
    case 245:  /* *mips.md:6922 */
    case 244:  /* seq_si_zero */
    case 168:  /* *got_pagedi */
    case 167:  /* *got_pagesi */
    case 163:  /* *xgot_hidi */
    case 161:  /* *xgot_hisi */
    case 152:  /* floatdisf2 */
    case 151:  /* floatsisf2 */
    case 150:  /* floatdidf2 */
    case 149:  /* floatsidf2 */
    case 148:  /* fix_truncsfdi2 */
    case 147:  /* fix_truncdfdi2 */
    case 145:  /* fix_truncsfsi2_insn */
    case 143:  /* fix_truncdfsi2_insn */
    case 142:  /* extendsfdf2 */
    case 141:  /* *extendqidi2_mem */
    case 140:  /* *extendqidi2 */
    case 139:  /* extendqisi2_hw */
    case 138:  /* *extendqisi2_mem */
    case 137:  /* *extendqisi2 */
    case 136:  /* *extendqihi2_internal_mem */
    case 135:  /* *extendqihi2 */
    case 134:  /* extendhisi2_hw */
    case 133:  /* extendhisi2_mem */
    case 132:  /* *extendhisi2 */
    case 131:  /* *extendhidi2_mem */
    case 130:  /* *extendhidi2 */
    case 129:  /* extendsidi2 */
    case 128:  /* *mips.md:3466 */
    case 127:  /* *mips.md:3455 */
    case 126:  /* *mips.md:3432 */
    case 125:  /* *mips.md:3421 */
    case 124:  /* *mips.md:3398 */
    case 123:  /* *mips.md:3387 */
    case 122:  /* *mips.md:3363 */
    case 121:  /* *mips.md:3352 */
    case 120:  /* *mips.md:3329 */
    case 119:  /* *mips.md:3318 */
    case 118:  /* *zero_extendsidi2_mem */
    case 117:  /* zero_extendsidi2 */
    case 109:  /* truncdiqi2 */
    case 108:  /* truncdihi2 */
    case 107:  /* truncdisi2 */
    case 106:  /* truncdfsf2 */
    case 91:  /* one_cmpldi2 */
    case 90:  /* one_cmplsi2 */
    case 89:  /* negsf2 */
    case 88:  /* negdf2 */
    case 87:  /* negdi2_internal_2 */
    case 85:  /* negsi2 */
    case 84:  /* clzdi2 */
    case 83:  /* clzsi2 */
    case 80:  /* abssf2 */
    case 79:  /* absdf2 */
    case 78:  /* absdi2 */
    case 77:  /* abssi2 */
    case 74:  /* sqrtsf2 */
    case 73:  /* sqrtdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 72:  /* udivmoddi4 */
    case 71:  /* udivmodsi4 */
    case 70:  /* divmoddi4 */
    case 69:  /* divmodsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 64:  /* *mips.md:2352 */
    case 63:  /* *mips.md:2342 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 62:  /* *mips.md:2332 */
    case 61:  /* *mips.md:2322 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 60:  /* *mips.md:2311 */
    case 59:  /* *mips.md:2301 */
    case 58:  /* *mips.md:2291 */
    case 57:  /* *mips.md:2281 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 56:  /* *smul_acc_di */
    case 55:  /* *umul_acc_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 54:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 51:  /* smulsi3_highpart_neg_mulhi_internal */
    case 48:  /* umulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 50:  /* smulsi3_highpart_mulhi_internal */
    case 47:  /* umulsi3_highpart_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 53:  /* umuldi3_highpart */
    case 52:  /* smuldi3_highpart */
    case 49:  /* smulsi3_highpart_internal */
    case 46:  /* umulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 45:  /* *umsac_di */
    case 44:  /* *smsac_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 43:  /* *umuls_di */
    case 42:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 40:  /* *mulsidi3_64bit_parts */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 39:  /* *mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 105:  /* *nordi3 */
    case 104:  /* *norsi3 */
    case 41:  /* umulsidi3_32bit */
    case 38:  /* mulsidi3_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 35:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 34:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 33:  /* *mul_sub_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 32:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 31:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 30:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 37:  /* muldi3_internal2 */
    case 29:  /* mulsi3_r4000 */
    case 27:  /* mulsi3_mult3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 208:  /* ashlsi3_internal1_extend */
    case 185:  /* *mips.md:4712 */
    case 184:  /* *mips.md:4702 */
    case 183:  /* *mips.md:4692 */
    case 182:  /* *mips.md:4682 */
    case 110:  /* *mips.md:3189 */
    case 22:  /* subsi3_internal_2 */
    case 16:  /* *mips.md:1193 */
    case 15:  /* addsi3_internal_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 227:  /* lshrdi3_internal3 */
    case 226:  /* lshrdi3_internal2 */
    case 225:  /* lshrdi3_internal */
    case 219:  /* ashrdi3_internal3 */
    case 218:  /* ashrdi3_internal2 */
    case 217:  /* ashrdi3_internal */
    case 212:  /* ashldi3_internal3 */
    case 211:  /* ashldi3_internal2 */
    case 210:  /* ashldi3_internal */
    case 36:  /* muldi3_internal */
    case 28:  /* mulsi3_internal */
    case 20:  /* subdi3_internal */
    case 10:  /* adddi3_internal_2 */
    case 9:  /* adddi3_internal_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 13:  /* *mips.md:1068 */
    case 7:  /* *mips.md:751 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 12:  /* *mips.md:1056 */
    case 6:  /* *mips.md:739 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 295:  /* sge_sf */
    case 294:  /* sgt_sf */
    case 293:  /* sle_sf */
    case 292:  /* slt_sf */
    case 291:  /* seq_sf */
    case 290:  /* sunge_sf */
    case 289:  /* sungt_sf */
    case 288:  /* sunle_sf */
    case 287:  /* suneq_sf */
    case 286:  /* sunlt_sf */
    case 285:  /* sunordered_sf */
    case 284:  /* sge_df */
    case 283:  /* sgt_df */
    case 282:  /* sle_df */
    case 281:  /* slt_df */
    case 280:  /* seq_df */
    case 279:  /* sunge_df */
    case 278:  /* sungt_df */
    case 277:  /* sunle_df */
    case 276:  /* suneq_df */
    case 275:  /* sunlt_df */
    case 274:  /* sunordered_df */
    case 273:  /* *mips.md:7686 */
    case 272:  /* sleu_di_const */
    case 271:  /* *mips.md:7659 */
    case 270:  /* sleu_si_const */
    case 269:  /* *mips.md:7608 */
    case 268:  /* sltu_di */
    case 267:  /* *mips.md:7585 */
    case 266:  /* sltu_si */
    case 265:  /* *mips.md:7476 */
    case 264:  /* sgtu_di */
    case 263:  /* *mips.md:7458 */
    case 262:  /* sgtu_si */
    case 261:  /* *mips.md:7362 */
    case 260:  /* sle_di_const */
    case 259:  /* *mips.md:7335 */
    case 258:  /* sle_si_const */
    case 257:  /* *mips.md:7284 */
    case 256:  /* slt_di */
    case 255:  /* *mips.md:7261 */
    case 254:  /* slt_si */
    case 253:  /* *mips.md:7152 */
    case 252:  /* sgt_di */
    case 251:  /* *mips.md:7134 */
    case 250:  /* sgt_si */
    case 231:  /* rotrdi3 */
    case 230:  /* rotrsi3 */
    case 229:  /* *mips.md:6224 */
    case 228:  /* lshrdi3_internal4 */
    case 224:  /* *mips.md:5993 */
    case 223:  /* lshrsi3_internal2 */
    case 222:  /* lshrsi3_internal1 */
    case 221:  /* *mips.md:5873 */
    case 220:  /* ashrdi3_internal4 */
    case 216:  /* ashrsi3_internal2 */
    case 215:  /* ashrsi3_internal1 */
    case 214:  /* *mips.md:5542 */
    case 213:  /* ashldi3_internal4 */
    case 209:  /* ashlsi3_internal2 */
    case 207:  /* ashlsi3_internal1 */
    case 172:  /* *lowdi_mips16 */
    case 171:  /* *lowsi_mips16 */
    case 170:  /* *lowdi */
    case 169:  /* *lowsi */
    case 164:  /* *xgot_lodi */
    case 162:  /* *xgot_losi */
    case 103:  /* *mips.md:3088 */
    case 102:  /* *mips.md:3077 */
    case 101:  /* *mips.md:3046 */
    case 100:  /* *mips.md:3035 */
    case 99:  /* *mips.md:3019 */
    case 98:  /* *mips.md:3008 */
    case 97:  /* *mips.md:2986 */
    case 96:  /* *mips.md:2975 */
    case 95:  /* *mips.md:2953 */
    case 94:  /* *mips.md:2942 */
    case 93:  /* *mips.md:2920 */
    case 92:  /* *mips.md:2909 */
    case 68:  /* *mips.md:2476 */
    case 67:  /* *mips.md:2456 */
    case 66:  /* *divsf3 */
    case 65:  /* *divdf3 */
    case 26:  /* mulsf3_r4300 */
    case 25:  /* mulsf3_internal */
    case 24:  /* muldf3_r4300 */
    case 23:  /* muldf3_internal */
    case 21:  /* subdi3_internal_3 */
    case 19:  /* subsi3_internal */
    case 18:  /* subsf3 */
    case 17:  /* subdf3 */
    case 14:  /* *mips.md:1080 */
    case 11:  /* adddi3_internal_3 */
    case 8:  /* *mips.md:763 */
    case 5:  /* addsi3_internal */
    case 4:  /* addsf3 */
    case 3:  /* adddf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2:  /* *mips.md:662 */
    case 1:  /* *mips.md:654 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 350:  /* align_8 */
    case 349:  /* align_4 */
    case 348:  /* align_2 */
    case 329:  /* hazard_nop */
    case 328:  /* nop */
    case 310:  /* exception_receiver */
    case 305:  /* return */
    case 304:  /* blockage */
    case 205:  /* loadgp_blockage */
    case 0:  /* trap */
      break;

    default:
      abort ();
    }
}
