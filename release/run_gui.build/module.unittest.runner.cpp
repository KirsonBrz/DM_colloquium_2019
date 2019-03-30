/* Generated code for Python module 'unittest.runner'
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

/* The "_module_unittest$runner" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_unittest$runner;
PyDictObject *moduledict_unittest$runner;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_OK;
extern PyObject *const_str_plain_startTestRun;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_run;
static PyObject *const_str_plain__makeResult;
static PyObject *const_tuple_str_plain_FAILED_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_0059be61886b864277f0233588d6f2ec;
extern PyObject *const_str_plain_tb_locals;
extern PyObject *const_str_plain_catch_warnings;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_2f893737375e66b2912f5e4e995e9501;
static PyObject *const_str_digest_80dfe6bb05ce2bda36fb6d2337699e05;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_test;
static PyObject *const_str_digest_031ce08d1e2b65d018c471f982b8c7cf;
static PyObject *const_str_plain_stopTime;
static PyObject *const_str_plain__WritelnDecorator;
extern PyObject *const_tuple_str_plain_result_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_digest_6b44dccc5d50a0d4c5230fbe9b4118e2;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple;
static PyObject *const_tuple_852a15543b20141f8b3de8b380d51766_tuple;
extern PyObject *const_str_plain_results;
extern PyObject *const_str_plain_failed;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_4a34a7c60f9b31bfee521ddc315b45b0;
extern PyObject *const_str_plain_failfast;
extern PyObject *const_str_plain_arg;
static PyObject *const_tuple_str_plain_F_tuple;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
static PyObject *const_str_digest_6fbf12ba9655daf1fa9f85564cf783e3;
extern PyObject *const_str_plain_err;
static PyObject *const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple;
extern PyObject *const_str_plain_descriptions;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_stream_tuple;
extern PyObject *const_str_plain_addSuccess;
static PyObject *const_str_plain_showAll;
static PyObject *const_tuple_str_plain_E_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_startTest;
static PyObject *const_str_digest_df8eaa2624bb1b7a5980f7508984563b;
static PyObject *const_str_digest_0714924b2333d70a5ab5d6e04e58bb32;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_419c8318f30d139d2cd92f3651e5f5f4;
static PyObject *const_tuple_str_plain_module_tuple;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_unexpectedSuccesses;
static PyObject *const_str_digest_1227b7e3b9f0fc7c472890ed7d0035c6;
extern PyObject *const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_timeTaken;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_a55462f7a98327dd68675e0c49b4edce;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_separator2;
static PyObject *const_tuple_str_plain_self_str_plain_test_str_plain_doc_first_line_tuple;
extern PyObject *const_str_plain_expectedFailures;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_len;
static PyObject *const_str_digest_c92d9cfee012c7d0fb0f731356514857;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_d53a970984e742662f6313e77e9b5a74;
extern PyObject *const_str_plain_skipped;
extern PyObject *const_str_plain_registerResult;
static PyObject *const_tuple_str_plain_stream_str_plain___getstate___tuple;
extern PyObject *const_str_plain_filterwarnings;
extern PyObject *const_dict_b37af4b575922eb1e810c57b613c4d62;
extern PyObject *const_str_plain_writeln;
static PyObject *const_str_digest_1d659c26c34ca4d786f9d80252cc031a;
static PyObject *const_str_plain_doc_first_line;
static PyObject *const_str_plain_printErrorList;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple;
extern PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_plain_getDescription;
static PyObject *const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple;
extern PyObject *const_str_plain_message;
static PyObject *const_str_digest_dba623d2296130c023c3b72d6195c609;
static PyObject *const_str_digest_214e24916a1375c40688a8c8e171c7eb;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain_FAIL;
extern PyObject *const_tuple_str_newline_tuple;
static PyObject *const_str_digest_26bbc77e4ad65e25c927ca7beeebdd95;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_addFailure;
extern PyObject *const_str_plain___getattr__;
extern PyObject *const_str_digest_56ba0b0039dcafb80583c021ac6f64cc;
extern PyObject *const_str_plain_TextTestRunner;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_stderr;
static PyObject *const_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336;
extern PyObject *const_str_plain_addUnexpectedSuccess;
static PyObject *const_str_digest_f6b3f8e7b826546ff4a1147cc5c31194;
static PyObject *const_str_digest_ca23a0c870e9b5f21868c581aa50c7ca;
extern PyObject *const_str_plain_errors;
static PyObject *const_tuple_str_digest_4a34a7c60f9b31bfee521ddc315b45b0_tuple;
extern PyObject *const_str_plain_TextTestResult;
extern PyObject *const_str_plain_attr;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_always;
static PyObject *const_tuple_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336_tuple;
static PyObject *const_str_digest_785b4d8459a7658d135979e57a59a121;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___unittest;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_stream;
static PyObject *const_str_plain_separator1;
extern PyObject *const_str_plain_verbosity;
static PyObject *const_str_digest_ed865518f148a60549bf099d2d4a6256;
extern PyObject *const_str_plain_addExpectedFailure;
static PyObject *const_str_plain_errored;
extern PyObject *const_str_plain_printErrors;
static PyObject *const_tuple_str_plain_ERROR_tuple;
static PyObject *const_str_digest_430cb825a6c86eb89bc48dc8bb7de21e;
extern PyObject *const_str_plain_stopTestRun;
static PyObject *const_tuple_07111869915670c43a9cb96e15d4179a_tuple;
static PyObject *const_str_plain_expectedFails;
extern PyObject *const_int_0;
static PyObject *const_str_digest_fd99c95f7497a1dd9f070a30beec7182;
static PyObject *const_str_digest_b17ae37408d1c375425d6ebb78963b82;
static PyObject *const_str_plain_infos;
extern PyObject *const_str_plain_ok;
static PyObject *const_str_plain_flavour;
static PyObject *const_str_plain_F;
extern PyObject *const_str_plain_perf_counter;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
static PyObject *const_str_digest_d911dd70ef894e10f9d4e5740e74a7c9;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_3da8e543433bf9dfebcffd2179f4e9c5;
static PyObject *const_str_digest_e688ca63452391cc1fd4e86923d06fb4;
extern PyObject *const_str_plain_failures;
static PyObject *const_str_digest_d031844ee5500d76f96c551777170a1e;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_tuple_none_true_int_pos_1_false_false_none_none_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_digest_2788a002cae5ee37b33129e37d8173d7;
static PyObject *const_str_plain_FAILED;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_self_str_plain_arg_tuple;
static PyObject *const_str_digest_3cff51ad1df713439f49d64d519be6e8;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_2e22166132008ecd7e5120fbec66108d;
extern PyObject *const_str_plain_addSkip;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_ok_tuple;
extern PyObject *const_str_plain_wasSuccessful;
static PyObject *const_str_digest_db3bfe8bec302e6eee8c39d83a4ac0ba;
static PyObject *const_str_digest_809e20e62ca19afe17d717fe3110c341;
extern PyObject *const_str_plain_addError;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_testsRun;
static PyObject *const_tuple_str_plain_registerResult_tuple;
static PyObject *const_str_digest_6f0330d7147529b28e3800c02ecfc051;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_str_plain_signals;
static PyObject *const_tuple_str_plain_OK_tuple;
static PyObject *const_str_digest_16486fc0cf53ad3dd6e7aa407c3acf2b;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_dots;
static PyObject *const_str_plain_startTime;
extern PyObject *const_str_plain_write;
extern PyObject *const_tuple_str_plain_self_str_plain_attr_tuple;
extern PyObject *const_str_plain_module;
static PyObject *const_list_str_plain_default_str_plain_always_list;
extern PyObject *const_str_plain_shortDescription;
static PyObject *const_tuple_str_plain_u_tuple;
static PyObject *const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1_tuple;
static PyObject *const_str_plain_E;
static PyObject *const_tuple_str_plain_FAIL_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_1fec95c9c8304187f6d14220b05935e1;
static PyObject *const_str_plain_resultclass;
extern PyObject *const_str_plain_TestResult;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__makeResult = UNSTREAM_STRING_ASCII( &constant_bin[ 1128045 ], 11, 1 );
    const_tuple_str_plain_FAILED_tuple = PyTuple_New( 1 );
    const_str_plain_FAILED = UNSTREAM_STRING_ASCII( &constant_bin[ 355726 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FAILED_tuple, 0, const_str_plain_FAILED ); Py_INCREF( const_str_plain_FAILED );
    const_str_digest_0059be61886b864277f0233588d6f2ec = UNSTREAM_STRING_ASCII( &constant_bin[ 1128056 ], 29, 0 );
    const_str_digest_2f893737375e66b2912f5e4e995e9501 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128085 ], 18, 0 );
    const_str_digest_80dfe6bb05ce2bda36fb6d2337699e05 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128103 ], 29, 0 );
    const_str_digest_031ce08d1e2b65d018c471f982b8c7cf = UNSTREAM_STRING_ASCII( &constant_bin[ 1128132 ], 23, 0 );
    const_str_plain_stopTime = UNSTREAM_STRING_ASCII( &constant_bin[ 1128155 ], 8, 1 );
    const_str_plain__WritelnDecorator = UNSTREAM_STRING_ASCII( &constant_bin[ 1128163 ], 17, 1 );
    const_str_digest_6b44dccc5d50a0d4c5230fbe9b4118e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128180 ], 15, 0 );
    const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 2, const_str_plain_descriptions ); Py_INCREF( const_str_plain_descriptions );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 3, const_str_plain_verbosity ); Py_INCREF( const_str_plain_verbosity );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 4, const_str_plain_failfast ); Py_INCREF( const_str_plain_failfast );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 5, const_str_plain_buffer ); Py_INCREF( const_str_plain_buffer );
    const_str_plain_resultclass = UNSTREAM_STRING_ASCII( &constant_bin[ 1128195 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 6, const_str_plain_resultclass ); Py_INCREF( const_str_plain_resultclass );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 7, const_str_plain_warnings ); Py_INCREF( const_str_plain_warnings );
    PyTuple_SET_ITEM( const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 8, const_str_plain_tb_locals ); Py_INCREF( const_str_plain_tb_locals );
    const_tuple_852a15543b20141f8b3de8b380d51766_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_852a15543b20141f8b3de8b380d51766_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_flavour = UNSTREAM_STRING_ASCII( &constant_bin[ 1128206 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_852a15543b20141f8b3de8b380d51766_tuple, 1, const_str_plain_flavour ); Py_INCREF( const_str_plain_flavour );
    PyTuple_SET_ITEM( const_tuple_852a15543b20141f8b3de8b380d51766_tuple, 2, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyTuple_SET_ITEM( const_tuple_852a15543b20141f8b3de8b380d51766_tuple, 3, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_852a15543b20141f8b3de8b380d51766_tuple, 4, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_digest_4a34a7c60f9b31bfee521ddc315b45b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 1127315 ], 16, 0 );
    const_tuple_str_plain_F_tuple = PyTuple_New( 1 );
    const_str_plain_F = UNSTREAM_STRING_ASCII( &constant_bin[ 278 ], 1, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_F_tuple, 0, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    const_str_digest_6fbf12ba9655daf1fa9f85564cf783e3 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128213 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1 = UNSTREAM_STRING_ASCII( &constant_bin[ 88489 ], 5, 0 );
    const_str_plain_showAll = UNSTREAM_STRING_ASCII( &constant_bin[ 1128239 ], 7, 1 );
    const_tuple_str_plain_E_tuple = PyTuple_New( 1 );
    const_str_plain_E = UNSTREAM_STRING_ASCII( &constant_bin[ 13 ], 1, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_E_tuple, 0, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    const_str_digest_df8eaa2624bb1b7a5980f7508984563b = UNSTREAM_STRING_ASCII( &constant_bin[ 1128246 ], 18, 0 );
    const_str_digest_0714924b2333d70a5ab5d6e04e58bb32 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128264 ], 22, 0 );
    const_str_digest_419c8318f30d139d2cd92f3651e5f5f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128286 ], 13, 0 );
    const_tuple_str_plain_module_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_tuple, 0, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    const_str_digest_1227b7e3b9f0fc7c472890ed7d0035c6 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128299 ], 25, 0 );
    const_str_plain_timeTaken = UNSTREAM_STRING_ASCII( &constant_bin[ 1128324 ], 9, 1 );
    const_str_digest_a55462f7a98327dd68675e0c49b4edce = UNSTREAM_STRING_ASCII( &constant_bin[ 1128333 ], 23, 0 );
    const_str_plain_separator2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128356 ], 10, 1 );
    const_tuple_str_plain_self_str_plain_test_str_plain_doc_first_line_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_test_str_plain_doc_first_line_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_test_str_plain_doc_first_line_tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_str_plain_doc_first_line = UNSTREAM_STRING_ASCII( &constant_bin[ 1128366 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_test_str_plain_doc_first_line_tuple, 2, const_str_plain_doc_first_line ); Py_INCREF( const_str_plain_doc_first_line );
    const_str_digest_c92d9cfee012c7d0fb0f731356514857 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128380 ], 24, 0 );
    const_str_digest_d53a970984e742662f6313e77e9b5a74 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128404 ], 35, 0 );
    const_tuple_str_plain_stream_str_plain___getstate___tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain___getstate___tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain___getstate___tuple, 1, const_str_plain___getstate__ ); Py_INCREF( const_str_plain___getstate__ );
    const_str_digest_1d659c26c34ca4d786f9d80252cc031a = UNSTREAM_STRING_ASCII( &constant_bin[ 1128439 ], 201, 0 );
    const_str_plain_printErrorList = UNSTREAM_STRING_ASCII( &constant_bin[ 1128118 ], 14, 1 );
    const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_startTime = UNSTREAM_STRING_ASCII( &constant_bin[ 401936 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 3, const_str_plain_startTime ); Py_INCREF( const_str_plain_startTime );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 4, const_str_plain_startTestRun ); Py_INCREF( const_str_plain_startTestRun );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 5, const_str_plain_stopTestRun ); Py_INCREF( const_str_plain_stopTestRun );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 6, const_str_plain_stopTime ); Py_INCREF( const_str_plain_stopTime );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 7, const_str_plain_timeTaken ); Py_INCREF( const_str_plain_timeTaken );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 8, const_str_plain_run ); Py_INCREF( const_str_plain_run );
    const_str_plain_expectedFails = UNSTREAM_STRING_ASCII( &constant_bin[ 1128640 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 9, const_str_plain_expectedFails ); Py_INCREF( const_str_plain_expectedFails );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 10, const_str_plain_unexpectedSuccesses ); Py_INCREF( const_str_plain_unexpectedSuccesses );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 11, const_str_plain_skipped ); Py_INCREF( const_str_plain_skipped );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 12, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    const_str_plain_infos = UNSTREAM_STRING_ASCII( &constant_bin[ 525694 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 13, const_str_plain_infos ); Py_INCREF( const_str_plain_infos );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 14, const_str_plain_failed ); Py_INCREF( const_str_plain_failed );
    const_str_plain_errored = UNSTREAM_STRING_ASCII( &constant_bin[ 1101725 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 15, const_str_plain_errored ); Py_INCREF( const_str_plain_errored );
    const_str_plain_getDescription = UNSTREAM_STRING_ASCII( &constant_bin[ 1128653 ], 14, 1 );
    const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple, 2, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_dba623d2296130c023c3b72d6195c609 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128667 ], 24, 0 );
    const_str_digest_214e24916a1375c40688a8c8e171c7eb = UNSTREAM_STRING_ASCII( &constant_bin[ 1128691 ], 10, 0 );
    const_str_plain_FAIL = UNSTREAM_STRING_ASCII( &constant_bin[ 137497 ], 4, 1 );
    const_str_digest_26bbc77e4ad65e25c927ca7beeebdd95 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128701 ], 11, 0 );
    const_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128333 ], 18, 0 );
    const_str_digest_f6b3f8e7b826546ff4a1147cc5c31194 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128712 ], 29, 0 );
    const_str_digest_ca23a0c870e9b5f21868c581aa50c7ca = UNSTREAM_STRING_ASCII( &constant_bin[ 1128741 ], 38, 0 );
    const_tuple_str_digest_4a34a7c60f9b31bfee521ddc315b45b0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4a34a7c60f9b31bfee521ddc315b45b0_tuple, 0, const_str_digest_4a34a7c60f9b31bfee521ddc315b45b0 ); Py_INCREF( const_str_digest_4a34a7c60f9b31bfee521ddc315b45b0 );
    const_tuple_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336_tuple, 0, const_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336 ); Py_INCREF( const_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336 );
    const_str_digest_785b4d8459a7658d135979e57a59a121 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128779 ], 23, 0 );
    const_str_plain_separator1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128802 ], 10, 1 );
    const_str_digest_ed865518f148a60549bf099d2d4a6256 = UNSTREAM_STRING_ASCII( &constant_bin[ 655742 ], 70, 0 );
    const_tuple_str_plain_ERROR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ERROR_tuple, 0, const_str_plain_ERROR ); Py_INCREF( const_str_plain_ERROR );
    const_str_digest_430cb825a6c86eb89bc48dc8bb7de21e = UNSTREAM_STRING_ASCII( &constant_bin[ 1128812 ], 33, 0 );
    const_tuple_07111869915670c43a9cb96e15d4179a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_07111869915670c43a9cb96e15d4179a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_07111869915670c43a9cb96e15d4179a_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_07111869915670c43a9cb96e15d4179a_tuple, 2, const_str_plain_descriptions ); Py_INCREF( const_str_plain_descriptions );
    PyTuple_SET_ITEM( const_tuple_07111869915670c43a9cb96e15d4179a_tuple, 3, const_str_plain_verbosity ); Py_INCREF( const_str_plain_verbosity );
    PyTuple_SET_ITEM( const_tuple_07111869915670c43a9cb96e15d4179a_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_fd99c95f7497a1dd9f070a30beec7182 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128845 ], 25, 0 );
    const_str_digest_b17ae37408d1c375425d6ebb78963b82 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128870 ], 20, 0 );
    const_str_digest_d911dd70ef894e10f9d4e5740e74a7c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128890 ], 64, 0 );
    const_str_digest_3da8e543433bf9dfebcffd2179f4e9c5 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128954 ], 26, 0 );
    const_str_digest_e688ca63452391cc1fd4e86923d06fb4 = UNSTREAM_STRING_ASCII( &constant_bin[ 1128980 ], 13, 0 );
    const_str_digest_d031844ee5500d76f96c551777170a1e = UNSTREAM_STRING_ASCII( &constant_bin[ 1128993 ], 9, 0 );
    const_tuple_none_true_int_pos_1_false_false_none_none_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_true_int_pos_1_false_false_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    const_str_digest_3cff51ad1df713439f49d64d519be6e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1129002 ], 22, 0 );
    const_str_digest_2e22166132008ecd7e5120fbec66108d = UNSTREAM_STRING_ASCII( &constant_bin[ 1129024 ], 104, 0 );
    const_tuple_str_plain_ok_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ok_tuple, 0, const_str_plain_ok ); Py_INCREF( const_str_plain_ok );
    const_str_digest_db3bfe8bec302e6eee8c39d83a4ac0ba = UNSTREAM_STRING_ASCII( &constant_bin[ 1129128 ], 25, 0 );
    const_str_digest_809e20e62ca19afe17d717fe3110c341 = UNSTREAM_STRING_ASCII( &constant_bin[ 1129153 ], 26, 0 );
    const_tuple_str_plain_registerResult_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_registerResult_tuple, 0, const_str_plain_registerResult ); Py_INCREF( const_str_plain_registerResult );
    const_str_digest_6f0330d7147529b28e3800c02ecfc051 = UNSTREAM_STRING_ASCII( &constant_bin[ 1129179 ], 23, 0 );
    const_tuple_str_plain_OK_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OK_tuple, 0, const_str_plain_OK ); Py_INCREF( const_str_plain_OK );
    const_str_digest_16486fc0cf53ad3dd6e7aa407c3acf2b = UNSTREAM_STRING_ASCII( &constant_bin[ 1129202 ], 29, 0 );
    const_str_plain_dots = UNSTREAM_STRING_ASCII( &constant_bin[ 323022 ], 4, 1 );
    const_list_str_plain_default_str_plain_always_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_default_str_plain_always_list, 0, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyList_SET_ITEM( const_list_str_plain_default_str_plain_always_list, 1, const_str_plain_always ); Py_INCREF( const_str_plain_always );
    const_tuple_str_plain_u_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_u_tuple, 0, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 2, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    PyTuple_SET_ITEM( const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1_tuple, 0, const_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1 ); Py_INCREF( const_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1 );
    const_tuple_str_plain_FAIL_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FAIL_tuple, 0, const_str_plain_FAIL ); Py_INCREF( const_str_plain_FAIL );
    const_str_digest_1fec95c9c8304187f6d14220b05935e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1129231 ], 137, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_unittest$runner( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1ee68f9834265d6226e6e2e37d4f8e01;
static PyCodeObject *codeobj_07ee870063087124314b35608af05344;
static PyCodeObject *codeobj_0e5b7732e779b87c064dd94afc8a9c9d;
static PyCodeObject *codeobj_fc08b615f86fbf6c56aec98b1eb3a363;
static PyCodeObject *codeobj_e0aa6a8162d0674f810035c5588d4703;
static PyCodeObject *codeobj_db3659ab693b737427edae60bd39e17e;
static PyCodeObject *codeobj_05f53f4c0532ca84e09dcb4d3a86ed44;
static PyCodeObject *codeobj_d701858e16f73abbfdd3c31709811fde;
static PyCodeObject *codeobj_19bf576d2b145ad83640bbaffdcf90db;
static PyCodeObject *codeobj_8b543e1489718e2921d0876546e28b36;
static PyCodeObject *codeobj_e9323853a1f5c151f835d115c0e73b5e;
static PyCodeObject *codeobj_87bf6b7166fea47730ff9f241d9a4126;
static PyCodeObject *codeobj_d04be0b39f8d5880515ec7e8745aff2b;
static PyCodeObject *codeobj_07a1a943240f2db9f12ff41e4124a496;
static PyCodeObject *codeobj_3ebbe9bc8dc3d49b784927a2e8e290c4;
static PyCodeObject *codeobj_7d3e66d1cd6c3140f4525b90b784c18c;
static PyCodeObject *codeobj_f851e49d6c5b584407d48f8255be8440;
static PyCodeObject *codeobj_81da75ff83c4f21f37d4c90ad30f31a7;
static PyCodeObject *codeobj_656470bdf92200fc016f5ad182f0e25d;
static PyCodeObject *codeobj_62256611a895766e3b30017dc80aa35c;
static PyCodeObject *codeobj_84e6a772c02f8f26a1db36afa15cdf08;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_df8eaa2624bb1b7a5980f7508984563b );
    codeobj_1ee68f9834265d6226e6e2e37d4f8e01 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c92d9cfee012c7d0fb0f731356514857, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_07ee870063087124314b35608af05344 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TextTestResult, 29, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0e5b7732e779b87c064dd94afc8a9c9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TextTestRunner, 120, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_fc08b615f86fbf6c56aec98b1eb3a363 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__WritelnDecorator, 13, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e0aa6a8162d0674f810035c5588d4703 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 18, const_tuple_str_plain_self_str_plain_attr_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_db3659ab693b737427edae60bd39e17e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 15, const_tuple_str_plain_self_str_plain_stream_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05f53f4c0532ca84e09dcb4d3a86ed44 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_07111869915670c43a9cb96e15d4179a_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d701858e16f73abbfdd3c31709811fde = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 128, const_tuple_a28a7b9104abdbc3091d94df3c6fa403_tuple, 8, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19bf576d2b145ad83640bbaffdcf90db = MAKE_CODEOBJ( module_filename_obj, const_str_plain__makeResult, 148, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b543e1489718e2921d0876546e28b36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addError, 66, const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e9323853a1f5c151f835d115c0e73b5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addExpectedFailure, 90, const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_87bf6b7166fea47730ff9f241d9a4126 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addFailure, 74, const_tuple_b1848f5360208dfb1bdb8956cb447976_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d04be0b39f8d5880515ec7e8745aff2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addSkip, 82, const_tuple_b444e79ad8d86ea03b544104ae6bebfb_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_07a1a943240f2db9f12ff41e4124a496 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addSuccess, 58, const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3ebbe9bc8dc3d49b784927a2e8e290c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addUnexpectedSuccess, 98, const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_7d3e66d1cd6c3140f4525b90b784c18c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getDescription, 44, const_tuple_str_plain_self_str_plain_test_str_plain_doc_first_line_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f851e49d6c5b584407d48f8255be8440 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_printErrorList, 112, const_tuple_852a15543b20141f8b3de8b380d51766_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81da75ff83c4f21f37d4c90ad30f31a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_printErrors, 106, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_656470bdf92200fc016f5ad182f0e25d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 151, const_tuple_ba1bd12ce83848bbdc3da3d0572d6e2a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62256611a895766e3b30017dc80aa35c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_startTest, 51, const_tuple_str_plain_self_str_plain_test_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_84e6a772c02f8f26a1db36afa15cdf08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_writeln, 23, const_tuple_str_plain_self_str_plain_arg_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_10_addSkip(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_11_addExpectedFailure(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_12_addUnexpectedSuccess(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_13_printErrors(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_14_printErrorList(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_15___init__( PyObject *defaults, PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_16__makeResult(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_17_run(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_2___getattr__(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_3_writeln( PyObject *defaults );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_5_getDescription(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_6_startTest(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_7_addSuccess(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_8_addError(  );


static PyObject *MAKE_FUNCTION_unittest$runner$$$function_9_addFailure(  );


// The module function definitions.
static PyObject *impl_unittest$runner$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_db3659ab693b737427edae60bd39e17e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db3659ab693b737427edae60bd39e17e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db3659ab693b737427edae60bd39e17e, codeobj_db3659ab693b737427edae60bd39e17e, module_unittest$runner, sizeof(void *)+sizeof(void *) );
    frame_db3659ab693b737427edae60bd39e17e = cache_frame_db3659ab693b737427edae60bd39e17e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db3659ab693b737427edae60bd39e17e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db3659ab693b737427edae60bd39e17e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_stream );
        tmp_assattr_name_1 = par_stream;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stream, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db3659ab693b737427edae60bd39e17e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db3659ab693b737427edae60bd39e17e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db3659ab693b737427edae60bd39e17e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db3659ab693b737427edae60bd39e17e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db3659ab693b737427edae60bd39e17e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db3659ab693b737427edae60bd39e17e,
        type_description_1,
        par_self,
        par_stream
    );


    // Release cached frame.
    if ( frame_db3659ab693b737427edae60bd39e17e == cache_frame_db3659ab693b737427edae60bd39e17e )
    {
        Py_DECREF( frame_db3659ab693b737427edae60bd39e17e );
    }
    cache_frame_db3659ab693b737427edae60bd39e17e = NULL;

    assertFrameObject( frame_db3659ab693b737427edae60bd39e17e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

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

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_1___init__ );
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


static PyObject *impl_unittest$runner$$$function_2___getattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_attr = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e0aa6a8162d0674f810035c5588d4703;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e0aa6a8162d0674f810035c5588d4703 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0aa6a8162d0674f810035c5588d4703, codeobj_e0aa6a8162d0674f810035c5588d4703, module_unittest$runner, sizeof(void *)+sizeof(void *) );
    frame_e0aa6a8162d0674f810035c5588d4703 = cache_frame_e0aa6a8162d0674f810035c5588d4703;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0aa6a8162d0674f810035c5588d4703 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0aa6a8162d0674f810035c5588d4703 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_attr );
        tmp_compexpr_left_1 = par_attr;
        tmp_compexpr_right_1 = const_tuple_str_plain_stream_str_plain___getstate___tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            CHECK_OBJECT( par_attr );
            tmp_make_exception_arg_1 = par_attr;
            frame_e0aa6a8162d0674f810035c5588d4703->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AttributeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 20;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stream );
        if ( tmp_getattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_attr );
        tmp_getattr_attr_1 = par_attr;
        tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        Py_DECREF( tmp_getattr_target_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0aa6a8162d0674f810035c5588d4703 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0aa6a8162d0674f810035c5588d4703 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0aa6a8162d0674f810035c5588d4703 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0aa6a8162d0674f810035c5588d4703, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0aa6a8162d0674f810035c5588d4703->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0aa6a8162d0674f810035c5588d4703, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e0aa6a8162d0674f810035c5588d4703,
        type_description_1,
        par_self,
        par_attr
    );


    // Release cached frame.
    if ( frame_e0aa6a8162d0674f810035c5588d4703 == cache_frame_e0aa6a8162d0674f810035c5588d4703 )
    {
        Py_DECREF( frame_e0aa6a8162d0674f810035c5588d4703 );
    }
    cache_frame_e0aa6a8162d0674f810035c5588d4703 = NULL;

    assertFrameObject( frame_e0aa6a8162d0674f810035c5588d4703 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_2___getattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_attr );
    Py_DECREF( par_attr );
    par_attr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_attr );
    Py_DECREF( par_attr );
    par_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_2___getattr__ );
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


static PyObject *impl_unittest$runner$$$function_3_writeln( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arg = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_84e6a772c02f8f26a1db36afa15cdf08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84e6a772c02f8f26a1db36afa15cdf08 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_84e6a772c02f8f26a1db36afa15cdf08, codeobj_84e6a772c02f8f26a1db36afa15cdf08, module_unittest$runner, sizeof(void *)+sizeof(void *) );
    frame_84e6a772c02f8f26a1db36afa15cdf08 = cache_frame_84e6a772c02f8f26a1db36afa15cdf08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_84e6a772c02f8f26a1db36afa15cdf08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_84e6a772c02f8f26a1db36afa15cdf08 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_arg );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_arg );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_arg );
            tmp_args_element_name_1 = par_arg;
            frame_84e6a772c02f8f26a1db36afa15cdf08->m_frame.f_lineno = 25;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_84e6a772c02f8f26a1db36afa15cdf08->m_frame.f_lineno = 26;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_84e6a772c02f8f26a1db36afa15cdf08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_84e6a772c02f8f26a1db36afa15cdf08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_84e6a772c02f8f26a1db36afa15cdf08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_84e6a772c02f8f26a1db36afa15cdf08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_84e6a772c02f8f26a1db36afa15cdf08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_84e6a772c02f8f26a1db36afa15cdf08,
        type_description_1,
        par_self,
        par_arg
    );


    // Release cached frame.
    if ( frame_84e6a772c02f8f26a1db36afa15cdf08 == cache_frame_84e6a772c02f8f26a1db36afa15cdf08 )
    {
        Py_DECREF( frame_84e6a772c02f8f26a1db36afa15cdf08 );
    }
    cache_frame_84e6a772c02f8f26a1db36afa15cdf08 = NULL;

    assertFrameObject( frame_84e6a772c02f8f26a1db36afa15cdf08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_3_writeln );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_3_writeln );
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


static PyObject *impl_unittest$runner$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_descriptions = python_pars[ 2 ];
    PyObject *par_verbosity = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_05f53f4c0532ca84e09dcb4d3a86ed44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_05f53f4c0532ca84e09dcb4d3a86ed44 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05f53f4c0532ca84e09dcb4d3a86ed44, codeobj_05f53f4c0532ca84e09dcb4d3a86ed44, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_05f53f4c0532ca84e09dcb4d3a86ed44 = cache_frame_05f53f4c0532ca84e09dcb4d3a86ed44;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05f53f4c0532ca84e09dcb4d3a86ed44 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05f53f4c0532ca84e09dcb4d3a86ed44 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_stream );
        tmp_args_element_name_1 = par_stream;
        CHECK_OBJECT( par_descriptions );
        tmp_args_element_name_2 = par_descriptions;
        CHECK_OBJECT( par_verbosity );
        tmp_args_element_name_3 = par_verbosity;
        frame_05f53f4c0532ca84e09dcb4d3a86ed44->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_stream );
        tmp_assattr_name_1 = par_stream;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stream, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_verbosity );
        tmp_compexpr_left_1 = par_verbosity;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_assattr_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_showAll, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_verbosity );
        tmp_compexpr_left_2 = par_verbosity;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_assattr_name_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_dots, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_descriptions );
        tmp_assattr_name_4 = par_descriptions;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_descriptions, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05f53f4c0532ca84e09dcb4d3a86ed44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05f53f4c0532ca84e09dcb4d3a86ed44 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05f53f4c0532ca84e09dcb4d3a86ed44, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05f53f4c0532ca84e09dcb4d3a86ed44->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05f53f4c0532ca84e09dcb4d3a86ed44, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05f53f4c0532ca84e09dcb4d3a86ed44,
        type_description_1,
        par_self,
        par_stream,
        par_descriptions,
        par_verbosity,
        NULL
    );


    // Release cached frame.
    if ( frame_05f53f4c0532ca84e09dcb4d3a86ed44 == cache_frame_05f53f4c0532ca84e09dcb4d3a86ed44 )
    {
        Py_DECREF( frame_05f53f4c0532ca84e09dcb4d3a86ed44 );
    }
    cache_frame_05f53f4c0532ca84e09dcb4d3a86ed44 = NULL;

    assertFrameObject( frame_05f53f4c0532ca84e09dcb4d3a86ed44 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_descriptions );
    Py_DECREF( par_descriptions );
    par_descriptions = NULL;

    CHECK_OBJECT( (PyObject *)par_verbosity );
    Py_DECREF( par_verbosity );
    par_verbosity = NULL;

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

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_descriptions );
    Py_DECREF( par_descriptions );
    par_descriptions = NULL;

    CHECK_OBJECT( (PyObject *)par_verbosity );
    Py_DECREF( par_verbosity );
    par_verbosity = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_4___init__ );
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


static PyObject *impl_unittest$runner$$$function_5_getDescription( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *var_doc_first_line = NULL;
    struct Nuitka_FrameObject *frame_7d3e66d1cd6c3140f4525b90b784c18c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d3e66d1cd6c3140f4525b90b784c18c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d3e66d1cd6c3140f4525b90b784c18c, codeobj_7d3e66d1cd6c3140f4525b90b784c18c, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7d3e66d1cd6c3140f4525b90b784c18c = cache_frame_7d3e66d1cd6c3140f4525b90b784c18c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d3e66d1cd6c3140f4525b90b784c18c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d3e66d1cd6c3140f4525b90b784c18c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_test );
        tmp_called_instance_1 = par_test;
        frame_7d3e66d1cd6c3140f4525b90b784c18c->m_frame.f_lineno = 45;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_shortDescription );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_doc_first_line == NULL );
        var_doc_first_line = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_descriptions );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
        CHECK_OBJECT( var_doc_first_line );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_doc_first_line );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_unicode_arg_1;
            tmp_source_name_2 = const_str_newline;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
            assert( !(tmp_called_name_1 == NULL) );
            CHECK_OBJECT( par_test );
            tmp_unicode_arg_1 = par_test;
            tmp_tuple_element_1 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 47;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_doc_first_line );
            tmp_tuple_element_1 = var_doc_first_line;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
            frame_7d3e66d1cd6c3140f4525b90b784c18c->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_unicode_arg_2;
            CHECK_OBJECT( par_test );
            tmp_unicode_arg_2 = par_test;
            tmp_return_value = PyObject_Unicode( tmp_unicode_arg_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d3e66d1cd6c3140f4525b90b784c18c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d3e66d1cd6c3140f4525b90b784c18c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d3e66d1cd6c3140f4525b90b784c18c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d3e66d1cd6c3140f4525b90b784c18c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d3e66d1cd6c3140f4525b90b784c18c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d3e66d1cd6c3140f4525b90b784c18c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d3e66d1cd6c3140f4525b90b784c18c,
        type_description_1,
        par_self,
        par_test,
        var_doc_first_line
    );


    // Release cached frame.
    if ( frame_7d3e66d1cd6c3140f4525b90b784c18c == cache_frame_7d3e66d1cd6c3140f4525b90b784c18c )
    {
        Py_DECREF( frame_7d3e66d1cd6c3140f4525b90b784c18c );
    }
    cache_frame_7d3e66d1cd6c3140f4525b90b784c18c = NULL;

    assertFrameObject( frame_7d3e66d1cd6c3140f4525b90b784c18c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_5_getDescription );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)var_doc_first_line );
    Py_DECREF( var_doc_first_line );
    var_doc_first_line = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    Py_XDECREF( var_doc_first_line );
    var_doc_first_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_5_getDescription );
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


static PyObject *impl_unittest$runner$$$function_6_startTest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_62256611a895766e3b30017dc80aa35c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62256611a895766e3b30017dc80aa35c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62256611a895766e3b30017dc80aa35c, codeobj_62256611a895766e3b30017dc80aa35c, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62256611a895766e3b30017dc80aa35c = cache_frame_62256611a895766e3b30017dc80aa35c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62256611a895766e3b30017dc80aa35c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62256611a895766e3b30017dc80aa35c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        frame_62256611a895766e3b30017dc80aa35c->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startTest, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 53;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stream );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            CHECK_OBJECT( par_test );
            tmp_args_element_name_3 = par_test;
            frame_62256611a895766e3b30017dc80aa35c->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getDescription, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 54;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            frame_62256611a895766e3b30017dc80aa35c->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stream );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            frame_62256611a895766e3b30017dc80aa35c->m_frame.f_lineno = 55;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_digest_27b60af18e1f2105f3f0e0aff9ca0fb1_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            frame_62256611a895766e3b30017dc80aa35c->m_frame.f_lineno = 56;
            tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62256611a895766e3b30017dc80aa35c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62256611a895766e3b30017dc80aa35c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62256611a895766e3b30017dc80aa35c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62256611a895766e3b30017dc80aa35c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62256611a895766e3b30017dc80aa35c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62256611a895766e3b30017dc80aa35c,
        type_description_1,
        par_self,
        par_test,
        NULL
    );


    // Release cached frame.
    if ( frame_62256611a895766e3b30017dc80aa35c == cache_frame_62256611a895766e3b30017dc80aa35c )
    {
        Py_DECREF( frame_62256611a895766e3b30017dc80aa35c );
    }
    cache_frame_62256611a895766e3b30017dc80aa35c = NULL;

    assertFrameObject( frame_62256611a895766e3b30017dc80aa35c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_6_startTest );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_6_startTest );
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


static PyObject *impl_unittest$runner$$$function_7_addSuccess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_07a1a943240f2db9f12ff41e4124a496;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07a1a943240f2db9f12ff41e4124a496 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_07a1a943240f2db9f12ff41e4124a496, codeobj_07a1a943240f2db9f12ff41e4124a496, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_07a1a943240f2db9f12ff41e4124a496 = cache_frame_07a1a943240f2db9f12ff41e4124a496;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_07a1a943240f2db9f12ff41e4124a496 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_07a1a943240f2db9f12ff41e4124a496 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        frame_07a1a943240f2db9f12ff41e4124a496->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addSuccess, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 60;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            frame_07a1a943240f2db9f12ff41e4124a496->m_frame.f_lineno = 61;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_writeln, &PyTuple_GET_ITEM( const_tuple_str_plain_ok_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dots );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 62;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stream );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 63;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                frame_07a1a943240f2db9f12ff41e4124a496->m_frame.f_lineno = 63;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 63;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                frame_07a1a943240f2db9f12ff41e4124a496->m_frame.f_lineno = 64;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07a1a943240f2db9f12ff41e4124a496 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07a1a943240f2db9f12ff41e4124a496 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_07a1a943240f2db9f12ff41e4124a496, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_07a1a943240f2db9f12ff41e4124a496->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_07a1a943240f2db9f12ff41e4124a496, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_07a1a943240f2db9f12ff41e4124a496,
        type_description_1,
        par_self,
        par_test,
        NULL
    );


    // Release cached frame.
    if ( frame_07a1a943240f2db9f12ff41e4124a496 == cache_frame_07a1a943240f2db9f12ff41e4124a496 )
    {
        Py_DECREF( frame_07a1a943240f2db9f12ff41e4124a496 );
    }
    cache_frame_07a1a943240f2db9f12ff41e4124a496 = NULL;

    assertFrameObject( frame_07a1a943240f2db9f12ff41e4124a496 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_7_addSuccess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_7_addSuccess );
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


static PyObject *impl_unittest$runner$$$function_8_addError( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *par_err = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_8b543e1489718e2921d0876546e28b36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b543e1489718e2921d0876546e28b36 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b543e1489718e2921d0876546e28b36, codeobj_8b543e1489718e2921d0876546e28b36, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8b543e1489718e2921d0876546e28b36 = cache_frame_8b543e1489718e2921d0876546e28b36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b543e1489718e2921d0876546e28b36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b543e1489718e2921d0876546e28b36 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        CHECK_OBJECT( par_err );
        tmp_args_element_name_2 = par_err;
        frame_8b543e1489718e2921d0876546e28b36->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_addError, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 68;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            frame_8b543e1489718e2921d0876546e28b36->m_frame.f_lineno = 69;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_writeln, &PyTuple_GET_ITEM( const_tuple_str_plain_ERROR_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dots );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 70;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stream );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_8b543e1489718e2921d0876546e28b36->m_frame.f_lineno = 71;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_E_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_8b543e1489718e2921d0876546e28b36->m_frame.f_lineno = 72;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b543e1489718e2921d0876546e28b36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b543e1489718e2921d0876546e28b36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b543e1489718e2921d0876546e28b36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b543e1489718e2921d0876546e28b36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b543e1489718e2921d0876546e28b36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b543e1489718e2921d0876546e28b36,
        type_description_1,
        par_self,
        par_test,
        par_err,
        NULL
    );


    // Release cached frame.
    if ( frame_8b543e1489718e2921d0876546e28b36 == cache_frame_8b543e1489718e2921d0876546e28b36 )
    {
        Py_DECREF( frame_8b543e1489718e2921d0876546e28b36 );
    }
    cache_frame_8b543e1489718e2921d0876546e28b36 = NULL;

    assertFrameObject( frame_8b543e1489718e2921d0876546e28b36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_8_addError );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_8_addError );
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


static PyObject *impl_unittest$runner$$$function_9_addFailure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *par_err = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_87bf6b7166fea47730ff9f241d9a4126;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87bf6b7166fea47730ff9f241d9a4126 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_87bf6b7166fea47730ff9f241d9a4126, codeobj_87bf6b7166fea47730ff9f241d9a4126, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_87bf6b7166fea47730ff9f241d9a4126 = cache_frame_87bf6b7166fea47730ff9f241d9a4126;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_87bf6b7166fea47730ff9f241d9a4126 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_87bf6b7166fea47730ff9f241d9a4126 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        CHECK_OBJECT( par_err );
        tmp_args_element_name_2 = par_err;
        frame_87bf6b7166fea47730ff9f241d9a4126->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_addFailure, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 76;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            frame_87bf6b7166fea47730ff9f241d9a4126->m_frame.f_lineno = 77;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_writeln, &PyTuple_GET_ITEM( const_tuple_str_plain_FAIL_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dots );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 78;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stream );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_87bf6b7166fea47730ff9f241d9a4126->m_frame.f_lineno = 79;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_F_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_87bf6b7166fea47730ff9f241d9a4126->m_frame.f_lineno = 80;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87bf6b7166fea47730ff9f241d9a4126 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87bf6b7166fea47730ff9f241d9a4126 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_87bf6b7166fea47730ff9f241d9a4126, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_87bf6b7166fea47730ff9f241d9a4126->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_87bf6b7166fea47730ff9f241d9a4126, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_87bf6b7166fea47730ff9f241d9a4126,
        type_description_1,
        par_self,
        par_test,
        par_err,
        NULL
    );


    // Release cached frame.
    if ( frame_87bf6b7166fea47730ff9f241d9a4126 == cache_frame_87bf6b7166fea47730ff9f241d9a4126 )
    {
        Py_DECREF( frame_87bf6b7166fea47730ff9f241d9a4126 );
    }
    cache_frame_87bf6b7166fea47730ff9f241d9a4126 = NULL;

    assertFrameObject( frame_87bf6b7166fea47730ff9f241d9a4126 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_9_addFailure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_9_addFailure );
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


static PyObject *impl_unittest$runner$$$function_10_addSkip( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *par_reason = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d04be0b39f8d5880515ec7e8745aff2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d04be0b39f8d5880515ec7e8745aff2b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d04be0b39f8d5880515ec7e8745aff2b, codeobj_d04be0b39f8d5880515ec7e8745aff2b, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d04be0b39f8d5880515ec7e8745aff2b = cache_frame_d04be0b39f8d5880515ec7e8745aff2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d04be0b39f8d5880515ec7e8745aff2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d04be0b39f8d5880515ec7e8745aff2b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        CHECK_OBJECT( par_reason );
        tmp_args_element_name_2 = par_reason;
        frame_d04be0b39f8d5880515ec7e8745aff2b->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_addSkip, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 84;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stream );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_writeln );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_2 = const_str_digest_e688ca63452391cc1fd4e86923d06fb4;
            CHECK_OBJECT( par_reason );
            tmp_args_element_name_4 = par_reason;
            frame_d04be0b39f8d5880515ec7e8745aff2b->m_frame.f_lineno = 85;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 85;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            frame_d04be0b39f8d5880515ec7e8745aff2b->m_frame.f_lineno = 85;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dots );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 86;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 87;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_d04be0b39f8d5880515ec7e8745aff2b->m_frame.f_lineno = 87;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_s_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 87;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stream );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_d04be0b39f8d5880515ec7e8745aff2b->m_frame.f_lineno = 88;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 88;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d04be0b39f8d5880515ec7e8745aff2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d04be0b39f8d5880515ec7e8745aff2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d04be0b39f8d5880515ec7e8745aff2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d04be0b39f8d5880515ec7e8745aff2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d04be0b39f8d5880515ec7e8745aff2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d04be0b39f8d5880515ec7e8745aff2b,
        type_description_1,
        par_self,
        par_test,
        par_reason,
        NULL
    );


    // Release cached frame.
    if ( frame_d04be0b39f8d5880515ec7e8745aff2b == cache_frame_d04be0b39f8d5880515ec7e8745aff2b )
    {
        Py_DECREF( frame_d04be0b39f8d5880515ec7e8745aff2b );
    }
    cache_frame_d04be0b39f8d5880515ec7e8745aff2b = NULL;

    assertFrameObject( frame_d04be0b39f8d5880515ec7e8745aff2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_10_addSkip );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_10_addSkip );
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


static PyObject *impl_unittest$runner$$$function_11_addExpectedFailure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *par_err = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_e9323853a1f5c151f835d115c0e73b5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e9323853a1f5c151f835d115c0e73b5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9323853a1f5c151f835d115c0e73b5e, codeobj_e9323853a1f5c151f835d115c0e73b5e, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e9323853a1f5c151f835d115c0e73b5e = cache_frame_e9323853a1f5c151f835d115c0e73b5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9323853a1f5c151f835d115c0e73b5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9323853a1f5c151f835d115c0e73b5e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        CHECK_OBJECT( par_err );
        tmp_args_element_name_2 = par_err;
        frame_e9323853a1f5c151f835d115c0e73b5e->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_addExpectedFailure, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 92;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            frame_e9323853a1f5c151f835d115c0e73b5e->m_frame.f_lineno = 93;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_writeln, &PyTuple_GET_ITEM( const_tuple_str_digest_4a34a7c60f9b31bfee521ddc315b45b0_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dots );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 94;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stream );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 95;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_e9323853a1f5c151f835d115c0e73b5e->m_frame.f_lineno = 95;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_x_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 95;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 96;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_e9323853a1f5c151f835d115c0e73b5e->m_frame.f_lineno = 96;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 96;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9323853a1f5c151f835d115c0e73b5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9323853a1f5c151f835d115c0e73b5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9323853a1f5c151f835d115c0e73b5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9323853a1f5c151f835d115c0e73b5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9323853a1f5c151f835d115c0e73b5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9323853a1f5c151f835d115c0e73b5e,
        type_description_1,
        par_self,
        par_test,
        par_err,
        NULL
    );


    // Release cached frame.
    if ( frame_e9323853a1f5c151f835d115c0e73b5e == cache_frame_e9323853a1f5c151f835d115c0e73b5e )
    {
        Py_DECREF( frame_e9323853a1f5c151f835d115c0e73b5e );
    }
    cache_frame_e9323853a1f5c151f835d115c0e73b5e = NULL;

    assertFrameObject( frame_e9323853a1f5c151f835d115c0e73b5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_11_addExpectedFailure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_11_addExpectedFailure );
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


static PyObject *impl_unittest$runner$$$function_12_addUnexpectedSuccess( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3ebbe9bc8dc3d49b784927a2e8e290c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ebbe9bc8dc3d49b784927a2e8e290c4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3ebbe9bc8dc3d49b784927a2e8e290c4, codeobj_3ebbe9bc8dc3d49b784927a2e8e290c4, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3ebbe9bc8dc3d49b784927a2e8e290c4 = cache_frame_3ebbe9bc8dc3d49b784927a2e8e290c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_test );
        tmp_args_element_name_1 = par_test;
        frame_3ebbe9bc8dc3d49b784927a2e8e290c4->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addUnexpectedSuccess, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_showAll );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 100;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            frame_3ebbe9bc8dc3d49b784927a2e8e290c4->m_frame.f_lineno = 101;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_writeln, &PyTuple_GET_ITEM( const_tuple_str_digest_dc3954ff4e4c822e29e4bbfa75d4d336_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dots );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 102;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stream );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 103;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                frame_3ebbe9bc8dc3d49b784927a2e8e290c4->m_frame.f_lineno = 103;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_u_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 103;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                frame_3ebbe9bc8dc3d49b784927a2e8e290c4->m_frame.f_lineno = 104;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_flush );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3ebbe9bc8dc3d49b784927a2e8e290c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3ebbe9bc8dc3d49b784927a2e8e290c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3ebbe9bc8dc3d49b784927a2e8e290c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3ebbe9bc8dc3d49b784927a2e8e290c4,
        type_description_1,
        par_self,
        par_test,
        NULL
    );


    // Release cached frame.
    if ( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 == cache_frame_3ebbe9bc8dc3d49b784927a2e8e290c4 )
    {
        Py_DECREF( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 );
    }
    cache_frame_3ebbe9bc8dc3d49b784927a2e8e290c4 = NULL;

    assertFrameObject( frame_3ebbe9bc8dc3d49b784927a2e8e290c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_12_addUnexpectedSuccess );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

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

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_12_addUnexpectedSuccess );
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


static PyObject *impl_unittest$runner$$$function_13_printErrors( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_81da75ff83c4f21f37d4c90ad30f31a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81da75ff83c4f21f37d4c90ad30f31a7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81da75ff83c4f21f37d4c90ad30f31a7, codeobj_81da75ff83c4f21f37d4c90ad30f31a7, module_unittest$runner, sizeof(void *) );
    frame_81da75ff83c4f21f37d4c90ad30f31a7 = cache_frame_81da75ff83c4f21f37d4c90ad30f31a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81da75ff83c4f21f37d4c90ad30f31a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81da75ff83c4f21f37d4c90ad30f31a7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dots );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_showAll );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stream );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_81da75ff83c4f21f37d4c90ad30f31a7->m_frame.f_lineno = 108;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_writeln );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_printErrorList );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_plain_ERROR;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_errors );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_81da75ff83c4f21f37d4c90ad30f31a7->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_printErrorList );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_FAIL;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_failures );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_81da75ff83c4f21f37d4c90ad30f31a7->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81da75ff83c4f21f37d4c90ad30f31a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81da75ff83c4f21f37d4c90ad30f31a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81da75ff83c4f21f37d4c90ad30f31a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81da75ff83c4f21f37d4c90ad30f31a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81da75ff83c4f21f37d4c90ad30f31a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81da75ff83c4f21f37d4c90ad30f31a7,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_81da75ff83c4f21f37d4c90ad30f31a7 == cache_frame_81da75ff83c4f21f37d4c90ad30f31a7 )
    {
        Py_DECREF( frame_81da75ff83c4f21f37d4c90ad30f31a7 );
    }
    cache_frame_81da75ff83c4f21f37d4c90ad30f31a7 = NULL;

    assertFrameObject( frame_81da75ff83c4f21f37d4c90ad30f31a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_13_printErrors );
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
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_13_printErrors );
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


static PyObject *impl_unittest$runner$$$function_14_printErrorList( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_flavour = python_pars[ 1 ];
    PyObject *par_errors = python_pars[ 2 ];
    PyObject *var_test = NULL;
    PyObject *var_err = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f851e49d6c5b584407d48f8255be8440;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_f851e49d6c5b584407d48f8255be8440 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f851e49d6c5b584407d48f8255be8440, codeobj_f851e49d6c5b584407d48f8255be8440, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f851e49d6c5b584407d48f8255be8440 = cache_frame_f851e49d6c5b584407d48f8255be8440;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f851e49d6c5b584407d48f8255be8440 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f851e49d6c5b584407d48f8255be8440 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_errors );
        tmp_iter_arg_1 = par_errors;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 113;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_4 == NULL )
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


            type_description_1 = "ooooo";
            exception_lineno = 113;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooo";
            exception_lineno = 113;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 113;
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

            type_description_1 = "ooooo";
            exception_lineno = 113;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_test;
            var_test = tmp_assign_source_6;
            Py_INCREF( var_test );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_err;
            var_err = tmp_assign_source_7;
            Py_INCREF( var_err );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_writeln );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_separator1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f851e49d6c5b584407d48f8255be8440->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_writeln );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_1 = const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
        CHECK_OBJECT( par_flavour );
        tmp_tuple_element_1 = par_flavour;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_test );
        tmp_args_element_name_3 = var_test;
        frame_f851e49d6c5b584407d48f8255be8440->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getDescription, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f851e49d6c5b584407d48f8255be8440->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stream );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_writeln );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_separator2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f851e49d6c5b584407d48f8255be8440->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_stream );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_writeln );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_2 = const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
        CHECK_OBJECT( var_err );
        tmp_right_name_2 = var_err;
        tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f851e49d6c5b584407d48f8255be8440->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooo";
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
    RESTORE_FRAME_EXCEPTION( frame_f851e49d6c5b584407d48f8255be8440 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f851e49d6c5b584407d48f8255be8440 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f851e49d6c5b584407d48f8255be8440, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f851e49d6c5b584407d48f8255be8440->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f851e49d6c5b584407d48f8255be8440, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f851e49d6c5b584407d48f8255be8440,
        type_description_1,
        par_self,
        par_flavour,
        par_errors,
        var_test,
        var_err
    );


    // Release cached frame.
    if ( frame_f851e49d6c5b584407d48f8255be8440 == cache_frame_f851e49d6c5b584407d48f8255be8440 )
    {
        Py_DECREF( frame_f851e49d6c5b584407d48f8255be8440 );
    }
    cache_frame_f851e49d6c5b584407d48f8255be8440 = NULL;

    assertFrameObject( frame_f851e49d6c5b584407d48f8255be8440 );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_14_printErrorList );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_flavour );
    Py_DECREF( par_flavour );
    par_flavour = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_flavour );
    Py_DECREF( par_flavour );
    par_flavour = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_14_printErrorList );
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


static PyObject *impl_unittest$runner$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_descriptions = python_pars[ 2 ];
    PyObject *par_verbosity = python_pars[ 3 ];
    PyObject *par_failfast = python_pars[ 4 ];
    PyObject *par_buffer = python_pars[ 5 ];
    PyObject *par_resultclass = python_pars[ 6 ];
    PyObject *par_warnings = python_pars[ 7 ];
    PyObject *par_tb_locals = python_pars[ 8 ];
    struct Nuitka_FrameObject *frame_d701858e16f73abbfdd3c31709811fde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d701858e16f73abbfdd3c31709811fde = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d701858e16f73abbfdd3c31709811fde, codeobj_d701858e16f73abbfdd3c31709811fde, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d701858e16f73abbfdd3c31709811fde = cache_frame_d701858e16f73abbfdd3c31709811fde;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d701858e16f73abbfdd3c31709811fde );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d701858e16f73abbfdd3c31709811fde ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_stream );
        tmp_compexpr_left_1 = par_stream;
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_sys );

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

                exception_lineno = 137;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stderr );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_stream;
                assert( old != NULL );
                par_stream = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain__WritelnDecorator );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__WritelnDecorator );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_WritelnDecorator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_stream );
        tmp_args_element_name_1 = par_stream;
        frame_d701858e16f73abbfdd3c31709811fde->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stream, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_descriptions );
        tmp_assattr_name_2 = par_descriptions;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_descriptions, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_verbosity );
        tmp_assattr_name_3 = par_verbosity;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verbosity, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_failfast );
        tmp_assattr_name_4 = par_failfast;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_failfast, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_buffer );
        tmp_assattr_name_5 = par_buffer;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_buffer, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_tb_locals );
        tmp_assattr_name_6 = par_tb_locals;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_tb_locals, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_warnings );
        tmp_assattr_name_7 = par_warnings;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_warnings, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_resultclass );
        tmp_compexpr_left_2 = par_resultclass;
        tmp_compexpr_right_2 = Py_None;
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
        {
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_assattr_target_8;
            CHECK_OBJECT( par_resultclass );
            tmp_assattr_name_8 = par_resultclass;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_8 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_resultclass, tmp_assattr_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d701858e16f73abbfdd3c31709811fde );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d701858e16f73abbfdd3c31709811fde );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d701858e16f73abbfdd3c31709811fde, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d701858e16f73abbfdd3c31709811fde->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d701858e16f73abbfdd3c31709811fde, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d701858e16f73abbfdd3c31709811fde,
        type_description_1,
        par_self,
        par_stream,
        par_descriptions,
        par_verbosity,
        par_failfast,
        par_buffer,
        par_resultclass,
        par_warnings,
        par_tb_locals
    );


    // Release cached frame.
    if ( frame_d701858e16f73abbfdd3c31709811fde == cache_frame_d701858e16f73abbfdd3c31709811fde )
    {
        Py_DECREF( frame_d701858e16f73abbfdd3c31709811fde );
    }
    cache_frame_d701858e16f73abbfdd3c31709811fde = NULL;

    assertFrameObject( frame_d701858e16f73abbfdd3c31709811fde );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_descriptions );
    Py_DECREF( par_descriptions );
    par_descriptions = NULL;

    CHECK_OBJECT( (PyObject *)par_verbosity );
    Py_DECREF( par_verbosity );
    par_verbosity = NULL;

    CHECK_OBJECT( (PyObject *)par_failfast );
    Py_DECREF( par_failfast );
    par_failfast = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer );
    Py_DECREF( par_buffer );
    par_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_resultclass );
    Py_DECREF( par_resultclass );
    par_resultclass = NULL;

    CHECK_OBJECT( (PyObject *)par_warnings );
    Py_DECREF( par_warnings );
    par_warnings = NULL;

    CHECK_OBJECT( (PyObject *)par_tb_locals );
    Py_DECREF( par_tb_locals );
    par_tb_locals = NULL;

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

    Py_XDECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_descriptions );
    Py_DECREF( par_descriptions );
    par_descriptions = NULL;

    CHECK_OBJECT( (PyObject *)par_verbosity );
    Py_DECREF( par_verbosity );
    par_verbosity = NULL;

    CHECK_OBJECT( (PyObject *)par_failfast );
    Py_DECREF( par_failfast );
    par_failfast = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer );
    Py_DECREF( par_buffer );
    par_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_resultclass );
    Py_DECREF( par_resultclass );
    par_resultclass = NULL;

    CHECK_OBJECT( (PyObject *)par_warnings );
    Py_DECREF( par_warnings );
    par_warnings = NULL;

    CHECK_OBJECT( (PyObject *)par_tb_locals );
    Py_DECREF( par_tb_locals );
    par_tb_locals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_15___init__ );
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


static PyObject *impl_unittest$runner$$$function_16__makeResult( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_19bf576d2b145ad83640bbaffdcf90db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19bf576d2b145ad83640bbaffdcf90db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19bf576d2b145ad83640bbaffdcf90db, codeobj_19bf576d2b145ad83640bbaffdcf90db, module_unittest$runner, sizeof(void *) );
    frame_19bf576d2b145ad83640bbaffdcf90db = cache_frame_19bf576d2b145ad83640bbaffdcf90db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19bf576d2b145ad83640bbaffdcf90db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19bf576d2b145ad83640bbaffdcf90db ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_resultclass );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_descriptions );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_verbosity );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_19bf576d2b145ad83640bbaffdcf90db->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19bf576d2b145ad83640bbaffdcf90db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19bf576d2b145ad83640bbaffdcf90db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19bf576d2b145ad83640bbaffdcf90db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19bf576d2b145ad83640bbaffdcf90db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19bf576d2b145ad83640bbaffdcf90db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19bf576d2b145ad83640bbaffdcf90db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19bf576d2b145ad83640bbaffdcf90db,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_19bf576d2b145ad83640bbaffdcf90db == cache_frame_19bf576d2b145ad83640bbaffdcf90db )
    {
        Py_DECREF( frame_19bf576d2b145ad83640bbaffdcf90db );
    }
    cache_frame_19bf576d2b145ad83640bbaffdcf90db = NULL;

    assertFrameObject( frame_19bf576d2b145ad83640bbaffdcf90db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_16__makeResult );
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
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_16__makeResult );
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


static PyObject *impl_unittest$runner$$$function_17_run( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_startTime = NULL;
    PyObject *var_startTestRun = NULL;
    PyObject *var_stopTestRun = NULL;
    PyObject *var_stopTime = NULL;
    PyObject *var_timeTaken = NULL;
    PyObject *var_run = NULL;
    PyObject *var_expectedFails = NULL;
    PyObject *var_unexpectedSuccesses = NULL;
    PyObject *var_skipped = NULL;
    PyObject *var_results = NULL;
    PyObject *var_infos = NULL;
    PyObject *var_failed = NULL;
    PyObject *var_errored = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_656470bdf92200fc016f5ad182f0e25d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_656470bdf92200fc016f5ad182f0e25d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_656470bdf92200fc016f5ad182f0e25d, codeobj_656470bdf92200fc016f5ad182f0e25d, module_unittest$runner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_656470bdf92200fc016f5ad182f0e25d = cache_frame_656470bdf92200fc016f5ad182f0e25d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_656470bdf92200fc016f5ad182f0e25d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_656470bdf92200fc016f5ad182f0e25d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 153;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__makeResult );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_registerResult );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_registerResult );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "registerResult" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_result );
        tmp_args_element_name_1 = var_result;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_failfast );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_assattr_target_1 = var_result;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_failfast, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_buffer );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_assattr_target_2 = var_result;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_buffer, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tb_locals );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_assattr_target_3 = var_result;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_tb_locals, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 158;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_catch_warnings );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_4 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 158;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_5 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___exit__ );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_warnings );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 159;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 161;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_source_name_7 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_simplefilter );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_warnings );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 161;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_warnings );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_1 = LIST_COPY( const_list_str_plain_default_str_plain_always_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 168;
                    type_description_1 = "oooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_10 = tmp_mvar_value_4;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_filterwarnings );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "oooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_args_name_1 = const_tuple_str_plain_module_tuple;
                tmp_dict_key_1 = const_str_plain_category;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 169;
                    type_description_1 = "oooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_dict_value_1 = tmp_mvar_value_5;
                tmp_kw_name_1 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_message;
                tmp_dict_value_2 = const_str_digest_0059be61886b864277f0233588d6f2ec;
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 168;
                tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "oooooooooooooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 171;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_perf_counter );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_startTime == NULL );
        var_startTime = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( var_result );
        tmp_getattr_target_1 = var_result;
        tmp_getattr_attr_1 = const_str_plain_startTestRun;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_startTestRun == NULL );
        var_startTestRun = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_startTestRun );
        tmp_compexpr_left_2 = var_startTestRun;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( var_startTestRun );
            tmp_called_name_5 = var_startTestRun;
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 174;
            tmp_call_result_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_3:;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_test );
        tmp_called_name_6 = par_test;
        CHECK_OBJECT( var_result );
        tmp_args_element_name_3 = var_result;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_656470bdf92200fc016f5ad182f0e25d, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_656470bdf92200fc016f5ad182f0e25d, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT( var_result );
        tmp_getattr_target_2 = var_result;
        tmp_getattr_attr_2 = const_str_plain_stopTestRun;
        tmp_getattr_default_2 = Py_None;
        tmp_assign_source_8 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( var_stopTestRun == NULL );
        var_stopTestRun = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_stopTestRun );
        tmp_compexpr_left_3 = var_stopTestRun;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( var_stopTestRun );
            tmp_called_name_7 = var_stopTestRun;
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 180;
            tmp_call_result_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_6;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_4:;
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 175;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_656470bdf92200fc016f5ad182f0e25d->m_frame) frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_17_run );
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        CHECK_OBJECT( var_result );
        tmp_getattr_target_3 = var_result;
        tmp_getattr_attr_3 = const_str_plain_stopTestRun;
        tmp_getattr_default_3 = Py_None;
        tmp_assign_source_9 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_stopTestRun == NULL );
        var_stopTestRun = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_stopTestRun );
        tmp_compexpr_left_4 = var_stopTestRun;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_8;
            PyObject *tmp_call_result_7;
            CHECK_OBJECT( var_stopTestRun );
            tmp_called_name_8 = var_stopTestRun;
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 180;
            tmp_call_result_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 181;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_perf_counter );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_stopTime == NULL );
        var_stopTime = tmp_assign_source_10;
    }
    goto try_end_2;
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
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_656470bdf92200fc016f5ad182f0e25d, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_656470bdf92200fc016f5ad182f0e25d, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
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
            nuitka_bool tmp_assign_source_11;
            tmp_assign_source_11 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_11;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_9 = tmp_with_1__exit;
            tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_7;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 158;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_656470bdf92200fc016f5ad182f0e25d->m_frame) frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 158;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_656470bdf92200fc016f5ad182f0e25d->m_frame) frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
        branch_end_6:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_17_run );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
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

    {
        nuitka_bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_1__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_10;
            PyObject *tmp_call_result_8;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_10 = tmp_with_1__exit;
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 158;
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_5 );
                Py_XDECREF( exception_keeper_value_5 );
                Py_XDECREF( exception_keeper_tb_5 );

                exception_lineno = 158;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        branch_no_8:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_with_1__indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_11;
            PyObject *tmp_call_result_9;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_11 = tmp_with_1__exit;
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 158;
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        branch_no_9:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( var_stopTime == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stopTime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_stopTime;
        if ( var_startTime == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "startTime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = var_startTime;
        tmp_assign_source_12 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_timeTaken == NULL );
        var_timeTaken = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT( var_result );
        tmp_called_instance_5 = var_result;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 183;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_printErrors );
        if ( tmp_call_result_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_10 );
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( var_result );
        tmp_source_name_11 = var_result;
        tmp_attribute_name_1 = const_str_plain_separator2;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_11, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_11;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_stream );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_writeln );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_result );
            tmp_source_name_14 = var_result;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_separator2 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 185;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_11 );
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_source_name_15;
        CHECK_OBJECT( var_result );
        tmp_source_name_15 = var_result;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_testsRun );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_run == NULL );
        var_run = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_stream );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_writeln );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_str_digest_3cff51ad1df713439f49d64d519be6e8;
        CHECK_OBJECT( var_run );
        tmp_tuple_element_1 = var_run;
        tmp_right_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_run );
        tmp_compexpr_left_8 = var_run;
        tmp_compexpr_right_8 = const_int_pos_1;
        tmp_and_left_value_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_right_name_2 );

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_right_name_2 );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF( tmp_and_left_value_1 );
        tmp_and_right_value_1 = const_str_plain_s;
        Py_INCREF( tmp_and_right_value_1 );
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_right_name_2 );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooo";
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
        Py_DECREF( tmp_or_left_value_1 );
        tmp_or_right_value_1 = const_str_empty;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_tuple_element_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_tuple_element_1 = tmp_or_left_value_1;
        or_end_1:;
        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_timeTaken );
        tmp_tuple_element_1 = var_timeTaken;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_1 );
        tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_12 );
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_18;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_stream );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 189;
        tmp_call_result_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_writeln );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_call_result_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_0;
        assert( var_expectedFails == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_expectedFails = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_0;
        assert( var_unexpectedSuccesses == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_unexpectedSuccesses = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_0;
        assert( var_skipped == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_skipped = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_17;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        tmp_called_name_14 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_9 = LOOKUP_BUILTIN( const_str_plain_len );
        assert( tmp_args_element_name_9 != NULL );
        CHECK_OBJECT( var_result );
        tmp_source_name_19 = var_result;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_expectedFailures );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_10 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_result );
        tmp_source_name_20 = var_result;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_unexpectedSuccesses );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 194;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_result );
        tmp_source_name_21 = var_result;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_skipped );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 195;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_10, 2, tmp_tuple_element_2 );
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        assert( var_results == NULL );
        var_results = tmp_assign_source_18;
    }
    goto try_end_6;
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

    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_19;
    }
    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_656470bdf92200fc016f5ad182f0e25d, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_656470bdf92200fc016f5ad182f0e25d, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_9 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 192;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_656470bdf92200fc016f5ad182f0e25d->m_frame) frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_10;
        branch_no_11:;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_17_run );
    return NULL;
    // End of try:
    try_end_6:;
    {
        nuitka_bool tmp_condition_result_12;
        nuitka_bool tmp_compexpr_left_10;
        nuitka_bool tmp_compexpr_right_10;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_10 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = ( tmp_compexpr_left_10 == tmp_compexpr_right_10 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_1;
            if ( var_results == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "results" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 199;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_iter_arg_1 = var_results;
            tmp_assign_source_20 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_20;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
            if ( tmp_assign_source_21 == NULL )
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


                type_description_1 = "oooooooooooooooo";
                exception_lineno = 199;
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
            if ( tmp_assign_source_22 == NULL )
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


                type_description_1 = "oooooooooooooooo";
                exception_lineno = 199;
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
            if ( tmp_assign_source_23 == NULL )
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


                type_description_1 = "oooooooooooooooo";
                exception_lineno = 199;
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_23;
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

                        type_description_1 = "oooooooooooooooo";
                        exception_lineno = 199;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 199;
                goto try_except_handler_12;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_11;
        // End of try:
        try_end_8:;
        goto try_end_9;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_8;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_expectedFails;
                assert( old != NULL );
                var_expectedFails = tmp_assign_source_24;
                Py_INCREF( var_expectedFails );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_unexpectedSuccesses;
                assert( old != NULL );
                var_unexpectedSuccesses = tmp_assign_source_25;
                Py_INCREF( var_unexpectedSuccesses );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_26 = tmp_tuple_unpack_1__element_3;
            {
                PyObject *old = var_skipped;
                assert( old != NULL );
                var_skipped = tmp_assign_source_26;
                Py_INCREF( var_skipped );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        branch_no_12:;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyList_New( 0 );
        assert( var_infos == NULL );
        var_infos = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT( var_result );
        tmp_called_instance_7 = var_result;
        frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 202;
        tmp_operand_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_wasSuccessful );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_source_name_22;
            PyObject *tmp_call_result_14;
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_stream );
            if ( tmp_called_instance_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 203;
            tmp_call_result_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_FAILED_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_8 );
            if ( tmp_call_result_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_14 );
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_source_name_23;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_source_name_24;
            CHECK_OBJECT( var_result );
            tmp_source_name_23 = var_result;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_failures );
            if ( tmp_len_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_tuple_element_3 = BUILTIN_LEN( tmp_len_arg_1 );
            Py_DECREF( tmp_len_arg_1 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_iter_arg_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_result );
            tmp_source_name_24 = var_result;
            tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_errors );
            if ( tmp_len_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 204;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_tuple_element_3 = BUILTIN_LEN( tmp_len_arg_2 );
            Py_DECREF( tmp_len_arg_2 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 204;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_13;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_3 );
            tmp_assign_source_28 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_13;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_28;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


                type_description_1 = "oooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


                type_description_1 = "oooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_30;
        }
        goto try_end_11;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_11:;
        goto try_end_12;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_1;
        // End of try:
        try_end_12:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_31 = tmp_tuple_unpack_2__element_1;
            assert( var_failed == NULL );
            Py_INCREF( tmp_assign_source_31 );
            var_failed = tmp_assign_source_31;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_32 = tmp_tuple_unpack_2__element_2;
            assert( var_errored == NULL );
            Py_INCREF( tmp_assign_source_32 );
            var_errored = tmp_assign_source_32;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_14;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_failed );
            tmp_truth_name_2 = CHECK_IF_TRUE( var_failed );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_14 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_14;
            }
            else
            {
                goto branch_no_14;
            }
            branch_yes_14:;
            {
                PyObject *tmp_called_name_15;
                PyObject *tmp_source_name_25;
                PyObject *tmp_call_result_15;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( var_infos );
                tmp_source_name_25 = var_infos;
                tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_append );
                if ( tmp_called_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 206;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_3 = const_str_digest_26bbc77e4ad65e25c927ca7beeebdd95;
                CHECK_OBJECT( var_failed );
                tmp_right_name_3 = var_failed;
                tmp_args_element_name_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_args_element_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_15 );

                    exception_lineno = 206;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 206;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                }

                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_11 );
                if ( tmp_call_result_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 206;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_15 );
            }
            branch_no_14:;
        }
        {
            nuitka_bool tmp_condition_result_15;
            int tmp_truth_name_3;
            CHECK_OBJECT( var_errored );
            tmp_truth_name_3 = CHECK_IF_TRUE( var_errored );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_15 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_called_name_16;
                PyObject *tmp_source_name_26;
                PyObject *tmp_call_result_16;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( var_infos );
                tmp_source_name_26 = var_infos;
                tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_append );
                if ( tmp_called_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_4 = const_str_digest_d031844ee5500d76f96c551777170a1e;
                CHECK_OBJECT( var_errored );
                tmp_right_name_4 = var_errored;
                tmp_args_element_name_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_16 );

                    exception_lineno = 208;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12 };
                    tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
                }

                Py_DECREF( tmp_called_name_16 );
                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_call_result_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_16 );
            }
            branch_no_15:;
        }
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_source_name_27;
            PyObject *tmp_call_result_17;
            CHECK_OBJECT( par_self );
            tmp_source_name_27 = par_self;
            tmp_called_instance_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_stream );
            if ( tmp_called_instance_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 210;
            tmp_call_result_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_plain_OK_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_9 );
            if ( tmp_call_result_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_17 );
        }
        branch_end_13:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_skipped );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_skipped );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_28;
            PyObject *tmp_call_result_18;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_infos );
            tmp_source_name_28 = var_infos;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_append );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = const_str_digest_214e24916a1375c40688a8c8e171c7eb;
            CHECK_OBJECT( var_skipped );
            tmp_right_name_5 = var_skipped;
            tmp_args_element_name_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_17 );

                exception_lineno = 212;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_call_result_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_18 );
        }
        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        CHECK_OBJECT( var_expectedFails );
        tmp_truth_name_5 = CHECK_IF_TRUE( var_expectedFails );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        {
            PyObject *tmp_called_name_18;
            PyObject *tmp_source_name_29;
            PyObject *tmp_call_result_19;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_infos );
            tmp_source_name_29 = var_infos;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_append );
            if ( tmp_called_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_6 = const_str_digest_b17ae37408d1c375425d6ebb78963b82;
            CHECK_OBJECT( var_expectedFails );
            tmp_right_name_6 = var_expectedFails;
            tmp_args_element_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_18 );

                exception_lineno = 214;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 214;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
            }

            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_call_result_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_19 );
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_6;
        CHECK_OBJECT( var_unexpectedSuccesses );
        tmp_truth_name_6 = CHECK_IF_TRUE( var_unexpectedSuccesses );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        {
            PyObject *tmp_called_name_19;
            PyObject *tmp_source_name_30;
            PyObject *tmp_call_result_20;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_infos );
            tmp_source_name_30 = var_infos;
            tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_append );
            if ( tmp_called_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_7 = const_str_digest_a55462f7a98327dd68675e0c49b4edce;
            CHECK_OBJECT( var_unexpectedSuccesses );
            tmp_right_name_7 = var_unexpectedSuccesses;
            tmp_args_element_name_15 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_19 );

                exception_lineno = 216;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 216;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
            }

            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_call_result_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_20 );
        }
        branch_no_18:;
    }
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_7;
        CHECK_OBJECT( var_infos );
        tmp_truth_name_7 = CHECK_IF_TRUE( var_infos );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        {
            PyObject *tmp_called_name_20;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            PyObject *tmp_call_result_21;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_17;
            CHECK_OBJECT( par_self );
            tmp_source_name_32 = par_self;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_stream );
            if ( tmp_source_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_writeln );
            Py_DECREF( tmp_source_name_31 );
            if ( tmp_called_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_8 = const_str_digest_2788a002cae5ee37b33129e37d8173d7;
            tmp_called_instance_10 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
            CHECK_OBJECT( var_infos );
            tmp_args_element_name_17 = var_infos;
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 218;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_tuple_element_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_join, call_args );
            }

            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_20 );

                exception_lineno = 218;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_4 );
            tmp_args_element_name_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_20 );

                exception_lineno = 218;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 218;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
            }

            Py_DECREF( tmp_called_name_20 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_call_result_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_21 );
        }
        goto branch_end_19;
        branch_no_19:;
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_source_name_33;
            PyObject *tmp_call_result_22;
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_called_instance_11 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_stream );
            if ( tmp_called_instance_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_656470bdf92200fc016f5ad182f0e25d->m_frame.f_lineno = 220;
            tmp_call_result_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_11 );
            if ( tmp_call_result_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_22 );
        }
        branch_end_19:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_656470bdf92200fc016f5ad182f0e25d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_656470bdf92200fc016f5ad182f0e25d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_656470bdf92200fc016f5ad182f0e25d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_656470bdf92200fc016f5ad182f0e25d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_656470bdf92200fc016f5ad182f0e25d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_656470bdf92200fc016f5ad182f0e25d,
        type_description_1,
        par_self,
        par_test,
        var_result,
        var_startTime,
        var_startTestRun,
        var_stopTestRun,
        var_stopTime,
        var_timeTaken,
        var_run,
        var_expectedFails,
        var_unexpectedSuccesses,
        var_skipped,
        var_results,
        var_infos,
        var_failed,
        var_errored
    );


    // Release cached frame.
    if ( frame_656470bdf92200fc016f5ad182f0e25d == cache_frame_656470bdf92200fc016f5ad182f0e25d )
    {
        Py_DECREF( frame_656470bdf92200fc016f5ad182f0e25d );
    }
    cache_frame_656470bdf92200fc016f5ad182f0e25d = NULL;

    assertFrameObject( frame_656470bdf92200fc016f5ad182f0e25d );

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
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_17_run );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_startTime );
    var_startTime = NULL;

    Py_XDECREF( var_startTestRun );
    var_startTestRun = NULL;

    Py_XDECREF( var_stopTestRun );
    var_stopTestRun = NULL;

    Py_XDECREF( var_stopTime );
    var_stopTime = NULL;

    CHECK_OBJECT( (PyObject *)var_timeTaken );
    Py_DECREF( var_timeTaken );
    var_timeTaken = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

    CHECK_OBJECT( (PyObject *)var_expectedFails );
    Py_DECREF( var_expectedFails );
    var_expectedFails = NULL;

    CHECK_OBJECT( (PyObject *)var_unexpectedSuccesses );
    Py_DECREF( var_unexpectedSuccesses );
    var_unexpectedSuccesses = NULL;

    CHECK_OBJECT( (PyObject *)var_skipped );
    Py_DECREF( var_skipped );
    var_skipped = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    CHECK_OBJECT( (PyObject *)var_infos );
    Py_DECREF( var_infos );
    var_infos = NULL;

    Py_XDECREF( var_failed );
    var_failed = NULL;

    Py_XDECREF( var_errored );
    var_errored = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_startTime );
    var_startTime = NULL;

    Py_XDECREF( var_startTestRun );
    var_startTestRun = NULL;

    Py_XDECREF( var_stopTestRun );
    var_stopTestRun = NULL;

    Py_XDECREF( var_stopTime );
    var_stopTime = NULL;

    Py_XDECREF( var_timeTaken );
    var_timeTaken = NULL;

    Py_XDECREF( var_run );
    var_run = NULL;

    Py_XDECREF( var_expectedFails );
    var_expectedFails = NULL;

    Py_XDECREF( var_unexpectedSuccesses );
    var_unexpectedSuccesses = NULL;

    Py_XDECREF( var_skipped );
    var_skipped = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    Py_XDECREF( var_infos );
    var_infos = NULL;

    Py_XDECREF( var_failed );
    var_failed = NULL;

    Py_XDECREF( var_errored );
    var_errored = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$runner$$$function_17_run );
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



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_10_addSkip(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_10_addSkip,
        const_str_plain_addSkip,
#if PYTHON_VERSION >= 300
        const_str_digest_0714924b2333d70a5ab5d6e04e58bb32,
#endif
        codeobj_d04be0b39f8d5880515ec7e8745aff2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_11_addExpectedFailure(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_11_addExpectedFailure,
        const_str_plain_addExpectedFailure,
#if PYTHON_VERSION >= 300
        const_str_digest_430cb825a6c86eb89bc48dc8bb7de21e,
#endif
        codeobj_e9323853a1f5c151f835d115c0e73b5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_12_addUnexpectedSuccess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_12_addUnexpectedSuccess,
        const_str_plain_addUnexpectedSuccess,
#if PYTHON_VERSION >= 300
        const_str_digest_d53a970984e742662f6313e77e9b5a74,
#endif
        codeobj_3ebbe9bc8dc3d49b784927a2e8e290c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_13_printErrors(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_13_printErrors,
        const_str_plain_printErrors,
#if PYTHON_VERSION >= 300
        const_str_digest_3da8e543433bf9dfebcffd2179f4e9c5,
#endif
        codeobj_81da75ff83c4f21f37d4c90ad30f31a7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_14_printErrorList(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_14_printErrorList,
        const_str_plain_printErrorList,
#if PYTHON_VERSION >= 300
        const_str_digest_80dfe6bb05ce2bda36fb6d2337699e05,
#endif
        codeobj_f851e49d6c5b584407d48f8255be8440,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_15___init__( PyObject *defaults, PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6f0330d7147529b28e3800c02ecfc051,
#endif
        codeobj_d701858e16f73abbfdd3c31709811fde,
        defaults,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_unittest$runner,
        const_str_digest_1fec95c9c8304187f6d14220b05935e1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_16__makeResult(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_16__makeResult,
        const_str_plain__makeResult,
#if PYTHON_VERSION >= 300
        const_str_digest_809e20e62ca19afe17d717fe3110c341,
#endif
        codeobj_19bf576d2b145ad83640bbaffdcf90db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_17_run(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_17_run,
        const_str_plain_run,
#if PYTHON_VERSION >= 300
        const_str_digest_2f893737375e66b2912f5e4e995e9501,
#endif
        codeobj_656470bdf92200fc016f5ad182f0e25d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        const_str_digest_ca23a0c870e9b5f21868c581aa50c7ca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6fbf12ba9655daf1fa9f85564cf783e3,
#endif
        codeobj_db3659ab693b737427edae60bd39e17e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_2___getattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_2___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 300
        const_str_digest_16486fc0cf53ad3dd6e7aa407c3acf2b,
#endif
        codeobj_e0aa6a8162d0674f810035c5588d4703,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_3_writeln( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_3_writeln,
        const_str_plain_writeln,
#if PYTHON_VERSION >= 300
        const_str_digest_1227b7e3b9f0fc7c472890ed7d0035c6,
#endif
        codeobj_84e6a772c02f8f26a1db36afa15cdf08,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_031ce08d1e2b65d018c471f982b8c7cf,
#endif
        codeobj_05f53f4c0532ca84e09dcb4d3a86ed44,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_5_getDescription(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_5_getDescription,
        const_str_plain_getDescription,
#if PYTHON_VERSION >= 300
        const_str_digest_f6b3f8e7b826546ff4a1147cc5c31194,
#endif
        codeobj_7d3e66d1cd6c3140f4525b90b784c18c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_6_startTest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_6_startTest,
        const_str_plain_startTest,
#if PYTHON_VERSION >= 300
        const_str_digest_dba623d2296130c023c3b72d6195c609,
#endif
        codeobj_62256611a895766e3b30017dc80aa35c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_7_addSuccess(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_7_addSuccess,
        const_str_plain_addSuccess,
#if PYTHON_VERSION >= 300
        const_str_digest_db3bfe8bec302e6eee8c39d83a4ac0ba,
#endif
        codeobj_07a1a943240f2db9f12ff41e4124a496,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_8_addError(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_8_addError,
        const_str_plain_addError,
#if PYTHON_VERSION >= 300
        const_str_digest_785b4d8459a7658d135979e57a59a121,
#endif
        codeobj_8b543e1489718e2921d0876546e28b36,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_unittest$runner$$$function_9_addFailure(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$runner$$$function_9_addFailure,
        const_str_plain_addFailure,
#if PYTHON_VERSION >= 300
        const_str_digest_fd99c95f7497a1dd9f070a30beec7182,
#endif
        codeobj_87bf6b7166fea47730ff9f241d9a4126,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_unittest$runner,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_unittest$runner =
{
    PyModuleDef_HEAD_INIT,
    "unittest.runner",
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

MOD_INIT_DECL( unittest$runner )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_unittest$runner );
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
    puts("unittest.runner: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("unittest.runner: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("unittest.runner: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initunittest$runner" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_unittest$runner = Py_InitModule4(
        "unittest.runner",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_unittest$runner = PyModule_Create( &mdef_unittest$runner );
#endif

    moduledict_unittest$runner = MODULE_DICT( module_unittest$runner );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_unittest$runner,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_unittest$runner,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_unittest$runner,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_unittest$runner,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_unittest$runner );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6b44dccc5d50a0d4c5230fbe9b4118e2, module_unittest$runner );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_1ee68f9834265d6226e6e2e37d4f8e01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_unittest$runner_13 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fc08b615f86fbf6c56aec98b1eb3a363_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fc08b615f86fbf6c56aec98b1eb3a363_2 = NULL;
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
    PyObject *locals_unittest$runner_29 = NULL;
    struct Nuitka_FrameObject *frame_07ee870063087124314b35608af05344_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_07ee870063087124314b35608af05344_3 = NULL;
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
    PyObject *locals_unittest$runner_120 = NULL;
    struct Nuitka_FrameObject *frame_0e5b7732e779b87c064dd94afc8a9c9d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0e5b7732e779b87c064dd94afc8a9c9d_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_419c8318f30d139d2cd92f3651e5f5f4;
        UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1ee68f9834265d6226e6e2e37d4f8e01 = MAKE_MODULE_FRAME( codeobj_1ee68f9834265d6226e6e2e37d4f8e01, module_unittest$runner );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1ee68f9834265d6226e6e2e37d4f8e01 );
    assert( Py_REFCNT( frame_1ee68f9834265d6226e6e2e37d4f8e01 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_unittest$runner;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_unittest$runner;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_warnings;
        tmp_globals_name_3 = (PyObject *)moduledict_unittest$runner;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_empty;
        tmp_globals_name_4 = (PyObject *)moduledict_unittest$runner;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_result_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)MODULE_DICT(tmp_import_name_from_1),
                const_str_plain_result,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_result );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_result, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_signals;
        tmp_globals_name_5 = (PyObject *)moduledict_unittest$runner;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_registerResult_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)MODULE_DICT(tmp_import_name_from_2),
                const_str_plain_registerResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_registerResult );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_registerResult, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        UPDATE_STRING_DICT0( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___unittest, tmp_assign_source_9 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 13;

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


            exception_lineno = 13;

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


            exception_lineno = 13;

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


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

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
        tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
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


            exception_lineno = 13;

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


            exception_lineno = 13;

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
            PyObject *tmp_assign_source_13;
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


                exception_lineno = 13;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain__WritelnDecorator;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 13;
            tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_13;
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


                exception_lineno = 13;

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


                    exception_lineno = 13;

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

                    exception_lineno = 13;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 13;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 13;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_14;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_unittest$runner_13 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_6b44dccc5d50a0d4c5230fbe9b4118e2;
        tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_d911dd70ef894e10f9d4e5740e74a7c9;
        tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain__WritelnDecorator;
        tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_fc08b615f86fbf6c56aec98b1eb3a363_2, codeobj_fc08b615f86fbf6c56aec98b1eb3a363, module_unittest$runner, sizeof(void *) );
        frame_fc08b615f86fbf6c56aec98b1eb3a363_2 = cache_frame_fc08b615f86fbf6c56aec98b1eb3a363_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_2___getattr__(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain___getattr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_3_writeln( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain_writeln, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_fc08b615f86fbf6c56aec98b1eb3a363_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_fc08b615f86fbf6c56aec98b1eb3a363_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_fc08b615f86fbf6c56aec98b1eb3a363_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_fc08b615f86fbf6c56aec98b1eb3a363_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 == cache_frame_fc08b615f86fbf6c56aec98b1eb3a363_2 )
        {
            Py_DECREF( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 );
        }
        cache_frame_fc08b615f86fbf6c56aec98b1eb3a363_2 = NULL;

        assertFrameObject( frame_fc08b615f86fbf6c56aec98b1eb3a363_2 );

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
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

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
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_unittest$runner_13, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain__WritelnDecorator;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_unittest$runner_13;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 13;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_unittest$runner_13 );
        locals_unittest$runner_13 = NULL;
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

        Py_DECREF( locals_unittest$runner_13 );
        locals_unittest$runner_13 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( unittest$runner );
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
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 13;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain__WritelnDecorator, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_result );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_result );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "result" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto try_except_handler_4;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_TestResult );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_assign_source_17 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_18 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

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
        tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
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


            exception_lineno = 29;

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


            exception_lineno = 29;

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
            PyObject *tmp_assign_source_21;
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


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            tmp_tuple_element_5 = const_str_plain_TextTestResult;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 29;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_21;
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


                exception_lineno = 29;

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


                    exception_lineno = 29;

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

                    exception_lineno = 29;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_6 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 29;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_22;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_unittest$runner_29 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_6b44dccc5d50a0d4c5230fbe9b4118e2;
        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_2e22166132008ecd7e5120fbec66108d;
        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_TextTestResult;
        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_07ee870063087124314b35608af05344_3, codeobj_07ee870063087124314b35608af05344, module_unittest$runner, sizeof(void *) );
        frame_07ee870063087124314b35608af05344_3 = cache_frame_07ee870063087124314b35608af05344_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_07ee870063087124314b35608af05344_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_07ee870063087124314b35608af05344_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_digest_ed865518f148a60549bf099d2d4a6256;
        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_separator1, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_digest_56ba0b0039dcafb80583c021ac6f64cc;
        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_separator2, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_4___init__(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_5_getDescription(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_getDescription, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_6_startTest(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_startTest, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_7_addSuccess(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_addSuccess, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_8_addError(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_addError, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_9_addFailure(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_addFailure, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_10_addSkip(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_addSkip, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_11_addExpectedFailure(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_addExpectedFailure, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_12_addUnexpectedSuccess(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_addUnexpectedSuccess, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_13_printErrors(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_printErrors, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_14_printErrorList(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain_printErrorList, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_07ee870063087124314b35608af05344_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_07ee870063087124314b35608af05344_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_07ee870063087124314b35608af05344_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_07ee870063087124314b35608af05344_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_07ee870063087124314b35608af05344_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_07ee870063087124314b35608af05344_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_07ee870063087124314b35608af05344_3 == cache_frame_07ee870063087124314b35608af05344_3 )
        {
            Py_DECREF( frame_07ee870063087124314b35608af05344_3 );
        }
        cache_frame_07ee870063087124314b35608af05344_3 = NULL;

        assertFrameObject( frame_07ee870063087124314b35608af05344_3 );

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


                exception_lineno = 29;

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
            tmp_res = PyObject_SetItem( locals_unittest$runner_29, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = const_str_plain_TextTestResult;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
            tmp_tuple_element_7 = locals_unittest$runner_29;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 29;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_23 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_unittest$runner_29 );
        locals_unittest$runner_29 = NULL;
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

        Py_DECREF( locals_unittest$runner_29 );
        locals_unittest$runner_29 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( unittest$runner );
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
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 29;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult, tmp_assign_source_23 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_25 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_7;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_10 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_10, const_str_plain___prepare__ );
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_11 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_7;
            }
            tmp_tuple_element_8 = const_str_plain_TextTestRunner;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 120;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_12 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_12, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_7;
            }
            tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_13;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_9 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;

                    goto try_except_handler_7;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_13 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_13 == NULL) );
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 120;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_9 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 120;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_29;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_unittest$runner_120 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_6b44dccc5d50a0d4c5230fbe9b4118e2;
        tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_1d659c26c34ca4d786f9d80252cc031a;
        tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_TextTestRunner;
        tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto try_except_handler_9;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0e5b7732e779b87c064dd94afc8a9c9d_4, codeobj_0e5b7732e779b87c064dd94afc8a9c9d, module_unittest$runner, sizeof(void *) );
        frame_0e5b7732e779b87c064dd94afc8a9c9d_4 = cache_frame_0e5b7732e779b87c064dd94afc8a9c9d_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_4;
            tmp_dictset_value = PyObject_GetItem( locals_unittest$runner_120, const_str_plain_TextTestResult );

            if ( tmp_dictset_value == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestResult );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_dictset_value = tmp_mvar_value_4;
                Py_INCREF( tmp_dictset_value );
                }
            }

            tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain_resultclass, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_kw_defaults_1;
            tmp_defaults_2 = const_tuple_none_true_int_pos_1_false_false_none_none_tuple;
            tmp_kw_defaults_1 = PyDict_Copy( const_dict_b37af4b575922eb1e810c57b613c4d62 );
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_15___init__( tmp_defaults_2, tmp_kw_defaults_1 );



            tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_16__makeResult(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain__makeResult, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_unittest$runner$$$function_17_run(  );



        tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain_run, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0e5b7732e779b87c064dd94afc8a9c9d_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0e5b7732e779b87c064dd94afc8a9c9d_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0e5b7732e779b87c064dd94afc8a9c9d_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0e5b7732e779b87c064dd94afc8a9c9d_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 == cache_frame_0e5b7732e779b87c064dd94afc8a9c9d_4 )
        {
            Py_DECREF( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 );
        }
        cache_frame_0e5b7732e779b87c064dd94afc8a9c9d_4 = NULL;

        assertFrameObject( frame_0e5b7732e779b87c064dd94afc8a9c9d_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            tmp_compexpr_right_3 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_9;
            }
            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_unittest$runner_120, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_9;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = const_str_plain_TextTestRunner;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_unittest$runner_120;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame.f_lineno = 120;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;

                goto try_except_handler_9;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_30 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_unittest$runner_120 );
        locals_unittest$runner_120 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF( locals_unittest$runner_120 );
        locals_unittest$runner_120 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( unittest$runner );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 120;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain_TextTestRunner, tmp_assign_source_30 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ee68f9834265d6226e6e2e37d4f8e01 );
#endif
    popFrameStack();

    assertFrameObject( frame_1ee68f9834265d6226e6e2e37d4f8e01 );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ee68f9834265d6226e6e2e37d4f8e01 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ee68f9834265d6226e6e2e37d4f8e01, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ee68f9834265d6226e6e2e37d4f8e01->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ee68f9834265d6226e6e2e37d4f8e01, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_unittest$runner, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_unittest$runner );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
