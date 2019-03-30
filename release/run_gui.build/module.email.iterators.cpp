/* Generated code for Python module 'email.iterators'
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

/* The "_module_email$iterators" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email$iterators;
PyDictObject *moduledict_email$iterators;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_f75a680342842676bde14e86815b40ef;
extern PyObject *const_str_plain_walk;
static PyObject *const_list_d12b929b9543173071522a86a60e5810_list;
extern PyObject *const_str_plain_get_content_subtype;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_decode;
extern PyObject *const_tuple_str_plain_StringIO_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_get_payload;
static PyObject *const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple;
extern PyObject *const_str_plain_subtype;
static PyObject *const_str_digest_029d4e1734797170284f010e3168c7fb;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_e3c66ca9a856a3770c2415f2700c10d2;
extern PyObject *const_str_plain_tab;
static PyObject *const_str_plain_include_default;
static PyObject *const_tuple_str_plain_self_str_plain_subpart_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_text_none_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_get_content_type;
static PyObject *const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_msg;
static PyObject *const_tuple_none_int_0_false_tuple;
extern PyObject *const_str_plain_level;
static PyObject *const_str_plain_typed_subpart_iterator;
static PyObject *const_str_digest_214f36440c692c7c2447223c711f8394;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_text;
static PyObject *const_str_digest_a24ea58a4d922cf7b7215c4a777e0b17;
extern PyObject *const_str_digest_ce77c4f134547ae2a49c03947795f6e3;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_is_multipart;
static PyObject *const_str_plain__structure;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_get_content_maintype;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_payload;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_maintype;
static PyObject *const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple;
static PyObject *const_str_digest_6220e16c79276bbb44f1ce05669ec2b4;
extern PyObject *const_str_plain_get_default_type;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_body_line_iterator;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_subpart;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_a35294548215811533a2601acdd1deb1;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_8ba1d0f2a934726cc4244517c65478ad;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_f75a680342842676bde14e86815b40ef = UNSTREAM_STRING_ASCII( &constant_bin[ 251236 ], 18, 0 );
    const_list_d12b929b9543173071522a86a60e5810_list = PyList_New( 3 );
    const_str_plain_body_line_iterator = UNSTREAM_STRING_ASCII( &constant_bin[ 251254 ], 18, 1 );
    PyList_SET_ITEM( const_list_d12b929b9543173071522a86a60e5810_list, 0, const_str_plain_body_line_iterator ); Py_INCREF( const_str_plain_body_line_iterator );
    const_str_plain_typed_subpart_iterator = UNSTREAM_STRING_ASCII( &constant_bin[ 251272 ], 22, 1 );
    PyList_SET_ITEM( const_list_d12b929b9543173071522a86a60e5810_list, 1, const_str_plain_typed_subpart_iterator ); Py_INCREF( const_str_plain_typed_subpart_iterator );
    PyList_SET_ITEM( const_list_d12b929b9543173071522a86a60e5810_list, 2, const_str_plain_walk ); Py_INCREF( const_str_plain_walk );
    const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 2, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    const_str_plain_include_default = UNSTREAM_STRING_ASCII( &constant_bin[ 251294 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 3, const_str_plain_include_default ); Py_INCREF( const_str_plain_include_default );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 4, const_str_plain_tab ); Py_INCREF( const_str_plain_tab );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 5, const_str_plain_subpart ); Py_INCREF( const_str_plain_subpart );
    const_str_digest_029d4e1734797170284f010e3168c7fb = UNSTREAM_STRING_ASCII( &constant_bin[ 251309 ], 21, 0 );
    const_str_digest_e3c66ca9a856a3770c2415f2700c10d2 = UNSTREAM_STRING_ASCII( &constant_bin[ 251330 ], 49, 0 );
    const_tuple_str_plain_self_str_plain_subpart_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_subpart_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_subpart_tuple, 1, const_str_plain_subpart ); Py_INCREF( const_str_plain_subpart );
    const_tuple_str_plain_text_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_none_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple, 1, const_str_plain_maintype ); Py_INCREF( const_str_plain_maintype );
    PyTuple_SET_ITEM( const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple, 2, const_str_plain_subtype ); Py_INCREF( const_str_plain_subtype );
    PyTuple_SET_ITEM( const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple, 3, const_str_plain_subpart ); Py_INCREF( const_str_plain_subpart );
    const_tuple_none_int_0_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_false_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_digest_214f36440c692c7c2447223c711f8394 = UNSTREAM_STRING_ASCII( &constant_bin[ 251379 ], 5, 0 );
    const_str_digest_a24ea58a4d922cf7b7215c4a777e0b17 = UNSTREAM_STRING_ASCII( &constant_bin[ 251384 ], 142, 0 );
    const_str_plain__structure = UNSTREAM_STRING_ASCII( &constant_bin[ 251526 ], 10, 1 );
    const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple, 1, const_str_plain_decode ); Py_INCREF( const_str_plain_decode );
    PyTuple_SET_ITEM( const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple, 2, const_str_plain_subpart ); Py_INCREF( const_str_plain_subpart );
    PyTuple_SET_ITEM( const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple, 3, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    const_str_digest_6220e16c79276bbb44f1ce05669ec2b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 251536 ], 137, 0 );
    const_str_digest_a35294548215811533a2601acdd1deb1 = UNSTREAM_STRING_ASCII( &constant_bin[ 251673 ], 248, 0 );
    const_str_digest_8ba1d0f2a934726cc4244517c65478ad = UNSTREAM_STRING_ASCII( &constant_bin[ 251921 ], 24, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email$iterators( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_faa39f8008ac7a89c264bad6195567c1;
static PyCodeObject *codeobj_faa64771dd3aa707505bb15f7abf966a;
static PyCodeObject *codeobj_919f484aec38b8cc708c929a4a6be3f4;
static PyCodeObject *codeobj_4a72366848176289620f2040b2ff06e3;
static PyCodeObject *codeobj_67dc14af007cb00f08aabede68edfa85;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f75a680342842676bde14e86815b40ef );
    codeobj_faa39f8008ac7a89c264bad6195567c1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8ba1d0f2a934726cc4244517c65478ad, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_faa64771dd3aa707505bb15f7abf966a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__structure, 59, const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_919f484aec38b8cc708c929a4a6be3f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_body_line_iterator, 34, const_tuple_17735c95e9a3407b4dbc61338ed72a44_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a72366848176289620f2040b2ff06e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_typed_subpart_iterator, 45, const_tuple_62638e21fd5bace0cf2a1b5ca06be280_tuple, 3, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67dc14af007cb00f08aabede68edfa85 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_walk, 20, const_tuple_str_plain_self_str_plain_subpart_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *email$iterators$$$function_1_walk$$$genobj_1_walk_maker( void );


static PyObject *email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_maker( void );


static PyObject *email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_maker( void );


static PyObject *MAKE_FUNCTION_email$iterators$$$function_1_walk(  );


static PyObject *MAKE_FUNCTION_email$iterators$$$function_2_body_line_iterator( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$iterators$$$function_3_typed_subpart_iterator( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$iterators$$$function_4__structure( PyObject *defaults );


// The module function definitions.
static PyObject *impl_email$iterators$$$function_1_walk( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = email$iterators$$$function_1_walk$$$genobj_1_walk_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_1_walk );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_1_walk );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct email$iterators$$$function_1_walk$$$genobj_1_walk_locals {
    PyObject *var_subpart;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *email$iterators$$$function_1_walk$$$genobj_1_walk_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct email$iterators$$$function_1_walk$$$genobj_1_walk_locals *generator_heap = (struct email$iterators$$$function_1_walk$$$genobj_1_walk_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_subpart = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_67dc14af007cb00f08aabede68edfa85, module_email$iterators, sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = PyCell_GET( generator->m_closure[0] );
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 27;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 27;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_is_multipart );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 27;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_1 );

            generator_heap->exception_lineno = 27;
            generator_heap->type_description_1 = "co";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_2;
            if ( PyCell_GET( generator->m_closure[0] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 28;
                generator_heap->type_description_1 = "co";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = PyCell_GET( generator->m_closure[0] );
            generator->m_frame->m_frame.f_lineno = 28;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_payload );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 28;
                generator_heap->type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 28;
                generator_heap->type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
            generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
            tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                    generator_heap->type_description_1 = "co";
                    generator_heap->exception_lineno = 28;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
                generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
            tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
            {
                PyObject *old = generator_heap->var_subpart;
                generator_heap->var_subpart = tmp_assign_source_3;
                Py_INCREF( generator_heap->var_subpart );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_yieldfrom_result_1;
            CHECK_OBJECT( generator_heap->var_subpart );
            tmp_called_instance_3 = generator_heap->var_subpart;
            generator->m_frame->m_frame.f_lineno = 29;
            tmp_expression_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_walk );
            if ( tmp_expression_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 29;
                generator_heap->type_description_1 = "co";
                goto try_except_handler_2;
            }
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_instance_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_called_instance_3, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 2;
            generator->m_yieldfrom = tmp_expression_name_2;
            return NULL;

            yield_return_2:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_instance_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_called_instance_3, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 29;
                generator_heap->type_description_1 = "co";
                goto try_except_handler_2;
            }
            tmp_yieldfrom_result_1 = yield_return_value;
            Py_DECREF( tmp_yieldfrom_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 28;
            generator_heap->type_description_1 = "co";
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

        Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
        generator_heap->tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
        Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
        generator_heap->tmp_for_loop_1__for_iterator = NULL;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
        generator_heap->tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
        Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
        generator_heap->tmp_for_loop_1__for_iterator = NULL;

        branch_no_1:;
    }

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
            generator->m_closure[0],
            generator_heap->var_subpart
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

    Py_XDECREF( generator_heap->var_subpart );
    generator_heap->var_subpart = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->var_subpart );
    generator_heap->var_subpart = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *email$iterators$$$function_1_walk$$$genobj_1_walk_maker( void )
{
    return Nuitka_Generator_New(
        email$iterators$$$function_1_walk$$$genobj_1_walk_context,
        module_email$iterators,
        const_str_plain_walk,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_67dc14af007cb00f08aabede68edfa85,
        1,
        sizeof(struct email$iterators$$$function_1_walk$$$genobj_1_walk_locals)
    );
}


static PyObject *impl_email$iterators$$$function_2_body_line_iterator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_msg = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_decode = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_decode;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_msg;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_2_body_line_iterator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_decode );
    Py_DECREF( par_decode );
    par_decode = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_decode );
    Py_DECREF( par_decode );
    par_decode = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_2_body_line_iterator );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_locals {
    PyObject *var_subpart;
    PyObject *var_payload;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_locals *generator_heap = (struct email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_subpart = NULL;
    generator_heap->var_payload = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_919f484aec38b8cc708c929a4a6be3f4, module_email$iterators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "msg" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[1] );
        generator->m_frame->m_frame.f_lineno = 39;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_walk );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "ccoo";
                generator_heap->exception_lineno = 39;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_subpart;
            generator_heap->var_subpart = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_subpart );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( generator_heap->var_subpart );
        tmp_source_name_1 = generator_heap->var_subpart;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 40;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_decode;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "decode" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 40;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }

        tmp_dict_value_1 = PyCell_GET( generator->m_closure[0] );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(generator_heap->tmp_res != 0) );
        generator->m_frame->m_frame.f_lineno = 40;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 40;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_payload;
            generator_heap->var_payload = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( generator_heap->var_payload );
        tmp_isinstance_inst_1 = generator_heap->var_payload;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        generator_heap->tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 41;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_expression_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_yieldfrom_result_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_StringIO );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StringIO );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "StringIO" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 42;
                generator_heap->type_description_1 = "ccoo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( generator_heap->var_payload );
            tmp_args_element_name_1 = generator_heap->var_payload;
            generator->m_frame->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_expression_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 42;
                generator_heap->type_description_1 = "ccoo";
                goto try_except_handler_2;
            }
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            generator->m_yieldfrom = tmp_expression_name_1;
            return NULL;

            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 42;
                generator_heap->type_description_1 = "ccoo";
                goto try_except_handler_2;
            }
            tmp_yieldfrom_result_1 = yield_return_value;
            Py_DECREF( tmp_yieldfrom_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 39;
        generator_heap->type_description_1 = "ccoo";
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_subpart,
            generator_heap->var_payload
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

    Py_XDECREF( generator_heap->var_subpart );
    generator_heap->var_subpart = NULL;

    Py_XDECREF( generator_heap->var_payload );
    generator_heap->var_payload = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_subpart );
    generator_heap->var_subpart = NULL;

    Py_XDECREF( generator_heap->var_payload );
    generator_heap->var_payload = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_maker( void )
{
    return Nuitka_Generator_New(
        email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_context,
        module_email$iterators,
        const_str_plain_body_line_iterator,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_919f484aec38b8cc708c929a4a6be3f4,
        2,
        sizeof(struct email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_locals)
    );
}


static PyObject *impl_email$iterators$$$function_3_typed_subpart_iterator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_msg = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_maintype = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_subtype = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_maintype;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_msg;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = par_subtype;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_3_typed_subpart_iterator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_maintype );
    Py_DECREF( par_maintype );
    par_maintype = NULL;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_maintype );
    Py_DECREF( par_maintype );
    par_maintype = NULL;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_3_typed_subpart_iterator );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_locals {
    PyObject *var_subpart;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_locals *generator_heap = (struct email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_subpart = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_4a72366848176289620f2040b2ff06e3, module_email$iterators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "msg" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 52;
            generator_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[1] );
        generator->m_frame->m_frame.f_lineno = 52;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_walk );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 52;
            generator_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 52;
            generator_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->tmp_for_loop_1__for_iterator == NULL );
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "ccco";
                generator_heap->exception_lineno = 52;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_subpart;
            generator_heap->var_subpart = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_subpart );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( generator_heap->var_subpart );
        tmp_called_instance_2 = generator_heap->var_subpart;
        generator->m_frame->m_frame.f_lineno = 53;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_content_maintype );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 53;
            generator_heap->type_description_1 = "ccco";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maintype" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 53;
            generator_heap->type_description_1 = "ccco";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[0] );
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 53;
            generator_heap->type_description_1 = "ccco";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_called_instance_3;
            if ( PyCell_GET( generator->m_closure[2] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "subtype" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 54;
                generator_heap->type_description_1 = "ccco";
                goto try_except_handler_2;
            }

            tmp_compexpr_left_2 = PyCell_GET( generator->m_closure[2] );
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( generator_heap->var_subpart );
            tmp_called_instance_3 = generator_heap->var_subpart;
            generator->m_frame->m_frame.f_lineno = 54;
            tmp_compexpr_left_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_content_subtype );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 54;
                generator_heap->type_description_1 = "ccco";
                goto try_except_handler_2;
            }
            if ( PyCell_GET( generator->m_closure[2] ) == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "subtype" );
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                CHAIN_EXCEPTION( generator_heap->exception_value );

                generator_heap->exception_lineno = 54;
                generator_heap->type_description_1 = "ccco";
                goto try_except_handler_2;
            }

            tmp_compexpr_right_3 = PyCell_GET( generator->m_closure[2] );
            generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( generator_heap->tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 54;
                generator_heap->type_description_1 = "ccco";
                goto try_except_handler_2;
            }
            tmp_or_right_value_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_2 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_expression_name_1;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
                CHECK_OBJECT( generator_heap->var_subpart );
                tmp_expression_name_1 = generator_heap->var_subpart;
                Py_INCREF( tmp_expression_name_1 );
                Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_condition_result_2, sizeof(nuitka_bool), &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(nuitka_bool), &tmp_or_right_value_1, sizeof(nuitka_bool), &tmp_compexpr_left_2, sizeof(PyObject *), &tmp_compexpr_right_2, sizeof(PyObject *), &tmp_compexpr_left_3, sizeof(PyObject *), &tmp_compexpr_right_3, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL );
                generator->m_yield_return_index = 1;
                return tmp_expression_name_1;
                yield_return_1:
                Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_condition_result_2, sizeof(nuitka_bool), &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(nuitka_bool), &tmp_or_right_value_1, sizeof(nuitka_bool), &tmp_compexpr_left_2, sizeof(PyObject *), &tmp_compexpr_right_2, sizeof(PyObject *), &tmp_compexpr_left_3, sizeof(PyObject *), &tmp_compexpr_right_3, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL );
                if ( yield_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                    generator_heap->exception_lineno = 55;
                    generator_heap->type_description_1 = "ccco";
                    goto try_except_handler_2;
                }
                tmp_yield_result_1 = yield_return_value;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 52;
        generator_heap->type_description_1 = "ccco";
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[1],
            generator->m_closure[0],
            generator->m_closure[2],
            generator_heap->var_subpart
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

    Py_XDECREF( generator_heap->var_subpart );
    generator_heap->var_subpart = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( generator_heap->var_subpart );
    generator_heap->var_subpart = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_maker( void )
{
    return Nuitka_Generator_New(
        email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_context,
        module_email$iterators,
        const_str_plain_typed_subpart_iterator,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_4a72366848176289620f2040b2ff06e3,
        3,
        sizeof(struct email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_locals)
    );
}


static PyObject *impl_email$iterators$$$function_4__structure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_level = python_pars[ 2 ];
    PyObject *par_include_default = python_pars[ 3 ];
    PyObject *var_tab = NULL;
    PyObject *var_subpart = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_faa64771dd3aa707505bb15f7abf966a;
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
    static struct Nuitka_FrameObject *cache_frame_faa64771dd3aa707505bb15f7abf966a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_faa64771dd3aa707505bb15f7abf966a, codeobj_faa64771dd3aa707505bb15f7abf966a, module_email$iterators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_faa64771dd3aa707505bb15f7abf966a = cache_frame_faa64771dd3aa707505bb15f7abf966a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_faa64771dd3aa707505bb15f7abf966a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_faa64771dd3aa707505bb15f7abf966a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_fp );
        tmp_compexpr_left_1 = par_fp;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_sys );

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

                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_fp;
                assert( old != NULL );
                par_fp = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = const_str_space;
        CHECK_OBJECT( par_level );
        tmp_left_name_2 = par_level;
        tmp_right_name_2 = const_int_pos_4;
        tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tab == NULL );
        var_tab = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( var_tab );
        tmp_left_name_3 = var_tab;
        CHECK_OBJECT( par_msg );
        tmp_called_instance_1 = par_msg;
        frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 64;
        tmp_right_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_content_type );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_end;
        tmp_dict_value_1 = const_str_empty;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_file;
        CHECK_OBJECT( par_fp );
        tmp_dict_value_2 = par_fp;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 64;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_include_default );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_include_default );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_2 != NULL );
            tmp_left_name_4 = const_str_digest_214f36440c692c7c2447223c711f8394;
            CHECK_OBJECT( par_msg );
            tmp_called_instance_2 = par_msg;
            frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 66;
            tmp_right_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_default_type );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_3 = const_str_plain_file;
            CHECK_OBJECT( par_fp );
            tmp_dict_value_3 = par_fp;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 66;
            tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_3 != NULL );
            tmp_dict_key_4 = const_str_plain_file;
            CHECK_OBJECT( par_fp );
            tmp_dict_value_4 = par_fp;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 68;
            tmp_call_result_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_msg );
        tmp_called_instance_3 = par_msg;
        frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 69;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_is_multipart );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( par_msg );
            tmp_called_instance_4 = par_msg;
            frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 70;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_get_payload );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
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
                    exception_lineno = 70;
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
                PyObject *old = var_subpart;
                var_subpart = tmp_assign_source_5;
                Py_INCREF( var_subpart );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain__structure );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__structure );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_structure" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_4 = tmp_mvar_value_2;
            CHECK_OBJECT( var_subpart );
            tmp_args_element_name_1 = var_subpart;
            CHECK_OBJECT( par_fp );
            tmp_args_element_name_2 = par_fp;
            CHECK_OBJECT( par_level );
            tmp_left_name_5 = par_level;
            tmp_right_name_5 = const_int_pos_1;
            tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_include_default );
            tmp_args_element_name_4 = par_include_default;
            frame_faa64771dd3aa707505bb15f7abf966a->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
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
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faa64771dd3aa707505bb15f7abf966a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faa64771dd3aa707505bb15f7abf966a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_faa64771dd3aa707505bb15f7abf966a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_faa64771dd3aa707505bb15f7abf966a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_faa64771dd3aa707505bb15f7abf966a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_faa64771dd3aa707505bb15f7abf966a,
        type_description_1,
        par_msg,
        par_fp,
        par_level,
        par_include_default,
        var_tab,
        var_subpart
    );


    // Release cached frame.
    if ( frame_faa64771dd3aa707505bb15f7abf966a == cache_frame_faa64771dd3aa707505bb15f7abf966a )
    {
        Py_DECREF( frame_faa64771dd3aa707505bb15f7abf966a );
    }
    cache_frame_faa64771dd3aa707505bb15f7abf966a = NULL;

    assertFrameObject( frame_faa64771dd3aa707505bb15f7abf966a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_4__structure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_level );
    Py_DECREF( par_level );
    par_level = NULL;

    CHECK_OBJECT( (PyObject *)par_include_default );
    Py_DECREF( par_include_default );
    par_include_default = NULL;

    CHECK_OBJECT( (PyObject *)var_tab );
    Py_DECREF( var_tab );
    var_tab = NULL;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_level );
    Py_DECREF( par_level );
    par_level = NULL;

    CHECK_OBJECT( (PyObject *)par_include_default );
    Py_DECREF( par_include_default );
    par_include_default = NULL;

    Py_XDECREF( var_tab );
    var_tab = NULL;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$iterators$$$function_4__structure );
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



static PyObject *MAKE_FUNCTION_email$iterators$$$function_1_walk(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$iterators$$$function_1_walk,
        const_str_plain_walk,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_67dc14af007cb00f08aabede68edfa85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$iterators,
        const_str_digest_6220e16c79276bbb44f1ce05669ec2b4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$iterators$$$function_2_body_line_iterator( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$iterators$$$function_2_body_line_iterator,
        const_str_plain_body_line_iterator,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_919f484aec38b8cc708c929a4a6be3f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$iterators,
        const_str_digest_a24ea58a4d922cf7b7215c4a777e0b17,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$iterators$$$function_3_typed_subpart_iterator( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$iterators$$$function_3_typed_subpart_iterator,
        const_str_plain_typed_subpart_iterator,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a72366848176289620f2040b2ff06e3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$iterators,
        const_str_digest_a35294548215811533a2601acdd1deb1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$iterators$$$function_4__structure( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$iterators$$$function_4__structure,
        const_str_plain__structure,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_faa64771dd3aa707505bb15f7abf966a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$iterators,
        const_str_digest_029d4e1734797170284f010e3168c7fb,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email$iterators =
{
    PyModuleDef_HEAD_INIT,
    "email.iterators",
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

MOD_INIT_DECL( email$iterators )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email$iterators );
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
    puts("email.iterators: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.iterators: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.iterators: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail$iterators" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email$iterators = Py_InitModule4(
        "email.iterators",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email$iterators = PyModule_Create( &mdef_email$iterators );
#endif

    moduledict_email$iterators = MODULE_DICT( module_email$iterators );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_email$iterators,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email$iterators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$iterators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$iterators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email$iterators );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ce77c4f134547ae2a49c03947795f6e3, module_email$iterators );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_faa39f8008ac7a89c264bad6195567c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_e3c66ca9a856a3770c2415f2700c10d2;
        UPDATE_STRING_DICT0( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_faa39f8008ac7a89c264bad6195567c1 = MAKE_MODULE_FRAME( codeobj_faa39f8008ac7a89c264bad6195567c1, module_email$iterators );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_faa39f8008ac7a89c264bad6195567c1 );
    assert( Py_REFCNT( frame_faa39f8008ac7a89c264bad6195567c1 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_d12b929b9543173071522a86a60e5810_list );
        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_email$iterators;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_faa39f8008ac7a89c264bad6195567c1->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_io;
        tmp_globals_name_2 = (PyObject *)moduledict_email$iterators;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_StringIO_tuple;
        tmp_level_name_2 = const_int_0;
        frame_faa39f8008ac7a89c264bad6195567c1->m_frame.f_lineno = 15;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_6 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_faa39f8008ac7a89c264bad6195567c1 );
#endif
    popFrameStack();

    assertFrameObject( frame_faa39f8008ac7a89c264bad6195567c1 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_faa39f8008ac7a89c264bad6195567c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_faa39f8008ac7a89c264bad6195567c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_faa39f8008ac7a89c264bad6195567c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_faa39f8008ac7a89c264bad6195567c1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_email$iterators$$$function_1_walk(  );



        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_walk, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_8 = MAKE_FUNCTION_email$iterators$$$function_2_body_line_iterator( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_body_line_iterator, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_str_plain_text_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_9 = MAKE_FUNCTION_email$iterators$$$function_3_typed_subpart_iterator( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain_typed_subpart_iterator, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_int_0_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_10 = MAKE_FUNCTION_email$iterators$$$function_4__structure( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain__structure, tmp_assign_source_10 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_email$iterators, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_email$iterators );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
