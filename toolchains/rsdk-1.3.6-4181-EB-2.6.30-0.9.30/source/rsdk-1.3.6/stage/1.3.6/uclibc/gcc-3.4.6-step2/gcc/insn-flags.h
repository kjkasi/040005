/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_trap 1
#define HAVE_adddf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_addsi3_internal (!TARGET_MIPS16)
#define HAVE_adddi3_internal_1 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_adddi3_internal_2 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_adddi3_internal_3 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_addsi3_internal_2 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_subdf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_subsi3_internal 1
#define HAVE_subdi3_internal (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_subdi3_internal_3 (TARGET_64BIT)
#define HAVE_subsi3_internal_2 (TARGET_64BIT)
#define HAVE_muldf3_internal (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_4300_MUL_FIX)
#define HAVE_muldf3_r4300 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_4300_MUL_FIX)
#define HAVE_mulsf3_internal (TARGET_HARD_FLOAT && !TARGET_4300_MUL_FIX)
#define HAVE_mulsf3_r4300 (TARGET_HARD_FLOAT && TARGET_4300_MUL_FIX)
#define HAVE_mulsi3_mult3 (GENERATE_MULT3_SI \
   || TARGET_MAD)
#define HAVE_mulsi3_internal (!TARGET_MIPS4000 || TARGET_MIPS16)
#define HAVE_mulsi3_r4000 (TARGET_MIPS4000 && !TARGET_MIPS16)
#define HAVE_muldi3_internal (TARGET_64BIT && !TARGET_MIPS4000)
#define HAVE_muldi3_internal2 (TARGET_64BIT && (GENERATE_MULT3_DI || TARGET_MIPS4000))
#define HAVE_mulsidi3_32bit (!TARGET_64BIT)
#define HAVE_umulsidi3_32bit (!TARGET_64BIT)
#define HAVE_umulsi3_highpart_internal (!ISA_HAS_MULHI)
#define HAVE_umulsi3_highpart_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_umulsi3_highpart_neg_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_smulsi3_highpart_internal (!ISA_HAS_MULHI)
#define HAVE_smulsi3_highpart_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_smulsi3_highpart_neg_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_smuldi3_highpart (TARGET_64BIT)
#define HAVE_umuldi3_highpart (TARGET_64BIT)
#define HAVE_madsi (TARGET_MAD)
#define HAVE_divmodsi4 1
#define HAVE_divmoddi4 (TARGET_64BIT)
#define HAVE_udivmodsi4 1
#define HAVE_udivmoddi4 (TARGET_64BIT)
#define HAVE_sqrtdf2 (TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT)
#define HAVE_sqrtsf2 (TARGET_HARD_FLOAT && HAVE_SQRT_P())
#define HAVE_abssi2 (!TARGET_MIPS16)
#define HAVE_absdi2 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_absdf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_ffssi2 (!TARGET_MIPS16)
#define HAVE_ffsdi2 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_clzsi2 (ISA_HAS_CLZ_CLO)
#define HAVE_clzdi2 (ISA_HAS_DCLZ_DCLO)
#define HAVE_negsi2 1
#define HAVE_negdi2_internal (! TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_negdi2_internal_2 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_negdf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmpldi2 (TARGET_64BIT)
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_truncdisi2 (TARGET_64BIT)
#define HAVE_truncdihi2 (TARGET_64BIT)
#define HAVE_truncdiqi2 (TARGET_64BIT)
#define HAVE_zero_extendsidi2 (TARGET_64BIT)
#define HAVE_extendsidi2 (TARGET_64BIT)
#define HAVE_extendhisi2_mem 1
#define HAVE_extendhisi2_hw (ISA_HAS_SEB_SEH)
#define HAVE_extendqisi2_hw (ISA_HAS_SEB_SEH)
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncdfsi2_insn (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
#define HAVE_fix_truncdfsi2_macro (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
#define HAVE_fix_truncsfsi2_insn (TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
#define HAVE_fix_truncsfsi2_macro (TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
#define HAVE_fix_truncdfdi2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncsfdi2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_floatsidf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_floatdidf2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatdisf2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_mov_lwl (!TARGET_MIPS16)
#define HAVE_mov_lwr (!TARGET_MIPS16)
#define HAVE_mov_swl (!TARGET_MIPS16)
#define HAVE_mov_swr (!TARGET_MIPS16)
#define HAVE_mov_ldl (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_mov_ldr (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_mov_sdl (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_mov_sdr (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_movdi_internal (!TARGET_64BIT && !TARGET_MIPS16 \
   && (register_operand (operands[0], DImode) \
       || register_operand (operands[1], DImode) \
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0) \
       || operands[1] == CONST0_RTX (DImode)))
