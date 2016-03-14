/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:626 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const0_rtx);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:678 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:687 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:724 */
rtx
gen_addsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:903 */
rtx
gen_adddi3_internal_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:979 */
rtx
gen_adddi3_internal_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1041 */
rtx
gen_adddi3_internal_3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1182 */
rtx
gen_addsi3_internal_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1223 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1232 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1248 */
rtx
gen_subsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1274 */
rtx
gen_subdi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1341 */
rtx
gen_subdi3_internal_3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1350 */
rtx
gen_subsi3_internal_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1375 */
rtx
gen_muldf3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1388 */
rtx
gen_muldf3_r4300 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1405 */
rtx
gen_mulsf3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1416 */
rtx
gen_mulsf3_r4300 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1446 */
rtx
gen_mulsi3_mult3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1500 */
rtx
gen_mulsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1510 */
rtx
gen_mulsi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1843 */
rtx
gen_muldi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1853 */
rtx
gen_muldi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1893 */
rtx
gen_mulsidi3_32bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1992 */
rtx
gen_umulsidi3_32bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2082 */
rtx
gen_umulsi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	GEN_INT (32LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2096 */
rtx
gen_umulsi3_highpart_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	GEN_INT (32LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2113 */
rtx
gen_umulsi3_highpart_neg_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_NEG (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
	GEN_INT (32LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2149 */
rtx
gen_smulsi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (32LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2163 */
rtx
gen_smulsi3_highpart_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (32LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2180 */
rtx
gen_smulsi3_highpart_neg_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_NEG (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
	GEN_INT (32LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2197 */
rtx
gen_smuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	GEN_INT (64LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2211 */
rtx
gen_umuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	GEN_INT (64LL)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2229 */
rtx
gen_madsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2494 */
rtx
gen_divmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2506 */
rtx
gen_divmoddi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	operand1,
	operand2))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2518 */
rtx
gen_udivmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2530 */
rtx
gen_udivmoddi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2551 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2570 */
rtx
gen_sqrtsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2637 */
rtx
gen_abssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2658 */
rtx
gen_absdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2680 */
rtx
gen_absdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2688 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2704 */
rtx
gen_ffssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2735 */
rtx
gen_ffsdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2774 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2782 */
rtx
gen_clzdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2797 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2825 */
rtx
gen_negdi2_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2835 */
rtx
gen_negdi2_internal_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2843 */
rtx
gen_negdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2851 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2859 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2872 */
rtx
gen_one_cmpldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3133 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3154 */
rtx
gen_truncdisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3165 */
rtx
gen_truncdihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3176 */
rtx
gen_truncdiqi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3281 */
rtx
gen_zero_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3484 */
rtx
gen_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3561 */
rtx
gen_extendhisi2_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3569 */
rtx
gen_extendhisi2_hw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3646 */
rtx
gen_extendqisi2_hw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3684 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3711 */
rtx
gen_fix_truncdfsi2_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3720 */
rtx
gen_fix_truncdfsi2_macro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3747 */
rtx
gen_fix_truncsfsi2_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3756 */
rtx
gen_fix_truncsfsi2_macro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3772 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3782 */
rtx
gen_fix_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3792 */
rtx
gen_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3802 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3812 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3822 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4086 */
rtx
gen_mov_lwl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4096 */
rtx
gen_mov_lwr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	19));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4108 */
rtx
gen_mov_swl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand1,
		operand2),
	20));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4118 */
rtx
gen_mov_swr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	21));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4130 */
rtx
gen_mov_ldl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	22));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4140 */
rtx
gen_mov_ldr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	23));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4152 */
rtx
gen_mov_sdl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4162 */
rtx
gen_mov_sdr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	25));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4355 */
rtx
gen_movdi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4379 */
rtx
gen_movdi_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4505 */
rtx
gen_movsi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4626 */
rtx
gen_movcc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4787 */
rtx
gen_movhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4907 */
rtx
gen_movqi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4990 */
rtx
gen_movsf_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5001 */
rtx
gen_movsf_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5037 */
rtx
gen_movdf_internal1a (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5048 */
rtx
gen_movdf_internal1b (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5059 */
rtx
gen_movdf_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5108 */
rtx
gen_load_df_low (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	0));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5122 */
rtx
gen_load_df_high (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5137 */
rtx
gen_store_df_high (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5152 */
rtx
gen_loadgp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	26);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5173 */
rtx
gen_loadgp_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_REG (DImode,
	28)),
	4);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5184 */
rtx
gen_cprestore (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	5);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5256 */
rtx
gen_ashlsi3_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5270 */
rtx
gen_ashlsi3_internal1_extend (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5285 */
rtx
gen_ashlsi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5362 */
rtx
gen_ashldi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5389 */
rtx
gen_ashldi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5439 */
rtx
gen_ashldi3_internal3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5528 */
rtx
gen_ashldi3_internal4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5606 */
rtx
gen_ashrsi3_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5620 */
rtx
gen_ashrsi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5694 */
rtx
gen_ashrdi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5721 */
rtx
gen_ashrdi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5770 */
rtx
gen_ashrdi3_internal3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5859 */
rtx
gen_ashrdi3_internal4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5933 */
rtx
gen_lshrsi3_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5947 */
rtx
gen_lshrsi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6044 */
rtx
gen_lshrdi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6071 */
rtx
gen_lshrdi3_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6121 */
rtx
gen_lshrdi3_internal3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6210 */
rtx
gen_lshrdi3_internal4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6243 */
rtx
gen_rotrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6261 */
rtx
gen_rotrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6402 */
rtx
gen_branch_fp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), CCmode,
		operand2,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6422 */
rtx
gen_branch_fp_inverted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), CCmode,
		operand2,
		const0_rtx),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6444 */
rtx
gen_branch_zero (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), SImode,
		operand2,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6464 */
rtx
gen_branch_zero_inverted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), SImode,
		operand2,
		const0_rtx),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6484 */
rtx
gen_branch_zero_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), DImode,
		operand2,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6504 */
rtx
gen_branch_zero_di_inverted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), DImode,
		operand2,
		const0_rtx),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6526 */
rtx
gen_branch_equality (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), SImode,
		operand2,
		operand3),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6546 */
rtx
gen_branch_equality_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), DImode,
		operand2,
		operand3),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6566 */
