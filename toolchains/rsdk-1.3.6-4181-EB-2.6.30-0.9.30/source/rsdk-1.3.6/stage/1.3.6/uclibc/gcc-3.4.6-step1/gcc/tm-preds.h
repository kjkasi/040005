/* Generated automatically by the program `genpreds'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef RTX_CODE

extern int uns_arith_operand (rtx, enum machine_mode);
extern int symbolic_operand (rtx, enum machine_mode);
extern int global_got_operand (rtx, enum machine_mode);
extern int local_got_operand (rtx, enum machine_mode);
extern int const_arith_operand (rtx, enum machine_mode);
extern int small_data_pattern (rtx, enum machine_mode);
extern int arith_operand (rtx, enum machine_mode);
extern int reg_or_0_operand (rtx, enum machine_mode);
extern int small_int (rtx, enum machine_mode);
extern int mips_const_double_ok (rtx, enum machine_mode);
extern int const_float_1_operand (rtx, enum machine_mode);
extern int reg_or_const_float_1_operand (rtx, enum machine_mode);
extern int simple_memory_operand (rtx, enum machine_mode);
extern int equality_op (rtx, enum machine_mode);
extern int cmp_op (rtx, enum machine_mode);
extern int trap_cmp_op (rtx, enum machine_mode);
extern int pc_or_label_operand (rtx, enum machine_mode);
extern int call_insn_operand (rtx, enum machine_mode);
extern int move_operand (rtx, enum machine_mode);
extern int stack_operand (rtx, enum machine_mode);
extern int consttable_operand (rtx, enum machine_mode);
extern int fcc_register_operand (rtx, enum machine_mode);
extern int hilo_operand (rtx, enum machine_mode);
extern int extend_operator (rtx, enum machine_mode);

#endif /* RTX_CODE */

#endif /* GCC_TM_PREDS_H */