#define HAVE_movdi_internal2 (TARGET_64BIT && !TARGET_MIPS16 \
   && (register_operand (operands[0], DImode) \
       || register_operand (operands[1], DImode) \
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0) \
       || operands[1] == CONST0_RTX (DImode)))
#define HAVE_movsi_internal (!TARGET_MIPS16 \
   && (register_operand (operands[0], SImode) \
       || register_operand (operands[1], SImode) \
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
#define HAVE_movcc (ISA_HAS_8CC && TARGET_HARD_FLOAT)
#define HAVE_movhi_internal (!TARGET_MIPS16 \
   && (register_operand (operands[0], HImode) \
       || register_operand (operands[1], HImode) \
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
#define HAVE_movqi_internal (!TARGET_MIPS16 \
   && (register_operand (operands[0], QImode) \
       || register_operand (operands[1], QImode) \
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
#define HAVE_movsf_internal1 (TARGET_HARD_FLOAT \
   && (register_operand (operands[0], SFmode) \
       || nonmemory_operand (operands[1], SFmode)))
#define HAVE_movsf_internal2 (TARGET_SOFT_FLOAT && !TARGET_MIPS16 \
   && (register_operand (operands[0], SFmode) \
       || nonmemory_operand (operands[1], SFmode)))
#define HAVE_movdf_internal1a (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT \
   && (register_operand (operands[0], DFmode) \
       || nonmemory_operand (operands[1], DFmode)))
#define HAVE_movdf_internal1b (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT \
   && (register_operand (operands[0], DFmode) \
       || nonmemory_operand (operands[1], DFmode)))
#define HAVE_movdf_internal2 ((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16 \
   && (register_operand (operands[0], DFmode) \
       || nonmemory_operand (operands[1], DFmode)))
#define HAVE_load_df_low (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
#define HAVE_load_df_high (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
#define HAVE_store_df_high (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
#define HAVE_loadgp (TARGET_ABICALLS && TARGET_NEWABI)
#define HAVE_loadgp_blockage 1
#define HAVE_cprestore 1
#define HAVE_ashlsi3_internal1 (!TARGET_MIPS16)
#define HAVE_ashlsi3_internal1_extend (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_ashlsi3_internal2 (TARGET_MIPS16)
#define HAVE_ashldi3_internal (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_ashldi3_internal2 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16 \
   && (INTVAL (operands[2]) & 32) != 0)
#define HAVE_ashldi3_internal3 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16 \
   && (INTVAL (operands[2]) & 63) < 32 \
   && (INTVAL (operands[2]) & 63) != 0)
#define HAVE_ashldi3_internal4 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_ashrsi3_internal1 (!TARGET_MIPS16)
#define HAVE_ashrsi3_internal2 (TARGET_MIPS16)
#define HAVE_ashrdi3_internal (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_ashrdi3_internal2 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
#define HAVE_ashrdi3_internal3 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16 \
   && (INTVAL (operands[2]) & 63) < 32 \
   && (INTVAL (operands[2]) & 63) != 0)
#define HAVE_ashrdi3_internal4 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_lshrsi3_internal1 (!TARGET_MIPS16)
#define HAVE_lshrsi3_internal2 (TARGET_MIPS16)
#define HAVE_lshrdi3_internal (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
#define HAVE_lshrdi3_internal2 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16 \
   && (INTVAL (operands[2]) & 32) != 0)
#define HAVE_lshrdi3_internal3 (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16 \
   && (INTVAL (operands[2]) & 63) < 32 \
   && (INTVAL (operands[2]) & 63) != 0)
