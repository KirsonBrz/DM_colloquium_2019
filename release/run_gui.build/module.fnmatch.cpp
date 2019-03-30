/* Generated code for Python module 'fnmatch'
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

/* The "_module_fnmatch" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fnmatch;
PyDictObject *moduledict_fnmatch;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_res_str;
static PyObject *const_str_digest_11ccc4b6c74d80d91b261f7c536bccd1;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3;
extern PyObject *const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9;
static PyObject *const_tuple_str_chr_45_str_digest_416be3a493e8bc7210df93e3c1419247_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_lru_cache;
extern PyObject *const_str_plain_bytes;
static PyObject *const_str_digest_af3a3d0b1eb00c7b3b9310b2ef5e4f9b;
static PyObject *const_str_plain_pat_str;
extern PyObject *const_str_plain_normcase;
static PyObject *const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_d0bf9d6a3d6eda6aaca1ebcc6bf74f20;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_filter;
extern PyObject *const_tuple_str_chr_92_str_digest_7cb7e1a5659547478f12d8fe755efd75_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_chr_63;
static PyObject *const_tuple_str_plain_name_str_plain_pat_str_plain_match_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_str_digest_7e2cc2d3b6025fc6d7b3523861452206;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_j;
static PyObject *const_str_digest_a7cdb074c3801621ce883440486ffb2a;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_416be3a493e8bc7210df93e3c1419247;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_chr_91;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_chr_92;
static PyObject *const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple;
static PyObject *const_str_plain__compile_pattern;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_49f5d182264734f69e4d64c515c49e7b;
static PyObject *const_str_digest_5c6410f5700d6a1ce8fabe6fc4dd3b68;
static PyObject *const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_chunks;
extern PyObject *const_str_plain_maxsize;
static PyObject *const_tuple_str_plain_name_str_plain_pat_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_chr_93;
extern PyObject *const_str_plain_stuff;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_14bf142caba56578f1c00aab6f48a798;
static PyObject *const_list_556f1476cc73e6e7df2c56d8f45a8892_list;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_0a03574909bf581a75cbb76bd810b092;
extern PyObject *const_str_plain_fnmatchcase;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_162d9e76f2330b27f6c578269e581247;
extern PyObject *const_str_plain_replace;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_plain_posixpath;
static PyObject *const_dict_c430965760ddb163d2c0d45ace8206c4;
extern PyObject *const_str_digest_7cb7e1a5659547478f12d8fe755efd75;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_chr_33;
static PyObject *const_tuple_str_chr_94_str_chr_91_tuple;
extern PyObject *const_str_plain_fnmatch;
extern PyObject *const_str_chr_94;
static PyObject *const_str_digest_548f8d37f9a611777eb26a7105ecad09;
extern PyObject *const_str_plain_translate;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_find;
extern PyObject *const_str_plain_pat;
static PyObject *const_str_digest_49f5f6e0ff2142df2fa2134c54b960b9;
extern PyObject *const_str_plain_escape;
static PyObject *const_str_plain_typed;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_s_tuple;
static PyObject *const_str_digest_fbe9acdc2a8f2592ba3087b0b8c8bc57;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_res_str = UNSTREAM_STRING_ASCII( &constant_bin[ 287462 ], 7, 1 );
    const_str_digest_11ccc4b6c74d80d91b261f7c536bccd1 = UNSTREAM_STRING_ASCII( &constant_bin[ 287469 ], 28, 0 );
    const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3 = UNSTREAM_STRING_ASCII( &constant_bin[ 8980 ], 2, 0 );
    const_tuple_str_chr_45_str_digest_416be3a493e8bc7210df93e3c1419247_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_45_str_digest_416be3a493e8bc7210df93e3c1419247_tuple, 0, const_str_chr_45 ); Py_INCREF( const_str_chr_45 );
    const_str_digest_416be3a493e8bc7210df93e3c1419247 = UNSTREAM_STRING_ASCII( &constant_bin[ 102051 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_chr_45_str_digest_416be3a493e8bc7210df93e3c1419247_tuple, 1, const_str_digest_416be3a493e8bc7210df93e3c1419247 ); Py_INCREF( const_str_digest_416be3a493e8bc7210df93e3c1419247 );
    const_str_plain_lru_cache = UNSTREAM_STRING_ASCII( &constant_bin[ 287497 ], 9, 1 );
    const_str_digest_af3a3d0b1eb00c7b3b9310b2ef5e4f9b = UNSTREAM_STRING_ASCII( &constant_bin[ 287506 ], 51, 0 );
    const_str_plain_pat_str = UNSTREAM_STRING_ASCII( &constant_bin[ 287557 ], 7, 1 );
    const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 0, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 6, const_str_plain_stuff ); Py_INCREF( const_str_plain_stuff );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 7, const_str_plain_chunks ); Py_INCREF( const_str_plain_chunks );
    PyTuple_SET_ITEM( const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 8, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_d0bf9d6a3d6eda6aaca1ebcc6bf74f20 = UNSTREAM_STRING_ASCII( &constant_bin[ 287564 ], 10, 0 );
    const_tuple_str_plain_name_str_plain_pat_str_plain_match_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_pat_str_plain_match_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_pat_str_plain_match_tuple, 1, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_pat_str_plain_match_tuple, 2, const_str_plain_match ); Py_INCREF( const_str_plain_match );
    const_str_digest_7e2cc2d3b6025fc6d7b3523861452206 = UNSTREAM_STRING_ASCII( &constant_bin[ 287574 ], 102, 0 );
    const_str_digest_a7cdb074c3801621ce883440486ffb2a = UNSTREAM_STRING_ASCII( &constant_bin[ 287676 ], 419, 0 );
    const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple, 0, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple, 1, const_str_plain_pat_str ); Py_INCREF( const_str_plain_pat_str );
    PyTuple_SET_ITEM( const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple, 2, const_str_plain_res_str ); Py_INCREF( const_str_plain_res_str );
    PyTuple_SET_ITEM( const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain__compile_pattern = UNSTREAM_STRING_ASCII( &constant_bin[ 288095 ], 16, 1 );
    const_str_digest_49f5d182264734f69e4d64c515c49e7b = UNSTREAM_STRING_ASCII( &constant_bin[ 288111 ], 445, 0 );
    const_str_digest_5c6410f5700d6a1ce8fabe6fc4dd3b68 = UNSTREAM_STRING_ASCII( &constant_bin[ 288556 ], 7, 0 );
    const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple, 0, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple, 1, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple, 3, const_str_plain_match ); Py_INCREF( const_str_plain_match );
    PyTuple_SET_ITEM( const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_tuple_str_plain_name_str_plain_pat_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_pat_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_pat_tuple, 1, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    const_str_digest_14bf142caba56578f1c00aab6f48a798 = UNSTREAM_STRING_ASCII( &constant_bin[ 288563 ], 10, 0 );
    const_list_556f1476cc73e6e7df2c56d8f45a8892_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_556f1476cc73e6e7df2c56d8f45a8892_list, 0, const_str_plain_filter ); Py_INCREF( const_str_plain_filter );
    PyList_SET_ITEM( const_list_556f1476cc73e6e7df2c56d8f45a8892_list, 1, const_str_plain_fnmatch ); Py_INCREF( const_str_plain_fnmatch );
    PyList_SET_ITEM( const_list_556f1476cc73e6e7df2c56d8f45a8892_list, 2, const_str_plain_fnmatchcase ); Py_INCREF( const_str_plain_fnmatchcase );
    PyList_SET_ITEM( const_list_556f1476cc73e6e7df2c56d8f45a8892_list, 3, const_str_plain_translate ); Py_INCREF( const_str_plain_translate );
    const_str_digest_0a03574909bf581a75cbb76bd810b092 = UNSTREAM_STRING_ASCII( &constant_bin[ 288573 ], 9, 0 );
    const_str_digest_162d9e76f2330b27f6c578269e581247 = UNSTREAM_STRING_ASCII( &constant_bin[ 288582 ], 6, 0 );
    const_dict_c430965760ddb163d2c0d45ace8206c4 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_c430965760ddb163d2c0d45ace8206c4, const_str_plain_maxsize, const_int_pos_256 );
    const_str_plain_typed = UNSTREAM_STRING_ASCII( &constant_bin[ 8615 ], 5, 1 );
    PyDict_SetItem( const_dict_c430965760ddb163d2c0d45ace8206c4, const_str_plain_typed, Py_True );
    assert( PyDict_Size( const_dict_c430965760ddb163d2c0d45ace8206c4 ) == 2 );
    const_tuple_str_chr_94_str_chr_91_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_94_str_chr_91_tuple, 0, const_str_chr_94 ); Py_INCREF( const_str_chr_94 );
    PyTuple_SET_ITEM( const_tuple_str_chr_94_str_chr_91_tuple, 1, const_str_chr_91 ); Py_INCREF( const_str_chr_91 );
    const_str_digest_548f8d37f9a611777eb26a7105ecad09 = UNSTREAM_STRING_ASCII( &constant_bin[ 18000 ], 2, 0 );
    const_str_digest_49f5f6e0ff2142df2fa2134c54b960b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 288588 ], 143, 0 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_s_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_s_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_s_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_digest_fbe9acdc2a8f2592ba3087b0b8c8bc57 = UNSTREAM_STRING_ASCII( &constant_bin[ 288731 ], 16, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_fnmatch( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_192c68f81dc56ad92180e95f2f2d5115;
static PyCodeObject *codeobj_0693616f1bb06b02befd739a3409feda;
static PyCodeObject *codeobj_e1bee443b647dbf8c3b6ca85c96a2458;
static PyCodeObject *codeobj_ac055f485d4547f75f62c89a77d21f89;
static PyCodeObject *codeobj_d99c8e2dc23f531a43bf6734e7c90b7e;
static PyCodeObject *codeobj_3a90c309de915d0f058c32acc538d4ef;
static PyCodeObject *codeobj_b25775c611c1b4c5bdfc83455d84d615;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d0bf9d6a3d6eda6aaca1ebcc6bf74f20 );
    codeobj_192c68f81dc56ad92180e95f2f2d5115 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 116, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_s_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0693616f1bb06b02befd739a3409feda = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fbe9acdc2a8f2592ba3087b0b8c8bc57, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e1bee443b647dbf8c3b6ca85c96a2458 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compile_pattern, 38, const_tuple_a05e664e760d9aa90ab201ec1d28bc5c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ac055f485d4547f75f62c89a77d21f89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 48, const_tuple_1785ece5561c4d05a2f9e410b1d1ea55_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d99c8e2dc23f531a43bf6734e7c90b7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fnmatch, 19, const_tuple_str_plain_name_str_plain_pat_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a90c309de915d0f058c32acc538d4ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fnmatchcase, 64, const_tuple_str_plain_name_str_plain_pat_str_plain_match_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b25775c611c1b4c5bdfc83455d84d615 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_translate, 74, const_tuple_5c8c9d83ae30d8a14f454097c9856754_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *fnmatch$$$function_5_translate$$$genexpr_1_genexpr_maker( void );


static PyObject *MAKE_FUNCTION_fnmatch$$$function_1_fnmatch(  );


static PyObject *MAKE_FUNCTION_fnmatch$$$function_2__compile_pattern(  );


static PyObject *MAKE_FUNCTION_fnmatch$$$function_3_filter(  );


static PyObject *MAKE_FUNCTION_fnmatch$$$function_4_fnmatchcase(  );


static PyObject *MAKE_FUNCTION_fnmatch$$$function_5_translate(  );


// The module function definitions.
static PyObject *impl_fnmatch$$$function_1_fnmatch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_pat = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d99c8e2dc23f531a43bf6734e7c90b7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d99c8e2dc23f531a43bf6734e7c90b7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d99c8e2dc23f531a43bf6734e7c90b7e, codeobj_d99c8e2dc23f531a43bf6734e7c90b7e, module_fnmatch, sizeof(void *)+sizeof(void *) );
    frame_d99c8e2dc23f531a43bf6734e7c90b7e = cache_frame_d99c8e2dc23f531a43bf6734e7c90b7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d99c8e2dc23f531a43bf6734e7c90b7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d99c8e2dc23f531a43bf6734e7c90b7e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_d99c8e2dc23f531a43bf6734e7c90b7e->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_normcase, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert( old != NULL );
            par_name = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pat );
        tmp_args_element_name_2 = par_pat;
        frame_d99c8e2dc23f531a43bf6734e7c90b7e->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_normcase, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_pat;
            assert( old != NULL );
            par_pat = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_fnmatchcase );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fnmatchcase );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fnmatchcase" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_3 = par_name;
        CHECK_OBJECT( par_pat );
        tmp_args_element_name_4 = par_pat;
        frame_d99c8e2dc23f531a43bf6734e7c90b7e->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d99c8e2dc23f531a43bf6734e7c90b7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d99c8e2dc23f531a43bf6734e7c90b7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d99c8e2dc23f531a43bf6734e7c90b7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d99c8e2dc23f531a43bf6734e7c90b7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d99c8e2dc23f531a43bf6734e7c90b7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d99c8e2dc23f531a43bf6734e7c90b7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d99c8e2dc23f531a43bf6734e7c90b7e,
        type_description_1,
        par_name,
        par_pat
    );


    // Release cached frame.
    if ( frame_d99c8e2dc23f531a43bf6734e7c90b7e == cache_frame_d99c8e2dc23f531a43bf6734e7c90b7e )
    {
        Py_DECREF( frame_d99c8e2dc23f531a43bf6734e7c90b7e );
    }
    cache_frame_d99c8e2dc23f531a43bf6734e7c90b7e = NULL;

    assertFrameObject( frame_d99c8e2dc23f531a43bf6734e7c90b7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_1_fnmatch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_1_fnmatch );
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


static PyObject *impl_fnmatch$$$function_2__compile_pattern( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pat = python_pars[ 0 ];
    PyObject *var_pat_str = NULL;
    PyObject *var_res_str = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_e1bee443b647dbf8c3b6ca85c96a2458;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e1bee443b647dbf8c3b6ca85c96a2458 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1bee443b647dbf8c3b6ca85c96a2458, codeobj_e1bee443b647dbf8c3b6ca85c96a2458, module_fnmatch, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e1bee443b647dbf8c3b6ca85c96a2458 = cache_frame_e1bee443b647dbf8c3b6ca85c96a2458;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1bee443b647dbf8c3b6ca85c96a2458 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1bee443b647dbf8c3b6ca85c96a2458 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_pat );
        tmp_isinstance_inst_1 = par_pat;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_unicode_encoding_1;
            CHECK_OBJECT( par_pat );
            tmp_unicode_arg_1 = par_pat;
            tmp_unicode_encoding_1 = const_str_digest_14bf142caba56578f1c00aab6f48a798;
            tmp_assign_source_1 = TO_UNICODE3( tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_pat_str == NULL );
            var_pat_str = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_translate );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_translate );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "translate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 42;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_pat_str );
            tmp_args_element_name_1 = var_pat_str;
            frame_e1bee443b647dbf8c3b6ca85c96a2458->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_res_str == NULL );
            var_res_str = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_bytes_arg_1;
            PyObject *tmp_bytes_encoding_1;
            CHECK_OBJECT( var_res_str );
            tmp_bytes_arg_1 = var_res_str;
            tmp_bytes_encoding_1 = const_str_digest_14bf142caba56578f1c00aab6f48a798;
            tmp_assign_source_3 = BUILTIN_BYTES3( tmp_bytes_arg_1, tmp_bytes_encoding_1, NULL );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_translate );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_translate );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "translate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 45;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_pat );
            tmp_args_element_name_2 = par_pat;
            frame_e1bee443b647dbf8c3b6ca85c96a2458->m_frame.f_lineno = 45;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_3 = var_res;
        frame_e1bee443b647dbf8c3b6ca85c96a2458->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_source_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, call_args );
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1bee443b647dbf8c3b6ca85c96a2458 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1bee443b647dbf8c3b6ca85c96a2458 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1bee443b647dbf8c3b6ca85c96a2458 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1bee443b647dbf8c3b6ca85c96a2458, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1bee443b647dbf8c3b6ca85c96a2458->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1bee443b647dbf8c3b6ca85c96a2458, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1bee443b647dbf8c3b6ca85c96a2458,
        type_description_1,
        par_pat,
        var_pat_str,
        var_res_str,
        var_res
    );


    // Release cached frame.
    if ( frame_e1bee443b647dbf8c3b6ca85c96a2458 == cache_frame_e1bee443b647dbf8c3b6ca85c96a2458 )
    {
        Py_DECREF( frame_e1bee443b647dbf8c3b6ca85c96a2458 );
    }
    cache_frame_e1bee443b647dbf8c3b6ca85c96a2458 = NULL;

    assertFrameObject( frame_e1bee443b647dbf8c3b6ca85c96a2458 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_2__compile_pattern );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    Py_XDECREF( var_pat_str );
    var_pat_str = NULL;

    Py_XDECREF( var_res_str );
    var_res_str = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    Py_XDECREF( var_pat_str );
    var_pat_str = NULL;

    Py_XDECREF( var_res_str );
    var_res_str = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_2__compile_pattern );
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


static PyObject *impl_fnmatch$$$function_3_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[ 0 ];
    PyObject *par_pat = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_match = NULL;
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ac055f485d4547f75f62c89a77d21f89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ac055f485d4547f75f62c89a77d21f89 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ac055f485d4547f75f62c89a77d21f89, codeobj_ac055f485d4547f75f62c89a77d21f89, module_fnmatch, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ac055f485d4547f75f62c89a77d21f89 = cache_frame_ac055f485d4547f75f62c89a77d21f89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ac055f485d4547f75f62c89a77d21f89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ac055f485d4547f75f62c89a77d21f89 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pat );
        tmp_args_element_name_1 = par_pat;
        frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_normcase, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_pat;
            assert( old != NULL );
            par_pat = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain__compile_pattern );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compile_pattern );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compile_pattern" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_pat );
        tmp_args_element_name_2 = par_pat;
        frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_match == NULL );
        var_match = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_posixpath );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_posixpath );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "posixpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_4;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_names );
            tmp_iter_arg_1 = par_names;
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    exception_lineno = 55;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_6 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_6;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_match );
            tmp_called_name_2 = var_match;
            CHECK_OBJECT( var_name );
            tmp_args_element_name_3 = var_name;
            frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 56;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( var_result );
                tmp_called_instance_2 = var_result;
                CHECK_OBJECT( var_name );
                tmp_args_element_name_4 = var_name;
                frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 57;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 57;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_2:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooo";
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
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_names );
            tmp_iter_arg_2 = par_names;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    exception_lineno = 59;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_9 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_9;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_match );
            tmp_called_name_3 = var_match;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_os );

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

                exception_lineno = 60;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_3 = tmp_mvar_value_5;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_name );
            tmp_args_element_name_6 = var_name;
            frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_normcase, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 60;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
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
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( var_result );
                tmp_called_instance_4 = var_result;
                CHECK_OBJECT( var_name );
                tmp_args_element_name_7 = var_name;
                frame_ac055f485d4547f75f62c89a77d21f89->m_frame.f_lineno = 61;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_3:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac055f485d4547f75f62c89a77d21f89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac055f485d4547f75f62c89a77d21f89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac055f485d4547f75f62c89a77d21f89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac055f485d4547f75f62c89a77d21f89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac055f485d4547f75f62c89a77d21f89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ac055f485d4547f75f62c89a77d21f89,
        type_description_1,
        par_names,
        par_pat,
        var_result,
        var_match,
        var_name
    );


    // Release cached frame.
    if ( frame_ac055f485d4547f75f62c89a77d21f89 == cache_frame_ac055f485d4547f75f62c89a77d21f89 )
    {
        Py_DECREF( frame_ac055f485d4547f75f62c89a77d21f89 );
    }
    cache_frame_ac055f485d4547f75f62c89a77d21f89 = NULL;

    assertFrameObject( frame_ac055f485d4547f75f62c89a77d21f89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_3_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)var_match );
    Py_DECREF( var_match );
    var_match = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_match );
    var_match = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_3_filter );
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


static PyObject *impl_fnmatch$$$function_4_fnmatchcase( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_pat = python_pars[ 1 ];
    PyObject *var_match = NULL;
    struct Nuitka_FrameObject *frame_3a90c309de915d0f058c32acc538d4ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3a90c309de915d0f058c32acc538d4ef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a90c309de915d0f058c32acc538d4ef, codeobj_3a90c309de915d0f058c32acc538d4ef, module_fnmatch, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3a90c309de915d0f058c32acc538d4ef = cache_frame_3a90c309de915d0f058c32acc538d4ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a90c309de915d0f058c32acc538d4ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a90c309de915d0f058c32acc538d4ef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain__compile_pattern );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compile_pattern );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compile_pattern" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_pat );
        tmp_args_element_name_1 = par_pat;
        frame_3a90c309de915d0f058c32acc538d4ef->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_match == NULL );
        var_match = tmp_assign_source_1;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_match );
        tmp_called_name_2 = var_match;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_2 = par_name;
        frame_3a90c309de915d0f058c32acc538d4ef->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_1 );
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a90c309de915d0f058c32acc538d4ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a90c309de915d0f058c32acc538d4ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a90c309de915d0f058c32acc538d4ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a90c309de915d0f058c32acc538d4ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a90c309de915d0f058c32acc538d4ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a90c309de915d0f058c32acc538d4ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a90c309de915d0f058c32acc538d4ef,
        type_description_1,
        par_name,
        par_pat,
        var_match
    );


    // Release cached frame.
    if ( frame_3a90c309de915d0f058c32acc538d4ef == cache_frame_3a90c309de915d0f058c32acc538d4ef )
    {
        Py_DECREF( frame_3a90c309de915d0f058c32acc538d4ef );
    }
    cache_frame_3a90c309de915d0f058c32acc538d4ef = NULL;

    assertFrameObject( frame_3a90c309de915d0f058c32acc538d4ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_4_fnmatchcase );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    CHECK_OBJECT( (PyObject *)var_match );
    Py_DECREF( var_match );
    var_match = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    Py_XDECREF( var_match );
    var_match = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_4_fnmatchcase );
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


static PyObject *impl_fnmatch$$$function_5_translate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pat = python_pars[ 0 ];
    PyObject *var_i = NULL;
    PyObject *var_n = NULL;
    PyObject *var_res = NULL;
    PyObject *var_c = NULL;
    PyObject *var_j = NULL;
    PyObject *var_stuff = NULL;
    PyObject *var_chunks = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b25775c611c1b4c5bdfc83455d84d615;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b25775c611c1b4c5bdfc83455d84d615 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b25775c611c1b4c5bdfc83455d84d615, codeobj_b25775c611c1b4c5bdfc83455d84d615, module_fnmatch, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b25775c611c1b4c5bdfc83455d84d615 = cache_frame_b25775c611c1b4c5bdfc83455d84d615;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b25775c611c1b4c5bdfc83455d84d615 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b25775c611c1b4c5bdfc83455d84d615 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_len_arg_1;
        tmp_tuple_element_1 = const_int_0;
        tmp_iter_arg_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_pat );
        tmp_len_arg_1 = par_pat;
        tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 80;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 80;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 80;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_i == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_i = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_empty;
        assert( var_res == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_res = tmp_assign_source_6;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( var_i == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = var_i;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_1 = var_n;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_pat );
        tmp_subscribed_name_1 = par_pat;
        if ( var_i == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = var_i;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( var_i == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_i;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_c );
        tmp_compexpr_left_2 = var_c;
        tmp_compexpr_right_2 = const_str_chr_42;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
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
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            if ( var_res == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 86;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_res;
            tmp_right_name_2 = const_str_digest_548f8d37f9a611777eb26a7105ecad09;
            tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                var_res = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_c );
            tmp_compexpr_left_3 = var_c;
            tmp_compexpr_right_3 = const_str_chr_63;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                if ( var_res == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 88;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_3 = var_res;
                tmp_right_name_3 = const_str_dot;
                tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    var_res = tmp_assign_source_10;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( var_c );
                tmp_compexpr_left_4 = var_c;
                tmp_compexpr_right_4 = const_str_chr_91;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
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
                    PyObject *tmp_assign_source_11;
                    CHECK_OBJECT( var_i );
                    tmp_assign_source_11 = var_i;
                    {
                        PyObject *old = var_j;
                        var_j = tmp_assign_source_11;
                        Py_INCREF( var_j );
                        Py_XDECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_5;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_subscript_name_2;
                    CHECK_OBJECT( var_j );
                    tmp_compexpr_left_5 = var_j;
                    CHECK_OBJECT( var_n );
                    tmp_compexpr_right_5 = var_n;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 91;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    CHECK_OBJECT( par_pat );
                    tmp_subscribed_name_2 = par_pat;
                    CHECK_OBJECT( var_j );
                    tmp_subscript_name_2 = var_j;
                    tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                    if ( tmp_compexpr_left_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 91;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_6 = const_str_chr_33;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    Py_DECREF( tmp_compexpr_left_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 91;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_5 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_5 = tmp_and_left_value_1;
                    and_end_1:;
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
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_left_name_4;
                        PyObject *tmp_right_name_4;
                        CHECK_OBJECT( var_j );
                        tmp_left_name_4 = var_j;
                        tmp_right_name_4 = const_int_pos_1;
                        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
                        if ( tmp_assign_source_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 92;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_j;
                            assert( old != NULL );
                            var_j = tmp_assign_source_12;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_5:;
                }
                {
                    nuitka_bool tmp_condition_result_6;
                    int tmp_and_left_truth_2;
                    nuitka_bool tmp_and_left_value_2;
                    nuitka_bool tmp_and_right_value_2;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_compexpr_left_8;
                    PyObject *tmp_compexpr_right_8;
                    PyObject *tmp_subscribed_name_3;
                    PyObject *tmp_subscript_name_3;
                    CHECK_OBJECT( var_j );
                    tmp_compexpr_left_7 = var_j;
                    CHECK_OBJECT( var_n );
                    tmp_compexpr_right_7 = var_n;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 93;
                        type_description_1 = "ooooooooo";
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
                    CHECK_OBJECT( par_pat );
                    tmp_subscribed_name_3 = par_pat;
                    CHECK_OBJECT( var_j );
                    tmp_subscript_name_3 = var_j;
                    tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                    if ( tmp_compexpr_left_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 93;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_8 = const_str_chr_93;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                    Py_DECREF( tmp_compexpr_left_8 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 93;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
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
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_left_name_5;
                        PyObject *tmp_right_name_5;
                        CHECK_OBJECT( var_j );
                        tmp_left_name_5 = var_j;
                        tmp_right_name_5 = const_int_pos_1;
                        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
                        if ( tmp_assign_source_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 94;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_j;
                            assert( old != NULL );
                            var_j = tmp_assign_source_13;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_6:;
                }
                loop_start_2:;
                {
                    nuitka_bool tmp_condition_result_7;
                    PyObject *tmp_operand_name_2;
                    int tmp_and_left_truth_3;
                    PyObject *tmp_and_left_value_3;
                    PyObject *tmp_and_right_value_3;
                    PyObject *tmp_compexpr_left_9;
                    PyObject *tmp_compexpr_right_9;
                    PyObject *tmp_compexpr_left_10;
                    PyObject *tmp_compexpr_right_10;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscript_name_4;
                    if ( var_j == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_left_9 = var_j;
                    CHECK_OBJECT( var_n );
                    tmp_compexpr_right_9 = var_n;
                    tmp_and_left_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                    if ( tmp_and_left_value_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
                    if ( tmp_and_left_truth_3 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_and_left_value_3 );

                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( tmp_and_left_truth_3 == 1 )
                    {
                        goto and_right_3;
                    }
                    else
                    {
                        goto and_left_3;
                    }
                    and_right_3:;
                    Py_DECREF( tmp_and_left_value_3 );
                    CHECK_OBJECT( par_pat );
                    tmp_subscribed_name_4 = par_pat;
                    if ( var_j == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_subscript_name_4 = var_j;
                    tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    if ( tmp_compexpr_left_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_10 = const_str_chr_93;
                    tmp_and_right_value_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                    Py_DECREF( tmp_compexpr_left_10 );
                    if ( tmp_and_right_value_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_operand_name_2 = tmp_and_right_value_3;
                    goto and_end_3;
                    and_left_3:;
                    tmp_operand_name_2 = tmp_and_left_value_3;
                    and_end_3:;
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                    Py_DECREF( tmp_operand_name_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 95;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_7;
                    }
                    else
                    {
                        goto branch_no_7;
                    }
                    branch_yes_7:;
                    goto loop_end_2;
                    branch_no_7:;
                }
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_right_name_6;
                    if ( var_j == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 96;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_left_name_6 = var_j;
                    tmp_right_name_6 = const_int_pos_1;
                    tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 96;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_j;
                        var_j = tmp_assign_source_14;
                        Py_XDECREF( old );
                    }

                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 95;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                goto loop_start_2;
                loop_end_2:;
                {
                    nuitka_bool tmp_condition_result_8;
                    PyObject *tmp_compexpr_left_11;
                    PyObject *tmp_compexpr_right_11;
                    if ( var_j == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 97;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_left_11 = var_j;
                    CHECK_OBJECT( var_n );
                    tmp_compexpr_right_11 = var_n;
                    tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 97;
                        type_description_1 = "ooooooooo";
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
                    {
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_left_name_7;
                        PyObject *tmp_right_name_7;
                        if ( var_res == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 98;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_left_name_7 = var_res;
                        tmp_right_name_7 = const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3;
                        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_7, tmp_right_name_7 );
                        if ( tmp_assign_source_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 98;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_res;
                            var_res = tmp_assign_source_15;
                            Py_XDECREF( old );
                        }

                    }
                    goto branch_end_8;
                    branch_no_8:;
                    {
                        PyObject *tmp_assign_source_16;
                        PyObject *tmp_subscribed_name_5;
                        PyObject *tmp_subscript_name_5;
                        PyObject *tmp_start_name_1;
                        PyObject *tmp_stop_name_1;
                        PyObject *tmp_step_name_1;
                        CHECK_OBJECT( par_pat );
                        tmp_subscribed_name_5 = par_pat;
                        CHECK_OBJECT( var_i );
                        tmp_start_name_1 = var_i;
                        if ( var_j == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 100;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_stop_name_1 = var_j;
                        tmp_step_name_1 = Py_None;
                        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                        assert( !(tmp_subscript_name_5 == NULL) );
                        tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                        Py_DECREF( tmp_subscript_name_5 );
                        if ( tmp_assign_source_16 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 100;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_stuff;
                            var_stuff = tmp_assign_source_16;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_9;
                        PyObject *tmp_compexpr_left_12;
                        PyObject *tmp_compexpr_right_12;
                        tmp_compexpr_left_12 = const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
                        CHECK_OBJECT( var_stuff );
                        tmp_compexpr_right_12 = var_stuff;
                        tmp_res = PySequence_Contains( tmp_compexpr_right_12, tmp_compexpr_left_12 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 101;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            PyObject *tmp_called_instance_1;
                            CHECK_OBJECT( var_stuff );
                            tmp_called_instance_1 = var_stuff;
                            frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 102;
                            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_92_str_digest_7cb7e1a5659547478f12d8fe755efd75_tuple, 0 ) );

                            if ( tmp_assign_source_17 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 102;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_stuff;
                                assert( old != NULL );
                                var_stuff = tmp_assign_source_17;
                                Py_DECREF( old );
                            }

                        }
                        goto branch_end_9;
                        branch_no_9:;
                        {
                            PyObject *tmp_assign_source_18;
                            tmp_assign_source_18 = PyList_New( 0 );
                            {
                                PyObject *old = var_chunks;
                                var_chunks = tmp_assign_source_18;
                                Py_XDECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_assign_source_19;
                            nuitka_bool tmp_condition_result_10;
                            PyObject *tmp_compexpr_left_13;
                            PyObject *tmp_compexpr_right_13;
                            PyObject *tmp_subscribed_name_6;
                            PyObject *tmp_subscript_name_6;
                            PyObject *tmp_left_name_8;
                            PyObject *tmp_right_name_8;
                            PyObject *tmp_left_name_9;
                            PyObject *tmp_right_name_9;
                            CHECK_OBJECT( par_pat );
                            tmp_subscribed_name_6 = par_pat;
                            CHECK_OBJECT( var_i );
                            tmp_subscript_name_6 = var_i;
                            tmp_compexpr_left_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                            if ( tmp_compexpr_left_13 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 105;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_right_13 = const_str_chr_33;
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                            Py_DECREF( tmp_compexpr_left_13 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 105;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                            {
                                goto condexpr_true_1;
                            }
                            else
                            {
                                goto condexpr_false_1;
                            }
                            condexpr_true_1:;
                            CHECK_OBJECT( var_i );
                            tmp_left_name_8 = var_i;
                            tmp_right_name_8 = const_int_pos_2;
                            tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
                            if ( tmp_assign_source_19 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 105;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            goto condexpr_end_1;
                            condexpr_false_1:;
                            CHECK_OBJECT( var_i );
                            tmp_left_name_9 = var_i;
                            tmp_right_name_9 = const_int_pos_1;
                            tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
                            if ( tmp_assign_source_19 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 105;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            condexpr_end_1:;
                            {
                                PyObject *old = var_k;
                                var_k = tmp_assign_source_19;
                                Py_XDECREF( old );
                            }

                        }
                        loop_start_3:;
                        {
                            PyObject *tmp_assign_source_20;
                            PyObject *tmp_called_name_1;
                            PyObject *tmp_source_name_1;
                            PyObject *tmp_args_element_name_1;
                            PyObject *tmp_args_element_name_2;
                            PyObject *tmp_args_element_name_3;
                            CHECK_OBJECT( par_pat );
                            tmp_source_name_1 = par_pat;
                            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_find );
                            if ( tmp_called_name_1 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 107;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_args_element_name_1 = const_str_chr_45;
                            CHECK_OBJECT( var_k );
                            tmp_args_element_name_2 = var_k;
                            if ( var_j == NULL )
                            {
                                Py_DECREF( tmp_called_name_1 );
                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 107;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_args_element_name_3 = var_j;
                            frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 107;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
                            }

                            Py_DECREF( tmp_called_name_1 );
                            if ( tmp_assign_source_20 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 107;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_k;
                                assert( old != NULL );
                                var_k = tmp_assign_source_20;
                                Py_DECREF( old );
                            }

                        }
                        {
                            nuitka_bool tmp_condition_result_11;
                            PyObject *tmp_compexpr_left_14;
                            PyObject *tmp_compexpr_right_14;
                            CHECK_OBJECT( var_k );
                            tmp_compexpr_left_14 = var_k;
                            tmp_compexpr_right_14 = const_int_0;
                            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 108;
                                type_description_1 = "ooooooooo";
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
                            goto loop_end_3;
                            branch_no_10:;
                        }
                        {
                            PyObject *tmp_called_name_2;
                            PyObject *tmp_source_name_2;
                            PyObject *tmp_call_result_1;
                            PyObject *tmp_args_element_name_4;
                            PyObject *tmp_subscribed_name_7;
                            PyObject *tmp_subscript_name_7;
                            PyObject *tmp_start_name_2;
                            PyObject *tmp_stop_name_2;
                            PyObject *tmp_step_name_2;
                            CHECK_OBJECT( var_chunks );
                            tmp_source_name_2 = var_chunks;
                            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
                            if ( tmp_called_name_2 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 110;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_pat );
                            tmp_subscribed_name_7 = par_pat;
                            CHECK_OBJECT( var_i );
                            tmp_start_name_2 = var_i;
                            CHECK_OBJECT( var_k );
                            tmp_stop_name_2 = var_k;
                            tmp_step_name_2 = Py_None;
                            tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                            assert( !(tmp_subscript_name_7 == NULL) );
                            tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                            Py_DECREF( tmp_subscript_name_7 );
                            if ( tmp_args_element_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_2 );

                                exception_lineno = 110;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 110;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_4 };
                                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                            }

                            Py_DECREF( tmp_called_name_2 );
                            Py_DECREF( tmp_args_element_name_4 );
                            if ( tmp_call_result_1 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 110;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            Py_DECREF( tmp_call_result_1 );
                        }
                        {
                            PyObject *tmp_assign_source_21;
                            PyObject *tmp_left_name_10;
                            PyObject *tmp_right_name_10;
                            CHECK_OBJECT( var_k );
                            tmp_left_name_10 = var_k;
                            tmp_right_name_10 = const_int_pos_1;
                            tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
                            if ( tmp_assign_source_21 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 111;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_i;
                                assert( old != NULL );
                                var_i = tmp_assign_source_21;
                                Py_DECREF( old );
                            }

                        }
                        {
                            PyObject *tmp_assign_source_22;
                            PyObject *tmp_left_name_11;
                            PyObject *tmp_right_name_11;
                            CHECK_OBJECT( var_k );
                            tmp_left_name_11 = var_k;
                            tmp_right_name_11 = const_int_pos_3;
                            tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
                            if ( tmp_assign_source_22 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 112;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_k;
                                assert( old != NULL );
                                var_k = tmp_assign_source_22;
                                Py_DECREF( old );
                            }

                        }
                        if ( CONSIDER_THREADING() == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 106;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto loop_start_3;
                        loop_end_3:;
                        {
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_3;
                            PyObject *tmp_call_result_2;
                            PyObject *tmp_args_element_name_5;
                            PyObject *tmp_subscribed_name_8;
                            PyObject *tmp_subscript_name_8;
                            PyObject *tmp_start_name_3;
                            PyObject *tmp_stop_name_3;
                            PyObject *tmp_step_name_3;
                            CHECK_OBJECT( var_chunks );
                            tmp_source_name_3 = var_chunks;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
                            if ( tmp_called_name_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 113;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_pat );
                            tmp_subscribed_name_8 = par_pat;
                            CHECK_OBJECT( var_i );
                            tmp_start_name_3 = var_i;
                            if ( var_j == NULL )
                            {
                                Py_DECREF( tmp_called_name_3 );
                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 113;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_stop_name_3 = var_j;
                            tmp_step_name_3 = Py_None;
                            tmp_subscript_name_8 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                            assert( !(tmp_subscript_name_8 == NULL) );
                            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                            Py_DECREF( tmp_subscript_name_8 );
                            if ( tmp_args_element_name_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_3 );

                                exception_lineno = 113;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 113;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_5 };
                                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                            }

                            Py_DECREF( tmp_called_name_3 );
                            Py_DECREF( tmp_args_element_name_5 );
                            if ( tmp_call_result_2 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 113;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            Py_DECREF( tmp_call_result_2 );
                        }
                        {
                            PyObject *tmp_assign_source_23;
                            PyObject *tmp_called_name_4;
                            PyObject *tmp_source_name_4;
                            PyObject *tmp_args_element_name_6;
                            tmp_source_name_4 = const_str_chr_45;
                            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
                            assert( !(tmp_called_name_4 == NULL) );
                            {
                                PyObject *tmp_assign_source_24;
                                PyObject *tmp_iter_arg_2;
                                CHECK_OBJECT( var_chunks );
                                tmp_iter_arg_2 = var_chunks;
                                tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_2 );
                                if ( tmp_assign_source_24 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 116;
                                    type_description_1 = "ooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                {
                                    PyObject *old = tmp_genexpr_1__$0;
                                    tmp_genexpr_1__$0 = tmp_assign_source_24;
                                    Py_XDECREF( old );
                                }

                            }
                            // Tried code:
                            tmp_args_element_name_6 = fnmatch$$$function_5_translate$$$genexpr_1_genexpr_maker();

                            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_6)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


                            goto try_return_handler_4;
                            // tried codes exits in all cases
                            NUITKA_CANNOT_GET_HERE( fnmatch$$$function_5_translate );
                            return NULL;
                            // Return handler code:
                            try_return_handler_4:;
                            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
                            Py_DECREF( tmp_genexpr_1__$0 );
                            tmp_genexpr_1__$0 = NULL;

                            goto outline_result_1;
                            // End of try:
                            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
                            Py_DECREF( tmp_genexpr_1__$0 );
                            tmp_genexpr_1__$0 = NULL;

                            // Return statement must have exited already.
                            NUITKA_CANNOT_GET_HERE( fnmatch$$$function_5_translate );
                            return NULL;
                            outline_result_1:;
                            frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 116;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_6 };
                                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                            }

                            Py_DECREF( tmp_called_name_4 );
                            Py_DECREF( tmp_args_element_name_6 );
                            if ( tmp_assign_source_23 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 116;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_stuff;
                                assert( old != NULL );
                                var_stuff = tmp_assign_source_23;
                                Py_DECREF( old );
                            }

                        }
                        branch_end_9:;
                    }
                    {
                        PyObject *tmp_assign_source_25;
                        PyObject *tmp_called_instance_2;
                        PyObject *tmp_mvar_value_1;
                        PyObject *tmp_args_element_name_7;
                        PyObject *tmp_args_element_name_8;
                        PyObject *tmp_args_element_name_9;
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_re );

                        if (unlikely( tmp_mvar_value_1 == NULL ))
                        {
                            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                        }

                        if ( tmp_mvar_value_1 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 119;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_2 = tmp_mvar_value_1;
                        tmp_args_element_name_7 = const_str_digest_5c6410f5700d6a1ce8fabe6fc4dd3b68;
                        tmp_args_element_name_8 = const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9;
                        CHECK_OBJECT( var_stuff );
                        tmp_args_element_name_9 = var_stuff;
                        frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 119;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_sub, call_args );
                        }

                        if ( tmp_assign_source_25 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 119;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_stuff;
                            assert( old != NULL );
                            var_stuff = tmp_assign_source_25;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_26;
                        PyObject *tmp_left_name_12;
                        PyObject *tmp_right_name_12;
                        if ( var_j == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_left_name_12 = var_j;
                        tmp_right_name_12 = const_int_pos_1;
                        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
                        if ( tmp_assign_source_26 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_i;
                            var_i = tmp_assign_source_26;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_12;
                        PyObject *tmp_compexpr_left_15;
                        PyObject *tmp_compexpr_right_15;
                        PyObject *tmp_subscribed_name_9;
                        PyObject *tmp_subscript_name_9;
                        CHECK_OBJECT( var_stuff );
                        tmp_subscribed_name_9 = var_stuff;
                        tmp_subscript_name_9 = const_int_0;
                        tmp_compexpr_left_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
                        if ( tmp_compexpr_left_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 121;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_15 = const_str_chr_33;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                        Py_DECREF( tmp_compexpr_left_15 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 121;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_11;
                        }
                        else
                        {
                            goto branch_no_11;
                        }
                        branch_yes_11:;
                        {
                            PyObject *tmp_assign_source_27;
                            PyObject *tmp_left_name_13;
                            PyObject *tmp_right_name_13;
                            PyObject *tmp_subscribed_name_10;
                            PyObject *tmp_subscript_name_10;
                            tmp_left_name_13 = const_str_chr_94;
                            CHECK_OBJECT( var_stuff );
                            tmp_subscribed_name_10 = var_stuff;
                            tmp_subscript_name_10 = const_slice_int_pos_1_none_none;
                            tmp_right_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                            if ( tmp_right_name_13 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 122;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_27 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_13, tmp_right_name_13 );
                            Py_DECREF( tmp_right_name_13 );
                            if ( tmp_assign_source_27 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 122;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_stuff;
                                assert( old != NULL );
                                var_stuff = tmp_assign_source_27;
                                Py_DECREF( old );
                            }

                        }
                        goto branch_end_11;
                        branch_no_11:;
                        {
                            nuitka_bool tmp_condition_result_13;
                            PyObject *tmp_compexpr_left_16;
                            PyObject *tmp_compexpr_right_16;
                            PyObject *tmp_subscribed_name_11;
                            PyObject *tmp_subscript_name_11;
                            CHECK_OBJECT( var_stuff );
                            tmp_subscribed_name_11 = var_stuff;
                            tmp_subscript_name_11 = const_int_0;
                            tmp_compexpr_left_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_11, tmp_subscript_name_11, 0 );
                            if ( tmp_compexpr_left_16 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 123;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_right_16 = const_tuple_str_chr_94_str_chr_91_tuple;
                            tmp_res = PySequence_Contains( tmp_compexpr_right_16, tmp_compexpr_left_16 );
                            Py_DECREF( tmp_compexpr_left_16 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 123;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_13 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                            {
                                goto branch_yes_12;
                            }
                            else
                            {
                                goto branch_no_12;
                            }
                            branch_yes_12:;
                            {
                                PyObject *tmp_assign_source_28;
                                PyObject *tmp_left_name_14;
                                PyObject *tmp_right_name_14;
                                tmp_left_name_14 = const_str_chr_92;
                                CHECK_OBJECT( var_stuff );
                                tmp_right_name_14 = var_stuff;
                                tmp_assign_source_28 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                                if ( tmp_assign_source_28 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 124;
                                    type_description_1 = "ooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                {
                                    PyObject *old = var_stuff;
                                    assert( old != NULL );
                                    var_stuff = tmp_assign_source_28;
                                    Py_DECREF( old );
                                }

                            }
                            branch_no_12:;
                        }
                        branch_end_11:;
                    }
                    {
                        PyObject *tmp_assign_source_29;
                        PyObject *tmp_left_name_15;
                        PyObject *tmp_right_name_15;
                        PyObject *tmp_tuple_element_2;
                        tmp_left_name_15 = const_str_digest_162d9e76f2330b27f6c578269e581247;
                        if ( var_res == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 125;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_2 = var_res;
                        tmp_right_name_15 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_2 );
                        PyTuple_SET_ITEM( tmp_right_name_15, 0, tmp_tuple_element_2 );
                        if ( var_stuff == NULL )
                        {
                            Py_DECREF( tmp_right_name_15 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stuff" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 125;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_2 = var_stuff;
                        Py_INCREF( tmp_tuple_element_2 );
                        PyTuple_SET_ITEM( tmp_right_name_15, 1, tmp_tuple_element_2 );
                        tmp_assign_source_29 = BINARY_OPERATION_REMAINDER( tmp_left_name_15, tmp_right_name_15 );
                        Py_DECREF( tmp_right_name_15 );
                        if ( tmp_assign_source_29 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 125;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_res;
                            var_res = tmp_assign_source_29;
                            Py_XDECREF( old );
                        }

                    }
                    branch_end_8:;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    PyObject *tmp_assign_source_30;
                    PyObject *tmp_left_name_16;
                    PyObject *tmp_right_name_16;
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_args_element_name_10;
                    if ( var_res == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 127;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_left_name_16 = var_res;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_re );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 127;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_3 = tmp_mvar_value_2;
                    CHECK_OBJECT( var_c );
                    tmp_args_element_name_10 = var_c;
                    frame_b25775c611c1b4c5bdfc83455d84d615->m_frame.f_lineno = 127;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_right_name_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_escape, call_args );
                    }

                    if ( tmp_right_name_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 127;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
                    Py_DECREF( tmp_right_name_16 );
                    if ( tmp_assign_source_30 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 127;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_res;
                        var_res = tmp_assign_source_30;
                        Py_XDECREF( old );
                    }

                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        tmp_left_name_17 = const_str_digest_0a03574909bf581a75cbb76bd810b092;
        if ( var_res == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_17 = var_res;
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b25775c611c1b4c5bdfc83455d84d615 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b25775c611c1b4c5bdfc83455d84d615 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b25775c611c1b4c5bdfc83455d84d615 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b25775c611c1b4c5bdfc83455d84d615, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b25775c611c1b4c5bdfc83455d84d615->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b25775c611c1b4c5bdfc83455d84d615, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b25775c611c1b4c5bdfc83455d84d615,
        type_description_1,
        par_pat,
        var_i,
        var_n,
        var_res,
        var_c,
        var_j,
        var_stuff,
        var_chunks,
        var_k
    );


    // Release cached frame.
    if ( frame_b25775c611c1b4c5bdfc83455d84d615 == cache_frame_b25775c611c1b4c5bdfc83455d84d615 )
    {
        Py_DECREF( frame_b25775c611c1b4c5bdfc83455d84d615 );
    }
    cache_frame_b25775c611c1b4c5bdfc83455d84d615 = NULL;

    assertFrameObject( frame_b25775c611c1b4c5bdfc83455d84d615 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_5_translate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_stuff );
    var_stuff = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pat );
    Py_DECREF( par_pat );
    par_pat = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_stuff );
    var_stuff = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( fnmatch$$$function_5_translate );
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



struct fnmatch$$$function_5_translate$$$genexpr_1_genexpr_locals {
    PyObject *var_s;
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

static PyObject *fnmatch$$$function_5_translate$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct fnmatch$$$function_5_translate$$$genexpr_1_genexpr_locals *generator_heap = (struct fnmatch$$$function_5_translate$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_s = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_192c68f81dc56ad92180e95f2f2d5115, module_fnmatch, sizeof(void *)+sizeof(void *) );
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
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 116;
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
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_s );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_s );
        tmp_called_instance_2 = generator_heap->var_s;
        generator->m_frame->m_frame.f_lineno = 116;
        tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_92_str_digest_7cb7e1a5659547478f12d8fe755efd75_tuple, 0 ) );

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 116;
        tmp_expression_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_45_str_digest_416be3a493e8bc7210df93e3c1419247_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 116;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_s
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

    Py_XDECREF( generator_heap->var_s );
    generator_heap->var_s = NULL;

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

    Py_XDECREF( generator_heap->var_s );
    generator_heap->var_s = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *fnmatch$$$function_5_translate$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        fnmatch$$$function_5_translate$$$genexpr_1_genexpr_context,
        module_fnmatch,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_11ccc4b6c74d80d91b261f7c536bccd1,
#endif
        codeobj_192c68f81dc56ad92180e95f2f2d5115,
        1,
        sizeof(struct fnmatch$$$function_5_translate$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_fnmatch$$$function_1_fnmatch(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnmatch$$$function_1_fnmatch,
        const_str_plain_fnmatch,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d99c8e2dc23f531a43bf6734e7c90b7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_fnmatch,
        const_str_digest_49f5d182264734f69e4d64c515c49e7b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnmatch$$$function_2__compile_pattern(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnmatch$$$function_2__compile_pattern,
        const_str_plain__compile_pattern,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1bee443b647dbf8c3b6ca85c96a2458,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_fnmatch,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnmatch$$$function_3_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnmatch$$$function_3_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ac055f485d4547f75f62c89a77d21f89,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_fnmatch,
        const_str_digest_af3a3d0b1eb00c7b3b9310b2ef5e4f9b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnmatch$$$function_4_fnmatchcase(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnmatch$$$function_4_fnmatchcase,
        const_str_plain_fnmatchcase,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a90c309de915d0f058c32acc538d4ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_fnmatch,
        const_str_digest_49f5f6e0ff2142df2fa2134c54b960b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnmatch$$$function_5_translate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnmatch$$$function_5_translate,
        const_str_plain_translate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b25775c611c1b4c5bdfc83455d84d615,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_fnmatch,
        const_str_digest_7e2cc2d3b6025fc6d7b3523861452206,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_fnmatch =
{
    PyModuleDef_HEAD_INIT,
    "fnmatch",
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

MOD_INIT_DECL( fnmatch )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_fnmatch );
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
    puts("fnmatch: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("fnmatch: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("fnmatch: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initfnmatch" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_fnmatch = Py_InitModule4(
        "fnmatch",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_fnmatch = PyModule_Create( &mdef_fnmatch );
#endif

    moduledict_fnmatch = MODULE_DICT( module_fnmatch );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_fnmatch,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_fnmatch,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_fnmatch,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_fnmatch,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_fnmatch );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_fnmatch, module_fnmatch );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0693616f1bb06b02befd739a3409feda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_a7cdb074c3801621ce883440486ffb2a;
        UPDATE_STRING_DICT0( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0693616f1bb06b02befd739a3409feda = MAKE_MODULE_FRAME( codeobj_0693616f1bb06b02befd739a3409feda, module_fnmatch );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0693616f1bb06b02befd739a3409feda );
    assert( Py_REFCNT( frame_0693616f1bb06b02befd739a3409feda ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_fnmatch;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_0693616f1bb06b02befd739a3409feda->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_posixpath;
        tmp_globals_name_2 = (PyObject *)moduledict_fnmatch;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_0693616f1bb06b02befd739a3409feda->m_frame.f_lineno = 13;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_posixpath, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_re;
        tmp_globals_name_3 = (PyObject *)moduledict_fnmatch;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_0693616f1bb06b02befd739a3409feda->m_frame.f_lineno = 14;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_functools;
        tmp_globals_name_4 = (PyObject *)moduledict_fnmatch;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_0693616f1bb06b02befd739a3409feda->m_frame.f_lineno = 15;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY( const_list_556f1476cc73e6e7df2c56d8f45a8892_list );
        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_fnmatch$$$function_1_fnmatch(  );



        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_fnmatch, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lru_cache );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_c430965760ddb163d2c0d45ace8206c4 );
        frame_0693616f1bb06b02befd739a3409feda->m_frame.f_lineno = 38;
        tmp_called_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = MAKE_FUNCTION_fnmatch$$$function_2__compile_pattern(  );



        frame_0693616f1bb06b02befd739a3409feda->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain__compile_pattern, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0693616f1bb06b02befd739a3409feda );
#endif
    popFrameStack();

    assertFrameObject( frame_0693616f1bb06b02befd739a3409feda );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0693616f1bb06b02befd739a3409feda );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0693616f1bb06b02befd739a3409feda, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0693616f1bb06b02befd739a3409feda->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0693616f1bb06b02befd739a3409feda, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_fnmatch$$$function_3_filter(  );



        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_filter, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_fnmatch$$$function_4_fnmatchcase(  );



        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_fnmatchcase, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_fnmatch$$$function_5_translate(  );



        UPDATE_STRING_DICT1( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain_translate, tmp_assign_source_13 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_fnmatch, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_fnmatch );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
