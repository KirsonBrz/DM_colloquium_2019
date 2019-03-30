/* Generated code for Python module 'copy'
 * created by Nuitka version 0.6.2
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_copy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_copy;
PyDictObject *moduledict_copy;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_set;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_PyStringMap_tuple;
extern PyObject *const_str_plain_FunctionType;
static PyObject *const_str_digest_98ccc6d20cd88d3e03ae146a783f5f85;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_str_plain_dict;
static PyObject *const_str_plain__keep_alive;
extern PyObject *const_tuple_str_plain_dispatch_table_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_zip;
static PyObject *const_str_plain__copy_immutable;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_Error;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_9be38bb8f4b5de5ea958fa198f680e39;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_rv;
static PyObject *const_str_digest_6adbe2396a99ae971cd8988cdbae5b43;
extern PyObject *const_str_plain_PyStringMap;
extern PyObject *const_str_plain___func__;
static PyObject *const_str_plain__nil;
static PyObject *const_str_plain_copier;
static PyObject *const_tuple_7f2636139edf3679f215b279aca20abb_tuple;
extern PyObject *const_str_plain_cls;
static PyObject *const_tuple_str_plain_x_str_plain_memo_tuple;
extern PyObject *const_str_plain_func;
static PyObject *const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_a_str_plain_deepcopy_str_plain_memo_tuple;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_slice;
extern PyObject *const_str_plain___deepcopy__;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_int_pos_4_tuple;
extern PyObject *const_str_plain_t;
static PyObject *const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_deep;
static PyObject *const_str_plain__copy_dispatch;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_deepcopy;
static PyObject *const_str_plain_dictiter;
extern PyObject *const_str_plain_weakref;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_slotstate;
static PyObject *const_str_digest_87573aa416d11e9638e272a8c2da64a2;
static PyObject *const_tuple_a985c4de06e8320d148be5c0eee68098_tuple;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain__deepcopy_method;
static PyObject *const_list_str_plain_Error_str_plain_copy_str_plain_deepcopy_list;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_e6efe62fb03bba549671af2c3ac03d70;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_frozenset;
extern PyObject *const_str_plain_list;
static PyObject *const_str_digest_92c5d9f128af6d0bb132f49041603bc4;
static PyObject *const_str_plain_listiter;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_plain_BuiltinFunctionType;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_ref;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple;
extern PyObject *const_str_digest_2dc33fccbeac347e9e2092734625b4f6;
extern PyObject *const_int_pos_4;
static PyObject *const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain__deepcopy_list;
static PyObject *const_str_digest_09ac5b67852a5f6b97c645bdfaac9ed4;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_dispatch_table;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain__deepcopy_atomic;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_memo;
extern PyObject *const_str_plain_copyreg;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain___reduce_ex__;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain___copy__;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_issc;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_types;
static PyObject *const_tuple_755581cf7bbadf96693e01ee054fa795_tuple;
extern PyObject *const_str_plain_MethodType;
static PyObject *const_str_digest_f4af71476ab6e56aa2cea4d0d9a78222;
static PyObject *const_str_plain__deepcopy_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain___self__;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_CodeType;
static PyObject *const_str_plain__deepcopy_dispatch;
static PyObject *const_str_plain_reductor;
extern PyObject *const_str_plain__reconstruct;
static PyObject *const_str_plain__deepcopy_dict;
static PyObject *const_str_digest_cf5959783b7b7eaa40bec4513c1242d1;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_98ccc6d20cd88d3e03ae146a783f5f85 = UNSTREAM_STRING_ASCII( &constant_bin[ 76787 ], 333, 0 );
    const_str_plain__keep_alive = UNSTREAM_STRING_ASCII( &constant_bin[ 77120 ], 11, 1 );
    const_str_plain__copy_immutable = UNSTREAM_STRING_ASCII( &constant_bin[ 77131 ], 15, 1 );
    const_str_digest_9be38bb8f4b5de5ea958fa198f680e39 = UNSTREAM_STRING_ASCII( &constant_bin[ 77146 ], 37, 0 );
    const_str_digest_6adbe2396a99ae971cd8988cdbae5b43 = UNSTREAM_STRING_ASCII( &constant_bin[ 77183 ], 7, 0 );
    const_str_plain__nil = UNSTREAM_STRING_ASCII( &constant_bin[ 77190 ], 4, 1 );
    const_str_plain_copier = UNSTREAM_STRING_ASCII( &constant_bin[ 77194 ], 6, 1 );
    const_tuple_7f2636139edf3679f215b279aca20abb_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 1, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 4, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    const_str_plain_listiter = UNSTREAM_STRING_ASCII( &constant_bin[ 77200 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 5, const_str_plain_listiter ); Py_INCREF( const_str_plain_listiter );
    const_str_plain_dictiter = UNSTREAM_STRING_ASCII( &constant_bin[ 77208 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 6, const_str_plain_dictiter ); Py_INCREF( const_str_plain_dictiter );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 7, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    const_str_plain_deep = UNSTREAM_STRING_ASCII( &constant_bin[ 77084 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 8, const_str_plain_deep ); Py_INCREF( const_str_plain_deep );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 9, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 10, const_str_plain_slotstate ); Py_INCREF( const_str_plain_slotstate );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 11, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 12, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 13, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    const_tuple_str_plain_x_str_plain_memo_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_memo_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_memo_tuple, 1, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 1, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 2, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    PyTuple_SET_ITEM( const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 3, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 4, const_str_plain_append ); Py_INCREF( const_str_plain_append );
    PyTuple_SET_ITEM( const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 5, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    const_tuple_str_plain_a_str_plain_deepcopy_str_plain_memo_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_deepcopy_str_plain_memo_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_deepcopy_str_plain_memo_tuple, 1, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_deepcopy_str_plain_memo_tuple, 2, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 1, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 2, const_str_plain__nil ); Py_INCREF( const_str_plain__nil );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 3, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 5, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 6, const_str_plain_copier ); Py_INCREF( const_str_plain_copier );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 7, const_str_plain_issc ); Py_INCREF( const_str_plain_issc );
    const_str_plain_reductor = UNSTREAM_STRING_ASCII( &constant_bin[ 77216 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 8, const_str_plain_reductor ); Py_INCREF( const_str_plain_reductor );
    PyTuple_SET_ITEM( const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 9, const_str_plain_rv ); Py_INCREF( const_str_plain_rv );
    const_str_plain__copy_dispatch = UNSTREAM_STRING_ASCII( &constant_bin[ 77224 ], 14, 1 );
    const_str_digest_87573aa416d11e9638e272a8c2da64a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 77238 ], 105, 0 );
    const_tuple_a985c4de06e8320d148be5c0eee68098_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 2, const_str_plain_copier ); Py_INCREF( const_str_plain_copier );
    PyTuple_SET_ITEM( const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 3, const_str_plain_issc ); Py_INCREF( const_str_plain_issc );
    PyTuple_SET_ITEM( const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 4, const_str_plain_reductor ); Py_INCREF( const_str_plain_reductor );
    PyTuple_SET_ITEM( const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 5, const_str_plain_rv ); Py_INCREF( const_str_plain_rv );
    const_str_plain__deepcopy_method = UNSTREAM_STRING_ASCII( &constant_bin[ 77343 ], 16, 1 );
    const_list_str_plain_Error_str_plain_copy_str_plain_deepcopy_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_Error_str_plain_copy_str_plain_deepcopy_list, 0, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    PyList_SET_ITEM( const_list_str_plain_Error_str_plain_copy_str_plain_deepcopy_list, 1, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyList_SET_ITEM( const_list_str_plain_Error_str_plain_copy_str_plain_deepcopy_list, 2, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    const_str_digest_e6efe62fb03bba549671af2c3ac03d70 = UNSTREAM_STRING_ASCII( &constant_bin[ 77359 ], 31, 0 );
    const_str_digest_92c5d9f128af6d0bb132f49041603bc4 = UNSTREAM_STRING_ASCII( &constant_bin[ 77390 ], 13, 0 );
    const_str_plain_BuiltinFunctionType = UNSTREAM_STRING_ASCII( &constant_bin[ 77403 ], 19, 1 );
    const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 1, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 2, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    PyTuple_SET_ITEM( const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 3, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple, 1, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple, 2, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    PyTuple_SET_ITEM( const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple, 3, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    const_str_plain__deepcopy_list = UNSTREAM_STRING_ASCII( &constant_bin[ 77422 ], 14, 1 );
    const_str_digest_09ac5b67852a5f6b97c645bdfaac9ed4 = UNSTREAM_STRING_ASCII( &constant_bin[ 77436 ], 34, 0 );
    const_str_plain__deepcopy_atomic = UNSTREAM_STRING_ASCII( &constant_bin[ 77470 ], 16, 1 );
    const_tuple_755581cf7bbadf96693e01ee054fa795_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 1, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 2, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    PyTuple_SET_ITEM( const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 3, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_f4af71476ab6e56aa2cea4d0d9a78222 = UNSTREAM_STRING_ASCII( &constant_bin[ 77486 ], 108, 0 );
    const_str_plain__deepcopy_tuple = UNSTREAM_STRING_ASCII( &constant_bin[ 77594 ], 15, 1 );
    const_str_plain_CodeType = UNSTREAM_STRING_ASCII( &constant_bin[ 77609 ], 8, 1 );
    const_str_plain__deepcopy_dispatch = UNSTREAM_STRING_ASCII( &constant_bin[ 77617 ], 18, 1 );
    const_str_plain__deepcopy_dict = UNSTREAM_STRING_ASCII( &constant_bin[ 77635 ], 14, 1 );
    const_str_digest_cf5959783b7b7eaa40bec4513c1242d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 77649 ], 1741, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_copy( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e9bdbe15efa3fc4963521866d19dbac4;
static PyCodeObject *codeobj_ec58d9caf8abf5c702b15220dd15747d;
static PyCodeObject *codeobj_122eb0132a42fc1b46ef4def087eeee6;
static PyCodeObject *codeobj_e144b5ee06981a1ead68c63895c13c84;
static PyCodeObject *codeobj_e99af4bebc60b21ac4f89c56f94559b0;
static PyCodeObject *codeobj_256e93c062b8d169a4e7ba422d100fa6;
static PyCodeObject *codeobj_8fa6022c9eaf3e13d7c40d871163c048;
static PyCodeObject *codeobj_9d7dc4e6b718de5e945328d6bab0cb55;
static PyCodeObject *codeobj_13b174c1793d195f9b4d976a9a8cd493;
static PyCodeObject *codeobj_36a7ce799cbfb28d4bc7286b638082ca;
static PyCodeObject *codeobj_b17146f74758d73962f4fe7f81338c89;
static PyCodeObject *codeobj_6f2fd479b505f662b0528c01fc7ca297;
static PyCodeObject *codeobj_44771d51c7d1de3289beda4f91a494fa;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6adbe2396a99ae971cd8988cdbae5b43 );
    codeobj_e9bdbe15efa3fc4963521866d19dbac4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 273, const_tuple_c6842d07e95ad6eeb8e70c9ae70c70ae_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec58d9caf8abf5c702b15220dd15747d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 220, const_tuple_str_plain_a_str_plain_deepcopy_str_plain_memo_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_122eb0132a42fc1b46ef4def087eeee6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_92c5d9f128af6d0bb132f49041603bc4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e144b5ee06981a1ead68c63895c13c84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__copy_immutable, 111, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e99af4bebc60b21ac4f89c56f94559b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__deepcopy_atomic, 190, const_tuple_str_plain_x_str_plain_memo_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_256e93c062b8d169a4e7ba422d100fa6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__deepcopy_dict, 236, const_tuple_755581cf7bbadf96693e01ee054fa795_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8fa6022c9eaf3e13d7c40d871163c048 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__deepcopy_list, 210, const_tuple_cb6da95267c578a460b43262bcdb96cb_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d7dc4e6b718de5e945328d6bab0cb55 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__deepcopy_method, 246, const_tuple_str_plain_x_str_plain_memo_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_13b174c1793d195f9b4d976a9a8cd493 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__deepcopy_tuple, 219, const_tuple_214c9ddf1e34c3445bfd0a1c414d09e3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36a7ce799cbfb28d4bc7286b638082ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain__keep_alive, 252, const_tuple_str_plain_x_str_plain_memo_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b17146f74758d73962f4fe7f81338c89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reconstruct, 268, const_tuple_7f2636139edf3679f215b279aca20abb_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f2fd479b505f662b0528c01fc7ca297 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 66, const_tuple_a985c4de06e8320d148be5c0eee68098_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_44771d51c7d1de3289beda4f91a494fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deepcopy, 132, const_tuple_d5f5c29d8a2d3bb02964a6f5d12cf170_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *copy$$$function_10__reconstruct$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_copy$$$function_10__reconstruct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_copy$$$function_1_copy(  );


static PyObject *MAKE_FUNCTION_copy$$$function_2__copy_immutable(  );


static PyObject *MAKE_FUNCTION_copy$$$function_3_deepcopy( PyObject *defaults );


static PyObject *MAKE_FUNCTION_copy$$$function_4__deepcopy_atomic(  );


static PyObject *MAKE_FUNCTION_copy$$$function_5__deepcopy_list( PyObject *defaults );


static PyObject *MAKE_FUNCTION_copy$$$function_6__deepcopy_tuple( PyObject *defaults );


static PyObject *MAKE_FUNCTION_copy$$$function_7__deepcopy_dict( PyObject *defaults );


static PyObject *MAKE_FUNCTION_copy$$$function_8__deepcopy_method(  );


static PyObject *MAKE_FUNCTION_copy$$$function_9__keep_alive(  );


// The module function definitions.
static PyObject *impl_copy$$$function_1_copy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_cls = NULL;
    PyObject *var_copier = NULL;
    PyObject *var_issc = NULL;
    PyObject *var_reductor = NULL;
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_6f2fd479b505f662b0528c01fc7ca297;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_6f2fd479b505f662b0528c01fc7ca297 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_x );
        tmp_type_arg_1 = par_x;
        tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_assign_source_1 == NULL) );
        assert( var_cls == NULL );
        var_cls = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f2fd479b505f662b0528c01fc7ca297, codeobj_6f2fd479b505f662b0528c01fc7ca297, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6f2fd479b505f662b0528c01fc7ca297 = cache_frame_6f2fd479b505f662b0528c01fc7ca297;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f2fd479b505f662b0528c01fc7ca297 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f2fd479b505f662b0528c01fc7ca297 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__copy_dispatch );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copy_dispatch );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copy_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_cls );
        tmp_args_element_name_1 = var_cls;
        frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_copier == NULL );
        var_copier = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_copier );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_copier );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_copier );
            tmp_called_name_1 = var_copier;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 76;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_cls );
        tmp_args_element_name_3 = var_cls;
        tmp_args_element_name_4 = (PyObject *)&PyType_Type;
        frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( var_issc == NULL );
        var_issc = tmp_assign_source_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6f2fd479b505f662b0528c01fc7ca297, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6f2fd479b505f662b0528c01fc7ca297, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = Py_False;
            assert( var_issc == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_issc = tmp_assign_source_4;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 78;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6f2fd479b505f662b0528c01fc7ca297->m_frame) frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_1_copy );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        if ( var_issc == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "issc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( var_issc );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__copy_immutable );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copy_immutable );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copy_immutable" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_2;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_5 = par_x;
            frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( var_cls );
        tmp_getattr_target_1 = var_cls;
        tmp_getattr_attr_1 = const_str_plain___copy__;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_5 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_copier;
            assert( old != NULL );
            var_copier = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_copier );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_copier );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_copier );
            tmp_called_name_4 = var_copier;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_6 = par_x;
            frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_dispatch_table );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dispatch_table );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dispatch_table" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_cls );
        tmp_args_element_name_7 = var_cls;
        frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_reductor == NULL );
        var_reductor = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_reductor );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_reductor );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_reductor );
            tmp_called_name_5 = var_reductor;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_8 = par_x;
            frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_rv == NULL );
            var_rv = tmp_assign_source_7;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            CHECK_OBJECT( par_x );
            tmp_getattr_target_2 = par_x;
            tmp_getattr_attr_2 = const_str_plain___reduce_ex__;
            tmp_getattr_default_2 = Py_None;
            tmp_assign_source_8 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_reductor;
                assert( old != NULL );
                var_reductor = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_5;
            CHECK_OBJECT( var_reductor );
            tmp_truth_name_5 = CHECK_IF_TRUE( var_reductor );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_6;
                CHECK_OBJECT( var_reductor );
                tmp_called_name_6 = var_reductor;
                frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 96;
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 96;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_rv == NULL );
                var_rv = tmp_assign_source_9;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                CHECK_OBJECT( par_x );
                tmp_getattr_target_3 = par_x;
                tmp_getattr_attr_3 = const_str_plain___reduce__;
                tmp_getattr_default_3 = Py_None;
                tmp_assign_source_10 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_reductor;
                    assert( old != NULL );
                    var_reductor = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_7;
                int tmp_truth_name_6;
                CHECK_OBJECT( var_reductor );
                tmp_truth_name_6 = CHECK_IF_TRUE( var_reductor );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_7;
                }
                else
                {
                    goto branch_no_7;
                }
                branch_yes_7:;
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_name_7;
                    CHECK_OBJECT( var_reductor );
                    tmp_called_name_7 = var_reductor;
                    frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 100;
                    tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 100;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_rv == NULL );
                    var_rv = tmp_assign_source_11;
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_mvar_value_4;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_Error );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Error" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 102;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_8 = tmp_mvar_value_4;
                    tmp_left_name_1 = const_str_digest_9be38bb8f4b5de5ea958fa198f680e39;
                    CHECK_OBJECT( var_cls );
                    tmp_right_name_1 = var_cls;
                    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_6f2fd479b505f662b0528c01fc7ca297->m_frame.f_lineno = 102;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_raise_type_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 102;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_7:;
            }
            branch_end_6:;
        }
        branch_end_5:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if ( var_rv == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = var_rv;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        CHECK_OBJECT( par_x );
        tmp_return_value = par_x;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_8:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__reconstruct );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__reconstruct );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_reconstruct" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_5;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        if ( var_rv == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_rv;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f2fd479b505f662b0528c01fc7ca297 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f2fd479b505f662b0528c01fc7ca297 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f2fd479b505f662b0528c01fc7ca297 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f2fd479b505f662b0528c01fc7ca297, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f2fd479b505f662b0528c01fc7ca297->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f2fd479b505f662b0528c01fc7ca297, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f2fd479b505f662b0528c01fc7ca297,
        type_description_1,
        par_x,
        var_cls,
        var_copier,
        var_issc,
        var_reductor,
        var_rv
    );


    // Release cached frame.
    if ( frame_6f2fd479b505f662b0528c01fc7ca297 == cache_frame_6f2fd479b505f662b0528c01fc7ca297 )
    {
        Py_DECREF( frame_6f2fd479b505f662b0528c01fc7ca297 );
    }
    cache_frame_6f2fd479b505f662b0528c01fc7ca297 = NULL;

    assertFrameObject( frame_6f2fd479b505f662b0528c01fc7ca297 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_1_copy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_cls );
    Py_DECREF( var_cls );
    var_cls = NULL;

    CHECK_OBJECT( (PyObject *)var_copier );
    Py_DECREF( var_copier );
    var_copier = NULL;

    Py_XDECREF( var_issc );
    var_issc = NULL;

    Py_XDECREF( var_reductor );
    var_reductor = NULL;

    Py_XDECREF( var_rv );
    var_rv = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_cls );
    Py_DECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_copier );
    var_copier = NULL;

    Py_XDECREF( var_issc );
    var_issc = NULL;

    Py_XDECREF( var_reductor );
    var_reductor = NULL;

    Py_XDECREF( var_rv );
    var_rv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_1_copy );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_2__copy_immutable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_2__copy_immutable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_2__copy_immutable );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_3_deepcopy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    PyObject *par__nil = python_pars[ 2 ];
    PyObject *var_d = NULL;
    PyObject *var_y = NULL;
    PyObject *var_cls = NULL;
    PyObject *var_copier = NULL;
    PyObject *var_issc = NULL;
    PyObject *var_reductor = NULL;
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_44771d51c7d1de3289beda4f91a494fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_44771d51c7d1de3289beda4f91a494fa = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_memo );
        tmp_compexpr_left_1 = par_memo;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = PyDict_New();
            {
                PyObject *old = par_memo;
                assert( old != NULL );
                par_memo = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_44771d51c7d1de3289beda4f91a494fa, codeobj_44771d51c7d1de3289beda4f91a494fa, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_44771d51c7d1de3289beda4f91a494fa = cache_frame_44771d51c7d1de3289beda4f91a494fa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_44771d51c7d1de3289beda4f91a494fa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_44771d51c7d1de3289beda4f91a494fa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT( par_x );
        tmp_id_arg_1 = par_x;
        tmp_assign_source_2 = PyLong_FromVoidPtr( tmp_id_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_memo );
        tmp_called_instance_1 = par_memo;
        CHECK_OBJECT( var_d );
        tmp_args_element_name_1 = var_d;
        CHECK_OBJECT( par__nil );
        tmp_args_element_name_2 = par__nil;
        frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_y );
        tmp_compexpr_left_2 = var_y;
        CHECK_OBJECT( par__nil );
        tmp_compexpr_right_2 = par__nil;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( var_y );
        tmp_return_value = var_y;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_x );
        tmp_type_arg_1 = par_x;
        tmp_assign_source_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        assert( var_cls == NULL );
        var_cls = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_dispatch );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_dispatch );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_cls );
        tmp_args_element_name_3 = var_cls;
        frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_copier == NULL );
        var_copier = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_copier );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_copier );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_copier );
            tmp_called_name_1 = var_copier;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_4 = par_x;
            CHECK_OBJECT( par_memo );
            tmp_args_element_name_5 = par_memo;
            frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_y;
                assert( old != NULL );
                var_y = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
            assert( tmp_called_name_2 != NULL );
            CHECK_OBJECT( var_cls );
            tmp_args_element_name_6 = var_cls;
            tmp_args_element_name_7 = (PyObject *)&PyType_Type;
            frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            assert( var_issc == NULL );
            var_issc = tmp_assign_source_7;
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_44771d51c7d1de3289beda4f91a494fa, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_44771d51c7d1de3289beda4f91a494fa, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = PyExc_TypeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = const_int_0;
                assert( var_issc == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_issc = tmp_assign_source_8;
            }
            goto branch_end_4;
            branch_no_4:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 152;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_44771d51c7d1de3289beda4f91a494fa->m_frame) frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
            branch_end_4:;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( copy$$$function_3_deepcopy );
        return NULL;
        // End of try:
        try_end_1:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_truth_name_2;
            if ( var_issc == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "issc" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 156;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE( var_issc );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 157;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_2;
                CHECK_OBJECT( par_x );
                tmp_args_element_name_8 = par_x;
                CHECK_OBJECT( par_memo );
                tmp_args_element_name_9 = par_memo;
                frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 157;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 157;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_y;
                    assert( old != NULL );
                    var_y = tmp_assign_source_9;
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                CHECK_OBJECT( par_x );
                tmp_getattr_target_1 = par_x;
                tmp_getattr_attr_1 = const_str_plain___deepcopy__;
                tmp_getattr_default_1 = Py_None;
                tmp_assign_source_10 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 159;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_copier;
                    assert( old != NULL );
                    var_copier = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_6;
                int tmp_truth_name_3;
                CHECK_OBJECT( var_copier );
                tmp_truth_name_3 = CHECK_IF_TRUE( var_copier );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 160;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_6;
                }
                else
                {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_args_element_name_10;
                    CHECK_OBJECT( var_copier );
                    tmp_called_name_4 = var_copier;
                    CHECK_OBJECT( par_memo );
                    tmp_args_element_name_10 = par_memo;
                    frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 161;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                    }

                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_y;
                        assert( old != NULL );
                        var_y = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_11;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_dispatch_table );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dispatch_table );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dispatch_table" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 163;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_3 = tmp_mvar_value_3;
                    CHECK_OBJECT( var_cls );
                    tmp_args_element_name_11 = var_cls;
                    frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 163;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, call_args );
                    }

                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 163;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_reductor == NULL );
                    var_reductor = tmp_assign_source_12;
                }
                {
                    nuitka_bool tmp_condition_result_7;
                    int tmp_truth_name_4;
                    CHECK_OBJECT( var_reductor );
                    tmp_truth_name_4 = CHECK_IF_TRUE( var_reductor );
                    if ( tmp_truth_name_4 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 164;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_7;
                    }
                    else
                    {
                        goto branch_no_7;
                    }
                    branch_yes_7:;
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_called_name_5;
                        PyObject *tmp_args_element_name_12;
                        CHECK_OBJECT( var_reductor );
                        tmp_called_name_5 = var_reductor;
                        CHECK_OBJECT( par_x );
                        tmp_args_element_name_12 = par_x;
                        frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 165;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_12 };
                            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                        }

                        if ( tmp_assign_source_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 165;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_rv == NULL );
                        var_rv = tmp_assign_source_13;
                    }
                    goto branch_end_7;
                    branch_no_7:;
                    {
                        PyObject *tmp_assign_source_14;
                        PyObject *tmp_getattr_target_2;
                        PyObject *tmp_getattr_attr_2;
                        PyObject *tmp_getattr_default_2;
                        CHECK_OBJECT( par_x );
                        tmp_getattr_target_2 = par_x;
                        tmp_getattr_attr_2 = const_str_plain___reduce_ex__;
                        tmp_getattr_default_2 = Py_None;
                        tmp_assign_source_14 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                        if ( tmp_assign_source_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 167;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_reductor;
                            assert( old != NULL );
                            var_reductor = tmp_assign_source_14;
                            Py_DECREF( old );
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_8;
                        int tmp_truth_name_5;
                        CHECK_OBJECT( var_reductor );
                        tmp_truth_name_5 = CHECK_IF_TRUE( var_reductor );
                        if ( tmp_truth_name_5 == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 168;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_8 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_8;
                        }
                        else
                        {
                            goto branch_no_8;
                        }
                        branch_yes_8:;
                        {
                            PyObject *tmp_assign_source_15;
                            PyObject *tmp_called_name_6;
                            CHECK_OBJECT( var_reductor );
                            tmp_called_name_6 = var_reductor;
                            frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 169;
                            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

                            if ( tmp_assign_source_15 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 169;
                                type_description_1 = "oooooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( var_rv == NULL );
                            var_rv = tmp_assign_source_15;
                        }
                        goto branch_end_8;
                        branch_no_8:;
                        {
                            PyObject *tmp_assign_source_16;
                            PyObject *tmp_getattr_target_3;
                            PyObject *tmp_getattr_attr_3;
                            PyObject *tmp_getattr_default_3;
                            CHECK_OBJECT( par_x );
                            tmp_getattr_target_3 = par_x;
                            tmp_getattr_attr_3 = const_str_plain___reduce__;
                            tmp_getattr_default_3 = Py_None;
                            tmp_assign_source_16 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                            if ( tmp_assign_source_16 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 171;
                                type_description_1 = "oooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_reductor;
                                assert( old != NULL );
                                var_reductor = tmp_assign_source_16;
                                Py_DECREF( old );
                            }

                        }
                        {
                            nuitka_bool tmp_condition_result_9;
                            int tmp_truth_name_6;
                            CHECK_OBJECT( var_reductor );
                            tmp_truth_name_6 = CHECK_IF_TRUE( var_reductor );
                            if ( tmp_truth_name_6 == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 172;
                                type_description_1 = "oooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_9 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
                            {
                                goto branch_yes_9;
                            }
                            else
                            {
                                goto branch_no_9;
                            }
                            branch_yes_9:;
                            {
                                PyObject *tmp_assign_source_17;
                                PyObject *tmp_called_name_7;
                                CHECK_OBJECT( var_reductor );
                                tmp_called_name_7 = var_reductor;
                                frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 173;
                                tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
                                if ( tmp_assign_source_17 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 173;
                                    type_description_1 = "oooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( var_rv == NULL );
                                var_rv = tmp_assign_source_17;
                            }
                            goto branch_end_9;
                            branch_no_9:;
                            {
                                PyObject *tmp_raise_type_1;
                                PyObject *tmp_called_name_8;
                                PyObject *tmp_mvar_value_4;
                                PyObject *tmp_args_element_name_13;
                                PyObject *tmp_left_name_1;
                                PyObject *tmp_right_name_1;
                                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_Error );

                                if (unlikely( tmp_mvar_value_4 == NULL ))
                                {
                                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
                                }

                                if ( tmp_mvar_value_4 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Error" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 175;
                                    type_description_1 = "oooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_called_name_8 = tmp_mvar_value_4;
                                tmp_left_name_1 = const_str_digest_09ac5b67852a5f6b97c645bdfaac9ed4;
                                CHECK_OBJECT( var_cls );
                                tmp_right_name_1 = var_cls;
                                tmp_args_element_name_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                                if ( tmp_args_element_name_13 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 176;
                                    type_description_1 = "oooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 175;
                                {
                                    PyObject *call_args[] = { tmp_args_element_name_13 };
                                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                                }

                                Py_DECREF( tmp_args_element_name_13 );
                                if ( tmp_raise_type_1 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 175;
                                    type_description_1 = "oooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                exception_type = tmp_raise_type_1;
                                exception_lineno = 175;
                                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                                type_description_1 = "oooooooooo";
                                goto frame_exception_exit_1;
                            }
                            branch_end_9:;
                        }
                        branch_end_8:;
                    }
                    branch_end_7:;
                }
                {
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_isinstance_inst_1;
                    PyObject *tmp_isinstance_cls_1;
                    if ( var_rv == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rv" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 177;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_isinstance_inst_1 = var_rv;
                    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
                    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 177;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_10;
                    }
                    else
                    {
                        goto branch_no_10;
                    }
                    branch_yes_10:;
                    {
                        PyObject *tmp_assign_source_18;
                        CHECK_OBJECT( par_x );
                        tmp_assign_source_18 = par_x;
                        {
                            PyObject *old = var_y;
                            assert( old != NULL );
                            var_y = tmp_assign_source_18;
                            Py_INCREF( var_y );
                            Py_DECREF( old );
                        }

                    }
                    goto branch_end_10;
                    branch_no_10:;
                    {
                        PyObject *tmp_assign_source_19;
                        PyObject *tmp_dircall_arg1_1;
                        PyObject *tmp_mvar_value_5;
                        PyObject *tmp_dircall_arg2_1;
                        PyObject *tmp_tuple_element_1;
                        PyObject *tmp_dircall_arg3_1;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__reconstruct );

                        if (unlikely( tmp_mvar_value_5 == NULL ))
                        {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__reconstruct );
                        }

                        if ( tmp_mvar_value_5 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_reconstruct" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 180;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg1_1 = tmp_mvar_value_5;
                        CHECK_OBJECT( par_x );
                        tmp_tuple_element_1 = par_x;
                        tmp_dircall_arg2_1 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_1 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
                        CHECK_OBJECT( par_memo );
                        tmp_tuple_element_1 = par_memo;
                        Py_INCREF( tmp_tuple_element_1 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
                        if ( var_rv == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_1 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rv" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 180;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dircall_arg3_1 = var_rv;
                        Py_INCREF( tmp_dircall_arg1_1 );
                        Py_INCREF( tmp_dircall_arg3_1 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                            tmp_assign_source_19 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
                        }
                        if ( tmp_assign_source_19 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 180;
                            type_description_1 = "oooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_y;
                            assert( old != NULL );
                            var_y = tmp_assign_source_19;
                            Py_DECREF( old );
                        }

                    }
                    branch_end_10:;
                }
                branch_end_6:;
            }
            branch_end_5:;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if ( var_y == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 183;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_y;
        CHECK_OBJECT( par_x );
        tmp_compexpr_right_4 = par_x;
        tmp_condition_result_11 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            if ( var_y == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 184;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subvalue_1 = var_y;
            CHECK_OBJECT( par_memo );
            tmp_ass_subscribed_1 = par_memo;
            CHECK_OBJECT( var_d );
            tmp_ass_subscript_1 = var_d;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__keep_alive );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__keep_alive );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_keep_alive" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_6;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_14 = par_x;
            CHECK_OBJECT( par_memo );
            tmp_args_element_name_15 = par_memo;
            frame_44771d51c7d1de3289beda4f91a494fa->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_11:;
    }
    if ( var_y == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_44771d51c7d1de3289beda4f91a494fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_44771d51c7d1de3289beda4f91a494fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_44771d51c7d1de3289beda4f91a494fa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_44771d51c7d1de3289beda4f91a494fa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_44771d51c7d1de3289beda4f91a494fa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_44771d51c7d1de3289beda4f91a494fa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_44771d51c7d1de3289beda4f91a494fa,
        type_description_1,
        par_x,
        par_memo,
        par__nil,
        var_d,
        var_y,
        var_cls,
        var_copier,
        var_issc,
        var_reductor,
        var_rv
    );


    // Release cached frame.
    if ( frame_44771d51c7d1de3289beda4f91a494fa == cache_frame_44771d51c7d1de3289beda4f91a494fa )
    {
        Py_DECREF( frame_44771d51c7d1de3289beda4f91a494fa );
    }
    cache_frame_44771d51c7d1de3289beda4f91a494fa = NULL;

    assertFrameObject( frame_44771d51c7d1de3289beda4f91a494fa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_3_deepcopy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par__nil );
    Py_DECREF( par__nil );
    par__nil = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_copier );
    var_copier = NULL;

    Py_XDECREF( var_issc );
    var_issc = NULL;

    Py_XDECREF( var_reductor );
    var_reductor = NULL;

    Py_XDECREF( var_rv );
    var_rv = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par__nil );
    Py_DECREF( par__nil );
    par__nil = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_copier );
    var_copier = NULL;

    Py_XDECREF( var_issc );
    var_issc = NULL;

    Py_XDECREF( var_reductor );
    var_reductor = NULL;

    Py_XDECREF( var_rv );
    var_rv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_3_deepcopy );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_4__deepcopy_atomic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_4__deepcopy_atomic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_4__deepcopy_atomic );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_5__deepcopy_list( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    PyObject *par_deepcopy = python_pars[ 2 ];
    PyObject *var_y = NULL;
    PyObject *var_append = NULL;
    PyObject *var_a = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8fa6022c9eaf3e13d7c40d871163c048;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_8fa6022c9eaf3e13d7c40d871163c048 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_y == NULL );
        var_y = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8fa6022c9eaf3e13d7c40d871163c048, codeobj_8fa6022c9eaf3e13d7c40d871163c048, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8fa6022c9eaf3e13d7c40d871163c048 = cache_frame_8fa6022c9eaf3e13d7c40d871163c048;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8fa6022c9eaf3e13d7c40d871163c048 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8fa6022c9eaf3e13d7c40d871163c048 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT( var_y );
        tmp_ass_subvalue_1 = var_y;
        CHECK_OBJECT( par_memo );
        tmp_ass_subscribed_1 = par_memo;
        CHECK_OBJECT( par_x );
        tmp_id_arg_1 = par_x;
        tmp_ass_subscript_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_y );
        tmp_source_name_1 = var_y;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_append == NULL );
        var_append = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_x );
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 214;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_5;
            Py_INCREF( var_a );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_append );
        tmp_called_name_1 = var_append;
        CHECK_OBJECT( par_deepcopy );
        tmp_called_name_2 = par_deepcopy;
        CHECK_OBJECT( var_a );
        tmp_args_element_name_2 = var_a;
        CHECK_OBJECT( par_memo );
        tmp_args_element_name_3 = par_memo;
        frame_8fa6022c9eaf3e13d7c40d871163c048->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8fa6022c9eaf3e13d7c40d871163c048->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa6022c9eaf3e13d7c40d871163c048 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa6022c9eaf3e13d7c40d871163c048 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fa6022c9eaf3e13d7c40d871163c048, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fa6022c9eaf3e13d7c40d871163c048->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fa6022c9eaf3e13d7c40d871163c048, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fa6022c9eaf3e13d7c40d871163c048,
        type_description_1,
        par_x,
        par_memo,
        par_deepcopy,
        var_y,
        var_append,
        var_a
    );


    // Release cached frame.
    if ( frame_8fa6022c9eaf3e13d7c40d871163c048 == cache_frame_8fa6022c9eaf3e13d7c40d871163c048 )
    {
        Py_DECREF( frame_8fa6022c9eaf3e13d7c40d871163c048 );
    }
    cache_frame_8fa6022c9eaf3e13d7c40d871163c048 = NULL;

    assertFrameObject( frame_8fa6022c9eaf3e13d7c40d871163c048 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_y );
    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_5__deepcopy_list );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_append );
    Py_DECREF( var_append );
    var_append = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_append );
    var_append = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_5__deepcopy_list );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_6__deepcopy_tuple( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    PyObject *par_deepcopy = python_pars[ 2 ];
    PyObject *var_y = NULL;
    PyObject *var_k = NULL;
    PyObject *var_j = NULL;
    PyObject *outline_0_var_a = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_13b174c1793d195f9b4d976a9a8cd493;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_ec58d9caf8abf5c702b15220dd15747d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ec58d9caf8abf5c702b15220dd15747d_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_13b174c1793d195f9b4d976a9a8cd493 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13b174c1793d195f9b4d976a9a8cd493, codeobj_13b174c1793d195f9b4d976a9a8cd493, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_13b174c1793d195f9b4d976a9a8cd493 = cache_frame_13b174c1793d195f9b4d976a9a8cd493;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13b174c1793d195f9b4d976a9a8cd493 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13b174c1793d195f9b4d976a9a8cd493 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_x );
            tmp_iter_arg_1 = par_x;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ec58d9caf8abf5c702b15220dd15747d_2, codeobj_ec58d9caf8abf5c702b15220dd15747d, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
        frame_ec58d9caf8abf5c702b15220dd15747d_2 = cache_frame_ec58d9caf8abf5c702b15220dd15747d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ec58d9caf8abf5c702b15220dd15747d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ec58d9caf8abf5c702b15220dd15747d_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "ooo";
                    exception_lineno = 220;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_5;
                Py_INCREF( outline_0_var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( par_deepcopy );
            tmp_called_name_1 = par_deepcopy;
            CHECK_OBJECT( outline_0_var_a );
            tmp_args_element_name_1 = outline_0_var_a;
            CHECK_OBJECT( par_memo );
            tmp_args_element_name_2 = par_memo;
            frame_ec58d9caf8abf5c702b15220dd15747d_2->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ec58d9caf8abf5c702b15220dd15747d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_ec58d9caf8abf5c702b15220dd15747d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ec58d9caf8abf5c702b15220dd15747d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ec58d9caf8abf5c702b15220dd15747d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ec58d9caf8abf5c702b15220dd15747d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ec58d9caf8abf5c702b15220dd15747d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ec58d9caf8abf5c702b15220dd15747d_2,
            type_description_2,
            outline_0_var_a,
            par_deepcopy,
            par_memo
        );


        // Release cached frame.
        if ( frame_ec58d9caf8abf5c702b15220dd15747d_2 == cache_frame_ec58d9caf8abf5c702b15220dd15747d_2 )
        {
            Py_DECREF( frame_ec58d9caf8abf5c702b15220dd15747d_2 );
        }
        cache_frame_ec58d9caf8abf5c702b15220dd15747d_2 = NULL;

        assertFrameObject( frame_ec58d9caf8abf5c702b15220dd15747d_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_a );
        outline_0_var_a = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_0_var_a );
        outline_0_var_a = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
        return NULL;
        outline_exception_1:;
        exception_lineno = 220;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_y == NULL );
        var_y = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT( par_memo );
        tmp_subscribed_name_1 = par_memo;
        CHECK_OBJECT( par_x );
        tmp_id_arg_1 = par_x;
        tmp_subscript_name_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_13b174c1793d195f9b4d976a9a8cd493, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_13b174c1793d195f9b4d976a9a8cd493, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 223;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_13b174c1793d195f9b4d976a9a8cd493->m_frame) frame_13b174c1793d195f9b4d976a9a8cd493->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
        branch_no_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_4 = var_y;
        frame_13b174c1793d195f9b4d976a9a8cd493->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 227;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_5;
        tmp_compexpr_right_2 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );

            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_assign_source_9;
            tmp_assign_source_9 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_9;
        }
        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );
        goto loop_end_2;
        goto branch_end_2;
        branch_no_2:;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_7;
        branch_end_2:;
    }
    // End of try:
    try_end_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 227;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 227;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooo";
                    exception_lineno = 227;
                    goto try_except_handler_10;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 227;
            goto try_except_handler_10;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_9;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_13;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_14;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_3 = var_k;
        CHECK_OBJECT( var_j );
        tmp_compexpr_right_3 = var_j;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_tuple_arg_1;
            CHECK_OBJECT( var_y );
            tmp_tuple_arg_1 = var_y;
            tmp_assign_source_15 = PySequence_Tuple( tmp_tuple_arg_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "oooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var_y;
                assert( old != NULL );
                var_y = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        goto loop_end_2;
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( par_x );
            tmp_assign_source_16 = par_x;
            {
                PyObject *old = var_y;
                var_y = tmp_assign_source_16;
                Py_INCREF( var_y );
                Py_XDECREF( old );
            }

        }
        branch_no_4:;
    }
    if ( var_y == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13b174c1793d195f9b4d976a9a8cd493 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13b174c1793d195f9b4d976a9a8cd493 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13b174c1793d195f9b4d976a9a8cd493 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13b174c1793d195f9b4d976a9a8cd493, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13b174c1793d195f9b4d976a9a8cd493->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13b174c1793d195f9b4d976a9a8cd493, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13b174c1793d195f9b4d976a9a8cd493,
        type_description_1,
        par_x,
        par_memo,
        par_deepcopy,
        var_y,
        var_k,
        var_j
    );


    // Release cached frame.
    if ( frame_13b174c1793d195f9b4d976a9a8cd493 == cache_frame_13b174c1793d195f9b4d976a9a8cd493 )
    {
        Py_DECREF( frame_13b174c1793d195f9b4d976a9a8cd493 );
    }
    cache_frame_13b174c1793d195f9b4d976a9a8cd493 = NULL;

    assertFrameObject( frame_13b174c1793d195f9b4d976a9a8cd493 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_6__deepcopy_tuple );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_7__deepcopy_dict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    PyObject *par_deepcopy = python_pars[ 2 ];
    PyObject *var_y = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_256e93c062b8d169a4e7ba422d100fa6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_256e93c062b8d169a4e7ba422d100fa6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_y == NULL );
        var_y = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_256e93c062b8d169a4e7ba422d100fa6, codeobj_256e93c062b8d169a4e7ba422d100fa6, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_256e93c062b8d169a4e7ba422d100fa6 = cache_frame_256e93c062b8d169a4e7ba422d100fa6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_256e93c062b8d169a4e7ba422d100fa6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_256e93c062b8d169a4e7ba422d100fa6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT( var_y );
        tmp_ass_subvalue_1 = var_y;
        CHECK_OBJECT( par_memo );
        tmp_ass_subscribed_1 = par_memo;
        CHECK_OBJECT( par_x );
        tmp_id_arg_1 = par_x;
        tmp_ass_subscript_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_256e93c062b8d169a4e7ba422d100fa6->m_frame.f_lineno = 239;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 239;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 239;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 239;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooo";
                    exception_lineno = 239;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 239;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_7;
            Py_INCREF( var_key );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_deepcopy );
        tmp_called_name_1 = par_deepcopy;
        CHECK_OBJECT( var_value );
        tmp_args_element_name_1 = var_value;
        CHECK_OBJECT( par_memo );
        tmp_args_element_name_2 = par_memo;
        frame_256e93c062b8d169a4e7ba422d100fa6->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_y );
        tmp_dictset_dict = var_y;
        CHECK_OBJECT( par_deepcopy );
        tmp_called_name_2 = par_deepcopy;
        CHECK_OBJECT( var_key );
        tmp_args_element_name_3 = var_key;
        CHECK_OBJECT( par_memo );
        tmp_args_element_name_4 = par_memo;
        frame_256e93c062b8d169a4e7ba422d100fa6->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_dictset_key = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_dictset_key == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dictset_value );

            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_dictset_key );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_256e93c062b8d169a4e7ba422d100fa6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_256e93c062b8d169a4e7ba422d100fa6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_256e93c062b8d169a4e7ba422d100fa6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_256e93c062b8d169a4e7ba422d100fa6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_256e93c062b8d169a4e7ba422d100fa6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_256e93c062b8d169a4e7ba422d100fa6,
        type_description_1,
        par_x,
        par_memo,
        par_deepcopy,
        var_y,
        var_key,
        var_value
    );


    // Release cached frame.
    if ( frame_256e93c062b8d169a4e7ba422d100fa6 == cache_frame_256e93c062b8d169a4e7ba422d100fa6 )
    {
        Py_DECREF( frame_256e93c062b8d169a4e7ba422d100fa6 );
    }
    cache_frame_256e93c062b8d169a4e7ba422d100fa6 = NULL;

    assertFrameObject( frame_256e93c062b8d169a4e7ba422d100fa6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_y );
    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_7__deepcopy_dict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_7__deepcopy_dict );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_8__deepcopy_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9d7dc4e6b718de5e945328d6bab0cb55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d7dc4e6b718de5e945328d6bab0cb55 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d7dc4e6b718de5e945328d6bab0cb55, codeobj_9d7dc4e6b718de5e945328d6bab0cb55, module_copy, sizeof(void *)+sizeof(void *) );
    frame_9d7dc4e6b718de5e945328d6bab0cb55 = cache_frame_9d7dc4e6b718de5e945328d6bab0cb55;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d7dc4e6b718de5e945328d6bab0cb55 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d7dc4e6b718de5e945328d6bab0cb55 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_x );
        tmp_type_arg_1 = par_x;
        tmp_called_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_called_name_1 == NULL) );
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___func__ );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_deepcopy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deepcopy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deepcopy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___self__ );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_memo );
        tmp_args_element_name_4 = par_memo;
        frame_9d7dc4e6b718de5e945328d6bab0cb55->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d7dc4e6b718de5e945328d6bab0cb55->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d7dc4e6b718de5e945328d6bab0cb55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d7dc4e6b718de5e945328d6bab0cb55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d7dc4e6b718de5e945328d6bab0cb55 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d7dc4e6b718de5e945328d6bab0cb55, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d7dc4e6b718de5e945328d6bab0cb55->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d7dc4e6b718de5e945328d6bab0cb55, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d7dc4e6b718de5e945328d6bab0cb55,
        type_description_1,
        par_x,
        par_memo
    );


    // Release cached frame.
    if ( frame_9d7dc4e6b718de5e945328d6bab0cb55 == cache_frame_9d7dc4e6b718de5e945328d6bab0cb55 )
    {
        Py_DECREF( frame_9d7dc4e6b718de5e945328d6bab0cb55 );
    }
    cache_frame_9d7dc4e6b718de5e945328d6bab0cb55 = NULL;

    assertFrameObject( frame_9d7dc4e6b718de5e945328d6bab0cb55 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_8__deepcopy_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_8__deepcopy_method );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_9__keep_alive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_memo = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_36a7ce799cbfb28d4bc7286b638082ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_36a7ce799cbfb28d4bc7286b638082ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36a7ce799cbfb28d4bc7286b638082ca, codeobj_36a7ce799cbfb28d4bc7286b638082ca, module_copy, sizeof(void *)+sizeof(void *) );
    frame_36a7ce799cbfb28d4bc7286b638082ca = cache_frame_36a7ce799cbfb28d4bc7286b638082ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36a7ce799cbfb28d4bc7286b638082ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36a7ce799cbfb28d4bc7286b638082ca ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_id_arg_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_memo );
        tmp_subscribed_name_1 = par_memo;
        CHECK_OBJECT( par_memo );
        tmp_id_arg_1 = par_memo;
        tmp_subscript_name_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_36a7ce799cbfb28d4bc7286b638082ca->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_36a7ce799cbfb28d4bc7286b638082ca, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_36a7ce799cbfb28d4bc7286b638082ca, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_list_element_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_id_arg_2;
            CHECK_OBJECT( par_x );
            tmp_list_element_1 = par_x;
            tmp_ass_subvalue_1 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_ass_subvalue_1, 0, tmp_list_element_1 );
            CHECK_OBJECT( par_memo );
            tmp_ass_subscribed_1 = par_memo;
            CHECK_OBJECT( par_memo );
            tmp_id_arg_2 = par_memo;
            tmp_ass_subscript_1 = PyLong_FromVoidPtr( tmp_id_arg_2 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 266;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 262;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_36a7ce799cbfb28d4bc7286b638082ca->m_frame) frame_36a7ce799cbfb28d4bc7286b638082ca->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_9__keep_alive );
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36a7ce799cbfb28d4bc7286b638082ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36a7ce799cbfb28d4bc7286b638082ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36a7ce799cbfb28d4bc7286b638082ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36a7ce799cbfb28d4bc7286b638082ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36a7ce799cbfb28d4bc7286b638082ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36a7ce799cbfb28d4bc7286b638082ca,
        type_description_1,
        par_x,
        par_memo
    );


    // Release cached frame.
    if ( frame_36a7ce799cbfb28d4bc7286b638082ca == cache_frame_36a7ce799cbfb28d4bc7286b638082ca )
    {
        Py_DECREF( frame_36a7ce799cbfb28d4bc7286b638082ca );
    }
    cache_frame_36a7ce799cbfb28d4bc7286b638082ca = NULL;

    assertFrameObject( frame_36a7ce799cbfb28d4bc7286b638082ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_9__keep_alive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_9__keep_alive );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_copy$$$function_10__reconstruct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_CellObject *par_memo = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_func = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_state = python_pars[ 4 ];
    PyObject *par_listiter = python_pars[ 5 ];
    PyObject *par_dictiter = python_pars[ 6 ];
    struct Nuitka_CellObject *par_deepcopy = PyCell_NEW1( python_pars[ 7 ] );
    nuitka_bool var_deep = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_y = NULL;
    PyObject *var_slotstate = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b17146f74758d73962f4fe7f81338c89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_b17146f74758d73962f4fe7f81338c89 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_memo ) );
        tmp_compexpr_left_1 = PyCell_GET( par_memo );
        tmp_compexpr_right_1 = Py_None;
        tmp_assign_source_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_deep = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b17146f74758d73962f4fe7f81338c89, codeobj_b17146f74758d73962f4fe7f81338c89, module_copy, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b17146f74758d73962f4fe7f81338c89 = cache_frame_b17146f74758d73962f4fe7f81338c89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b17146f74758d73962f4fe7f81338c89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b17146f74758d73962f4fe7f81338c89 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        assert( var_deep != NUITKA_BOOL_UNASSIGNED);
        tmp_and_left_value_1 = var_deep;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_args );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_args );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ocooooocbooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_args );
                tmp_iter_arg_1 = par_args;
                tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 273;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_1__$0 == NULL );
                tmp_genexpr_1__$0 = tmp_assign_source_3;
            }
            // Tried code:
            tmp_assign_source_2 = copy$$$function_10__reconstruct$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_assign_source_2)->m_closure[0] = par_deepcopy;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_assign_source_2)->m_closure[0] );
            ((struct Nuitka_GeneratorObject *)tmp_assign_source_2)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
            ((struct Nuitka_GeneratorObject *)tmp_assign_source_2)->m_closure[2] = par_memo;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_assign_source_2)->m_closure[2] );


            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( copy$$$function_10__reconstruct );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            goto outline_result_1;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( copy$$$function_10__reconstruct );
            return NULL;
            outline_result_1:;
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_4 = impl___internal__$$$function_2_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ocooooocbooooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        assert( var_deep != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_2 = var_deep;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_id_arg_1;
            CHECK_OBJECT( var_y );
            tmp_ass_subvalue_1 = var_y;
            CHECK_OBJECT( PyCell_GET( par_memo ) );
            tmp_ass_subscribed_1 = PyCell_GET( par_memo );
            CHECK_OBJECT( par_x );
            tmp_id_arg_1 = par_x;
            tmp_ass_subscript_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ocooooocbooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ocooooocbooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_state );
        tmp_compexpr_left_2 = par_state;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            nuitka_bool tmp_condition_result_4;
            assert( var_deep != NUITKA_BOOL_UNASSIGNED);
            tmp_condition_result_4 = var_deep;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_called_name_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( PyCell_GET( par_deepcopy ) );
                tmp_called_name_1 = PyCell_GET( par_deepcopy );
                CHECK_OBJECT( par_state );
                tmp_args_element_name_1 = par_state;
                CHECK_OBJECT( PyCell_GET( par_memo ) );
                tmp_args_element_name_2 = PyCell_GET( par_memo );
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 280;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_state;
                    assert( old != NULL );
                    par_state = tmp_assign_source_5;
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_source_name_1;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_y );
            tmp_source_name_1 = var_y;
            tmp_attribute_name_1 = const_str_plain___setstate__;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ocooooocbooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( var_y );
                tmp_called_instance_1 = var_y;
                CHECK_OBJECT( par_state );
                tmp_args_element_name_3 = par_state;
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 282;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___setstate__, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 282;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_6;
                int tmp_and_left_truth_2;
                nuitka_bool tmp_and_left_value_2;
                nuitka_bool tmp_and_right_value_2;
                PyObject *tmp_isinstance_inst_1;
                PyObject *tmp_isinstance_cls_1;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_len_arg_1;
                CHECK_OBJECT( par_state );
                tmp_isinstance_inst_1 = par_state;
                tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_and_left_truth_2 == 1 )
                {
                    goto and_right_2;
                }
                else
                {
                    goto and_left_2;
                }
                and_right_2:;
                CHECK_OBJECT( par_state );
                tmp_len_arg_1 = par_state;
                tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = const_int_pos_2;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                assert( !(tmp_res == -1) );
                tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_6 = tmp_and_right_value_2;
                goto and_end_2;
                and_left_2:;
                tmp_condition_result_6 = tmp_and_left_value_2;
                and_end_2:;
                if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_6;
                }
                else
                {
                    goto branch_no_6;
                }
                branch_yes_6:;
                // Tried code:
                {
                    PyObject *tmp_assign_source_6;
                    PyObject *tmp_iter_arg_2;
                    CHECK_OBJECT( par_state );
                    tmp_iter_arg_2 = par_state;
                    tmp_assign_source_6 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
                    if ( tmp_assign_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "ocooooocbooooo";
                        goto try_except_handler_3;
                    }
                    assert( tmp_tuple_unpack_1__source_iter == NULL );
                    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_unpack_1;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
                    if ( tmp_assign_source_7 == NULL )
                    {
                        if ( !ERROR_OCCURRED() )
                        {
                            exception_type = PyExc_StopIteration;
                            Py_INCREF( exception_type );
                            exception_value = NULL;
                            exception_tb = NULL;
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        }


                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 285;
                        goto try_except_handler_4;
                    }
                    assert( tmp_tuple_unpack_1__element_1 == NULL );
                    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
                }
                {
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_unpack_2;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
                    if ( tmp_assign_source_8 == NULL )
                    {
                        if ( !ERROR_OCCURRED() )
                        {
                            exception_type = PyExc_StopIteration;
                            Py_INCREF( exception_type );
                            exception_value = NULL;
                            exception_tb = NULL;
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        }


                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 285;
                        goto try_except_handler_4;
                    }
                    assert( tmp_tuple_unpack_1__element_2 == NULL );
                    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
                }
                {
                    PyObject *tmp_iterator_name_1;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

                    if (likely( tmp_iterator_attempt == NULL ))
                    {
                        PyObject *error = GET_ERROR_OCCURRED();

                        if ( error != NULL )
                        {
                            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                            {
                                CLEAR_ERROR_OCCURRED();
                            }
                            else
                            {
                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                                type_description_1 = "ocooooocbooooo";
                                exception_lineno = 285;
                                goto try_except_handler_4;
                            }
                        }
                    }
                    else
                    {
                        Py_DECREF( tmp_iterator_attempt );

                        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 285;
                        goto try_except_handler_4;
                    }
                }
                goto try_end_1;
                // Exception handler code:
                try_except_handler_4:;
                exception_keeper_type_1 = exception_type;
                exception_keeper_value_1 = exception_value;
                exception_keeper_tb_1 = exception_tb;
                exception_keeper_lineno_1 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
                Py_DECREF( tmp_tuple_unpack_1__source_iter );
                tmp_tuple_unpack_1__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_1;
                exception_value = exception_keeper_value_1;
                exception_tb = exception_keeper_tb_1;
                exception_lineno = exception_keeper_lineno_1;

                goto try_except_handler_3;
                // End of try:
                try_end_1:;
                goto try_end_2;
                // Exception handler code:
                try_except_handler_3:;
                exception_keeper_type_2 = exception_type;
                exception_keeper_value_2 = exception_value;
                exception_keeper_tb_2 = exception_tb;
                exception_keeper_lineno_2 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_1__element_1 );
                tmp_tuple_unpack_1__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_1__element_2 );
                tmp_tuple_unpack_1__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto frame_exception_exit_1;
                // End of try:
                try_end_2:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
                Py_DECREF( tmp_tuple_unpack_1__source_iter );
                tmp_tuple_unpack_1__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_9;
                    CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
                    {
                        PyObject *old = par_state;
                        assert( old != NULL );
                        par_state = tmp_assign_source_9;
                        Py_INCREF( par_state );
                        Py_DECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_1__element_1 );
                tmp_tuple_unpack_1__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_10;
                    CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
                    assert( var_slotstate == NULL );
                    Py_INCREF( tmp_assign_source_10 );
                    var_slotstate = tmp_assign_source_10;
                }
                Py_XDECREF( tmp_tuple_unpack_1__element_2 );
                tmp_tuple_unpack_1__element_2 = NULL;

                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_11;
                    tmp_assign_source_11 = Py_None;
                    assert( var_slotstate == NULL );
                    Py_INCREF( tmp_assign_source_11 );
                    var_slotstate = tmp_assign_source_11;
                }
                branch_end_6:;
            }
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                if ( par_state == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "state" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 288;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_4 = par_state;
                tmp_compexpr_right_4 = Py_None;
                tmp_condition_result_7 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_7;
                }
                else
                {
                    goto branch_no_7;
                }
                branch_yes_7:;
                {
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_source_name_3;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_4;
                    CHECK_OBJECT( var_y );
                    tmp_source_name_3 = var_y;
                    tmp_source_name_2 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_3 );
                    if ( tmp_source_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "ocooooocbooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
                    Py_DECREF( tmp_source_name_2 );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "ocooooocbooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( par_state == NULL )
                    {
                        Py_DECREF( tmp_called_name_2 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "state" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 289;
                        type_description_1 = "ocooooocbooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_4 = par_state;
                    frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 289;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4 };
                        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_called_name_2 );
                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "ocooooocbooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                branch_no_7:;
            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( var_slotstate );
                tmp_compexpr_left_5 = var_slotstate;
                tmp_compexpr_right_5 = Py_None;
                tmp_condition_result_8 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_8;
                }
                else
                {
                    goto branch_no_8;
                }
                branch_yes_8:;
                {
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_iter_arg_3;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT( var_slotstate );
                    tmp_called_instance_2 = var_slotstate;
                    frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 291;
                    tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
                    if ( tmp_iter_arg_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 291;
                        type_description_1 = "ocooooocbooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
                    Py_DECREF( tmp_iter_arg_3 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 291;
                        type_description_1 = "ocooooocbooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_for_loop_1__for_iterator == NULL );
                    tmp_for_loop_1__for_iterator = tmp_assign_source_12;
                }
                // Tried code:
                loop_start_1:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_13;
                    CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                    tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
                    if ( tmp_assign_source_13 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_1;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ocooooocbooooo";
                            exception_lineno = 291;
                            goto try_except_handler_5;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_1__iter_value;
                        tmp_for_loop_1__iter_value = tmp_assign_source_13;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_iter_arg_4;
                    CHECK_OBJECT( tmp_for_loop_1__iter_value );
                    tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
                    tmp_assign_source_14 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_4 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 291;
                        type_description_1 = "ocooooocbooooo";
                        goto try_except_handler_6;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__source_iter;
                        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_15;
                    PyObject *tmp_unpack_3;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
                    if ( tmp_assign_source_15 == NULL )
                    {
                        if ( !ERROR_OCCURRED() )
                        {
                            exception_type = PyExc_StopIteration;
                            Py_INCREF( exception_type );
                            exception_value = NULL;
                            exception_tb = NULL;
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        }


                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 291;
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__element_1;
                        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_unpack_4;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
                    if ( tmp_assign_source_16 == NULL )
                    {
                        if ( !ERROR_OCCURRED() )
                        {
                            exception_type = PyExc_StopIteration;
                            Py_INCREF( exception_type );
                            exception_value = NULL;
                            exception_tb = NULL;
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        }


                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 291;
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__element_2;
                        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_2;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

                    if (likely( tmp_iterator_attempt == NULL ))
                    {
                        PyObject *error = GET_ERROR_OCCURRED();

                        if ( error != NULL )
                        {
                            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                            {
                                CLEAR_ERROR_OCCURRED();
                            }
                            else
                            {
                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                                type_description_1 = "ocooooocbooooo";
                                exception_lineno = 291;
                                goto try_except_handler_7;
                            }
                        }
                    }
                    else
                    {
                        Py_DECREF( tmp_iterator_attempt );

                        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 291;
                        goto try_except_handler_7;
                    }
                }
                goto try_end_3;
                // Exception handler code:
                try_except_handler_7:;
                exception_keeper_type_3 = exception_type;
                exception_keeper_value_3 = exception_value;
                exception_keeper_tb_3 = exception_tb;
                exception_keeper_lineno_3 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
                Py_DECREF( tmp_tuple_unpack_2__source_iter );
                tmp_tuple_unpack_2__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto try_except_handler_6;
                // End of try:
                try_end_3:;
                goto try_end_4;
                // Exception handler code:
                try_except_handler_6:;
                exception_keeper_type_4 = exception_type;
                exception_keeper_value_4 = exception_value;
                exception_keeper_tb_4 = exception_tb;
                exception_keeper_lineno_4 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_2__element_1 );
                tmp_tuple_unpack_2__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_2__element_2 );
                tmp_tuple_unpack_2__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_4;
                exception_value = exception_keeper_value_4;
                exception_tb = exception_keeper_tb_4;
                exception_lineno = exception_keeper_lineno_4;

                goto try_except_handler_5;
                // End of try:
                try_end_4:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
                Py_DECREF( tmp_tuple_unpack_2__source_iter );
                tmp_tuple_unpack_2__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_17;
                    CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                    tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
                    {
                        PyObject *old = var_key;
                        var_key = tmp_assign_source_17;
                        Py_INCREF( var_key );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_2__element_1 );
                tmp_tuple_unpack_2__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_18;
                    CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                    tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
                    {
                        PyObject *old = var_value;
                        var_value = tmp_assign_source_18;
                        Py_INCREF( var_value );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_2__element_2 );
                tmp_tuple_unpack_2__element_2 = NULL;

                {
                    PyObject *tmp_setattr_target_1;
                    PyObject *tmp_setattr_attr_1;
                    PyObject *tmp_setattr_value_1;
                    PyObject *tmp_capi_result_1;
                    CHECK_OBJECT( var_y );
                    tmp_setattr_target_1 = var_y;
                    CHECK_OBJECT( var_key );
                    tmp_setattr_attr_1 = var_key;
                    CHECK_OBJECT( var_value );
                    tmp_setattr_value_1 = var_value;
                    tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
                    if ( tmp_capi_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 292;
                        type_description_1 = "ocooooocbooooo";
                        goto try_except_handler_5;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 291;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_5;
                }
                goto loop_start_1;
                loop_end_1:;
                goto try_end_5;
                // Exception handler code:
                try_except_handler_5:;
                exception_keeper_type_5 = exception_type;
                exception_keeper_value_5 = exception_value;
                exception_keeper_tb_5 = exception_tb;
                exception_keeper_lineno_5 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_5;
                exception_value = exception_keeper_value_5;
                exception_tb = exception_keeper_tb_5;
                exception_lineno = exception_keeper_lineno_5;

                goto frame_exception_exit_1;
                // End of try:
                try_end_5:;
                Py_XDECREF( tmp_for_loop_1__iter_value );
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
                Py_DECREF( tmp_for_loop_1__for_iterator );
                tmp_for_loop_1__for_iterator = NULL;

                branch_no_8:;
            }
            branch_end_5:;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_listiter );
        tmp_compexpr_left_6 = par_listiter;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            nuitka_bool tmp_condition_result_10;
            assert( var_deep != NUITKA_BOOL_UNASSIGNED);
            tmp_condition_result_10 = var_deep;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT( par_listiter );
                tmp_iter_arg_5 = par_listiter;
                tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_5 );
                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 296;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_2__for_iterator == NULL );
                tmp_for_loop_2__for_iterator = tmp_assign_source_19;
            }
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT( tmp_for_loop_2__for_iterator );
                tmp_next_source_2 = tmp_for_loop_2__for_iterator;
                tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_20 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 296;
                        goto try_except_handler_8;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_2__iter_value;
                    tmp_for_loop_2__iter_value = tmp_assign_source_20;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                CHECK_OBJECT( tmp_for_loop_2__iter_value );
                tmp_assign_source_21 = tmp_for_loop_2__iter_value;
                {
                    PyObject *old = var_item;
                    var_item = tmp_assign_source_21;
                    Py_INCREF( var_item );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT( PyCell_GET( par_deepcopy ) );
                tmp_called_name_3 = PyCell_GET( par_deepcopy );
                CHECK_OBJECT( var_item );
                tmp_args_element_name_5 = var_item;
                CHECK_OBJECT( PyCell_GET( par_memo ) );
                tmp_args_element_name_6 = PyCell_GET( par_memo );
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 297;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 297;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = var_item;
                    assert( old != NULL );
                    var_item = tmp_assign_source_22;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( var_y );
                tmp_called_instance_3 = var_y;
                CHECK_OBJECT( var_item );
                tmp_args_element_name_7 = var_item;
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 298;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_8;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ocooooocbooooo";
                goto try_except_handler_8;
            }
            goto loop_start_2;
            loop_end_2:;
            goto try_end_6;
            // Exception handler code:
            try_except_handler_8:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_for_loop_2__iter_value );
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
            Py_DECREF( tmp_for_loop_2__for_iterator );
            tmp_for_loop_2__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            try_end_6:;
            Py_XDECREF( tmp_for_loop_2__iter_value );
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
            Py_DECREF( tmp_for_loop_2__for_iterator );
            tmp_for_loop_2__for_iterator = NULL;

            goto branch_end_10;
            branch_no_10:;
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_iter_arg_6;
                CHECK_OBJECT( par_listiter );
                tmp_iter_arg_6 = par_listiter;
                tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_6 );
                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_3__for_iterator == NULL );
                tmp_for_loop_3__for_iterator = tmp_assign_source_23;
            }
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_24;
                CHECK_OBJECT( tmp_for_loop_3__for_iterator );
                tmp_next_source_3 = tmp_for_loop_3__for_iterator;
                tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_24 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 300;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_3__iter_value;
                    tmp_for_loop_3__iter_value = tmp_assign_source_24;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_25;
                CHECK_OBJECT( tmp_for_loop_3__iter_value );
                tmp_assign_source_25 = tmp_for_loop_3__iter_value;
                {
                    PyObject *old = var_item;
                    var_item = tmp_assign_source_25;
                    Py_INCREF( var_item );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT( var_y );
                tmp_called_instance_4 = var_y;
                CHECK_OBJECT( var_item );
                tmp_args_element_name_8 = var_item;
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 301;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 301;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_9;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "ocooooocbooooo";
                goto try_except_handler_9;
            }
            goto loop_start_3;
            loop_end_3:;
            goto try_end_7;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_1;
            // End of try:
            try_end_7:;
            Py_XDECREF( tmp_for_loop_3__iter_value );
            tmp_for_loop_3__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
            Py_DECREF( tmp_for_loop_3__for_iterator );
            tmp_for_loop_3__for_iterator = NULL;

            branch_end_10:;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_dictiter );
        tmp_compexpr_left_7 = par_dictiter;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            nuitka_bool tmp_condition_result_12;
            assert( var_deep != NUITKA_BOOL_UNASSIGNED);
            tmp_condition_result_12 = var_deep;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_iter_arg_7;
                CHECK_OBJECT( par_dictiter );
                tmp_iter_arg_7 = par_dictiter;
                tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_7 );
                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_4__for_iterator == NULL );
                tmp_for_loop_4__for_iterator = tmp_assign_source_26;
            }
            // Tried code:
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_27;
                CHECK_OBJECT( tmp_for_loop_4__for_iterator );
                tmp_next_source_4 = tmp_for_loop_4__for_iterator;
                tmp_assign_source_27 = ITERATOR_NEXT( tmp_next_source_4 );
                if ( tmp_assign_source_27 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_4;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 304;
                        goto try_except_handler_10;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_4__iter_value;
                    tmp_for_loop_4__iter_value = tmp_assign_source_27;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_iter_arg_8;
                CHECK_OBJECT( tmp_for_loop_4__iter_value );
                tmp_iter_arg_8 = tmp_for_loop_4__iter_value;
                tmp_assign_source_28 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_8 );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_tuple_unpack_3__source_iter;
                    tmp_tuple_unpack_3__source_iter = tmp_assign_source_28;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_29;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
                if ( tmp_assign_source_29 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "ocooooocbooooo";
                    exception_lineno = 304;
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = tmp_tuple_unpack_3__element_1;
                    tmp_tuple_unpack_3__element_1 = tmp_assign_source_29;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
                if ( tmp_assign_source_30 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "ocooooocbooooo";
                    exception_lineno = 304;
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = tmp_tuple_unpack_3__element_2;
                    tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

                if (likely( tmp_iterator_attempt == NULL ))
                {
                    PyObject *error = GET_ERROR_OCCURRED();

                    if ( error != NULL )
                    {
                        if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                        {
                            CLEAR_ERROR_OCCURRED();
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                            type_description_1 = "ocooooocbooooo";
                            exception_lineno = 304;
                            goto try_except_handler_12;
                        }
                    }
                }
                else
                {
                    Py_DECREF( tmp_iterator_attempt );

                    // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                    PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ocooooocbooooo";
                    exception_lineno = 304;
                    goto try_except_handler_12;
                }
            }
            goto try_end_8;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_11;
            // End of try:
            try_end_8:;
            goto try_end_9;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_9 = exception_type;
            exception_keeper_value_9 = exception_value;
            exception_keeper_tb_9 = exception_tb;
            exception_keeper_lineno_9 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto try_except_handler_10;
            // End of try:
            try_end_9:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            {
                PyObject *tmp_assign_source_31;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                tmp_assign_source_31 = tmp_tuple_unpack_3__element_1;
                {
                    PyObject *old = var_key;
                    var_key = tmp_assign_source_31;
                    Py_INCREF( var_key );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_32;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                tmp_assign_source_32 = tmp_tuple_unpack_3__element_2;
                {
                    PyObject *old = var_value;
                    var_value = tmp_assign_source_32;
                    Py_INCREF( var_value );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            {
                PyObject *tmp_assign_source_33;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( PyCell_GET( par_deepcopy ) );
                tmp_called_name_4 = PyCell_GET( par_deepcopy );
                CHECK_OBJECT( var_key );
                tmp_args_element_name_9 = var_key;
                CHECK_OBJECT( PyCell_GET( par_memo ) );
                tmp_args_element_name_10 = PyCell_GET( par_memo );
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 305;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = var_key;
                    assert( old != NULL );
                    var_key = tmp_assign_source_33;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                CHECK_OBJECT( PyCell_GET( par_deepcopy ) );
                tmp_called_name_5 = PyCell_GET( par_deepcopy );
                CHECK_OBJECT( var_value );
                tmp_args_element_name_11 = var_value;
                CHECK_OBJECT( PyCell_GET( par_memo ) );
                tmp_args_element_name_12 = PyCell_GET( par_memo );
                frame_b17146f74758d73962f4fe7f81338c89->m_frame.f_lineno = 306;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                if ( tmp_assign_source_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 306;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = var_value;
                    assert( old != NULL );
                    var_value = tmp_assign_source_34;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( var_value );
                tmp_ass_subvalue_2 = var_value;
                CHECK_OBJECT( var_y );
                tmp_ass_subscribed_2 = var_y;
                CHECK_OBJECT( var_key );
                tmp_ass_subscript_2 = var_key;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 307;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_10;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ocooooocbooooo";
                goto try_except_handler_10;
            }
            goto loop_start_4;
            loop_end_4:;
            goto try_end_10;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_10 = exception_type;
            exception_keeper_value_10 = exception_value;
            exception_keeper_tb_10 = exception_tb;
            exception_keeper_lineno_10 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_for_loop_4__iter_value );
            tmp_for_loop_4__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
            Py_DECREF( tmp_for_loop_4__for_iterator );
            tmp_for_loop_4__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_10;
            exception_value = exception_keeper_value_10;
            exception_tb = exception_keeper_tb_10;
            exception_lineno = exception_keeper_lineno_10;

            goto frame_exception_exit_1;
            // End of try:
            try_end_10:;
            Py_XDECREF( tmp_for_loop_4__iter_value );
            tmp_for_loop_4__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
            Py_DECREF( tmp_for_loop_4__for_iterator );
            tmp_for_loop_4__for_iterator = NULL;

            goto branch_end_12;
            branch_no_12:;
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_iter_arg_9;
                CHECK_OBJECT( par_dictiter );
                tmp_iter_arg_9 = par_dictiter;
                tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_9 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "ocooooocbooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_5__for_iterator == NULL );
                tmp_for_loop_5__for_iterator = tmp_assign_source_35;
            }
            // Tried code:
            loop_start_5:;
            {
                PyObject *tmp_next_source_5;
                PyObject *tmp_assign_source_36;
                CHECK_OBJECT( tmp_for_loop_5__for_iterator );
                tmp_next_source_5 = tmp_for_loop_5__for_iterator;
                tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_5 );
                if ( tmp_assign_source_36 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_5;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ocooooocbooooo";
                        exception_lineno = 309;
                        goto try_except_handler_13;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_5__iter_value;
                    tmp_for_loop_5__iter_value = tmp_assign_source_36;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_iter_arg_10;
                CHECK_OBJECT( tmp_for_loop_5__iter_value );
                tmp_iter_arg_10 = tmp_for_loop_5__iter_value;
                tmp_assign_source_37 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_10 );
                if ( tmp_assign_source_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_14;
                }
                {
                    PyObject *old = tmp_tuple_unpack_4__source_iter;
                    tmp_tuple_unpack_4__source_iter = tmp_assign_source_37;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_unpack_7;
                CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
                tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
                if ( tmp_assign_source_38 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "ocooooocbooooo";
                    exception_lineno = 309;
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_tuple_unpack_4__element_1;
                    tmp_tuple_unpack_4__element_1 = tmp_assign_source_38;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_unpack_8;
                CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
                tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
                if ( tmp_assign_source_39 == NULL )
                {
                    if ( !ERROR_OCCURRED() )
                    {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF( exception_type );
                        exception_value = NULL;
                        exception_tb = NULL;
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    }


                    type_description_1 = "ocooooocbooooo";
                    exception_lineno = 309;
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_tuple_unpack_4__element_2;
                    tmp_tuple_unpack_4__element_2 = tmp_assign_source_39;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_4;
                CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

                if (likely( tmp_iterator_attempt == NULL ))
                {
                    PyObject *error = GET_ERROR_OCCURRED();

                    if ( error != NULL )
                    {
                        if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                        {
                            CLEAR_ERROR_OCCURRED();
                        }
                        else
                        {
                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                            type_description_1 = "ocooooocbooooo";
                            exception_lineno = 309;
                            goto try_except_handler_15;
                        }
                    }
                }
                else
                {
                    Py_DECREF( tmp_iterator_attempt );

                    // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                    PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                    PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ocooooocbooooo";
                    exception_lineno = 309;
                    goto try_except_handler_15;
                }
            }
            goto try_end_11;
            // Exception handler code:
            try_except_handler_15:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
            Py_DECREF( tmp_tuple_unpack_4__source_iter );
            tmp_tuple_unpack_4__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_14;
            // End of try:
            try_end_11:;
            goto try_end_12;
            // Exception handler code:
            try_except_handler_14:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_4__element_1 );
            tmp_tuple_unpack_4__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_4__element_2 );
            tmp_tuple_unpack_4__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto try_except_handler_13;
            // End of try:
            try_end_12:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
            Py_DECREF( tmp_tuple_unpack_4__source_iter );
            tmp_tuple_unpack_4__source_iter = NULL;

            {
                PyObject *tmp_assign_source_40;
                CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
                tmp_assign_source_40 = tmp_tuple_unpack_4__element_1;
                {
                    PyObject *old = var_key;
                    var_key = tmp_assign_source_40;
                    Py_INCREF( var_key );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_4__element_1 );
            tmp_tuple_unpack_4__element_1 = NULL;

            {
                PyObject *tmp_assign_source_41;
                CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
                tmp_assign_source_41 = tmp_tuple_unpack_4__element_2;
                {
                    PyObject *old = var_value;
                    var_value = tmp_assign_source_41;
                    Py_INCREF( var_value );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_4__element_2 );
            tmp_tuple_unpack_4__element_2 = NULL;

            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( var_value );
                tmp_ass_subvalue_3 = var_value;
                CHECK_OBJECT( var_y );
                tmp_ass_subscribed_3 = var_y;
                CHECK_OBJECT( var_key );
                tmp_ass_subscript_3 = var_key;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 310;
                    type_description_1 = "ocooooocbooooo";
                    goto try_except_handler_13;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ocooooocbooooo";
                goto try_except_handler_13;
            }
            goto loop_start_5;
            loop_end_5:;
            goto try_end_13;
            // Exception handler code:
            try_except_handler_13:;
            exception_keeper_type_13 = exception_type;
            exception_keeper_value_13 = exception_value;
            exception_keeper_tb_13 = exception_tb;
            exception_keeper_lineno_13 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_for_loop_5__iter_value );
            tmp_for_loop_5__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
            Py_DECREF( tmp_for_loop_5__for_iterator );
            tmp_for_loop_5__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto frame_exception_exit_1;
            // End of try:
            try_end_13:;
            Py_XDECREF( tmp_for_loop_5__iter_value );
            tmp_for_loop_5__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
            Py_DECREF( tmp_for_loop_5__for_iterator );
            tmp_for_loop_5__for_iterator = NULL;

            branch_end_12:;
        }
        branch_no_11:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b17146f74758d73962f4fe7f81338c89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b17146f74758d73962f4fe7f81338c89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b17146f74758d73962f4fe7f81338c89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b17146f74758d73962f4fe7f81338c89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b17146f74758d73962f4fe7f81338c89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b17146f74758d73962f4fe7f81338c89,
        type_description_1,
        par_x,
        par_memo,
        par_func,
        par_args,
        par_state,
        par_listiter,
        par_dictiter,
        par_deepcopy,
        (int)var_deep,
        var_y,
        var_slotstate,
        var_key,
        var_value,
        var_item
    );


    // Release cached frame.
    if ( frame_b17146f74758d73962f4fe7f81338c89 == cache_frame_b17146f74758d73962f4fe7f81338c89 )
    {
        Py_DECREF( frame_b17146f74758d73962f4fe7f81338c89 );
    }
    cache_frame_b17146f74758d73962f4fe7f81338c89 = NULL;

    assertFrameObject( frame_b17146f74758d73962f4fe7f81338c89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_y );
    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy$$$function_10__reconstruct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_listiter );
    Py_DECREF( par_listiter );
    par_listiter = NULL;

    CHECK_OBJECT( (PyObject *)par_dictiter );
    Py_DECREF( par_dictiter );
    par_dictiter = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_slotstate );
    var_slotstate = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_memo );
    Py_DECREF( par_memo );
    par_memo = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_listiter );
    Py_DECREF( par_listiter );
    par_listiter = NULL;

    CHECK_OBJECT( (PyObject *)par_dictiter );
    Py_DECREF( par_dictiter );
    par_dictiter = NULL;

    CHECK_OBJECT( (PyObject *)par_deepcopy );
    Py_DECREF( par_deepcopy );
    par_deepcopy = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_slotstate );
    var_slotstate = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( copy$$$function_10__reconstruct );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct copy$$$function_10__reconstruct$$$genexpr_1_genexpr_locals {
    PyObject *var_arg;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *copy$$$function_10__reconstruct$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct copy$$$function_10__reconstruct$$$genexpr_1_genexpr_locals *generator_heap = (struct copy$$$function_10__reconstruct$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_e9bdbe15efa3fc4963521866d19dbac4, module_copy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[1] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[1] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Nocc";
                generator_heap->exception_lineno = 273;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "deepcopy" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_args_element_name_1 = generator_heap->var_arg;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "memo" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = PyCell_GET( generator->m_closure[2] );
        generator->m_frame->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 273;
        generator_heap->type_description_1 = "Nocc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_arg,
            generator->m_closure[0],
            generator->m_closure[2]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *copy$$$function_10__reconstruct$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        copy$$$function_10__reconstruct$$$genexpr_1_genexpr_context,
        module_copy,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_e6efe62fb03bba549671af2c3ac03d70,
#endif
        codeobj_e9bdbe15efa3fc4963521866d19dbac4,
        3,
        sizeof(struct copy$$$function_10__reconstruct$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_copy$$$function_10__reconstruct( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_10__reconstruct,
        const_str_plain__reconstruct,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b17146f74758d73962f4fe7f81338c89,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_1_copy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_1_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6f2fd479b505f662b0528c01fc7ca297,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        const_str_digest_f4af71476ab6e56aa2cea4d0d9a78222,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_2__copy_immutable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_2__copy_immutable,
        const_str_plain__copy_immutable,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e144b5ee06981a1ead68c63895c13c84,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_3_deepcopy( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_3_deepcopy,
        const_str_plain_deepcopy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_44771d51c7d1de3289beda4f91a494fa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        const_str_digest_87573aa416d11e9638e272a8c2da64a2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_4__deepcopy_atomic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_4__deepcopy_atomic,
        const_str_plain__deepcopy_atomic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e99af4bebc60b21ac4f89c56f94559b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_5__deepcopy_list( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_5__deepcopy_list,
        const_str_plain__deepcopy_list,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8fa6022c9eaf3e13d7c40d871163c048,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_6__deepcopy_tuple( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_6__deepcopy_tuple,
        const_str_plain__deepcopy_tuple,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_13b174c1793d195f9b4d976a9a8cd493,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_7__deepcopy_dict( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_7__deepcopy_dict,
        const_str_plain__deepcopy_dict,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_256e93c062b8d169a4e7ba422d100fa6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_8__deepcopy_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_8__deepcopy_method,
        const_str_plain__deepcopy_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d7dc4e6b718de5e945328d6bab0cb55,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_copy$$$function_9__keep_alive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_copy$$$function_9__keep_alive,
        const_str_plain__keep_alive,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_36a7ce799cbfb28d4bc7286b638082ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_copy,
        const_str_digest_98ccc6d20cd88d3e03ae146a783f5f85,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_copy =
{
    PyModuleDef_HEAD_INIT,
    "copy",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( copy )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_copy );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("copy: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("copy: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("copy: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcopy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_copy = Py_InitModule4(
        "copy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_copy = PyModule_Create( &mdef_copy );
#endif

    moduledict_copy = MODULE_DICT( module_copy );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_copy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_copy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_copy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_copy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_copy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_copy, module_copy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_122eb0132a42fc1b46ef4def087eeee6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_copy_55 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_cf5959783b7b7eaa40bec4513c1242d1;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_122eb0132a42fc1b46ef4def087eeee6 = MAKE_MODULE_FRAME( codeobj_122eb0132a42fc1b46ef4def087eeee6, module_copy );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_122eb0132a42fc1b46ef4def087eeee6 );
    assert( Py_REFCNT( frame_122eb0132a42fc1b46ef4def087eeee6 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_types;
        tmp_globals_name_1 = (PyObject *)moduledict_copy;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = 51;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_weakref;
        tmp_globals_name_2 = (PyObject *)moduledict_copy;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = 52;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_weakref, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_copyreg;
        tmp_globals_name_3 = (PyObject *)moduledict_copy;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_dispatch_table_tuple;
        tmp_level_name_3 = const_int_0;
        frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = 53;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_dispatch_table );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_dispatch_table, tmp_assign_source_6 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_Error;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = 55;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 55;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 55;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_11;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_copy_55 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_copy;
        tmp_res = PyObject_SetItem( locals_copy_55, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Error;
        tmp_res = PyObject_SetItem( locals_copy_55, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_3;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_3;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_copy_55, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_Error;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_copy_55;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = 55;
            tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_12 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( copy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_copy_55 );
        locals_copy_55 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_copy_55 );
        locals_copy_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( copy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( copy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 55;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_12 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_Error );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_14 = tmp_mvar_value_3;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_14 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_2dc33fccbeac347e9e2092734625b4f6;
        tmp_globals_name_4 = (PyObject *)moduledict_copy;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_PyStringMap_tuple;
        tmp_level_name_4 = const_int_0;
        frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = 60;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PyStringMap );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap, tmp_assign_source_15 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_122eb0132a42fc1b46ef4def087eeee6, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_122eb0132a42fc1b46ef4def087eeee6, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = Py_None;
            UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap, tmp_assign_source_16 );
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 59;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_122eb0132a42fc1b46ef4def087eeee6->m_frame) frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_5;
        branch_end_5:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = LIST_COPY( const_list_str_plain_Error_str_plain_copy_str_plain_deepcopy_list );
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_copy$$$function_1_copy(  );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_20 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain__copy_dispatch, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_21 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d, tmp_assign_source_21 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_copy$$$function_2__copy_immutable(  );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__copy_immutable, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        tmp_tuple_element_4 = (PyObject *)Py_TYPE( Py_None );
        tmp_iter_arg_1 = PyTuple_New( 17 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyFloat_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 3, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyComplex_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 4, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 5, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyTuple_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 6, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyBytes_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 7, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyFrozenSet_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 8, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 9, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyRange_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 10, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PySlice_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 11, tmp_tuple_element_4 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_BuiltinFunctionType );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 12, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)&PyEllipsis_Type;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 13, tmp_tuple_element_4 );
        tmp_tuple_element_4 = (PyObject *)Py_TYPE( Py_NotImplemented );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 14, tmp_tuple_element_4 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_FunctionType );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 15, tmp_tuple_element_4 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_weakref );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_weakref );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "weakref" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ref );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 16, tmp_tuple_element_4 );
        tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_24 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                exception_lineno = 113;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_25 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain_t, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__copy_immutable );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copy_immutable );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copy_immutable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;

            goto try_except_handler_6;
        }

        tmp_ass_subvalue_1 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;

            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_t );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_t );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_ass_subscript_1 = tmp_mvar_value_9;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;

            goto try_except_handler_6;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_getattr_target_2 = tmp_mvar_value_10;
        tmp_getattr_attr_2 = const_str_plain_CodeType;
        tmp_getattr_default_2 = Py_None;
        tmp_assign_source_26 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_t, tmp_assign_source_26 );
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_t );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_t );
        }

        CHECK_OBJECT( tmp_mvar_value_11 );
        tmp_compexpr_left_3 = tmp_mvar_value_11;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__copy_immutable );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copy_immutable );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copy_immutable" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;

                goto frame_exception_exit_1;
            }

            tmp_ass_subvalue_2 = tmp_mvar_value_12;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_2 = tmp_mvar_value_13;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_t );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_t );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "t" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 120;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscript_2 = tmp_mvar_value_14;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto frame_exception_exit_1;
            }
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_ass_subscript_3;
        tmp_source_name_8 = (PyObject *)&PyList_Type;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_copy );
        assert( !(tmp_ass_subvalue_3 == NULL) );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = tmp_mvar_value_15;
        tmp_ass_subscript_3 = (PyObject *)&PyList_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_ass_subscript_4;
        tmp_source_name_9 = (PyObject *)&PyDict_Type;
        tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_copy );
        assert( !(tmp_ass_subvalue_4 == NULL) );
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = tmp_mvar_value_16;
        tmp_ass_subscript_4 = (PyObject *)&PyDict_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_ass_subscript_5;
        tmp_source_name_10 = (PyObject *)&PySet_Type;
        tmp_ass_subvalue_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_copy );
        assert( !(tmp_ass_subvalue_5 == NULL) );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = tmp_mvar_value_17;
        tmp_ass_subscript_5 = (PyObject *)&PySet_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_ass_subscript_6;
        tmp_source_name_11 = (PyObject *)&PyByteArray_Type;
        tmp_ass_subvalue_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_copy );
        assert( !(tmp_ass_subvalue_6 == NULL) );
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = tmp_mvar_value_18;
        tmp_ass_subscript_6 = (PyObject *)&PyByteArray_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyStringMap );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyStringMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = tmp_mvar_value_19;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_9 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_ass_subscript_7;
            PyObject *tmp_mvar_value_22;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyStringMap );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyStringMap" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;

                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_20;
            tmp_ass_subvalue_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_copy );
            if ( tmp_ass_subvalue_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
            }

            if ( tmp_mvar_value_21 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_7 = tmp_mvar_value_21;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyStringMap );
            }

            if ( tmp_mvar_value_22 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyStringMap" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscript_7 = tmp_mvar_value_22;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
            Py_DECREF( tmp_ass_subvalue_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto frame_exception_exit_1;
            }
        }
        branch_no_7:;
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_copy, const_str_plain_d );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_copy, const_str_plain_t );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = Py_None;
        tmp_defaults_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_5 );
        tmp_tuple_element_5 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_5 );
        tmp_assign_source_27 = MAKE_FUNCTION_copy$$$function_3_deepcopy( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain_deepcopy, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_New();
        assert( tmp_assign_unpack_2__assign_source == NULL );
        tmp_assign_unpack_2__assign_source = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
        tmp_assign_source_29 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_dispatch, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
        tmp_assign_source_30 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d, tmp_assign_source_30 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_copy$$$function_4__deepcopy_atomic(  );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_ass_subscript_8;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        CHECK_OBJECT( tmp_mvar_value_23 );
        tmp_ass_subvalue_8 = tmp_mvar_value_23;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = tmp_mvar_value_24;
        tmp_ass_subscript_8 = (PyObject *)Py_TYPE( Py_None );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_ass_subscript_9;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_9 = tmp_mvar_value_25;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = tmp_mvar_value_26;
        tmp_ass_subscript_9 = (PyObject *)&PyEllipsis_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_ass_subscript_10;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_10 = tmp_mvar_value_27;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_10 = tmp_mvar_value_28;
        tmp_ass_subscript_10 = (PyObject *)Py_TYPE( Py_NotImplemented );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_ass_subscript_11;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_11 = tmp_mvar_value_29;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_11 = tmp_mvar_value_30;
        tmp_ass_subscript_11 = (PyObject *)&PyLong_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_ass_subscript_12;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_12 = tmp_mvar_value_31;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_12 = tmp_mvar_value_32;
        tmp_ass_subscript_12 = (PyObject *)&PyFloat_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_ass_subscript_13;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_13 = tmp_mvar_value_33;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_13 = tmp_mvar_value_34;
        tmp_ass_subscript_13 = (PyObject *)&PyBool_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_ass_subscript_14;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_14 = tmp_mvar_value_35;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_14 = tmp_mvar_value_36;
        tmp_ass_subscript_14 = (PyObject *)&PyComplex_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_ass_subscript_15;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_15 = tmp_mvar_value_37;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_15 = tmp_mvar_value_38;
        tmp_ass_subscript_15 = (PyObject *)&PyBytes_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_ass_subscript_16;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_16 = tmp_mvar_value_39;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_16 = tmp_mvar_value_40;
        tmp_ass_subscript_16 = (PyObject *)&PyUnicode_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_ass_subscript_17;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_43;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;

            goto try_except_handler_7;
        }

        tmp_ass_subvalue_17 = tmp_mvar_value_41;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;

            goto try_except_handler_7;
        }

        tmp_ass_subscribed_17 = tmp_mvar_value_42;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;

            goto try_except_handler_7;
        }

        tmp_source_name_13 = tmp_mvar_value_43;
        tmp_ass_subscript_17 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_CodeType );
        if ( tmp_ass_subscript_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;

            goto try_except_handler_7;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17 );
        Py_DECREF( tmp_ass_subscript_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;

            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_122eb0132a42fc1b46ef4def087eeee6, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_122eb0132a42fc1b46ef4def087eeee6, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto try_except_handler_8;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 201;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_122eb0132a42fc1b46ef4def087eeee6->m_frame) frame_122eb0132a42fc1b46ef4def087eeee6->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_8;
        branch_no_8:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( copy );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_mvar_value_44;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_ass_subscript_18;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_44 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_18 = tmp_mvar_value_44;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_18 = tmp_mvar_value_45;
        tmp_ass_subscript_18 = (PyObject *)&PyType_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_ass_subscript_19;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_48;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_19 = tmp_mvar_value_46;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_19 = tmp_mvar_value_47;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_48;
        tmp_ass_subscript_19 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_BuiltinFunctionType );
        if ( tmp_ass_subscript_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19 );
        Py_DECREF( tmp_ass_subscript_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_mvar_value_49;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_mvar_value_50;
        PyObject *tmp_ass_subscript_20;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_51;
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_49 == NULL ))
        {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_49 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_20 = tmp_mvar_value_49;
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_50 == NULL ))
        {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_20 = tmp_mvar_value_50;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_51 == NULL ))
        {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_51 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_51;
        tmp_ass_subscript_20 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_FunctionType );
        if ( tmp_ass_subscript_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20 );
        Py_DECREF( tmp_ass_subscript_20 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_mvar_value_53;
        PyObject *tmp_ass_subscript_21;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_54;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_atomic );
        }

        if ( tmp_mvar_value_52 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_atomic" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_21 = tmp_mvar_value_52;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_53 == NULL ))
        {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_21 = tmp_mvar_value_53;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_weakref );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_weakref );
        }

        if ( tmp_mvar_value_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "weakref" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_54;
        tmp_ass_subscript_21 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ref );
        if ( tmp_ass_subscript_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21 );
        Py_DECREF( tmp_ass_subscript_21 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_deepcopy );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deepcopy );
        }

        if ( tmp_mvar_value_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deepcopy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = tmp_mvar_value_55;
        tmp_defaults_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_6 );
        tmp_assign_source_32 = MAKE_FUNCTION_copy$$$function_5__deepcopy_list( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_list, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_mvar_value_57;
        PyObject *tmp_ass_subscript_22;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_list );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_list );
        }

        CHECK_OBJECT( tmp_mvar_value_56 );
        tmp_ass_subvalue_22 = tmp_mvar_value_56;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_57 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_22 = tmp_mvar_value_57;
        tmp_ass_subscript_22 = (PyObject *)&PyList_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_mvar_value_58;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_deepcopy );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deepcopy );
        }

        if ( tmp_mvar_value_58 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deepcopy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_7 = tmp_mvar_value_58;
        tmp_defaults_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_7 );
        tmp_assign_source_33 = MAKE_FUNCTION_copy$$$function_6__deepcopy_tuple( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_tuple, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_ass_subscript_23;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_tuple );

        if (unlikely( tmp_mvar_value_59 == NULL ))
        {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_tuple );
        }

        CHECK_OBJECT( tmp_mvar_value_59 );
        tmp_ass_subvalue_23 = tmp_mvar_value_59;
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_60 == NULL ))
        {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_60 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_23 = tmp_mvar_value_60;
        tmp_ass_subscript_23 = (PyObject *)&PyTuple_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_61;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_deepcopy );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deepcopy );
        }

        if ( tmp_mvar_value_61 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deepcopy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = tmp_mvar_value_61;
        tmp_defaults_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_8 );
        tmp_assign_source_34 = MAKE_FUNCTION_copy$$$function_7__deepcopy_dict( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_dict, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_ass_subscript_24;
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_dict );

        if (unlikely( tmp_mvar_value_62 == NULL ))
        {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_dict );
        }

        CHECK_OBJECT( tmp_mvar_value_62 );
        tmp_ass_subvalue_24 = tmp_mvar_value_62;
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_63 == NULL ))
        {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_63 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_24 = tmp_mvar_value_63;
        tmp_ass_subscript_24 = (PyObject *)&PyDict_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_mvar_value_64;
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap );

        if (unlikely( tmp_mvar_value_64 == NULL ))
        {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyStringMap );
        }

        if ( tmp_mvar_value_64 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyStringMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_6 = tmp_mvar_value_64;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_ass_subvalue_25;
            PyObject *tmp_mvar_value_65;
            PyObject *tmp_ass_subscribed_25;
            PyObject *tmp_mvar_value_66;
            PyObject *tmp_ass_subscript_25;
            PyObject *tmp_mvar_value_67;
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_dict );

            if (unlikely( tmp_mvar_value_65 == NULL ))
            {
                tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_dict );
            }

            if ( tmp_mvar_value_65 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deepcopy_dict" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 244;

                goto frame_exception_exit_1;
            }

            tmp_ass_subvalue_25 = tmp_mvar_value_65;
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

            if (unlikely( tmp_mvar_value_66 == NULL ))
            {
                tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
            }

            if ( tmp_mvar_value_66 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 244;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_25 = tmp_mvar_value_66;
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_PyStringMap );

            if (unlikely( tmp_mvar_value_67 == NULL ))
            {
                tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyStringMap );
            }

            if ( tmp_mvar_value_67 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyStringMap" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 244;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscript_25 = tmp_mvar_value_67;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;

                goto frame_exception_exit_1;
            }
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_copy$$$function_8__deepcopy_method(  );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_method, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_mvar_value_69;
        PyObject *tmp_ass_subscript_26;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_70;
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain__deepcopy_method );

        if (unlikely( tmp_mvar_value_68 == NULL ))
        {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deepcopy_method );
        }

        CHECK_OBJECT( tmp_mvar_value_68 );
        tmp_ass_subvalue_26 = tmp_mvar_value_68;
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_d );

        if (unlikely( tmp_mvar_value_69 == NULL ))
        {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
        }

        if ( tmp_mvar_value_69 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_26 = tmp_mvar_value_69;
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_70 == NULL ))
        {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_70 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_70;
        tmp_ass_subscript_26 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_MethodType );
        if ( tmp_ass_subscript_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26 );
        Py_DECREF( tmp_ass_subscript_26 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_copy, const_str_plain_d );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_copy$$$function_9__keep_alive(  );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__keep_alive, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_71;
        tmp_tuple_element_9 = Py_None;
        tmp_defaults_5 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_9 );
        tmp_tuple_element_9 = Py_None;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_5, 1, tmp_tuple_element_9 );
        tmp_tuple_element_9 = Py_None;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_5, 2, tmp_tuple_element_9 );
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain_deepcopy );

        if (unlikely( tmp_mvar_value_71 == NULL ))
        {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deepcopy );
        }

        if ( tmp_mvar_value_71 == NULL )
        {
            Py_DECREF( tmp_defaults_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deepcopy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_9 = tmp_mvar_value_71;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_5, 3, tmp_tuple_element_9 );
        tmp_assign_source_37 = MAKE_FUNCTION_copy$$$function_10__reconstruct( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_copy, (Nuitka_StringObject *)const_str_plain__reconstruct, tmp_assign_source_37 );
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_copy, const_str_plain_types );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_copy, const_str_plain_weakref );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "weakref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_copy, const_str_plain_PyStringMap );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyStringMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_122eb0132a42fc1b46ef4def087eeee6 );
#endif
    popFrameStack();

    assertFrameObject( frame_122eb0132a42fc1b46ef4def087eeee6 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_122eb0132a42fc1b46ef4def087eeee6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_122eb0132a42fc1b46ef4def087eeee6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_122eb0132a42fc1b46ef4def087eeee6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_122eb0132a42fc1b46ef4def087eeee6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_copy, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_copy );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
