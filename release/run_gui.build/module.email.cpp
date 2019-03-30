/* Generated code for Python module 'email'
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

/* The "_module_email" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email;
PyDictObject *moduledict_email;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_message_from_string;
extern PyObject *const_str_plain_parsestr;
static PyObject *const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_plain_message_from_file;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_str_plain_BytesParser_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_1a1540fa13df89b08c627de92cab1f2e;
static PyObject *const_str_plain_mime;
extern PyObject *const_str_plain_parser;
static PyObject *const_str_plain_message_from_binary_file;
static PyObject *const_str_digest_7021414e710b97d4b9ffdc814b3e115b;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_str_digest_7bfaa95c45d4e704c39b2624db1c6416;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_feedparser;
extern PyObject *const_str_plain_quoprimime;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_Parser;
extern PyObject *const_str_plain_parsebytes;
static PyObject *const_str_plain_message_from_bytes;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
static PyObject *const_str_digest_3b7932806a101349ea3f70a5ea1b2d62;
static PyObject *const_tuple_str_plain_Parser_tuple;
static PyObject *const_str_plain_NUITKA_PACKAGE_email;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_charset;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_kws;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_iterators;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_8241d94f3f38fd04f85017d6481c999f;
static PyObject *const_str_plain_generator;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_header;
static PyObject *const_list_9388672962fa6ddff96479f2b76a53a6_list;
extern PyObject *const_str_plain_BytesParser;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_dirname;
static PyObject *const_tuple_ea5769b86ffca871976b136a6f086911_tuple;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_plain_encoders;
static PyObject *const_str_digest_dd6e17e8480d5afb895666aa1a640d07;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_cc325952b7744204e63458cc2c0b49c4_tuple;
static PyObject *const_str_digest_9be3b7477143c298d0d99ee8f2ddca56;
extern PyObject *const_str_plain_base64mime;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_message_from_string = UNSTREAM_STRING_ASCII( &constant_bin[ 176494 ], 19, 1 );
    const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_plain_message_from_file = UNSTREAM_STRING_ASCII( &constant_bin[ 176513 ], 17, 1 );
    const_tuple_str_plain_BytesParser_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesParser_tuple, 0, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_str_digest_1a1540fa13df89b08c627de92cab1f2e = UNSTREAM_STRING_ASCII( &constant_bin[ 176530 ], 17, 0 );
    const_str_plain_mime = UNSTREAM_STRING_ASCII( &constant_bin[ 176547 ], 4, 1 );
    const_str_plain_message_from_binary_file = UNSTREAM_STRING_ASCII( &constant_bin[ 176551 ], 24, 1 );
    const_str_digest_7021414e710b97d4b9ffdc814b3e115b = UNSTREAM_STRING_ASCII( &constant_bin[ 176575 ], 138, 0 );
    const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 3, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_digest_7bfaa95c45d4e704c39b2624db1c6416 = UNSTREAM_STRING_ASCII( &constant_bin[ 176713 ], 63, 0 );
    const_str_plain_message_from_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 176776 ], 18, 1 );
    const_str_digest_3b7932806a101349ea3f70a5ea1b2d62 = UNSTREAM_STRING_ASCII( &constant_bin[ 176794 ], 124, 0 );
    const_tuple_str_plain_Parser_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Parser_tuple, 0, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_plain_NUITKA_PACKAGE_email = UNSTREAM_STRING_ASCII( &constant_bin[ 176918 ], 20, 1 );
    const_str_plain_iterators = UNSTREAM_STRING_ASCII( &constant_bin[ 176938 ], 9, 1 );
    const_str_digest_8241d94f3f38fd04f85017d6481c999f = UNSTREAM_STRING_ASCII( &constant_bin[ 176947 ], 118, 0 );
    const_str_plain_generator = UNSTREAM_STRING_ASCII( &constant_bin[ 409 ], 9, 1 );
    const_list_9388672962fa6ddff96479f2b76a53a6_list = PyList_New( 17 );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 0, const_str_plain_base64mime ); Py_INCREF( const_str_plain_base64mime );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 1, const_str_plain_charset ); Py_INCREF( const_str_plain_charset );
    const_str_plain_encoders = UNSTREAM_STRING_ASCII( &constant_bin[ 177065 ], 8, 1 );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 2, const_str_plain_encoders ); Py_INCREF( const_str_plain_encoders );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 3, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 4, const_str_plain_feedparser ); Py_INCREF( const_str_plain_feedparser );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 5, const_str_plain_generator ); Py_INCREF( const_str_plain_generator );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 6, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 7, const_str_plain_iterators ); Py_INCREF( const_str_plain_iterators );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 8, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 9, const_str_plain_message_from_file ); Py_INCREF( const_str_plain_message_from_file );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 10, const_str_plain_message_from_binary_file ); Py_INCREF( const_str_plain_message_from_binary_file );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 11, const_str_plain_message_from_string ); Py_INCREF( const_str_plain_message_from_string );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 12, const_str_plain_message_from_bytes ); Py_INCREF( const_str_plain_message_from_bytes );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 13, const_str_plain_mime ); Py_INCREF( const_str_plain_mime );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 14, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 15, const_str_plain_quoprimime ); Py_INCREF( const_str_plain_quoprimime );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 16, const_str_plain_utils ); Py_INCREF( const_str_plain_utils );
    const_tuple_ea5769b86ffca871976b136a6f086911_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 3, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_str_digest_dd6e17e8480d5afb895666aa1a640d07 = UNSTREAM_STRING_ASCII( &constant_bin[ 177073 ], 14, 0 );
    const_tuple_cc325952b7744204e63458cc2c0b49c4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_cc325952b7744204e63458cc2c0b49c4_tuple, 0, const_str_plain_NUITKA_PACKAGE_email ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_email );
    PyTuple_SET_ITEM( const_tuple_cc325952b7744204e63458cc2c0b49c4_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_9be3b7477143c298d0d99ee8f2ddca56 = UNSTREAM_STRING_ASCII( &constant_bin[ 177087 ], 145, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cdf8f3944fa1b1189f53e58ac83174da;
static PyCodeObject *codeobj_a68ea4d52c14f666e4ab6be72cd4ae85;
static PyCodeObject *codeobj_18e6186904ce28f4bd43f3bda280acdb;
static PyCodeObject *codeobj_e44ce97eab6f2d5477ea6453ffc5624f;
static PyCodeObject *codeobj_40858d48f84df3f17bb04ded67c74759;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1a1540fa13df89b08c627de92cab1f2e );
    codeobj_cdf8f3944fa1b1189f53e58ac83174da = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dd6e17e8480d5afb895666aa1a640d07, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a68ea4d52c14f666e4ab6be72cd4ae85 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_binary_file, 56, const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_18e6186904ce28f4bd43f3bda280acdb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_bytes, 40, const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e44ce97eab6f2d5477ea6453ffc5624f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_file, 48, const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_40858d48f84df3f17bb04ded67c74759 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_string, 32, const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_email$$$function_1_message_from_string(  );


static PyObject *MAKE_FUNCTION_email$$$function_2_message_from_bytes(  );


static PyObject *MAKE_FUNCTION_email$$$function_3_message_from_file(  );


static PyObject *MAKE_FUNCTION_email$$$function_4_message_from_binary_file(  );


// The module function definitions.
static PyObject *impl_email$$$function_1_message_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_Parser = NULL;
    struct Nuitka_FrameObject *frame_40858d48f84df3f17bb04ded67c74759;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_40858d48f84df3f17bb04ded67c74759 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_40858d48f84df3f17bb04ded67c74759, codeobj_40858d48f84df3f17bb04ded67c74759, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_40858d48f84df3f17bb04ded67c74759 = cache_frame_40858d48f84df3f17bb04ded67c74759;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_40858d48f84df3f17bb04ded67c74759 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_40858d48f84df3f17bb04ded67c74759 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_globals_name_1 = (PyObject *)moduledict_email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Parser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_40858d48f84df3f17bb04ded67c74759->m_frame.f_lineno = 37;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Parser );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_Parser == NULL );
        var_Parser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_Parser );
        tmp_dircall_arg1_1 = var_Parser;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kws );
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_40858d48f84df3f17bb04ded67c74759->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_parsestr, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40858d48f84df3f17bb04ded67c74759 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40858d48f84df3f17bb04ded67c74759 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40858d48f84df3f17bb04ded67c74759 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40858d48f84df3f17bb04ded67c74759, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40858d48f84df3f17bb04ded67c74759->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40858d48f84df3f17bb04ded67c74759, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40858d48f84df3f17bb04ded67c74759,
        type_description_1,
        par_s,
        par_args,
        par_kws,
        var_Parser
    );


    // Release cached frame.
    if ( frame_40858d48f84df3f17bb04ded67c74759 == cache_frame_40858d48f84df3f17bb04ded67c74759 )
    {
        Py_DECREF( frame_40858d48f84df3f17bb04ded67c74759 );
    }
    cache_frame_40858d48f84df3f17bb04ded67c74759 = NULL;

    assertFrameObject( frame_40858d48f84df3f17bb04ded67c74759 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_1_message_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_Parser );
    Py_DECREF( var_Parser );
    var_Parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_1_message_from_string );
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


static PyObject *impl_email$$$function_2_message_from_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_BytesParser = NULL;
    struct Nuitka_FrameObject *frame_18e6186904ce28f4bd43f3bda280acdb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_18e6186904ce28f4bd43f3bda280acdb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_18e6186904ce28f4bd43f3bda280acdb, codeobj_18e6186904ce28f4bd43f3bda280acdb, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_18e6186904ce28f4bd43f3bda280acdb = cache_frame_18e6186904ce28f4bd43f3bda280acdb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_18e6186904ce28f4bd43f3bda280acdb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_18e6186904ce28f4bd43f3bda280acdb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_globals_name_1 = (PyObject *)moduledict_email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_BytesParser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_18e6186904ce28f4bd43f3bda280acdb->m_frame.f_lineno = 45;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesParser );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_BytesParser == NULL );
        var_BytesParser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_BytesParser );
        tmp_dircall_arg1_1 = var_BytesParser;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kws );
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_18e6186904ce28f4bd43f3bda280acdb->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_parsebytes, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_18e6186904ce28f4bd43f3bda280acdb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_18e6186904ce28f4bd43f3bda280acdb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18e6186904ce28f4bd43f3bda280acdb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_18e6186904ce28f4bd43f3bda280acdb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_18e6186904ce28f4bd43f3bda280acdb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_18e6186904ce28f4bd43f3bda280acdb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_18e6186904ce28f4bd43f3bda280acdb,
        type_description_1,
        par_s,
        par_args,
        par_kws,
        var_BytesParser
    );


    // Release cached frame.
    if ( frame_18e6186904ce28f4bd43f3bda280acdb == cache_frame_18e6186904ce28f4bd43f3bda280acdb )
    {
        Py_DECREF( frame_18e6186904ce28f4bd43f3bda280acdb );
    }
    cache_frame_18e6186904ce28f4bd43f3bda280acdb = NULL;

    assertFrameObject( frame_18e6186904ce28f4bd43f3bda280acdb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_2_message_from_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_BytesParser );
    Py_DECREF( var_BytesParser );
    var_BytesParser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_2_message_from_bytes );
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


static PyObject *impl_email$$$function_3_message_from_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_Parser = NULL;
    struct Nuitka_FrameObject *frame_e44ce97eab6f2d5477ea6453ffc5624f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e44ce97eab6f2d5477ea6453ffc5624f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e44ce97eab6f2d5477ea6453ffc5624f, codeobj_e44ce97eab6f2d5477ea6453ffc5624f, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e44ce97eab6f2d5477ea6453ffc5624f = cache_frame_e44ce97eab6f2d5477ea6453ffc5624f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e44ce97eab6f2d5477ea6453ffc5624f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e44ce97eab6f2d5477ea6453ffc5624f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_globals_name_1 = (PyObject *)moduledict_email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Parser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e44ce97eab6f2d5477ea6453ffc5624f->m_frame.f_lineno = 53;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Parser );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_Parser == NULL );
        var_Parser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_Parser );
        tmp_dircall_arg1_1 = var_Parser;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kws );
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        frame_e44ce97eab6f2d5477ea6453ffc5624f->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_parse, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e44ce97eab6f2d5477ea6453ffc5624f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e44ce97eab6f2d5477ea6453ffc5624f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e44ce97eab6f2d5477ea6453ffc5624f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e44ce97eab6f2d5477ea6453ffc5624f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e44ce97eab6f2d5477ea6453ffc5624f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e44ce97eab6f2d5477ea6453ffc5624f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e44ce97eab6f2d5477ea6453ffc5624f,
        type_description_1,
        par_fp,
        par_args,
        par_kws,
        var_Parser
    );


    // Release cached frame.
    if ( frame_e44ce97eab6f2d5477ea6453ffc5624f == cache_frame_e44ce97eab6f2d5477ea6453ffc5624f )
    {
        Py_DECREF( frame_e44ce97eab6f2d5477ea6453ffc5624f );
    }
    cache_frame_e44ce97eab6f2d5477ea6453ffc5624f = NULL;

    assertFrameObject( frame_e44ce97eab6f2d5477ea6453ffc5624f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_3_message_from_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_Parser );
    Py_DECREF( var_Parser );
    var_Parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_3_message_from_file );
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


static PyObject *impl_email$$$function_4_message_from_binary_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_BytesParser = NULL;
    struct Nuitka_FrameObject *frame_a68ea4d52c14f666e4ab6be72cd4ae85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a68ea4d52c14f666e4ab6be72cd4ae85 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a68ea4d52c14f666e4ab6be72cd4ae85, codeobj_a68ea4d52c14f666e4ab6be72cd4ae85, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a68ea4d52c14f666e4ab6be72cd4ae85 = cache_frame_a68ea4d52c14f666e4ab6be72cd4ae85;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a68ea4d52c14f666e4ab6be72cd4ae85 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a68ea4d52c14f666e4ab6be72cd4ae85 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_globals_name_1 = (PyObject *)moduledict_email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_BytesParser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a68ea4d52c14f666e4ab6be72cd4ae85->m_frame.f_lineno = 61;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesParser );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_BytesParser == NULL );
        var_BytesParser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_BytesParser );
        tmp_dircall_arg1_1 = var_BytesParser;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kws );
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        frame_a68ea4d52c14f666e4ab6be72cd4ae85->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_parse, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a68ea4d52c14f666e4ab6be72cd4ae85 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a68ea4d52c14f666e4ab6be72cd4ae85 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a68ea4d52c14f666e4ab6be72cd4ae85 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a68ea4d52c14f666e4ab6be72cd4ae85, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a68ea4d52c14f666e4ab6be72cd4ae85->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a68ea4d52c14f666e4ab6be72cd4ae85, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a68ea4d52c14f666e4ab6be72cd4ae85,
        type_description_1,
        par_fp,
        par_args,
        par_kws,
        var_BytesParser
    );


    // Release cached frame.
    if ( frame_a68ea4d52c14f666e4ab6be72cd4ae85 == cache_frame_a68ea4d52c14f666e4ab6be72cd4ae85 )
    {
        Py_DECREF( frame_a68ea4d52c14f666e4ab6be72cd4ae85 );
    }
    cache_frame_a68ea4d52c14f666e4ab6be72cd4ae85 = NULL;

    assertFrameObject( frame_a68ea4d52c14f666e4ab6be72cd4ae85 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_4_message_from_binary_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_BytesParser );
    Py_DECREF( var_BytesParser );
    var_BytesParser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_4_message_from_binary_file );
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



static PyObject *MAKE_FUNCTION_email$$$function_1_message_from_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_1_message_from_string,
        const_str_plain_message_from_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_40858d48f84df3f17bb04ded67c74759,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email,
        const_str_digest_8241d94f3f38fd04f85017d6481c999f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$$$function_2_message_from_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_2_message_from_bytes,
        const_str_plain_message_from_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_18e6186904ce28f4bd43f3bda280acdb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email,
        const_str_digest_3b7932806a101349ea3f70a5ea1b2d62,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$$$function_3_message_from_file(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_3_message_from_file,
        const_str_plain_message_from_file,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e44ce97eab6f2d5477ea6453ffc5624f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email,
        const_str_digest_7021414e710b97d4b9ffdc814b3e115b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$$$function_4_message_from_binary_file(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_4_message_from_binary_file,
        const_str_plain_message_from_binary_file,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a68ea4d52c14f666e4ab6be72cd4ae85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email,
        const_str_digest_9be3b7477143c298d0d99ee8f2ddca56,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email =
{
    PyModuleDef_HEAD_INIT,
    "email",
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

MOD_INIT_DECL( email )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email );
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
    puts("email: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email = Py_InitModule4(
        "email",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email = PyModule_Create( &mdef_email );
#endif

    moduledict_email = MODULE_DICT( module_email );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_email,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_email, module_email );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_cdf8f3944fa1b1189f53e58ac83174da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_7bfaa95c45d4e704c39b2624db1c6416;
        UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_cdf8f3944fa1b1189f53e58ac83174da = MAKE_MODULE_FRAME( codeobj_cdf8f3944fa1b1189f53e58ac83174da, module_email );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_cdf8f3944fa1b1189f53e58ac83174da );
    assert( Py_REFCNT( frame_cdf8f3944fa1b1189f53e58ac83174da ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        frame_cdf8f3944fa1b1189f53e58ac83174da->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_1 = NULL;
            }
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_cdf8f3944fa1b1189f53e58ac83174da->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        frame_cdf8f3944fa1b1189f53e58ac83174da->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_1 = NULL;
            }
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_cdf8f3944fa1b1189f53e58ac83174da->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_cc325952b7744204e63458cc2c0b49c4_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___spec__ );

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdf8f3944fa1b1189f53e58ac83174da );
#endif
    popFrameStack();

    assertFrameObject( frame_cdf8f3944fa1b1189f53e58ac83174da );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdf8f3944fa1b1189f53e58ac83174da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdf8f3944fa1b1189f53e58ac83174da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdf8f3944fa1b1189f53e58ac83174da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdf8f3944fa1b1189f53e58ac83174da, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_9388672962fa6ddff96479f2b76a53a6_list );
        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_email$$$function_1_message_from_string(  );



        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_string, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_email$$$function_2_message_from_bytes(  );



        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_bytes, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_email$$$function_3_message_from_file(  );



        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_file, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_email$$$function_4_message_from_binary_file(  );



        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_binary_file, tmp_assign_source_9 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_email );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