rtx
gen_branch_equality_inverted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), SImode,
		operand2,
		operand3),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6586 */
rtx
gen_branch_equality_di_inverted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), DImode,
		operand2,
		operand3),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6913 */
rtx
gen_seq_si_zero (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	operand1,
	const0_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6931 */
rtx
gen_seq_di_zero (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (DImode,
	operand1,
	const0_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7029 */
rtx
gen_sne_si_zero (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	operand1,
	const0_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7038 */
rtx
gen_sne_di_zero (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (DImode,
	operand1,
	const0_rtx));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7125 */
rtx
gen_sgt_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7143 */
rtx
gen_sgt_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7252 */
rtx
gen_slt_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7275 */
rtx
gen_slt_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7323 */
rtx
gen_sle_si_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7350 */
rtx
gen_sle_di_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7449 */
rtx
gen_sgtu_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7467 */
rtx
gen_sgtu_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7576 */
rtx
gen_sltu_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7599 */
rtx
gen_sltu_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7647 */
rtx
gen_sleu_si_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7674 */
rtx
gen_sleu_di_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (DImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7755 */
rtx
gen_sunordered_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7764 */
rtx
gen_sunlt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7773 */
rtx
gen_suneq_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7782 */
rtx
gen_sunle_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7791 */
rtx
gen_sungt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7800 */
rtx
gen_sunge_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7809 */
rtx
gen_seq_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7818 */
rtx
gen_slt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7827 */
rtx
gen_sle_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7836 */
rtx
gen_sgt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7845 */
rtx
gen_sge_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7854 */
rtx
gen_sunordered_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7863 */
rtx
gen_sunlt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7872 */
rtx
gen_suneq_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7881 */
rtx
gen_sunle_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7890 */
rtx
gen_sungt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7899 */
rtx
gen_sunge_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7908 */
rtx
gen_seq_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7917 */
rtx
gen_slt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7926 */
rtx
gen_sle_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7935 */
rtx
gen_sgt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7944 */
rtx
gen_sge_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (CCmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7962 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8024 */
rtx
gen_indirect_jump_internal1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8031 */
rtx
gen_indirect_jump_internal2 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8069 */
rtx
gen_tablejump_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8078 */
rtx
gen_tablejump_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8179 */
rtx
gen_casesi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand0,
	GEN_INT (4LL)),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8202 */
rtx
gen_casesi_internal_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	operand0,
	GEN_INT (8LL))),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8293 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	4);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8320 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8329 */
rtx
gen_return_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8340 */
rtx
gen_get_fnaddr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand1),
	3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8371 */
rtx
gen_eh_set_lr_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	7),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8377 */
rtx
gen_eh_set_lr_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	7),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8393 */
rtx
gen_exception_receiver (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	28),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	6));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8428 */
rtx
gen_load_callsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (SImode,
	79)),
	27));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8439 */
rtx
gen_load_calldi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (DImode,
	79)),
	27));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8473 */
rtx
gen_sibcall_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8494 */
rtx
gen_sibcall_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8504 */
rtx
gen_sibcall_value_multiple_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8565 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8582 */
rtx
gen_call_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	28))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8604 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8623 */
rtx
gen_call_value_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	28))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8634 */
rtx
gen_call_value_multiple_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8656 */
rtx
gen_call_value_multiple_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	28))));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8711 */
rtx
gen_prefetch_si_address (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	gen_rtx_PLUS (SImode,
	operand0,
	operand3),
	operand1,
	operand2);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8720 */
rtx
gen_prefetch_indexed_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	gen_rtx_PLUS (SImode,
	operand0,
	operand3),
	operand1,
	operand2);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8729 */
rtx
gen_prefetch_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8740 */
rtx
gen_prefetch_di_address (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	gen_rtx_PLUS (DImode,
	operand0,
	operand3),
	operand1,
	operand2);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8749 */
rtx
gen_prefetch_indexed_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	gen_rtx_PLUS (DImode,
	operand0,
	operand3),
	operand1,
	operand2);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8758 */
