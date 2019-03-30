/* Generated code for Python module 'email.parser'
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

/* The "_module_email$parser" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email$parser;
PyDictObject *moduledict_email$parser;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_1c81563195eff45f9528c7645ae214b9;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple;
static PyObject *const_str_digest_d3adf572e3ba416164e4effc48413b51;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_4fb01fc6cfcc8974e23314a67b4b209d;
extern PyObject *const_str_plain_compat32;
static PyObject *const_str_digest_61e6c2043f2d22101b48a59ad4e9b255;
static PyObject *const_dict_98fed9e481c36c4372ef786716b7447b;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_plain_FeedParser_str_plain_BytesFeedParser_tuple;
static PyObject *const_tuple_str_plain_StringIO_str_plain_TextIOWrapper_tuple;
static PyObject *const_tuple_str_plain_self_str_plain__class_str_plain_policy_tuple;
extern PyObject *const_str_plain_detach;
extern PyObject *const_str_plain_BytesParser;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain__class;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_fp;
static PyObject *const_str_digest_8c7de741a2d7496d1d65c0678858ca17;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_143dcfda3def65cb34224b000cc50703;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_tuple_str_plain_BytesParser_tuple_empty_tuple;
extern PyObject *const_str_plain_parsestr;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_close;
extern PyObject *const_tuple_str_plain_ASCII_tuple;
extern PyObject *const_str_plain_BytesFeedParser;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_dict_109ec49f1337ae5f744df7155de35d67;
static PyObject *const_str_digest_dd90cca0df843472d3f6633d75eaefc8;
static PyObject *const_str_digest_fb8e55acb4dae30660b41daf29f5431a;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple;
extern PyObject *const_str_plain_surrogateescape;
extern PyObject *const_str_plain_Parser;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_11146b7eb27ccc6becd71a833de64808;
static PyObject *const_str_digest_ee907a607839e2e065a66358f42a950c;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_digest_087a50e00d281593e6bdf78f884e352a;
extern PyObject *const_str_plain_parser;
static PyObject *const_tuple_str_plain_Parser_tuple_empty_tuple;
extern PyObject *const_tuple_str_plain_compat32_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain__set_headersonly;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_int_pos_8192_tuple;
static PyObject *const_str_plain_BytesHeaderParser;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_int_pos_8192;
extern PyObject *const_int_0;
static PyObject *const_str_digest_1e472e0c2ce94f430c2e8547590128c1;
static PyObject *const_str_digest_f5dd7dd17920a1d3613b6af0aab59a86;
extern PyObject *const_str_plain_parsebytes;
extern PyObject *const_str_plain_text;
static PyObject *const_str_digest_ebd73dfdaadd4df57f16b98a998b1760;
static PyObject *const_dict_8e2e8f27a4bf8c3a5fb7206c6ca5ca8a;
extern PyObject *const_str_plain_origin;
static PyObject *const_list_884d74d0286f8cf1993859473e25bd9e_list;
extern PyObject *const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
static PyObject *const_str_digest_77bd14080cafe517ada4eed70b1f47f4;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_digest_974431616df11b584fd1f7cbfe18dfa5;
static PyObject *const_str_digest_c4ff1653ed28e2fbb07573ef9db3f31d;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_ASCII;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_headersonly;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_eca0fa6e365f472bb277e12d598cc070;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_4791cb5d3e3e18d7a298e23df63434a1;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_StringIO;
static PyObject *const_str_digest_1cef6c378226ebb9d88848dba10c8db2;
static PyObject *const_str_plain_HeaderParser;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_feedparser;
static PyObject *const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_TextIOWrapper;
extern PyObject *const_str_plain_FeedParser;
extern PyObject *const_str_plain_policy;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_41b239e531e69febc98248cfdc191632;
static PyObject *const_tuple_c52f590da96536d44d10acd40e728271_tuple;
extern PyObject *const_str_plain_feed;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_1c81563195eff45f9528c7645ae214b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 270234 ], 301, 0 );
    const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_str_plain_headersonly = UNSTREAM_STRING_ASCII( &constant_bin[ 229652 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 2, const_str_plain_headersonly ); Py_INCREF( const_str_plain_headersonly );
    const_str_digest_d3adf572e3ba416164e4effc48413b51 = UNSTREAM_STRING_ASCII( &constant_bin[ 270535 ], 720, 0 );
    const_str_digest_4fb01fc6cfcc8974e23314a67b4b209d = UNSTREAM_STRING_ASCII( &constant_bin[ 271255 ], 21, 0 );
    const_str_digest_61e6c2043f2d22101b48a59ad4e9b255 = UNSTREAM_STRING_ASCII( &constant_bin[ 271276 ], 28, 0 );
    const_dict_98fed9e481c36c4372ef786716b7447b = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_98fed9e481c36c4372ef786716b7447b, const_str_plain_errors, const_str_plain_surrogateescape );
    assert( PyDict_Size( const_dict_98fed9e481c36c4372ef786716b7447b ) == 1 );
    const_tuple_str_plain_FeedParser_str_plain_BytesFeedParser_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FeedParser_str_plain_BytesFeedParser_tuple, 0, const_str_plain_FeedParser ); Py_INCREF( const_str_plain_FeedParser );
    PyTuple_SET_ITEM( const_tuple_str_plain_FeedParser_str_plain_BytesFeedParser_tuple, 1, const_str_plain_BytesFeedParser ); Py_INCREF( const_str_plain_BytesFeedParser );
    const_tuple_str_plain_StringIO_str_plain_TextIOWrapper_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_str_plain_TextIOWrapper_tuple, 0, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_str_plain_TextIOWrapper_tuple, 1, const_str_plain_TextIOWrapper ); Py_INCREF( const_str_plain_TextIOWrapper );
    const_tuple_str_plain_self_str_plain__class_str_plain_policy_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain__class_str_plain_policy_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain__class_str_plain_policy_tuple, 1, const_str_plain__class ); Py_INCREF( const_str_plain__class );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain__class_str_plain_policy_tuple, 2, const_str_plain_policy ); Py_INCREF( const_str_plain_policy );
    const_str_digest_8c7de741a2d7496d1d65c0678858ca17 = UNSTREAM_STRING_ASCII( &constant_bin[ 271304 ], 22, 0 );
    const_str_digest_143dcfda3def65cb34224b000cc50703 = UNSTREAM_STRING_ASCII( &constant_bin[ 271326 ], 901, 0 );
    const_tuple_str_plain_BytesParser_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesParser_tuple_empty_tuple, 0, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesParser_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_dict_109ec49f1337ae5f744df7155de35d67 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_109ec49f1337ae5f744df7155de35d67, const_str_plain_headersonly, Py_True );
    assert( PyDict_Size( const_dict_109ec49f1337ae5f744df7155de35d67 ) == 1 );
    const_str_digest_dd90cca0df843472d3f6633d75eaefc8 = UNSTREAM_STRING_ASCII( &constant_bin[ 271304 ], 17, 0 );
    const_str_digest_fb8e55acb4dae30660b41daf29f5431a = UNSTREAM_STRING_ASCII( &constant_bin[ 272227 ], 355, 0 );
    const_str_digest_11146b7eb27ccc6becd71a833de64808 = UNSTREAM_STRING_ASCII( &constant_bin[ 271281 ], 18, 0 );
    const_str_digest_ee907a607839e2e065a66358f42a950c = UNSTREAM_STRING_ASCII( &constant_bin[ 272582 ], 20, 0 );
    const_tuple_str_plain_Parser_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Parser_tuple_empty_tuple, 0, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    PyTuple_SET_ITEM( const_tuple_str_plain_Parser_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_tuple_int_pos_8192_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_8192_tuple, 0, const_int_pos_8192 ); Py_INCREF( const_int_pos_8192 );
    const_str_plain_BytesHeaderParser = UNSTREAM_STRING_ASCII( &constant_bin[ 271276 ], 17, 1 );
    const_str_digest_1e472e0c2ce94f430c2e8547590128c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 272602 ], 15, 0 );
    const_str_digest_f5dd7dd17920a1d3613b6af0aab59a86 = UNSTREAM_STRING_ASCII( &constant_bin[ 272617 ], 21, 0 );
    const_str_digest_ebd73dfdaadd4df57f16b98a998b1760 = UNSTREAM_STRING_ASCII( &constant_bin[ 16697 ], 12, 0 );
    const_dict_8e2e8f27a4bf8c3a5fb7206c6ca5ca8a = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_8e2e8f27a4bf8c3a5fb7206c6ca5ca8a, const_str_plain_encoding, const_str_plain_ascii );
    PyDict_SetItem( const_dict_8e2e8f27a4bf8c3a5fb7206c6ca5ca8a, const_str_plain_errors, const_str_plain_surrogateescape );
    assert( PyDict_Size( const_dict_8e2e8f27a4bf8c3a5fb7206c6ca5ca8a ) == 2 );
    const_list_884d74d0286f8cf1993859473e25bd9e_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_884d74d0286f8cf1993859473e25bd9e_list, 0, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_plain_HeaderParser = UNSTREAM_STRING_ASCII( &constant_bin[ 271281 ], 12, 1 );
    PyList_SET_ITEM( const_list_884d74d0286f8cf1993859473e25bd9e_list, 1, const_str_plain_HeaderParser ); Py_INCREF( const_str_plain_HeaderParser );
    PyList_SET_ITEM( const_list_884d74d0286f8cf1993859473e25bd9e_list, 2, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    PyList_SET_ITEM( const_list_884d74d0286f8cf1993859473e25bd9e_list, 3, const_str_plain_BytesHeaderParser ); Py_INCREF( const_str_plain_BytesHeaderParser );
    PyList_SET_ITEM( const_list_884d74d0286f8cf1993859473e25bd9e_list, 4, const_str_plain_FeedParser ); Py_INCREF( const_str_plain_FeedParser );
    PyList_SET_ITEM( const_list_884d74d0286f8cf1993859473e25bd9e_list, 5, const_str_plain_BytesFeedParser ); Py_INCREF( const_str_plain_BytesFeedParser );
    const_str_digest_77bd14080cafe517ada4eed70b1f47f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 17725 ], 15, 0 );
    const_str_digest_c4ff1653ed28e2fbb07573ef9db3f31d = UNSTREAM_STRING_ASCII( &constant_bin[ 272638 ], 15, 0 );
    const_str_digest_eca0fa6e365f472bb277e12d598cc070 = UNSTREAM_STRING_ASCII( &constant_bin[ 272653 ], 306, 0 );
    const_str_digest_4791cb5d3e3e18d7a298e23df63434a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 271276 ], 23, 0 );
    const_str_digest_1cef6c378226ebb9d88848dba10c8db2 = UNSTREAM_STRING_ASCII( &constant_bin[ 272959 ], 45, 0 );
    const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple, 2, const_str_plain_headersonly ); Py_INCREF( const_str_plain_headersonly );
    const_str_digest_41b239e531e69febc98248cfdc191632 = UNSTREAM_STRING_ASCII( &constant_bin[ 273004 ], 348, 0 );
    const_tuple_c52f590da96536d44d10acd40e728271_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c52f590da96536d44d10acd40e728271_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c52f590da96536d44d10acd40e728271_tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_c52f590da96536d44d10acd40e728271_tuple, 2, const_str_plain_headersonly ); Py_INCREF( const_str_plain_headersonly );
    PyTuple_SET_ITEM( const_tuple_c52f590da96536d44d10acd40e728271_tuple, 3, const_str_plain_feedparser ); Py_INCREF( const_str_plain_feedparser );
    PyTuple_SET_ITEM( const_tuple_c52f590da96536d44d10acd40e728271_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email$parser( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9d6e76b17c978369a4001994d0bf6077;
static PyCodeObject *codeobj_b519f784d188e9462c4f18e9a6495c4c;
static PyCodeObject *codeobj_36d88d471676dcaaa83ba17349d2d834;
static PyCodeObject *codeobj_06485d870baef69d15b126f9e998c8c2;
static PyCodeObject *codeobj_93bc9d92f6db74b501af64c54d47f7d3;
static PyCodeObject *codeobj_c00333965d1d46e055ec8886406c40fa;
static PyCodeObject *codeobj_afb8f2d8eeb4ff2544655fa921e002f9;
static PyCodeObject *codeobj_860965e877d13bae142e4a10aaa2ccb5;
static PyCodeObject *codeobj_717a4ae914de7fe62faadf5b6b08fb83;
static PyCodeObject *codeobj_fe0bc98304715c3ea2ef049bd5542c19;
static PyCodeObject *codeobj_d0b05e764ab728dd7a4af762e9218aa4;
static PyCodeObject *codeobj_bee8010c9342bed376f59efed635d5f4;
static PyCodeObject *codeobj_668a2199d7438359c364e6f805e5633f;
static PyCodeObject *codeobj_8757c3d71bfd5fdd147a2beabce9b7c7;
static PyCodeObject *codeobj_c603d1133d1d135e5228b4c4a674c220;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c4ff1653ed28e2fbb07573ef9db3f31d );
    codeobj_9d6e76b17c978369a4001994d0bf6077 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4fb01fc6cfcc8974e23314a67b4b209d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b519f784d188e9462c4f18e9a6495c4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BytesHeaderParser, 127, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_36d88d471676dcaaa83ba17349d2d834 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BytesParser, 80, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_06485d870baef69d15b126f9e998c8c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HeaderParser, 72, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_93bc9d92f6db74b501af64c54d47f7d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Parser, 17, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c00333965d1d46e055ec8886406c40fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 18, const_tuple_str_plain_self_str_plain__class_str_plain_policy_tuple, 2, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_afb8f2d8eeb4ff2544655fa921e002f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 82, const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_860965e877d13bae142e4a10aaa2ccb5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 42, const_tuple_c52f590da96536d44d10acd40e728271_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_717a4ae914de7fe62faadf5b6b08fb83 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 73, const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe0bc98304715c3ea2ef049bd5542c19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 100, const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0b05e764ab728dd7a4af762e9218aa4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 128, const_tuple_str_plain_self_str_plain_fp_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bee8010c9342bed376f59efed635d5f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parsebytes, 115, const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_668a2199d7438359c364e6f805e5633f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parsebytes, 131, const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8757c3d71bfd5fdd147a2beabce9b7c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parsestr, 60, const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c603d1133d1d135e5228b4c4a674c220 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parsestr, 76, const_tuple_str_plain_self_str_plain_text_str_plain_headersonly_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_email$parser$$$function_10_parsebytes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_1___init__( PyObject *defaults, PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_2_parse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_3_parsestr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_4_parse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_5_parsestr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_email$parser$$$function_7_parse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_8_parsebytes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$parser$$$function_9_parse( PyObject *defaults );


// The module function definitions.
static PyObject *impl_email$parser$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par__class = python_pars[ 1 ];
    PyObject *par_policy = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c00333965d1d46e055ec8886406c40fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c00333965d1d46e055ec8886406c40fa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c00333965d1d46e055ec8886406c40fa, codeobj_c00333965d1d46e055ec8886406c40fa, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c00333965d1d46e055ec8886406c40fa = cache_frame_c00333965d1d46e055ec8886406c40fa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c00333965d1d46e055ec8886406c40fa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c00333965d1d46e055ec8886406c40fa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par__class );
        tmp_assattr_name_1 = par__class;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__class, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_policy );
        tmp_assattr_name_2 = par_policy;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_policy, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c00333965d1d46e055ec8886406c40fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c00333965d1d46e055ec8886406c40fa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c00333965d1d46e055ec8886406c40fa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c00333965d1d46e055ec8886406c40fa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c00333965d1d46e055ec8886406c40fa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c00333965d1d46e055ec8886406c40fa,
        type_description_1,
        par_self,
        par__class,
        par_policy
    );


    // Release cached frame.
    if ( frame_c00333965d1d46e055ec8886406c40fa == cache_frame_c00333965d1d46e055ec8886406c40fa )
    {
        Py_DECREF( frame_c00333965d1d46e055ec8886406c40fa );
    }
    cache_frame_c00333965d1d46e055ec8886406c40fa = NULL;

    assertFrameObject( frame_c00333965d1d46e055ec8886406c40fa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par__class );
    Py_DECREF( par__class );
    par__class = NULL;

    CHECK_OBJECT( (PyObject *)par_policy );
    Py_DECREF( par_policy );
    par_policy = NULL;

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

    CHECK_OBJECT( (PyObject *)par__class );
    Py_DECREF( par__class );
    par__class = NULL;

    CHECK_OBJECT( (PyObject *)par_policy );
    Py_DECREF( par_policy );
    par_policy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_1___init__ );
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


static PyObject *impl_email$parser$$$function_2_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    PyObject *var_feedparser = NULL;
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_860965e877d13bae142e4a10aaa2ccb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_860965e877d13bae142e4a10aaa2ccb5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_860965e877d13bae142e4a10aaa2ccb5, codeobj_860965e877d13bae142e4a10aaa2ccb5, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_860965e877d13bae142e4a10aaa2ccb5 = cache_frame_860965e877d13bae142e4a10aaa2ccb5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_860965e877d13bae142e4a10aaa2ccb5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_860965e877d13bae142e4a10aaa2ccb5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_FeedParser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FeedParser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FeedParser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__class );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_policy;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_policy );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_860965e877d13bae142e4a10aaa2ccb5->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_feedparser == NULL );
        var_feedparser = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_headersonly );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_headersonly );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooo";
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
            CHECK_OBJECT( var_feedparser );
            tmp_called_instance_1 = var_feedparser;
            frame_860965e877d13bae142e4a10aaa2ccb5->m_frame.f_lineno = 52;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__set_headersonly );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_fp );
        tmp_called_instance_2 = par_fp;
        frame_860965e877d13bae142e4a10aaa2ccb5->m_frame.f_lineno = 54;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_8192_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_data );
        tmp_operand_name_1 = var_data;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_feedparser );
        tmp_called_instance_3 = var_feedparser;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_1 = var_data;
        frame_860965e877d13bae142e4a10aaa2ccb5->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_feed, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( var_feedparser );
        tmp_called_instance_4 = var_feedparser;
        frame_860965e877d13bae142e4a10aaa2ccb5->m_frame.f_lineno = 58;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_860965e877d13bae142e4a10aaa2ccb5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_860965e877d13bae142e4a10aaa2ccb5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_860965e877d13bae142e4a10aaa2ccb5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_860965e877d13bae142e4a10aaa2ccb5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_860965e877d13bae142e4a10aaa2ccb5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_860965e877d13bae142e4a10aaa2ccb5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_860965e877d13bae142e4a10aaa2ccb5,
        type_description_1,
        par_self,
        par_fp,
        par_headersonly,
        var_feedparser,
        var_data
    );


    // Release cached frame.
    if ( frame_860965e877d13bae142e4a10aaa2ccb5 == cache_frame_860965e877d13bae142e4a10aaa2ccb5 )
    {
        Py_DECREF( frame_860965e877d13bae142e4a10aaa2ccb5 );
    }
    cache_frame_860965e877d13bae142e4a10aaa2ccb5 = NULL;

    assertFrameObject( frame_860965e877d13bae142e4a10aaa2ccb5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_2_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    CHECK_OBJECT( (PyObject *)var_feedparser );
    Py_DECREF( var_feedparser );
    var_feedparser = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    Py_XDECREF( var_feedparser );
    var_feedparser = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_2_parse );
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


static PyObject *impl_email$parser$$$function_3_parsestr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_8757c3d71bfd5fdd147a2beabce9b7c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8757c3d71bfd5fdd147a2beabce9b7c7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8757c3d71bfd5fdd147a2beabce9b7c7, codeobj_8757c3d71bfd5fdd147a2beabce9b7c7, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8757c3d71bfd5fdd147a2beabce9b7c7 = cache_frame_8757c3d71bfd5fdd147a2beabce9b7c7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8757c3d71bfd5fdd147a2beabce9b7c7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8757c3d71bfd5fdd147a2beabce9b7c7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_StringIO );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StringIO );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "StringIO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_1 = par_text;
        frame_8757c3d71bfd5fdd147a2beabce9b7c7->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_headersonly;
        CHECK_OBJECT( par_headersonly );
        tmp_dict_value_1 = par_headersonly;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_8757c3d71bfd5fdd147a2beabce9b7c7->m_frame.f_lineno = 68;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8757c3d71bfd5fdd147a2beabce9b7c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8757c3d71bfd5fdd147a2beabce9b7c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8757c3d71bfd5fdd147a2beabce9b7c7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8757c3d71bfd5fdd147a2beabce9b7c7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8757c3d71bfd5fdd147a2beabce9b7c7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8757c3d71bfd5fdd147a2beabce9b7c7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8757c3d71bfd5fdd147a2beabce9b7c7,
        type_description_1,
        par_self,
        par_text,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_8757c3d71bfd5fdd147a2beabce9b7c7 == cache_frame_8757c3d71bfd5fdd147a2beabce9b7c7 )
    {
        Py_DECREF( frame_8757c3d71bfd5fdd147a2beabce9b7c7 );
    }
    cache_frame_8757c3d71bfd5fdd147a2beabce9b7c7 = NULL;

    assertFrameObject( frame_8757c3d71bfd5fdd147a2beabce9b7c7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_3_parsestr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_3_parsestr );
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


static PyObject *impl_email$parser$$$function_4_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_717a4ae914de7fe62faadf5b6b08fb83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_717a4ae914de7fe62faadf5b6b08fb83 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_717a4ae914de7fe62faadf5b6b08fb83, codeobj_717a4ae914de7fe62faadf5b6b08fb83, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_717a4ae914de7fe62faadf5b6b08fb83 = cache_frame_717a4ae914de7fe62faadf5b6b08fb83;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_717a4ae914de7fe62faadf5b6b08fb83 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_717a4ae914de7fe62faadf5b6b08fb83 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_Parser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Parser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_2 = par_fp;
        tmp_args_element_name_3 = Py_True;
        frame_717a4ae914de7fe62faadf5b6b08fb83->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_parse, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_717a4ae914de7fe62faadf5b6b08fb83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_717a4ae914de7fe62faadf5b6b08fb83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_717a4ae914de7fe62faadf5b6b08fb83 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_717a4ae914de7fe62faadf5b6b08fb83, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_717a4ae914de7fe62faadf5b6b08fb83->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_717a4ae914de7fe62faadf5b6b08fb83, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_717a4ae914de7fe62faadf5b6b08fb83,
        type_description_1,
        par_self,
        par_fp,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_717a4ae914de7fe62faadf5b6b08fb83 == cache_frame_717a4ae914de7fe62faadf5b6b08fb83 )
    {
        Py_DECREF( frame_717a4ae914de7fe62faadf5b6b08fb83 );
    }
    cache_frame_717a4ae914de7fe62faadf5b6b08fb83 = NULL;

    assertFrameObject( frame_717a4ae914de7fe62faadf5b6b08fb83 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_4_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_4_parse );
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


static PyObject *impl_email$parser$$$function_5_parsestr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c603d1133d1d135e5228b4c4a674c220;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c603d1133d1d135e5228b4c4a674c220 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c603d1133d1d135e5228b4c4a674c220, codeobj_c603d1133d1d135e5228b4c4a674c220, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c603d1133d1d135e5228b4c4a674c220 = cache_frame_c603d1133d1d135e5228b4c4a674c220;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c603d1133d1d135e5228b4c4a674c220 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c603d1133d1d135e5228b4c4a674c220 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_Parser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Parser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_2 = par_text;
        tmp_args_element_name_3 = Py_True;
        frame_c603d1133d1d135e5228b4c4a674c220->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_parsestr, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c603d1133d1d135e5228b4c4a674c220 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c603d1133d1d135e5228b4c4a674c220 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c603d1133d1d135e5228b4c4a674c220 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c603d1133d1d135e5228b4c4a674c220, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c603d1133d1d135e5228b4c4a674c220->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c603d1133d1d135e5228b4c4a674c220, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c603d1133d1d135e5228b4c4a674c220,
        type_description_1,
        par_self,
        par_text,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_c603d1133d1d135e5228b4c4a674c220 == cache_frame_c603d1133d1d135e5228b4c4a674c220 )
    {
        Py_DECREF( frame_c603d1133d1d135e5228b4c4a674c220 );
    }
    cache_frame_c603d1133d1d135e5228b4c4a674c220 = NULL;

    assertFrameObject( frame_c603d1133d1d135e5228b4c4a674c220 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_5_parsestr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_5_parsestr );
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


static PyObject *impl_email$parser$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_afb8f2d8eeb4ff2544655fa921e002f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_afb8f2d8eeb4ff2544655fa921e002f9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afb8f2d8eeb4ff2544655fa921e002f9, codeobj_afb8f2d8eeb4ff2544655fa921e002f9, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_afb8f2d8eeb4ff2544655fa921e002f9 = cache_frame_afb8f2d8eeb4ff2544655fa921e002f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afb8f2d8eeb4ff2544655fa921e002f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afb8f2d8eeb4ff2544655fa921e002f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_Parser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Parser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kw );
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_parser, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afb8f2d8eeb4ff2544655fa921e002f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afb8f2d8eeb4ff2544655fa921e002f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afb8f2d8eeb4ff2544655fa921e002f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afb8f2d8eeb4ff2544655fa921e002f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afb8f2d8eeb4ff2544655fa921e002f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afb8f2d8eeb4ff2544655fa921e002f9,
        type_description_1,
        par_self,
        par_args,
        par_kw
    );


    // Release cached frame.
    if ( frame_afb8f2d8eeb4ff2544655fa921e002f9 == cache_frame_afb8f2d8eeb4ff2544655fa921e002f9 )
    {
        Py_DECREF( frame_afb8f2d8eeb4ff2544655fa921e002f9 );
    }
    cache_frame_afb8f2d8eeb4ff2544655fa921e002f9 = NULL;

    assertFrameObject( frame_afb8f2d8eeb4ff2544655fa921e002f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_6___init__ );
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


static PyObject *impl_email$parser$$$function_7_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_fe0bc98304715c3ea2ef049bd5542c19;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fe0bc98304715c3ea2ef049bd5542c19 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe0bc98304715c3ea2ef049bd5542c19, codeobj_fe0bc98304715c3ea2ef049bd5542c19, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fe0bc98304715c3ea2ef049bd5542c19 = cache_frame_fe0bc98304715c3ea2ef049bd5542c19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe0bc98304715c3ea2ef049bd5542c19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe0bc98304715c3ea2ef049bd5542c19 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_TextIOWrapper );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextIOWrapper );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextIOWrapper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_tuple_element_1 = par_fp;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_8e2e8f27a4bf8c3a5fb7206c6ca5ca8a );
        frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame.f_lineno = 108;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_fp;
            assert( old != NULL );
            par_fp = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parser );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        CHECK_OBJECT( par_headersonly );
        tmp_args_element_name_2 = par_headersonly;
        frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_parse, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_7_parse );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_fp );
        tmp_called_instance_2 = par_fp;
        frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame.f_lineno = 112;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_detach );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_fe0bc98304715c3ea2ef049bd5542c19, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_fe0bc98304715c3ea2ef049bd5542c19, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_fp );
        tmp_called_instance_3 = par_fp;
        frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame.f_lineno = 112;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_detach );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 109;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame) frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_7_parse );
    return NULL;
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
    RESTORE_FRAME_EXCEPTION( frame_fe0bc98304715c3ea2ef049bd5542c19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe0bc98304715c3ea2ef049bd5542c19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe0bc98304715c3ea2ef049bd5542c19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe0bc98304715c3ea2ef049bd5542c19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe0bc98304715c3ea2ef049bd5542c19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe0bc98304715c3ea2ef049bd5542c19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe0bc98304715c3ea2ef049bd5542c19,
        type_description_1,
        par_self,
        par_fp,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_fe0bc98304715c3ea2ef049bd5542c19 == cache_frame_fe0bc98304715c3ea2ef049bd5542c19 )
    {
        Py_DECREF( frame_fe0bc98304715c3ea2ef049bd5542c19 );
    }
    cache_frame_fe0bc98304715c3ea2ef049bd5542c19 = NULL;

    assertFrameObject( frame_fe0bc98304715c3ea2ef049bd5542c19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_7_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_7_parse );
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


static PyObject *impl_email$parser$$$function_8_parsebytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_bee8010c9342bed376f59efed635d5f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bee8010c9342bed376f59efed635d5f4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bee8010c9342bed376f59efed635d5f4, codeobj_bee8010c9342bed376f59efed635d5f4, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bee8010c9342bed376f59efed635d5f4 = cache_frame_bee8010c9342bed376f59efed635d5f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bee8010c9342bed376f59efed635d5f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bee8010c9342bed376f59efed635d5f4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_text );
        tmp_source_name_1 = par_text;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_str_plain_ASCII_tuple;
        tmp_kw_name_1 = PyDict_Copy( const_dict_98fed9e481c36c4372ef786716b7447b );
        frame_bee8010c9342bed376f59efed635d5f4->m_frame.f_lineno = 123;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_text;
            assert( old != NULL );
            par_text = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parser );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_text );
        tmp_args_element_name_1 = par_text;
        CHECK_OBJECT( par_headersonly );
        tmp_args_element_name_2 = par_headersonly;
        frame_bee8010c9342bed376f59efed635d5f4->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_parsestr, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bee8010c9342bed376f59efed635d5f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bee8010c9342bed376f59efed635d5f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bee8010c9342bed376f59efed635d5f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bee8010c9342bed376f59efed635d5f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bee8010c9342bed376f59efed635d5f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bee8010c9342bed376f59efed635d5f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bee8010c9342bed376f59efed635d5f4,
        type_description_1,
        par_self,
        par_text,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_bee8010c9342bed376f59efed635d5f4 == cache_frame_bee8010c9342bed376f59efed635d5f4 )
    {
        Py_DECREF( frame_bee8010c9342bed376f59efed635d5f4 );
    }
    cache_frame_bee8010c9342bed376f59efed635d5f4 = NULL;

    assertFrameObject( frame_bee8010c9342bed376f59efed635d5f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_8_parsebytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_8_parsebytes );
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


static PyObject *impl_email$parser$$$function_9_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d0b05e764ab728dd7a4af762e9218aa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0b05e764ab728dd7a4af762e9218aa4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0b05e764ab728dd7a4af762e9218aa4, codeobj_d0b05e764ab728dd7a4af762e9218aa4, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0b05e764ab728dd7a4af762e9218aa4 = cache_frame_d0b05e764ab728dd7a4af762e9218aa4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0b05e764ab728dd7a4af762e9218aa4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0b05e764ab728dd7a4af762e9218aa4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_BytesParser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesParser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesParser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_fp );
        tmp_tuple_element_1 = par_fp;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_109ec49f1337ae5f744df7155de35d67 );
        frame_d0b05e764ab728dd7a4af762e9218aa4->m_frame.f_lineno = 129;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b05e764ab728dd7a4af762e9218aa4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b05e764ab728dd7a4af762e9218aa4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b05e764ab728dd7a4af762e9218aa4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0b05e764ab728dd7a4af762e9218aa4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0b05e764ab728dd7a4af762e9218aa4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0b05e764ab728dd7a4af762e9218aa4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0b05e764ab728dd7a4af762e9218aa4,
        type_description_1,
        par_self,
        par_fp,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_d0b05e764ab728dd7a4af762e9218aa4 == cache_frame_d0b05e764ab728dd7a4af762e9218aa4 )
    {
        Py_DECREF( frame_d0b05e764ab728dd7a4af762e9218aa4 );
    }
    cache_frame_d0b05e764ab728dd7a4af762e9218aa4 = NULL;

    assertFrameObject( frame_d0b05e764ab728dd7a4af762e9218aa4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_9_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_9_parse );
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


static PyObject *impl_email$parser$$$function_10_parsebytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *par_headersonly = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_668a2199d7438359c364e6f805e5633f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_668a2199d7438359c364e6f805e5633f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_668a2199d7438359c364e6f805e5633f, codeobj_668a2199d7438359c364e6f805e5633f, module_email$parser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_668a2199d7438359c364e6f805e5633f = cache_frame_668a2199d7438359c364e6f805e5633f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_668a2199d7438359c364e6f805e5633f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_668a2199d7438359c364e6f805e5633f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_BytesParser );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesParser );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesParser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parsebytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_text );
        tmp_tuple_element_1 = par_text;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_109ec49f1337ae5f744df7155de35d67 );
        frame_668a2199d7438359c364e6f805e5633f->m_frame.f_lineno = 132;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_668a2199d7438359c364e6f805e5633f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_668a2199d7438359c364e6f805e5633f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_668a2199d7438359c364e6f805e5633f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_668a2199d7438359c364e6f805e5633f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_668a2199d7438359c364e6f805e5633f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_668a2199d7438359c364e6f805e5633f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_668a2199d7438359c364e6f805e5633f,
        type_description_1,
        par_self,
        par_text,
        par_headersonly
    );


    // Release cached frame.
    if ( frame_668a2199d7438359c364e6f805e5633f == cache_frame_668a2199d7438359c364e6f805e5633f )
    {
        Py_DECREF( frame_668a2199d7438359c364e6f805e5633f );
    }
    cache_frame_668a2199d7438359c364e6f805e5633f = NULL;

    assertFrameObject( frame_668a2199d7438359c364e6f805e5633f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_10_parsebytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_headersonly );
    Py_DECREF( par_headersonly );
    par_headersonly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$parser$$$function_10_parsebytes );
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



static PyObject *MAKE_FUNCTION_email$parser$$$function_10_parsebytes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_10_parsebytes,
        const_str_plain_parsebytes,
#if PYTHON_VERSION >= 300
        const_str_digest_61e6c2043f2d22101b48a59ad4e9b255,
#endif
        codeobj_668a2199d7438359c364e6f805e5633f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_1___init__( PyObject *defaults, PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_77bd14080cafe517ada4eed70b1f47f4,
#endif
        codeobj_c00333965d1d46e055ec8886406c40fa,
        defaults,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_email$parser,
        const_str_digest_143dcfda3def65cb34224b000cc50703,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_2_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_2_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        const_str_digest_ebd73dfdaadd4df57f16b98a998b1760,
#endif
        codeobj_860965e877d13bae142e4a10aaa2ccb5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        const_str_digest_41b239e531e69febc98248cfdc191632,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_3_parsestr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_3_parsestr,
        const_str_plain_parsestr,
#if PYTHON_VERSION >= 300
        const_str_digest_1e472e0c2ce94f430c2e8547590128c1,
#endif
        codeobj_8757c3d71bfd5fdd147a2beabce9b7c7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        const_str_digest_1c81563195eff45f9528c7645ae214b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_4_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_4_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        const_str_digest_11146b7eb27ccc6becd71a833de64808,
#endif
        codeobj_717a4ae914de7fe62faadf5b6b08fb83,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_5_parsestr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_5_parsestr,
        const_str_plain_parsestr,
#if PYTHON_VERSION >= 300
        const_str_digest_f5dd7dd17920a1d3613b6af0aab59a86,
#endif
        codeobj_c603d1133d1d135e5228b4c4a674c220,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_ee907a607839e2e065a66358f42a950c,
#endif
        codeobj_afb8f2d8eeb4ff2544655fa921e002f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        const_str_digest_d3adf572e3ba416164e4effc48413b51,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_7_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_7_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        const_str_digest_dd90cca0df843472d3f6633d75eaefc8,
#endif
        codeobj_fe0bc98304715c3ea2ef049bd5542c19,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        const_str_digest_fb8e55acb4dae30660b41daf29f5431a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_8_parsebytes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_8_parsebytes,
        const_str_plain_parsebytes,
#if PYTHON_VERSION >= 300
        const_str_digest_8c7de741a2d7496d1d65c0678858ca17,
#endif
        codeobj_bee8010c9342bed376f59efed635d5f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        const_str_digest_eca0fa6e365f472bb277e12d598cc070,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$parser$$$function_9_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$parser$$$function_9_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        const_str_digest_4791cb5d3e3e18d7a298e23df63434a1,
#endif
        codeobj_d0b05e764ab728dd7a4af762e9218aa4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$parser,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email$parser =
{
    PyModuleDef_HEAD_INIT,
    "email.parser",
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

MOD_INIT_DECL( email$parser )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email$parser );
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
    puts("email.parser: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.parser: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.parser: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail$parser" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email$parser = Py_InitModule4(
        "email.parser",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email$parser = PyModule_Create( &mdef_email$parser );
#endif

    moduledict_email$parser = MODULE_DICT( module_email$parser );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_email$parser,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email$parser,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$parser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$parser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email$parser );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_83b73b72bdc078f56a1611a452ee7e4b, module_email$parser );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_9d6e76b17c978369a4001994d0bf6077;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_email$parser_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_93bc9d92f6db74b501af64c54d47f7d3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_93bc9d92f6db74b501af64c54d47f7d3_2 = NULL;
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
    PyObject *locals_email$parser_72 = NULL;
    struct Nuitka_FrameObject *frame_06485d870baef69d15b126f9e998c8c2_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_06485d870baef69d15b126f9e998c8c2_3 = NULL;
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
    PyObject *locals_email$parser_80 = NULL;
    struct Nuitka_FrameObject *frame_36d88d471676dcaaa83ba17349d2d834_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_36d88d471676dcaaa83ba17349d2d834_4 = NULL;
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
    PyObject *locals_email$parser_127 = NULL;
    struct Nuitka_FrameObject *frame_b519f784d188e9462c4f18e9a6495c4c_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b519f784d188e9462c4f18e9a6495c4c_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1cef6c378226ebb9d88848dba10c8db2;
        UPDATE_STRING_DICT0( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_9d6e76b17c978369a4001994d0bf6077 = MAKE_MODULE_FRAME( codeobj_9d6e76b17c978369a4001994d0bf6077, module_email$parser );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9d6e76b17c978369a4001994d0bf6077 );
    assert( Py_REFCNT( frame_9d6e76b17c978369a4001994d0bf6077 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_884d74d0286f8cf1993859473e25bd9e_list );
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_io;
        tmp_globals_name_1 = (PyObject *)moduledict_email$parser;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_StringIO_str_plain_TextIOWrapper_tuple;
        tmp_level_name_1 = const_int_0;
        frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 10;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_TextIOWrapper );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_TextIOWrapper, tmp_assign_source_7 );
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_974431616df11b584fd1f7cbfe18dfa5;
        tmp_globals_name_2 = (PyObject *)moduledict_email$parser;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_FeedParser_str_plain_BytesFeedParser_tuple;
        tmp_level_name_2 = const_int_0;
        frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 12;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_3 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FeedParser );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_FeedParser, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_BytesFeedParser );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_BytesFeedParser, tmp_assign_source_10 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_087a50e00d281593e6bdf78f884e352a;
        tmp_globals_name_3 = (PyObject *)moduledict_email$parser;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_compat32_tuple;
        tmp_level_name_3 = const_int_0;
        frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_compat32 );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_compat32, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 17;

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


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
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


            exception_lineno = 17;

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


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_3;
            }
            tmp_args_name_1 = const_tuple_str_plain_Parser_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 17;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_4;
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


                exception_lineno = 17;

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
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 17;

                    goto try_except_handler_3;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 17;

                    goto try_except_handler_3;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 17;

                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 17;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_email$parser_17 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_res = PyObject_SetItem( locals_email$parser_17, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_plain_Parser;
        tmp_res = PyObject_SetItem( locals_email$parser_17, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_93bc9d92f6db74b501af64c54d47f7d3_2, codeobj_93bc9d92f6db74b501af64c54d47f7d3, module_email$parser, sizeof(void *) );
        frame_93bc9d92f6db74b501af64c54d47f7d3_2 = cache_frame_93bc9d92f6db74b501af64c54d47f7d3_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_93bc9d92f6db74b501af64c54d47f7d3_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_93bc9d92f6db74b501af64c54d47f7d3_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_3;
            tmp_defaults_1 = const_tuple_none_tuple;
            tmp_dict_key_1 = const_str_plain_policy;
            tmp_dict_value_1 = PyObject_GetItem( locals_email$parser_17, const_str_plain_compat32 );

            if ( tmp_dict_value_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_compat32 );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compat32 );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compat32" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_dict_value_1 = tmp_mvar_value_3;
                Py_INCREF( tmp_dict_value_1 );
                }
            }

            tmp_kw_defaults_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_1___init__( tmp_defaults_1, tmp_kw_defaults_1 );



            tmp_res = PyObject_SetItem( locals_email$parser_17, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_2_parse( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_email$parser_17, const_str_plain_parse, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_3_parsestr( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_email$parser_17, const_str_plain_parsestr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_93bc9d92f6db74b501af64c54d47f7d3_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_93bc9d92f6db74b501af64c54d47f7d3_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_93bc9d92f6db74b501af64c54d47f7d3_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_93bc9d92f6db74b501af64c54d47f7d3_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_93bc9d92f6db74b501af64c54d47f7d3_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_93bc9d92f6db74b501af64c54d47f7d3_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_93bc9d92f6db74b501af64c54d47f7d3_2 == cache_frame_93bc9d92f6db74b501af64c54d47f7d3_2 )
        {
            Py_DECREF( frame_93bc9d92f6db74b501af64c54d47f7d3_2 );
        }
        cache_frame_93bc9d92f6db74b501af64c54d47f7d3_2 = NULL;

        assertFrameObject( frame_93bc9d92f6db74b501af64c54d47f7d3_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_Parser;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_email$parser_17;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 17;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_5;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_email$parser_17 );
        locals_email$parser_17 = NULL;
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

        Py_DECREF( locals_email$parser_17 );
        locals_email$parser_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_Parser, tmp_assign_source_16 );
    }
    goto try_end_3;
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
    try_end_3:;
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_Parser );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Parser );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;

            goto try_except_handler_6;
        }

        tmp_tuple_element_3 = tmp_mvar_value_4;
        tmp_assign_source_18 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

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


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_1 = tmp_class_creation_2__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        Py_DECREF( tmp_type_arg_2 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_3:;
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_7;
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


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_6;
            }
            tmp_tuple_element_4 = const_str_plain_HeaderParser;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 72;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_6;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_22;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_6;
            }
            tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_3;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_6;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_3 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 72;

                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_6;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 72;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_23;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_email$parser_72 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_res = PyObject_SetItem( locals_email$parser_72, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_plain_HeaderParser;
        tmp_res = PyObject_SetItem( locals_email$parser_72, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_06485d870baef69d15b126f9e998c8c2_3, codeobj_06485d870baef69d15b126f9e998c8c2, module_email$parser, sizeof(void *) );
        frame_06485d870baef69d15b126f9e998c8c2_3 = cache_frame_06485d870baef69d15b126f9e998c8c2_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_06485d870baef69d15b126f9e998c8c2_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_06485d870baef69d15b126f9e998c8c2_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_4_parse( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_email$parser_72, const_str_plain_parse, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_5_parsestr( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_email$parser_72, const_str_plain_parsestr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_06485d870baef69d15b126f9e998c8c2_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_06485d870baef69d15b126f9e998c8c2_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_06485d870baef69d15b126f9e998c8c2_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_06485d870baef69d15b126f9e998c8c2_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_06485d870baef69d15b126f9e998c8c2_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_06485d870baef69d15b126f9e998c8c2_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_06485d870baef69d15b126f9e998c8c2_3 == cache_frame_06485d870baef69d15b126f9e998c8c2_3 )
        {
            Py_DECREF( frame_06485d870baef69d15b126f9e998c8c2_3 );
        }
        cache_frame_06485d870baef69d15b126f9e998c8c2_3 = NULL;

        assertFrameObject( frame_06485d870baef69d15b126f9e998c8c2_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_8;
            }
            tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_email$parser_72, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_8;
            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_HeaderParser;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_email$parser_72;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 72;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_8;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_24 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_email$parser_72 );
        locals_email$parser_72 = NULL;
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

        Py_DECREF( locals_email$parser_72 );
        locals_email$parser_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 72;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_HeaderParser, tmp_assign_source_24 );
    }
    goto try_end_4;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_4:;
        tmp_bases_name_3 = const_tuple_empty;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_12;
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


            exception_lineno = 80;

            goto try_except_handler_9;
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
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_9;
            }
            tmp_args_name_5 = const_tuple_str_plain_BytesParser_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 80;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_9;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_9;
            }
            tmp_condition_result_14 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;

                    goto try_except_handler_9;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_4 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 80;

                    goto try_except_handler_9;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_7 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;

                    goto try_except_handler_9;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 80;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_9;
            }
            branch_no_10:;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_29;
        }
        branch_end_9:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_email$parser_80 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_res = PyObject_SetItem( locals_email$parser_80, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_11;
        }
        tmp_dictset_value = const_str_plain_BytesParser;
        tmp_res = PyObject_SetItem( locals_email$parser_80, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto try_except_handler_11;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_36d88d471676dcaaa83ba17349d2d834_4, codeobj_36d88d471676dcaaa83ba17349d2d834, module_email$parser, sizeof(void *) );
        frame_36d88d471676dcaaa83ba17349d2d834_4 = cache_frame_36d88d471676dcaaa83ba17349d2d834_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_36d88d471676dcaaa83ba17349d2d834_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_36d88d471676dcaaa83ba17349d2d834_4 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_6___init__(  );



        tmp_res = PyObject_SetItem( locals_email$parser_80, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_7_parse( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_email$parser_80, const_str_plain_parse, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_7 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_8_parsebytes( tmp_defaults_7 );



            tmp_res = PyObject_SetItem( locals_email$parser_80, const_str_plain_parsebytes, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_36d88d471676dcaaa83ba17349d2d834_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_36d88d471676dcaaa83ba17349d2d834_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_36d88d471676dcaaa83ba17349d2d834_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_36d88d471676dcaaa83ba17349d2d834_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_36d88d471676dcaaa83ba17349d2d834_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_36d88d471676dcaaa83ba17349d2d834_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_36d88d471676dcaaa83ba17349d2d834_4 == cache_frame_36d88d471676dcaaa83ba17349d2d834_4 )
        {
            Py_DECREF( frame_36d88d471676dcaaa83ba17349d2d834_4 );
        }
        cache_frame_36d88d471676dcaaa83ba17349d2d834_4 = NULL;

        assertFrameObject( frame_36d88d471676dcaaa83ba17349d2d834_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_8 = const_str_plain_BytesParser;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
            tmp_tuple_element_8 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_email$parser_80;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 80;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;

                goto try_except_handler_11;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_30 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_email$parser_80 );
        locals_email$parser_80 = NULL;
        goto try_return_handler_10;
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

        Py_DECREF( locals_email$parser_80 );
        locals_email$parser_80 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 80;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_BytesParser, tmp_assign_source_30 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_BytesParser );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesParser );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesParser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;

            goto try_except_handler_12;
        }

        tmp_tuple_element_9 = tmp_mvar_value_5;
        tmp_assign_source_32 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_4__bases_orig == NULL );
        tmp_class_creation_4__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_4__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_4__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_33 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        tmp_condition_result_16 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_2 = tmp_class_creation_4__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_4 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_35 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_12;
        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_13 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
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
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;

                goto try_except_handler_12;
            }
            tmp_tuple_element_10 = const_str_plain_BytesHeaderParser;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_10 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 127;
            tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;

                goto try_except_handler_12;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_36;
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_15 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;

                goto try_except_handler_12;
            }
            tmp_condition_result_19 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_13;
            }
            else
            {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;

                    goto try_except_handler_12;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_6 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 127;

                    goto try_except_handler_12;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_11 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;

                    goto try_except_handler_12;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 127;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_12;
            }
            branch_no_13:;
        }
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_37;
        }
        branch_end_12:;
    }
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_email$parser_127 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
        tmp_res = PyObject_SetItem( locals_email$parser_127, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_14;
        }
        tmp_dictset_value = const_str_plain_BytesHeaderParser;
        tmp_res = PyObject_SetItem( locals_email$parser_127, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto try_except_handler_14;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_b519f784d188e9462c4f18e9a6495c4c_5, codeobj_b519f784d188e9462c4f18e9a6495c4c, module_email$parser, sizeof(void *) );
        frame_b519f784d188e9462c4f18e9a6495c4c_5 = cache_frame_b519f784d188e9462c4f18e9a6495c4c_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_b519f784d188e9462c4f18e9a6495c4c_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_b519f784d188e9462c4f18e9a6495c4c_5 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_8 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_9_parse( tmp_defaults_8 );



            tmp_res = PyObject_SetItem( locals_email$parser_127, const_str_plain_parse, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_9 );
            tmp_dictset_value = MAKE_FUNCTION_email$parser$$$function_10_parsebytes( tmp_defaults_9 );



            tmp_res = PyObject_SetItem( locals_email$parser_127, const_str_plain_parsebytes, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b519f784d188e9462c4f18e9a6495c4c_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b519f784d188e9462c4f18e9a6495c4c_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_b519f784d188e9462c4f18e9a6495c4c_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_b519f784d188e9462c4f18e9a6495c4c_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_b519f784d188e9462c4f18e9a6495c4c_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_b519f784d188e9462c4f18e9a6495c4c_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_b519f784d188e9462c4f18e9a6495c4c_5 == cache_frame_b519f784d188e9462c4f18e9a6495c4c_5 )
        {
            Py_DECREF( frame_b519f784d188e9462c4f18e9a6495c4c_5 );
        }
        cache_frame_b519f784d188e9462c4f18e9a6495c4c_5 = NULL;

        assertFrameObject( frame_b519f784d188e9462c4f18e9a6495c4c_5 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_compexpr_left_2 = tmp_class_creation_4__bases;
            CHECK_OBJECT( tmp_class_creation_4__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_4__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;

                goto try_except_handler_14;
            }
            tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_14;
            }
            else
            {
                goto branch_no_14;
            }
            branch_yes_14:;
            CHECK_OBJECT( tmp_class_creation_4__bases_orig );
            tmp_dictset_value = tmp_class_creation_4__bases_orig;
            tmp_res = PyObject_SetItem( locals_email$parser_127, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;

                goto try_except_handler_14;
            }
            branch_no_14:;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = const_str_plain_BytesHeaderParser;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_12 );
            tmp_tuple_element_12 = locals_email$parser_127;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_9d6e76b17c978369a4001994d0bf6077->m_frame.f_lineno = 127;
            tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;

                goto try_except_handler_14;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_38 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_38 );
        goto try_return_handler_14;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF( locals_email$parser_127 );
        locals_email$parser_127 = NULL;
        goto try_return_handler_13;
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

        Py_DECREF( locals_email$parser_127 );
        locals_email$parser_127 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( email$parser );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 127;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain_BytesHeaderParser, tmp_assign_source_38 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases_orig );
    tmp_class_creation_4__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d6e76b17c978369a4001994d0bf6077 );
#endif
    popFrameStack();

    assertFrameObject( frame_9d6e76b17c978369a4001994d0bf6077 );

    goto frame_no_exception_5;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d6e76b17c978369a4001994d0bf6077 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d6e76b17c978369a4001994d0bf6077, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d6e76b17c978369a4001994d0bf6077->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d6e76b17c978369a4001994d0bf6077, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases_orig );
    Py_DECREF( tmp_class_creation_4__bases_orig );
    tmp_class_creation_4__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_email$parser, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_email$parser );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
