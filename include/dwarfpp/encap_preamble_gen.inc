 class Die_encap_array_type;
 class Die_encap_class_type;
 class Die_encap_entry_point;
 class Die_encap_enumeration_type;
 class Die_encap_formal_parameter;
 class Die_encap_imported_declaration;
 class Die_encap_label;
 class Die_encap_lexical_block;
 class Die_encap_member;
 class Die_encap_pointer_type;
 class Die_encap_reference_type;
 class Die_encap_compile_unit;
 class Die_encap_string_type;
 class Die_encap_structure_type;
 class Die_encap_subroutine_type;
 class Die_encap_typedef;
 class Die_encap_union_type;
 class Die_encap_unspecified_parameters;
 class Die_encap_variant;
 class Die_encap_common_block;
 class Die_encap_common_inclusion;
 class Die_encap_inheritance;
 class Die_encap_inlined_subroutine;
 class Die_encap_module;
 class Die_encap_ptr_to_member_type;
 class Die_encap_set_type;
 class Die_encap_subrange_type;
 class Die_encap_with_stmt;
 class Die_encap_access_declaration;
 class Die_encap_base_type;
 class Die_encap_catch_block;
 class Die_encap_const_type;
 class Die_encap_constant;
 class Die_encap_enumerator;
 class Die_encap_file_type;
 class Die_encap_friend;
 class Die_encap_namelist;
 class Die_encap_namelist_item;
 class Die_encap_packed_type;
 class Die_encap_subprogram;
 class Die_encap_template_type_parameter;
 class Die_encap_template_value_parameter;
 class Die_encap_thrown_type;
 class Die_encap_try_block;
 class Die_encap_variant_part;
 class Die_encap_variable;
 class Die_encap_volatile_type;
 class Die_encap_dwarf_procedure;
 class Die_encap_restrict_type;
 class Die_encap_interface_type;
 class Die_encap_namespace;
 class Die_encap_imported_module;
 class Die_encap_unspecified_type;
 class Die_encap_partial_unit;
 class Die_encap_imported_unit;
 class Die_encap_condition;
 class Die_encap_shared_type;
} namespace abstract {
template <> struct tag<encap::Rep, DW_TAG_array_type> { typedef encap::Die_encap_array_type type; };
template <> struct tag<encap::Rep, DW_TAG_class_type> { typedef encap::Die_encap_class_type type; };
template <> struct tag<encap::Rep, DW_TAG_entry_point> { typedef encap::Die_encap_entry_point type; };
template <> struct tag<encap::Rep, DW_TAG_enumeration_type> { typedef encap::Die_encap_enumeration_type type; };
template <> struct tag<encap::Rep, DW_TAG_formal_parameter> { typedef encap::Die_encap_formal_parameter type; };
template <> struct tag<encap::Rep, DW_TAG_imported_declaration> { typedef encap::Die_encap_imported_declaration type; };
template <> struct tag<encap::Rep, DW_TAG_label> { typedef encap::Die_encap_label type; };
template <> struct tag<encap::Rep, DW_TAG_lexical_block> { typedef encap::Die_encap_lexical_block type; };
template <> struct tag<encap::Rep, DW_TAG_member> { typedef encap::Die_encap_member type; };
template <> struct tag<encap::Rep, DW_TAG_pointer_type> { typedef encap::Die_encap_pointer_type type; };
template <> struct tag<encap::Rep, DW_TAG_reference_type> { typedef encap::Die_encap_reference_type type; };
template <> struct tag<encap::Rep, DW_TAG_compile_unit> { typedef encap::Die_encap_compile_unit type; };
template <> struct tag<encap::Rep, DW_TAG_string_type> { typedef encap::Die_encap_string_type type; };
template <> struct tag<encap::Rep, DW_TAG_structure_type> { typedef encap::Die_encap_structure_type type; };
template <> struct tag<encap::Rep, DW_TAG_subroutine_type> { typedef encap::Die_encap_subroutine_type type; };
template <> struct tag<encap::Rep, DW_TAG_typedef> { typedef encap::Die_encap_typedef type; };
template <> struct tag<encap::Rep, DW_TAG_union_type> { typedef encap::Die_encap_union_type type; };
template <> struct tag<encap::Rep, DW_TAG_unspecified_parameters> { typedef encap::Die_encap_unspecified_parameters type; };
template <> struct tag<encap::Rep, DW_TAG_variant> { typedef encap::Die_encap_variant type; };
template <> struct tag<encap::Rep, DW_TAG_common_block> { typedef encap::Die_encap_common_block type; };
template <> struct tag<encap::Rep, DW_TAG_common_inclusion> { typedef encap::Die_encap_common_inclusion type; };
template <> struct tag<encap::Rep, DW_TAG_inheritance> { typedef encap::Die_encap_inheritance type; };
template <> struct tag<encap::Rep, DW_TAG_inlined_subroutine> { typedef encap::Die_encap_inlined_subroutine type; };
template <> struct tag<encap::Rep, DW_TAG_module> { typedef encap::Die_encap_module type; };
template <> struct tag<encap::Rep, DW_TAG_ptr_to_member_type> { typedef encap::Die_encap_ptr_to_member_type type; };
template <> struct tag<encap::Rep, DW_TAG_set_type> { typedef encap::Die_encap_set_type type; };
template <> struct tag<encap::Rep, DW_TAG_subrange_type> { typedef encap::Die_encap_subrange_type type; };
template <> struct tag<encap::Rep, DW_TAG_with_stmt> { typedef encap::Die_encap_with_stmt type; };
template <> struct tag<encap::Rep, DW_TAG_access_declaration> { typedef encap::Die_encap_access_declaration type; };
template <> struct tag<encap::Rep, DW_TAG_base_type> { typedef encap::Die_encap_base_type type; };
template <> struct tag<encap::Rep, DW_TAG_catch_block> { typedef encap::Die_encap_catch_block type; };
template <> struct tag<encap::Rep, DW_TAG_const_type> { typedef encap::Die_encap_const_type type; };
template <> struct tag<encap::Rep, DW_TAG_constant> { typedef encap::Die_encap_constant type; };
template <> struct tag<encap::Rep, DW_TAG_enumerator> { typedef encap::Die_encap_enumerator type; };
template <> struct tag<encap::Rep, DW_TAG_file_type> { typedef encap::Die_encap_file_type type; };
template <> struct tag<encap::Rep, DW_TAG_friend> { typedef encap::Die_encap_friend type; };
template <> struct tag<encap::Rep, DW_TAG_namelist> { typedef encap::Die_encap_namelist type; };
template <> struct tag<encap::Rep, DW_TAG_namelist_item> { typedef encap::Die_encap_namelist_item type; };
template <> struct tag<encap::Rep, DW_TAG_packed_type> { typedef encap::Die_encap_packed_type type; };
template <> struct tag<encap::Rep, DW_TAG_subprogram> { typedef encap::Die_encap_subprogram type; };
template <> struct tag<encap::Rep, DW_TAG_template_type_parameter> { typedef encap::Die_encap_template_type_parameter type; };
template <> struct tag<encap::Rep, DW_TAG_template_value_parameter> { typedef encap::Die_encap_template_value_parameter type; };
template <> struct tag<encap::Rep, DW_TAG_thrown_type> { typedef encap::Die_encap_thrown_type type; };
template <> struct tag<encap::Rep, DW_TAG_try_block> { typedef encap::Die_encap_try_block type; };
template <> struct tag<encap::Rep, DW_TAG_variant_part> { typedef encap::Die_encap_variant_part type; };
template <> struct tag<encap::Rep, DW_TAG_variable> { typedef encap::Die_encap_variable type; };
template <> struct tag<encap::Rep, DW_TAG_volatile_type> { typedef encap::Die_encap_volatile_type type; };
template <> struct tag<encap::Rep, DW_TAG_dwarf_procedure> { typedef encap::Die_encap_dwarf_procedure type; };
template <> struct tag<encap::Rep, DW_TAG_restrict_type> { typedef encap::Die_encap_restrict_type type; };
template <> struct tag<encap::Rep, DW_TAG_interface_type> { typedef encap::Die_encap_interface_type type; };
template <> struct tag<encap::Rep, DW_TAG_namespace> { typedef encap::Die_encap_namespace type; };
template <> struct tag<encap::Rep, DW_TAG_imported_module> { typedef encap::Die_encap_imported_module type; };
template <> struct tag<encap::Rep, DW_TAG_unspecified_type> { typedef encap::Die_encap_unspecified_type type; };
template <> struct tag<encap::Rep, DW_TAG_partial_unit> { typedef encap::Die_encap_partial_unit type; };
template <> struct tag<encap::Rep, DW_TAG_imported_unit> { typedef encap::Die_encap_imported_unit type; };
template <> struct tag<encap::Rep, DW_TAG_condition> { typedef encap::Die_encap_condition type; };
template <> struct tag<encap::Rep, DW_TAG_shared_type> { typedef encap::Die_encap_shared_type type; };
} namespace encap {