rtx
gen_prefetch_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8769 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8777 */
rtx
gen_hazard_nop (void)
{
  return const1_rtx;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9032 */
rtx
gen_consttable_qi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	8);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9044 */
rtx
gen_consttable_hi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	9);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9056 */
rtx
gen_consttable_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	10);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9068 */
rtx
gen_consttable_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	11);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9080 */
rtx
gen_consttable_sf (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	12);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9097 */
rtx
gen_consttable_df (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	13);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9114 */
rtx
gen_align_2 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	14);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9122 */
rtx
gen_align_4 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	15);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9130 */
rtx
gen_align_8 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	16);
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:639 */
rtx
gen_conditional_trap (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (operands[1] == const0_rtx)
    {
      mips_gen_conditional_trap (operands);
      DONE;
    }
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx (GET_CODE (operand0), VOIDmode,
		operand2,
		operand3),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:696 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* If a large stack adjustment was forced into a register, we may be
     asked to generate rtx such as:

	(set (reg:SI sp) (plus:SI (reg:SI sp) (reg:SI pseudo)))

     but no such instruction is available in mips16.  Handle it by
     using a temporary.  */
  if (TARGET_MIPS16
      && REGNO (operands[0]) == STACK_POINTER_REGNUM
      && ((GET_CODE (operands[1]) == REG
	   && REGNO (operands[1]) != STACK_POINTER_REGNUM)
	  || GET_CODE (operands[2]) != CONST_INT))
    {
      rtx tmp = gen_reg_rtx (SImode);

      emit_move_insn (tmp, operands[1]);
      emit_insn (gen_addsi3 (tmp, tmp, operands[2]));
      emit_move_insn (operands[0], tmp);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:804 */
extern rtx gen_split_353 (rtx *);
rtx
gen_split_353 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val >= 0)
    {
      operands[1] = GEN_INT (0x7f);
      operands[2] = GEN_INT (val - 0x7f);
    }
  else
    {
      operands[1] = GEN_INT (- 0x80);
      operands[2] = GEN_INT (val + 0x80);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:833 */
extern rtx gen_split_354 (rtx *);
rtx
gen_split_354 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[2]);

  if (val >= 0)
    {
      operands[2] = GEN_INT (0x7);
      operands[3] = GEN_INT (val - 0x7);
    }
  else
    {
      operands[2] = GEN_INT (- 0x8);
      operands[3] = GEN_INT (val + 0x8);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:865 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* If a large stack adjustment was forced into a register, we may be
     asked to generate rtx such as:

	(set (reg:DI sp) (plus:DI (reg:DI sp) (reg:DI pseudo)))

     but no such instruction is available in mips16.  Handle it by
     using a temporary.  */
  if (TARGET_MIPS16
      && REGNO (operands[0]) == STACK_POINTER_REGNUM
      && ((GET_CODE (operands[1]) == REG
	   && REGNO (operands[1]) != STACK_POINTER_REGNUM)
	  || GET_CODE (operands[2]) != CONST_INT))
    {
      rtx tmp = gen_reg_rtx (DImode);

      emit_move_insn (tmp, operands[1]);
      emit_insn (gen_adddi3 (tmp, tmp, operands[2]));
      emit_move_insn (operands[0], tmp);
      DONE;
    }

  if (TARGET_64BIT)
    {
      emit_insn (gen_adddi3_internal_3 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:919 */
extern rtx gen_split_356 (rtx *);
rtx
gen_split_356 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	gen_rtx_SUBREG (SImode,
	operand2,
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LTU (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:949 */
extern rtx gen_split_357 (rtx *);
rtx
gen_split_357 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	gen_rtx_SUBREG (SImode,
	operand2,
	4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LTU (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:993 */
extern rtx gen_split_358 (rtx *);
rtx
gen_split_358 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LTU (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1017 */
extern rtx gen_split_359 (rtx *);
rtx
gen_split_359 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LTU (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1121 */
extern rtx gen_split_360 (rtx *);
rtx
gen_split_360 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val >= 0)
    {
      operands[1] = GEN_INT (0xf);
      operands[2] = GEN_INT (val - 0xf);
    }
  else
    {
      operands[1] = GEN_INT (- 0x10);
      operands[2] = GEN_INT (val + 0x10);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1150 */
extern rtx gen_split_361 (rtx *);
rtx
gen_split_361 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[2]);

  if (val >= 0)
    {
      operands[2] = GEN_INT (0x7);
      operands[3] = GEN_INT (val - 0x7);
    }
  else
    {
      operands[2] = GEN_INT (- 0x8);
      operands[3] = GEN_INT (val + 0x8);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1241 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1257 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_subdi3_internal_3 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1285 */
extern rtx gen_split_364 (rtx *);
rtx
gen_split_364 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LTU (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	gen_rtx_SUBREG (SImode,
	operand2,
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_MINUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_MINUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_MINUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1313 */
extern rtx gen_split_365 (rtx *);
rtx
gen_split_365 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LTU (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	gen_rtx_SUBREG (SImode,
	operand2,
	4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_MINUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_MINUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_MINUS (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1368 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1398 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1431 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (GENERATE_MULT3_SI || TARGET_MAD)
    emit_insn (gen_mulsi3_mult3 (operands[0], operands[1], operands[2]));
  else if (!TARGET_MIPS4000 || TARGET_MIPS16)
    emit_insn (gen_mulsi3_internal (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_mulsi3_r4000 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1480 */
extern rtx gen_peephole2_369 (rtx, rtx *);
rtx
gen_peephole2_369 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1558 */
extern rtx gen_split_370 (rtx *);
rtx
gen_split_370 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand6),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1577 */
extern rtx gen_split_371 (rtx *);
rtx
gen_split_371 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand6))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1639 */
extern rtx gen_peephole2_372 (rtx, rtx *);
rtx
gen_peephole2_372 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand0))),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)),
	copy_rtx (operand0))),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1677 */
extern rtx gen_peephole2_373 (rtx, rtx *);
rtx
gen_peephole2_373 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 1, "d", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand4,
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	operand6),
		gen_rtx_CLOBBER (VOIDmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1712 */
extern rtx gen_peephole2_374 (rtx, rtx *);
rtx
gen_peephole2_374 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 2, "d", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand3,
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1759 */
extern rtx gen_split_375 (rtx *);
rtx
gen_split_375 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MULT (SImode,
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	copy_rtx (operand6))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1778 */
extern rtx gen_split_376 (rtx *);
rtx
gen_split_376 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	gen_rtx_MULT (SImode,
	operand2,
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand6))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1830 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (GENERATE_MULT3_DI || TARGET_MIPS4000)
    emit_insn (gen_muldi3_internal2 (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_muldi3_internal (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1875 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT)
    {
      emit_insn (gen_mulsidi3_32bit (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1903 */
extern rtx gen_split_379 (rtx *);
rtx
gen_split_379 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	operand3,
	operand4))),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	GEN_INT (32LL))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	copy_rtx (operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand6)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand7),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand7),
	GEN_INT (32LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand7),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand7),
	GEN_INT (32LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	GEN_INT (32LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (DImode,
	copy_rtx (operand0),
	copy_rtx (operand7))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:1973 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT)
    {
      emit_insn (gen_umulsidi3_32bit (operands[0], operands[1],
				      operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2064 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (ISA_HAS_MULHI)
    emit_insn (gen_umulsi3_highpart_mulhi_internal (operands[0], operands[1],
						    operands[2]));
  else
    emit_insn (gen_umulsi3_highpart_internal (operands[0], operands[1],
					      operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	GEN_INT (32LL)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2131 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (ISA_HAS_MULHI)
    emit_insn (gen_smulsi3_highpart_mulhi_internal (operands[0], operands[1],
						    operands[2]));
  else
    emit_insn (gen_smulsi3_highpart_internal (operands[0], operands[1],
					      operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (32LL)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2370 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (const_float_1_operand (operands[1], DFmode))
    if (!(ISA_HAS_FP4 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2420 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (const_float_1_operand (operands[1], SFmode))
    if (!(ISA_HAS_FP4 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2810 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_negdi2_internal_2 (operands[0], operands[1]));
      DONE;
    }

  operands[2] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2896 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    {
      operands[1] = force_reg (SImode, operands[1]);
      operands[2] = force_reg (SImode, operands[2]);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2929 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    {
      operands[1] = force_reg (DImode, operands[1]);
      operands[2] = force_reg (DImode, operands[2]);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2962 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    {
      operands[1] = force_reg (SImode, operands[1]);
      operands[2] = force_reg (SImode, operands[2]);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:2995 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    {
      operands[1] = force_reg (DImode, operands[1]);
      operands[2] = force_reg (DImode, operands[2]);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3028 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3064 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    {
      operands[1] = force_reg (DImode, operands[1]);
      operands[2] = force_reg (DImode, operands[2]);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3211 */
extern rtx gen_split_392 (rtx *);
rtx
gen_split_392 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = gen_lowpart (DImode, operands[0]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	GEN_INT (48LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	GEN_INT (48LL)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3226 */
extern rtx gen_split_393 (rtx *);
rtx
gen_split_393 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = gen_lowpart (DImode, operands[0]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	GEN_INT (56LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	GEN_INT (56LL)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3281 */
extern rtx gen_split_394 (rtx *);
rtx
gen_split_394 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (DImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	GEN_INT (32LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	GEN_INT (32LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3303 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && GET_CODE (operands[1]) != MEM)
    {
      rtx op = gen_lowpart (SImode, operands[1]);
      rtx temp = force_reg (SImode, GEN_INT (0xffff));

      emit_insn (gen_andsi3 (operands[0], op, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3337 */
rtx
gen_zero_extendhidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && GET_CODE (operands[1]) != MEM)
    {
      rtx op = gen_lowpart (DImode, operands[1]);
      rtx temp = force_reg (DImode, GEN_INT (0xffff));

      emit_insn (gen_anddi3 (operands[0], op, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3371 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && GET_CODE (operands[1]) != MEM)
    {
      rtx op0 = gen_lowpart (SImode, operands[0]);
      rtx op1 = gen_lowpart (SImode, operands[1]);
      rtx temp = force_reg (SImode, GEN_INT (0xff));

      emit_insn (gen_andsi3 (op0, op1, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3406 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && GET_CODE (operands[1]) != MEM)
    {
      rtx op = gen_lowpart (SImode, operands[1]);
      rtx temp = force_reg (SImode, GEN_INT (0xff));

      emit_insn (gen_andsi3 (operands[0], op, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3440 */
rtx
gen_zero_extendqidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && GET_CODE (operands[1]) != MEM)
    {
      rtx op = gen_lowpart (DImode, operands[1]);
      rtx temp = force_reg (DImode, GEN_INT (0xff));

      emit_insn (gen_anddi3 (operands[0], op, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3502 */
rtx
gen_extendhidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3514 */
extern rtx gen_split_401 (rtx *);
rtx
gen_split_401 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (DImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	GEN_INT (48LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	GEN_INT (48LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3532 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (ISA_HAS_SEB_SEH)
    {
      emit_insn (gen_extendhisi2_hw (operands[0],
				     force_reg (HImode, operands[1])));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3551 */
extern rtx gen_split_403 (rtx *);
rtx
gen_split_403 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (16LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	GEN_INT (16LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3577 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3589 */
extern rtx gen_split_405 (rtx *);
rtx
gen_split_405 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (24LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	GEN_INT (24LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3609 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (ISA_HAS_SEB_SEH)
    {
      emit_insn (gen_extendqisi2_hw (operands[0],
				     force_reg (QImode, operands[1])));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3628 */
extern rtx gen_split_407 (rtx *);
rtx
gen_split_407 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (24LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	GEN_INT (24LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3654 */
rtx
gen_extendqidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3666 */
extern rtx gen_split_409 (rtx *);
rtx
gen_split_409 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (DImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	GEN_INT (56LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	GEN_INT (56LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3699 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!ISA_HAS_TRUNC_W)
    {
      emit_insn (gen_fix_truncdfsi2_macro (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3735 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!ISA_HAS_TRUNC_W)
    {
      emit_insn (gen_fix_truncsfsi2_macro (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3832 */
rtx
gen_fixuns_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 31);

  if (reg1)			/* Turn off complaints about unreached code.  */
    {
      emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, DFmode));
      do_pending_stack_adjust ();

      emit_insn (gen_cmpdf (operands[1], reg1));
      emit_jump_insn (gen_bge (label1));

      emit_insn (gen_fix_truncdfsi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
				   gen_rtx_LABEL_REF (VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      emit_move_insn (reg2, gen_rtx_MINUS (DFmode, operands[1], reg1));
      emit_move_insn (reg3, GEN_INT (trunc_int_for_mode
				     (BITMASK_HIGH, SImode)));

      emit_insn (gen_fix_truncdfsi2 (operands[0], reg2));
      emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* Allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3877 */
rtx
gen_fixuns_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 63);

  emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, DFmode));
  do_pending_stack_adjust ();

  emit_insn (gen_cmpdf (operands[1], reg1));
  emit_jump_insn (gen_bge (label1));

  emit_insn (gen_fix_truncdfdi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  emit_move_insn (reg2, gen_rtx_MINUS (DFmode, operands[1], reg1));
  emit_move_insn (reg3, GEN_INT (BITMASK_HIGH));
  emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

  emit_insn (gen_fix_truncdfdi2 (operands[0], reg2));
  emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3919 */
rtx
gen_fixuns_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 31);

  emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, SFmode));
  do_pending_stack_adjust ();

  emit_insn (gen_cmpsf (operands[1], reg1));
  emit_jump_insn (gen_bge (label1));

  emit_insn (gen_fix_truncsfsi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  emit_move_insn (reg2, gen_rtx_MINUS (SFmode, operands[1], reg1));
  emit_move_insn (reg3, GEN_INT (trunc_int_for_mode
				 (BITMASK_HIGH, SImode)));

  emit_insn (gen_fix_truncsfsi2 (operands[0], reg2));
  emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:3961 */
rtx
gen_fixuns_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 63);

  emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, SFmode));
  do_pending_stack_adjust ();

  emit_insn (gen_cmpsf (operands[1], reg1));
  emit_jump_insn (gen_bge (label1));

  emit_insn (gen_fix_truncsfdi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  emit_move_insn (reg2, gen_rtx_MINUS (SFmode, operands[1], reg1));
  emit_move_insn (reg3, GEN_INT (BITMASK_HIGH));
  emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

  emit_insn (gen_fix_truncsfdi2 (operands[0], reg2));
  emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4011 */
rtx
gen_extv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if ((TARGET_RLX5281 || TARGET_LX5280 || TARGET_RLX4281 || TARGET_RLX4181 || TARGET_LX4180 || TARGET_RLX5181)
      && !flag_use_uls)
  {
    FAIL;
  }

  if (mips_expand_unaligned_load (operands[0], operands[1],
				  INTVAL (operands[2]),
				  INTVAL (operands[3])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (VOIDmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4032 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if ((TARGET_RLX5281 || TARGET_LX5280 || TARGET_RLX4281 || TARGET_RLX4181 || TARGET_LX4180 || TARGET_RLX5181)
      && !flag_use_uls)
  {
    FAIL;
  }

  if (mips_expand_unaligned_load (operands[0], operands[1],
				  INTVAL (operands[2]),
				  INTVAL (operands[3])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4053 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if ((TARGET_RLX5281 || TARGET_LX5280 || TARGET_RLX4281 || TARGET_RLX4181 || TARGET_LX4180 || TARGET_RLX5181)
      && !flag_use_uls)
  {
    FAIL;
  }

  if (mips_expand_unaligned_store (operands[0], operands[3],
				   INTVAL (operands[1]),
				   INTVAL (operands[2])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4175 */
extern rtx gen_split_419 (rtx *);
rtx
gen_split_419 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = mips_gotoff_global (operands[1]);
  operands[3] = pic_offset_table_rtx;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4189 */
extern rtx gen_split_420 (rtx *);
rtx
gen_split_420 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{ operands[3] = mips_load_got_global (operands[1], operands[2]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4200 */
extern rtx gen_split_421 (rtx *);
rtx
gen_split_421 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = mips_gotoff_global (operands[1]);
  operands[3] = pic_offset_table_rtx;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4214 */
extern rtx gen_split_422 (rtx *);
rtx
gen_split_422 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{ operands[3] = mips_load_got_global (operands[1], operands[2]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4227 */
extern rtx gen_split_423 (rtx *);
rtx
gen_split_423 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = mips_load_got_global (pic_offset_table_rtx, operands[1]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4237 */
extern rtx gen_split_424 (rtx *);
rtx
gen_split_424 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = mips_load_got_global (pic_offset_table_rtx, operands[1]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4249 */
extern rtx gen_split_425 (rtx *);
rtx
gen_split_425 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = mips_load_got_page (operands[1]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4259 */
extern rtx gen_split_426 (rtx *);
rtx
gen_split_426 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = mips_load_got_page (operands[1]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4317 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (DImode, operands[0], operands[1]))
    DONE;

  /* If we are generating embedded PIC code, and we are referring to a
     symbol in the .text section, we must use an offset from the start
     of the function.  */
  if (TARGET_EMBEDDED_PIC
      && (GET_CODE (operands[1]) == LABEL_REF
	  || (GET_CODE (operands[1]) == SYMBOL_REF
	      && ! SYMBOL_REF_FLAG (operands[1]))))
    {
      rtx temp;

      temp = embedded_pic_offset (operands[1]);
      temp = gen_rtx_PLUS (Pmode, embedded_pic_fnaddr_reg (),
			   force_reg (DImode, temp));
      emit_move_insn (operands[0], force_reg (DImode, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4421 */
extern rtx gen_split_428 (rtx *);
rtx
gen_split_428 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = GEN_INT (0);
  else if (val >= 32 * 8)
    {
      int off = val & 7;

      operands[1] = GEN_INT (0x8 + off);
      operands[2] = GEN_INT (val - off - 0x8);
    }
  else
    {
      int off = val & 7;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4466 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (SImode, operands[0], operands[1]))
    DONE;

  /* If we are generating embedded PIC code, and we are referring to a
     symbol in the .text section, we must use an offset from the start
     of the function.  */
  if (TARGET_EMBEDDED_PIC
      && (GET_CODE (operands[1]) == LABEL_REF
	  || (GET_CODE (operands[1]) == SYMBOL_REF
	      && ! SYMBOL_REF_FLAG (operands[1]))))
    {
      rtx temp;

      temp = embedded_pic_offset (operands[1]);
      temp = gen_rtx_PLUS (Pmode, embedded_pic_fnaddr_reg (),
			   force_reg (SImode, temp));
      emit_move_insn (operands[0], force_reg (SImode, temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4545 */
extern rtx gen_split_430 (rtx *);
rtx
gen_split_430 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = GEN_INT (0);
  else if (val >= 32 * 4)
    {
      int off = val & 3;

      operands[1] = GEN_INT (0x7c + off);
      operands[2] = GEN_INT (val - off - 0x7c);
    }
  else
    {
      int off = val & 3;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4587 */
extern rtx gen_split_431 (rtx *);
rtx
gen_split_431 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  int val = INTVAL (operands[1]);

  operands[1] = GEN_INT (0xff);
  operands[2] = GEN_INT (val - 0xff);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4608 */
extern rtx gen_split_432 (rtx *);
rtx
gen_split_432 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{ operands[1] = GEN_INT (- INTVAL (operands[1])); }
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (SImode,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4649 */
rtx
gen_reload_incc (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  mips_emit_fcc_reload (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4659 */
rtx
gen_reload_outcc (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  mips_emit_fcc_reload (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4769 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], HImode)
      && !register_operand (operands[1], HImode)
      && (TARGET_MIPS16
	  || (GET_CODE (operands[1]) != CONST_INT
	  || INTVAL (operands[1]) != 0)))
    {
      rtx temp = force_reg (HImode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4844 */
extern rtx gen_split_436 (rtx *);
rtx
gen_split_436 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = GEN_INT (0);
  else if (val >= 32 * 2)
    {
      int off = val & 1;

      operands[1] = GEN_INT (0x7e + off);
      operands[2] = GEN_INT (val - off - 0x7e);
    }
  else
    {
      int off = val & 1;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4889 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], QImode)
      && !register_operand (operands[1], QImode)
      && (TARGET_MIPS16
	  || (GET_CODE (operands[1]) != CONST_INT
	  || INTVAL (operands[1]) != 0)))
    {
      rtx temp = force_reg (QImode, operands[1]);
      emit_move_insn (operands[0], temp);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4951 */
extern rtx gen_split_438 (rtx *);
rtx
gen_split_438 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = GEN_INT (0);
  else
    {
      operands[1] = GEN_INT (0x7f);
      operands[2] = GEN_INT (val - 0x7f);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:4979 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], SFmode)
      && !nonmemory_operand (operands[1], SFmode))
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5026 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if ((reload_in_progress | reload_completed) == 0
      && !register_operand (operands[0], DFmode)
      && !nonmemory_operand (operands[1], DFmode))
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5081 */
extern rtx gen_split_441 (rtx *);
rtx
gen_split_441 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_split_64bit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5092 */
extern rtx gen_split_442 (rtx *);
rtx
gen_split_442 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_split_64bit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5152 */
extern rtx gen_split_443 (rtx *);
rtx
gen_split_443 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = pic_offset_table_rtx;
  operands[3] = gen_rtx_HIGH (Pmode, operands[0]);
  operands[4] = gen_rtx_PLUS (Pmode, operands[2], operands[1]);
  operands[5] = gen_rtx_LO_SUM (Pmode, operands[2], operands[0]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5203 */
rtx
gen_movstrsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if (mips_expand_block_move (operands[0], operands[1], operands[2]))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5226 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && ! reload_in_progress
      && ! reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_ashlsi3_internal2 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashlsi3_internal2 (operands[0], temp,
					GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5309 */
extern rtx gen_split_446 (rtx *);
rtx
gen_split_446 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (8LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5321 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_64BIT)
    {
      /* On the mips16, a shift of more than 8 is a four byte
	 instruction, so, for a shift between 8 and 16, it is just as
	 fast to do two shifts of 8 or less.  If there is a lot of
	 shifting going on, we may win in CSE.  Otherwise combine will
	 put the shifts back together again.  This can be called by
	 function_arg, so we must be careful not to allocate a new
	 register if we've reached the reload pass.  */
      if (TARGET_MIPS16
	  && optimize
	  && GET_CODE (operands[2]) == CONST_INT
	  && INTVAL (operands[2]) > 8
	  && INTVAL (operands[2]) <= 16
	  && ! reload_in_progress
	  && ! reload_completed)
	{
	  rtx temp = gen_reg_rtx (DImode);

	  emit_insn (gen_ashldi3_internal4 (temp, operands[1], GEN_INT (8)));
	  emit_insn (gen_ashldi3_internal4 (operands[0], temp,
					    GEN_INT (INTVAL (operands[2]) - 8)));
	  DONE;
	}

      emit_insn (gen_ashldi3_internal4 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5405 */
extern rtx gen_split_448 (rtx *);
rtx
gen_split_448 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5422 */
extern rtx gen_split_449 (rtx *);
rtx
gen_split_449 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5460 */
extern rtx gen_split_450 (rtx *);
rtx
gen_split_450 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  int amount = INTVAL (operands[2]);
  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_IOR (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5494 */
extern rtx gen_split_451 (rtx *);
rtx
gen_split_451 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  int amount = INTVAL (operands[2]);
  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_IOR (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5567 */
extern rtx gen_split_452 (rtx *);
rtx
gen_split_452 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	GEN_INT (8LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5580 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_ashrsi3_internal2 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashrsi3_internal2 (operands[0], temp,
					GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5645 */
extern rtx gen_split_454 (rtx *);
rtx
gen_split_454 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	GEN_INT (8LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5657 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_64BIT)
    {
      /* On the mips16, a shift of more than 8 is a four byte
	 instruction, so, for a shift between 8 and 16, it is just as
	 fast to do two shifts of 8 or less.  If there is a lot of
	 shifting going on, we may win in CSE.  Otherwise combine will
	 put the shifts back together again.  */
      if (TARGET_MIPS16
	  && optimize
	  && GET_CODE (operands[2]) == CONST_INT
	  && INTVAL (operands[2]) > 8
	  && INTVAL (operands[2]) <= 16)
	{
	  rtx temp = gen_reg_rtx (DImode);

	  emit_insn (gen_ashrdi3_internal4 (temp, operands[1], GEN_INT (8)));
	  emit_insn (gen_ashrdi3_internal4 (operands[0], temp,
					    GEN_INT (INTVAL (operands[2]) - 8)));
	  DONE;
	}

      emit_insn (gen_ashrdi3_internal4 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5736 */
extern rtx gen_split_456 (rtx *);
rtx
gen_split_456 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	GEN_INT (31LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5753 */
extern rtx gen_split_457 (rtx *);
rtx
gen_split_457 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	GEN_INT (31LL))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5791 */
extern rtx gen_split_458 (rtx *);
rtx
gen_split_458 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  int amount = INTVAL (operands[2]);
  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_IOR (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5825 */
extern rtx gen_split_459 (rtx *);
rtx
gen_split_459 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  int amount = INTVAL (operands[2]);
  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_IOR (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5894 */
extern rtx gen_split_460 (rtx *);
rtx
gen_split_460 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	GEN_INT (8LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5907 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_lshrsi3_internal2 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_lshrsi3_internal2 (operands[0], temp,
					GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5972 */
extern rtx gen_split_462 (rtx *);
rtx
gen_split_462 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	GEN_INT (8LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:5993 */
extern rtx gen_split_463 (rtx *);
rtx
gen_split_463 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6007 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_64BIT)
    {
      /* On the mips16, a shift of more than 8 is a four byte
	 instruction, so, for a shift between 8 and 16, it is just as
	 fast to do two shifts of 8 or less.  If there is a lot of
	 shifting going on, we may win in CSE.  Otherwise combine will
	 put the shifts back together again.  */
      if (TARGET_MIPS16
	  && optimize
	  && GET_CODE (operands[2]) == CONST_INT
	  && INTVAL (operands[2]) > 8
	  && INTVAL (operands[2]) <= 16)
	{
	  rtx temp = gen_reg_rtx (DImode);

	  emit_insn (gen_lshrdi3_internal4 (temp, operands[1], GEN_INT (8)));
	  emit_insn (gen_lshrdi3_internal4 (operands[0], temp,
					    GEN_INT (INTVAL (operands[2]) - 8)));
	  DONE;
	}

      emit_insn (gen_lshrdi3_internal4 (operands[0], operands[1],
					operands[2]));
      DONE;
    }

  operands[3] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6087 */
extern rtx gen_split_465 (rtx *);
rtx
gen_split_465 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6104 */
extern rtx gen_split_466 (rtx *);
rtx
gen_split_466 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6142 */
extern rtx gen_split_467 (rtx *);
rtx
gen_split_467 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  int amount = INTVAL (operands[2]);
  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	0),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_IOR (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	4),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6176 */
extern rtx gen_split_468 (rtx *);
rtx
gen_split_468 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  int amount = INTVAL (operands[2]);
  operands[2] = GEN_INT (amount & 31);
  operands[4] = GEN_INT ((-amount) & 31);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	operand0,
	4),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	4),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	gen_rtx_IOR (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	4),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand0),
	0),
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_SUBREG (SImode,
	copy_rtx (operand1),
	0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6288 */
extern rtx gen_split_469 (rtx *);
rtx
gen_split_469 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	GEN_INT (8LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6323 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  branch_cmp[0] = operands[0];
  branch_cmp[1] = operands[1];
  branch_type = CMP_SI;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6335 */
rtx
gen_tstsi (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  branch_cmp[0] = operands[0];
  branch_cmp[1] = const0_rtx;
  branch_type = CMP_SI;
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6346 */
rtx
gen_cmpdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  branch_cmp[0] = operands[0];
  branch_cmp[1] = operands[1];
  branch_type = CMP_DI;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6358 */
rtx
gen_tstdi (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  branch_cmp[0] = operands[0];
  branch_cmp[1] = const0_rtx;
  branch_type = CMP_DI;
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6369 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  branch_cmp[0] = operands[0];
  branch_cmp[1] = operands[1];
  branch_type = CMP_DF;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6381 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  branch_cmp[0] = operands[0];
  branch_cmp[1] = operands[1];
  branch_type = CMP_SF;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6664 */
rtx
gen_bunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNORDERED);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNORDERED (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6676 */
rtx
gen_bordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, ORDERED);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_ORDERED (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6688 */
rtx
gen_bunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNLT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6700 */
rtx
gen_bunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNGE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6712 */
rtx
gen_buneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNEQ);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNEQ (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6724 */
rtx
gen_bltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LTGT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTGT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6736 */
rtx
gen_bunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNLE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6748 */
rtx
gen_bungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNGT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6760 */
rtx
gen_beq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, EQ);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6772 */
rtx
gen_bne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, NE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6784 */
rtx
gen_bgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6796 */
rtx
gen_bge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6808 */
rtx
gen_blt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6820 */
rtx
gen_ble (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6832 */
rtx
gen_bgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GTU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6844 */
rtx
gen_bgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GEU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6856 */
rtx
gen_bltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LTU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6868 */
rtx
gen_bleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LEU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:6887 */
rtx
gen_seq (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (EQ, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7004 */
rtx
gen_sne (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE)
    {
      gen_int_relational (NE, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7100 */
rtx
gen_sgt (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (GT, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) != 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7161 */
rtx
gen_sge (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (GE, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7230 */
rtx
gen_slt (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (LT, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7298 */
rtx
gen_sle (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (LE, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) >= 32767)
    operands[2] = force_reg (SImode, operands[2]);

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7424 */
rtx
gen_sgtu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (GTU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) != 0)
    operands[2] = force_reg (SImode, operands[2]);

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7485 */
rtx
gen_sgeu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (GEU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7554 */
rtx
gen_sltu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (LTU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:7622 */
rtx
gen_sleu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{
  if (branch_type != CMP_SI && (!TARGET_64BIT || branch_type != CMP_DI))
    FAIL;

  /* Set up operands from compare.  */
  operands[1] = branch_cmp[0];
  operands[2] = branch_cmp[1];

  if (TARGET_64BIT || !TARGET_DEBUG_C_MODE || TARGET_MIPS16)
    {
      gen_int_relational (LEU, operands[0], operands[1], operands[2], (int *)0);
      DONE;
    }

  if (GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) >= 32767)
    operands[2] = force_reg (SImode, operands[2]);

  /* Fall through and generate default code.  */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8006 */
rtx
gen_indirect_jump (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  rtx dest;

  dest = operands[0];
  if (GET_CODE (dest) != REG || GET_MODE (dest) != Pmode)
    operands[0] = copy_to_mode_reg (Pmode, dest);

  if (!(Pmode == DImode))
    emit_jump_insn (gen_indirect_jump_internal1 (operands[0]));
  else
    emit_jump_insn (gen_indirect_jump_internal2 (operands[0]));

  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8038 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16)
    {
      if (GET_MODE (operands[0]) != HImode)
	abort ();
      if (!(Pmode == DImode))
	emit_insn (gen_tablejump_mips161 (operands[0], operands[1]));
      else
	emit_insn (gen_tablejump_mips162 (operands[0], operands[1]));
      DONE;
    }

  if (GET_MODE (operands[0]) != ptr_mode)
    abort ();

  if (TARGET_GPWORD)
    operands[0] = expand_binop (ptr_mode, add_optab, operands[0],
				pic_offset_table_rtx, 0, 0, OPTAB_WIDEN);

  if (Pmode == SImode)
    emit_jump_insn (gen_tablejump_internal1 (operands[0], operands[1]));
  else
    emit_jump_insn (gen_tablejump_internal2 (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8087 */
rtx
gen_tablejump_mips161 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx t1, t2, t3;

  t1 = gen_reg_rtx (SImode);
  t2 = gen_reg_rtx (SImode);
  t3 = gen_reg_rtx (SImode);
  emit_insn (gen_extendhisi2 (t1, operands[0]));
  emit_move_insn (t2, gen_rtx_LABEL_REF (SImode, operands[1]));
  emit_insn (gen_addsi3 (t3, t1, t2));
  emit_jump_insn (gen_tablejump_internal1 (t3, operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand0),
	gen_rtx_LABEL_REF (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8105 */
rtx
gen_tablejump_mips162 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx t1, t2, t3;

  t1 = gen_reg_rtx (DImode);
  t2 = gen_reg_rtx (DImode);
  t3 = gen_reg_rtx (DImode);
  emit_insn (gen_extendhidi2 (t1, operands[0]));
  emit_move_insn (t2, gen_rtx_LABEL_REF (DImode, operands[1]));
  emit_insn (gen_adddi3 (t3, t1, t2));
  emit_jump_insn (gen_tablejump_internal2 (t3, operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand0),
	gen_rtx_LABEL_REF (DImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8126 */
rtx
gen_casesi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
{
  rtx index;

  /* If the index is too large, go to the default label.  */
  index = expand_binop (SImode, sub_optab, operands[0],
			operands[1], 0, 0, OPTAB_WIDEN);
  emit_insn (gen_cmpsi (index, operands[2]));
  emit_insn (gen_bgtu (operands[4]));

  /* Do the PIC jump.  */
  if (Pmode != DImode)
    emit_jump_insn (gen_casesi_internal (index, operands[3],
					 gen_reg_rtx (SImode)));
  else
    emit_jump_insn (gen_casesi_internal_di (index, operands[3],
					    gen_reg_rtx (DImode)));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (SImode,
	operand0,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand5,
	operand2)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand4),
	pc_rtx)));
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand5,
	GEN_INT (4LL)),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8229 */
rtx
gen_builtin_setjmp_setup (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  rtx addr;

  addr = plus_constant (operands[0], GET_MODE_SIZE (Pmode) * 3);
  emit_move_insn (gen_rtx_MEM (Pmode, addr), pic_offset_table_rtx);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8244 */
rtx
gen_builtin_longjmp (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  /* The elements of the buffer are, in order:  */
  int W = GET_MODE_SIZE (Pmode);
  rtx fp = gen_rtx_MEM (Pmode, operands[0]);
  rtx lab = gen_rtx_MEM (Pmode, plus_constant (operands[0], 1*W));
  rtx stack = gen_rtx_MEM (Pmode, plus_constant (operands[0], 2*W));
  rtx gpv = gen_rtx_MEM (Pmode, plus_constant (operands[0], 3*W));
  rtx pv = gen_rtx_REG (Pmode, PIC_FUNCTION_ADDR_REGNUM);
  /* Use gen_raw_REG to avoid being given pic_offset_table_rtx.
     The target is bound to be using $28 as the global pointer
     but the current function might not be.  */
  rtx gp = gen_raw_REG (Pmode, GLOBAL_POINTER_REGNUM);

  /* This bit is similar to expand_builtin_longjmp except that it
     restores $gp as well.  */
  emit_move_insn (hard_frame_pointer_rtx, fp);
  emit_move_insn (pv, lab);
  emit_stack_restore (SAVE_NONLOCAL, stack, NULL_RTX);
  emit_move_insn (gp, gpv);
  emit_insn (gen_rtx_USE (VOIDmode, hard_frame_pointer_rtx));
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  emit_insn (gen_rtx_USE (VOIDmode, gp));
  emit_indirect_jump (pv);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8281 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
{
  mips_expand_prologue ();
  DONE;
}
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8301 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
{
  mips_expand_epilogue (false);
  DONE;
}
  }
  emit_insn (GEN_INT (2LL));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8309 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
{
  mips_expand_epilogue (true);
  DONE;
}
  }
  emit_insn (GEN_INT (2LL));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8352 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  enum machine_mode gpr_mode = TARGET_64BIT ? DImode : SImode;

  if (GET_MODE (operands[0]) != gpr_mode)
    operands[0] = convert_to_mode (gpr_mode, operands[0], 0);
  if (TARGET_64BIT)
    emit_insn (gen_eh_set_lr_di (operands[0]));
  else
    emit_insn (gen_eh_set_lr_si (operands[0]));

  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8383 */
extern rtx gen_split_515 (rtx *);
rtx
gen_split_515 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_set_return_address (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8393 */
extern rtx gen_split_516 (rtx *);
rtx
gen_split_516 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8462 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (0, XEXP (operands[0], 0), operands[1], operands[2], true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8482 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (operands[0], XEXP (operands[1], 0),
		    operands[2], operands[3], true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8517 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (0, XEXP (operands[0], 0), operands[1], operands[2], false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8565 */
extern rtx gen_split_520 (rtx *);
rtx
gen_split_520 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_call_insn (gen_call_split (operands[0], operands[1]));
  if (!find_reg_note (operands[2], REG_NORETURN, 0))
    mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8591 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (operands[0], XEXP (operands[1], 0),
		    operands[2], operands[3], false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8604 */
extern rtx gen_split_522 (rtx *);
rtx
gen_split_522 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_call_insn (gen_call_value_split (operands[0], operands[1],
					operands[2]));
  if (!find_reg_note (operands[3], REG_NORETURN, 0))
    mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8634 */
extern rtx gen_split_523 (rtx *);
rtx
gen_split_523 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_call_insn (gen_call_value_multiple_split (operands[0], operands[1],
						 operands[2], operands[3]));
  if (!find_reg_note (operands[4], REG_NORETURN, 0))
    mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8671 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  int i;

  emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, const0_rtx));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  emit_insn (gen_blockage ());
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8701 */
rtx
gen_prefetch (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (symbolic_operand (operands[0], GET_MODE (operands[0])))
    operands[0] = force_reg (GET_MODE (operands[0]), operands[0]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8976 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:8988 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9000 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9012 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/config/mips/mips.md:9253 */
extern rtx gen_split_534 (rtx *);
rtx
gen_split_534 (rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
{ operands[0] = mips_rewrite_small_data (operands[0]); }
  operand0 = operands[0];
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 321:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	28));
      break;

    case 319:
    case 317:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	28));
      break;

    case 318:
    case 316:
    case 307:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31));
      break;

    case 303:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31));
      break;

    case 320:
    case 302:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	31));
      break;

    case 146:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      break;

    case 144:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 39:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 82:
    case 37:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 309:
    case 53:
    case 52:
    case 36:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 32:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 33:
    case 30:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 308:
    case 54:
    case 49:
    case 46:
    case 28:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 81:
    case 51:
    case 50:
    case 48:
    case 47:
    case 35:
    case 34:
    case 31:
    case 29:
    case 27:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    default:
      abort ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 146:
    case 144:
    case 39:
    case 82:
    case 37:
    case 309:
    case 53:
    case 52:
    case 36:
    case 32:
    case 33:
    case 30:
    case 308:
    case 54:
    case 49:
    case 46:
    case 28:
    case 81:
    case 51:
    case 50:
    case 48:
    case 47:
    case 35:
    case 34:
    case 31:
    case 29:
    case 27:
      return 0;

    case 321:
    case 319:
    case 317:
    case 318:
    case 316:
    case 307:
    case 303:
    case 320:
    case 302:
      return 1;

    default:
      abort ();
    }
}
