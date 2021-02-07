/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2021 Justin Ethier
 ** Version 0.25 
 **
 **/

#define closcall1(td, clo,a1) \
if (obj_is_not_closure(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define continue_or_gc1(td, clo,a1) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define return_direct_with_clo1(td, clo, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)(clo),a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (obj_is_not_closure(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define continue_or_gc2(td, clo,a1,a2) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#define return_direct_with_clo2(td, clo, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)(clo),a1,a2); \
 }}

#include "cyclone/types.h"
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_is_91a_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91constructor_95args_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91ref_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_make_91record_91marker_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_bignum_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_fast_91string_123_127_scheme_base;
extern object __glo_fast_91string_121_127_scheme_base;
extern object __glo_fast_91string_121_123_127_scheme_base;
extern object __glo_fast_91string_125_127_scheme_base;
extern object __glo_fast_91string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_Cyc_91map_91loop_911_scheme_base;
extern object __glo_Cyc_91map_91loop_912_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_911_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_912_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_91object_127_scheme_base;
extern object __glo_error_91object_91message_scheme_base;
extern object __glo_error_91object_91irritants_scheme_base;
extern object __glo_error_95loc_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91handler_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_write_91string_911_scheme_base;
extern object __glo_write_91string_912_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_peek_91char_scheme_base;
extern object __glo_read_91char_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91add_91feature_67_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
extern object __glo_define_91values_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo__void_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_read_91bytevector_scheme_base;
extern object __glo_read_91bytevector_67_scheme_base;
extern object __glo_write_91bytevector_scheme_base;
extern object __glo_peek_91u8_scheme_base;
extern object __glo_read_91u8_scheme_base;
extern object __glo_write_91u8_scheme_base;
extern object __glo_binary_91port_127_scheme_base;
extern object __glo_textual_91port_127_scheme_base;
extern object __glo_display_scheme_write;
extern object __glo_write_scheme_write;
extern object __glo_write_91shared_scheme_write;
extern object __glo_write_91simple_scheme_write;
extern object __glo__91_125string_cyclone_python;
extern object __glo_raise_91python_91exception_cyclone_python;
extern object __glo_python_91exception_91string_cyclone_python;
extern object __glo_opaque_127_cyclone_python;
extern object __glo_opaque_91null_127_cyclone_python;
extern object __glo_py_91initialize_cyclone_python;
extern object __glo_py_91finalize_cyclone_python;
extern object __glo_py_91incref_cyclone_python;
extern object __glo_py_91decref_cyclone_python;
extern object __glo_py_91object_91call_91object_cyclone_python;
extern object __glo_py_91object_91call_cyclone_python;
extern object __glo_py_91object_91get_91attr_91string_cyclone_python;
extern object __glo_py_91object_91set_91attr_91string_cyclone_python;
extern object __glo_py_91object_91str_cyclone_python;
extern object __glo_py_91object_91type_91to_91c_91string_cyclone_python;
extern object __glo_py_91bool_91from_91long_cyclone_python;
extern object __glo_py_91bool_91as_91bool_cyclone_python;
extern object __glo_py_91long_91from_91long_cyclone_python;
extern object __glo_py_91long_91as_91long_cyclone_python;
extern object __glo_py_91float_91as_91double_cyclone_python;
extern object __glo_py_91float_91from_91double_cyclone_python;
extern object __glo_py_91dict_91new_cyclone_python;
extern object __glo_py_91dict_91keys_cyclone_python;
extern object __glo_py_91dict_91size_cyclone_python;
extern object __glo_py_91dict_91get_91item_cyclone_python;
extern object __glo_py_91dict_91get_91item_91string_cyclone_python;
extern object __glo_py_91dict_91items_cyclone_python;
extern object __glo_py_91dict_91set_91item_cyclone_python;
extern object __glo_py_91list_91new_cyclone_python;
extern object __glo_py_91list_91size_cyclone_python;
extern object __glo_py_91list_91get_91item_cyclone_python;
extern object __glo_py_91list_91set_91item_cyclone_python;
extern object __glo_py_91tuple_91new_cyclone_python;
extern object __glo_py_91tuple_91size_cyclone_python;
extern object __glo_py_91tuple_91get_91item_cyclone_python;
extern object __glo_py_91tuple_91set_91item_cyclone_python;
extern object __glo_py_91object_91get_91buffer_cyclone_python;
extern object __glo_py_91buffer_91to_91contiguous_cyclone_python;
extern object __glo_py_91buffer_91from_91contiguous_cyclone_python;
extern object __glo_py_91buffer_91release_cyclone_python;
extern object __glo_py_91buffer_91size_cyclone_python;
extern object __glo_py_91import_91import_91module_91ex_cyclone_python;
extern object __glo_py_91import_91get_91module_91dict_cyclone_python;
extern object __glo_py_91import_91import_cyclone_python;
extern object __glo_py_91import_91import_91module_cyclone_python;
extern object __glo_py_91import_91module_91ex_cyclone_python;
extern object __glo_py_91import_91add_91module_cyclone_python;
extern object __glo_py_91module_91get_91dict_cyclone_python;
extern object __glo_py_91module_91get_91dict_91as_91ptr_cyclone_python;
extern object __glo_py_91module_91add_91object_cyclone_python;
extern object __glo_py_91run_91simple_91string_cyclone_python;
extern object __glo_py_91run_91string_cyclone_python;
extern object __glo_py_91run_91file_cyclone_python;
extern object __glo_py_91string_91from_91c_91string_cyclone_python;
extern object __glo_py_91string_91to_91c_91string_cyclone_python;
extern object __glo_py_91string_91to_91c_91string_91and_91size_cyclone_python;
extern object __glo_py_91unicode_91from_91c_91string_cyclone_python;
extern object __glo_py_91unicode_91to_91c_91string_91and_91size_cyclone_python;
extern object __glo_string_91_125py_91unicode_cyclone_python;
extern object __glo_py_91unicode_91_125string_cyclone_python;
extern object __glo_py_91start_cyclone_python;
extern object __glo_py_91stop_cyclone_python;
extern object __glo_py_91import_cyclone_python;
extern object __glo_py_91eval_cyclone_python;
extern object __glo_py_91apply_cyclone_python;
extern object __glo_py_91value_cyclone_python;
extern object __glo_py_91object_91type_cyclone_python;
extern object __glo_scm_91_125python_cyclone_python;
extern object __glo_python_91_125scm_cyclone_python;
extern object __glo__85py_91functions_85_cyclone_python;
extern object __glo_py_91define_cyclone_python;
extern object __glo_py_91define_91attribute_cyclone_python;
extern object __glo_py_91define_91method_cyclone_python;
extern object __glo_interaction_91environment_scheme_repl;
extern object __glo_repl_scheme_repl;
extern object __glo_fast_91string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo__75write_91bytevector_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
extern object __glo_list_127_191_191inline_191_191_scheme_base;
extern object __glo_zero_127_191_191inline_191_191_scheme_base;
extern object __glo_positive_127_191_191inline_191_191_scheme_base;
extern object __glo_negative_127_191_191inline_191_191_scheme_base;
extern object __glo_floor_191_191inline_191_191_scheme_base;
extern object __glo_ceiling_191_191inline_191_191_scheme_base;
extern object __glo_truncate_191_191inline_191_191_scheme_base;
extern object __glo_round_191_191inline_191_191_scheme_base;
extern object __glo_inexact_191_191inline_191_191_scheme_base;
extern object __glo_sqrt_191_191inline_191_191_scheme_base;
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_complex_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
extern object __glo_void_191_191inline_191_191_scheme_base;
extern object __glo_make_91record_91marker_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
#include "cyclone/runtime-main.h"
static void __lambda_1(void *data, int argc, object self_736, object r_733) ;
static void __lambda_2(void *data, int argc, object self_737, object r_734) ;
static void __lambda_3(void *data, int argc, object self_738, object r_735) ;

static void __lambda_1(void *data, int argc, object self_736, object r_733) {
  
mclosure0(c_7312, (function_type)__lambda_2);c_7312.num_args = 1;
return_closcall1(data,  __glo_repl_scheme_repl,  &c_7312);; 
}

static void __lambda_2(void *data, int argc, object self_737, object r_734) {
  
mclosure0(c_7314, (function_type)__lambda_3);c_7314.num_args = 1;
return_closcall1(data,  __glo_py_91stop_cyclone_python,  &c_7314);; 
}

static void __lambda_3(void *data, int argc, object self_738, object r_735) {
  
  
  __halt(__halt(obj_int2obj(0)));; 
}

static void c_entry_pt_first_lambda(void *data, int argc, closure cont, object value);
extern void c_schemecyclonecommon_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemebase_entry_pt(void *data, int argc, closure cont, object value);
extern void c_scheme_char_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecycloneutil_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemewrite_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeread_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeprocess_91context_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecyclonelibraries_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecyclonehashset_entry_pt(void *data, int argc, closure cont, object value);
extern void c_srfi69_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecycloneprimitives_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemefile_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemeeval_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemerepl_entry_pt(void *data, int argc, closure cont, object value);
extern void c_cycloneforeign_entry_pt(void *data, int argc, closure cont, object value);
extern void c_schemecxr_entry_pt(void *data, int argc, closure cont, object value);
extern void c_srfi1_entry_pt(void *data, int argc, closure cont, object value);
extern void c_cyclonepython_entry_pt(void *data, int argc, closure cont, object value);
static void c_entry_pt(data, argc, env,cont) void *data; int argc; closure env,cont; { 
Cyc_set_globals_changed((gc_thread_data *)data);


mclosure1(c_done, c_entry_pt_first_lambda, &c_done);
mclosure1(c_7319, c_cyclonepython_entry_pt, &c_done);
mclosure1(c_7320, c_srfi1_entry_pt, &c_7319);
mclosure1(c_7321, c_schemecxr_entry_pt, &c_7320);
mclosure1(c_7322, c_cycloneforeign_entry_pt, &c_7321);
mclosure1(c_7323, c_schemerepl_entry_pt, &c_7322);
mclosure1(c_7324, c_schemeeval_entry_pt, &c_7323);
mclosure1(c_7325, c_schemefile_entry_pt, &c_7324);
mclosure1(c_7326, c_schemecycloneprimitives_entry_pt, &c_7325);
mclosure1(c_7327, c_srfi69_entry_pt, &c_7326);
mclosure1(c_7328, c_schemecyclonehashset_entry_pt, &c_7327);
mclosure1(c_7329, c_schemecyclonelibraries_entry_pt, &c_7328);
mclosure1(c_7330, c_schemeprocess_91context_entry_pt, &c_7329);
mclosure1(c_7331, c_schemeread_entry_pt, &c_7330);
mclosure1(c_7332, c_schemewrite_entry_pt, &c_7331);
mclosure1(c_7333, c_schemecycloneutil_entry_pt, &c_7332);
mclosure1(c_7334, c_scheme_char_entry_pt, &c_7333);
mclosure1(c_7335, c_schemebase_entry_pt, &c_7334);
mclosure1(c_7336, c_schemecyclonecommon_entry_pt, &c_7335);
(c_7336.fn)(data, 0, &c_7336, &c_7336);
}
static void c_entry_pt_first_lambda(void *data, int argc, closure cont, object value) {
  
mclosure0(c_7310, (function_type)__lambda_1);c_7310.num_args = 1;
return_closcall1(data,  __glo_py_91start_cyclone_python,  &c_7310);
;
}
int main(int argc, char **argv, char **envp)
{gc_thread_data *thd;
 long stack_size = global_stack_size = STACK_SIZE;
 long heap_size = global_heap_size = HEAP_SIZE;
 mclosure0(clos_halt,&Cyc_halt);  // Halt if final closure is reached
 mclosure0(entry_pt,&c_entry_pt); // First function to execute
 _cyc_argc = argc;
 _cyc_argv = argv;
 set_env_variables(envp);
 gc_initialize();
 thd = malloc(sizeof(gc_thread_data));
 gc_thread_data_init(thd, 0, (char *) &stack_size, stack_size);
 thd->gc_cont = &entry_pt;
 thd->gc_args[0] = &clos_halt;
 thd->gc_num_args = 1;
 thd->thread_id = pthread_self();
 gc_add_mutator(thd);
 Cyc_heap_init(heap_size);
 thd->thread_state = CYC_THREAD_STATE_RUNNABLE;
 Cyc_start_trampoline(thd);
 return 0;}
