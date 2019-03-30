/* Generated code for Python module 'signal'
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

/* The "_module_signal" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_signal;
PyDictObject *moduledict_signal;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_set;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_ValueError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_value_tuple;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_5d368a36f56e0961e3277de188978a52;
static PyObject *const_str_plain_CTRL_;
static PyObject *const_str_plain_SIG_BLOCK;
extern PyObject *const_str_plain_signal;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_sigset;
static PyObject *const_str_digest_39ebdc36edd7b5ff4ded615d66a59272;
extern PyObject *const_str_plain_TypeError;
extern PyObject *const_tuple_str_plain_value_str_plain_enum_klass_tuple;
extern PyObject *const_str_plain_SIG_DFL;
static PyObject *const_tuple_str_plain_sigs_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_3ab5e64e01a930cb244d6c5d52766173;
extern PyObject *const_str_plain_enum_klass;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_wraps;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_sigwait;
static PyObject *const_str_plain_SIG;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_56da65e3029c892a28553c702faedb16;
static PyObject *const_str_plain__int_to_enum;
extern PyObject *const_str_plain_IntEnum;
static PyObject *const_tuple_str_plain_SIG_tuple;
extern PyObject *const_str_plain_globals;
static PyObject *const_str_digest_c776bf7289055fbf770115b471545bd8;
extern PyObject *const_str_plain_mask;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
extern PyObject *const_tuple_str_plain_IntEnum_tuple;
static PyObject *const_tuple_str_plain_CTRL__tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_how_str_plain_mask_str_plain_sigs_set_tuple;
static PyObject *const_str_plain__signal;
static PyObject *const_str_plain_SIG_SETMASK;
static PyObject *const_str_plain__globals;
extern PyObject *const_tuple_str_plain_wraps_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_signalnum_str_plain_handler_tuple;
static PyObject *const_tuple_str_plain_SIG_DFL_str_plain_SIG_IGN_tuple;
static PyObject *const_str_plain_SIG_UNBLOCK;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain__enum_to_int;
extern PyObject *const_str_plain__IntEnum;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_SIG_;
static PyObject *const_str_plain_Handlers;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_plain_retsig;
static PyObject *const_str_plain_pthread_sigmask;
static PyObject *const_str_digest_1b9080cc7aba9c4e1ed741698000c009;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain__convert;
extern PyObject *const_str_plain_getsignal;
static PyObject *const_tuple_450d3ca93c52eb0b3bc76c55c3085b65_tuple;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain_sigpending;
static PyObject *const_str_plain_signalnum;
static PyObject *const_str_plain_Sigmasks;
static PyObject *const_tuple_str_plain_SIG__tuple;
static PyObject *const_str_plain_sigs_set;
extern PyObject *const_str_plain_how;
extern PyObject *const_str_plain_Signals;
static PyObject *const_str_plain__wraps;
extern PyObject *const_str_plain_SIG_IGN;
extern PyObject *const_str_plain_enum;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_isupper;
static PyObject *const_str_plain_sigs;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_str_plain_sigset_str_plain_retsig_tuple;
extern PyObject *const_str_plain_handler;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_5d368a36f56e0961e3277de188978a52 = UNSTREAM_STRING_ASCII( &constant_bin[ 997648 ], 29, 0 );
    const_str_plain_CTRL_ = UNSTREAM_STRING_ASCII( &constant_bin[ 997677 ], 5, 1 );
    const_str_plain_SIG_BLOCK = UNSTREAM_STRING_ASCII( &constant_bin[ 997682 ], 9, 1 );
    const_str_plain_sigset = UNSTREAM_STRING_ASCII( &constant_bin[ 997691 ], 6, 1 );
    const_str_digest_39ebdc36edd7b5ff4ded615d66a59272 = UNSTREAM_STRING_ASCII( &constant_bin[ 997697 ], 34, 0 );
    const_tuple_str_plain_sigs_tuple = PyTuple_New( 1 );
    const_str_plain_sigs = UNSTREAM_STRING_ASCII( &constant_bin[ 997691 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sigs_tuple, 0, const_str_plain_sigs ); Py_INCREF( const_str_plain_sigs );
    const_str_digest_3ab5e64e01a930cb244d6c5d52766173 = UNSTREAM_STRING_ASCII( &constant_bin[ 997731 ], 115, 0 );
    const_str_plain_sigwait = UNSTREAM_STRING_ASCII( &constant_bin[ 997846 ], 7, 1 );
    const_str_plain_SIG = UNSTREAM_STRING_ASCII( &constant_bin[ 530788 ], 3, 1 );
    const_str_digest_56da65e3029c892a28553c702faedb16 = UNSTREAM_STRING_ASCII( &constant_bin[ 997853 ], 109, 0 );
    const_str_plain__int_to_enum = UNSTREAM_STRING_ASCII( &constant_bin[ 997962 ], 12, 1 );
    const_tuple_str_plain_SIG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SIG_tuple, 0, const_str_plain_SIG ); Py_INCREF( const_str_plain_SIG );
    const_str_digest_c776bf7289055fbf770115b471545bd8 = UNSTREAM_STRING_ASCII( &constant_bin[ 997974 ], 9, 0 );
    const_tuple_str_plain_CTRL__tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CTRL__tuple, 0, const_str_plain_CTRL_ ); Py_INCREF( const_str_plain_CTRL_ );
    const_tuple_str_plain_how_str_plain_mask_str_plain_sigs_set_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_how_str_plain_mask_str_plain_sigs_set_tuple, 0, const_str_plain_how ); Py_INCREF( const_str_plain_how );
    PyTuple_SET_ITEM( const_tuple_str_plain_how_str_plain_mask_str_plain_sigs_set_tuple, 1, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_plain_sigs_set = UNSTREAM_STRING_ASCII( &constant_bin[ 997983 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_how_str_plain_mask_str_plain_sigs_set_tuple, 2, const_str_plain_sigs_set ); Py_INCREF( const_str_plain_sigs_set );
    const_str_plain__signal = UNSTREAM_STRING_ASCII( &constant_bin[ 997991 ], 7, 1 );
    const_str_plain_SIG_SETMASK = UNSTREAM_STRING_ASCII( &constant_bin[ 997998 ], 11, 1 );
    const_str_plain__globals = UNSTREAM_STRING_ASCII( &constant_bin[ 134705 ], 8, 1 );
    const_tuple_str_plain_signalnum_str_plain_handler_tuple = PyTuple_New( 2 );
    const_str_plain_signalnum = UNSTREAM_STRING_ASCII( &constant_bin[ 998009 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_signalnum_str_plain_handler_tuple, 0, const_str_plain_signalnum ); Py_INCREF( const_str_plain_signalnum );
    PyTuple_SET_ITEM( const_tuple_str_plain_signalnum_str_plain_handler_tuple, 1, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    const_tuple_str_plain_SIG_DFL_str_plain_SIG_IGN_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SIG_DFL_str_plain_SIG_IGN_tuple, 0, const_str_plain_SIG_DFL ); Py_INCREF( const_str_plain_SIG_DFL );
    PyTuple_SET_ITEM( const_tuple_str_plain_SIG_DFL_str_plain_SIG_IGN_tuple, 1, const_str_plain_SIG_IGN ); Py_INCREF( const_str_plain_SIG_IGN );
    const_str_plain_SIG_UNBLOCK = UNSTREAM_STRING_ASCII( &constant_bin[ 998018 ], 11, 1 );
    const_str_plain__enum_to_int = UNSTREAM_STRING_ASCII( &constant_bin[ 998029 ], 12, 1 );
    const_str_plain_SIG_ = UNSTREAM_STRING_ASCII( &constant_bin[ 997682 ], 4, 1 );
    const_str_plain_Handlers = UNSTREAM_STRING_ASCII( &constant_bin[ 391321 ], 8, 1 );
    const_str_plain_retsig = UNSTREAM_STRING_ASCII( &constant_bin[ 998041 ], 6, 1 );
    const_str_plain_pthread_sigmask = UNSTREAM_STRING_ASCII( &constant_bin[ 997697 ], 15, 1 );
    const_str_digest_1b9080cc7aba9c4e1ed741698000c009 = UNSTREAM_STRING_ASCII( &constant_bin[ 998047 ], 15, 0 );
    const_tuple_450d3ca93c52eb0b3bc76c55c3085b65_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_450d3ca93c52eb0b3bc76c55c3085b65_tuple, 0, const_str_plain_SIG_BLOCK ); Py_INCREF( const_str_plain_SIG_BLOCK );
    PyTuple_SET_ITEM( const_tuple_450d3ca93c52eb0b3bc76c55c3085b65_tuple, 1, const_str_plain_SIG_UNBLOCK ); Py_INCREF( const_str_plain_SIG_UNBLOCK );
    PyTuple_SET_ITEM( const_tuple_450d3ca93c52eb0b3bc76c55c3085b65_tuple, 2, const_str_plain_SIG_SETMASK ); Py_INCREF( const_str_plain_SIG_SETMASK );
    const_str_plain_sigpending = UNSTREAM_STRING_ASCII( &constant_bin[ 997648 ], 10, 1 );
    const_str_plain_Sigmasks = UNSTREAM_STRING_ASCII( &constant_bin[ 998062 ], 8, 1 );
    const_tuple_str_plain_SIG__tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SIG__tuple, 0, const_str_plain_SIG_ ); Py_INCREF( const_str_plain_SIG_ );
    const_str_plain__wraps = UNSTREAM_STRING_ASCII( &constant_bin[ 998070 ], 6, 1 );
    const_tuple_str_plain_sigset_str_plain_retsig_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sigset_str_plain_retsig_tuple, 0, const_str_plain_sigset ); Py_INCREF( const_str_plain_sigset );
    PyTuple_SET_ITEM( const_tuple_str_plain_sigset_str_plain_retsig_tuple, 1, const_str_plain_retsig ); Py_INCREF( const_str_plain_retsig );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_signal( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_70480a536c8b679349d70d14bf383cdb;
static PyCodeObject *codeobj_1b1a91cc806b3db818708f9f431116bf;
static PyCodeObject *codeobj_51809156b2ea9706475c948afc002ea9;
static PyCodeObject *codeobj_e1418ed0e646a0fc983f71f02cf5d85f;
static PyCodeObject *codeobj_808c68840268c09ca481b247013b3f39;
static PyCodeObject *codeobj_b0105c778bcb080f764b828bf8e03c49;
static PyCodeObject *codeobj_0524c05f016113b2dd93d7208d2abe1f;
static PyCodeObject *codeobj_a72cf2d0abf9d259d623eab6707f3fd4;
static PyCodeObject *codeobj_6cea44759a8cc52fcace02ae21cdaff1;
static PyCodeObject *codeobj_a36bfc37034ff01886da7793d6ec38eb;
static PyCodeObject *codeobj_a70989eb3e576690f1ac8d963dcb7eed;
static PyCodeObject *codeobj_b42b8f2e26394a39d7003280aac8821b;
static PyCodeObject *codeobj_3b627961a0977383897c3b57b5b3baaf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c776bf7289055fbf770115b471545bd8 );
    codeobj_70480a536c8b679349d70d14bf383cdb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 61, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1b1a91cc806b3db818708f9f431116bf = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 69, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_51809156b2ea9706475c948afc002ea9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 10, const_tuple_str_plain_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1418ed0e646a0fc983f71f02cf5d85f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 17, const_tuple_str_plain_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_808c68840268c09ca481b247013b3f39 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 22, const_tuple_str_plain_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b0105c778bcb080f764b828bf8e03c49 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1b9080cc7aba9c4e1ed741698000c009, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0524c05f016113b2dd93d7208d2abe1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__enum_to_int, 35, const_tuple_str_plain_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a72cf2d0abf9d259d623eab6707f3fd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__int_to_enum, 25, const_tuple_str_plain_value_str_plain_enum_klass_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6cea44759a8cc52fcace02ae21cdaff1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getsignal, 51, const_tuple_str_plain_signalnum_str_plain_handler_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a36bfc37034ff01886da7793d6ec38eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pthread_sigmask, 58, const_tuple_str_plain_how_str_plain_mask_str_plain_sigs_set_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a70989eb3e576690f1ac8d963dcb7eed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signal, 45, const_tuple_str_plain_signalnum_str_plain_handler_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b42b8f2e26394a39d7003280aac8821b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sigpending, 66, const_tuple_str_plain_sigs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b627961a0977383897c3b57b5b3baaf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sigwait, 73, const_tuple_str_plain_sigset_str_plain_retsig_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_maker( void );


static PyObject *signal$$$function_9_sigpending$$$genexpr_1_genexpr_maker( void );


static PyObject *MAKE_FUNCTION_signal$$$function_10_sigwait(  );


static PyObject *MAKE_FUNCTION_signal$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_signal$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_signal$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_signal$$$function_4__int_to_enum(  );


static PyObject *MAKE_FUNCTION_signal$$$function_5__enum_to_int(  );


static PyObject *MAKE_FUNCTION_signal$$$function_6_signal(  );


static PyObject *MAKE_FUNCTION_signal$$$function_7_getsignal(  );


static PyObject *MAKE_FUNCTION_signal$$$function_8_pthread_sigmask(  );


static PyObject *MAKE_FUNCTION_signal$$$function_9_sigpending(  );


// The module function definitions.
static PyObject *impl_signal$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_51809156b2ea9706475c948afc002ea9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_51809156b2ea9706475c948afc002ea9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_51809156b2ea9706475c948afc002ea9, codeobj_51809156b2ea9706475c948afc002ea9, module_signal, sizeof(void *) );
    frame_51809156b2ea9706475c948afc002ea9 = cache_frame_51809156b2ea9706475c948afc002ea9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_51809156b2ea9706475c948afc002ea9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_51809156b2ea9706475c948afc002ea9 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_name );
        tmp_called_instance_1 = par_name;
        frame_51809156b2ea9706475c948afc002ea9->m_frame.f_lineno = 11;
        tmp_and_left_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isupper );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 12;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_name );
        tmp_called_instance_2 = par_name;
        frame_51809156b2ea9706475c948afc002ea9->m_frame.f_lineno = 12;
        tmp_and_left_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_SIG_tuple, 0 ) );

        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF( tmp_and_left_value_2 );
        CHECK_OBJECT( par_name );
        tmp_called_instance_3 = par_name;
        frame_51809156b2ea9706475c948afc002ea9->m_frame.f_lineno = 12;
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_SIG__tuple, 0 ) );

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_and_right_value_2 );
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 13;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_name );
        tmp_called_instance_4 = par_name;
        frame_51809156b2ea9706475c948afc002ea9->m_frame.f_lineno = 13;
        tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_CTRL__tuple, 0 ) );

        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51809156b2ea9706475c948afc002ea9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_51809156b2ea9706475c948afc002ea9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51809156b2ea9706475c948afc002ea9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51809156b2ea9706475c948afc002ea9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51809156b2ea9706475c948afc002ea9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51809156b2ea9706475c948afc002ea9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51809156b2ea9706475c948afc002ea9,
        type_description_1,
        par_name
    );


    // Release cached frame.
    if ( frame_51809156b2ea9706475c948afc002ea9 == cache_frame_51809156b2ea9706475c948afc002ea9 )
    {
        Py_DECREF( frame_51809156b2ea9706475c948afc002ea9 );
    }
    cache_frame_51809156b2ea9706475c948afc002ea9 = NULL;

    assertFrameObject( frame_51809156b2ea9706475c948afc002ea9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_1_lambda );
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


static PyObject *impl_signal$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e1418ed0e646a0fc983f71f02cf5d85f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1418ed0e646a0fc983f71f02cf5d85f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1418ed0e646a0fc983f71f02cf5d85f, codeobj_e1418ed0e646a0fc983f71f02cf5d85f, module_signal, sizeof(void *) );
    frame_e1418ed0e646a0fc983f71f02cf5d85f = cache_frame_e1418ed0e646a0fc983f71f02cf5d85f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1418ed0e646a0fc983f71f02cf5d85f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1418ed0e646a0fc983f71f02cf5d85f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_1 = par_name;
        tmp_compexpr_right_1 = const_tuple_str_plain_SIG_DFL_str_plain_SIG_IGN_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 1 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1418ed0e646a0fc983f71f02cf5d85f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1418ed0e646a0fc983f71f02cf5d85f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1418ed0e646a0fc983f71f02cf5d85f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1418ed0e646a0fc983f71f02cf5d85f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1418ed0e646a0fc983f71f02cf5d85f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1418ed0e646a0fc983f71f02cf5d85f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1418ed0e646a0fc983f71f02cf5d85f,
        type_description_1,
        par_name
    );


    // Release cached frame.
    if ( frame_e1418ed0e646a0fc983f71f02cf5d85f == cache_frame_e1418ed0e646a0fc983f71f02cf5d85f )
    {
        Py_DECREF( frame_e1418ed0e646a0fc983f71f02cf5d85f );
    }
    cache_frame_e1418ed0e646a0fc983f71f02cf5d85f = NULL;

    assertFrameObject( frame_e1418ed0e646a0fc983f71f02cf5d85f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_2_lambda );
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


static PyObject *impl_signal$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_808c68840268c09ca481b247013b3f39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_808c68840268c09ca481b247013b3f39 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_808c68840268c09ca481b247013b3f39, codeobj_808c68840268c09ca481b247013b3f39, module_signal, sizeof(void *) );
    frame_808c68840268c09ca481b247013b3f39 = cache_frame_808c68840268c09ca481b247013b3f39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_808c68840268c09ca481b247013b3f39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_808c68840268c09ca481b247013b3f39 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_1 = par_name;
        tmp_compexpr_right_1 = const_tuple_450d3ca93c52eb0b3bc76c55c3085b65_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 1 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_808c68840268c09ca481b247013b3f39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_808c68840268c09ca481b247013b3f39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_808c68840268c09ca481b247013b3f39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_808c68840268c09ca481b247013b3f39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_808c68840268c09ca481b247013b3f39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_808c68840268c09ca481b247013b3f39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_808c68840268c09ca481b247013b3f39,
        type_description_1,
        par_name
    );


    // Release cached frame.
    if ( frame_808c68840268c09ca481b247013b3f39 == cache_frame_808c68840268c09ca481b247013b3f39 )
    {
        Py_DECREF( frame_808c68840268c09ca481b247013b3f39 );
    }
    cache_frame_808c68840268c09ca481b247013b3f39 = NULL;

    assertFrameObject( frame_808c68840268c09ca481b247013b3f39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_3_lambda );
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


static PyObject *impl_signal$$$function_4__int_to_enum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_enum_klass = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a72cf2d0abf9d259d623eab6707f3fd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_a72cf2d0abf9d259d623eab6707f3fd4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a72cf2d0abf9d259d623eab6707f3fd4, codeobj_a72cf2d0abf9d259d623eab6707f3fd4, module_signal, sizeof(void *)+sizeof(void *) );
    frame_a72cf2d0abf9d259d623eab6707f3fd4 = cache_frame_a72cf2d0abf9d259d623eab6707f3fd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a72cf2d0abf9d259d623eab6707f3fd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a72cf2d0abf9d259d623eab6707f3fd4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_enum_klass );
        tmp_called_name_1 = par_enum_klass;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_1 = par_value;
        frame_a72cf2d0abf9d259d623eab6707f3fd4->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_4__int_to_enum );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a72cf2d0abf9d259d623eab6707f3fd4, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a72cf2d0abf9d259d623eab6707f3fd4, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_ValueError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
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
        CHECK_OBJECT( par_value );
        tmp_return_value = par_value;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 29;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a72cf2d0abf9d259d623eab6707f3fd4->m_frame) frame_a72cf2d0abf9d259d623eab6707f3fd4->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_4__int_to_enum );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a72cf2d0abf9d259d623eab6707f3fd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a72cf2d0abf9d259d623eab6707f3fd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a72cf2d0abf9d259d623eab6707f3fd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a72cf2d0abf9d259d623eab6707f3fd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a72cf2d0abf9d259d623eab6707f3fd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a72cf2d0abf9d259d623eab6707f3fd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a72cf2d0abf9d259d623eab6707f3fd4,
        type_description_1,
        par_value,
        par_enum_klass
    );


    // Release cached frame.
    if ( frame_a72cf2d0abf9d259d623eab6707f3fd4 == cache_frame_a72cf2d0abf9d259d623eab6707f3fd4 )
    {
        Py_DECREF( frame_a72cf2d0abf9d259d623eab6707f3fd4 );
    }
    cache_frame_a72cf2d0abf9d259d623eab6707f3fd4 = NULL;

    assertFrameObject( frame_a72cf2d0abf9d259d623eab6707f3fd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_4__int_to_enum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_enum_klass );
    Py_DECREF( par_enum_klass );
    par_enum_klass = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_enum_klass );
    Py_DECREF( par_enum_klass );
    par_enum_klass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_4__int_to_enum );
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


static PyObject *impl_signal$$$function_5__enum_to_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0524c05f016113b2dd93d7208d2abe1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_0524c05f016113b2dd93d7208d2abe1f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0524c05f016113b2dd93d7208d2abe1f, codeobj_0524c05f016113b2dd93d7208d2abe1f, module_signal, sizeof(void *) );
    frame_0524c05f016113b2dd93d7208d2abe1f = cache_frame_0524c05f016113b2dd93d7208d2abe1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0524c05f016113b2dd93d7208d2abe1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0524c05f016113b2dd93d7208d2abe1f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_int );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "o";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_1 = par_value;
        frame_0524c05f016113b2dd93d7208d2abe1f->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_5__enum_to_int );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0524c05f016113b2dd93d7208d2abe1f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0524c05f016113b2dd93d7208d2abe1f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_ValueError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "o";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_TypeError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TypeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "o";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_value );
        tmp_return_value = par_value;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 39;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0524c05f016113b2dd93d7208d2abe1f->m_frame) frame_0524c05f016113b2dd93d7208d2abe1f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_5__enum_to_int );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0524c05f016113b2dd93d7208d2abe1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0524c05f016113b2dd93d7208d2abe1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0524c05f016113b2dd93d7208d2abe1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0524c05f016113b2dd93d7208d2abe1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0524c05f016113b2dd93d7208d2abe1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0524c05f016113b2dd93d7208d2abe1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0524c05f016113b2dd93d7208d2abe1f,
        type_description_1,
        par_value
    );


    // Release cached frame.
    if ( frame_0524c05f016113b2dd93d7208d2abe1f == cache_frame_0524c05f016113b2dd93d7208d2abe1f )
    {
        Py_DECREF( frame_0524c05f016113b2dd93d7208d2abe1f );
    }
    cache_frame_0524c05f016113b2dd93d7208d2abe1f = NULL;

    assertFrameObject( frame_0524c05f016113b2dd93d7208d2abe1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_5__enum_to_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_5__enum_to_int );
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


static PyObject *impl_signal$$$function_6_signal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_signalnum = python_pars[ 0 ];
    PyObject *par_handler = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a70989eb3e576690f1ac8d963dcb7eed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a70989eb3e576690f1ac8d963dcb7eed = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a70989eb3e576690f1ac8d963dcb7eed, codeobj_a70989eb3e576690f1ac8d963dcb7eed, module_signal, sizeof(void *)+sizeof(void *) );
    frame_a70989eb3e576690f1ac8d963dcb7eed = cache_frame_a70989eb3e576690f1ac8d963dcb7eed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a70989eb3e576690f1ac8d963dcb7eed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a70989eb3e576690f1ac8d963dcb7eed ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_signal );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__enum_to_int );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__enum_to_int );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_enum_to_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_signalnum );
        tmp_args_element_name_2 = par_signalnum;
        frame_a70989eb3e576690f1ac8d963dcb7eed->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__enum_to_int );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__enum_to_int );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_enum_to_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_handler );
        tmp_args_element_name_4 = par_handler;
        frame_a70989eb3e576690f1ac8d963dcb7eed->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a70989eb3e576690f1ac8d963dcb7eed->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_handler;
            assert( old != NULL );
            par_handler = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__int_to_enum );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__int_to_enum );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_int_to_enum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_handler );
        tmp_args_element_name_5 = par_handler;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_Handlers );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Handlers );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Handlers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_5;
        frame_a70989eb3e576690f1ac8d963dcb7eed->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a70989eb3e576690f1ac8d963dcb7eed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a70989eb3e576690f1ac8d963dcb7eed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a70989eb3e576690f1ac8d963dcb7eed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a70989eb3e576690f1ac8d963dcb7eed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a70989eb3e576690f1ac8d963dcb7eed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a70989eb3e576690f1ac8d963dcb7eed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a70989eb3e576690f1ac8d963dcb7eed,
        type_description_1,
        par_signalnum,
        par_handler
    );


    // Release cached frame.
    if ( frame_a70989eb3e576690f1ac8d963dcb7eed == cache_frame_a70989eb3e576690f1ac8d963dcb7eed )
    {
        Py_DECREF( frame_a70989eb3e576690f1ac8d963dcb7eed );
    }
    cache_frame_a70989eb3e576690f1ac8d963dcb7eed = NULL;

    assertFrameObject( frame_a70989eb3e576690f1ac8d963dcb7eed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_6_signal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_signalnum );
    Py_DECREF( par_signalnum );
    par_signalnum = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

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

    CHECK_OBJECT( (PyObject *)par_signalnum );
    Py_DECREF( par_signalnum );
    par_signalnum = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_6_signal );
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


static PyObject *impl_signal$$$function_7_getsignal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_signalnum = python_pars[ 0 ];
    PyObject *var_handler = NULL;
    struct Nuitka_FrameObject *frame_6cea44759a8cc52fcace02ae21cdaff1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6cea44759a8cc52fcace02ae21cdaff1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6cea44759a8cc52fcace02ae21cdaff1, codeobj_6cea44759a8cc52fcace02ae21cdaff1, module_signal, sizeof(void *)+sizeof(void *) );
    frame_6cea44759a8cc52fcace02ae21cdaff1 = cache_frame_6cea44759a8cc52fcace02ae21cdaff1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6cea44759a8cc52fcace02ae21cdaff1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6cea44759a8cc52fcace02ae21cdaff1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_signalnum );
        tmp_args_element_name_1 = par_signalnum;
        frame_6cea44759a8cc52fcace02ae21cdaff1->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getsignal, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_handler == NULL );
        var_handler = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__int_to_enum );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__int_to_enum );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_int_to_enum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_handler );
        tmp_args_element_name_2 = var_handler;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_Handlers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Handlers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Handlers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        frame_6cea44759a8cc52fcace02ae21cdaff1->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cea44759a8cc52fcace02ae21cdaff1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cea44759a8cc52fcace02ae21cdaff1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cea44759a8cc52fcace02ae21cdaff1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6cea44759a8cc52fcace02ae21cdaff1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6cea44759a8cc52fcace02ae21cdaff1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6cea44759a8cc52fcace02ae21cdaff1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6cea44759a8cc52fcace02ae21cdaff1,
        type_description_1,
        par_signalnum,
        var_handler
    );


    // Release cached frame.
    if ( frame_6cea44759a8cc52fcace02ae21cdaff1 == cache_frame_6cea44759a8cc52fcace02ae21cdaff1 )
    {
        Py_DECREF( frame_6cea44759a8cc52fcace02ae21cdaff1 );
    }
    cache_frame_6cea44759a8cc52fcace02ae21cdaff1 = NULL;

    assertFrameObject( frame_6cea44759a8cc52fcace02ae21cdaff1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_7_getsignal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_signalnum );
    Py_DECREF( par_signalnum );
    par_signalnum = NULL;

    CHECK_OBJECT( (PyObject *)var_handler );
    Py_DECREF( var_handler );
    var_handler = NULL;

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

    CHECK_OBJECT( (PyObject *)par_signalnum );
    Py_DECREF( par_signalnum );
    par_signalnum = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_7_getsignal );
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


static PyObject *impl_signal$$$function_8_pthread_sigmask( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_how = python_pars[ 0 ];
    PyObject *par_mask = python_pars[ 1 ];
    PyObject *var_sigs_set = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_a36bfc37034ff01886da7793d6ec38eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a36bfc37034ff01886da7793d6ec38eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a36bfc37034ff01886da7793d6ec38eb, codeobj_a36bfc37034ff01886da7793d6ec38eb, module_signal, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a36bfc37034ff01886da7793d6ec38eb = cache_frame_a36bfc37034ff01886da7793d6ec38eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a36bfc37034ff01886da7793d6ec38eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a36bfc37034ff01886da7793d6ec38eb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_how );
        tmp_args_element_name_1 = par_how;
        CHECK_OBJECT( par_mask );
        tmp_args_element_name_2 = par_mask;
        frame_a36bfc37034ff01886da7793d6ec38eb->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pthread_sigmask, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_sigs_set == NULL );
        var_sigs_set = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_set );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( var_sigs_set );
            tmp_iter_arg_1 = var_sigs_set;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_args_element_name_3 = signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_3)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( signal$$$function_8_pthread_sigmask );
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
        NUITKA_CANNOT_GET_HERE( signal$$$function_8_pthread_sigmask );
        return NULL;
        outline_result_1:;
        frame_a36bfc37034ff01886da7793d6ec38eb->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a36bfc37034ff01886da7793d6ec38eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a36bfc37034ff01886da7793d6ec38eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a36bfc37034ff01886da7793d6ec38eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a36bfc37034ff01886da7793d6ec38eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a36bfc37034ff01886da7793d6ec38eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a36bfc37034ff01886da7793d6ec38eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a36bfc37034ff01886da7793d6ec38eb,
        type_description_1,
        par_how,
        par_mask,
        var_sigs_set
    );


    // Release cached frame.
    if ( frame_a36bfc37034ff01886da7793d6ec38eb == cache_frame_a36bfc37034ff01886da7793d6ec38eb )
    {
        Py_DECREF( frame_a36bfc37034ff01886da7793d6ec38eb );
    }
    cache_frame_a36bfc37034ff01886da7793d6ec38eb = NULL;

    assertFrameObject( frame_a36bfc37034ff01886da7793d6ec38eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_8_pthread_sigmask );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_how );
    Py_DECREF( par_how );
    par_how = NULL;

    CHECK_OBJECT( (PyObject *)par_mask );
    Py_DECREF( par_mask );
    par_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_sigs_set );
    Py_DECREF( var_sigs_set );
    var_sigs_set = NULL;

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

    CHECK_OBJECT( (PyObject *)par_how );
    Py_DECREF( par_how );
    par_how = NULL;

    CHECK_OBJECT( (PyObject *)par_mask );
    Py_DECREF( par_mask );
    par_mask = NULL;

    Py_XDECREF( var_sigs_set );
    var_sigs_set = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_8_pthread_sigmask );
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



struct signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_locals {
    PyObject *var_x;
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

static PyObject *signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_locals *generator_heap = (struct signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_70480a536c8b679349d70d14bf383cdb, module_signal, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 61;
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
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_x );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__int_to_enum );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__int_to_enum );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_int_to_enum" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_args_element_name_1 = generator_heap->var_x;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_Signals );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signals );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signals" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        generator->m_frame->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 61;
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
            generator_heap->var_x
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

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

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

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_context,
        module_signal,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_39ebdc36edd7b5ff4ded615d66a59272,
#endif
        codeobj_70480a536c8b679349d70d14bf383cdb,
        1,
        sizeof(struct signal$$$function_8_pthread_sigmask$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_signal$$$function_9_sigpending( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_sigs = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_b42b8f2e26394a39d7003280aac8821b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b42b8f2e26394a39d7003280aac8821b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b42b8f2e26394a39d7003280aac8821b, codeobj_b42b8f2e26394a39d7003280aac8821b, module_signal, sizeof(void *) );
    frame_b42b8f2e26394a39d7003280aac8821b = cache_frame_b42b8f2e26394a39d7003280aac8821b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b42b8f2e26394a39d7003280aac8821b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b42b8f2e26394a39d7003280aac8821b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_b42b8f2e26394a39d7003280aac8821b->m_frame.f_lineno = 68;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sigpending );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert( var_sigs == NULL );
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_set );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( var_sigs );
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_args_element_name_1 = signal$$$function_9_sigpending$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( signal$$$function_9_sigpending );
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
        NUITKA_CANNOT_GET_HERE( signal$$$function_9_sigpending );
        return NULL;
        outline_result_1:;
        frame_b42b8f2e26394a39d7003280aac8821b->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b42b8f2e26394a39d7003280aac8821b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b42b8f2e26394a39d7003280aac8821b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b42b8f2e26394a39d7003280aac8821b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b42b8f2e26394a39d7003280aac8821b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b42b8f2e26394a39d7003280aac8821b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b42b8f2e26394a39d7003280aac8821b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b42b8f2e26394a39d7003280aac8821b,
        type_description_1,
        var_sigs
    );


    // Release cached frame.
    if ( frame_b42b8f2e26394a39d7003280aac8821b == cache_frame_b42b8f2e26394a39d7003280aac8821b )
    {
        Py_DECREF( frame_b42b8f2e26394a39d7003280aac8821b );
    }
    cache_frame_b42b8f2e26394a39d7003280aac8821b = NULL;

    assertFrameObject( frame_b42b8f2e26394a39d7003280aac8821b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_9_sigpending );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_sigs );
    Py_DECREF( var_sigs );
    var_sigs = NULL;

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

    Py_XDECREF( var_sigs );
    var_sigs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_9_sigpending );
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



struct signal$$$function_9_sigpending$$$genexpr_1_genexpr_locals {
    PyObject *var_x;
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

static PyObject *signal$$$function_9_sigpending$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct signal$$$function_9_sigpending$$$genexpr_1_genexpr_locals *generator_heap = (struct signal$$$function_9_sigpending$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1b1a91cc806b3db818708f9f431116bf, module_signal, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 69;
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
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_x );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__int_to_enum );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__int_to_enum );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_int_to_enum" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_args_element_name_1 = generator_heap->var_x;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_Signals );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signals );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signals" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        generator->m_frame->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 69;
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
            generator_heap->var_x
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

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

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

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *signal$$$function_9_sigpending$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        signal$$$function_9_sigpending$$$genexpr_1_genexpr_context,
        module_signal,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_5d368a36f56e0961e3277de188978a52,
#endif
        codeobj_1b1a91cc806b3db818708f9f431116bf,
        1,
        sizeof(struct signal$$$function_9_sigpending$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_signal$$$function_10_sigwait( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sigset = python_pars[ 0 ];
    PyObject *var_retsig = NULL;
    struct Nuitka_FrameObject *frame_3b627961a0977383897c3b57b5b3baaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3b627961a0977383897c3b57b5b3baaf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b627961a0977383897c3b57b5b3baaf, codeobj_3b627961a0977383897c3b57b5b3baaf, module_signal, sizeof(void *)+sizeof(void *) );
    frame_3b627961a0977383897c3b57b5b3baaf = cache_frame_3b627961a0977383897c3b57b5b3baaf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b627961a0977383897c3b57b5b3baaf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b627961a0977383897c3b57b5b3baaf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_sigset );
        tmp_args_element_name_1 = par_sigset;
        frame_3b627961a0977383897c3b57b5b3baaf->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sigwait, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_retsig == NULL );
        var_retsig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__int_to_enum );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__int_to_enum );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_int_to_enum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_retsig );
        tmp_args_element_name_2 = var_retsig;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_Signals );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signals );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        frame_3b627961a0977383897c3b57b5b3baaf->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b627961a0977383897c3b57b5b3baaf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b627961a0977383897c3b57b5b3baaf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b627961a0977383897c3b57b5b3baaf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b627961a0977383897c3b57b5b3baaf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b627961a0977383897c3b57b5b3baaf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b627961a0977383897c3b57b5b3baaf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b627961a0977383897c3b57b5b3baaf,
        type_description_1,
        par_sigset,
        var_retsig
    );


    // Release cached frame.
    if ( frame_3b627961a0977383897c3b57b5b3baaf == cache_frame_3b627961a0977383897c3b57b5b3baaf )
    {
        Py_DECREF( frame_3b627961a0977383897c3b57b5b3baaf );
    }
    cache_frame_3b627961a0977383897c3b57b5b3baaf = NULL;

    assertFrameObject( frame_3b627961a0977383897c3b57b5b3baaf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( signal$$$function_10_sigwait );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sigset );
    Py_DECREF( par_sigset );
    par_sigset = NULL;

    CHECK_OBJECT( (PyObject *)var_retsig );
    Py_DECREF( var_retsig );
    var_retsig = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sigset );
    Py_DECREF( par_sigset );
    par_sigset = NULL;

    Py_XDECREF( var_retsig );
    var_retsig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( signal$$$function_10_sigwait );
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



static PyObject *MAKE_FUNCTION_signal$$$function_10_sigwait(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_10_sigwait,
        const_str_plain_sigwait,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b627961a0977383897c3b57b5b3baaf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_51809156b2ea9706475c948afc002ea9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1418ed0e646a0fc983f71f02cf5d85f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_808c68840268c09ca481b247013b3f39,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_4__int_to_enum(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_4__int_to_enum,
        const_str_plain__int_to_enum,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a72cf2d0abf9d259d623eab6707f3fd4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        const_str_digest_3ab5e64e01a930cb244d6c5d52766173,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_5__enum_to_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_5__enum_to_int,
        const_str_plain__enum_to_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0524c05f016113b2dd93d7208d2abe1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        const_str_digest_56da65e3029c892a28553c702faedb16,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_6_signal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_6_signal,
        const_str_plain_signal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a70989eb3e576690f1ac8d963dcb7eed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_7_getsignal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_7_getsignal,
        const_str_plain_getsignal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6cea44759a8cc52fcace02ae21cdaff1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_8_pthread_sigmask(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_8_pthread_sigmask,
        const_str_plain_pthread_sigmask,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a36bfc37034ff01886da7793d6ec38eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_signal$$$function_9_sigpending(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_signal$$$function_9_sigpending,
        const_str_plain_sigpending,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b42b8f2e26394a39d7003280aac8821b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_signal,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_signal =
{
    PyModuleDef_HEAD_INIT,
    "signal",
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

MOD_INIT_DECL( signal )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_signal );
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
    puts("signal: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("signal: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("signal: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initsignal" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_signal = Py_InitModule4(
        "signal",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_signal = PyModule_Create( &mdef_signal );
#endif

    moduledict_signal = MODULE_DICT( module_signal );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_signal,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_signal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_signal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_signal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_signal );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_signal, module_signal );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_signal, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_signal, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_signal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b0105c778bcb080f764b828bf8e03c49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_signal, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_signal, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b0105c778bcb080f764b828bf8e03c49 = MAKE_MODULE_FRAME( codeobj_b0105c778bcb080f764b828bf8e03c49, module_signal );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b0105c778bcb080f764b828bf8e03c49 );
    assert( Py_REFCNT( frame_b0105c778bcb080f764b828bf8e03c49 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_signal, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__signal;
        tmp_globals_name_1 = (PyObject *)moduledict_signal;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain__signal;
        tmp_globals_name_2 = (PyObject *)moduledict_signal;
        tmp_locals_name_2 = (PyObject *)moduledict_signal;
        tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
        tmp_level_name_2 = const_int_0;
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 2;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_star_imported_1 == NULL) );
        tmp_result = IMPORT_MODULE_STAR( module_signal, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_functools;
        tmp_globals_name_3 = (PyObject *)moduledict_signal;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_wraps_tuple;
        tmp_level_name_3 = const_int_0;
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_wraps );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain__wraps, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_enum;
        tmp_globals_name_4 = (PyObject *)moduledict_signal;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_IntEnum_tuple;
        tmp_level_name_4 = const_int_0;
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_IntEnum );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain__IntEnum, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_globals );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_globals );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "globals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 6;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain__globals, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__IntEnum );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__IntEnum );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_IntEnum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        tmp_args_element_name_1 = const_str_plain_Signals;
        tmp_args_element_name_2 = const_str_plain_signal;
        tmp_args_element_name_3 = MAKE_FUNCTION_signal$$$function_1_lambda(  );



        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain__convert, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__IntEnum );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__IntEnum );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_IntEnum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        tmp_args_element_name_4 = const_str_plain_Handlers;
        tmp_args_element_name_5 = const_str_plain_signal;
        tmp_args_element_name_6 = MAKE_FUNCTION_signal$$$function_2_lambda(  );



        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain__convert, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_6;
        tmp_compexpr_left_1 = const_str_plain_pthread_sigmask;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__globals );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__globals );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_globals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_6;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__IntEnum );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__IntEnum );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_IntEnum" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;

                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_7;
            tmp_args_element_name_7 = const_str_plain_Sigmasks;
            tmp_args_element_name_8 = const_str_plain_signal;
            tmp_args_element_name_9 = MAKE_FUNCTION_signal$$$function_3_lambda(  );



            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain__convert, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_signal$$$function_4__int_to_enum(  );



        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain__int_to_enum, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_signal$$$function_5__enum_to_int(  );



        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain__enum_to_int, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__wraps );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wraps );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wraps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_9;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_signal );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = MAKE_FUNCTION_signal$$$function_6_signal(  );



        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain_signal, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__wraps );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wraps );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wraps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_11;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getsignal );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = MAKE_FUNCTION_signal$$$function_7_getsignal(  );



        frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain_getsignal, tmp_assign_source_11 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_12;
        tmp_compexpr_left_2 = const_str_plain_pthread_sigmask;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__globals );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__globals );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_globals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_12;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_6;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__wraps );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wraps );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wraps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 58;

                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_13;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 58;

                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_14;
            tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pthread_sigmask );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto frame_exception_exit_1;
            }
            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto frame_exception_exit_1;
            }
            tmp_args_element_name_15 = MAKE_FUNCTION_signal$$$function_8_pthread_sigmask(  );



            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain_pthread_sigmask, tmp_assign_source_12 );
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 62;

                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_15;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pthread_sigmask );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;

                goto frame_exception_exit_1;
            }
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___doc__ );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_pthread_sigmask );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pthread_sigmask );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_assattr_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pthread_sigmask" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 62;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_3 = tmp_mvar_value_16;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain___doc__, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;

                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_17;
        tmp_compexpr_left_3 = const_str_plain_sigpending;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__globals );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__globals );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_globals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_17;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_8;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__wraps );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wraps );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wraps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_18;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_19;
            tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sigpending );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto frame_exception_exit_1;
            }
            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto frame_exception_exit_1;
            }
            tmp_args_element_name_17 = MAKE_FUNCTION_signal$$$function_9_sigpending(  );



            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain_sigpending, tmp_assign_source_13 );
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_20;
        tmp_compexpr_left_4 = const_str_plain_sigwait;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__globals );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__globals );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_globals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = tmp_mvar_value_20;
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_10;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__wraps );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wraps );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wraps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 73;

                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_21;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
            }

            if ( tmp_mvar_value_22 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 73;

                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_22;
            tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sigwait );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto frame_exception_exit_1;
            }
            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 73;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto frame_exception_exit_1;
            }
            tmp_args_element_name_19 = MAKE_FUNCTION_signal$$$function_10_sigwait(  );



            frame_b0105c778bcb080f764b828bf8e03c49->m_frame.f_lineno = 73;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_signal, (Nuitka_StringObject *)const_str_plain_sigwait, tmp_assign_source_14 );
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_assattr_target_4;
            PyObject *tmp_mvar_value_24;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain__signal );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signal );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signal" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 77;

                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_23;
            tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sigwait );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain_sigwait );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sigwait );
            }

            if ( tmp_mvar_value_24 == NULL )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sigwait" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 77;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_4 = tmp_mvar_value_24;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain___doc__, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;

                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_signal, const_str_plain__globals );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_globals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_signal, const_str_plain__wraps );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wraps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0105c778bcb080f764b828bf8e03c49 );
#endif
    popFrameStack();

    assertFrameObject( frame_b0105c778bcb080f764b828bf8e03c49 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0105c778bcb080f764b828bf8e03c49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b0105c778bcb080f764b828bf8e03c49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b0105c778bcb080f764b828bf8e03c49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b0105c778bcb080f764b828bf8e03c49, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_signal, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_signal );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
