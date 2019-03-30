/* Generated code for Python module 'codeop'
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

/* The "_module_codeop" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codeop;
PyDictObject *moduledict_codeop;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_pass;
static PyObject *const_str_digest_84c748258673e693e7d6c548c9a4a763;
extern PyObject *const_str_plain_eval;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_2e4db4951182bd46fb45648d089fecb1;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_compiler_flag;
static PyObject *const_str_digest_e6f6fb8a7c15227420711f59e80694ae;
static PyObject *const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple;
extern PyObject *const_str_plain_single;
static PyObject *const_str_plain_code2;
extern PyObject *const_str_plain_strip;
extern PyObject *const_int_pos_512;
static PyObject *const_list_19c6e200958768ca775f6d5ba9f08027_list;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_960486e0fab54345473099d89eb1ba6d;
extern PyObject *const_str_plain_flags;
static PyObject *const_tuple_str_plain_Compile_tuple_empty_tuple;
extern PyObject *const_tuple_str_angle_input_str_plain_single_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_symbol;
extern PyObject *const_str_plain_compile_command;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_line;
static PyObject *const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_Compile;
static PyObject *const_str_plain__maybe_compile;
extern PyObject *const_str_plain_codeop;
static PyObject *const_str_digest_056dc6af2dce4561889e76ea9dca960d;
static PyObject *const_str_plain_err1;
extern PyObject *const_str_plain_all_feature_names;
extern PyObject *const_str_plain_CommandCompiler;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_9bfc3f61524b1103560629be807ebed5;
static PyObject *const_str_digest_2070662cab31be06e5b54972396e30f4;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_compiler;
static PyObject *const_tuple_str_plain_CommandCompiler_tuple_empty_tuple;
static PyObject *const_str_digest_4588f9d74c9b64b0b330dada80c47b98;
static PyObject *const_tuple_900f162d0b9335147420de2cc000eb8c_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_source;
static PyObject *const_str_plain__features;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain__compile;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_f2d2636d37f9af4f85353b0594bda03c;
static PyObject *const_str_plain_code1;
extern PyObject *const_str_plain_feature;
extern PyObject *const_str_newline;
static PyObject *const_str_digest_2ec30b937451dd10f59b7522677e6a5f;
static PyObject *const_str_plain_err2;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_angle_input;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___call__;
static PyObject *const_str_plain_codeob;
extern PyObject *const_str_plain_fname;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_a552c4982b3e32d01456f5d1437c2e3d;
extern PyObject *const_str_plain_co_flags;
static PyObject *const_tuple_str_plain_fname_tuple;
static PyObject *const_str_plain_PyCF_DONT_IMPLY_DEDENT;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_84c748258673e693e7d6c548c9a4a763 = UNSTREAM_STRING_ASCII( &constant_bin[ 64955 ], 296, 0 );
    const_str_digest_2e4db4951182bd46fb45648d089fecb1 = UNSTREAM_STRING_ASCII( &constant_bin[ 65251 ], 9, 0 );
    const_str_digest_e6f6fb8a7c15227420711f59e80694ae = UNSTREAM_STRING_ASCII( &constant_bin[ 65260 ], 16, 0 );
    const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple, 0, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple, 1, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple, 2, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    const_str_plain_code2 = UNSTREAM_STRING_ASCII( &constant_bin[ 65276 ], 5, 1 );
    const_list_19c6e200958768ca775f6d5ba9f08027_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_19c6e200958768ca775f6d5ba9f08027_list, 0, const_str_plain_compile_command ); Py_INCREF( const_str_plain_compile_command );
    const_str_plain_Compile = UNSTREAM_STRING_ASCII( &constant_bin[ 798 ], 7, 1 );
    PyList_SET_ITEM( const_list_19c6e200958768ca775f6d5ba9f08027_list, 1, const_str_plain_Compile ); Py_INCREF( const_str_plain_Compile );
    PyList_SET_ITEM( const_list_19c6e200958768ca775f6d5ba9f08027_list, 2, const_str_plain_CommandCompiler ); Py_INCREF( const_str_plain_CommandCompiler );
    const_str_digest_960486e0fab54345473099d89eb1ba6d = UNSTREAM_STRING_ASCII( &constant_bin[ 65281 ], 2139, 0 );
    const_tuple_str_plain_Compile_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Compile_tuple_empty_tuple, 0, const_str_plain_Compile ); Py_INCREF( const_str_plain_Compile );
    PyTuple_SET_ITEM( const_tuple_str_plain_Compile_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 1, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 3, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    const_str_plain_codeob = UNSTREAM_STRING_ASCII( &constant_bin[ 67420 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 4, const_str_plain_codeob ); Py_INCREF( const_str_plain_codeob );
    PyTuple_SET_ITEM( const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 5, const_str_plain_feature ); Py_INCREF( const_str_plain_feature );
    const_str_plain__maybe_compile = UNSTREAM_STRING_ASCII( &constant_bin[ 67426 ], 14, 1 );
    const_str_digest_056dc6af2dce4561889e76ea9dca960d = UNSTREAM_STRING_ASCII( &constant_bin[ 67440 ], 24, 0 );
    const_str_plain_err1 = UNSTREAM_STRING_ASCII( &constant_bin[ 67464 ], 4, 1 );
    const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 0, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 1, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 3, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 4, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 5, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 6, const_str_plain_err1 ); Py_INCREF( const_str_plain_err1 );
    const_str_plain_err2 = UNSTREAM_STRING_ASCII( &constant_bin[ 67468 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 7, const_str_plain_err2 ); Py_INCREF( const_str_plain_err2 );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 8, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_str_plain_code1 = UNSTREAM_STRING_ASCII( &constant_bin[ 67472 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 9, const_str_plain_code1 ); Py_INCREF( const_str_plain_code1 );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 10, const_str_plain_code2 ); Py_INCREF( const_str_plain_code2 );
    PyTuple_SET_ITEM( const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 11, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_9bfc3f61524b1103560629be807ebed5 = UNSTREAM_STRING_ASCII( &constant_bin[ 67477 ], 235, 0 );
    const_str_digest_2070662cab31be06e5b54972396e30f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 67712 ], 627, 0 );
    const_tuple_str_plain_CommandCompiler_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CommandCompiler_tuple_empty_tuple, 0, const_str_plain_CommandCompiler ); Py_INCREF( const_str_plain_CommandCompiler );
    PyTuple_SET_ITEM( const_tuple_str_plain_CommandCompiler_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_4588f9d74c9b64b0b330dada80c47b98 = UNSTREAM_STRING_ASCII( &constant_bin[ 68339 ], 693, 0 );
    const_tuple_900f162d0b9335147420de2cc000eb8c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_900f162d0b9335147420de2cc000eb8c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_900f162d0b9335147420de2cc000eb8c_tuple, 1, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_900f162d0b9335147420de2cc000eb8c_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_900f162d0b9335147420de2cc000eb8c_tuple, 3, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    const_str_plain__features = UNSTREAM_STRING_ASCII( &constant_bin[ 69032 ], 9, 1 );
    const_str_digest_f2d2636d37f9af4f85353b0594bda03c = UNSTREAM_STRING_ASCII( &constant_bin[ 69041 ], 15, 0 );
    const_str_digest_2ec30b937451dd10f59b7522677e6a5f = UNSTREAM_STRING_ASCII( &constant_bin[ 69056 ], 16, 0 );
    const_str_digest_a552c4982b3e32d01456f5d1437c2e3d = UNSTREAM_STRING_ASCII( &constant_bin[ 69072 ], 24, 0 );
    const_tuple_str_plain_fname_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fname_tuple, 0, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    const_str_plain_PyCF_DONT_IMPLY_DEDENT = UNSTREAM_STRING_ASCII( &constant_bin[ 69096 ], 22, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codeop( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c0583bd2157f8fcbfd07a0e661159c8a;
static PyCodeObject *codeobj_30f66245ba63f9f9076fbe78fb47763d;
static PyCodeObject *codeobj_80538bee98fbc0cedb6416c65e2c8c79;
static PyCodeObject *codeobj_ccdd3ff406c80a5f278e8160d97b06c2;
static PyCodeObject *codeobj_77977598396b22db106ce88434d39d8e;
static PyCodeObject *codeobj_1f9982c8afcd9dbdd80e16b0a5604bc3;
static PyCodeObject *codeobj_984dddfddd631badc049b2e9293acf66;
static PyCodeObject *codeobj_49d95c34e632f5b6d1de24c68c7530ff;
static PyCodeObject *codeobj_5dabac0072467e584dc54f6c99aaf488;
static PyCodeObject *codeobj_1382f1c99c3095a6a5df41e0bcd662c2;
static PyCodeObject *codeobj_195214faae8630f2204745585a065391;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_2e4db4951182bd46fb45648d089fecb1 );
    codeobj_c0583bd2157f8fcbfd07a0e661159c8a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 61, const_tuple_str_plain_fname_tuple, 1, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_30f66245ba63f9f9076fbe78fb47763d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f2d2636d37f9af4f85353b0594bda03c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_80538bee98fbc0cedb6416c65e2c8c79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CommandCompiler, 139, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ccdd3ff406c80a5f278e8160d97b06c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Compile, 124, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_77977598396b22db106ce88434d39d8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 132, const_tuple_1cd0065c4a8bea5a888654ae7949c4fc_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f9982c8afcd9dbdd80e16b0a5604bc3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 149, const_tuple_900f162d0b9335147420de2cc000eb8c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_984dddfddd631badc049b2e9293acf66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 129, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_49d95c34e632f5b6d1de24c68c7530ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 146, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5dabac0072467e584dc54f6c99aaf488 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compile, 101, const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1382f1c99c3095a6a5df41e0bcd662c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__maybe_compile, 68, const_tuple_aaa0b3938a1d7c58ffd2a57dada044d7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_195214faae8630f2204745585a065391 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compile_command, 104, const_tuple_str_plain_source_str_plain_filename_str_plain_symbol_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codeop$$$function_1__maybe_compile(  );


static PyObject *MAKE_FUNCTION_codeop$$$function_2__compile(  );


static PyObject *MAKE_FUNCTION_codeop$$$function_3_compile_command( PyObject *defaults );


static PyObject *MAKE_FUNCTION_codeop$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_codeop$$$function_5___call__(  );


static PyObject *MAKE_FUNCTION_codeop$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_codeop$$$function_7___call__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_codeop$$$function_1__maybe_compile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_compiler = python_pars[ 0 ];
    PyObject *par_source = python_pars[ 1 ];
    PyObject *par_filename = python_pars[ 2 ];
    PyObject *par_symbol = python_pars[ 3 ];
    PyObject *var_line = NULL;
    PyObject *var_err = NULL;
    PyObject *var_err1 = NULL;
    PyObject *var_err2 = NULL;
    PyObject *var_code = NULL;
    PyObject *var_code1 = NULL;
    PyObject *var_code2 = NULL;
    PyObject *var_e = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1382f1c99c3095a6a5df41e0bcd662c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1382f1c99c3095a6a5df41e0bcd662c2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1382f1c99c3095a6a5df41e0bcd662c2, codeobj_1382f1c99c3095a6a5df41e0bcd662c2, module_codeop, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1382f1c99c3095a6a5df41e0bcd662c2 = cache_frame_1382f1c99c3095a6a5df41e0bcd662c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1382f1c99c3095a6a5df41e0bcd662c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1382f1c99c3095a6a5df41e0bcd662c2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_source );
        tmp_called_instance_1 = par_source;
        frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = 70;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 70;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
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

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = exception_keeper_type_1;
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 70;
            type_description_1 = "oooooooooooo";
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
            nuitka_bool tmp_assign_source_4;
            tmp_assign_source_4 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_4;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_1;
        goto branch_end_1;
        branch_no_1:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_5;
            Py_INCREF( var_line );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_line );
        tmp_called_instance_2 = var_line;
        frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = 71;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_line;
            assert( old != NULL );
            var_line = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_line );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_line );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_line );
        tmp_subscribed_name_1 = var_line;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_2 = const_str_chr_35;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        goto loop_end_1;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_symbol );
            tmp_compexpr_left_4 = par_symbol;
            tmp_compexpr_right_4 = const_str_plain_eval;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_7;
                tmp_assign_source_7 = const_str_plain_pass;
                {
                    PyObject *old = par_source;
                    assert( old != NULL );
                    par_source = tmp_assign_source_7;
                    Py_INCREF( par_source );
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        branch_no_3:;
    }
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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert( var_err1 == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_err1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert( var_err2 == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_err2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        assert( var_code == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_code = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        assert( var_code1 == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_code1 = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_compiler );
        tmp_called_name_1 = par_compiler;
        if ( par_source == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_name_1 = par_source;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_2 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_args_element_name_3 = par_symbol;
        frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_code;
            assert( old != NULL );
            var_code = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    goto try_end_4;
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
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_SyntaxError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = EXC_VALUE(PyThreadState_GET());
            assert( var_err == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_err = tmp_assign_source_13;
        }
        Py_XDECREF( var_err );
        var_err = NULL;

        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 81;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame) frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
        branch_end_5:;
    }
    goto try_end_5;
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
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_1__maybe_compile );
    return NULL;
    // End of try:
    try_end_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_compiler );
        tmp_called_name_2 = par_compiler;
        if ( par_source == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }

        tmp_left_name_1 = par_source;
        tmp_right_name_1 = const_str_newline;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_5 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_args_element_name_6 = par_symbol;
        frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_code1;
            assert( old != NULL );
            var_code1 = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_SyntaxError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooooooooo";
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
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_e = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( var_e );
            tmp_assign_source_16 = var_e;
            {
                PyObject *old = var_err1;
                assert( old != NULL );
                var_err1 = tmp_assign_source_16;
                Py_INCREF( var_err1 );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( var_e );
        var_e = NULL;

        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 86;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame) frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooo";
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_1__maybe_compile );
    return NULL;
    // End of try:
    try_end_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( par_compiler );
        tmp_called_name_3 = par_compiler;
        if ( par_source == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_9;
        }

        tmp_left_name_2 = par_source;
        tmp_right_name_2 = const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_8 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_args_element_name_9 = par_symbol;
        frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_9;
        }
        assert( var_code2 == NULL );
        var_code2 = tmp_assign_source_17;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_7 = PyExc_SyntaxError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_e = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( var_e );
            tmp_assign_source_19 = var_e;
            {
                PyObject *old = var_err2;
                assert( old != NULL );
                var_err2 = tmp_assign_source_19;
                Py_INCREF( var_err2 );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( var_e );
        var_e = NULL;

        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 91;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame) frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_10;
        branch_end_7:;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_1__maybe_compile );
    return NULL;
    // End of try:
    try_end_8:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_code );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_code );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        CHECK_OBJECT( var_code );
        tmp_return_value = var_code;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_code1 );
        tmp_operand_name_1 = var_code1;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_err1 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = var_err1;
        tmp_compexpr_left_8 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_2 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_err2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = var_err2;
        tmp_compexpr_right_8 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_3 );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_8 );

            exception_lineno = 98;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_9 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_raise_type_1;
            if ( var_err1 == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err1" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 99;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = var_err1;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 99;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1382f1c99c3095a6a5df41e0bcd662c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1382f1c99c3095a6a5df41e0bcd662c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1382f1c99c3095a6a5df41e0bcd662c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1382f1c99c3095a6a5df41e0bcd662c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1382f1c99c3095a6a5df41e0bcd662c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1382f1c99c3095a6a5df41e0bcd662c2,
        type_description_1,
        par_compiler,
        par_source,
        par_filename,
        par_symbol,
        var_line,
        var_err,
        var_err1,
        var_err2,
        var_code,
        var_code1,
        var_code2,
        var_e
    );


    // Release cached frame.
    if ( frame_1382f1c99c3095a6a5df41e0bcd662c2 == cache_frame_1382f1c99c3095a6a5df41e0bcd662c2 )
    {
        Py_DECREF( frame_1382f1c99c3095a6a5df41e0bcd662c2 );
    }
    cache_frame_1382f1c99c3095a6a5df41e0bcd662c2 = NULL;

    assertFrameObject( frame_1382f1c99c3095a6a5df41e0bcd662c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_1__maybe_compile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_compiler );
    Py_DECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_err1 );
    var_err1 = NULL;

    Py_XDECREF( var_err2 );
    var_err2 = NULL;

    CHECK_OBJECT( (PyObject *)var_code );
    Py_DECREF( var_code );
    var_code = NULL;

    CHECK_OBJECT( (PyObject *)var_code1 );
    Py_DECREF( var_code1 );
    var_code1 = NULL;

    Py_XDECREF( var_code2 );
    var_code2 = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

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

    CHECK_OBJECT( (PyObject *)par_compiler );
    Py_DECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_err1 );
    var_err1 = NULL;

    Py_XDECREF( var_err2 );
    var_err2 = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_code1 );
    var_code1 = NULL;

    Py_XDECREF( var_code2 );
    var_code2 = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codeop$$$function_1__maybe_compile );
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


static PyObject *impl_codeop$$$function_2__compile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_source = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *par_symbol = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_5dabac0072467e584dc54f6c99aaf488;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5dabac0072467e584dc54f6c99aaf488 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5dabac0072467e584dc54f6c99aaf488, codeobj_5dabac0072467e584dc54f6c99aaf488, module_codeop, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5dabac0072467e584dc54f6c99aaf488 = cache_frame_5dabac0072467e584dc54f6c99aaf488;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5dabac0072467e584dc54f6c99aaf488 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5dabac0072467e584dc54f6c99aaf488 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compile_source_1;
        PyObject *tmp_compile_filename_1;
        PyObject *tmp_compile_mode_1;
        PyObject *tmp_compile_flags_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_source );
        tmp_compile_source_1 = par_source;
        CHECK_OBJECT( par_filename );
        tmp_compile_filename_1 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_compile_mode_1 = par_symbol;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_PyCF_DONT_IMPLY_DEDENT );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCF_DONT_IMPLY_DEDENT );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCF_DONT_IMPLY_DEDENT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compile_flags_1 = tmp_mvar_value_1;
        tmp_return_value = COMPILE_CODE( tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, tmp_compile_flags_1, NULL, NULL );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5dabac0072467e584dc54f6c99aaf488 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5dabac0072467e584dc54f6c99aaf488 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5dabac0072467e584dc54f6c99aaf488 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5dabac0072467e584dc54f6c99aaf488, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5dabac0072467e584dc54f6c99aaf488->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5dabac0072467e584dc54f6c99aaf488, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5dabac0072467e584dc54f6c99aaf488,
        type_description_1,
        par_source,
        par_filename,
        par_symbol
    );


    // Release cached frame.
    if ( frame_5dabac0072467e584dc54f6c99aaf488 == cache_frame_5dabac0072467e584dc54f6c99aaf488 )
    {
        Py_DECREF( frame_5dabac0072467e584dc54f6c99aaf488 );
    }
    cache_frame_5dabac0072467e584dc54f6c99aaf488 = NULL;

    assertFrameObject( frame_5dabac0072467e584dc54f6c99aaf488 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_2__compile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codeop$$$function_2__compile );
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


static PyObject *impl_codeop$$$function_3_compile_command( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_source = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *par_symbol = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_195214faae8630f2204745585a065391;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_195214faae8630f2204745585a065391 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_195214faae8630f2204745585a065391, codeobj_195214faae8630f2204745585a065391, module_codeop, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_195214faae8630f2204745585a065391 = cache_frame_195214faae8630f2204745585a065391;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_195214faae8630f2204745585a065391 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_195214faae8630f2204745585a065391 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__maybe_compile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__maybe_compile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_maybe_compile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__compile );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compile );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_source );
        tmp_args_element_name_2 = par_source;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_3 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_args_element_name_4 = par_symbol;
        frame_195214faae8630f2204745585a065391->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_195214faae8630f2204745585a065391 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_195214faae8630f2204745585a065391 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_195214faae8630f2204745585a065391 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_195214faae8630f2204745585a065391, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_195214faae8630f2204745585a065391->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_195214faae8630f2204745585a065391, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_195214faae8630f2204745585a065391,
        type_description_1,
        par_source,
        par_filename,
        par_symbol
    );


    // Release cached frame.
    if ( frame_195214faae8630f2204745585a065391 == cache_frame_195214faae8630f2204745585a065391 )
    {
        Py_DECREF( frame_195214faae8630f2204745585a065391 );
    }
    cache_frame_195214faae8630f2204745585a065391 = NULL;

    assertFrameObject( frame_195214faae8630f2204745585a065391 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_3_compile_command );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codeop$$$function_3_compile_command );
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


static PyObject *impl_codeop$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_984dddfddd631badc049b2e9293acf66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_984dddfddd631badc049b2e9293acf66 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_984dddfddd631badc049b2e9293acf66, codeobj_984dddfddd631badc049b2e9293acf66, module_codeop, sizeof(void *) );
    frame_984dddfddd631badc049b2e9293acf66 = cache_frame_984dddfddd631badc049b2e9293acf66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_984dddfddd631badc049b2e9293acf66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_984dddfddd631badc049b2e9293acf66 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_PyCF_DONT_IMPLY_DEDENT );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCF_DONT_IMPLY_DEDENT );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCF_DONT_IMPLY_DEDENT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flags, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_984dddfddd631badc049b2e9293acf66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_984dddfddd631badc049b2e9293acf66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_984dddfddd631badc049b2e9293acf66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_984dddfddd631badc049b2e9293acf66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_984dddfddd631badc049b2e9293acf66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_984dddfddd631badc049b2e9293acf66,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_984dddfddd631badc049b2e9293acf66 == cache_frame_984dddfddd631badc049b2e9293acf66 )
    {
        Py_DECREF( frame_984dddfddd631badc049b2e9293acf66 );
    }
    cache_frame_984dddfddd631badc049b2e9293acf66 = NULL;

    assertFrameObject( frame_984dddfddd631badc049b2e9293acf66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_4___init__ );
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
    NUITKA_CANNOT_GET_HERE( codeop$$$function_4___init__ );
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


static PyObject *impl_codeop$$$function_5___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_source = python_pars[ 1 ];
    PyObject *par_filename = python_pars[ 2 ];
    PyObject *par_symbol = python_pars[ 3 ];
    PyObject *var_codeob = NULL;
    PyObject *var_feature = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_77977598396b22db106ce88434d39d8e;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_77977598396b22db106ce88434d39d8e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_77977598396b22db106ce88434d39d8e, codeobj_77977598396b22db106ce88434d39d8e, module_codeop, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_77977598396b22db106ce88434d39d8e = cache_frame_77977598396b22db106ce88434d39d8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_77977598396b22db106ce88434d39d8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_77977598396b22db106ce88434d39d8e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_compile_source_1;
        PyObject *tmp_compile_filename_1;
        PyObject *tmp_compile_mode_1;
        PyObject *tmp_compile_flags_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compile_dont_inherit_1;
        CHECK_OBJECT( par_source );
        tmp_compile_source_1 = par_source;
        CHECK_OBJECT( par_filename );
        tmp_compile_filename_1 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_compile_mode_1 = par_symbol;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compile_flags_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flags );
        if ( tmp_compile_flags_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compile_dont_inherit_1 = const_int_pos_1;
        tmp_assign_source_1 = COMPILE_CODE( tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, tmp_compile_flags_1, tmp_compile_dont_inherit_1, NULL );
        Py_DECREF( tmp_compile_flags_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_codeob == NULL );
        var_codeob = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__features );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__features );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_features" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = tmp_mvar_value_1;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
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
                exception_lineno = 134;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_feature;
            var_feature = tmp_assign_source_4;
            Py_INCREF( var_feature );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_codeob );
        tmp_source_name_2 = var_codeob;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_co_flags );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_feature );
        tmp_source_name_3 = var_feature;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compiler_flag );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 135;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_op_bitand_res_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_1 );

            exception_lineno = 135;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_1 );
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flags );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_2 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( var_feature );
            tmp_source_name_5 = var_feature;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compiler_flag );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flags, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "oooooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
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
    RESTORE_FRAME_EXCEPTION( frame_77977598396b22db106ce88434d39d8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77977598396b22db106ce88434d39d8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_77977598396b22db106ce88434d39d8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_77977598396b22db106ce88434d39d8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_77977598396b22db106ce88434d39d8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_77977598396b22db106ce88434d39d8e,
        type_description_1,
        par_self,
        par_source,
        par_filename,
        par_symbol,
        var_codeob,
        var_feature
    );


    // Release cached frame.
    if ( frame_77977598396b22db106ce88434d39d8e == cache_frame_77977598396b22db106ce88434d39d8e )
    {
        Py_DECREF( frame_77977598396b22db106ce88434d39d8e );
    }
    cache_frame_77977598396b22db106ce88434d39d8e = NULL;

    assertFrameObject( frame_77977598396b22db106ce88434d39d8e );

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

    CHECK_OBJECT( var_codeob );
    tmp_return_value = var_codeob;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_5___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    CHECK_OBJECT( (PyObject *)var_codeob );
    Py_DECREF( var_codeob );
    var_codeob = NULL;

    Py_XDECREF( var_feature );
    var_feature = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    Py_XDECREF( var_codeob );
    var_codeob = NULL;

    Py_XDECREF( var_feature );
    var_feature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codeop$$$function_5___call__ );
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


static PyObject *impl_codeop$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_49d95c34e632f5b6d1de24c68c7530ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_49d95c34e632f5b6d1de24c68c7530ff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_49d95c34e632f5b6d1de24c68c7530ff, codeobj_49d95c34e632f5b6d1de24c68c7530ff, module_codeop, sizeof(void *) );
    frame_49d95c34e632f5b6d1de24c68c7530ff = cache_frame_49d95c34e632f5b6d1de24c68c7530ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_49d95c34e632f5b6d1de24c68c7530ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_49d95c34e632f5b6d1de24c68c7530ff ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_Compile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Compile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Compile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_49d95c34e632f5b6d1de24c68c7530ff->m_frame.f_lineno = 147;
        tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_compiler, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49d95c34e632f5b6d1de24c68c7530ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49d95c34e632f5b6d1de24c68c7530ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49d95c34e632f5b6d1de24c68c7530ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49d95c34e632f5b6d1de24c68c7530ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49d95c34e632f5b6d1de24c68c7530ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49d95c34e632f5b6d1de24c68c7530ff,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_49d95c34e632f5b6d1de24c68c7530ff == cache_frame_49d95c34e632f5b6d1de24c68c7530ff )
    {
        Py_DECREF( frame_49d95c34e632f5b6d1de24c68c7530ff );
    }
    cache_frame_49d95c34e632f5b6d1de24c68c7530ff = NULL;

    assertFrameObject( frame_49d95c34e632f5b6d1de24c68c7530ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_6___init__ );
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
    NUITKA_CANNOT_GET_HERE( codeop$$$function_6___init__ );
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


static PyObject *impl_codeop$$$function_7___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_source = python_pars[ 1 ];
    PyObject *par_filename = python_pars[ 2 ];
    PyObject *par_symbol = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_1f9982c8afcd9dbdd80e16b0a5604bc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f9982c8afcd9dbdd80e16b0a5604bc3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f9982c8afcd9dbdd80e16b0a5604bc3, codeobj_1f9982c8afcd9dbdd80e16b0a5604bc3, module_codeop, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f9982c8afcd9dbdd80e16b0a5604bc3 = cache_frame_1f9982c8afcd9dbdd80e16b0a5604bc3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__maybe_compile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__maybe_compile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_maybe_compile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compiler );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_source );
        tmp_args_element_name_2 = par_source;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_3 = par_filename;
        CHECK_OBJECT( par_symbol );
        tmp_args_element_name_4 = par_symbol;
        frame_1f9982c8afcd9dbdd80e16b0a5604bc3->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f9982c8afcd9dbdd80e16b0a5604bc3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f9982c8afcd9dbdd80e16b0a5604bc3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f9982c8afcd9dbdd80e16b0a5604bc3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f9982c8afcd9dbdd80e16b0a5604bc3,
        type_description_1,
        par_self,
        par_source,
        par_filename,
        par_symbol
    );


    // Release cached frame.
    if ( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 == cache_frame_1f9982c8afcd9dbdd80e16b0a5604bc3 )
    {
        Py_DECREF( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 );
    }
    cache_frame_1f9982c8afcd9dbdd80e16b0a5604bc3 = NULL;

    assertFrameObject( frame_1f9982c8afcd9dbdd80e16b0a5604bc3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codeop$$$function_7___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_symbol );
    Py_DECREF( par_symbol );
    par_symbol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codeop$$$function_7___call__ );
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



static PyObject *MAKE_FUNCTION_codeop$$$function_1__maybe_compile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_1__maybe_compile,
        const_str_plain__maybe_compile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1382f1c99c3095a6a5df41e0bcd662c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codeop$$$function_2__compile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_2__compile,
        const_str_plain__compile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5dabac0072467e584dc54f6c99aaf488,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codeop$$$function_3_compile_command( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_3_compile_command,
        const_str_plain_compile_command,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_195214faae8630f2204745585a065391,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        const_str_digest_2070662cab31be06e5b54972396e30f4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codeop$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_e6f6fb8a7c15227420711f59e80694ae,
#endif
        codeobj_984dddfddd631badc049b2e9293acf66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codeop$$$function_5___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_5___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_2ec30b937451dd10f59b7522677e6a5f,
#endif
        codeobj_77977598396b22db106ce88434d39d8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codeop$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_a552c4982b3e32d01456f5d1437c2e3d,
#endif
        codeobj_49d95c34e632f5b6d1de24c68c7530ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codeop$$$function_7___call__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codeop$$$function_7___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_056dc6af2dce4561889e76ea9dca960d,
#endif
        codeobj_1f9982c8afcd9dbdd80e16b0a5604bc3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_codeop,
        const_str_digest_4588f9d74c9b64b0b330dada80c47b98,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codeop =
{
    PyModuleDef_HEAD_INIT,
    "codeop",
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

MOD_INIT_DECL( codeop )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codeop );
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
    puts("codeop: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codeop: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codeop: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodeop" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codeop = Py_InitModule4(
        "codeop",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codeop = PyModule_Create( &mdef_codeop );
#endif

    moduledict_codeop = MODULE_DICT( module_codeop );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_codeop,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codeop,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codeop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codeop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codeop );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_codeop, module_codeop );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_fname = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_30f66245ba63f9f9076fbe78fb47763d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c0583bd2157f8fcbfd07a0e661159c8a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c0583bd2157f8fcbfd07a0e661159c8a_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_codeop_124 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ccdd3ff406c80a5f278e8160d97b06c2_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ccdd3ff406c80a5f278e8160d97b06c2_3 = NULL;
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
    PyObject *locals_codeop_139 = NULL;
    struct Nuitka_FrameObject *frame_80538bee98fbc0cedb6416c65e2c8c79_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_80538bee98fbc0cedb6416c65e2c8c79_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_960486e0fab54345473099d89eb1ba6d;
        UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_30f66245ba63f9f9076fbe78fb47763d = MAKE_MODULE_FRAME( codeobj_30f66245ba63f9f9076fbe78fb47763d, module_codeop );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_30f66245ba63f9f9076fbe78fb47763d );
    assert( Py_REFCNT( frame_30f66245ba63f9f9076fbe78fb47763d ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain___future__;
        tmp_globals_name_1 = (PyObject *)moduledict_codeop;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_30f66245ba63f9f9076fbe78fb47763d->m_frame.f_lineno = 59;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___future__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___future__ );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___future__ );
            }

            CHECK_OBJECT( tmp_mvar_value_3 );
            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all_feature_names );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;

                goto try_except_handler_1;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_1;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c0583bd2157f8fcbfd07a0e661159c8a_2, codeobj_c0583bd2157f8fcbfd07a0e661159c8a, module_codeop, sizeof(void *) );
        frame_c0583bd2157f8fcbfd07a0e661159c8a_2 = cache_frame_c0583bd2157f8fcbfd07a0e661159c8a_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 61;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_fname;
                outline_0_var_fname = tmp_assign_source_9;
                Py_INCREF( outline_0_var_fname );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_getattr_attr_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___future__ );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___future__ );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__future__" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_2;
            }

            tmp_getattr_target_1 = tmp_mvar_value_4;
            CHECK_OBJECT( outline_0_var_fname );
            tmp_getattr_attr_1 = outline_0_var_fname;
            tmp_append_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_5 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_1;
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
        RESTORE_FRAME_EXCEPTION( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c0583bd2157f8fcbfd07a0e661159c8a_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c0583bd2157f8fcbfd07a0e661159c8a_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c0583bd2157f8fcbfd07a0e661159c8a_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c0583bd2157f8fcbfd07a0e661159c8a_2,
            type_description_2,
            outline_0_var_fname
        );


        // Release cached frame.
        if ( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 == cache_frame_c0583bd2157f8fcbfd07a0e661159c8a_2 )
        {
            Py_DECREF( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 );
        }
        cache_frame_c0583bd2157f8fcbfd07a0e661159c8a_2 = NULL;

        assertFrameObject( frame_c0583bd2157f8fcbfd07a0e661159c8a_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF( outline_0_var_fname );
        outline_0_var_fname = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_fname );
        outline_0_var_fname = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 61;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__features, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_19c6e200958768ca775f6d5ba9f08027_list );
        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_512;
        UPDATE_STRING_DICT0( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_PyCF_DONT_IMPLY_DEDENT, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_codeop$$$function_1__maybe_compile(  );



        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__maybe_compile, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_codeop$$$function_2__compile(  );



        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain__compile, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_angle_input_str_plain_single_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_14 = MAKE_FUNCTION_codeop$$$function_3_compile_command( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_compile_command, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_3;
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


            exception_lineno = 124;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 124;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 124;

            goto try_except_handler_3;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_3;
            }
            tmp_args_name_1 = const_tuple_str_plain_Compile_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_30f66245ba63f9f9076fbe78fb47763d->m_frame.f_lineno = 124;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_3;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_type_arg_1;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 124;

                    goto try_except_handler_3;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 124;

                    goto try_except_handler_3;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 124;

                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 124;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_codeop_124 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_codeop;
        tmp_res = PyObject_SetItem( locals_codeop_124, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_digest_9bfc3f61524b1103560629be807ebed5;
        tmp_res = PyObject_SetItem( locals_codeop_124, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_plain_Compile;
        tmp_res = PyObject_SetItem( locals_codeop_124, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto try_except_handler_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ccdd3ff406c80a5f278e8160d97b06c2_3, codeobj_ccdd3ff406c80a5f278e8160d97b06c2, module_codeop, sizeof(void *) );
        frame_ccdd3ff406c80a5f278e8160d97b06c2_3 = cache_frame_ccdd3ff406c80a5f278e8160d97b06c2_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_codeop$$$function_4___init__(  );



        tmp_res = PyObject_SetItem( locals_codeop_124, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_codeop$$$function_5___call__(  );



        tmp_res = PyObject_SetItem( locals_codeop_124, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ccdd3ff406c80a5f278e8160d97b06c2_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ccdd3ff406c80a5f278e8160d97b06c2_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ccdd3ff406c80a5f278e8160d97b06c2_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ccdd3ff406c80a5f278e8160d97b06c2_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 == cache_frame_ccdd3ff406c80a5f278e8160d97b06c2_3 )
        {
            Py_DECREF( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 );
        }
        cache_frame_ccdd3ff406c80a5f278e8160d97b06c2_3 = NULL;

        assertFrameObject( frame_ccdd3ff406c80a5f278e8160d97b06c2_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_5;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_Compile;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_codeop_124;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_30f66245ba63f9f9076fbe78fb47763d->m_frame.f_lineno = 124;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;

                goto try_except_handler_5;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_19 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_19 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_codeop_124 );
        locals_codeop_124 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF( locals_codeop_124 );
        locals_codeop_124 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 124;
        goto try_except_handler_3;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_Compile, tmp_assign_source_19 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_2:;
        tmp_bases_name_2 = const_tuple_empty;
        tmp_assign_source_22 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_6;
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


            exception_lineno = 139;

            goto try_except_handler_6;
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
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_6;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_6 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_7 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;

                goto try_except_handler_6;
            }
            tmp_args_name_3 = const_tuple_str_plain_CommandCompiler_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_30f66245ba63f9f9076fbe78fb47763d->m_frame.f_lineno = 139;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;

                goto try_except_handler_6;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_8;
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


                exception_lineno = 139;

                goto try_except_handler_6;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_2 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 139;

                    goto try_except_handler_6;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_2 = tmp_class_creation_2__prepared;
                tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_9 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 139;

                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 139;

                    goto try_except_handler_6;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 139;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_codeop_139 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_codeop;
        tmp_res = PyObject_SetItem( locals_codeop_139, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_digest_84c748258673e693e7d6c548c9a4a763;
        tmp_res = PyObject_SetItem( locals_codeop_139, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_plain_CommandCompiler;
        tmp_res = PyObject_SetItem( locals_codeop_139, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto try_except_handler_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_80538bee98fbc0cedb6416c65e2c8c79_4, codeobj_80538bee98fbc0cedb6416c65e2c8c79, module_codeop, sizeof(void *) );
        frame_80538bee98fbc0cedb6416c65e2c8c79_4 = cache_frame_80538bee98fbc0cedb6416c65e2c8c79_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_80538bee98fbc0cedb6416c65e2c8c79_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_80538bee98fbc0cedb6416c65e2c8c79_4 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_codeop$$$function_6___init__(  );



        tmp_res = PyObject_SetItem( locals_codeop_139, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_str_angle_input_str_plain_single_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_codeop$$$function_7___call__( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_codeop_139, const_str_plain___call__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_80538bee98fbc0cedb6416c65e2c8c79_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_80538bee98fbc0cedb6416c65e2c8c79_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_80538bee98fbc0cedb6416c65e2c8c79_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_80538bee98fbc0cedb6416c65e2c8c79_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_80538bee98fbc0cedb6416c65e2c8c79_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_80538bee98fbc0cedb6416c65e2c8c79_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_80538bee98fbc0cedb6416c65e2c8c79_4 == cache_frame_80538bee98fbc0cedb6416c65e2c8c79_4 )
        {
            Py_DECREF( frame_80538bee98fbc0cedb6416c65e2c8c79_4 );
        }
        cache_frame_80538bee98fbc0cedb6416c65e2c8c79_4 = NULL;

        assertFrameObject( frame_80538bee98fbc0cedb6416c65e2c8c79_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_8;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = const_str_plain_CommandCompiler;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_codeop_139;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_30f66245ba63f9f9076fbe78fb47763d->m_frame.f_lineno = 139;
            tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;

                goto try_except_handler_8;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_25 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_codeop_139 );
        locals_codeop_139 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF( locals_codeop_139 );
        locals_codeop_139 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( codeop );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 139;
        goto try_except_handler_6;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_codeop, (Nuitka_StringObject *)const_str_plain_CommandCompiler, tmp_assign_source_25 );
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30f66245ba63f9f9076fbe78fb47763d );
#endif
    popFrameStack();

    assertFrameObject( frame_30f66245ba63f9f9076fbe78fb47763d );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30f66245ba63f9f9076fbe78fb47763d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30f66245ba63f9f9076fbe78fb47763d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30f66245ba63f9f9076fbe78fb47763d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30f66245ba63f9f9076fbe78fb47763d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_codeop, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_codeop );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
