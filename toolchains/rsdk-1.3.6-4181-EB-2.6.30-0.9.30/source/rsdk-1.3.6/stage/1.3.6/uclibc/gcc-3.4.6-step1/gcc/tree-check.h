/* This file is generated using gencheck. Do not edit. */

#ifndef GCC_TREE_CHECK_H
#define GCC_TREE_CHECK_H

#define ERROR_MARK_CHECK(t)	TREE_CHECK (t, ERROR_MARK)
#define IDENTIFIER_NODE_CHECK(t)	TREE_CHECK (t, IDENTIFIER_NODE)
#define TREE_LIST_CHECK(t)	TREE_CHECK (t, TREE_LIST)
#define TREE_VEC_CHECK(t)	TREE_CHECK (t, TREE_VEC)
#define BLOCK_CHECK(t)	TREE_CHECK (t, BLOCK)
#define VOID_TYPE_CHECK(t)	TREE_CHECK (t, VOID_TYPE)
#define INTEGER_TYPE_CHECK(t)	TREE_CHECK (t, INTEGER_TYPE)
#define REAL_TYPE_CHECK(t)	TREE_CHECK (t, REAL_TYPE)
#define COMPLEX_TYPE_CHECK(t)	TREE_CHECK (t, COMPLEX_TYPE)
#define VECTOR_TYPE_CHECK(t)	TREE_CHECK (t, VECTOR_TYPE)
#define ENUMERAL_TYPE_CHECK(t)	TREE_CHECK (t, ENUMERAL_TYPE)
#define BOOLEAN_TYPE_CHECK(t)	TREE_CHECK (t, BOOLEAN_TYPE)
#define CHAR_TYPE_CHECK(t)	TREE_CHECK (t, CHAR_TYPE)
#define POINTER_TYPE_CHECK(t)	TREE_CHECK (t, POINTER_TYPE)
#define OFFSET_TYPE_CHECK(t)	TREE_CHECK (t, OFFSET_TYPE)
#define REFERENCE_TYPE_CHECK(t)	TREE_CHECK (t, REFERENCE_TYPE)
#define METHOD_TYPE_CHECK(t)	TREE_CHECK (t, METHOD_TYPE)
#define FILE_TYPE_CHECK(t)	TREE_CHECK (t, FILE_TYPE)
#define ARRAY_TYPE_CHECK(t)	TREE_CHECK (t, ARRAY_TYPE)
#define SET_TYPE_CHECK(t)	TREE_CHECK (t, SET_TYPE)
#define RECORD_TYPE_CHECK(t)	TREE_CHECK (t, RECORD_TYPE)
#define UNION_TYPE_CHECK(t)	TREE_CHECK (t, UNION_TYPE)
#define QUAL_UNION_TYPE_CHECK(t)	TREE_CHECK (t, QUAL_UNION_TYPE)
#define FUNCTION_TYPE_CHECK(t)	TREE_CHECK (t, FUNCTION_TYPE)
#define LANG_TYPE_CHECK(t)	TREE_CHECK (t, LANG_TYPE)
#define INTEGER_CST_CHECK(t)	TREE_CHECK (t, INTEGER_CST)
#define REAL_CST_CHECK(t)	TREE_CHECK (t, REAL_CST)
#define COMPLEX_CST_CHECK(t)	TREE_CHECK (t, COMPLEX_CST)
#define VECTOR_CST_CHECK(t)	TREE_CHECK (t, VECTOR_CST)
#define STRING_CST_CHECK(t)	TREE_CHECK (t, STRING_CST)
#define FUNCTION_DECL_CHECK(t)	TREE_CHECK (t, FUNCTION_DECL)
#define LABEL_DECL_CHECK(t)	TREE_CHECK (t, LABEL_DECL)
#define CONST_DECL_CHECK(t)	TREE_CHECK (t, CONST_DECL)
#define TYPE_DECL_CHECK(t)	TREE_CHECK (t, TYPE_DECL)
#define VAR_DECL_CHECK(t)	TREE_CHECK (t, VAR_DECL)
#define PARM_DECL_CHECK(t)	TREE_CHECK (t, PARM_DECL)
#define RESULT_DECL_CHECK(t)	TREE_CHECK (t, RESULT_DECL)
#define FIELD_DECL_CHECK(t)	TREE_CHECK (t, FIELD_DECL)
#define NAMESPACE_DECL_CHECK(t)	TREE_CHECK (t, NAMESPACE_DECL)
#define TRANSLATION_UNIT_DECL_CHECK(t)	TREE_CHECK (t, TRANSLATION_UNIT_DECL)
#define COMPONENT_REF_CHECK(t)	TREE_CHECK (t, COMPONENT_REF)
#define BIT_FIELD_REF_CHECK(t)	TREE_CHECK (t, BIT_FIELD_REF)
#define INDIRECT_REF_CHECK(t)	TREE_CHECK (t, INDIRECT_REF)
#define BUFFER_REF_CHECK(t)	TREE_CHECK (t, BUFFER_REF)
#define ARRAY_REF_CHECK(t)	TREE_CHECK (t, ARRAY_REF)
#define ARRAY_RANGE_REF_CHECK(t)	TREE_CHECK (t, ARRAY_RANGE_REF)
#define VTABLE_REF_CHECK(t)	TREE_CHECK (t, VTABLE_REF)
#define CONSTRUCTOR_CHECK(t)	TREE_CHECK (t, CONSTRUCTOR)
#define COMPOUND_EXPR_CHECK(t)	TREE_CHECK (t, COMPOUND_EXPR)
#define MODIFY_EXPR_CHECK(t)	TREE_CHECK (t, MODIFY_EXPR)
#define INIT_EXPR_CHECK(t)	TREE_CHECK (t, INIT_EXPR)
#define TARGET_EXPR_CHECK(t)	TREE_CHECK (t, TARGET_EXPR)
#define COND_EXPR_CHECK(t)	TREE_CHECK (t, COND_EXPR)
#define BIND_EXPR_CHECK(t)	TREE_CHECK (t, BIND_EXPR)
#define CALL_EXPR_CHECK(t)	TREE_CHECK (t, CALL_EXPR)
#define WITH_CLEANUP_EXPR_CHECK(t)	TREE_CHECK (t, WITH_CLEANUP_EXPR)
#define CLEANUP_POINT_EXPR_CHECK(t)	TREE_CHECK (t, CLEANUP_POINT_EXPR)
#define PLACEHOLDER_EXPR_CHECK(t)	TREE_CHECK (t, PLACEHOLDER_EXPR)
#define WITH_RECORD_EXPR_CHECK(t)	TREE_CHECK (t, WITH_RECORD_EXPR)
#define PLUS_EXPR_CHECK(t)	TREE_CHECK (t, PLUS_EXPR)
#define MINUS_EXPR_CHECK(t)	TREE_CHECK (t, MINUS_EXPR)
#define MULT_EXPR_CHECK(t)	TREE_CHECK (t, MULT_EXPR)
#define TRUNC_DIV_EXPR_CHECK(t)	TREE_CHECK (t, TRUNC_DIV_EXPR)
#define CEIL_DIV_EXPR_CHECK(t)	TREE_CHECK (t, CEIL_DIV_EXPR)
#define FLOOR_DIV_EXPR_CHECK(t)	TREE_CHECK (t, FLOOR_DIV_EXPR)
#define ROUND_DIV_EXPR_CHECK(t)	TREE_CHECK (t, ROUND_DIV_EXPR)
#define TRUNC_MOD_EXPR_CHECK(t)	TREE_CHECK (t, TRUNC_MOD_EXPR)
#define CEIL_MOD_EXPR_CHECK(t)	TREE_CHECK (t, CEIL_MOD_EXPR)
#define FLOOR_MOD_EXPR_CHECK(t)	TREE_CHECK (t, FLOOR_MOD_EXPR)
#define ROUND_MOD_EXPR_CHECK(t)	TREE_CHECK (t, ROUND_MOD_EXPR)
#define RDIV_EXPR_CHECK(t)	TREE_CHECK (t, RDIV_EXPR)
#define EXACT_DIV_EXPR_CHECK(t)	TREE_CHECK (t, EXACT_DIV_EXPR)
#define FIX_TRUNC_EXPR_CHECK(t)	TREE_CHECK (t, FIX_TRUNC_EXPR)
#define FIX_CEIL_EXPR_CHECK(t)	TREE_CHECK (t, FIX_CEIL_EXPR)
#define FIX_FLOOR_EXPR_CHECK(t)	TREE_CHECK (t, FIX_FLOOR_EXPR)
#define FIX_ROUND_EXPR_CHECK(t)	TREE_CHECK (t, FIX_ROUND_EXPR)
#define FLOAT_EXPR_CHECK(t)	TREE_CHECK (t, FLOAT_EXPR)
#define NEGATE_EXPR_CHECK(t)	TREE_CHECK (t, NEGATE_EXPR)
#define MIN_EXPR_CHECK(t)	TREE_CHECK (t, MIN_EXPR)
#define MAX_EXPR_CHECK(t)	TREE_CHECK (t, MAX_EXPR)
#define ABS_EXPR_CHECK(t)	TREE_CHECK (t, ABS_EXPR)
#define LSHIFT_EXPR_CHECK(t)	TREE_CHECK (t, LSHIFT_EXPR)
#define RSHIFT_EXPR_CHECK(t)	TREE_CHECK (t, RSHIFT_EXPR)
#define LROTATE_EXPR_CHECK(t)	TREE_CHECK (t, LROTATE_EXPR)
#define RROTATE_EXPR_CHECK(t)	TREE_CHECK (t, RROTATE_EXPR)
#define BIT_IOR_EXPR_CHECK(t)	TREE_CHECK (t, BIT_IOR_EXPR)
#define BIT_XOR_EXPR_CHECK(t)	TREE_CHECK (t, BIT_XOR_EXPR)
#define BIT_AND_EXPR_CHECK(t)	TREE_CHECK (t, BIT_AND_EXPR)
#define BIT_NOT_EXPR_CHECK(t)	TREE_CHECK (t, BIT_NOT_EXPR)
#define TRUTH_ANDIF_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_ANDIF_EXPR)
#define TRUTH_ORIF_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_ORIF_EXPR)
#define TRUTH_AND_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_AND_EXPR)
#define TRUTH_OR_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_OR_EXPR)
#define TRUTH_XOR_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_XOR_EXPR)
#define TRUTH_NOT_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_NOT_EXPR)
#define LT_EXPR_CHECK(t)	TREE_CHECK (t, LT_EXPR)
#define LE_EXPR_CHECK(t)	TREE_CHECK (t, LE_EXPR)
#define GT_EXPR_CHECK(t)	TREE_CHECK (t, GT_EXPR)
#define GE_EXPR_CHECK(t)	TREE_CHECK (t, GE_EXPR)
#define EQ_EXPR_CHECK(t)	TREE_CHECK (t, EQ_EXPR)
#define NE_EXPR_CHECK(t)	TREE_CHECK (t, NE_EXPR)
#define UNORDERED_EXPR_CHECK(t)	TREE_CHECK (t, UNORDERED_EXPR)
#define ORDERED_EXPR_CHECK(t)	TREE_CHECK (t, ORDERED_EXPR)
#define UNLT_EXPR_CHECK(t)	TREE_CHECK (t, UNLT_EXPR)
#define UNLE_EXPR_CHECK(t)	TREE_CHECK (t, UNLE_EXPR)
#define UNGT_EXPR_CHECK(t)	TREE_CHECK (t, UNGT_EXPR)
#define UNGE_EXPR_CHECK(t)	TREE_CHECK (t, UNGE_EXPR)
#define UNEQ_EXPR_CHECK(t)	TREE_CHECK (t, UNEQ_EXPR)
#define IN_EXPR_CHECK(t)	TREE_CHECK (t, IN_EXPR)
#define SET_LE_EXPR_CHECK(t)	TREE_CHECK (t, SET_LE_EXPR)
#define CARD_EXPR_CHECK(t)	TREE_CHECK (t, CARD_EXPR)
#define RANGE_EXPR_CHECK(t)	TREE_CHECK (t, RANGE_EXPR)
#define CONVERT_EXPR_CHECK(t)	TREE_CHECK (t, CONVERT_EXPR)
#define NOP_EXPR_CHECK(t)	TREE_CHECK (t, NOP_EXPR)
#define NON_LVALUE_EXPR_CHECK(t)	TREE_CHECK (t, NON_LVALUE_EXPR)
#define VIEW_CONVERT_EXPR_CHECK(t)	TREE_CHECK (t, VIEW_CONVERT_EXPR)
#define SAVE_EXPR_CHECK(t)	TREE_CHECK (t, SAVE_EXPR)
#define UNSAVE_EXPR_CHECK(t)	TREE_CHECK (t, UNSAVE_EXPR)
#define RTL_EXPR_CHECK(t)	TREE_CHECK (t, RTL_EXPR)
#define ADDR_EXPR_CHECK(t)	TREE_CHECK (t, ADDR_EXPR)
#define REFERENCE_EXPR_CHECK(t)	TREE_CHECK (t, REFERENCE_EXPR)
#define ENTRY_VALUE_EXPR_CHECK(t)	TREE_CHECK (t, ENTRY_VALUE_EXPR)
#define FDESC_EXPR_CHECK(t)	TREE_CHECK (t, FDESC_EXPR)
#define COMPLEX_EXPR_CHECK(t)	TREE_CHECK (t, COMPLEX_EXPR)
#define CONJ_EXPR_CHECK(t)	TREE_CHECK (t, CONJ_EXPR)
#define REALPART_EXPR_CHECK(t)	TREE_CHECK (t, REALPART_EXPR)
#define IMAGPART_EXPR_CHECK(t)	TREE_CHECK (t, IMAGPART_EXPR)
#define PREDECREMENT_EXPR_CHECK(t)	TREE_CHECK (t, PREDECREMENT_EXPR)
#define PREINCREMENT_EXPR_CHECK(t)	TREE_CHECK (t, PREINCREMENT_EXPR)
#define POSTDECREMENT_EXPR_CHECK(t)	TREE_CHECK (t, POSTDECREMENT_EXPR)
#define POSTINCREMENT_EXPR_CHECK(t)	TREE_CHECK (t, POSTINCREMENT_EXPR)
#define VA_ARG_EXPR_CHECK(t)	TREE_CHECK (t, VA_ARG_EXPR)
#define TRY_CATCH_EXPR_CHECK(t)	TREE_CHECK (t, TRY_CATCH_EXPR)
#define TRY_FINALLY_EXPR_CHECK(t)	TREE_CHECK (t, TRY_FINALLY_EXPR)
#define GOTO_SUBROUTINE_EXPR_CHECK(t)	TREE_CHECK (t, GOTO_SUBROUTINE_EXPR)
#define LABEL_EXPR_CHECK(t)	TREE_CHECK (t, LABEL_EXPR)
#define GOTO_EXPR_CHECK(t)	TREE_CHECK (t, GOTO_EXPR)
#define RETURN_EXPR_CHECK(t)	TREE_CHECK (t, RETURN_EXPR)
#define EXIT_EXPR_CHECK(t)	TREE_CHECK (t, EXIT_EXPR)
#define LOOP_EXPR_CHECK(t)	TREE_CHECK (t, LOOP_EXPR)
#define LABELED_BLOCK_EXPR_CHECK(t)	TREE_CHECK (t, LABELED_BLOCK_EXPR)
#define EXIT_BLOCK_EXPR_CHECK(t)	TREE_CHECK (t, EXIT_BLOCK_EXPR)
#define EXPR_WITH_FILE_LOCATION_CHECK(t)	TREE_CHECK (t, EXPR_WITH_FILE_LOCATION)
#define SWITCH_EXPR_CHECK(t)	TREE_CHECK (t, SWITCH_EXPR)
#define EXC_PTR_EXPR_CHECK(t)	TREE_CHECK (t, EXC_PTR_EXPR)
#define SIZEOF_EXPR_CHECK(t)	TREE_CHECK (t, SIZEOF_EXPR)
#define ARROW_EXPR_CHECK(t)	TREE_CHECK (t, ARROW_EXPR)
#define ALIGNOF_EXPR_CHECK(t)	TREE_CHECK (t, ALIGNOF_EXPR)
#define EXPR_STMT_CHECK(t)	TREE_CHECK (t, EXPR_STMT)
#define COMPOUND_STMT_CHECK(t)	TREE_CHECK (t, COMPOUND_STMT)
#define DECL_STMT_CHECK(t)	TREE_CHECK (t, DECL_STMT)
#define IF_STMT_CHECK(t)	TREE_CHECK (t, IF_STMT)
#define FOR_STMT_CHECK(t)	TREE_CHECK (t, FOR_STMT)
#define WHILE_STMT_CHECK(t)	TREE_CHECK (t, WHILE_STMT)
#define DO_STMT_CHECK(t)	TREE_CHECK (t, DO_STMT)
#define RETURN_STMT_CHECK(t)	TREE_CHECK (t, RETURN_STMT)
#define BREAK_STMT_CHECK(t)	TREE_CHECK (t, BREAK_STMT)
#define CONTINUE_STMT_CHECK(t)	TREE_CHECK (t, CONTINUE_STMT)
#define SWITCH_STMT_CHECK(t)	TREE_CHECK (t, SWITCH_STMT)
#define GOTO_STMT_CHECK(t)	TREE_CHECK (t, GOTO_STMT)
#define LABEL_STMT_CHECK(t)	TREE_CHECK (t, LABEL_STMT)
#define ASM_STMT_CHECK(t)	TREE_CHECK (t, ASM_STMT)
#define SCOPE_STMT_CHECK(t)	TREE_CHECK (t, SCOPE_STMT)
#define FILE_STMT_CHECK(t)	TREE_CHECK (t, FILE_STMT)
#define CASE_LABEL_CHECK(t)	TREE_CHECK (t, CASE_LABEL)
#define STMT_EXPR_CHECK(t)	TREE_CHECK (t, STMT_EXPR)
#define COMPOUND_LITERAL_EXPR_CHECK(t)	TREE_CHECK (t, COMPOUND_LITERAL_EXPR)
#define CLEANUP_STMT_CHECK(t)	TREE_CHECK (t, CLEANUP_STMT)

#endif /* GCC_TREE_CHECK_H */
