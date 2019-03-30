/* Generated code for Python module 'tty'
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

/* The "_module_tty" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tty;
PyDictObject *moduledict_tty;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_tcgetattr;
static PyObject *const_str_plain_when;
static PyObject *const_str_plain_VTIME;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_9b2f096334f3a9d51dd2a94a27e9fe87;
static PyObject *const_str_plain_OSPEED;
static PyObject *const_str_plain_CS8;
static PyObject *const_str_plain_OFLAG;
static PyObject *const_str_plain_IEXTEN;
static PyObject *const_str_plain_LFLAG;
static PyObject *const_str_plain_PARENB;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_tcsetattr;
static PyObject *const_str_plain_OPOST;
static PyObject *const_str_digest_0cd73222ad159c2c17b9868392d6ef06;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_ISPEED;
static PyObject *const_str_plain_ICRNL;
static PyObject *const_str_plain_ISIG;
static PyObject *const_str_digest_f4b2ab7e1a28ab9ab5d2bc7610951ee0;
static PyObject *const_str_plain_CFLAG;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_TCSAFLUSH;
static PyObject *const_str_plain_CC;
static PyObject *const_str_plain_termios;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_BRKINT;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_ISTRIP;
static PyObject *const_str_plain_INPCK;
extern PyObject *const_int_pos_6;
static PyObject *const_str_plain_CSIZE;
extern PyObject *const_str_plain_fd;
static PyObject *const_str_plain_VMIN;
static PyObject *const_str_digest_a9aeb968972d446adca9df377edec887;
extern PyObject *const_str_plain_setcbreak;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain_IXON;
static PyObject *const_str_plain_setraw;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_ICANON;
static PyObject *const_list_str_plain_setraw_str_plain_setcbreak_list;
static PyObject *const_str_plain_IFLAG;
extern PyObject *const_str_plain_tty;
static PyObject *const_str_digest_2abdb942b085d2c1b7c8d57642d1717f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_ECHO;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_when = UNSTREAM_STRING_ASCII( &constant_bin[ 1469 ], 4, 1 );
    const_str_plain_VTIME = UNSTREAM_STRING_ASCII( &constant_bin[ 1096778 ], 5, 1 );
    const_str_digest_9b2f096334f3a9d51dd2a94a27e9fe87 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096783 ], 19, 0 );
    const_str_plain_OSPEED = UNSTREAM_STRING_ASCII( &constant_bin[ 1096802 ], 6, 1 );
    const_str_plain_CS8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096808 ], 3, 1 );
    const_str_plain_OFLAG = UNSTREAM_STRING_ASCII( &constant_bin[ 1096811 ], 5, 1 );
    const_str_plain_IEXTEN = UNSTREAM_STRING_ASCII( &constant_bin[ 1096816 ], 6, 1 );
    const_str_plain_LFLAG = UNSTREAM_STRING_ASCII( &constant_bin[ 1096822 ], 5, 1 );
    const_str_plain_PARENB = UNSTREAM_STRING_ASCII( &constant_bin[ 1096827 ], 6, 1 );
    const_str_plain_OPOST = UNSTREAM_STRING_ASCII( &constant_bin[ 1096833 ], 5, 1 );
    const_str_digest_0cd73222ad159c2c17b9868392d6ef06 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096838 ], 6, 0 );
    const_str_plain_ISPEED = UNSTREAM_STRING_ASCII( &constant_bin[ 1096844 ], 6, 1 );
    const_str_plain_ICRNL = UNSTREAM_STRING_ASCII( &constant_bin[ 1096850 ], 5, 1 );
    const_str_plain_ISIG = UNSTREAM_STRING_ASCII( &constant_bin[ 1096855 ], 4, 1 );
    const_str_digest_f4b2ab7e1a28ab9ab5d2bc7610951ee0 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096859 ], 12, 0 );
    const_str_plain_CFLAG = UNSTREAM_STRING_ASCII( &constant_bin[ 1096871 ], 5, 1 );
    const_str_plain_CC = UNSTREAM_STRING_ASCII( &constant_bin[ 138048 ], 2, 1 );
    const_str_plain_termios = UNSTREAM_STRING_ASCII( &constant_bin[ 1096876 ], 7, 1 );
    const_str_plain_BRKINT = UNSTREAM_STRING_ASCII( &constant_bin[ 1096883 ], 6, 1 );
    const_str_plain_ISTRIP = UNSTREAM_STRING_ASCII( &constant_bin[ 1096889 ], 6, 1 );
    const_str_plain_INPCK = UNSTREAM_STRING_ASCII( &constant_bin[ 1096895 ], 5, 1 );
    const_str_plain_CSIZE = UNSTREAM_STRING_ASCII( &constant_bin[ 1096900 ], 5, 1 );
    const_str_plain_VMIN = UNSTREAM_STRING_ASCII( &constant_bin[ 1096905 ], 4, 1 );
    const_str_digest_a9aeb968972d446adca9df377edec887 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096909 ], 29, 0 );
    const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple, 0, const_str_plain_fd ); Py_INCREF( const_str_plain_fd );
    PyTuple_SET_ITEM( const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple, 1, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_plain_IXON = UNSTREAM_STRING_ASCII( &constant_bin[ 1096938 ], 4, 1 );
    const_str_plain_setraw = UNSTREAM_STRING_ASCII( &constant_bin[ 284670 ], 6, 1 );
    const_str_plain_ICANON = UNSTREAM_STRING_ASCII( &constant_bin[ 1096942 ], 6, 1 );
    const_list_str_plain_setraw_str_plain_setcbreak_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_setraw_str_plain_setcbreak_list, 0, const_str_plain_setraw ); Py_INCREF( const_str_plain_setraw );
    PyList_SET_ITEM( const_list_str_plain_setraw_str_plain_setcbreak_list, 1, const_str_plain_setcbreak ); Py_INCREF( const_str_plain_setcbreak );
    const_str_plain_IFLAG = UNSTREAM_STRING_ASCII( &constant_bin[ 1096948 ], 5, 1 );
    const_str_digest_2abdb942b085d2c1b7c8d57642d1717f = UNSTREAM_STRING_ASCII( &constant_bin[ 1096953 ], 32, 0 );
    const_str_plain_ECHO = UNSTREAM_STRING_ASCII( &constant_bin[ 1096985 ], 4, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tty( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_62fd877d67bef2a9d5098f67dc3d1918;
static PyCodeObject *codeobj_6c6aaecb9c3ccf1a1596bb057e230da7;
static PyCodeObject *codeobj_fcf7ba794ba46da91b2e9e55a7bd05d4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0cd73222ad159c2c17b9868392d6ef06 );
    codeobj_62fd877d67bef2a9d5098f67dc3d1918 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f4b2ab7e1a28ab9ab5d2bc7610951ee0, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6c6aaecb9c3ccf1a1596bb057e230da7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setcbreak, 30, const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fcf7ba794ba46da91b2e9e55a7bd05d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setraw, 18, const_tuple_str_plain_fd_str_plain_when_str_plain_mode_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_tty$$$function_1_setraw( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tty$$$function_2_setcbreak( PyObject *defaults );


// The module function definitions.
static PyObject *impl_tty$$$function_1_setraw( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fd = python_pars[ 0 ];
    PyObject *par_when = python_pars[ 1 ];
    PyObject *var_mode = NULL;
    struct Nuitka_FrameObject *frame_fcf7ba794ba46da91b2e9e55a7bd05d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fcf7ba794ba46da91b2e9e55a7bd05d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcf7ba794ba46da91b2e9e55a7bd05d4, codeobj_fcf7ba794ba46da91b2e9e55a7bd05d4, module_tty, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcf7ba794ba46da91b2e9e55a7bd05d4 = cache_frame_fcf7ba794ba46da91b2e9e55a7bd05d4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_tcgetattr );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tcgetattr );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tcgetattr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fd );
        tmp_args_element_name_1 = par_fd;
        frame_fcf7ba794ba46da91b2e9e55a7bd05d4->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_mode == NULL );
        var_mode = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_mvar_value_8;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_1 = var_mode;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_IFLAG );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IFLAG );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = tmp_mvar_value_2;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_BRKINT );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BRKINT );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BRKINT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_5 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ICRNL );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ICRNL );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ICRNL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = tmp_mvar_value_4;
        tmp_left_name_4 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_5, tmp_right_name_2 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_INPCK );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_INPCK );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "INPCK" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_5;
        tmp_left_name_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ISTRIP );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISTRIP );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISTRIP" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = tmp_mvar_value_6;
        tmp_left_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_IXON );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IXON );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IXON" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = tmp_mvar_value_7;
        tmp_operand_name_1 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mode );
        tmp_ass_subscribed_1 = var_mode;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_IFLAG );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IFLAG );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = tmp_mvar_value_8;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_right_name_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_mvar_value_11;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_2 = var_mode;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_OFLAG );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OFLAG );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = tmp_mvar_value_9;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_OPOST );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OPOST );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OPOST" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = tmp_mvar_value_10;
        tmp_right_name_6 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mode );
        tmp_ass_subscribed_2 = var_mode;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_OFLAG );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OFLAG );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = tmp_mvar_value_11;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_right_name_7;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_left_name_8;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_right_name_8;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_mvar_value_15;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_3 = var_mode;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CFLAG );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CFLAG );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = tmp_mvar_value_12;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CSIZE );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSIZE );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_left_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSIZE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_PARENB );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARENB );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_left_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PARENB" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_8 = tmp_mvar_value_14;
        tmp_operand_name_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mode );
        tmp_ass_subscribed_3 = var_mode;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CFLAG );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CFLAG );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = tmp_mvar_value_15;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_9;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_right_name_9;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_mvar_value_18;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_4 = var_mode;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CFLAG );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CFLAG );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_4 = tmp_mvar_value_16;
        tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CS8 );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CS8 );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_left_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CS8" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_9 = tmp_mvar_value_17;
        tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mode );
        tmp_ass_subscribed_4 = var_mode;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CFLAG );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CFLAG );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = tmp_mvar_value_18;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_right_name_10;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_right_name_11;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_right_name_12;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_right_name_13;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_mvar_value_24;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_5 = var_mode;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_LFLAG );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LFLAG );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_5 = tmp_mvar_value_19;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ECHO );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ECHO );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_left_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ECHO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_13 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ICANON );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ICANON );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_left_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ICANON" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_11 = tmp_mvar_value_21;
        tmp_left_name_12 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_13, tmp_right_name_11 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_IEXTEN );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IEXTEN );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_left_name_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IEXTEN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_12 = tmp_mvar_value_22;
        tmp_left_name_11 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ISIG );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISIG );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_left_name_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISIG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_13 = tmp_mvar_value_23;
        tmp_operand_name_4 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_11, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_operand_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
        Py_DECREF( tmp_operand_name_4 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mode );
        tmp_ass_subscribed_5 = var_mode;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_LFLAG );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LFLAG );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_5 = tmp_mvar_value_24;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_mvar_value_26;
        tmp_ass_subvalue_6 = const_int_pos_1;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_6 = var_mode;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CC );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CC );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CC" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_6 = tmp_mvar_value_25;
        tmp_ass_subscribed_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_ass_subscribed_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_VMIN );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VMIN );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VMIN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_6 = tmp_mvar_value_26;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subscribed_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_mvar_value_28;
        tmp_ass_subvalue_7 = const_int_0;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_7 = var_mode;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CC );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CC );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CC" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_7 = tmp_mvar_value_27;
        tmp_ass_subscribed_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_ass_subscribed_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_VTIME );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VTIME );
        }

        if ( tmp_mvar_value_28 == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VTIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_7 = tmp_mvar_value_28;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
        Py_DECREF( tmp_ass_subscribed_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_tcsetattr );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tcsetattr );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tcsetattr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_29;
        CHECK_OBJECT( par_fd );
        tmp_args_element_name_2 = par_fd;
        CHECK_OBJECT( par_when );
        tmp_args_element_name_3 = par_when;
        CHECK_OBJECT( var_mode );
        tmp_args_element_name_4 = var_mode;
        frame_fcf7ba794ba46da91b2e9e55a7bd05d4->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcf7ba794ba46da91b2e9e55a7bd05d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcf7ba794ba46da91b2e9e55a7bd05d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcf7ba794ba46da91b2e9e55a7bd05d4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcf7ba794ba46da91b2e9e55a7bd05d4,
        type_description_1,
        par_fd,
        par_when,
        var_mode
    );


    // Release cached frame.
    if ( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 == cache_frame_fcf7ba794ba46da91b2e9e55a7bd05d4 )
    {
        Py_DECREF( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 );
    }
    cache_frame_fcf7ba794ba46da91b2e9e55a7bd05d4 = NULL;

    assertFrameObject( frame_fcf7ba794ba46da91b2e9e55a7bd05d4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tty$$$function_1_setraw );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fd );
    Py_DECREF( par_fd );
    par_fd = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_mode );
    Py_DECREF( var_mode );
    var_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fd );
    Py_DECREF( par_fd );
    par_fd = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_mode );
    var_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tty$$$function_1_setraw );
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


static PyObject *impl_tty$$$function_2_setcbreak( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fd = python_pars[ 0 ];
    PyObject *par_when = python_pars[ 1 ];
    PyObject *var_mode = NULL;
    struct Nuitka_FrameObject *frame_6c6aaecb9c3ccf1a1596bb057e230da7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6c6aaecb9c3ccf1a1596bb057e230da7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c6aaecb9c3ccf1a1596bb057e230da7, codeobj_6c6aaecb9c3ccf1a1596bb057e230da7, module_tty, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c6aaecb9c3ccf1a1596bb057e230da7 = cache_frame_6c6aaecb9c3ccf1a1596bb057e230da7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c6aaecb9c3ccf1a1596bb057e230da7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c6aaecb9c3ccf1a1596bb057e230da7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_tcgetattr );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tcgetattr );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tcgetattr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fd );
        tmp_args_element_name_1 = par_fd;
        frame_6c6aaecb9c3ccf1a1596bb057e230da7->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_mode == NULL );
        var_mode = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_1 = var_mode;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_LFLAG );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LFLAG );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = tmp_mvar_value_2;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ECHO );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ECHO );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ECHO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ICANON );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ICANON );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ICANON" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = tmp_mvar_value_4;
        tmp_operand_name_1 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mode );
        tmp_ass_subscribed_1 = var_mode;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_LFLAG );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LFLAG );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LFLAG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = tmp_mvar_value_5;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_mvar_value_7;
        tmp_ass_subvalue_2 = const_int_pos_1;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_2 = var_mode;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CC );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CC );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CC" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = tmp_mvar_value_6;
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_ass_subscribed_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_VMIN );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VMIN );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VMIN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = tmp_mvar_value_7;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscribed_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_mvar_value_9;
        tmp_ass_subvalue_3 = const_int_0;
        CHECK_OBJECT( var_mode );
        tmp_subscribed_name_3 = var_mode;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CC );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CC );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CC" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = tmp_mvar_value_8;
        tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_ass_subscribed_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_VTIME );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VTIME );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VTIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = tmp_mvar_value_9;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscribed_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_tcsetattr );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tcsetattr );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tcsetattr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_10;
        CHECK_OBJECT( par_fd );
        tmp_args_element_name_2 = par_fd;
        CHECK_OBJECT( par_when );
        tmp_args_element_name_3 = par_when;
        CHECK_OBJECT( var_mode );
        tmp_args_element_name_4 = var_mode;
        frame_6c6aaecb9c3ccf1a1596bb057e230da7->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c6aaecb9c3ccf1a1596bb057e230da7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c6aaecb9c3ccf1a1596bb057e230da7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c6aaecb9c3ccf1a1596bb057e230da7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c6aaecb9c3ccf1a1596bb057e230da7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c6aaecb9c3ccf1a1596bb057e230da7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c6aaecb9c3ccf1a1596bb057e230da7,
        type_description_1,
        par_fd,
        par_when,
        var_mode
    );


    // Release cached frame.
    if ( frame_6c6aaecb9c3ccf1a1596bb057e230da7 == cache_frame_6c6aaecb9c3ccf1a1596bb057e230da7 )
    {
        Py_DECREF( frame_6c6aaecb9c3ccf1a1596bb057e230da7 );
    }
    cache_frame_6c6aaecb9c3ccf1a1596bb057e230da7 = NULL;

    assertFrameObject( frame_6c6aaecb9c3ccf1a1596bb057e230da7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tty$$$function_2_setcbreak );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fd );
    Py_DECREF( par_fd );
    par_fd = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_mode );
    Py_DECREF( var_mode );
    var_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fd );
    Py_DECREF( par_fd );
    par_fd = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_mode );
    var_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tty$$$function_2_setcbreak );
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



static PyObject *MAKE_FUNCTION_tty$$$function_1_setraw( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tty$$$function_1_setraw,
        const_str_plain_setraw,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fcf7ba794ba46da91b2e9e55a7bd05d4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_tty,
        const_str_digest_a9aeb968972d446adca9df377edec887,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tty$$$function_2_setcbreak( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tty$$$function_2_setcbreak,
        const_str_plain_setcbreak,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c6aaecb9c3ccf1a1596bb057e230da7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_tty,
        const_str_digest_2abdb942b085d2c1b7c8d57642d1717f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tty =
{
    PyModuleDef_HEAD_INIT,
    "tty",
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

MOD_INIT_DECL( tty )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tty );
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
    puts("tty: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tty: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tty: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittty" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tty = Py_InitModule4(
        "tty",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_tty = PyModule_Create( &mdef_tty );
#endif

    moduledict_tty = MODULE_DICT( module_tty );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_tty,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_tty,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_tty,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_tty,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_tty );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_tty, module_tty );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_tty, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_62fd877d67bef2a9d5098f67dc3d1918;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_9b2f096334f3a9d51dd2a94a27e9fe87;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_62fd877d67bef2a9d5098f67dc3d1918 = MAKE_MODULE_FRAME( codeobj_62fd877d67bef2a9d5098f67dc3d1918, module_tty );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_62fd877d67bef2a9d5098f67dc3d1918 );
    assert( Py_REFCNT( frame_62fd877d67bef2a9d5098f67dc3d1918 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_termios;
        tmp_globals_name_1 = (PyObject *)moduledict_tty;
        tmp_locals_name_1 = (PyObject *)moduledict_tty;
        tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
        tmp_level_name_1 = const_int_0;
        frame_62fd877d67bef2a9d5098f67dc3d1918->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_tty, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_str_plain_setraw_str_plain_setcbreak_list );
        UPDATE_STRING_DICT1( moduledict_tty, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_IFLAG, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_OFLAG, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CFLAG, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_LFLAG, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_ISPEED, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_OSPEED, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_tty, (Nuitka_StringObject *)const_str_plain_CC, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_TCSAFLUSH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TCSAFLUSH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TCSAFLUSH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_defaults_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_tty$$$function_1_setraw( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_tty, (Nuitka_StringObject *)const_str_plain_setraw, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain_TCSAFLUSH );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TCSAFLUSH );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TCSAFLUSH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_4;
        tmp_defaults_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
        tmp_assign_source_13 = MAKE_FUNCTION_tty$$$function_2_setcbreak( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_tty, (Nuitka_StringObject *)const_str_plain_setcbreak, tmp_assign_source_13 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62fd877d67bef2a9d5098f67dc3d1918 );
#endif
    popFrameStack();

    assertFrameObject( frame_62fd877d67bef2a9d5098f67dc3d1918 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62fd877d67bef2a9d5098f67dc3d1918 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62fd877d67bef2a9d5098f67dc3d1918, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62fd877d67bef2a9d5098f67dc3d1918->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62fd877d67bef2a9d5098f67dc3d1918, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_tty, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_tty );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
