/* Generated code for Python module 'email.encoders'
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

/* The "_module_email$encoders" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email$encoders;
PyDictObject *moduledict_email$encoders;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_encdata;
static PyObject *const_tuple_str_plain_msg_str_plain_orig_tuple;
static PyObject *const_str_digest_4b5c2f5d33471bc04c85e3ffbee867cb;
static PyObject *const_str_digest_975072652d8bc3b6b1e2321796c82f83;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_encodestring;
static PyObject *const_tuple_str_plain_s_str_plain_enc_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain__encodestring;
extern PyObject *const_str_plain_get_payload;
extern PyObject *const_str_plain_8bit;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_encode_noop;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_encode_7or8bit;
static PyObject *const_str_digest_b3f216e849ffe85b80d6246d0d7a0ccc;
static PyObject *const_dict_bed19614c277b1c0bea82d5e5511e70b;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_f1e7d5332b8d0fa234d6298507bc3b5c;
static PyObject *const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple;
static PyObject *const_str_plain_encode_quopri;
extern PyObject *const_dict_2bff2b21e051914bc164d310fa2587cd;
static PyObject *const_tuple_str_plain_encodestring_tuple;
extern PyObject *const_int_0;
static PyObject *const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0;
static PyObject *const_str_plain_encodebytes;
static PyObject *const_str_plain_encode_base64;
static PyObject *const_str_plain_orig;
static PyObject *const_str_plain__bencode;
static PyObject *const_str_digest_ef53727f978b320b17cd768d0967251f;
extern PyObject *const_str_plain_msg;
extern PyObject *const_tuple_str_plain_msg_tuple;
extern PyObject *const_str_plain_set_payload;
static PyObject *const_list_399c494defcef3497146c39d838909e6_list;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_digest_7859f84632cb1c0e4436643bdd578752;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_7bit;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_enc;
static PyObject *const_tuple_str_plain_encodebytes_tuple;
extern PyObject *const_str_plain_ascii;
static PyObject *const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple;
static PyObject *const_str_plain__qencode;
extern PyObject *const_str_plain_quopri;
extern PyObject *const_str_plain_quotetabs;
static PyObject *const_str_digest_53a9d6d29a048105e5d761d9d9ee3da1;
static PyObject *const_str_digest_6426d24ed46e96a3d8b14b5d4f0810cf;
extern PyObject *const_str_digest_3293e85292556cc6d800009076416580;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_1b2836d4179ad4e0ca4ac548be7ff32f;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_bytes_chr_32;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_encdata = UNSTREAM_STRING_ASCII( &constant_bin[ 227515 ], 7, 1 );
    const_tuple_str_plain_msg_str_plain_orig_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_orig = UNSTREAM_STRING_ASCII( &constant_bin[ 33518 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_tuple, 1, const_str_plain_orig ); Py_INCREF( const_str_plain_orig );
    const_str_digest_4b5c2f5d33471bc04c85e3ffbee867cb = UNSTREAM_STRING_ASCII( &constant_bin[ 227522 ], 118, 0 );
    const_str_digest_975072652d8bc3b6b1e2321796c82f83 = UNSTREAM_STRING_ASCII( &constant_bin[ 227640 ], 108, 0 );
    const_str_plain_encodestring = UNSTREAM_STRING_ASCII( &constant_bin[ 227748 ], 12, 1 );
    const_tuple_str_plain_s_str_plain_enc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_enc_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_enc_tuple, 1, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    const_str_plain__encodestring = UNSTREAM_STRING_ASCII( &constant_bin[ 227760 ], 13, 1 );
    const_str_plain_encode_noop = UNSTREAM_STRING_ASCII( &constant_bin[ 227773 ], 11, 1 );
    const_str_digest_b3f216e849ffe85b80d6246d0d7a0ccc = UNSTREAM_STRING_ASCII( &constant_bin[ 227784 ], 17, 0 );
    const_dict_bed19614c277b1c0bea82d5e5511e70b = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_bed19614c277b1c0bea82d5e5511e70b, const_str_plain_quotetabs, Py_True );
    assert( PyDict_Size( const_dict_bed19614c277b1c0bea82d5e5511e70b ) == 1 );
    const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 1, const_str_plain_orig ); Py_INCREF( const_str_plain_orig );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 2, const_str_plain_encdata ); Py_INCREF( const_str_plain_encdata );
    const_str_plain_encode_quopri = UNSTREAM_STRING_ASCII( &constant_bin[ 227801 ], 13, 1 );
    const_tuple_str_plain_encodestring_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_encodestring_tuple, 0, const_str_plain_encodestring ); Py_INCREF( const_str_plain_encodestring );
    const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0 = UNSTREAM_BYTES( &constant_bin[ 227814 ], 3 );
    const_str_plain_encodebytes = UNSTREAM_STRING_ASCII( &constant_bin[ 227817 ], 11, 1 );
    const_str_plain_encode_base64 = UNSTREAM_STRING_ASCII( &constant_bin[ 227828 ], 13, 1 );
    const_str_plain__bencode = UNSTREAM_STRING_ASCII( &constant_bin[ 177295 ], 8, 1 );
    const_str_digest_ef53727f978b320b17cd768d0967251f = UNSTREAM_STRING_ASCII( &constant_bin[ 227841 ], 11, 0 );
    const_list_399c494defcef3497146c39d838909e6_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 0, const_str_plain_encode_7or8bit ); Py_INCREF( const_str_plain_encode_7or8bit );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 1, const_str_plain_encode_base64 ); Py_INCREF( const_str_plain_encode_base64 );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 2, const_str_plain_encode_noop ); Py_INCREF( const_str_plain_encode_noop );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 3, const_str_plain_encode_quopri ); Py_INCREF( const_str_plain_encode_quopri );
    const_tuple_str_plain_encodebytes_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_encodebytes_tuple, 0, const_str_plain_encodebytes ); Py_INCREF( const_str_plain_encodebytes );
    const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple, 0, const_bytes_chr_32 ); Py_INCREF( const_bytes_chr_32 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple, 1, const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0 ); Py_INCREF( const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0 );
    const_str_plain__qencode = UNSTREAM_STRING_ASCII( &constant_bin[ 177277 ], 8, 1 );
    const_str_digest_53a9d6d29a048105e5d761d9d9ee3da1 = UNSTREAM_STRING_ASCII( &constant_bin[ 227852 ], 23, 0 );
    const_str_digest_6426d24ed46e96a3d8b14b5d4f0810cf = UNSTREAM_STRING_ASCII( &constant_bin[ 227875 ], 57, 0 );
    const_str_digest_1b2836d4179ad4e0ca4ac548be7ff32f = UNSTREAM_STRING_ASCII( &constant_bin[ 227932 ], 32, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email$encoders( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_685f752c8265206d732d9f9a76cb79df;
static PyCodeObject *codeobj_c94b948000897aeb32b0ac5e20fb2251;
static PyCodeObject *codeobj_58e944e7d368f4af6d88e8bedc303651;
static PyCodeObject *codeobj_42c7c32ff8a0aa3458f19d7b53c4478e;
static PyCodeObject *codeobj_4b5e40f94f70416814a1a265a269cdec;
static PyCodeObject *codeobj_37ca2eafc38b44cb829d16017ae6ecfa;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b3f216e849ffe85b80d6246d0d7a0ccc );
    codeobj_685f752c8265206d732d9f9a76cb79df = MAKE_CODEOBJ( module_filename_obj, const_str_digest_53a9d6d29a048105e5d761d9d9ee3da1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c94b948000897aeb32b0ac5e20fb2251 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__qencode, 20, const_tuple_str_plain_s_str_plain_enc_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_58e944e7d368f4af6d88e8bedc303651 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_7or8bit, 50, const_tuple_str_plain_msg_str_plain_orig_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_42c7c32ff8a0aa3458f19d7b53c4478e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_base64, 26, const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4b5e40f94f70416814a1a265a269cdec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_noop, 68, const_tuple_str_plain_msg_tuple, 1, 0, CO_NOFREE );
    codeobj_37ca2eafc38b44cb829d16017ae6ecfa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_quopri, 38, const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_email$encoders$$$function_1__qencode(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_2_encode_base64(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_3_encode_quopri(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_4_encode_7or8bit(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_5_encode_noop(  );


// The module function definitions.
static PyObject *impl_email$encoders$$$function_1__qencode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_enc = NULL;
    struct Nuitka_FrameObject *frame_c94b948000897aeb32b0ac5e20fb2251;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c94b948000897aeb32b0ac5e20fb2251 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c94b948000897aeb32b0ac5e20fb2251, codeobj_c94b948000897aeb32b0ac5e20fb2251, module_email$encoders, sizeof(void *)+sizeof(void *) );
    frame_c94b948000897aeb32b0ac5e20fb2251 = cache_frame_c94b948000897aeb32b0ac5e20fb2251;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c94b948000897aeb32b0ac5e20fb2251 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c94b948000897aeb32b0ac5e20fb2251 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__encodestring );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encodestring );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encodestring" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_bed19614c277b1c0bea82d5e5511e70b );
        frame_c94b948000897aeb32b0ac5e20fb2251->m_frame.f_lineno = 21;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_enc == NULL );
        var_enc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_enc );
        tmp_called_instance_1 = var_enc;
        frame_c94b948000897aeb32b0ac5e20fb2251->m_frame.f_lineno = 23;
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c94b948000897aeb32b0ac5e20fb2251 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c94b948000897aeb32b0ac5e20fb2251 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c94b948000897aeb32b0ac5e20fb2251 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c94b948000897aeb32b0ac5e20fb2251, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c94b948000897aeb32b0ac5e20fb2251->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c94b948000897aeb32b0ac5e20fb2251, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c94b948000897aeb32b0ac5e20fb2251,
        type_description_1,
        par_s,
        var_enc
    );


    // Release cached frame.
    if ( frame_c94b948000897aeb32b0ac5e20fb2251 == cache_frame_c94b948000897aeb32b0ac5e20fb2251 )
    {
        Py_DECREF( frame_c94b948000897aeb32b0ac5e20fb2251 );
    }
    cache_frame_c94b948000897aeb32b0ac5e20fb2251 = NULL;

    assertFrameObject( frame_c94b948000897aeb32b0ac5e20fb2251 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_1__qencode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_enc );
    Py_DECREF( var_enc );
    var_enc = NULL;

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

    Py_XDECREF( var_enc );
    var_enc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_1__qencode );
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


static PyObject *impl_email$encoders$$$function_2_encode_base64( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *var_orig = NULL;
    PyObject *var_encdata = NULL;
    struct Nuitka_FrameObject *frame_42c7c32ff8a0aa3458f19d7b53c4478e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_42c7c32ff8a0aa3458f19d7b53c4478e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42c7c32ff8a0aa3458f19d7b53c4478e, codeobj_42c7c32ff8a0aa3458f19d7b53c4478e, module_email$encoders, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_42c7c32ff8a0aa3458f19d7b53c4478e = cache_frame_42c7c32ff8a0aa3458f19d7b53c4478e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42c7c32ff8a0aa3458f19d7b53c4478e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42c7c32ff8a0aa3458f19d7b53c4478e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_msg );
        tmp_source_name_1 = par_msg;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_2bff2b21e051914bc164d310fa2587cd );
        frame_42c7c32ff8a0aa3458f19d7b53c4478e->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_orig == NULL );
        var_orig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_unicode_encoding_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__bencode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bencode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_bencode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_orig );
        tmp_args_element_name_1 = var_orig;
        frame_42c7c32ff8a0aa3458f19d7b53c4478e->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_unicode_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_unicode_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_encoding_1 = const_str_plain_ascii;
        tmp_assign_source_2 = TO_UNICODE3( tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL );
        Py_DECREF( tmp_unicode_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_encdata == NULL );
        var_encdata = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_msg );
        tmp_called_instance_1 = par_msg;
        CHECK_OBJECT( var_encdata );
        tmp_args_element_name_2 = var_encdata;
        frame_42c7c32ff8a0aa3458f19d7b53c4478e->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_set_payload, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_str_plain_base64;
        CHECK_OBJECT( par_msg );
        tmp_ass_subscribed_1 = par_msg;
        tmp_ass_subscript_1 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42c7c32ff8a0aa3458f19d7b53c4478e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42c7c32ff8a0aa3458f19d7b53c4478e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42c7c32ff8a0aa3458f19d7b53c4478e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42c7c32ff8a0aa3458f19d7b53c4478e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42c7c32ff8a0aa3458f19d7b53c4478e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42c7c32ff8a0aa3458f19d7b53c4478e,
        type_description_1,
        par_msg,
        var_orig,
        var_encdata
    );


    // Release cached frame.
    if ( frame_42c7c32ff8a0aa3458f19d7b53c4478e == cache_frame_42c7c32ff8a0aa3458f19d7b53c4478e )
    {
        Py_DECREF( frame_42c7c32ff8a0aa3458f19d7b53c4478e );
    }
    cache_frame_42c7c32ff8a0aa3458f19d7b53c4478e = NULL;

    assertFrameObject( frame_42c7c32ff8a0aa3458f19d7b53c4478e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_2_encode_base64 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_orig );
    Py_DECREF( var_orig );
    var_orig = NULL;

    CHECK_OBJECT( (PyObject *)var_encdata );
    Py_DECREF( var_encdata );
    var_encdata = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_encdata );
    var_encdata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_2_encode_base64 );
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


static PyObject *impl_email$encoders$$$function_3_encode_quopri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *var_orig = NULL;
    PyObject *var_encdata = NULL;
    struct Nuitka_FrameObject *frame_37ca2eafc38b44cb829d16017ae6ecfa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_37ca2eafc38b44cb829d16017ae6ecfa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37ca2eafc38b44cb829d16017ae6ecfa, codeobj_37ca2eafc38b44cb829d16017ae6ecfa, module_email$encoders, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_37ca2eafc38b44cb829d16017ae6ecfa = cache_frame_37ca2eafc38b44cb829d16017ae6ecfa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37ca2eafc38b44cb829d16017ae6ecfa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37ca2eafc38b44cb829d16017ae6ecfa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_msg );
        tmp_source_name_1 = par_msg;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_2bff2b21e051914bc164d310fa2587cd );
        frame_37ca2eafc38b44cb829d16017ae6ecfa->m_frame.f_lineno = 43;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_orig == NULL );
        var_orig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__qencode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__qencode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_qencode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_orig );
        tmp_args_element_name_1 = var_orig;
        frame_37ca2eafc38b44cb829d16017ae6ecfa->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_encdata == NULL );
        var_encdata = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_msg );
        tmp_called_instance_1 = par_msg;
        CHECK_OBJECT( var_encdata );
        tmp_args_element_name_2 = var_encdata;
        frame_37ca2eafc38b44cb829d16017ae6ecfa->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_set_payload, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_str_digest_3293e85292556cc6d800009076416580;
        CHECK_OBJECT( par_msg );
        tmp_ass_subscribed_1 = par_msg;
        tmp_ass_subscript_1 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37ca2eafc38b44cb829d16017ae6ecfa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37ca2eafc38b44cb829d16017ae6ecfa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37ca2eafc38b44cb829d16017ae6ecfa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37ca2eafc38b44cb829d16017ae6ecfa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37ca2eafc38b44cb829d16017ae6ecfa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37ca2eafc38b44cb829d16017ae6ecfa,
        type_description_1,
        par_msg,
        var_orig,
        var_encdata
    );


    // Release cached frame.
    if ( frame_37ca2eafc38b44cb829d16017ae6ecfa == cache_frame_37ca2eafc38b44cb829d16017ae6ecfa )
    {
        Py_DECREF( frame_37ca2eafc38b44cb829d16017ae6ecfa );
    }
    cache_frame_37ca2eafc38b44cb829d16017ae6ecfa = NULL;

    assertFrameObject( frame_37ca2eafc38b44cb829d16017ae6ecfa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_3_encode_quopri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_orig );
    Py_DECREF( var_orig );
    var_orig = NULL;

    CHECK_OBJECT( (PyObject *)var_encdata );
    Py_DECREF( var_encdata );
    var_encdata = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_encdata );
    var_encdata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_3_encode_quopri );
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


static PyObject *impl_email$encoders$$$function_4_encode_7or8bit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *var_orig = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_58e944e7d368f4af6d88e8bedc303651;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_58e944e7d368f4af6d88e8bedc303651 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58e944e7d368f4af6d88e8bedc303651, codeobj_58e944e7d368f4af6d88e8bedc303651, module_email$encoders, sizeof(void *)+sizeof(void *) );
    frame_58e944e7d368f4af6d88e8bedc303651 = cache_frame_58e944e7d368f4af6d88e8bedc303651;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58e944e7d368f4af6d88e8bedc303651 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58e944e7d368f4af6d88e8bedc303651 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_msg );
        tmp_source_name_1 = par_msg;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_2bff2b21e051914bc164d310fa2587cd );
        frame_58e944e7d368f4af6d88e8bedc303651->m_frame.f_lineno = 52;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_orig == NULL );
        var_orig = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_orig );
        tmp_compexpr_left_1 = var_orig;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = const_str_plain_7bit;
            CHECK_OBJECT( par_msg );
            tmp_ass_subscribed_1 = par_msg;
            tmp_ass_subscript_1 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_orig );
        tmp_called_instance_1 = var_orig;
        frame_58e944e7d368f4af6d88e8bedc303651->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_1 );
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

    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_58e944e7d368f4af6d88e8bedc303651, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_58e944e7d368f4af6d88e8bedc303651, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_UnicodeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oo";
            goto try_except_handler_4;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = const_str_plain_8bit;
            CHECK_OBJECT( par_msg );
            tmp_ass_subscribed_2 = par_msg;
            tmp_ass_subscript_2 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 59;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_58e944e7d368f4af6d88e8bedc303651->m_frame) frame_58e944e7d368f4af6d88e8bedc303651->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_4;
        branch_end_2:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_4_encode_7or8bit );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
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
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = const_str_plain_7bit;
            CHECK_OBJECT( par_msg );
            tmp_ass_subscribed_3 = par_msg;
            tmp_ass_subscript_3 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e944e7d368f4af6d88e8bedc303651 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e944e7d368f4af6d88e8bedc303651 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e944e7d368f4af6d88e8bedc303651 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58e944e7d368f4af6d88e8bedc303651, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58e944e7d368f4af6d88e8bedc303651->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58e944e7d368f4af6d88e8bedc303651, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58e944e7d368f4af6d88e8bedc303651,
        type_description_1,
        par_msg,
        var_orig
    );


    // Release cached frame.
    if ( frame_58e944e7d368f4af6d88e8bedc303651 == cache_frame_58e944e7d368f4af6d88e8bedc303651 )
    {
        Py_DECREF( frame_58e944e7d368f4af6d88e8bedc303651 );
    }
    cache_frame_58e944e7d368f4af6d88e8bedc303651 = NULL;

    assertFrameObject( frame_58e944e7d368f4af6d88e8bedc303651 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_4_encode_7or8bit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_orig );
    Py_DECREF( var_orig );
    var_orig = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_4_encode_7or8bit );
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


static PyObject *impl_email$encoders$$$function_5_encode_noop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_5_encode_noop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_5_encode_noop );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_1__qencode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_1__qencode,
        const_str_plain__qencode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c94b948000897aeb32b0ac5e20fb2251,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$encoders,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_2_encode_base64(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_2_encode_base64,
        const_str_plain_encode_base64,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_42c7c32ff8a0aa3458f19d7b53c4478e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$encoders,
        const_str_digest_975072652d8bc3b6b1e2321796c82f83,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_3_encode_quopri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_3_encode_quopri,
        const_str_plain_encode_quopri,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_37ca2eafc38b44cb829d16017ae6ecfa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$encoders,
        const_str_digest_4b5c2f5d33471bc04c85e3ffbee867cb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_4_encode_7or8bit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_4_encode_7or8bit,
        const_str_plain_encode_7or8bit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_58e944e7d368f4af6d88e8bedc303651,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$encoders,
        const_str_digest_6426d24ed46e96a3d8b14b5d4f0810cf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_5_encode_noop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_5_encode_noop,
        const_str_plain_encode_noop,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4b5e40f94f70416814a1a265a269cdec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$encoders,
        const_str_digest_ef53727f978b320b17cd768d0967251f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email$encoders =
{
    PyModuleDef_HEAD_INIT,
    "email.encoders",
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

MOD_INIT_DECL( email$encoders )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email$encoders );
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
    puts("email.encoders: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.encoders: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.encoders: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail$encoders" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email$encoders = Py_InitModule4(
        "email.encoders",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email$encoders = PyModule_Create( &mdef_email$encoders );
#endif

    moduledict_email$encoders = MODULE_DICT( module_email$encoders );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_email$encoders,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email$encoders,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$encoders,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$encoders,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email$encoders );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_f1e7d5332b8d0fa234d6298507bc3b5c, module_email$encoders );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_685f752c8265206d732d9f9a76cb79df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1b2836d4179ad4e0ca4ac548be7ff32f;
        UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_685f752c8265206d732d9f9a76cb79df = MAKE_MODULE_FRAME( codeobj_685f752c8265206d732d9f9a76cb79df, module_email$encoders );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_685f752c8265206d732d9f9a76cb79df );
    assert( Py_REFCNT( frame_685f752c8265206d732d9f9a76cb79df ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_399c494defcef3497146c39d838909e6_list );
        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_email$encoders;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_encodebytes_tuple;
        tmp_level_name_1 = const_int_0;
        frame_685f752c8265206d732d9f9a76cb79df->m_frame.f_lineno = 15;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_encodebytes );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__bencode, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_quopri;
        tmp_globals_name_2 = (PyObject *)moduledict_email$encoders;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_encodestring_tuple;
        tmp_level_name_2 = const_int_0;
        frame_685f752c8265206d732d9f9a76cb79df->m_frame.f_lineno = 16;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encodestring );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__encodestring, tmp_assign_source_6 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_685f752c8265206d732d9f9a76cb79df );
#endif
    popFrameStack();

    assertFrameObject( frame_685f752c8265206d732d9f9a76cb79df );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_685f752c8265206d732d9f9a76cb79df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_685f752c8265206d732d9f9a76cb79df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_685f752c8265206d732d9f9a76cb79df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_685f752c8265206d732d9f9a76cb79df, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_email$encoders$$$function_1__qencode(  );



        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__qencode, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_email$encoders$$$function_2_encode_base64(  );



        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_base64, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_email$encoders$$$function_3_encode_quopri(  );



        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_quopri, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_email$encoders$$$function_4_encode_7or8bit(  );



        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_7or8bit, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_email$encoders$$$function_5_encode_noop(  );



        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_noop, tmp_assign_source_11 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_email$encoders );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