#define HAVE_lshrdi3_internal4 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_rotrsi3 (ISA_HAS_ROTR_SI)
#define HAVE_rotrdi3 (ISA_HAS_ROTR_DI)
#define HAVE_branch_fp (TARGET_HARD_FLOAT)
#define HAVE_branch_fp_inverted (TARGET_HARD_FLOAT)
#define HAVE_branch_zero (!TARGET_MIPS16)
#define HAVE_branch_zero_inverted (!TARGET_MIPS16)
#define HAVE_branch_zero_di (!TARGET_MIPS16)
#define HAVE_branch_zero_di_inverted (!TARGET_MIPS16)
#define HAVE_branch_equality (!TARGET_MIPS16)
#define HAVE_branch_equality_di (!TARGET_MIPS16)
#define HAVE_branch_equality_inverted (!TARGET_MIPS16)
#define HAVE_branch_equality_di_inverted (!TARGET_MIPS16)
#define HAVE_seq_si_zero (!TARGET_MIPS16)
#define HAVE_seq_di_zero (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_sne_si_zero (!TARGET_MIPS16)
#define HAVE_sne_di_zero (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_sgt_si (!TARGET_MIPS16)
#define HAVE_sgt_di (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_slt_si (!TARGET_MIPS16)
#define HAVE_slt_di (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_sle_si_const (!TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
#define HAVE_sle_di_const (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
#define HAVE_sgtu_si (!TARGET_MIPS16)
#define HAVE_sgtu_di (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_sltu_si (!TARGET_MIPS16)
#define HAVE_sltu_di (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_sleu_si_const (!TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
#define HAVE_sleu_di_const (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
#define HAVE_sunordered_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunlt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_suneq_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunle_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sungt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunge_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_seq_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_slt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sle_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sgt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sge_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunordered_sf (TARGET_HARD_FLOAT)
#define HAVE_sunlt_sf (TARGET_HARD_FLOAT)
#define HAVE_suneq_sf (TARGET_HARD_FLOAT)
#define HAVE_sunle_sf (TARGET_HARD_FLOAT)
#define HAVE_sungt_sf (TARGET_HARD_FLOAT)
#define HAVE_sunge_sf (TARGET_HARD_FLOAT)
#define HAVE_seq_sf (TARGET_HARD_FLOAT)
#define HAVE_slt_sf (TARGET_HARD_FLOAT)
#define HAVE_sle_sf (TARGET_HARD_FLOAT)
#define HAVE_sgt_sf (TARGET_HARD_FLOAT)
#define HAVE_sge_sf (TARGET_HARD_FLOAT)
#define HAVE_jump (!TARGET_MIPS16)
#define HAVE_indirect_jump_internal1 (!(Pmode == DImode))
#define HAVE_indirect_jump_internal2 (Pmode == DImode)
#define HAVE_tablejump_internal1 1
#define HAVE_tablejump_internal2 (TARGET_64BIT)
#define HAVE_casesi_internal (TARGET_EMBEDDED_PIC)
#define HAVE_casesi_internal_di (TARGET_EMBEDDED_PIC)
#define HAVE_blockage 1
#define HAVE_return (mips_can_use_return_insn ())
#define HAVE_return_internal 1
#define HAVE_get_fnaddr (TARGET_EMBEDDED_PIC \
   && GET_CODE (operands[1]) == SYMBOL_REF)
