/* Generated code for Python module 'py_compile'
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

/* The "_module_py_compile" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_py_compile;
PyDictObject *moduledict_py_compile;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_main;
static PyObject *const_tuple_none_none_false_int_neg_1_none_tuple;
static PyObject *const_str_plain__get_default_invalidation_mode;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_traceback;
extern PyObject *const_slice_int_pos_1_none_none;
static PyObject *const_str_plain_source_to_code;
extern PyObject *const_str_plain__bootstrap_external;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_readline;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_digest_aed02aab7465cf50b55884286d8beb4b;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_err;
static PyObject *const_str_plain_exc_type_name;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_rv;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_SOURCE_DATE_EPOCH;
static PyObject *const_str_digest_45ed717ea3c95173d58528c7573755d1;
extern PyObject *const_str_plain_mtime;
extern PyObject *const_str_plain_isfile;
static PyObject *const_str_digest_8cb7a41f069d5cc45de238dc552c45e4;
extern PyObject *const_str_plain_makedirs;
extern PyObject *const_str_plain_format_exception_only;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_argv;
extern PyObject *const_str_plain_islink;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_doraise;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_machinery;
static PyObject *const_str_digest_60d450a1704529140c84455bb3c2d112;
extern PyObject *const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e;
extern PyObject *const_str_plain__optimize;
extern PyObject *const_str_plain_optimization;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple;
extern PyObject *const_str_plain_importlib;
static PyObject *const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple;
static PyObject *const_str_plain_PycInvalidationMode;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_SourceFileLoader;
static PyObject *const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_7449d48b63f7c86390cccd8c4cf54078;
static PyObject *const_str_plain_bytecode;
static PyObject *const_str_plain_TIMESTAMP;
static PyObject *const_str_plain__write_atomic;
extern PyObject *const_str_plain_exc_type;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_tbtext;
static PyObject *const_str_digest_d78e898aeb5ed4d2b5d8eb3143e26bf2;
extern PyObject *const_str_plain_stderr;
static PyObject *const_str_plain_py_exc;
extern PyObject *const_str_plain_cache_from_source;
extern PyObject *const_str_plain_py_compile;
static PyObject *const_str_digest_57852a0fbf08bca224a26655e307966d;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain__code_to_hash_pyc;
static PyObject *const_str_digest_1632e8bb3d738168065c094d402d2d56;
extern PyObject *const_str_plain_PyCompileError;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_205f6e0f9ac492d979340eab89ea494b;
static PyObject *const_str_angle_py_compile;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_f64da3ef5d393df10f9413882d6197e9;
extern PyObject *const_str_plain_source_bytes;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_ee2540e683ff1c4ae897dd2501c1303b;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_errmsg;
static PyObject *const_str_digest_6b262ba76d8de88a951161b473f658b4;
static PyObject *const_str_plain_cfile;
static PyObject *const_str_plain__calc_mode;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_get_data;
static PyObject *const_str_plain_CHECKED_HASH;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_Enum;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_14de09ac0350ed9155c8923487723392;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_filename;
static PyObject *const_dict_3ea41d4ed88595238512367427ba6a14;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_exc_value;
extern PyObject *const_str_newline;
static PyObject *const_str_plain_path_stats;
static PyObject *const_str_digest_19eb883963f45196bcfe788a28e46aa9;
extern PyObject *const_list_str_chr_45_list;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain__code_to_timestamp_pyc;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_enum;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_rstrip;
static PyObject *const_str_plain_invalidation_mode;
extern PyObject *const_str_plain_stdin;
extern PyObject *const_str_plain_write;
static PyObject *const_tuple_str_plain_SOURCE_DATE_EPOCH_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_dfile;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_7689658029228a5299f2694b7c6d5849;
static PyObject *const_str_plain_source_stats;
static PyObject *const_str_plain_UNCHECKED_HASH;
extern PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
extern PyObject *const_str_plain_file;
static PyObject *const_list_e2d34c81711ec87f5a7e97808a2dda38_list;
extern PyObject *const_str_plain_source_hash;
extern PyObject *const_str_plain_loader;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_none_none_false_int_neg_1_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_int_neg_1_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_int_neg_1_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_int_neg_1_none_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_int_neg_1_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_plain__get_default_invalidation_mode = UNSTREAM_STRING_ASCII( &constant_bin[ 519797 ], 30, 1 );
    const_str_plain_source_to_code = UNSTREAM_STRING_ASCII( &constant_bin[ 519827 ], 14, 1 );
    const_str_plain_exc_type_name = UNSTREAM_STRING_ASCII( &constant_bin[ 519841 ], 13, 1 );
    const_str_plain_SOURCE_DATE_EPOCH = UNSTREAM_STRING_ASCII( &constant_bin[ 519854 ], 17, 1 );
    const_str_digest_45ed717ea3c95173d58528c7573755d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 519871 ], 15, 0 );
    const_str_digest_8cb7a41f069d5cc45de238dc552c45e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 519886 ], 107, 0 );
    const_str_digest_60d450a1704529140c84455bb3c2d112 = UNSTREAM_STRING_ASCII( &constant_bin[ 519993 ], 13, 0 );
    const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple, 1, const_str_plain_rv ); Py_INCREF( const_str_plain_rv );
    PyTuple_SET_ITEM( const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple, 3, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 0, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    const_str_plain_cfile = UNSTREAM_STRING_ASCII( &constant_bin[ 398764 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 1, const_str_plain_cfile ); Py_INCREF( const_str_plain_cfile );
    const_str_plain_dfile = UNSTREAM_STRING_ASCII( &constant_bin[ 520006 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 2, const_str_plain_dfile ); Py_INCREF( const_str_plain_dfile );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 3, const_str_plain_doraise ); Py_INCREF( const_str_plain_doraise );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 4, const_str_plain_optimize ); Py_INCREF( const_str_plain_optimize );
    const_str_plain_invalidation_mode = UNSTREAM_STRING_ASCII( &constant_bin[ 519810 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 5, const_str_plain_invalidation_mode ); Py_INCREF( const_str_plain_invalidation_mode );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 6, const_str_plain_optimization ); Py_INCREF( const_str_plain_optimization );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 7, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 8, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 9, const_str_plain_source_bytes ); Py_INCREF( const_str_plain_source_bytes );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 10, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 11, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_plain_py_exc = UNSTREAM_STRING_ASCII( &constant_bin[ 520011 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 12, const_str_plain_py_exc ); Py_INCREF( const_str_plain_py_exc );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 13, const_str_plain_dirname ); Py_INCREF( const_str_plain_dirname );
    const_str_plain_source_stats = UNSTREAM_STRING_ASCII( &constant_bin[ 520017 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 14, const_str_plain_source_stats ); Py_INCREF( const_str_plain_source_stats );
    const_str_plain_bytecode = UNSTREAM_STRING_ASCII( &constant_bin[ 520029 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 15, const_str_plain_bytecode ); Py_INCREF( const_str_plain_bytecode );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 16, const_str_plain_source_hash ); Py_INCREF( const_str_plain_source_hash );
    PyTuple_SET_ITEM( const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 17, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_plain_PycInvalidationMode = UNSTREAM_STRING_ASCII( &constant_bin[ 520037 ], 19, 1 );
    const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 1, const_str_plain_exc_type ); Py_INCREF( const_str_plain_exc_type );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 2, const_str_plain_exc_value ); Py_INCREF( const_str_plain_exc_value );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 3, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 4, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 5, const_str_plain_exc_type_name ); Py_INCREF( const_str_plain_exc_type_name );
    const_str_plain_tbtext = UNSTREAM_STRING_ASCII( &constant_bin[ 520056 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 6, const_str_plain_tbtext ); Py_INCREF( const_str_plain_tbtext );
    const_str_plain_errmsg = UNSTREAM_STRING_ASCII( &constant_bin[ 520062 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 7, const_str_plain_errmsg ); Py_INCREF( const_str_plain_errmsg );
    const_str_digest_7449d48b63f7c86390cccd8c4cf54078 = UNSTREAM_STRING_ASCII( &constant_bin[ 520068 ], 943, 0 );
    const_str_plain_TIMESTAMP = UNSTREAM_STRING_ASCII( &constant_bin[ 521011 ], 9, 1 );
    const_str_plain__write_atomic = UNSTREAM_STRING_ASCII( &constant_bin[ 521020 ], 13, 1 );
    const_str_digest_d78e898aeb5ed4d2b5d8eb3143e26bf2 = UNSTREAM_STRING_ASCII( &constant_bin[ 521033 ], 416, 0 );
    const_str_digest_57852a0fbf08bca224a26655e307966d = UNSTREAM_STRING_ASCII( &constant_bin[ 521449 ], 2119, 0 );
    const_str_plain__code_to_hash_pyc = UNSTREAM_STRING_ASCII( &constant_bin[ 523568 ], 17, 1 );
    const_str_digest_1632e8bb3d738168065c094d402d2d56 = UNSTREAM_STRING_ASCII( &constant_bin[ 523585 ], 113, 0 );
    const_str_angle_py_compile = UNSTREAM_STRING_ASCII( &constant_bin[ 523698 ], 12, 0 );
    const_str_digest_f64da3ef5d393df10f9413882d6197e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 523710 ], 22, 0 );
    const_str_digest_ee2540e683ff1c4ae897dd2501c1303b = UNSTREAM_STRING_ASCII( &constant_bin[ 523732 ], 19, 0 );
    const_str_digest_6b262ba76d8de88a951161b473f658b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 161701 ], 9, 0 );
    const_str_plain__calc_mode = UNSTREAM_STRING_ASCII( &constant_bin[ 523751 ], 10, 1 );
    const_str_plain_CHECKED_HASH = UNSTREAM_STRING_ASCII( &constant_bin[ 523761 ], 12, 1 );
    const_str_digest_14de09ac0350ed9155c8923487723392 = UNSTREAM_STRING_ASCII( &constant_bin[ 523773 ], 23, 0 );
    const_dict_3ea41d4ed88595238512367427ba6a14 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_3ea41d4ed88595238512367427ba6a14, const_str_plain_doraise, Py_True );
    assert( PyDict_Size( const_dict_3ea41d4ed88595238512367427ba6a14 ) == 1 );
    const_str_plain_path_stats = UNSTREAM_STRING_ASCII( &constant_bin[ 523796 ], 10, 1 );
    const_str_digest_19eb883963f45196bcfe788a28e46aa9 = UNSTREAM_STRING_ASCII( &constant_bin[ 523806 ], 13, 0 );
    const_str_plain__code_to_timestamp_pyc = UNSTREAM_STRING_ASCII( &constant_bin[ 523819 ], 22, 1 );
    const_tuple_str_plain_SOURCE_DATE_EPOCH_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SOURCE_DATE_EPOCH_tuple, 0, const_str_plain_SOURCE_DATE_EPOCH ); Py_INCREF( const_str_plain_SOURCE_DATE_EPOCH );
    const_str_digest_7689658029228a5299f2694b7c6d5849 = UNSTREAM_STRING_ASCII( &constant_bin[ 523841 ], 99, 0 );
    const_str_plain_UNCHECKED_HASH = UNSTREAM_STRING_ASCII( &constant_bin[ 523940 ], 14, 1 );
    const_list_e2d34c81711ec87f5a7e97808a2dda38_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_e2d34c81711ec87f5a7e97808a2dda38_list, 0, const_str_plain_compile ); Py_INCREF( const_str_plain_compile );
    PyList_SET_ITEM( const_list_e2d34c81711ec87f5a7e97808a2dda38_list, 1, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyList_SET_ITEM( const_list_e2d34c81711ec87f5a7e97808a2dda38_list, 2, const_str_plain_PyCompileError ); Py_INCREF( const_str_plain_PyCompileError );
    PyList_SET_ITEM( const_list_e2d34c81711ec87f5a7e97808a2dda38_list, 3, const_str_plain_PycInvalidationMode ); Py_INCREF( const_str_plain_PycInvalidationMode );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_py_compile( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b9d159d89d192876695ec229ce7761ec;
static PyCodeObject *codeobj_d7f06dbf47bd78496348cc84ed048b07;
static PyCodeObject *codeobj_5bcaa2ca885900baecb9f333a4a19ab9;
static PyCodeObject *codeobj_ae7b91c5877fd635650e0756b7ae559d;
static PyCodeObject *codeobj_9786cb1facf6a157c3cce0f60df725ef;
static PyCodeObject *codeobj_d20f23958cd84c5d5657e4811b00f765;
static PyCodeObject *codeobj_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1;
static PyCodeObject *codeobj_e9ba32493ad764adce4401108557c1e4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_19eb883963f45196bcfe788a28e46aa9 );
    codeobj_b9d159d89d192876695ec229ce7761ec = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ee2540e683ff1c4ae897dd2501c1303b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d7f06dbf47bd78496348cc84ed048b07 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyCompileError, 18, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5bcaa2ca885900baecb9f333a4a19ab9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PycInvalidationMode, 66, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ae7b91c5877fd635650e0756b7ae559d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 46, const_tuple_c2804ad5459cc9a71da01819baa20a7e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9786cb1facf6a157c3cce0f60df725ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 62, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d20f23958cd84c5d5657e4811b00f765 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_default_invalidation_mode, 72, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compile, 79, const_tuple_6074e3260eb007c0a84398d9efa7f67a_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9ba32493ad764adce4401108557c1e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_main, 173, const_tuple_ceaf03dcd5c6b22c197f57898fb4a879_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_py_compile$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_py_compile$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_py_compile$$$function_3__get_default_invalidation_mode(  );


static PyObject *MAKE_FUNCTION_py_compile$$$function_4_compile( PyObject *defaults );


static PyObject *MAKE_FUNCTION_py_compile$$$function_5_main( PyObject *defaults );


// The module function definitions.
static PyObject *impl_py_compile$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_type = python_pars[ 1 ];
    PyObject *par_exc_value = python_pars[ 2 ];
    PyObject *par_file = python_pars[ 3 ];
    PyObject *par_msg = python_pars[ 4 ];
    PyObject *var_exc_type_name = NULL;
    PyObject *var_tbtext = NULL;
    PyObject *var_errmsg = NULL;
    struct Nuitka_FrameObject *frame_ae7b91c5877fd635650e0756b7ae559d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ae7b91c5877fd635650e0756b7ae559d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae7b91c5877fd635650e0756b7ae559d, codeobj_ae7b91c5877fd635650e0756b7ae559d, module_py_compile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ae7b91c5877fd635650e0756b7ae559d = cache_frame_ae7b91c5877fd635650e0756b7ae559d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae7b91c5877fd635650e0756b7ae559d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae7b91c5877fd635650e0756b7ae559d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_exc_type );
        tmp_source_name_1 = par_exc_type;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_exc_type_name == NULL );
        var_exc_type_name = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_exc_type );
        tmp_compexpr_left_1 = par_exc_type;
        tmp_compexpr_right_1 = PyExc_SyntaxError;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_source_name_2 = const_str_empty;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
            assert( !(tmp_called_name_1 == NULL) );
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_traceback );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_traceback );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "traceback" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 49;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_exc_type );
            tmp_args_element_name_2 = par_exc_type;
            CHECK_OBJECT( par_exc_value );
            tmp_args_element_name_3 = par_exc_value;
            frame_ae7b91c5877fd635650e0756b7ae559d->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_format_exception_only, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 49;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ae7b91c5877fd635650e0756b7ae559d->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tbtext == NULL );
            var_tbtext = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_tbtext );
            tmp_source_name_3 = var_tbtext;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_replace );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_str_digest_45ed717ea3c95173d58528c7573755d1;
            tmp_left_name_1 = const_str_digest_6b262ba76d8de88a951161b473f658b4;
            CHECK_OBJECT( par_file );
            tmp_right_name_1 = par_file;
            tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 51;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ae7b91c5877fd635650e0756b7ae559d->m_frame.f_lineno = 51;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_errmsg == NULL );
            var_errmsg = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_2 = const_str_digest_60d450a1704529140c84455bb3c2d112;
            CHECK_OBJECT( var_exc_type_name );
            tmp_tuple_element_1 = var_exc_type_name;
            tmp_right_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_exc_value );
            tmp_tuple_element_1 = par_exc_value;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
            tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_errmsg == NULL );
            var_errmsg = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_source_name_4 = PyExc_Exception;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___init__ );
        assert( !(tmp_called_name_3 == NULL) );
        CHECK_OBJECT( par_self );
        tmp_args_element_name_6 = par_self;
        CHECK_OBJECT( par_msg );
        tmp_or_left_value_1 = par_msg;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( var_errmsg );
        tmp_or_right_value_1 = var_errmsg;
        tmp_args_element_name_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_7 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT( var_exc_type_name );
        tmp_args_element_name_8 = var_exc_type_name;
        CHECK_OBJECT( par_exc_value );
        tmp_args_element_name_9 = par_exc_value;
        CHECK_OBJECT( par_file );
        tmp_args_element_name_10 = par_file;
        frame_ae7b91c5877fd635650e0756b7ae559d->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_exc_type_name );
        tmp_assattr_name_1 = var_exc_type_name;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_exc_type_name, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_exc_value );
        tmp_assattr_name_2 = par_exc_value;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_exc_value, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_file );
        tmp_assattr_name_3 = par_file;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_file, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_msg );
        tmp_or_left_value_2 = par_msg;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( var_errmsg );
        tmp_or_right_value_2 = var_errmsg;
        tmp_assattr_name_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assattr_name_4 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_msg, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae7b91c5877fd635650e0756b7ae559d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae7b91c5877fd635650e0756b7ae559d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae7b91c5877fd635650e0756b7ae559d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae7b91c5877fd635650e0756b7ae559d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae7b91c5877fd635650e0756b7ae559d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae7b91c5877fd635650e0756b7ae559d,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_file,
        par_msg,
        var_exc_type_name,
        var_tbtext,
        var_errmsg
    );


    // Release cached frame.
    if ( frame_ae7b91c5877fd635650e0756b7ae559d == cache_frame_ae7b91c5877fd635650e0756b7ae559d )
    {
        Py_DECREF( frame_ae7b91c5877fd635650e0756b7ae559d );
    }
    cache_frame_ae7b91c5877fd635650e0756b7ae559d = NULL;

    assertFrameObject( frame_ae7b91c5877fd635650e0756b7ae559d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_type );
    Py_DECREF( par_exc_type );
    par_exc_type = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_value );
    Py_DECREF( par_exc_value );
    par_exc_value = NULL;

    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_exc_type_name );
    Py_DECREF( var_exc_type_name );
    var_exc_type_name = NULL;

    Py_XDECREF( var_tbtext );
    var_tbtext = NULL;

    CHECK_OBJECT( (PyObject *)var_errmsg );
    Py_DECREF( var_errmsg );
    var_errmsg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_type );
    Py_DECREF( par_exc_type );
    par_exc_type = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_value );
    Py_DECREF( par_exc_value );
    par_exc_value = NULL;

    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_exc_type_name );
    var_exc_type_name = NULL;

    Py_XDECREF( var_tbtext );
    var_tbtext = NULL;

    Py_XDECREF( var_errmsg );
    var_errmsg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_1___init__ );
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


static PyObject *impl_py_compile$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9786cb1facf6a157c3cce0f60df725ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9786cb1facf6a157c3cce0f60df725ef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9786cb1facf6a157c3cce0f60df725ef, codeobj_9786cb1facf6a157c3cce0f60df725ef, module_py_compile, sizeof(void *) );
    frame_9786cb1facf6a157c3cce0f60df725ef = cache_frame_9786cb1facf6a157c3cce0f60df725ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9786cb1facf6a157c3cce0f60df725ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9786cb1facf6a157c3cce0f60df725ef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_msg );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9786cb1facf6a157c3cce0f60df725ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9786cb1facf6a157c3cce0f60df725ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9786cb1facf6a157c3cce0f60df725ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9786cb1facf6a157c3cce0f60df725ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9786cb1facf6a157c3cce0f60df725ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9786cb1facf6a157c3cce0f60df725ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9786cb1facf6a157c3cce0f60df725ef,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9786cb1facf6a157c3cce0f60df725ef == cache_frame_9786cb1facf6a157c3cce0f60df725ef )
    {
        Py_DECREF( frame_9786cb1facf6a157c3cce0f60df725ef );
    }
    cache_frame_9786cb1facf6a157c3cce0f60df725ef = NULL;

    assertFrameObject( frame_9786cb1facf6a157c3cce0f60df725ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_2___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_2___str__ );
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


static PyObject *impl_py_compile$$$function_3__get_default_invalidation_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d20f23958cd84c5d5657e4811b00f765;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d20f23958cd84c5d5657e4811b00f765 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_d20f23958cd84c5d5657e4811b00f765, codeobj_d20f23958cd84c5d5657e4811b00f765, module_py_compile, 0 );
    frame_d20f23958cd84c5d5657e4811b00f765 = cache_frame_d20f23958cd84c5d5657e4811b00f765;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d20f23958cd84c5d5657e4811b00f765 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d20f23958cd84c5d5657e4811b00f765 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_d20f23958cd84c5d5657e4811b00f765->m_frame.f_lineno = 73;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_SOURCE_DATE_EPOCH_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PycInvalidationMode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 74;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CHECKED_HASH );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;

                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PycInvalidationMode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 76;

                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_TIMESTAMP );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d20f23958cd84c5d5657e4811b00f765 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d20f23958cd84c5d5657e4811b00f765 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d20f23958cd84c5d5657e4811b00f765 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d20f23958cd84c5d5657e4811b00f765, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d20f23958cd84c5d5657e4811b00f765->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d20f23958cd84c5d5657e4811b00f765, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d20f23958cd84c5d5657e4811b00f765,
        type_description_1
    );


    // Release cached frame.
    if ( frame_d20f23958cd84c5d5657e4811b00f765 == cache_frame_d20f23958cd84c5d5657e4811b00f765 )
    {
        Py_DECREF( frame_d20f23958cd84c5d5657e4811b00f765 );
    }
    cache_frame_d20f23958cd84c5d5657e4811b00f765 = NULL;

    assertFrameObject( frame_d20f23958cd84c5d5657e4811b00f765 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_3__get_default_invalidation_mode );
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


static PyObject *impl_py_compile$$$function_4_compile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file = python_pars[ 0 ];
    PyObject *par_cfile = python_pars[ 1 ];
    PyObject *par_dfile = python_pars[ 2 ];
    PyObject *par_doraise = python_pars[ 3 ];
    PyObject *par_optimize = python_pars[ 4 ];
    PyObject *par_invalidation_mode = python_pars[ 5 ];
    PyObject *var_optimization = NULL;
    PyObject *var_loader = NULL;
    PyObject *var_source_bytes = NULL;
    PyObject *var_code = NULL;
    PyObject *var_err = NULL;
    PyObject *var_py_exc = NULL;
    PyObject *var_dirname = NULL;
    PyObject *var_source_stats = NULL;
    PyObject *var_bytecode = NULL;
    PyObject *var_source_hash = NULL;
    PyObject *var_mode = NULL;
    struct Nuitka_FrameObject *frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, codeobj_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, module_py_compile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 = cache_frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_invalidation_mode );
        tmp_compexpr_left_1 = par_invalidation_mode;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain__get_default_invalidation_mode );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_default_invalidation_mode );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_default_invalidation_mode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 123;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 123;
            tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_invalidation_mode;
                assert( old != NULL );
                par_invalidation_mode = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_cfile );
        tmp_compexpr_left_2 = par_cfile;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_optimize );
            tmp_compexpr_left_3 = par_optimize;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_2;
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_optimize );
                tmp_compexpr_left_4 = par_optimize;
                tmp_compexpr_right_4 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_1;
                }
                else
                {
                    goto condexpr_false_1;
                }
                condexpr_true_1:;
                CHECK_OBJECT( par_optimize );
                tmp_assign_source_2 = par_optimize;
                goto condexpr_end_1;
                condexpr_false_1:;
                tmp_assign_source_2 = const_str_empty;
                condexpr_end_1:;
                assert( var_optimization == NULL );
                Py_INCREF( tmp_assign_source_2 );
                var_optimization = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 127;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_2;
                tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_util );
                if ( tmp_source_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cache_from_source );
                Py_DECREF( tmp_source_name_1 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_file );
                tmp_tuple_element_1 = par_file;
                tmp_args_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_dict_key_1 = const_str_plain_optimization;
                CHECK_OBJECT( var_optimization );
                tmp_dict_value_1 = var_optimization;
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 127;
                tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_cfile;
                    assert( old != NULL );
                    par_cfile = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 130;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_3;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_util );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 130;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_file );
                tmp_args_element_name_1 = par_file;
                frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 130;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_cache_from_source, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 130;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_cfile;
                    assert( old != NULL );
                    par_cfile = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            branch_end_3:;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_islink );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_cfile == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_cfile;
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 131;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_3;
            tmp_source_name_6 = const_str_digest_7689658029228a5299f2694b7c6d5849;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_format );
            assert( !(tmp_called_name_4 == NULL) );
            if ( par_cfile == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 134;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = par_cfile;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_FileExistsError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 134;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            int tmp_truth_name_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_5;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_exists );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_cfile == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = par_cfile;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 135;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_6;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_isfile );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_cfile == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = par_cfile;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 135;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_6 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_6;
                tmp_source_name_11 = const_str_digest_8cb7a41f069d5cc45de238dc552c45e4;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_format );
                assert( !(tmp_called_name_7 == NULL) );
                if ( par_cfile == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 138;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_6 = par_cfile;
                frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 138;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 138;
                    type_description_1 = "oooooooNoooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 138;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_FileExistsError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 138;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_7;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_machinery );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = const_str_angle_py_compile;
        CHECK_OBJECT( par_file );
        tmp_args_element_name_8 = par_file;
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_SourceFileLoader, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_loader == NULL );
        var_loader = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_loader );
        tmp_called_instance_3 = var_loader;
        CHECK_OBJECT( par_file );
        tmp_args_element_name_9 = par_file;
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get_data, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_source_bytes == NULL );
        var_source_bytes = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_13;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( var_loader );
        tmp_source_name_13 = var_loader;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_source_to_code );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_source_bytes );
        tmp_tuple_element_2 = var_source_bytes;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_dfile );
        tmp_or_left_value_1 = par_dfile;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 142;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_file );
        tmp_or_right_value_1 = par_file;
        tmp_tuple_element_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_tuple_element_2 = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain__optimize;
        CHECK_OBJECT( par_optimize );
        tmp_dict_value_2 = par_optimize;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 142;
        tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_2;
        }
        assert( var_code == NULL );
        var_code = tmp_assign_source_7;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
            assert( var_err == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_err = tmp_assign_source_8;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PyCompileError );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCompileError );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCompileError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 145;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_9 = tmp_mvar_value_8;
            CHECK_OBJECT( var_err );
            tmp_source_name_14 = var_err;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_14 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_err );
            tmp_args_element_name_11 = var_err;
            CHECK_OBJECT( par_dfile );
            tmp_or_left_value_2 = par_dfile;
            tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
            if ( tmp_or_left_truth_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 145;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_4;
            }
            if ( tmp_or_left_truth_2 == 1 )
            {
                goto or_left_2;
            }
            else
            {
                goto or_right_2;
            }
            or_right_2:;
            CHECK_OBJECT( par_file );
            tmp_or_right_value_2 = par_file;
            tmp_args_element_name_12 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_args_element_name_12 = tmp_or_left_value_2;
            or_end_2:;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_4;
            }
            assert( var_py_exc == NULL );
            var_py_exc = tmp_assign_source_9;
        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_doraise );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_doraise );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_3;
                CHECK_OBJECT( var_py_exc );
                tmp_raise_type_3 = var_py_exc;
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_lineno = 147;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_4;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_15;
                PyObject *tmp_source_name_16;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_left_name_1;
                PyObject *tmp_source_name_17;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 149;
                    type_description_1 = "oooooooNoooooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_16 = tmp_mvar_value_9;
                tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_stderr );
                if ( tmp_source_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 149;
                    type_description_1 = "oooooooNoooooooooo";
                    goto try_except_handler_4;
                }
                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_write );
                Py_DECREF( tmp_source_name_15 );
                if ( tmp_called_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 149;
                    type_description_1 = "oooooooNoooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_py_exc );
                tmp_source_name_17 = var_py_exc;
                tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_msg );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 149;
                    type_description_1 = "oooooooNoooooooooo";
                    goto try_except_handler_4;
                }
                tmp_right_name_1 = const_str_newline;
                tmp_args_element_name_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_args_element_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 149;
                    type_description_1 = "oooooooNoooooooooo";
                    goto try_except_handler_4;
                }
                frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 149;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                }

                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 149;
                    type_description_1 = "oooooooNoooooooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_4;
            branch_end_7:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile$$$function_4_compile );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( var_err );
        var_err = NULL;

        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( var_err );
        var_err = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 141;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame) frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooNoooooooooo";
        goto try_except_handler_3;
        branch_end_6:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_4_compile );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_source_name_19 = tmp_mvar_value_10;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_path );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_dirname );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_5;
        }
        if ( par_cfile == NULL )
        {
            Py_DECREF( tmp_called_name_11 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_name_14 = par_cfile;
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_5;
        }
        assert( var_dirname == NULL );
        var_dirname = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_dirname );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_dirname );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 154;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_instance_4 = tmp_mvar_value_11;
            CHECK_OBJECT( var_dirname );
            tmp_args_element_name_15 = var_dirname;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_makedirs, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooooNoooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_8:;
    }
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_FileExistsError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 151;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame) frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooNoooooooooo";
        goto try_except_handler_6;
        branch_no_9:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_4_compile );
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_12;
        CHECK_OBJECT( par_invalidation_mode );
        tmp_compexpr_left_7 = par_invalidation_mode;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PycInvalidationMode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 157;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_12;
        tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_TIMESTAMP );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_16;
            CHECK_OBJECT( var_loader );
            tmp_called_instance_5 = var_loader;
            CHECK_OBJECT( par_file );
            tmp_args_element_name_16 = par_file;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_path_stats, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_source_stats == NULL );
            var_source_stats = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_21;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 159;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_13;
            tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__bootstrap_external );
            if ( tmp_source_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__code_to_timestamp_pyc );
            Py_DECREF( tmp_source_name_21 );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_code );
            tmp_args_element_name_17 = var_code;
            CHECK_OBJECT( var_source_stats );
            tmp_subscribed_name_1 = var_source_stats;
            tmp_subscript_name_1 = const_str_plain_mtime;
            tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 160;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_source_stats );
            tmp_subscribed_name_2 = var_source_stats;
            tmp_subscript_name_2 = const_str_plain_size;
            tmp_args_element_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_element_name_18 );

                exception_lineno = 160;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_18 );
            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_bytecode == NULL );
            var_bytecode = tmp_assign_source_12;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_source_name_23;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_20;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 162;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_23 = tmp_mvar_value_14;
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_util );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_source_bytes );
            tmp_args_element_name_20 = var_source_bytes;
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_source_hash, call_args );
            }

            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_source_hash == NULL );
            var_source_hash = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_24;
            PyObject *tmp_source_name_25;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_source_name_26;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 163;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_25 = tmp_mvar_value_15;
            tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__bootstrap_external );
            if ( tmp_source_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__code_to_hash_pyc );
            Py_DECREF( tmp_source_name_24 );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_code );
            tmp_args_element_name_21 = var_code;
            CHECK_OBJECT( var_source_hash );
            tmp_args_element_name_22 = var_source_hash;
            CHECK_OBJECT( par_invalidation_mode );
            tmp_compexpr_left_8 = par_invalidation_mode;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_called_name_13 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PycInvalidationMode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 166;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_26 = tmp_mvar_value_16;
            tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_CHECKED_HASH );
            if ( tmp_compexpr_right_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 166;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_23 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_args_element_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 166;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_23 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooNoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_bytecode == NULL );
            var_bytecode = tmp_assign_source_14;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_17;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__bootstrap_external );
        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_file );
        tmp_args_element_name_24 = par_file;
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain__calc_mode, call_args );
        }

        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mode == NULL );
        var_mode = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_18;
        tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__bootstrap_external );
        if ( tmp_source_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__write_atomic );
        Py_DECREF( tmp_source_name_28 );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_cfile == NULL )
        {
            Py_DECREF( tmp_called_name_14 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_25 = par_cfile;
        CHECK_OBJECT( var_bytecode );
        tmp_args_element_name_26 = var_bytecode;
        CHECK_OBJECT( var_mode );
        tmp_args_element_name_27 = var_mode;
        frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    if ( par_cfile == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cfile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooNoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_cfile;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1,
        type_description_1,
        par_file,
        par_cfile,
        par_dfile,
        par_doraise,
        par_optimize,
        par_invalidation_mode,
        var_optimization,
        NULL,
        var_loader,
        var_source_bytes,
        var_code,
        var_err,
        var_py_exc,
        var_dirname,
        var_source_stats,
        var_bytecode,
        var_source_hash,
        var_mode
    );


    // Release cached frame.
    if ( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 == cache_frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 )
    {
        Py_DECREF( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 );
    }
    cache_frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 = NULL;

    assertFrameObject( frame_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_4_compile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    Py_XDECREF( par_cfile );
    par_cfile = NULL;

    CHECK_OBJECT( (PyObject *)par_dfile );
    Py_DECREF( par_dfile );
    par_dfile = NULL;

    CHECK_OBJECT( (PyObject *)par_doraise );
    Py_DECREF( par_doraise );
    par_doraise = NULL;

    CHECK_OBJECT( (PyObject *)par_optimize );
    Py_DECREF( par_optimize );
    par_optimize = NULL;

    CHECK_OBJECT( (PyObject *)par_invalidation_mode );
    Py_DECREF( par_invalidation_mode );
    par_invalidation_mode = NULL;

    Py_XDECREF( var_optimization );
    var_optimization = NULL;

    CHECK_OBJECT( (PyObject *)var_loader );
    Py_DECREF( var_loader );
    var_loader = NULL;

    CHECK_OBJECT( (PyObject *)var_source_bytes );
    Py_DECREF( var_source_bytes );
    var_source_bytes = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_py_exc );
    var_py_exc = NULL;

    Py_XDECREF( var_dirname );
    var_dirname = NULL;

    Py_XDECREF( var_source_stats );
    var_source_stats = NULL;

    Py_XDECREF( var_bytecode );
    var_bytecode = NULL;

    Py_XDECREF( var_source_hash );
    var_source_hash = NULL;

    Py_XDECREF( var_mode );
    var_mode = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    Py_XDECREF( par_cfile );
    par_cfile = NULL;

    CHECK_OBJECT( (PyObject *)par_dfile );
    Py_DECREF( par_dfile );
    par_dfile = NULL;

    CHECK_OBJECT( (PyObject *)par_doraise );
    Py_DECREF( par_doraise );
    par_doraise = NULL;

    CHECK_OBJECT( (PyObject *)par_optimize );
    Py_DECREF( par_optimize );
    par_optimize = NULL;

    Py_XDECREF( par_invalidation_mode );
    par_invalidation_mode = NULL;

    Py_XDECREF( var_optimization );
    var_optimization = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    Py_XDECREF( var_source_bytes );
    var_source_bytes = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_py_exc );
    var_py_exc = NULL;

    Py_XDECREF( var_dirname );
    var_dirname = NULL;

    Py_XDECREF( var_source_stats );
    var_source_stats = NULL;

    Py_XDECREF( var_bytecode );
    var_bytecode = NULL;

    Py_XDECREF( var_source_hash );
    var_source_hash = NULL;

    Py_XDECREF( var_mode );
    var_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_4_compile );
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


static PyObject *impl_py_compile$$$function_5_main( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_rv = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_error = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e9ba32493ad764adce4401108557c1e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9ba32493ad764adce4401108557c1e4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9ba32493ad764adce4401108557c1e4, codeobj_e9ba32493ad764adce4401108557c1e4, module_py_compile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e9ba32493ad764adce4401108557c1e4 = cache_frame_e9ba32493ad764adce4401108557c1e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9ba32493ad764adce4401108557c1e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9ba32493ad764adce4401108557c1e4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_args );
        tmp_compexpr_left_1 = par_args;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_argv );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_rv == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_rv = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_args );
        tmp_compexpr_left_2 = par_args;
        tmp_compexpr_right_2 = LIST_COPY( const_list_str_chr_45_list );
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
        loop_start_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 189;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stdin );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 189;
            tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readline );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_filename;
                var_filename = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( var_filename );
            tmp_operand_name_1 = var_filename;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            goto loop_end_1;
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_filename );
            tmp_called_instance_2 = var_filename;
            frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 192;
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_rstrip, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 192;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_filename;
                assert( old != NULL );
                var_filename = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_compile );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compile );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 194;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( var_filename );
            tmp_tuple_element_1 = var_filename;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_3ea41d4ed88595238512367427ba6a14 );
            frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 194;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "oooo";
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e9ba32493ad764adce4401108557c1e4, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e9ba32493ad764adce4401108557c1e4, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_4;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PyCompileError );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCompileError );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCompileError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 195;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_4;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "oooo";
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
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
                {
                    PyObject *old = var_error;
                    var_error = tmp_assign_source_5;
                    Py_INCREF( var_error );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = const_int_pos_1;
                {
                    PyObject *old = var_rv;
                    var_rv = tmp_assign_source_6;
                    Py_INCREF( var_rv );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_4 = tmp_mvar_value_5;
                tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stderr );
                if ( tmp_source_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
                Py_DECREF( tmp_source_name_3 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_1 = const_str_digest_aed02aab7465cf50b55884286d8beb4b;
                CHECK_OBJECT( var_error );
                tmp_source_name_5 = var_error;
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_msg );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 197;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( var_error );
            var_error = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            try_end_2:;
            Py_XDECREF( var_error );
            var_error = NULL;

            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_4 = PyExc_OSError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 198;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
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
                    PyObject *tmp_assign_source_7;
                    tmp_assign_source_7 = EXC_VALUE(PyThreadState_GET());
                    {
                        PyObject *old = var_error;
                        var_error = tmp_assign_source_7;
                        Py_INCREF( var_error );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_8;
                    tmp_assign_source_8 = const_int_pos_1;
                    {
                        PyObject *old = var_rv;
                        var_rv = tmp_assign_source_8;
                        Py_INCREF( var_rv );
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_source_name_6;
                    PyObject *tmp_source_name_7;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_call_result_3;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 200;
                        type_description_1 = "oooo";
                        goto try_except_handler_5;
                    }

                    tmp_source_name_7 = tmp_mvar_value_6;
                    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stderr );
                    if ( tmp_source_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 200;
                        type_description_1 = "oooo";
                        goto try_except_handler_5;
                    }
                    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_write );
                    Py_DECREF( tmp_source_name_6 );
                    if ( tmp_called_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 200;
                        type_description_1 = "oooo";
                        goto try_except_handler_5;
                    }
                    tmp_left_name_2 = const_str_digest_aed02aab7465cf50b55884286d8beb4b;
                    CHECK_OBJECT( var_error );
                    tmp_right_name_2 = var_error;
                    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );

                        exception_lineno = 200;
                        type_description_1 = "oooo";
                        goto try_except_handler_5;
                    }
                    frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 200;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 200;
                        type_description_1 = "oooo";
                        goto try_except_handler_5;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                goto try_end_3;
                // Exception handler code:
                try_except_handler_5:;
                exception_keeper_type_3 = exception_type;
                exception_keeper_value_3 = exception_value;
                exception_keeper_tb_3 = exception_tb;
                exception_keeper_lineno_3 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( var_error );
                var_error = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto try_except_handler_3;
                // End of try:
                try_end_3:;
                Py_XDECREF( var_error );
                var_error = NULL;

                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 193;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_e9ba32493ad764adce4401108557c1e4->m_frame) frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto try_except_handler_3;
                branch_end_5:;
            }
            branch_end_4:;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_3:;
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
        try_end_4:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile$$$function_5_main );
        return NULL;
        // End of try:
        try_end_1:;
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_1;
        loop_end_1:;
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_args );
            tmp_iter_arg_1 = par_args;
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_9;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooo";
                    exception_lineno = 202;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_11 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_filename;
                var_filename = tmp_assign_source_11;
                Py_INCREF( var_filename );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_compile );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compile );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_1 = "oooo";
                goto try_except_handler_7;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( var_filename );
            tmp_tuple_element_2 = var_filename;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_3ea41d4ed88595238512367427ba6a14 );
            frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 204;
            tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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

        if ( exception_keeper_tb_5 == NULL )
        {
            exception_keeper_tb_5 = MAKE_TRACEBACK( frame_e9ba32493ad764adce4401108557c1e4, exception_keeper_lineno_5 );
        }
        else if ( exception_keeper_lineno_5 != 0 )
        {
            exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_e9ba32493ad764adce4401108557c1e4, exception_keeper_lineno_5 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
        PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_mvar_value_8;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PyCompileError );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCompileError );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCompileError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }

            tmp_compexpr_right_5 = tmp_mvar_value_8;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
                {
                    PyObject *old = var_error;
                    var_error = tmp_assign_source_12;
                    Py_INCREF( var_error );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = const_int_pos_1;
                {
                    PyObject *old = var_rv;
                    var_rv = tmp_assign_source_13;
                    Py_INCREF( var_rv );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_8;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_source_name_10;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 208;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }

                tmp_source_name_9 = tmp_mvar_value_9;
                tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_stderr );
                if ( tmp_source_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_write );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }
                tmp_left_name_3 = const_str_digest_aed02aab7465cf50b55884286d8beb4b;
                CHECK_OBJECT( var_error );
                tmp_source_name_10 = var_error;
                tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_msg );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 208;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }
                tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 208;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }
                frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            goto try_end_6;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( var_error );
            var_error = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto try_except_handler_8;
            // End of try:
            try_end_6:;
            Py_XDECREF( var_error );
            var_error = NULL;

            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 203;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_e9ba32493ad764adce4401108557c1e4->m_frame) frame_e9ba32493ad764adce4401108557c1e4->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_8;
            branch_end_6:;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_6;
        // End of try:
        try_end_7:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_5;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile$$$function_5_main );
        return NULL;
        // End of try:
        try_end_5:;
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_6:;
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

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_end_2:;
    }
    if ( var_rv == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_rv;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ba32493ad764adce4401108557c1e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ba32493ad764adce4401108557c1e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9ba32493ad764adce4401108557c1e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9ba32493ad764adce4401108557c1e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9ba32493ad764adce4401108557c1e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9ba32493ad764adce4401108557c1e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9ba32493ad764adce4401108557c1e4,
        type_description_1,
        par_args,
        var_rv,
        var_filename,
        var_error
    );


    // Release cached frame.
    if ( frame_e9ba32493ad764adce4401108557c1e4 == cache_frame_e9ba32493ad764adce4401108557c1e4 )
    {
        Py_DECREF( frame_e9ba32493ad764adce4401108557c1e4 );
    }
    cache_frame_e9ba32493ad764adce4401108557c1e4 = NULL;

    assertFrameObject( frame_e9ba32493ad764adce4401108557c1e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_5_main );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_rv );
    var_rv = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_rv );
    var_rv = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py_compile$$$function_5_main );
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



static PyObject *MAKE_FUNCTION_py_compile$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py_compile$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_14de09ac0350ed9155c8923487723392,
#endif
        codeobj_ae7b91c5877fd635650e0756b7ae559d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py_compile,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py_compile$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py_compile$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_f64da3ef5d393df10f9413882d6197e9,
#endif
        codeobj_9786cb1facf6a157c3cce0f60df725ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py_compile,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py_compile$$$function_3__get_default_invalidation_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py_compile$$$function_3__get_default_invalidation_mode,
        const_str_plain__get_default_invalidation_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d20f23958cd84c5d5657e4811b00f765,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py_compile,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py_compile$$$function_4_compile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py_compile$$$function_4_compile,
        const_str_plain_compile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cd6fc0c88a74dfbdfcdd3e8fcc15b2e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py_compile,
        const_str_digest_57852a0fbf08bca224a26655e307966d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py_compile$$$function_5_main( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py_compile$$$function_5_main,
        const_str_plain_main,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9ba32493ad764adce4401108557c1e4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py_compile,
        const_str_digest_d78e898aeb5ed4d2b5d8eb3143e26bf2,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_py_compile =
{
    PyModuleDef_HEAD_INIT,
    "py_compile",
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

MOD_INIT_DECL( py_compile )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_py_compile );
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
    puts("py_compile: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("py_compile: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("py_compile: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpy_compile" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_py_compile = Py_InitModule4(
        "py_compile",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_py_compile = PyModule_Create( &mdef_py_compile );
#endif

    moduledict_py_compile = MODULE_DICT( module_py_compile );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_py_compile,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_py_compile,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_py_compile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_py_compile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_py_compile );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_py_compile, module_py_compile );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_b9d159d89d192876695ec229ce7761ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_py_compile_18 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d7f06dbf47bd78496348cc84ed048b07_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7f06dbf47bd78496348cc84ed048b07_2 = NULL;
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
    PyObject *locals_py_compile_66 = NULL;
    struct Nuitka_FrameObject *frame_5bcaa2ca885900baecb9f333a4a19ab9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5bcaa2ca885900baecb9f333a4a19ab9_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1632e8bb3d738168065c094d402d2d56;
        UPDATE_STRING_DICT0( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b9d159d89d192876695ec229ce7761ec = MAKE_MODULE_FRAME( codeobj_b9d159d89d192876695ec229ce7761ec, module_py_compile );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b9d159d89d192876695ec229ce7761ec );
    assert( Py_REFCNT( frame_b9d159d89d192876695ec229ce7761ec ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_enum;
        tmp_globals_name_1 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_enum, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_205f6e0f9ac492d979340eab89ea494b;
        tmp_globals_name_2 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
        tmp_globals_name_3 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 8;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e;
        tmp_globals_name_4 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 9;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_os;
        tmp_globals_name_5 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 10;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_e399ba4554180f37de594a6743234f17;
        tmp_globals_name_6 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 11;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_sys;
        tmp_globals_name_7 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 12;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        assert( !(tmp_assign_source_10 == NULL) );
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_traceback;
        tmp_globals_name_8 = (PyObject *)moduledict_py_compile;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = Py_None;
        tmp_level_name_8 = const_int_0;
        frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 13;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_traceback, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_e2d34c81711ec87f5a7e97808a2dda38_list );
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

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
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
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


            exception_lineno = 18;

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


            exception_lineno = 18;

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
            PyObject *tmp_assign_source_16;
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


                exception_lineno = 18;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_PyCompileError;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 18;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
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


                exception_lineno = 18;

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


                    exception_lineno = 18;

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

                    exception_lineno = 18;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 18;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 18;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_py_compile_18 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_py_compile;
        tmp_res = PyObject_SetItem( locals_py_compile_18, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_7449d48b63f7c86390cccd8c4cf54078;
        tmp_res = PyObject_SetItem( locals_py_compile_18, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_PyCompileError;
        tmp_res = PyObject_SetItem( locals_py_compile_18, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d7f06dbf47bd78496348cc84ed048b07_2, codeobj_d7f06dbf47bd78496348cc84ed048b07, module_py_compile, sizeof(void *) );
        frame_d7f06dbf47bd78496348cc84ed048b07_2 = cache_frame_d7f06dbf47bd78496348cc84ed048b07_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d7f06dbf47bd78496348cc84ed048b07_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d7f06dbf47bd78496348cc84ed048b07_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_str_empty_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_py_compile$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_py_compile_18, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_py_compile$$$function_2___str__(  );



        tmp_res = PyObject_SetItem( locals_py_compile_18, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d7f06dbf47bd78496348cc84ed048b07_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d7f06dbf47bd78496348cc84ed048b07_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d7f06dbf47bd78496348cc84ed048b07_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d7f06dbf47bd78496348cc84ed048b07_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d7f06dbf47bd78496348cc84ed048b07_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d7f06dbf47bd78496348cc84ed048b07_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_d7f06dbf47bd78496348cc84ed048b07_2 == cache_frame_d7f06dbf47bd78496348cc84ed048b07_2 )
        {
            Py_DECREF( frame_d7f06dbf47bd78496348cc84ed048b07_2 );
        }
        cache_frame_d7f06dbf47bd78496348cc84ed048b07_2 = NULL;

        assertFrameObject( frame_d7f06dbf47bd78496348cc84ed048b07_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
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


                exception_lineno = 18;

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
            tmp_res = PyObject_SetItem( locals_py_compile_18, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_PyCompileError;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_py_compile_18;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 18;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_py_compile_18 );
        locals_py_compile_18 = NULL;
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

        Py_DECREF( locals_py_compile_18 );
        locals_py_compile_18 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile );
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
        NUITKA_CANNOT_GET_HERE( py_compile );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 18;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PyCompileError, tmp_assign_source_18 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_enum );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enum );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "enum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;

            goto try_except_handler_4;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Enum );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_assign_source_20 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_21 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_6 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_7 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_4;
            }
            tmp_tuple_element_5 = const_str_plain_PycInvalidationMode;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 66;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_8 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_4;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_6 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;

                    goto try_except_handler_4;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_9 == NULL) );
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 66;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_6 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 66;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_25;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_py_compile_66 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_py_compile;
        tmp_res = PyObject_SetItem( locals_py_compile_66, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_PycInvalidationMode;
        tmp_res = PyObject_SetItem( locals_py_compile_66, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_5bcaa2ca885900baecb9f333a4a19ab9_3, codeobj_5bcaa2ca885900baecb9f333a4a19ab9, module_py_compile, sizeof(void *) );
        frame_5bcaa2ca885900baecb9f333a4a19ab9_3 = cache_frame_5bcaa2ca885900baecb9f333a4a19ab9_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_1;
        tmp_res = PyObject_SetItem( locals_py_compile_66, const_str_plain_TIMESTAMP, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_int_pos_2;
        tmp_res = PyObject_SetItem( locals_py_compile_66, const_str_plain_CHECKED_HASH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_int_pos_3;
        tmp_res = PyObject_SetItem( locals_py_compile_66, const_str_plain_UNCHECKED_HASH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_5bcaa2ca885900baecb9f333a4a19ab9_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_5bcaa2ca885900baecb9f333a4a19ab9_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_5bcaa2ca885900baecb9f333a4a19ab9_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5bcaa2ca885900baecb9f333a4a19ab9_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 == cache_frame_5bcaa2ca885900baecb9f333a4a19ab9_3 )
        {
            Py_DECREF( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 );
        }
        cache_frame_5bcaa2ca885900baecb9f333a4a19ab9_3 = NULL;

        assertFrameObject( frame_5bcaa2ca885900baecb9f333a4a19ab9_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_6;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_py_compile_66, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = const_str_plain_PycInvalidationMode;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
            tmp_tuple_element_7 = locals_py_compile_66;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_b9d159d89d192876695ec229ce7761ec->m_frame.f_lineno = 66;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_26 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_py_compile_66 );
        locals_py_compile_66 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF( locals_py_compile_66 );
        locals_py_compile_66 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py_compile );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( py_compile );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 66;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_PycInvalidationMode, tmp_assign_source_26 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9d159d89d192876695ec229ce7761ec );
#endif
    popFrameStack();

    assertFrameObject( frame_b9d159d89d192876695ec229ce7761ec );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9d159d89d192876695ec229ce7761ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9d159d89d192876695ec229ce7761ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9d159d89d192876695ec229ce7761ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9d159d89d192876695ec229ce7761ec, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases_orig );
    Py_DECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_py_compile$$$function_3__get_default_invalidation_mode(  );



        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain__get_default_invalidation_mode, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_false_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_29 = MAKE_FUNCTION_py_compile$$$function_4_compile( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_compile, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_30 = MAKE_FUNCTION_py_compile$$$function_5_main( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_30 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_py_compile, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_py_compile );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
