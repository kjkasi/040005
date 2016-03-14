/* Type information for cp/name-lookup.c.
   Copyright (C) 2003 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_cxx_saved_binding (void *x_p)
{
  struct cxx_saved_binding * const x = (struct cxx_saved_binding *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_17cxx_saved_binding ((*x).previous);
      gt_ggc_m_9tree_node ((*x).identifier);
      gt_ggc_m_11cxx_binding ((*x).binding);
      gt_ggc_m_9tree_node ((*x).class_value);
      gt_ggc_m_9tree_node ((*x).real_type_value);
    }
}

void
gt_ggc_mx_binding_table_s (void *x_p)
{
  struct binding_table_s * const x = (struct binding_table_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).chain != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).chain_count); i0++) {
          gt_ggc_m_15binding_entry_s ((*x).chain[i0]);
        }
        ggc_mark ((*x).chain);
      }
    }
}

void
gt_pch_nx_cxx_saved_binding (void *x_p)
{
  struct cxx_saved_binding * const x = (struct cxx_saved_binding *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17cxx_saved_binding))
    {
      gt_pch_n_17cxx_saved_binding ((*x).previous);
      gt_pch_n_9tree_node ((*x).identifier);
      gt_pch_n_11cxx_binding ((*x).binding);
      gt_pch_n_9tree_node ((*x).class_value);
      gt_pch_n_9tree_node ((*x).real_type_value);
    }
}

void
gt_pch_nx_binding_table_s (void *x_p)
{
  struct binding_table_s * const x = (struct binding_table_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15binding_table_s))
    {
      if ((*x).chain != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).chain_count); i0++) {
          gt_pch_n_15binding_entry_s ((*x).chain[i0]);
        }
        gt_pch_note_object ((*x).chain, x, gt_pch_p_15binding_table_s);
      }
    }
}

void
gt_pch_p_17cxx_saved_binding (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct cxx_saved_binding * const x ATTRIBUTE_UNUSED = (struct cxx_saved_binding *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).previous), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).identifier), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).binding), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).real_type_value), cookie);
}

void
gt_pch_p_15binding_table_s (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct binding_table_s * const x ATTRIBUTE_UNUSED = (struct binding_table_s *)x_p;
  if ((*x).chain != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(((*x)).chain_count); i0++) {
      if ((void *)((*x).chain) == this_obj)
        op (&((*x).chain[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).chain), cookie);
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_cp_name_lookup_h[] = {
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_ggc_rd_gt_cp_name_lookup_h[] = {
  { &free_binding_level, 1, sizeof (free_binding_level), NULL, NULL },
  { &free_bindings, 1, sizeof (free_bindings), NULL, NULL },
  { &free_binding_entry, 1, sizeof (free_binding_entry), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_cp_name_lookup_h[] = {
  { &anon_cnt, 1, sizeof (anon_cnt), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