#define HAVE_eh_set_lr_si (! TARGET_64BIT)
#define HAVE_eh_set_lr_di (TARGET_64BIT)
#define HAVE_exception_receiver (TARGET_ABICALLS && (mips_abi == ABI_32 || mips_abi == ABI_O64))
#define HAVE_load_callsi (TARGET_ABICALLS)
#define HAVE_load_calldi (TARGET_ABICALLS)
#define HAVE_sibcall_internal (TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_internal (TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_multiple_internal (TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_call_internal 1
#define HAVE_call_split (TARGET_SPLIT_CALLS)
#define HAVE_call_value_internal 1
#define HAVE_call_value_split (TARGET_SPLIT_CALLS)
#define HAVE_call_value_multiple_internal 1
#define HAVE_call_value_multiple_split (TARGET_SPLIT_CALLS)
#define HAVE_prefetch_si_address (ISA_HAS_PREFETCH && Pmode == SImode)
#define HAVE_prefetch_indexed_si (ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == SImode)
#define HAVE_prefetch_si (ISA_HAS_PREFETCH && Pmode == SImode)
#define HAVE_prefetch_di_address (ISA_HAS_PREFETCH && Pmode == DImode)
#define HAVE_prefetch_indexed_di (ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && Pmode == DImode)
#define HAVE_prefetch_di (ISA_HAS_PREFETCH && Pmode == DImode)
#define HAVE_nop 1
#define HAVE_hazard_nop 1
#define HAVE_consttable_qi (TARGET_MIPS16)
#define HAVE_consttable_hi (TARGET_MIPS16)
#define HAVE_consttable_si (TARGET_MIPS16)
#define HAVE_consttable_di (TARGET_MIPS16)
#define HAVE_consttable_sf (TARGET_MIPS16)
#define HAVE_consttable_df (TARGET_MIPS16)
#define HAVE_align_2 (TARGET_MIPS16)
#define HAVE_align_4 (TARGET_MIPS16)
#define HAVE_align_8 (TARGET_MIPS16)
#define HAVE_conditional_trap (ISA_HAS_COND_TRAP)
#define HAVE_addsi3 1
#define HAVE_adddi3 (TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
#define HAVE_subsi3 1
#define HAVE_subdi3 (TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
#define HAVE_muldf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_mulsi3 1
#define HAVE_muldi3 (TARGET_64BIT)
#define HAVE_mulsidi3 1
#define HAVE_umulsidi3 1
#define HAVE_umulsi3_highpart 1
#define HAVE_smulsi3_highpart 1
#define HAVE_divdf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_divsf3 (TARGET_HARD_FLOAT && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations))
#define HAVE_negdi2 ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && !TARGET_MIPS16)
#define HAVE_andsi3 1
#define HAVE_anddi3 (TARGET_64BIT)
#define HAVE_iorsi3 1
#define HAVE_iordi3 (TARGET_64BIT)
#define HAVE_xorsi3 1
#define HAVE_xordi3 (TARGET_64BIT)
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendhidi2 (TARGET_64BIT)
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqidi2 (TARGET_64BIT)
#define HAVE_extendhidi2 (TARGET_64BIT)
#define HAVE_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqidi2 (TARGET_64BIT)
#define HAVE_fix_truncdfsi2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncdfsi2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_fixuns_truncdfdi2 (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
#define HAVE_fixuns_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2 (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
#define HAVE_extv (!TARGET_MIPS16)
#define HAVE_extzv (!TARGET_MIPS16)
#define HAVE_insv (!TARGET_MIPS16)
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_reload_incc (ISA_HAS_8CC && TARGET_HARD_FLOAT)
#define HAVE_reload_outcc (ISA_HAS_8CC && TARGET_HARD_FLOAT)
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movstrsi (!TARGET_MIPS16 && !TARGET_MEMCPY)
#define HAVE_ashlsi3 1
#define HAVE_ashldi3 (TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
#define HAVE_ashrsi3 1
#define HAVE_ashrdi3 (TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
#define HAVE_lshrsi3 1
#define HAVE_lshrdi3 (TARGET_64BIT || (!TARGET_DEBUG_G_MODE && !TARGET_MIPS16))
#define HAVE_cmpsi 1
#define HAVE_tstsi 1
#define HAVE_cmpdi (TARGET_64BIT)
#define HAVE_tstdi (TARGET_64BIT)
#define HAVE_cmpdf (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_cmpsf (TARGET_HARD_FLOAT)
#define HAVE_bunordered 1
#define HAVE_bordered 1
#define HAVE_bunlt 1
#define HAVE_bunge 1
#define HAVE_buneq 1
#define HAVE_bltgt 1
#define HAVE_bunle 1
#define HAVE_bungt 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bgt 1
#define HAVE_bge 1
#define HAVE_blt 1
#define HAVE_ble 1
#define HAVE_bgtu 1
#define HAVE_bgeu 1
#define HAVE_bltu 1
#define HAVE_bleu 1
#define HAVE_seq 1
#define HAVE_sne (!TARGET_MIPS16)
#define HAVE_sgt 1
#define HAVE_sge 1
#define HAVE_slt 1
#define HAVE_sle 1
#define HAVE_sgtu 1
#define HAVE_sgeu 1
#define HAVE_sltu 1
#define HAVE_sleu 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_tablejump_mips161 (TARGET_MIPS16 && !(Pmode == DImode))
#define HAVE_tablejump_mips162 (TARGET_MIPS16 && Pmode == DImode)
#define HAVE_casesi (TARGET_EMBEDDED_PIC)
#define HAVE_builtin_setjmp_setup (TARGET_ABICALLS)
#define HAVE_builtin_longjmp (TARGET_ABICALLS)
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_eh_return 1
#define HAVE_sibcall (TARGET_SIBCALLS)
#define HAVE_sibcall_value (TARGET_SIBCALLS)
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_prefetch (ISA_HAS_PREFETCH)
#define HAVE_movsicc (ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE)
#define HAVE_movdicc ((ISA_HAS_CONDMOVE || ISA_HAS_INT_CONDMOVE) && TARGET_64BIT)
#define HAVE_movsfcc (ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT)
#define HAVE_movdfcc (ISA_HAS_CONDMOVE && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
extern rtx        gen_trap                                (void);
extern rtx        gen_adddf3                              (rtx, rtx, rtx);
extern rtx        gen_addsf3                              (rtx, rtx, rtx);
extern rtx        gen_addsi3_internal                     (rtx, rtx, rtx);
extern rtx        gen_adddi3_internal_1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_adddi3_internal_2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_adddi3_internal_3                   (rtx, rtx, rtx);
extern rtx        gen_addsi3_internal_2                   (rtx, rtx, rtx);
extern rtx        gen_subdf3                              (rtx, rtx, rtx);
extern rtx        gen_subsf3                              (rtx, rtx, rtx);
extern rtx        gen_subsi3_internal                     (rtx, rtx, rtx);
extern rtx        gen_subdi3_internal                     (rtx, rtx, rtx, rtx);
extern rtx        gen_subdi3_internal_3                   (rtx, rtx, rtx);
extern rtx        gen_subsi3_internal_2                   (rtx, rtx, rtx);
extern rtx        gen_muldf3_internal                     (rtx, rtx, rtx);
extern rtx        gen_muldf3_r4300                        (rtx, rtx, rtx);
extern rtx        gen_mulsf3_internal                     (rtx, rtx, rtx);
extern rtx        gen_mulsf3_r4300                        (rtx, rtx, rtx);
extern rtx        gen_mulsi3_mult3                        (rtx, rtx, rtx);
extern rtx        gen_mulsi3_internal                     (rtx, rtx, rtx);
extern rtx        gen_mulsi3_r4000                        (rtx, rtx, rtx);
extern rtx        gen_muldi3_internal                     (rtx, rtx, rtx);
extern rtx        gen_muldi3_internal2                    (rtx, rtx, rtx);
extern rtx        gen_mulsidi3_32bit                      (rtx, rtx, rtx);
extern rtx        gen_umulsidi3_32bit                     (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_internal           (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_mulhi_internal     (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_neg_mulhi_internal (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_internal           (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_mulhi_internal     (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_neg_mulhi_internal (rtx, rtx, rtx);
extern rtx        gen_smuldi3_highpart                    (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                    (rtx, rtx, rtx);
extern rtx        gen_madsi                               (rtx, rtx, rtx);
extern rtx        gen_divmodsi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_divmoddi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmoddi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_sqrtdf2                             (rtx, rtx);
extern rtx        gen_sqrtsf2                             (rtx, rtx);
extern rtx        gen_abssi2                              (rtx, rtx);
extern rtx        gen_absdi2                              (rtx, rtx);
extern rtx        gen_absdf2                              (rtx, rtx);
extern rtx        gen_abssf2                              (rtx, rtx);
extern rtx        gen_ffssi2                              (rtx, rtx);
extern rtx        gen_ffsdi2                              (rtx, rtx);
extern rtx        gen_clzsi2                              (rtx, rtx);
extern rtx        gen_clzdi2                              (rtx, rtx);
extern rtx        gen_negsi2                              (rtx, rtx);
extern rtx        gen_negdi2_internal                     (rtx, rtx, rtx);
extern rtx        gen_negdi2_internal_2                   (rtx, rtx);
extern rtx        gen_negdf2                              (rtx, rtx);
extern rtx        gen_negsf2                              (rtx, rtx);
extern rtx        gen_one_cmplsi2                         (rtx, rtx);
extern rtx        gen_one_cmpldi2                         (rtx, rtx);
extern rtx        gen_truncdfsf2                          (rtx, rtx);
extern rtx        gen_truncdisi2                          (rtx, rtx);
extern rtx        gen_truncdihi2                          (rtx, rtx);
extern rtx        gen_truncdiqi2                          (rtx, rtx);
extern rtx        gen_zero_extendsidi2                    (rtx, rtx);
extern rtx        gen_extendsidi2                         (rtx, rtx);
extern rtx        gen_extendhisi2_mem                     (rtx, rtx);
extern rtx        gen_extendhisi2_hw                      (rtx, rtx);
extern rtx        gen_extendqisi2_hw                      (rtx, rtx);
extern rtx        gen_extendsfdf2                         (rtx, rtx);
extern rtx        gen_fix_truncdfsi2_insn                 (rtx, rtx);
extern rtx        gen_fix_truncdfsi2_macro                (rtx, rtx);
extern rtx        gen_fix_truncsfsi2_insn                 (rtx, rtx);
extern rtx        gen_fix_truncsfsi2_macro                (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                      (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                      (rtx, rtx);
extern rtx        gen_floatsidf2                          (rtx, rtx);
extern rtx        gen_floatdidf2                          (rtx, rtx);
extern rtx        gen_floatsisf2                          (rtx, rtx);
extern rtx        gen_floatdisf2                          (rtx, rtx);
extern rtx        gen_mov_lwl                             (rtx, rtx, rtx);
extern rtx        gen_mov_lwr                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_swl                             (rtx, rtx, rtx);
extern rtx        gen_mov_swr                             (rtx, rtx, rtx);
extern rtx        gen_mov_ldl                             (rtx, rtx, rtx);
extern rtx        gen_mov_ldr                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_sdl                             (rtx, rtx, rtx);
extern rtx        gen_mov_sdr                             (rtx, rtx, rtx);
extern rtx        gen_movdi_internal                      (rtx, rtx);
extern rtx        gen_movdi_internal2                     (rtx, rtx);
extern rtx        gen_movsi_internal                      (rtx, rtx);
extern rtx        gen_movcc                               (rtx, rtx);
extern rtx        gen_movhi_internal                      (rtx, rtx);
extern rtx        gen_movqi_internal                      (rtx, rtx);
extern rtx        gen_movsf_internal1                     (rtx, rtx);
extern rtx        gen_movsf_internal2                     (rtx, rtx);
extern rtx        gen_movdf_internal1a                    (rtx, rtx);
extern rtx        gen_movdf_internal1b                    (rtx, rtx);
extern rtx        gen_movdf_internal2                     (rtx, rtx);
extern rtx        gen_load_df_low                         (rtx, rtx);
extern rtx        gen_load_df_high                        (rtx, rtx, rtx);
extern rtx        gen_store_df_high                       (rtx, rtx);
extern rtx        gen_loadgp                              (rtx, rtx);
extern rtx        gen_loadgp_blockage                     (void);
extern rtx        gen_cprestore                           (rtx);
extern rtx        gen_ashlsi3_internal1                   (rtx, rtx, rtx);
extern rtx        gen_ashlsi3_internal1_extend            (rtx, rtx, rtx);
extern rtx        gen_ashlsi3_internal2                   (rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal                    (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal4                   (rtx, rtx, rtx);
extern rtx        gen_ashrsi3_internal1                   (rtx, rtx, rtx);
extern rtx        gen_ashrsi3_internal2                   (rtx, rtx, rtx);
extern rtx        gen_ashrdi3_internal                    (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_internal2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_internal3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_internal4                   (rtx, rtx, rtx);
extern rtx        gen_lshrsi3_internal1                   (rtx, rtx, rtx);
extern rtx        gen_lshrsi3_internal2                   (rtx, rtx, rtx);
extern rtx        gen_lshrdi3_internal                    (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_internal2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_internal3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_internal4                   (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                             (rtx, rtx, rtx);
extern rtx        gen_rotrdi3                             (rtx, rtx, rtx);
extern rtx        gen_branch_fp                           (rtx, rtx, rtx);
extern rtx        gen_branch_fp_inverted                  (rtx, rtx, rtx);
extern rtx        gen_branch_zero                         (rtx, rtx, rtx);
extern rtx        gen_branch_zero_inverted                (rtx, rtx, rtx);
extern rtx        gen_branch_zero_di                      (rtx, rtx, rtx);
extern rtx        gen_branch_zero_di_inverted             (rtx, rtx, rtx);
extern rtx        gen_branch_equality                     (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_equality_di                  (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_equality_inverted            (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_equality_di_inverted         (rtx, rtx, rtx, rtx);
extern rtx        gen_seq_si_zero                         (rtx, rtx);
extern rtx        gen_seq_di_zero                         (rtx, rtx);
static inline rtx gen_seq_si                              (rtx, rtx, rtx);
static inline rtx
gen_seq_si(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_seq_di                              (rtx, rtx, rtx);
static inline rtx
gen_seq_di(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_sne_si_zero                         (rtx, rtx);
extern rtx        gen_sne_di_zero                         (rtx, rtx);
static inline rtx gen_sne_si                              (rtx, rtx, rtx);
static inline rtx
gen_sne_si(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_sne_di                              (rtx, rtx, rtx);
static inline rtx
gen_sne_di(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_sgt_si                              (rtx, rtx, rtx);
extern rtx        gen_sgt_di                              (rtx, rtx, rtx);
static inline rtx gen_sge_si                              (rtx, rtx, rtx);
static inline rtx
gen_sge_si(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_sge_di                              (rtx, rtx, rtx);
static inline rtx
gen_sge_di(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_slt_si                              (rtx, rtx, rtx);
extern rtx        gen_slt_di                              (rtx, rtx, rtx);
extern rtx        gen_sle_si_const                        (rtx, rtx, rtx);
extern rtx        gen_sle_di_const                        (rtx, rtx, rtx);
static inline rtx gen_sle_si_reg                          (rtx, rtx, rtx);
static inline rtx
gen_sle_si_reg(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_sle_di_reg                          (rtx, rtx, rtx);
static inline rtx
gen_sle_di_reg(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_sgtu_si                             (rtx, rtx, rtx);
extern rtx        gen_sgtu_di                             (rtx, rtx, rtx);
static inline rtx gen_sgeu_si                             (rtx, rtx, rtx);
static inline rtx
gen_sgeu_si(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_sgeu_di                             (rtx, rtx, rtx);
static inline rtx
gen_sgeu_di(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_sltu_si                             (rtx, rtx, rtx);
extern rtx        gen_sltu_di                             (rtx, rtx, rtx);
extern rtx        gen_sleu_si_const                       (rtx, rtx, rtx);
extern rtx        gen_sleu_di_const                       (rtx, rtx, rtx);
static inline rtx gen_sleu_si_reg                         (rtx, rtx, rtx);
static inline rtx
gen_sleu_si_reg(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_sleu_di_reg                         (rtx, rtx, rtx);
static inline rtx
gen_sleu_di_reg(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_sunordered_df                       (rtx, rtx, rtx);
extern rtx        gen_sunlt_df                            (rtx, rtx, rtx);
extern rtx        gen_suneq_df                            (rtx, rtx, rtx);
extern rtx        gen_sunle_df                            (rtx, rtx, rtx);
extern rtx        gen_sungt_df                            (rtx, rtx, rtx);
extern rtx        gen_sunge_df                            (rtx, rtx, rtx);
extern rtx        gen_seq_df                              (rtx, rtx, rtx);
extern rtx        gen_slt_df                              (rtx, rtx, rtx);
extern rtx        gen_sle_df                              (rtx, rtx, rtx);
extern rtx        gen_sgt_df                              (rtx, rtx, rtx);
extern rtx        gen_sge_df                              (rtx, rtx, rtx);
extern rtx        gen_sunordered_sf                       (rtx, rtx, rtx);
extern rtx        gen_sunlt_sf                            (rtx, rtx, rtx);
extern rtx        gen_suneq_sf                            (rtx, rtx, rtx);
extern rtx        gen_sunle_sf                            (rtx, rtx, rtx);
extern rtx        gen_sungt_sf                            (rtx, rtx, rtx);
extern rtx        gen_sunge_sf                            (rtx, rtx, rtx);
extern rtx        gen_seq_sf                              (rtx, rtx, rtx);
extern rtx        gen_slt_sf                              (rtx, rtx, rtx);
extern rtx        gen_sle_sf                              (rtx, rtx, rtx);
extern rtx        gen_sgt_sf                              (rtx, rtx, rtx);
extern rtx        gen_sge_sf                              (rtx, rtx, rtx);
extern rtx        gen_jump                                (rtx);
extern rtx        gen_indirect_jump_internal1             (rtx);
extern rtx        gen_indirect_jump_internal2             (rtx);
extern rtx        gen_tablejump_internal1                 (rtx, rtx);
extern rtx        gen_tablejump_internal2                 (rtx, rtx);
extern rtx        gen_casesi_internal                     (rtx, rtx, rtx);
extern rtx        gen_casesi_internal_di                  (rtx, rtx, rtx);
extern rtx        gen_blockage                            (void);
extern rtx        gen_return                              (void);
extern rtx        gen_return_internal                     (rtx);
extern rtx        gen_get_fnaddr                          (rtx, rtx);
extern rtx        gen_eh_set_lr_si                        (rtx);
extern rtx        gen_eh_set_lr_di                        (rtx);
extern rtx        gen_exception_receiver                  (void);
extern rtx        gen_load_callsi                         (rtx, rtx, rtx);
extern rtx        gen_load_calldi                         (rtx, rtx, rtx);
extern rtx        gen_sibcall_internal                    (rtx, rtx);
extern rtx        gen_sibcall_value_internal              (rtx, rtx, rtx);
extern rtx        gen_sibcall_value_multiple_internal     (rtx, rtx, rtx, rtx);
extern rtx        gen_call_internal                       (rtx, rtx);
extern rtx        gen_call_split                          (rtx, rtx);
extern rtx        gen_call_value_internal                 (rtx, rtx, rtx);
extern rtx        gen_call_value_split                    (rtx, rtx, rtx);
extern rtx        gen_call_value_multiple_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_multiple_split           (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch_si_address                 (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch_indexed_si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch_si                         (rtx, rtx, rtx);
extern rtx        gen_prefetch_di_address                 (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch_indexed_di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch_di                         (rtx, rtx, rtx);
extern rtx        gen_nop                                 (void);
extern rtx        gen_hazard_nop                          (void);
extern rtx        gen_consttable_qi                       (rtx);
extern rtx        gen_consttable_hi                       (rtx);
extern rtx        gen_consttable_si                       (rtx);
extern rtx        gen_consttable_di                       (rtx);
extern rtx        gen_consttable_sf                       (rtx);
extern rtx        gen_consttable_df                       (rtx);
extern rtx        gen_align_2                             (void);
extern rtx        gen_align_4                             (void);
extern rtx        gen_align_8                             (void);
extern rtx        gen_conditional_trap                    (rtx, rtx);
extern rtx        gen_addsi3                              (rtx, rtx, rtx);
extern rtx        gen_adddi3                              (rtx, rtx, rtx);
extern rtx        gen_subsi3                              (rtx, rtx, rtx);
extern rtx        gen_subdi3                              (rtx, rtx, rtx);
extern rtx        gen_muldf3                              (rtx, rtx, rtx);
extern rtx        gen_mulsf3                              (rtx, rtx, rtx);
extern rtx        gen_mulsi3                              (rtx, rtx, rtx);
extern rtx        gen_muldi3                              (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                            (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                           (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                    (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                    (rtx, rtx, rtx);
extern rtx        gen_divdf3                              (rtx, rtx, rtx);
extern rtx        gen_divsf3                              (rtx, rtx, rtx);
extern rtx        gen_negdi2                              (rtx, rtx);
extern rtx        gen_andsi3                              (rtx, rtx, rtx);
extern rtx        gen_anddi3                              (rtx, rtx, rtx);
extern rtx        gen_iorsi3                              (rtx, rtx, rtx);
extern rtx        gen_iordi3                              (rtx, rtx, rtx);
extern rtx        gen_xorsi3                              (rtx, rtx, rtx);
extern rtx        gen_xordi3                              (rtx, rtx, rtx);
extern rtx        gen_zero_extendhisi2                    (rtx, rtx);
extern rtx        gen_zero_extendhidi2                    (rtx, rtx);
extern rtx        gen_zero_extendqihi2                    (rtx, rtx);
extern rtx        gen_zero_extendqisi2                    (rtx, rtx);
extern rtx        gen_zero_extendqidi2                    (rtx, rtx);
extern rtx        gen_extendhidi2                         (rtx, rtx);
extern rtx        gen_extendhisi2                         (rtx, rtx);
extern rtx        gen_extendqihi2                         (rtx, rtx);
extern rtx        gen_extendqisi2                         (rtx, rtx);
extern rtx        gen_extendqidi2                         (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                      (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                      (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2                   (rtx, rtx);
extern rtx        gen_extv                                (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                               (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                                (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi                               (rtx, rtx);
extern rtx        gen_movsi                               (rtx, rtx);
extern rtx        gen_reload_incc                         (rtx, rtx, rtx);
extern rtx        gen_reload_outcc                        (rtx, rtx, rtx);
extern rtx        gen_movhi                               (rtx, rtx);
extern rtx        gen_movqi                               (rtx, rtx);
extern rtx        gen_movsf                               (rtx, rtx);
extern rtx        gen_movdf                               (rtx, rtx);
extern rtx        gen_movstrsi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                             (rtx, rtx, rtx);
extern rtx        gen_ashldi3                             (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                             (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                             (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                             (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                             (rtx, rtx, rtx);
extern rtx        gen_cmpsi                               (rtx, rtx);
extern rtx        gen_tstsi                               (rtx);
extern rtx        gen_cmpdi                               (rtx, rtx);
extern rtx        gen_tstdi                               (rtx);
extern rtx        gen_cmpdf                               (rtx, rtx);
extern rtx        gen_cmpsf                               (rtx, rtx);
extern rtx        gen_bunordered                          (rtx);
extern rtx        gen_bordered                            (rtx);
extern rtx        gen_bunlt                               (rtx);
extern rtx        gen_bunge                               (rtx);
extern rtx        gen_buneq                               (rtx);
extern rtx        gen_bltgt                               (rtx);
extern rtx        gen_bunle                               (rtx);
extern rtx        gen_bungt                               (rtx);
extern rtx        gen_beq                                 (rtx);
extern rtx        gen_bne                                 (rtx);
extern rtx        gen_bgt                                 (rtx);
extern rtx        gen_bge                                 (rtx);
extern rtx        gen_blt                                 (rtx);
extern rtx        gen_ble                                 (rtx);
extern rtx        gen_bgtu                                (rtx);
extern rtx        gen_bgeu                                (rtx);
extern rtx        gen_bltu                                (rtx);
extern rtx        gen_bleu                                (rtx);
extern rtx        gen_seq                                 (rtx);
extern rtx        gen_sne                                 (rtx);
extern rtx        gen_sgt                                 (rtx);
extern rtx        gen_sge                                 (rtx);
extern rtx        gen_slt                                 (rtx);
extern rtx        gen_sle                                 (rtx);
extern rtx        gen_sgtu                                (rtx);
extern rtx        gen_sgeu                                (rtx);
extern rtx        gen_sltu                                (rtx);
extern rtx        gen_sleu                                (rtx);
extern rtx        gen_indirect_jump                       (rtx);
extern rtx        gen_tablejump                           (rtx, rtx);
extern rtx        gen_tablejump_mips161                   (rtx, rtx);
extern rtx        gen_tablejump_mips162                   (rtx, rtx);
extern rtx        gen_casesi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_builtin_setjmp_setup                (rtx);
extern rtx        gen_builtin_longjmp                     (rtx);
extern rtx        gen_prologue                            (void);
extern rtx        gen_epilogue                            (void);
extern rtx        gen_sibcall_epilogue                    (void);
extern rtx        gen_eh_return                           (rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C), (D))
extern rtx        gen_sibcall                             (rtx, rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D))
extern rtx        gen_sibcall_value                       (rtx, rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C), (D))
extern rtx        gen_call                                (rtx, rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                          (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                        (rtx, rtx, rtx);
extern rtx        gen_prefetch                            (rtx, rtx, rtx);
extern rtx        gen_movsicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                             (rtx, rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
