/* Generated code for Python module 'textwrap'
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

/* The "_module_textwrap" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textwrap;
PyDictObject *moduledict_textwrap;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_MULTILINE;
static PyObject *const_str_digest_f57e604e5496bc829035b383d2d8b12f;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_f75909f8fb20e0ec5110787680e5cdae;
extern PyObject *const_tuple_str_plain_self_str_plain_text_tuple;
extern PyObject *const_str_plain_expandtabs;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_str_plain_line_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_str_plain_c_tuple;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_tuple_str_space_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_cur_line;
static PyObject *const_str_digest_84d0eeb36b77e1a460561c4a1a345809;
static PyObject *const_tuple_9111eed38196aa82212f771d4046ecdd_tuple;
static PyObject *const_str_digest_a665e3b3bc7a843f21f072e4ac5e0c4c;
static PyObject *const_str_plain_max_lines;
static PyObject *const_str_plain__wrap_chunks;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_subsequent_indent;
extern PyObject *const_str_plain_tabsize;
static PyObject *const_str_digest_c20890179edf39a0e4410aebd544cb2b;
static PyObject *const_str_digest_cf0613df688a76dea09fc76b1e3f5ac7;
extern PyObject *const_str_plain_prefix;
static PyObject *const_str_plain_TextWrapper;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_prefixed_lines;
static PyObject *const_str_plain_space_left;
static PyObject *const_str_digest_8ce8a97e0d8b33d7e94a48d1a4fba457;
static PyObject *const_str_digest_3d2eb3996a9a9a2a94bb132e1e3967a3;
extern PyObject *const_str_plain_expand_tabs;
static PyObject *const_str_digest_1348efbbc7dfa6ea25a86c30cb6536b1;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_7d7353e3b12a585a1401cc7250c36b66;
extern PyObject *const_str_digest_0674107b2d3e86aecfffb00b3395ae4a;
extern PyObject *const_str_plain_splitlines;
static PyObject *const_str_plain_replace_whitespace;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_shorten;
static PyObject *const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple;
static PyObject *const_tuple_df6455ae87d3699f871e3609acabcff3_tuple;
static PyObject *const_str_digest_8d1b2f866a9130fc0c50bbb677d42704;
static PyObject *const_str_plain_letter;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_reverse;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_placeholder;
extern PyObject *const_int_pos_70;
static PyObject *const_str_plain_cur_len;
extern PyObject *const_str_plain_len;
static PyObject *const_str_digest_0e1ca843f8c5abc4c90a60d5acf44903;
static PyObject *const_str_plain__leading_whitespace_re;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_nws;
static PyObject *const_str_digest_cc3e8ef8431c65657d305c328c512ca9;
static PyObject *const_str_digest_5626e271838b352703d6ea667a94ad63;
static PyObject *const_str_digest_9f4a99e4996f3828b0e2cba441a6e52e;
static PyObject *const_str_plain_wordsep_simple_re;
static PyObject *const_str_plain_nowhitespace;
extern PyObject *const_str_plain_w;
static PyObject *const_str_digest_ec8d36d60ad2780bce5ec51c43ff74d8;
static PyObject *const_str_plain_wordsep_re;
static PyObject *const_str_digest_21f04f3c148058f9a4013655a5963df4;
static PyObject *const_str_digest_415caf6a52dda1e8bf4aa4f3e5e119f3;
static PyObject *const_str_digest_d3d52f625888a02f31054866da2bfaa5;
static PyObject *const_str_plain_patsearch;
extern PyObject *const_str_plain_line;
static PyObject *const_str_digest_7c2df51351279be6adaa0cd1d87f01da;
static PyObject *const_str_digest_12dd09f25f1a7b81013d93abab089607;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_textwrap;
static PyObject *const_str_digest_afe97bb14daf8a4a1038036eb6b1a318;
extern PyObject *const_str_plain_indent;
extern PyObject *const_str_plain_l;
static PyObject *const_str_digest_55ad5e27d0a893d1729d2b55c435a3fa;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_space;
static PyObject *const_str_digest_490726a117d084aadbdebbf423acc936;
extern PyObject *const_str_plain_initial_indent;
extern PyObject *const_str_plain_append;
static PyObject *const_list_276370f6ab413fafd0fe2d7f35a85c90_list;
static PyObject *const_str_plain_break_on_hyphens;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_12cb3a05b1b9897c2b9521e9b0a6d5e6;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple;
static PyObject *const_str_plain_break_long_words;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_unicode_whitespace_trans;
static PyObject *const_str_plain_drop_whitespace;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_43be10c376de319c669329a88246c917;
static PyObject *const_tuple_str_digest_7998bc514edd7ec5916fb8c6de94e6e2_tuple;
static PyObject *const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple;
static PyObject *const_str_plain_margin;
static PyObject *const_str_plain_prev_line;
static PyObject *const_str_digest_c4d133aba7df336060ce8c0b840a30d1;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_65fc6c99c83d8929647977b56361e058;
extern PyObject *const_int_0;
static PyObject *const_str_plain_uspace;
static PyObject *const_str_digest_c9472a2aa94e80acdd0ca151eda97680;
static PyObject *const_str_digest_5f953be118226958c02acb9a64431a15;
static PyObject *const_str_plain__split_chunks;
static PyObject *const_tuple_str_plain_TextWrapper_tuple_empty_tuple;
extern PyObject *const_str_plain_chunks;
extern PyObject *const_str_plain_indents;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple;
static PyObject *const_str_plain__whitespace;
static PyObject *const_str_plain__whitespace_only_re;
static PyObject *const_str_digest_df679087aa18c0316ed89659564a5d4e;
extern PyObject *const_str_plain_ws;
static PyObject *const_str_plain_sentence_end_re;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_c;
static PyObject *const_str_plain__handle_long_word;
static PyObject *const_tuple_75012c2974a779ecf71d0c203c793a27_tuple;
static PyObject *const_tuple_int_pos_70_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_digest_b8872718382dd39ffa4013e303d20ce5;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_7998bc514edd7ec5916fb8c6de94e6e2;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_reversed_chunks;
static PyObject *const_str_plain__fix_sentence_endings;
static PyObject *const_str_plain__split;
static PyObject *const_str_plain_word_punct;
extern PyObject *const_str_plain_predicate;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_wp;
extern PyObject *const_str_plain_findall;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_6c15095e7ba93b81b0b01abbbaa76b94;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_dedent;
extern PyObject *const_str_plain_VERBOSE;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_37c5d58d588180a43047ac5a0ad2c264;
static PyObject *const_str_digest_ea3f101f553c21b368e2e59ea2453b62;
extern PyObject *const_str_plain___init__;
static PyObject *const_dict_32a265d85c65d04ced6107366644da8f;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_lines;
extern PyObject *const_str_plain_rstrip;
static PyObject *const_str_digest_d6eae13fe0093272d28071d96a130967;
static PyObject *const_str_digest_9ad0dec3f5d240ecb0eaeb9e193c9346;
extern PyObject *const_str_plain_whitespace;
static PyObject *const_str_plain_fix_sentence_endings;
extern PyObject *const_str_plain_translate;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_8067e65f76fd0671503bd36ebd32a033;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_lt;
static PyObject *const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_30f60b006bf9702e54b7baa31712c38b;
static PyObject *const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple;
static PyObject *const_str_digest_897aa675dc1f0ea770166be31e047ef9;
extern PyObject *const_str_plain_fill;
extern PyObject *const_str_plain_escape;
static PyObject *const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple;
static PyObject *const_str_plain__munge_whitespace;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_f57e604e5496bc829035b383d2d8b12f = UNSTREAM_STRING_ASCII( &constant_bin[ 1088345 ], 221, 0 );
    const_str_digest_f75909f8fb20e0ec5110787680e5cdae = UNSTREAM_STRING_ASCII( &constant_bin[ 1088566 ], 16, 0 );
    const_str_plain_cur_line = UNSTREAM_STRING_ASCII( &constant_bin[ 1088582 ], 8, 1 );
    const_str_digest_84d0eeb36b77e1a460561c4a1a345809 = UNSTREAM_STRING_ASCII( &constant_bin[ 1088590 ], 222, 0 );
    const_tuple_9111eed38196aa82212f771d4046ecdd_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 1, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 2, const_str_plain_initial_indent ); Py_INCREF( const_str_plain_initial_indent );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 3, const_str_plain_subsequent_indent ); Py_INCREF( const_str_plain_subsequent_indent );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 4, const_str_plain_expand_tabs ); Py_INCREF( const_str_plain_expand_tabs );
    const_str_plain_replace_whitespace = UNSTREAM_STRING_ASCII( &constant_bin[ 1088812 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 5, const_str_plain_replace_whitespace ); Py_INCREF( const_str_plain_replace_whitespace );
    const_str_plain_fix_sentence_endings = UNSTREAM_STRING_ASCII( &constant_bin[ 1088830 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 6, const_str_plain_fix_sentence_endings ); Py_INCREF( const_str_plain_fix_sentence_endings );
    const_str_plain_break_long_words = UNSTREAM_STRING_ASCII( &constant_bin[ 1088850 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 7, const_str_plain_break_long_words ); Py_INCREF( const_str_plain_break_long_words );
    const_str_plain_drop_whitespace = UNSTREAM_STRING_ASCII( &constant_bin[ 1088866 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 8, const_str_plain_drop_whitespace ); Py_INCREF( const_str_plain_drop_whitespace );
    const_str_plain_break_on_hyphens = UNSTREAM_STRING_ASCII( &constant_bin[ 1088881 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 9, const_str_plain_break_on_hyphens ); Py_INCREF( const_str_plain_break_on_hyphens );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 10, const_str_plain_tabsize ); Py_INCREF( const_str_plain_tabsize );
    const_str_plain_max_lines = UNSTREAM_STRING_ASCII( &constant_bin[ 1088897 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 11, const_str_plain_max_lines ); Py_INCREF( const_str_plain_max_lines );
    const_str_plain_placeholder = UNSTREAM_STRING_ASCII( &constant_bin[ 392466 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 12, const_str_plain_placeholder ); Py_INCREF( const_str_plain_placeholder );
    const_str_digest_a665e3b3bc7a843f21f072e4ac5e0c4c = UNSTREAM_STRING_ASCII( &constant_bin[ 1088906 ], 29, 0 );
    const_str_plain__wrap_chunks = UNSTREAM_STRING_ASCII( &constant_bin[ 1088935 ], 12, 1 );
    const_str_digest_c20890179edf39a0e4410aebd544cb2b = UNSTREAM_STRING_ASCII( &constant_bin[ 1088947 ], 12, 0 );
    const_str_digest_cf0613df688a76dea09fc76b1e3f5ac7 = UNSTREAM_STRING_ASCII( &constant_bin[ 19056 ], 2, 0 );
    const_str_plain_TextWrapper = UNSTREAM_STRING_ASCII( &constant_bin[ 1088566 ], 11, 1 );
    const_str_plain_prefixed_lines = UNSTREAM_STRING_ASCII( &constant_bin[ 1088959 ], 14, 1 );
    const_str_plain_space_left = UNSTREAM_STRING_ASCII( &constant_bin[ 1088973 ], 10, 1 );
    const_str_digest_8ce8a97e0d8b33d7e94a48d1a4fba457 = UNSTREAM_STRING_ASCII( &constant_bin[ 1088983 ], 570, 0 );
    const_str_digest_3d2eb3996a9a9a2a94bb132e1e3967a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 1089553 ], 442, 0 );
    const_str_digest_1348efbbc7dfa6ea25a86c30cb6536b1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1089995 ], 406, 0 );
    const_str_digest_7d7353e3b12a585a1401cc7250c36b66 = UNSTREAM_STRING_ASCII( &constant_bin[ 1090401 ], 7, 0 );
    const_str_plain_shorten = UNSTREAM_STRING_ASCII( &constant_bin[ 1090408 ], 7, 1 );
    const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 0, const_int_pos_70 ); Py_INCREF( const_int_pos_70 );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 2, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 3, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 4, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 5, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 6, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 7, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 8, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple, 9, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    const_tuple_df6455ae87d3699f871e3609acabcff3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_df6455ae87d3699f871e3609acabcff3_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_df6455ae87d3699f871e3609acabcff3_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    PyTuple_SET_ITEM( const_tuple_df6455ae87d3699f871e3609acabcff3_tuple, 2, const_str_plain_predicate ); Py_INCREF( const_str_plain_predicate );
    PyTuple_SET_ITEM( const_tuple_df6455ae87d3699f871e3609acabcff3_tuple, 3, const_str_plain_prefixed_lines ); Py_INCREF( const_str_plain_prefixed_lines );
    const_str_digest_8d1b2f866a9130fc0c50bbb677d42704 = UNSTREAM_STRING_ASCII( &constant_bin[ 1090415 ], 33, 0 );
    const_str_plain_letter = UNSTREAM_STRING_ASCII( &constant_bin[ 109803 ], 6, 1 );
    const_str_plain_cur_len = UNSTREAM_STRING_ASCII( &constant_bin[ 1090448 ], 7, 1 );
    const_str_digest_0e1ca843f8c5abc4c90a60d5acf44903 = UNSTREAM_STRING_ASCII( &constant_bin[ 1090455 ], 7, 0 );
    const_str_plain__leading_whitespace_re = UNSTREAM_STRING_ASCII( &constant_bin[ 1090462 ], 22, 1 );
    const_str_plain_nws = UNSTREAM_STRING_ASCII( &constant_bin[ 434593 ], 3, 1 );
    const_str_digest_cc3e8ef8431c65657d305c328c512ca9 = UNSTREAM_STRING_ASCII( &constant_bin[ 1090484 ], 5, 0 );
    const_str_digest_5626e271838b352703d6ea667a94ad63 = UNSTREAM_STRING_ASCII( &constant_bin[ 1090489 ], 25, 0 );
    const_str_digest_9f4a99e4996f3828b0e2cba441a6e52e = UNSTREAM_STRING_ASCII( &constant_bin[ 1090514 ], 266, 0 );
    const_str_plain_wordsep_simple_re = UNSTREAM_STRING_ASCII( &constant_bin[ 1090780 ], 17, 1 );
    const_str_plain_nowhitespace = UNSTREAM_STRING_ASCII( &constant_bin[ 1090797 ], 12, 1 );
    const_str_digest_ec8d36d60ad2780bce5ec51c43ff74d8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1090809 ], 359, 0 );
    const_str_plain_wordsep_re = UNSTREAM_STRING_ASCII( &constant_bin[ 1091168 ], 10, 1 );
    const_str_digest_21f04f3c148058f9a4013655a5963df4 = UNSTREAM_STRING_ASCII( &constant_bin[ 1091178 ], 29, 0 );
    const_str_digest_415caf6a52dda1e8bf4aa4f3e5e119f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 1091207 ], 27, 0 );
    const_str_digest_d3d52f625888a02f31054866da2bfaa5 = UNSTREAM_STRING_ASCII( &constant_bin[ 1091234 ], 326, 0 );
    const_str_plain_patsearch = UNSTREAM_STRING_ASCII( &constant_bin[ 1091560 ], 9, 1 );
    const_str_digest_7c2df51351279be6adaa0cd1d87f01da = UNSTREAM_STRING_ASCII( &constant_bin[ 1091569 ], 35, 0 );
    const_str_digest_12dd09f25f1a7b81013d93abab089607 = UNSTREAM_STRING_ASCII( &constant_bin[ 1091604 ], 17, 0 );
    const_str_digest_afe97bb14daf8a4a1038036eb6b1a318 = UNSTREAM_STRING_ASCII( &constant_bin[ 1091621 ], 350, 0 );
    const_str_digest_55ad5e27d0a893d1729d2b55c435a3fa = UNSTREAM_STRING_ASCII( &constant_bin[ 1091971 ], 30, 0 );
    const_str_digest_490726a117d084aadbdebbf423acc936 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092001 ], 11, 0 );
    const_list_276370f6ab413fafd0fe2d7f35a85c90_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_276370f6ab413fafd0fe2d7f35a85c90_list, 0, const_str_plain_TextWrapper ); Py_INCREF( const_str_plain_TextWrapper );
    PyList_SET_ITEM( const_list_276370f6ab413fafd0fe2d7f35a85c90_list, 1, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyList_SET_ITEM( const_list_276370f6ab413fafd0fe2d7f35a85c90_list, 2, const_str_plain_fill ); Py_INCREF( const_str_plain_fill );
    PyList_SET_ITEM( const_list_276370f6ab413fafd0fe2d7f35a85c90_list, 3, const_str_plain_dedent ); Py_INCREF( const_str_plain_dedent );
    PyList_SET_ITEM( const_list_276370f6ab413fafd0fe2d7f35a85c90_list, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyList_SET_ITEM( const_list_276370f6ab413fafd0fe2d7f35a85c90_list, 5, const_str_plain_shorten ); Py_INCREF( const_str_plain_shorten );
    const_str_digest_12cb3a05b1b9897c2b9521e9b0a6d5e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092012 ], 6, 0 );
    const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple, 2, const_str_plain_chunks ); Py_INCREF( const_str_plain_chunks );
    const_str_plain_unicode_whitespace_trans = UNSTREAM_STRING_ASCII( &constant_bin[ 1092018 ], 24, 1 );
    const_str_digest_43be10c376de319c669329a88246c917 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092042 ], 6, 0 );
    const_tuple_str_digest_7998bc514edd7ec5916fb8c6de94e6e2_tuple = PyTuple_New( 1 );
    const_str_digest_7998bc514edd7ec5916fb8c6de94e6e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092048 ], 22, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7998bc514edd7ec5916fb8c6de94e6e2_tuple, 0, const_str_digest_7998bc514edd7ec5916fb8c6de94e6e2 ); Py_INCREF( const_str_digest_7998bc514edd7ec5916fb8c6de94e6e2 );
    const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_str_plain_margin = UNSTREAM_STRING_ASCII( &constant_bin[ 548019 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 1, const_str_plain_margin ); Py_INCREF( const_str_plain_margin );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 2, const_str_plain_indents ); Py_INCREF( const_str_plain_indents );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 3, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 6, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 7, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    const_str_plain_prev_line = UNSTREAM_STRING_ASCII( &constant_bin[ 1092070 ], 9, 1 );
    const_str_digest_c4d133aba7df336060ce8c0b840a30d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092079 ], 24, 0 );
    const_str_digest_65fc6c99c83d8929647977b56361e058 = UNSTREAM_STRING_ASCII( &constant_bin[ 137120 ], 5, 0 );
    const_str_plain_uspace = UNSTREAM_STRING_ASCII( &constant_bin[ 1092103 ], 6, 1 );
    const_str_digest_c9472a2aa94e80acdd0ca151eda97680 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092109 ], 18, 0 );
    const_str_digest_5f953be118226958c02acb9a64431a15 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092127 ], 671, 0 );
    const_str_plain__split_chunks = UNSTREAM_STRING_ASCII( &constant_bin[ 1092798 ], 13, 1 );
    const_tuple_str_plain_TextWrapper_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TextWrapper_tuple_empty_tuple, 0, const_str_plain_TextWrapper ); Py_INCREF( const_str_plain_TextWrapper );
    PyTuple_SET_ITEM( const_tuple_str_plain_TextWrapper_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 1, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 3, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    const_str_plain__whitespace = UNSTREAM_STRING_ASCII( &constant_bin[ 25039 ], 11, 1 );
    const_str_plain__whitespace_only_re = UNSTREAM_STRING_ASCII( &constant_bin[ 1092811 ], 19, 1 );
    const_str_digest_df679087aa18c0316ed89659564a5d4e = UNSTREAM_STRING_ASCII( &constant_bin[ 1092830 ], 18, 0 );
    const_str_plain_sentence_end_re = UNSTREAM_STRING_ASCII( &constant_bin[ 1092848 ], 15, 1 );
    const_str_plain__handle_long_word = UNSTREAM_STRING_ASCII( &constant_bin[ 1090514 ], 17, 1 );
    const_tuple_75012c2974a779ecf71d0c203c793a27_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_75012c2974a779ecf71d0c203c793a27_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_75012c2974a779ecf71d0c203c793a27_tuple, 1, const_str_plain_chunks ); Py_INCREF( const_str_plain_chunks );
    PyTuple_SET_ITEM( const_tuple_75012c2974a779ecf71d0c203c793a27_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_75012c2974a779ecf71d0c203c793a27_tuple, 3, const_str_plain_patsearch ); Py_INCREF( const_str_plain_patsearch );
    const_tuple_int_pos_70_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_70_tuple, 0, const_int_pos_70 ); Py_INCREF( const_int_pos_70 );
    const_str_plain_reversed_chunks = UNSTREAM_STRING_ASCII( &constant_bin[ 1092863 ], 15, 1 );
    const_str_plain__fix_sentence_endings = UNSTREAM_STRING_ASCII( &constant_bin[ 1090427 ], 21, 1 );
    const_str_plain__split = UNSTREAM_STRING_ASCII( &constant_bin[ 16341 ], 6, 1 );
    const_str_plain_word_punct = UNSTREAM_STRING_ASCII( &constant_bin[ 1092878 ], 10, 1 );
    const_str_plain_wp = UNSTREAM_STRING_ASCII( &constant_bin[ 189237 ], 2, 1 );
    const_str_digest_6c15095e7ba93b81b0b01abbbaa76b94 = UNSTREAM_STRING_ASCII( &constant_bin[ 1092888 ], 2326, 0 );
    const_str_digest_37c5d58d588180a43047ac5a0ad2c264 = UNSTREAM_STRING_ASCII( &constant_bin[ 1095214 ], 590, 0 );
    const_str_digest_ea3f101f553c21b368e2e59ea2453b62 = UNSTREAM_STRING_ASCII( &constant_bin[ 1095804 ], 427, 0 );
    const_dict_32a265d85c65d04ced6107366644da8f = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_32a265d85c65d04ced6107366644da8f, const_str_plain_max_lines, Py_None );
    PyDict_SetItem( const_dict_32a265d85c65d04ced6107366644da8f, const_str_plain_placeholder, const_str_digest_43be10c376de319c669329a88246c917 );
    assert( PyDict_Size( const_dict_32a265d85c65d04ced6107366644da8f ) == 2 );
    const_str_digest_d6eae13fe0093272d28071d96a130967 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096231 ], 25, 0 );
    const_str_digest_9ad0dec3f5d240ecb0eaeb9e193c9346 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096256 ], 20, 0 );
    const_str_digest_8067e65f76fd0671503bd36ebd32a033 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096276 ], 30, 0 );
    const_str_plain_lt = UNSTREAM_STRING_ASCII( &constant_bin[ 1962 ], 2, 1 );
    const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 1, const_str_plain_reversed_chunks ); Py_INCREF( const_str_plain_reversed_chunks );
    PyTuple_SET_ITEM( const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 2, const_str_plain_cur_line ); Py_INCREF( const_str_plain_cur_line );
    PyTuple_SET_ITEM( const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 3, const_str_plain_cur_len ); Py_INCREF( const_str_plain_cur_len );
    PyTuple_SET_ITEM( const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 4, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 5, const_str_plain_space_left ); Py_INCREF( const_str_plain_space_left );
    const_str_digest_30f60b006bf9702e54b7baa31712c38b = UNSTREAM_STRING_ASCII( &constant_bin[ 1096306 ], 16, 0 );
    const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple, 0, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple, 2, const_str_plain_predicate ); Py_INCREF( const_str_plain_predicate );
    PyTuple_SET_ITEM( const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple, 3, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_str_digest_897aa675dc1f0ea770166be31e047ef9 = UNSTREAM_STRING_ASCII( &constant_bin[ 1096322 ], 456, 0 );
    const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 1, const_str_plain_chunks ); Py_INCREF( const_str_plain_chunks );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 2, const_str_plain_lines ); Py_INCREF( const_str_plain_lines );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 3, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 4, const_str_plain_cur_line ); Py_INCREF( const_str_plain_cur_line );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 5, const_str_plain_cur_len ); Py_INCREF( const_str_plain_cur_len );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 6, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 7, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 8, const_str_plain_prev_line ); Py_INCREF( const_str_plain_prev_line );
    const_str_plain__munge_whitespace = UNSTREAM_STRING_ASCII( &constant_bin[ 1088345 ], 17, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_textwrap( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_aaebda25f8fc3c85a92a8c43551cf490;
static PyCodeObject *codeobj_2263a0508ae400399fcc2212c850a976;
static PyCodeObject *codeobj_5dbe2a7b8f19f845e391d98af75d819c;
static PyCodeObject *codeobj_4b7881cc65dd9414d0ab50a6fae3113a;
static PyCodeObject *codeobj_6fac20b6a2aef31054318f39c8172088;
static PyCodeObject *codeobj_6d7f4a51e09134a67ea6d726ec2fa346;
static PyCodeObject *codeobj_6226b2ae145cc2983ebb88298e85dc6a;
static PyCodeObject *codeobj_fe45dda3fc81d8500d56664acbc6069e;
static PyCodeObject *codeobj_b795521d15d73de5b20725c89b50dcfe;
static PyCodeObject *codeobj_c54658b78c77c96eb16cd5676e29179a;
static PyCodeObject *codeobj_b1800cee9ee4b3c123ecc638e9ec3395;
static PyCodeObject *codeobj_5add9bba28bbbdb6a65c7d6b4327339c;
static PyCodeObject *codeobj_863c96fde07b17d6cae106dc9c87da71;
static PyCodeObject *codeobj_e8a95fb32241b3ebb75b917585a7eefa;
static PyCodeObject *codeobj_a38b03dea57bebb579aaabdf05944f57;
static PyCodeObject *codeobj_4033ca1645705fb730cf189321474460;
static PyCodeObject *codeobj_83eba34ccdbfad06b837f3409a043673;
static PyCodeObject *codeobj_62a2dc8c53ee266b2dbae5205b25cba0;
static PyCodeObject *codeobj_e6851e2cef752a4f5c79e8c526b33689;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_490726a117d084aadbdebbf423acc936 );
    codeobj_aaebda25f8fc3c85a92a8c43551cf490 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 179, const_tuple_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2263a0508ae400399fcc2212c850a976 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_12dd09f25f1a7b81013d93abab089607, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5dbe2a7b8f19f845e391d98af75d819c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TextWrapper, 17, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4b7881cc65dd9414d0ab50a6fae3113a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 115, const_tuple_9111eed38196aa82212f771d4046ecdd_tuple, 11, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6fac20b6a2aef31054318f39c8172088 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fix_sentence_endings, 182, const_tuple_75012c2974a779ecf71d0c203c793a27_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6d7f4a51e09134a67ea6d726ec2fa346 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__handle_long_word, 200, const_tuple_98e5edb0d50446a25e56232450c5aa40_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6226b2ae145cc2983ebb88298e85dc6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__munge_whitespace, 146, const_tuple_str_plain_self_str_plain_text_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe45dda3fc81d8500d56664acbc6069e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__split, 160, const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b795521d15d73de5b20725c89b50dcfe = MAKE_CODEOBJ( module_filename_obj, const_str_plain__split_chunks, 336, const_tuple_str_plain_self_str_plain_text_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c54658b78c77c96eb16cd5676e29179a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrap_chunks, 233, const_tuple_88d0168a3ff75e64831737b73f4c26ca_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b1800cee9ee4b3c123ecc638e9ec3395 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dedent, 414, const_tuple_b24dda2f38dee1373df1bfb79bb1a04a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5add9bba28bbbdb6a65c7d6b4327339c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill, 356, const_tuple_str_plain_self_str_plain_text_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_863c96fde07b17d6cae106dc9c87da71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill, 381, const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e8a95fb32241b3ebb75b917585a7eefa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_indent, 465, const_tuple_df6455ae87d3699f871e3609acabcff3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a38b03dea57bebb579aaabdf05944f57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_predicate, 474, const_tuple_str_plain_line_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4033ca1645705fb730cf189321474460 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prefixed_lines, 477, const_tuple_befb79ac2da5c800c0e67256480e2e7c_tuple, 0, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_83eba34ccdbfad06b837f3409a043673 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_shorten, 393, const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_62a2dc8c53ee266b2dbae5205b25cba0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap, 342, const_tuple_str_plain_self_str_plain_text_str_plain_chunks_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e6851e2cef752a4f5c79e8c526b33689 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap, 368, const_tuple_str_plain_text_str_plain_width_str_plain_kwargs_str_plain_w_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
static PyObject *textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_textwrap$$$function_10_wrap( PyObject *defaults );


static PyObject *MAKE_FUNCTION_textwrap$$$function_11_fill( PyObject *defaults );


static PyObject *MAKE_FUNCTION_textwrap$$$function_12_shorten(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_13_dedent(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_14_indent( PyObject *defaults );


static PyObject *MAKE_FUNCTION_textwrap$$$function_14_indent$$$function_1_predicate(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_14_indent$$$function_2_prefixed_lines(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_1___init__( PyObject *defaults, PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_textwrap$$$function_2__munge_whitespace(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_3__split(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_4__fix_sentence_endings(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_5__handle_long_word(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_6__wrap_chunks(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_7__split_chunks(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_8_wrap(  );


static PyObject *MAKE_FUNCTION_textwrap$$$function_9_fill(  );


// The module function definitions.
static PyObject *impl_textwrap$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_width = python_pars[ 1 ];
    PyObject *par_initial_indent = python_pars[ 2 ];
    PyObject *par_subsequent_indent = python_pars[ 3 ];
    PyObject *par_expand_tabs = python_pars[ 4 ];
    PyObject *par_replace_whitespace = python_pars[ 5 ];
    PyObject *par_fix_sentence_endings = python_pars[ 6 ];
    PyObject *par_break_long_words = python_pars[ 7 ];
    PyObject *par_drop_whitespace = python_pars[ 8 ];
    PyObject *par_break_on_hyphens = python_pars[ 9 ];
    PyObject *par_tabsize = python_pars[ 10 ];
    PyObject *par_max_lines = python_pars[ 11 ];
    PyObject *par_placeholder = python_pars[ 12 ];
    struct Nuitka_FrameObject *frame_4b7881cc65dd9414d0ab50a6fae3113a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4b7881cc65dd9414d0ab50a6fae3113a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b7881cc65dd9414d0ab50a6fae3113a, codeobj_4b7881cc65dd9414d0ab50a6fae3113a, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b7881cc65dd9414d0ab50a6fae3113a = cache_frame_4b7881cc65dd9414d0ab50a6fae3113a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b7881cc65dd9414d0ab50a6fae3113a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b7881cc65dd9414d0ab50a6fae3113a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_width );
        tmp_assattr_name_1 = par_width;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_width, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_initial_indent );
        tmp_assattr_name_2 = par_initial_indent;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_initial_indent, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_subsequent_indent );
        tmp_assattr_name_3 = par_subsequent_indent;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_subsequent_indent, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_expand_tabs );
        tmp_assattr_name_4 = par_expand_tabs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_expand_tabs, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_replace_whitespace );
        tmp_assattr_name_5 = par_replace_whitespace;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_replace_whitespace, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_fix_sentence_endings );
        tmp_assattr_name_6 = par_fix_sentence_endings;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_fix_sentence_endings, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_break_long_words );
        tmp_assattr_name_7 = par_break_long_words;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_break_long_words, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_drop_whitespace );
        tmp_assattr_name_8 = par_drop_whitespace;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_drop_whitespace, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( par_break_on_hyphens );
        tmp_assattr_name_9 = par_break_on_hyphens;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_break_on_hyphens, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( par_tabsize );
        tmp_assattr_name_10 = par_tabsize;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_tabsize, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( par_max_lines );
        tmp_assattr_name_11 = par_max_lines;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_max_lines, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( par_placeholder );
        tmp_assattr_name_12 = par_placeholder;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_placeholder, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b7881cc65dd9414d0ab50a6fae3113a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b7881cc65dd9414d0ab50a6fae3113a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b7881cc65dd9414d0ab50a6fae3113a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b7881cc65dd9414d0ab50a6fae3113a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b7881cc65dd9414d0ab50a6fae3113a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b7881cc65dd9414d0ab50a6fae3113a,
        type_description_1,
        par_self,
        par_width,
        par_initial_indent,
        par_subsequent_indent,
        par_expand_tabs,
        par_replace_whitespace,
        par_fix_sentence_endings,
        par_break_long_words,
        par_drop_whitespace,
        par_break_on_hyphens,
        par_tabsize,
        par_max_lines,
        par_placeholder
    );


    // Release cached frame.
    if ( frame_4b7881cc65dd9414d0ab50a6fae3113a == cache_frame_4b7881cc65dd9414d0ab50a6fae3113a )
    {
        Py_DECREF( frame_4b7881cc65dd9414d0ab50a6fae3113a );
    }
    cache_frame_4b7881cc65dd9414d0ab50a6fae3113a = NULL;

    assertFrameObject( frame_4b7881cc65dd9414d0ab50a6fae3113a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_indent );
    Py_DECREF( par_initial_indent );
    par_initial_indent = NULL;

    CHECK_OBJECT( (PyObject *)par_subsequent_indent );
    Py_DECREF( par_subsequent_indent );
    par_subsequent_indent = NULL;

    CHECK_OBJECT( (PyObject *)par_expand_tabs );
    Py_DECREF( par_expand_tabs );
    par_expand_tabs = NULL;

    CHECK_OBJECT( (PyObject *)par_replace_whitespace );
    Py_DECREF( par_replace_whitespace );
    par_replace_whitespace = NULL;

    CHECK_OBJECT( (PyObject *)par_fix_sentence_endings );
    Py_DECREF( par_fix_sentence_endings );
    par_fix_sentence_endings = NULL;

    CHECK_OBJECT( (PyObject *)par_break_long_words );
    Py_DECREF( par_break_long_words );
    par_break_long_words = NULL;

    CHECK_OBJECT( (PyObject *)par_drop_whitespace );
    Py_DECREF( par_drop_whitespace );
    par_drop_whitespace = NULL;

    CHECK_OBJECT( (PyObject *)par_break_on_hyphens );
    Py_DECREF( par_break_on_hyphens );
    par_break_on_hyphens = NULL;

    CHECK_OBJECT( (PyObject *)par_tabsize );
    Py_DECREF( par_tabsize );
    par_tabsize = NULL;

    CHECK_OBJECT( (PyObject *)par_max_lines );
    Py_DECREF( par_max_lines );
    par_max_lines = NULL;

    CHECK_OBJECT( (PyObject *)par_placeholder );
    Py_DECREF( par_placeholder );
    par_placeholder = NULL;

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

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_initial_indent );
    Py_DECREF( par_initial_indent );
    par_initial_indent = NULL;

    CHECK_OBJECT( (PyObject *)par_subsequent_indent );
    Py_DECREF( par_subsequent_indent );
    par_subsequent_indent = NULL;

    CHECK_OBJECT( (PyObject *)par_expand_tabs );
    Py_DECREF( par_expand_tabs );
    par_expand_tabs = NULL;

    CHECK_OBJECT( (PyObject *)par_replace_whitespace );
    Py_DECREF( par_replace_whitespace );
    par_replace_whitespace = NULL;

    CHECK_OBJECT( (PyObject *)par_fix_sentence_endings );
    Py_DECREF( par_fix_sentence_endings );
    par_fix_sentence_endings = NULL;

    CHECK_OBJECT( (PyObject *)par_break_long_words );
    Py_DECREF( par_break_long_words );
    par_break_long_words = NULL;

    CHECK_OBJECT( (PyObject *)par_drop_whitespace );
    Py_DECREF( par_drop_whitespace );
    par_drop_whitespace = NULL;

    CHECK_OBJECT( (PyObject *)par_break_on_hyphens );
    Py_DECREF( par_break_on_hyphens );
    par_break_on_hyphens = NULL;

    CHECK_OBJECT( (PyObject *)par_tabsize );
    Py_DECREF( par_tabsize );
    par_tabsize = NULL;

    CHECK_OBJECT( (PyObject *)par_max_lines );
    Py_DECREF( par_max_lines );
    par_max_lines = NULL;

    CHECK_OBJECT( (PyObject *)par_placeholder );
    Py_DECREF( par_placeholder );
    par_placeholder = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_1___init__ );
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


static PyObject *impl_textwrap$$$function_2__munge_whitespace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6226b2ae145cc2983ebb88298e85dc6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6226b2ae145cc2983ebb88298e85dc6a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6226b2ae145cc2983ebb88298e85dc6a, codeobj_6226b2ae145cc2983ebb88298e85dc6a, module_textwrap, sizeof(void *)+sizeof(void *) );
    frame_6226b2ae145cc2983ebb88298e85dc6a = cache_frame_6226b2ae145cc2983ebb88298e85dc6a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6226b2ae145cc2983ebb88298e85dc6a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6226b2ae145cc2983ebb88298e85dc6a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_expand_tabs );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 153;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_text );
            tmp_source_name_2 = par_text;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_expandtabs );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tabsize );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 154;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_6226b2ae145cc2983ebb88298e85dc6a->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_text;
                assert( old != NULL );
                par_text = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_replace_whitespace );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 155;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_text );
            tmp_source_name_5 = par_text;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_translate );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_unicode_whitespace_trans );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 156;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_6226b2ae145cc2983ebb88298e85dc6a->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_text;
                assert( old != NULL );
                par_text = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    if ( par_text == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_text;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6226b2ae145cc2983ebb88298e85dc6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6226b2ae145cc2983ebb88298e85dc6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6226b2ae145cc2983ebb88298e85dc6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6226b2ae145cc2983ebb88298e85dc6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6226b2ae145cc2983ebb88298e85dc6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6226b2ae145cc2983ebb88298e85dc6a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6226b2ae145cc2983ebb88298e85dc6a,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame.
    if ( frame_6226b2ae145cc2983ebb88298e85dc6a == cache_frame_6226b2ae145cc2983ebb88298e85dc6a )
    {
        Py_DECREF( frame_6226b2ae145cc2983ebb88298e85dc6a );
    }
    cache_frame_6226b2ae145cc2983ebb88298e85dc6a = NULL;

    assertFrameObject( frame_6226b2ae145cc2983ebb88298e85dc6a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_2__munge_whitespace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_text );
    par_text = NULL;

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

    Py_XDECREF( par_text );
    par_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_2__munge_whitespace );
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


static PyObject *impl_textwrap$$$function_3__split( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *var_chunks = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_fe45dda3fc81d8500d56664acbc6069e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_aaebda25f8fc3c85a92a8c43551cf490_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_aaebda25f8fc3c85a92a8c43551cf490_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fe45dda3fc81d8500d56664acbc6069e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe45dda3fc81d8500d56664acbc6069e, codeobj_fe45dda3fc81d8500d56664acbc6069e, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fe45dda3fc81d8500d56664acbc6069e = cache_frame_fe45dda3fc81d8500d56664acbc6069e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe45dda3fc81d8500d56664acbc6069e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe45dda3fc81d8500d56664acbc6069e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_break_on_hyphens );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_True;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_wordsep_re );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_text );
            tmp_args_element_name_1 = par_text;
            frame_fe45dda3fc81d8500d56664acbc6069e->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_chunks == NULL );
            var_chunks = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_wordsep_simple_re );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_text );
            tmp_args_element_name_2 = par_text;
            frame_fe45dda3fc81d8500d56664acbc6069e->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_split, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_chunks == NULL );
            var_chunks = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( var_chunks );
            tmp_iter_arg_1 = var_chunks;
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_aaebda25f8fc3c85a92a8c43551cf490_2, codeobj_aaebda25f8fc3c85a92a8c43551cf490, module_textwrap, sizeof(void *) );
        frame_aaebda25f8fc3c85a92a8c43551cf490_2 = cache_frame_aaebda25f8fc3c85a92a8c43551cf490_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_aaebda25f8fc3c85a92a8c43551cf490_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_aaebda25f8fc3c85a92a8c43551cf490_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 179;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_7;
                Py_INCREF( outline_0_var_c );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( outline_0_var_c );
            tmp_truth_name_1 = CHECK_IF_TRUE( outline_0_var_c );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_2 = "o";
                goto try_except_handler_3;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_c );
                tmp_append_value_1 = outline_0_var_c;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            branch_no_2:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_3 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( textwrap$$$function_3__split );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
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
        RESTORE_FRAME_EXCEPTION( frame_aaebda25f8fc3c85a92a8c43551cf490_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_aaebda25f8fc3c85a92a8c43551cf490_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_aaebda25f8fc3c85a92a8c43551cf490_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_aaebda25f8fc3c85a92a8c43551cf490_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_aaebda25f8fc3c85a92a8c43551cf490_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_aaebda25f8fc3c85a92a8c43551cf490_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_aaebda25f8fc3c85a92a8c43551cf490_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame.
        if ( frame_aaebda25f8fc3c85a92a8c43551cf490_2 == cache_frame_aaebda25f8fc3c85a92a8c43551cf490_2 )
        {
            Py_DECREF( frame_aaebda25f8fc3c85a92a8c43551cf490_2 );
        }
        cache_frame_aaebda25f8fc3c85a92a8c43551cf490_2 = NULL;

        assertFrameObject( frame_aaebda25f8fc3c85a92a8c43551cf490_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( textwrap$$$function_3__split );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_c );
        outline_0_var_c = NULL;

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

        Py_XDECREF( outline_0_var_c );
        outline_0_var_c = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( textwrap$$$function_3__split );
        return NULL;
        outline_exception_1:;
        exception_lineno = 179;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_chunks;
            assert( old != NULL );
            var_chunks = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe45dda3fc81d8500d56664acbc6069e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe45dda3fc81d8500d56664acbc6069e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe45dda3fc81d8500d56664acbc6069e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe45dda3fc81d8500d56664acbc6069e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe45dda3fc81d8500d56664acbc6069e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe45dda3fc81d8500d56664acbc6069e,
        type_description_1,
        par_self,
        par_text,
        var_chunks
    );


    // Release cached frame.
    if ( frame_fe45dda3fc81d8500d56664acbc6069e == cache_frame_fe45dda3fc81d8500d56664acbc6069e )
    {
        Py_DECREF( frame_fe45dda3fc81d8500d56664acbc6069e );
    }
    cache_frame_fe45dda3fc81d8500d56664acbc6069e = NULL;

    assertFrameObject( frame_fe45dda3fc81d8500d56664acbc6069e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( var_chunks );
    tmp_return_value = var_chunks;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_3__split );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)var_chunks );
    Py_DECREF( var_chunks );
    var_chunks = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_3__split );
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


static PyObject *impl_textwrap$$$function_4__fix_sentence_endings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_chunks = python_pars[ 1 ];
    PyObject *var_i = NULL;
    PyObject *var_patsearch = NULL;
    struct Nuitka_FrameObject *frame_6fac20b6a2aef31054318f39c8172088;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6fac20b6a2aef31054318f39c8172088 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_i == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_i = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fac20b6a2aef31054318f39c8172088, codeobj_6fac20b6a2aef31054318f39c8172088, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6fac20b6a2aef31054318f39c8172088 = cache_frame_6fac20b6a2aef31054318f39c8172088;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fac20b6a2aef31054318f39c8172088 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fac20b6a2aef31054318f39c8172088 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sentence_end_re );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_patsearch == NULL );
        var_patsearch = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_1 = var_i;
        CHECK_OBJECT( par_chunks );
        tmp_len_arg_1 = par_chunks;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_compexpr_right_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_chunks );
        tmp_subscribed_name_1 = par_chunks;
        CHECK_OBJECT( var_i );
        tmp_left_name_2 = var_i;
        tmp_right_name_2 = const_int_pos_1;
        tmp_subscript_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_space;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( var_patsearch );
        tmp_called_name_1 = var_patsearch;
        CHECK_OBJECT( par_chunks );
        tmp_subscribed_name_2 = par_chunks;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_2 = var_i;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6fac20b6a2aef31054318f39c8172088->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_ass_subvalue_1 = const_str_digest_b8872718382dd39ffa4013e303d20ce5;
            CHECK_OBJECT( par_chunks );
            tmp_ass_subscribed_1 = par_chunks;
            CHECK_OBJECT( var_i );
            tmp_left_name_3 = var_i;
            tmp_right_name_3 = const_int_pos_1;
            tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_i );
            tmp_left_name_4 = var_i;
            tmp_right_name_4 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_4;
            var_i = tmp_assign_source_3;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_i );
            tmp_left_name_5 = var_i;
            tmp_right_name_5 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_5;
            var_i = tmp_assign_source_4;

        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fac20b6a2aef31054318f39c8172088 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fac20b6a2aef31054318f39c8172088 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fac20b6a2aef31054318f39c8172088, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fac20b6a2aef31054318f39c8172088->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fac20b6a2aef31054318f39c8172088, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fac20b6a2aef31054318f39c8172088,
        type_description_1,
        par_self,
        par_chunks,
        var_i,
        var_patsearch
    );


    // Release cached frame.
    if ( frame_6fac20b6a2aef31054318f39c8172088 == cache_frame_6fac20b6a2aef31054318f39c8172088 )
    {
        Py_DECREF( frame_6fac20b6a2aef31054318f39c8172088 );
    }
    cache_frame_6fac20b6a2aef31054318f39c8172088 = NULL;

    assertFrameObject( frame_6fac20b6a2aef31054318f39c8172088 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_4__fix_sentence_endings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_chunks );
    Py_DECREF( par_chunks );
    par_chunks = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_patsearch );
    Py_DECREF( var_patsearch );
    var_patsearch = NULL;

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

    CHECK_OBJECT( (PyObject *)par_chunks );
    Py_DECREF( par_chunks );
    par_chunks = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_patsearch );
    var_patsearch = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_4__fix_sentence_endings );
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


static PyObject *impl_textwrap$$$function_5__handle_long_word( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_reversed_chunks = python_pars[ 1 ];
    PyObject *par_cur_line = python_pars[ 2 ];
    PyObject *par_cur_len = python_pars[ 3 ];
    PyObject *par_width = python_pars[ 4 ];
    PyObject *var_space_left = NULL;
    struct Nuitka_FrameObject *frame_6d7f4a51e09134a67ea6d726ec2fa346;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6d7f4a51e09134a67ea6d726ec2fa346 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6d7f4a51e09134a67ea6d726ec2fa346, codeobj_6d7f4a51e09134a67ea6d726ec2fa346, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6d7f4a51e09134a67ea6d726ec2fa346 = cache_frame_6d7f4a51e09134a67ea6d726ec2fa346;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6d7f4a51e09134a67ea6d726ec2fa346 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6d7f4a51e09134a67ea6d726ec2fa346 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_width );
        tmp_compexpr_left_1 = par_width;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooo";
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
            tmp_assign_source_1 = const_int_pos_1;
            assert( var_space_left == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_space_left = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_width );
            tmp_left_name_1 = par_width;
            CHECK_OBJECT( par_cur_len );
            tmp_right_name_1 = par_cur_len;
            tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_space_left == NULL );
            var_space_left = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_break_long_words );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_cur_line );
            tmp_source_name_2 = par_cur_line;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_reversed_chunks );
            tmp_subscribed_name_2 = par_reversed_chunks;
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_1, -1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 218;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( var_space_left );
            tmp_stop_name_1 = var_space_left;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 218;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_6d7f4a51e09134a67ea6d726ec2fa346->m_frame.f_lineno = 218;
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


                exception_lineno = 218;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( par_reversed_chunks );
            tmp_subscribed_name_4 = par_reversed_chunks;
            tmp_subscript_name_3 = const_int_neg_1;
            tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_3, -1 );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_space_left );
            tmp_start_name_2 = var_space_left;
            tmp_stop_name_2 = Py_None;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_3 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_reversed_chunks );
            tmp_ass_subscribed_1 = par_reversed_chunks;
            tmp_ass_subscript_1 = const_int_neg_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_cur_line );
            tmp_operand_name_1 = par_cur_line;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_1 = "oooooo";
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
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_cur_line );
                tmp_source_name_3 = par_cur_line;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 225;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_reversed_chunks );
                tmp_called_instance_1 = par_reversed_chunks;
                frame_6d7f4a51e09134a67ea6d726ec2fa346->m_frame.f_lineno = 225;
                tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_pop );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 225;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_6d7f4a51e09134a67ea6d726ec2fa346->m_frame.f_lineno = 225;
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


                    exception_lineno = 225;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_3:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d7f4a51e09134a67ea6d726ec2fa346 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d7f4a51e09134a67ea6d726ec2fa346 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d7f4a51e09134a67ea6d726ec2fa346, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d7f4a51e09134a67ea6d726ec2fa346->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d7f4a51e09134a67ea6d726ec2fa346, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d7f4a51e09134a67ea6d726ec2fa346,
        type_description_1,
        par_self,
        par_reversed_chunks,
        par_cur_line,
        par_cur_len,
        par_width,
        var_space_left
    );


    // Release cached frame.
    if ( frame_6d7f4a51e09134a67ea6d726ec2fa346 == cache_frame_6d7f4a51e09134a67ea6d726ec2fa346 )
    {
        Py_DECREF( frame_6d7f4a51e09134a67ea6d726ec2fa346 );
    }
    cache_frame_6d7f4a51e09134a67ea6d726ec2fa346 = NULL;

    assertFrameObject( frame_6d7f4a51e09134a67ea6d726ec2fa346 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_5__handle_long_word );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_reversed_chunks );
    Py_DECREF( par_reversed_chunks );
    par_reversed_chunks = NULL;

    CHECK_OBJECT( (PyObject *)par_cur_line );
    Py_DECREF( par_cur_line );
    par_cur_line = NULL;

    CHECK_OBJECT( (PyObject *)par_cur_len );
    Py_DECREF( par_cur_len );
    par_cur_len = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)var_space_left );
    Py_DECREF( var_space_left );
    var_space_left = NULL;

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

    CHECK_OBJECT( (PyObject *)par_reversed_chunks );
    Py_DECREF( par_reversed_chunks );
    par_reversed_chunks = NULL;

    CHECK_OBJECT( (PyObject *)par_cur_line );
    Py_DECREF( par_cur_line );
    par_cur_line = NULL;

    CHECK_OBJECT( (PyObject *)par_cur_len );
    Py_DECREF( par_cur_len );
    par_cur_len = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    Py_XDECREF( var_space_left );
    var_space_left = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_5__handle_long_word );
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


static PyObject *impl_textwrap$$$function_6__wrap_chunks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_chunks = python_pars[ 1 ];
    PyObject *var_lines = NULL;
    PyObject *var_indent = NULL;
    PyObject *var_cur_line = NULL;
    PyObject *var_cur_len = NULL;
    PyObject *var_width = NULL;
    PyObject *var_l = NULL;
    PyObject *var_prev_line = NULL;
    nuitka_bool tmp_while_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_c54658b78c77c96eb16cd5676e29179a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c54658b78c77c96eb16cd5676e29179a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_lines == NULL );
        var_lines = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c54658b78c77c96eb16cd5676e29179a, codeobj_c54658b78c77c96eb16cd5676e29179a, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c54658b78c77c96eb16cd5676e29179a = cache_frame_c54658b78c77c96eb16cd5676e29179a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c54658b78c77c96eb16cd5676e29179a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c54658b78c77c96eb16cd5676e29179a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_width );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_2;
            tmp_left_name_1 = const_str_digest_8067e65f76fd0671503bd36ebd32a033;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_width );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 248;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max_lines );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max_lines );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_source_name_5;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_subsequent_indent );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 251;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_indent == NULL );
                var_indent = tmp_assign_source_2;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_source_name_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_initial_indent );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 253;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_indent == NULL );
                var_indent = tmp_assign_source_3;
            }
            branch_end_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_indent );
            tmp_len_arg_1 = var_indent;
            tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_placeholder );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 254;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 254;
            tmp_len_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lstrip );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_len_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 254;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
            Py_DECREF( tmp_len_arg_2 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 254;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_4 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            assert( !(tmp_compexpr_left_4 == NULL) );
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_width );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 254;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_7c2df51351279be6adaa0cd1d87f01da;
                frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 255;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 255;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_chunks );
        tmp_called_instance_2 = par_chunks;
        frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 259;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reverse );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_chunks );
        tmp_operand_name_1 = par_chunks;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        goto loop_end_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New( 0 );
        {
            PyObject *old = var_cur_line;
            var_cur_line = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        {
            PyObject *old = var_cur_len;
            var_cur_len = tmp_assign_source_5;
            Py_INCREF( var_cur_len );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_lines );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_lines );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_subsequent_indent );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_indent;
                var_indent = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_initial_indent );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_indent;
                var_indent = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_right_name_3;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_width );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_indent );
        tmp_len_arg_3 = var_indent;
        tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 275;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            var_width = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_drop_whitespace );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 279;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_chunks );
        tmp_subscribed_name_1 = par_chunks;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 279;
        tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_str_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
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
        CHECK_OBJECT( var_lines );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_lines );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT( par_chunks );
            tmp_delsubscr_target_1 = par_chunks;
            tmp_delsubscr_subscript_1 = const_int_neg_1;
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 280;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_7:;
    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( par_chunks );
        tmp_operand_name_2 = par_chunks;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        goto loop_end_2;
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_chunks );
        tmp_subscribed_name_2 = par_chunks;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_len_arg_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_len_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_4 );
        Py_DECREF( tmp_len_arg_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_l;
            var_l = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if ( var_cur_len == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 286;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_cur_len;
        CHECK_OBJECT( var_l );
        tmp_right_name_4 = var_l;
        tmp_compexpr_left_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_width );
        tmp_compexpr_right_6 = var_width;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_cur_line );
            tmp_source_name_13 = var_cur_line;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_chunks );
            tmp_called_instance_4 = par_chunks;
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 287;
            tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_pop );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 287;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 287;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            if ( var_cur_len == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 288;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_5 = var_cur_len;
            CHECK_OBJECT( var_l );
            tmp_right_name_5 = var_l;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = tmp_left_name_5;
            var_cur_len = tmp_assign_source_10;

        }
        goto branch_end_9;
        branch_no_9:;
        goto loop_end_2;
        branch_end_9:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_chunks );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_chunks );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT( par_chunks );
        tmp_subscribed_name_3 = par_chunks;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_len_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_len_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_7 = BUILTIN_LEN( tmp_len_arg_5 );
        Py_DECREF( tmp_len_arg_5 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_width );
        tmp_compexpr_right_7 = var_width;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_10 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_14;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__handle_long_word );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_chunks );
            tmp_args_element_name_2 = par_chunks;
            CHECK_OBJECT( var_cur_line );
            tmp_args_element_name_3 = var_cur_line;
            if ( var_cur_len == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 297;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = var_cur_len;
            CHECK_OBJECT( var_width );
            tmp_args_element_name_5 = var_width;
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 297;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_sum_sequence_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_called_name_3 = (PyObject *)&PyMap_Type;
            tmp_args_element_name_6 = LOOKUP_BUILTIN( const_str_plain_len );
            assert( tmp_args_element_name_6 != NULL );
            CHECK_OBJECT( var_cur_line );
            tmp_args_element_name_7 = var_cur_line;
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_sum_sequence_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_sum_sequence_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = BUILTIN_SUM1( tmp_sum_sequence_1 );
            Py_DECREF( tmp_sum_sequence_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cur_len;
                var_cur_len = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_source_name_15;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_5;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        int tmp_truth_name_6;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_drop_whitespace );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 301;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_4 == 1 )
        {
            goto and_right_4;
        }
        else
        {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT( var_cur_line );
        tmp_truth_name_6 = CHECK_IF_TRUE( var_cur_line );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_5 == 1 )
        {
            goto and_right_5;
        }
        else
        {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT( var_cur_line );
        tmp_subscribed_name_4 = var_cur_line;
        tmp_subscript_name_4 = const_int_neg_1;
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -1 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 301;
        tmp_compexpr_left_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_str_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_4 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_and_right_value_4 = tmp_and_left_value_5;
        and_end_5:;
        tmp_condition_result_11 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_11 = tmp_and_left_value_4;
        and_end_4:;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_len_arg_6;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            if ( var_cur_len == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 302;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_6 = var_cur_len;
            CHECK_OBJECT( var_cur_line );
            tmp_subscribed_name_5 = var_cur_line;
            tmp_subscript_name_5 = const_int_neg_1;
            tmp_len_arg_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
            if ( tmp_len_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 302;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = BUILTIN_LEN( tmp_len_arg_6 );
            Py_DECREF( tmp_len_arg_6 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 302;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 302;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = tmp_left_name_6;
            var_cur_len = tmp_assign_source_12;

        }
        {
            PyObject *tmp_delsubscr_target_2;
            PyObject *tmp_delsubscr_subscript_2;
            CHECK_OBJECT( var_cur_line );
            tmp_delsubscr_target_2 = var_cur_line;
            tmp_delsubscr_subscript_2 = const_int_neg_1;
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_7;
        CHECK_OBJECT( var_cur_line );
        tmp_truth_name_7 = CHECK_IF_TRUE( var_cur_line );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            nuitka_bool tmp_condition_result_13;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_source_name_16;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_left_name_7;
            PyObject *tmp_len_arg_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_17;
            int tmp_and_left_truth_6;
            nuitka_bool tmp_and_left_value_6;
            nuitka_bool tmp_and_right_value_6;
            int tmp_or_left_truth_3;
            nuitka_bool tmp_or_left_value_3;
            nuitka_bool tmp_or_right_value_3;
            PyObject *tmp_operand_name_3;
            int tmp_and_left_truth_7;
            nuitka_bool tmp_and_left_value_7;
            nuitka_bool tmp_and_right_value_7;
            PyObject *tmp_source_name_18;
            PyObject *tmp_attribute_value_3;
            int tmp_truth_name_8;
            int tmp_and_left_truth_8;
            nuitka_bool tmp_and_left_value_8;
            nuitka_bool tmp_and_right_value_8;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_len_arg_8;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_max_lines );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_9 = Py_None;
            tmp_or_left_value_1 = ( tmp_compexpr_left_9 == tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_9 );
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
            CHECK_OBJECT( var_lines );
            tmp_len_arg_7 = var_lines;
            tmp_left_name_7 = BUILTIN_LEN( tmp_len_arg_7 );
            assert( !(tmp_left_name_7 == NULL) );
            tmp_right_name_7 = const_int_pos_1;
            tmp_compexpr_left_10 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            assert( !(tmp_compexpr_left_10 == NULL) );
            CHECK_OBJECT( par_self );
            tmp_source_name_17 = par_self;
            tmp_compexpr_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_max_lines );
            if ( tmp_compexpr_right_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_10 );

                exception_lineno = 307;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            Py_DECREF( tmp_compexpr_left_10 );
            Py_DECREF( tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_or_left_truth_2 == 1 )
            {
                goto or_left_2;
            }
            else
            {
                goto or_right_2;
            }
            or_right_2:;
            CHECK_OBJECT( par_chunks );
            tmp_operand_name_3 = par_chunks;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_or_left_truth_3 == 1 )
            {
                goto or_left_3;
            }
            else
            {
                goto or_right_3;
            }
            or_right_3:;
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_drop_whitespace );
            if ( tmp_attribute_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_8 = CHECK_IF_TRUE( tmp_attribute_value_3 );
            if ( tmp_truth_name_8 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_3 );

                exception_lineno = 309;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_7 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_3 );
            tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_7 == 1 )
            {
                goto and_right_7;
            }
            else
            {
                goto and_left_7;
            }
            and_right_7:;
            CHECK_OBJECT( par_chunks );
            tmp_len_arg_8 = par_chunks;
            tmp_compexpr_left_11 = BUILTIN_LEN( tmp_len_arg_8 );
            if ( tmp_compexpr_left_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_11 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            Py_DECREF( tmp_compexpr_left_11 );
            assert( !(tmp_res == -1) );
            tmp_and_left_value_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_8 == 1 )
            {
                goto and_right_8;
            }
            else
            {
                goto and_left_8;
            }
            and_right_8:;
            CHECK_OBJECT( par_chunks );
            tmp_subscribed_name_6 = par_chunks;
            tmp_subscript_name_6 = const_int_0;
            tmp_called_instance_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 311;
            tmp_operand_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_strip );
            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_right_value_7 = tmp_and_right_value_8;
            goto and_end_8;
            and_left_8:;
            tmp_and_right_value_7 = tmp_and_left_value_8;
            and_end_8:;
            tmp_or_right_value_3 = tmp_and_right_value_7;
            goto and_end_7;
            and_left_7:;
            tmp_or_right_value_3 = tmp_and_left_value_7;
            and_end_7:;
            tmp_and_left_value_6 = tmp_or_right_value_3;
            goto or_end_3;
            or_left_3:;
            tmp_and_left_value_6 = tmp_or_left_value_3;
            or_end_3:;
            tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_6 == 1 )
            {
                goto and_right_6;
            }
            else
            {
                goto and_left_6;
            }
            and_right_6:;
            if ( var_cur_len == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 311;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_12 = var_cur_len;
            CHECK_OBJECT( var_width );
            tmp_compexpr_right_12 = var_width;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_right_value_2 = tmp_and_right_value_6;
            goto and_end_6;
            and_left_6:;
            tmp_or_right_value_2 = tmp_and_left_value_6;
            and_end_6:;
            tmp_or_right_value_1 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_or_right_value_1 = tmp_or_left_value_2;
            or_end_2:;
            tmp_condition_result_13 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_13 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_19;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT( var_lines );
                tmp_source_name_19 = var_lines;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_indent );
                tmp_left_name_8 = var_indent;
                tmp_called_instance_7 = const_str_empty;
                CHECK_OBJECT( var_cur_line );
                tmp_args_element_name_9 = var_cur_line;
                frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 314;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_right_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_join, call_args );
                }

                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 314;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 314;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 314;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            goto branch_end_13;
            branch_no_13:;
            {
                nuitka_bool tmp_assign_source_13;
                tmp_assign_source_13 = NUITKA_BOOL_FALSE;
                tmp_while_loop_1__break_indicator = tmp_assign_source_13;
            }
            // Tried code:
            loop_start_3:;
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_operand_name_5;
                CHECK_OBJECT( var_cur_line );
                tmp_operand_name_5 = var_cur_line;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 316;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_14 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    nuitka_bool tmp_assign_source_14;
                    tmp_assign_source_14 = NUITKA_BOOL_TRUE;
                    tmp_while_loop_1__break_indicator = tmp_assign_source_14;
                }
                goto loop_end_3;
                branch_no_14:;
            }
            {
                nuitka_bool tmp_condition_result_15;
                int tmp_and_left_truth_9;
                nuitka_bool tmp_and_left_value_9;
                nuitka_bool tmp_and_right_value_9;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_call_result_5;
                int tmp_truth_name_9;
                PyObject *tmp_compexpr_left_13;
                PyObject *tmp_compexpr_right_13;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_len_arg_9;
                PyObject *tmp_source_name_20;
                CHECK_OBJECT( var_cur_line );
                tmp_subscribed_name_7 = var_cur_line;
                tmp_subscript_name_7 = const_int_neg_1;
                tmp_called_instance_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, -1 );
                if ( tmp_called_instance_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 317;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 317;
                tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_strip );
                Py_DECREF( tmp_called_instance_8 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 317;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_9 = CHECK_IF_TRUE( tmp_call_result_5 );
                if ( tmp_truth_name_9 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_5 );

                    exception_lineno = 317;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_and_left_value_9 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_5 );
                tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_and_left_truth_9 == 1 )
                {
                    goto and_right_9;
                }
                else
                {
                    goto and_left_9;
                }
                and_right_9:;
                if ( var_cur_len == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 318;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }

                tmp_left_name_9 = var_cur_len;
                CHECK_OBJECT( par_self );
                tmp_source_name_20 = par_self;
                tmp_len_arg_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_placeholder );
                if ( tmp_len_arg_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_9 = BUILTIN_LEN( tmp_len_arg_9 );
                Py_DECREF( tmp_len_arg_9 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_compexpr_left_13 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_compexpr_left_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_width );
                tmp_compexpr_right_13 = var_width;
                tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                Py_DECREF( tmp_compexpr_left_13 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_and_right_value_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_15 = tmp_and_right_value_9;
                goto and_end_9;
                and_left_9:;
                tmp_condition_result_15 = tmp_and_left_value_9;
                and_end_9:;
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
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_source_name_22;
                    CHECK_OBJECT( var_cur_line );
                    tmp_source_name_21 = var_cur_line;
                    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
                    if ( tmp_called_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 319;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_22 = par_self;
                    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_placeholder );
                    if ( tmp_args_element_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_5 );

                        exception_lineno = 319;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 319;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                    }

                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_10 );
                    if ( tmp_call_result_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 319;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_6 );
                }
                {
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_call_result_7;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_called_instance_9;
                    PyObject *tmp_args_element_name_12;
                    CHECK_OBJECT( var_lines );
                    tmp_source_name_23 = var_lines;
                    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_append );
                    if ( tmp_called_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 320;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_indent );
                    tmp_left_name_10 = var_indent;
                    tmp_called_instance_9 = const_str_empty;
                    CHECK_OBJECT( var_cur_line );
                    tmp_args_element_name_12 = var_cur_line;
                    frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 320;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12 };
                        tmp_right_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_join, call_args );
                    }

                    if ( tmp_right_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );

                        exception_lineno = 320;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                    Py_DECREF( tmp_right_name_10 );
                    if ( tmp_args_element_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_6 );

                        exception_lineno = 320;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 320;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                    }

                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_element_name_11 );
                    if ( tmp_call_result_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 320;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_7 );
                }
                goto loop_end_3;
                branch_no_15:;
            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_len_arg_10;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscript_name_8;
                if ( var_cur_len == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cur_len" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 322;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }

                tmp_left_name_11 = var_cur_len;
                CHECK_OBJECT( var_cur_line );
                tmp_subscribed_name_8 = var_cur_line;
                tmp_subscript_name_8 = const_int_neg_1;
                tmp_len_arg_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, -1 );
                if ( tmp_len_arg_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_11 = BUILTIN_LEN( tmp_len_arg_10 );
                Py_DECREF( tmp_len_arg_10 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_15 = tmp_left_name_11;
                var_cur_len = tmp_assign_source_15;

            }
            {
                PyObject *tmp_delsubscr_target_3;
                PyObject *tmp_delsubscr_subscript_3;
                CHECK_OBJECT( var_cur_line );
                tmp_delsubscr_target_3 = var_cur_line;
                tmp_delsubscr_subscript_3 = const_int_neg_1;
                tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_3, tmp_delsubscr_subscript_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            goto loop_start_3;
            loop_end_3:;
            {
                nuitka_bool tmp_condition_result_16;
                nuitka_bool tmp_compexpr_left_14;
                nuitka_bool tmp_compexpr_right_14;
                assert( tmp_while_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
                tmp_compexpr_left_14 = tmp_while_loop_1__break_indicator;
                tmp_compexpr_right_14 = NUITKA_BOOL_TRUE;
                tmp_condition_result_16 = ( tmp_compexpr_left_14 == tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    nuitka_bool tmp_condition_result_17;
                    int tmp_truth_name_10;
                    CHECK_OBJECT( var_lines );
                    tmp_truth_name_10 = CHECK_IF_TRUE( var_lines );
                    if ( tmp_truth_name_10 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 325;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_17 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_16;
                        PyObject *tmp_called_instance_10;
                        PyObject *tmp_subscribed_name_9;
                        PyObject *tmp_subscript_name_9;
                        CHECK_OBJECT( var_lines );
                        tmp_subscribed_name_9 = var_lines;
                        tmp_subscript_name_9 = const_int_neg_1;
                        tmp_called_instance_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, -1 );
                        if ( tmp_called_instance_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 326;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 326;
                        tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_rstrip );
                        Py_DECREF( tmp_called_instance_10 );
                        if ( tmp_assign_source_16 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 326;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = var_prev_line;
                            var_prev_line = tmp_assign_source_16;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_18;
                        PyObject *tmp_compexpr_left_15;
                        PyObject *tmp_compexpr_right_15;
                        PyObject *tmp_left_name_12;
                        PyObject *tmp_len_arg_11;
                        PyObject *tmp_right_name_12;
                        PyObject *tmp_len_arg_12;
                        PyObject *tmp_source_name_24;
                        PyObject *tmp_source_name_25;
                        CHECK_OBJECT( var_prev_line );
                        tmp_len_arg_11 = var_prev_line;
                        tmp_left_name_12 = BUILTIN_LEN( tmp_len_arg_11 );
                        if ( tmp_left_name_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 327;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_24 = par_self;
                        tmp_len_arg_12 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_placeholder );
                        if ( tmp_len_arg_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_left_name_12 );

                            exception_lineno = 327;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_right_name_12 = BUILTIN_LEN( tmp_len_arg_12 );
                        Py_DECREF( tmp_len_arg_12 );
                        if ( tmp_right_name_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_left_name_12 );

                            exception_lineno = 327;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_compexpr_left_15 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_12, tmp_right_name_12 );
                        Py_DECREF( tmp_left_name_12 );
                        Py_DECREF( tmp_right_name_12 );
                        assert( !(tmp_compexpr_left_15 == NULL) );
                        CHECK_OBJECT( par_self );
                        tmp_source_name_25 = par_self;
                        tmp_compexpr_right_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_width );
                        if ( tmp_compexpr_right_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_compexpr_left_15 );

                            exception_lineno = 328;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                        Py_DECREF( tmp_compexpr_left_15 );
                        Py_DECREF( tmp_compexpr_right_15 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 327;
                            type_description_1 = "ooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            PyObject *tmp_ass_subvalue_1;
                            PyObject *tmp_left_name_13;
                            PyObject *tmp_right_name_13;
                            PyObject *tmp_source_name_26;
                            PyObject *tmp_ass_subscribed_1;
                            PyObject *tmp_ass_subscript_1;
                            int tmp_ass_subscript_res_1;
                            CHECK_OBJECT( var_prev_line );
                            tmp_left_name_13 = var_prev_line;
                            CHECK_OBJECT( par_self );
                            tmp_source_name_26 = par_self;
                            tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_placeholder );
                            if ( tmp_right_name_13 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 329;
                                type_description_1 = "ooooooooo";
                                goto try_except_handler_2;
                            }
                            tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
                            Py_DECREF( tmp_right_name_13 );
                            if ( tmp_ass_subvalue_1 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 329;
                                type_description_1 = "ooooooooo";
                                goto try_except_handler_2;
                            }
                            CHECK_OBJECT( var_lines );
                            tmp_ass_subscribed_1 = var_lines;
                            tmp_ass_subscript_1 = const_int_neg_1;
                            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
                            Py_DECREF( tmp_ass_subvalue_1 );
                            if ( tmp_ass_subscript_res_1 == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 329;
                                type_description_1 = "ooooooooo";
                                goto try_except_handler_2;
                            }
                        }
                        goto try_break_handler_2;
                        branch_no_18:;
                    }
                    branch_no_17:;
                }
                {
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_source_name_27;
                    PyObject *tmp_call_result_8;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_left_name_14;
                    PyObject *tmp_right_name_14;
                    PyObject *tmp_called_instance_11;
                    PyObject *tmp_source_name_28;
                    CHECK_OBJECT( var_lines );
                    tmp_source_name_27 = var_lines;
                    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_append );
                    if ( tmp_called_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 331;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_indent );
                    tmp_left_name_14 = var_indent;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_28 = par_self;
                    tmp_called_instance_11 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_placeholder );
                    if ( tmp_called_instance_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );

                        exception_lineno = 331;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 331;
                    tmp_right_name_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_lstrip );
                    Py_DECREF( tmp_called_instance_11 );
                    if ( tmp_right_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );

                        exception_lineno = 331;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                    Py_DECREF( tmp_right_name_14 );
                    if ( tmp_args_element_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_7 );

                        exception_lineno = 331;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_c54658b78c77c96eb16cd5676e29179a->m_frame.f_lineno = 331;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_13 };
                        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                    }

                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_element_name_13 );
                    if ( tmp_call_result_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 331;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_8 );
                }
                branch_no_16:;
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

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // try break handler code:
            try_break_handler_2:;
            goto loop_end_1;
            // End of try:
            try_end_1:;
            goto loop_end_1;
            branch_end_13:;
        }
        branch_no_12:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c54658b78c77c96eb16cd5676e29179a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c54658b78c77c96eb16cd5676e29179a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c54658b78c77c96eb16cd5676e29179a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c54658b78c77c96eb16cd5676e29179a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c54658b78c77c96eb16cd5676e29179a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c54658b78c77c96eb16cd5676e29179a,
        type_description_1,
        par_self,
        par_chunks,
        var_lines,
        var_indent,
        var_cur_line,
        var_cur_len,
        var_width,
        var_l,
        var_prev_line
    );


    // Release cached frame.
    if ( frame_c54658b78c77c96eb16cd5676e29179a == cache_frame_c54658b78c77c96eb16cd5676e29179a )
    {
        Py_DECREF( frame_c54658b78c77c96eb16cd5676e29179a );
    }
    cache_frame_c54658b78c77c96eb16cd5676e29179a = NULL;

    assertFrameObject( frame_c54658b78c77c96eb16cd5676e29179a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_lines );
    tmp_return_value = var_lines;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_6__wrap_chunks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_chunks );
    Py_DECREF( par_chunks );
    par_chunks = NULL;

    CHECK_OBJECT( (PyObject *)var_lines );
    Py_DECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_indent );
    var_indent = NULL;

    Py_XDECREF( var_cur_line );
    var_cur_line = NULL;

    Py_XDECREF( var_cur_len );
    var_cur_len = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_prev_line );
    var_prev_line = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_chunks );
    Py_DECREF( par_chunks );
    par_chunks = NULL;

    CHECK_OBJECT( (PyObject *)var_lines );
    Py_DECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_indent );
    var_indent = NULL;

    Py_XDECREF( var_cur_line );
    var_cur_line = NULL;

    Py_XDECREF( var_cur_len );
    var_cur_len = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_prev_line );
    var_prev_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_6__wrap_chunks );
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


static PyObject *impl_textwrap$$$function_7__split_chunks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b795521d15d73de5b20725c89b50dcfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b795521d15d73de5b20725c89b50dcfe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b795521d15d73de5b20725c89b50dcfe, codeobj_b795521d15d73de5b20725c89b50dcfe, module_textwrap, sizeof(void *)+sizeof(void *) );
    frame_b795521d15d73de5b20725c89b50dcfe = cache_frame_b795521d15d73de5b20725c89b50dcfe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b795521d15d73de5b20725c89b50dcfe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b795521d15d73de5b20725c89b50dcfe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_1 = par_text;
        frame_b795521d15d73de5b20725c89b50dcfe->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__munge_whitespace, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_2 = par_text;
        frame_b795521d15d73de5b20725c89b50dcfe->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__split, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b795521d15d73de5b20725c89b50dcfe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b795521d15d73de5b20725c89b50dcfe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b795521d15d73de5b20725c89b50dcfe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b795521d15d73de5b20725c89b50dcfe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b795521d15d73de5b20725c89b50dcfe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b795521d15d73de5b20725c89b50dcfe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b795521d15d73de5b20725c89b50dcfe,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame.
    if ( frame_b795521d15d73de5b20725c89b50dcfe == cache_frame_b795521d15d73de5b20725c89b50dcfe )
    {
        Py_DECREF( frame_b795521d15d73de5b20725c89b50dcfe );
    }
    cache_frame_b795521d15d73de5b20725c89b50dcfe = NULL;

    assertFrameObject( frame_b795521d15d73de5b20725c89b50dcfe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_7__split_chunks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_7__split_chunks );
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


static PyObject *impl_textwrap$$$function_8_wrap( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *var_chunks = NULL;
    struct Nuitka_FrameObject *frame_62a2dc8c53ee266b2dbae5205b25cba0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_62a2dc8c53ee266b2dbae5205b25cba0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62a2dc8c53ee266b2dbae5205b25cba0, codeobj_62a2dc8c53ee266b2dbae5205b25cba0, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62a2dc8c53ee266b2dbae5205b25cba0 = cache_frame_62a2dc8c53ee266b2dbae5205b25cba0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62a2dc8c53ee266b2dbae5205b25cba0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62a2dc8c53ee266b2dbae5205b25cba0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_1 = par_text;
        frame_62a2dc8c53ee266b2dbae5205b25cba0->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__split_chunks, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_chunks == NULL );
        var_chunks = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fix_sentence_endings );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 352;
            type_description_1 = "ooo";
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
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            CHECK_OBJECT( var_chunks );
            tmp_args_element_name_2 = var_chunks;
            frame_62a2dc8c53ee266b2dbae5205b25cba0->m_frame.f_lineno = 353;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__fix_sentence_endings, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( var_chunks );
        tmp_args_element_name_3 = var_chunks;
        frame_62a2dc8c53ee266b2dbae5205b25cba0->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__wrap_chunks, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62a2dc8c53ee266b2dbae5205b25cba0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62a2dc8c53ee266b2dbae5205b25cba0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62a2dc8c53ee266b2dbae5205b25cba0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62a2dc8c53ee266b2dbae5205b25cba0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62a2dc8c53ee266b2dbae5205b25cba0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62a2dc8c53ee266b2dbae5205b25cba0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62a2dc8c53ee266b2dbae5205b25cba0,
        type_description_1,
        par_self,
        par_text,
        var_chunks
    );


    // Release cached frame.
    if ( frame_62a2dc8c53ee266b2dbae5205b25cba0 == cache_frame_62a2dc8c53ee266b2dbae5205b25cba0 )
    {
        Py_DECREF( frame_62a2dc8c53ee266b2dbae5205b25cba0 );
    }
    cache_frame_62a2dc8c53ee266b2dbae5205b25cba0 = NULL;

    assertFrameObject( frame_62a2dc8c53ee266b2dbae5205b25cba0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_8_wrap );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)var_chunks );
    Py_DECREF( var_chunks );
    var_chunks = NULL;

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

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_8_wrap );
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


static PyObject *impl_textwrap$$$function_9_fill( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5add9bba28bbbdb6a65c7d6b4327339c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5add9bba28bbbdb6a65c7d6b4327339c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5add9bba28bbbdb6a65c7d6b4327339c, codeobj_5add9bba28bbbdb6a65c7d6b4327339c, module_textwrap, sizeof(void *)+sizeof(void *) );
    frame_5add9bba28bbbdb6a65c7d6b4327339c = cache_frame_5add9bba28bbbdb6a65c7d6b4327339c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5add9bba28bbbdb6a65c7d6b4327339c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5add9bba28bbbdb6a65c7d6b4327339c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        tmp_source_name_1 = const_str_newline;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_2 = par_text;
        frame_5add9bba28bbbdb6a65c7d6b4327339c->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_wrap, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5add9bba28bbbdb6a65c7d6b4327339c->m_frame.f_lineno = 363;
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


            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5add9bba28bbbdb6a65c7d6b4327339c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5add9bba28bbbdb6a65c7d6b4327339c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5add9bba28bbbdb6a65c7d6b4327339c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5add9bba28bbbdb6a65c7d6b4327339c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5add9bba28bbbdb6a65c7d6b4327339c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5add9bba28bbbdb6a65c7d6b4327339c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5add9bba28bbbdb6a65c7d6b4327339c,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame.
    if ( frame_5add9bba28bbbdb6a65c7d6b4327339c == cache_frame_5add9bba28bbbdb6a65c7d6b4327339c )
    {
        Py_DECREF( frame_5add9bba28bbbdb6a65c7d6b4327339c );
    }
    cache_frame_5add9bba28bbbdb6a65c7d6b4327339c = NULL;

    assertFrameObject( frame_5add9bba28bbbdb6a65c7d6b4327339c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_9_fill );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_9_fill );
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


static PyObject *impl_textwrap$$$function_10_wrap( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    PyObject *par_width = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_e6851e2cef752a4f5c79e8c526b33689;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e6851e2cef752a4f5c79e8c526b33689 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6851e2cef752a4f5c79e8c526b33689, codeobj_e6851e2cef752a4f5c79e8c526b33689, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e6851e2cef752a4f5c79e8c526b33689 = cache_frame_e6851e2cef752a4f5c79e8c526b33689;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6851e2cef752a4f5c79e8c526b33689 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6851e2cef752a4f5c79e8c526b33689 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_TextWrapper );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextWrapper );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextWrapper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_width;
        CHECK_OBJECT( par_width );
        tmp_dict_value_1 = par_width;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_6_complex_call_helper_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_w );
        tmp_called_instance_1 = var_w;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_1 = par_text;
        frame_e6851e2cef752a4f5c79e8c526b33689->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_wrap, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6851e2cef752a4f5c79e8c526b33689 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6851e2cef752a4f5c79e8c526b33689 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6851e2cef752a4f5c79e8c526b33689 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6851e2cef752a4f5c79e8c526b33689, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6851e2cef752a4f5c79e8c526b33689->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6851e2cef752a4f5c79e8c526b33689, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6851e2cef752a4f5c79e8c526b33689,
        type_description_1,
        par_text,
        par_width,
        par_kwargs,
        var_w
    );


    // Release cached frame.
    if ( frame_e6851e2cef752a4f5c79e8c526b33689 == cache_frame_e6851e2cef752a4f5c79e8c526b33689 )
    {
        Py_DECREF( frame_e6851e2cef752a4f5c79e8c526b33689 );
    }
    cache_frame_e6851e2cef752a4f5c79e8c526b33689 = NULL;

    assertFrameObject( frame_e6851e2cef752a4f5c79e8c526b33689 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_10_wrap );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_10_wrap );
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


static PyObject *impl_textwrap$$$function_11_fill( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    PyObject *par_width = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_863c96fde07b17d6cae106dc9c87da71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_863c96fde07b17d6cae106dc9c87da71 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_863c96fde07b17d6cae106dc9c87da71, codeobj_863c96fde07b17d6cae106dc9c87da71, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_863c96fde07b17d6cae106dc9c87da71 = cache_frame_863c96fde07b17d6cae106dc9c87da71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_863c96fde07b17d6cae106dc9c87da71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_863c96fde07b17d6cae106dc9c87da71 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_TextWrapper );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextWrapper );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextWrapper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_width;
        CHECK_OBJECT( par_width );
        tmp_dict_value_1 = par_width;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_6_complex_call_helper_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_w );
        tmp_called_instance_1 = var_w;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_1 = par_text;
        frame_863c96fde07b17d6cae106dc9c87da71->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fill, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_863c96fde07b17d6cae106dc9c87da71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_863c96fde07b17d6cae106dc9c87da71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_863c96fde07b17d6cae106dc9c87da71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_863c96fde07b17d6cae106dc9c87da71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_863c96fde07b17d6cae106dc9c87da71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_863c96fde07b17d6cae106dc9c87da71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_863c96fde07b17d6cae106dc9c87da71,
        type_description_1,
        par_text,
        par_width,
        par_kwargs,
        var_w
    );


    // Release cached frame.
    if ( frame_863c96fde07b17d6cae106dc9c87da71 == cache_frame_863c96fde07b17d6cae106dc9c87da71 )
    {
        Py_DECREF( frame_863c96fde07b17d6cae106dc9c87da71 );
    }
    cache_frame_863c96fde07b17d6cae106dc9c87da71 = NULL;

    assertFrameObject( frame_863c96fde07b17d6cae106dc9c87da71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_11_fill );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_11_fill );
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


static PyObject *impl_textwrap$$$function_12_shorten( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    PyObject *par_width = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_83eba34ccdbfad06b837f3409a043673;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_83eba34ccdbfad06b837f3409a043673 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83eba34ccdbfad06b837f3409a043673, codeobj_83eba34ccdbfad06b837f3409a043673, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_83eba34ccdbfad06b837f3409a043673 = cache_frame_83eba34ccdbfad06b837f3409a043673;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83eba34ccdbfad06b837f3409a043673 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83eba34ccdbfad06b837f3409a043673 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_TextWrapper );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextWrapper );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextWrapper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_width;
        CHECK_OBJECT( par_width );
        tmp_dict_value_1 = par_width;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_max_lines;
        tmp_dict_value_2 = const_int_pos_1;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_6_complex_call_helper_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_w );
        tmp_source_name_1 = var_w;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fill );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_2 = const_str_space;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
        assert( !(tmp_called_name_2 == NULL) );
        CHECK_OBJECT( par_text );
        tmp_called_instance_2 = par_text;
        frame_83eba34ccdbfad06b837f3409a043673->m_frame.f_lineno = 406;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_83eba34ccdbfad06b837f3409a043673->m_frame.f_lineno = 406;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_split );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_83eba34ccdbfad06b837f3409a043673->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_83eba34ccdbfad06b837f3409a043673->m_frame.f_lineno = 406;
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


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83eba34ccdbfad06b837f3409a043673 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83eba34ccdbfad06b837f3409a043673 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83eba34ccdbfad06b837f3409a043673 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83eba34ccdbfad06b837f3409a043673, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83eba34ccdbfad06b837f3409a043673->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83eba34ccdbfad06b837f3409a043673, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83eba34ccdbfad06b837f3409a043673,
        type_description_1,
        par_text,
        par_width,
        par_kwargs,
        var_w
    );


    // Release cached frame.
    if ( frame_83eba34ccdbfad06b837f3409a043673 == cache_frame_83eba34ccdbfad06b837f3409a043673 )
    {
        Py_DECREF( frame_83eba34ccdbfad06b837f3409a043673 );
    }
    cache_frame_83eba34ccdbfad06b837f3409a043673 = NULL;

    assertFrameObject( frame_83eba34ccdbfad06b837f3409a043673 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_12_shorten );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_12_shorten );
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


static PyObject *impl_textwrap$$$function_13_dedent( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    PyObject *var_margin = NULL;
    PyObject *var_indents = NULL;
    PyObject *var_indent = NULL;
    PyObject *var_i = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b1800cee9ee4b3c123ecc638e9ec3395;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_b1800cee9ee4b3c123ecc638e9ec3395 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_margin == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_margin = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b1800cee9ee4b3c123ecc638e9ec3395, codeobj_b1800cee9ee4b3c123ecc638e9ec3395, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b1800cee9ee4b3c123ecc638e9ec3395 = cache_frame_b1800cee9ee4b3c123ecc638e9ec3395;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b1800cee9ee4b3c123ecc638e9ec3395 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b1800cee9ee4b3c123ecc638e9ec3395 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__whitespace_only_re );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__whitespace_only_re );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_whitespace_only_re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 430;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_empty;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_2 = par_text;
        frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_sub, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_text;
            assert( old != NULL );
            par_text = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__leading_whitespace_re );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__leading_whitespace_re );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_leading_whitespace_re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 431;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_text );
        tmp_args_element_name_3 = par_text;
        frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_findall, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_indents == NULL );
        var_indents = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_indents );
        tmp_iter_arg_1 = var_indents;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "oooooooN";
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
                type_description_1 = "oooooooN";
                exception_lineno = 432;
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
            PyObject *old = var_indent;
            var_indent = tmp_assign_source_6;
            Py_INCREF( var_indent );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( var_margin == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 433;
            type_description_1 = "oooooooN";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_1 = var_margin;
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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_indent );
            tmp_assign_source_7 = var_indent;
            {
                PyObject *old = var_margin;
                var_margin = tmp_assign_source_7;
                Py_INCREF( var_margin );
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_indent );
            tmp_source_name_1 = var_indent;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_startswith );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooooooN";
                goto try_except_handler_2;
            }
            if ( var_margin == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 438;
                type_description_1 = "oooooooN";
                goto try_except_handler_2;
            }

            tmp_args_element_name_4 = var_margin;
            frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 438;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooooooN";
                goto try_except_handler_2;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooooooN";
                goto try_except_handler_2;
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
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_5;
                int tmp_truth_name_1;
                if ( var_margin == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 443;
                    type_description_1 = "oooooooN";
                    goto try_except_handler_2;
                }

                tmp_called_instance_3 = var_margin;
                CHECK_OBJECT( var_indent );
                tmp_args_element_name_5 = var_indent;
                frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 443;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 443;
                    type_description_1 = "oooooooN";
                    goto try_except_handler_2;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 443;
                    type_description_1 = "oooooooN";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_1 );
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
                    PyObject *tmp_assign_source_8;
                    CHECK_OBJECT( var_indent );
                    tmp_assign_source_8 = var_indent;
                    {
                        PyObject *old = var_margin;
                        var_margin = tmp_assign_source_8;
                        Py_INCREF( var_margin );
                        Py_XDECREF( old );
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_iter_arg_2;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_args_element_name_8;
                    tmp_called_name_2 = (PyObject *)&PyEnum_Type;
                    tmp_called_name_3 = (PyObject *)&PyZip_Type;
                    if ( var_margin == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 449;
                        type_description_1 = "oooooooN";
                        goto try_except_handler_2;
                    }

                    tmp_args_element_name_7 = var_margin;
                    CHECK_OBJECT( var_indent );
                    tmp_args_element_name_8 = var_indent;
                    frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 449;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                    }

                    if ( tmp_args_element_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 449;
                        type_description_1 = "oooooooN";
                        goto try_except_handler_2;
                    }
                    frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 449;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6 };
                        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_6 );
                    if ( tmp_iter_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 449;
                        type_description_1 = "oooooooN";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    Py_DECREF( tmp_iter_arg_2 );
                    if ( tmp_assign_source_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 449;
                        type_description_1 = "oooooooN";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = tmp_for_loop_2__for_iterator;
                        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                loop_start_2:;
                {
                    PyObject *tmp_next_source_2;
                    PyObject *tmp_assign_source_10;
                    CHECK_OBJECT( tmp_for_loop_2__for_iterator );
                    tmp_next_source_2 = tmp_for_loop_2__for_iterator;
                    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_2;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooooooN";
                            exception_lineno = 449;
                            goto try_except_handler_3;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_2__iter_value;
                        tmp_for_loop_2__iter_value = tmp_assign_source_10;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_iter_arg_3;
                    CHECK_OBJECT( tmp_for_loop_2__iter_value );
                    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
                    tmp_assign_source_11 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 449;
                        type_description_1 = "oooooooN";
                        goto try_except_handler_4;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_1__source_iter;
                        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_unpack_1;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
                    if ( tmp_assign_source_12 == NULL )
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


                        type_description_1 = "oooooooN";
                        exception_lineno = 449;
                        goto try_except_handler_5;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_1__element_1;
                        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_13;
                    PyObject *tmp_unpack_2;
                    CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
                    if ( tmp_assign_source_13 == NULL )
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


                        type_description_1 = "oooooooN";
                        exception_lineno = 449;
                        goto try_except_handler_5;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_1__element_2;
                        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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

                                type_description_1 = "oooooooN";
                                exception_lineno = 449;
                                goto try_except_handler_5;
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

                        type_description_1 = "oooooooN";
                        exception_lineno = 449;
                        goto try_except_handler_5;
                    }
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

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
                Py_DECREF( tmp_tuple_unpack_1__source_iter );
                tmp_tuple_unpack_1__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_1;
                exception_value = exception_keeper_value_1;
                exception_tb = exception_keeper_tb_1;
                exception_lineno = exception_keeper_lineno_1;

                goto try_except_handler_4;
                // End of try:
                try_end_1:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
                Py_DECREF( tmp_tuple_unpack_1__source_iter );
                tmp_tuple_unpack_1__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_14;
                    CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
                    {
                        PyObject *old = var_i;
                        var_i = tmp_assign_source_14;
                        Py_INCREF( var_i );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_1__element_1 );
                tmp_tuple_unpack_1__element_1 = NULL;

                // Tried code:
                {
                    PyObject *tmp_assign_source_15;
                    PyObject *tmp_iter_arg_4;
                    CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                    tmp_iter_arg_4 = tmp_tuple_unpack_1__element_2;
                    tmp_assign_source_15 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_4 );
                    if ( tmp_assign_source_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 449;
                        type_description_1 = "oooooooN";
                        goto try_except_handler_6;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__source_iter;
                        tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_unpack_3;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
                    if ( tmp_assign_source_16 == NULL )
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


                        type_description_1 = "oooooooN";
                        exception_lineno = 449;
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__element_1;
                        tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_unpack_4;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
                    if ( tmp_assign_source_17 == NULL )
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


                        type_description_1 = "oooooooN";
                        exception_lineno = 449;
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__element_2;
                        tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_2;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                                type_description_1 = "oooooooN";
                                exception_lineno = 449;
                                goto try_except_handler_7;
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

                        type_description_1 = "oooooooN";
                        exception_lineno = 449;
                        goto try_except_handler_7;
                    }
                }
                goto try_end_2;
                // Exception handler code:
                try_except_handler_7:;
                exception_keeper_type_2 = exception_type;
                exception_keeper_value_2 = exception_value;
                exception_keeper_tb_2 = exception_tb;
                exception_keeper_lineno_2 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
                Py_DECREF( tmp_tuple_unpack_2__source_iter );
                tmp_tuple_unpack_2__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto try_except_handler_6;
                // End of try:
                try_end_2:;
                goto try_end_3;
                // Exception handler code:
                try_except_handler_6:;
                exception_keeper_type_3 = exception_type;
                exception_keeper_value_3 = exception_value;
                exception_keeper_tb_3 = exception_tb;
                exception_keeper_lineno_3 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_2__element_1 );
                tmp_tuple_unpack_2__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_2__element_2 );
                tmp_tuple_unpack_2__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto try_except_handler_4;
                // End of try:
                try_end_3:;
                goto try_end_4;
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

                Py_XDECREF( tmp_tuple_unpack_1__element_1 );
                tmp_tuple_unpack_1__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_1__element_2 );
                tmp_tuple_unpack_1__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_4;
                exception_value = exception_keeper_value_4;
                exception_tb = exception_keeper_tb_4;
                exception_lineno = exception_keeper_lineno_4;

                goto try_except_handler_3;
                // End of try:
                try_end_4:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
                Py_DECREF( tmp_tuple_unpack_2__source_iter );
                tmp_tuple_unpack_2__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_18;
                    CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
                    {
                        PyObject *old = var_x;
                        var_x = tmp_assign_source_18;
                        Py_INCREF( var_x );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_2__element_1 );
                tmp_tuple_unpack_2__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_19;
                    CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
                    {
                        PyObject *old = var_y;
                        var_y = tmp_assign_source_19;
                        Py_INCREF( var_y );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_2__element_2 );
                tmp_tuple_unpack_2__element_2 = NULL;

                Py_XDECREF( tmp_tuple_unpack_1__element_2 );
                tmp_tuple_unpack_1__element_2 = NULL;

                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_2;
                    PyObject *tmp_compexpr_right_2;
                    CHECK_OBJECT( var_x );
                    tmp_compexpr_left_2 = var_x;
                    CHECK_OBJECT( var_y );
                    tmp_compexpr_right_2 = var_y;
                    tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 450;
                        type_description_1 = "oooooooN";
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
                        PyObject *tmp_assign_source_20;
                        PyObject *tmp_subscribed_name_1;
                        PyObject *tmp_subscript_name_1;
                        PyObject *tmp_start_name_1;
                        PyObject *tmp_stop_name_1;
                        PyObject *tmp_step_name_1;
                        if ( var_margin == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 451;
                            type_description_1 = "oooooooN";
                            goto try_except_handler_3;
                        }

                        tmp_subscribed_name_1 = var_margin;
                        tmp_start_name_1 = Py_None;
                        CHECK_OBJECT( var_i );
                        tmp_stop_name_1 = var_i;
                        tmp_step_name_1 = Py_None;
                        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                        assert( !(tmp_subscript_name_1 == NULL) );
                        tmp_assign_source_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                        Py_DECREF( tmp_subscript_name_1 );
                        if ( tmp_assign_source_20 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 451;
                            type_description_1 = "oooooooN";
                            goto try_except_handler_3;
                        }
                        {
                            PyObject *old = var_margin;
                            var_margin = tmp_assign_source_20;
                            Py_XDECREF( old );
                        }

                    }
                    goto loop_end_2;
                    branch_no_4:;
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 449;
                    type_description_1 = "oooooooN";
                    goto try_except_handler_3;
                }
                goto loop_start_2;
                loop_end_2:;
                goto try_end_5;
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

                Py_XDECREF( tmp_for_loop_2__iter_value );
                tmp_for_loop_2__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
                Py_DECREF( tmp_for_loop_2__for_iterator );
                tmp_for_loop_2__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_5;
                exception_value = exception_keeper_value_5;
                exception_tb = exception_keeper_tb_5;
                exception_lineno = exception_keeper_lineno_5;

                goto try_except_handler_2;
                // End of try:
                try_end_5:;
                Py_XDECREF( tmp_for_loop_2__iter_value );
                tmp_for_loop_2__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
                Py_DECREF( tmp_for_loop_2__for_iterator );
                tmp_for_loop_2__for_iterator = NULL;

                branch_end_3:;
            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "oooooooN";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        if ( var_margin == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 460;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( var_margin );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

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

                exception_lineno = 461;
                type_description_1 = "oooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sub );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooN";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = const_str_digest_65fc6c99c83d8929647977b56361e058;
            if ( var_margin == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "margin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 461;
                type_description_1 = "oooooooN";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = var_margin;
            tmp_args_element_name_9 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 461;
                type_description_1 = "oooooooN";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_10 = const_str_empty;
            CHECK_OBJECT( par_text );
            tmp_args_element_name_11 = par_text;
            frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame.f_lineno = 461;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_text;
                assert( old != NULL );
                par_text = tmp_assign_source_21;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1800cee9ee4b3c123ecc638e9ec3395 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1800cee9ee4b3c123ecc638e9ec3395 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b1800cee9ee4b3c123ecc638e9ec3395, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b1800cee9ee4b3c123ecc638e9ec3395->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b1800cee9ee4b3c123ecc638e9ec3395, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b1800cee9ee4b3c123ecc638e9ec3395,
        type_description_1,
        par_text,
        var_margin,
        var_indents,
        var_indent,
        var_i,
        var_x,
        var_y,
        NULL
    );


    // Release cached frame.
    if ( frame_b1800cee9ee4b3c123ecc638e9ec3395 == cache_frame_b1800cee9ee4b3c123ecc638e9ec3395 )
    {
        Py_DECREF( frame_b1800cee9ee4b3c123ecc638e9ec3395 );
    }
    cache_frame_b1800cee9ee4b3c123ecc638e9ec3395 = NULL;

    assertFrameObject( frame_b1800cee9ee4b3c123ecc638e9ec3395 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_text );
    tmp_return_value = par_text;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_13_dedent );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    Py_XDECREF( var_margin );
    var_margin = NULL;

    CHECK_OBJECT( (PyObject *)var_indents );
    Py_DECREF( var_indents );
    var_indents = NULL;

    Py_XDECREF( var_indent );
    var_indent = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    Py_XDECREF( var_margin );
    var_margin = NULL;

    Py_XDECREF( var_indents );
    var_indents = NULL;

    Py_XDECREF( var_indent );
    var_indent = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_13_dedent );
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


static PyObject *impl_textwrap$$$function_14_indent( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_text = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_prefix = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_predicate = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *var_prefixed_lines = NULL;
    struct Nuitka_FrameObject *frame_e8a95fb32241b3ebb75b917585a7eefa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8a95fb32241b3ebb75b917585a7eefa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_predicate ) );
        tmp_compexpr_left_1 = PyCell_GET( par_predicate );
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
            tmp_assign_source_1 = MAKE_FUNCTION_textwrap$$$function_14_indent$$$function_1_predicate(  );



            {
                PyObject *old = PyCell_GET( par_predicate );
                PyCell_SET( par_predicate, tmp_assign_source_1 );
                Py_XDECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_textwrap$$$function_14_indent$$$function_2_prefixed_lines(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_predicate;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_prefix;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] = par_text;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[2] );


        assert( var_prefixed_lines == NULL );
        var_prefixed_lines = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8a95fb32241b3ebb75b917585a7eefa, codeobj_e8a95fb32241b3ebb75b917585a7eefa, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e8a95fb32241b3ebb75b917585a7eefa = cache_frame_e8a95fb32241b3ebb75b917585a7eefa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8a95fb32241b3ebb75b917585a7eefa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8a95fb32241b3ebb75b917585a7eefa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        tmp_source_name_1 = const_str_empty;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        CHECK_OBJECT( var_prefixed_lines );
        tmp_called_name_2 = var_prefixed_lines;
        frame_e8a95fb32241b3ebb75b917585a7eefa->m_frame.f_lineno = 480;
        tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 480;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        frame_e8a95fb32241b3ebb75b917585a7eefa->m_frame.f_lineno = 480;
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


            exception_lineno = 480;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8a95fb32241b3ebb75b917585a7eefa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8a95fb32241b3ebb75b917585a7eefa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8a95fb32241b3ebb75b917585a7eefa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8a95fb32241b3ebb75b917585a7eefa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8a95fb32241b3ebb75b917585a7eefa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8a95fb32241b3ebb75b917585a7eefa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8a95fb32241b3ebb75b917585a7eefa,
        type_description_1,
        par_text,
        par_prefix,
        par_predicate,
        var_prefixed_lines
    );


    // Release cached frame.
    if ( frame_e8a95fb32241b3ebb75b917585a7eefa == cache_frame_e8a95fb32241b3ebb75b917585a7eefa )
    {
        Py_DECREF( frame_e8a95fb32241b3ebb75b917585a7eefa );
    }
    cache_frame_e8a95fb32241b3ebb75b917585a7eefa = NULL;

    assertFrameObject( frame_e8a95fb32241b3ebb75b917585a7eefa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_14_indent );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    CHECK_OBJECT( (PyObject *)par_predicate );
    Py_DECREF( par_predicate );
    par_predicate = NULL;

    CHECK_OBJECT( (PyObject *)var_prefixed_lines );
    Py_DECREF( var_prefixed_lines );
    var_prefixed_lines = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    CHECK_OBJECT( (PyObject *)par_predicate );
    Py_DECREF( par_predicate );
    par_predicate = NULL;

    CHECK_OBJECT( (PyObject *)var_prefixed_lines );
    Py_DECREF( var_prefixed_lines );
    var_prefixed_lines = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_14_indent );
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


static PyObject *impl_textwrap$$$function_14_indent$$$function_1_predicate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a38b03dea57bebb579aaabdf05944f57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a38b03dea57bebb579aaabdf05944f57 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a38b03dea57bebb579aaabdf05944f57, codeobj_a38b03dea57bebb579aaabdf05944f57, module_textwrap, sizeof(void *) );
    frame_a38b03dea57bebb579aaabdf05944f57 = cache_frame_a38b03dea57bebb579aaabdf05944f57;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a38b03dea57bebb579aaabdf05944f57 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a38b03dea57bebb579aaabdf05944f57 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_line );
        tmp_called_instance_1 = par_line;
        frame_a38b03dea57bebb579aaabdf05944f57->m_frame.f_lineno = 475;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_strip );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a38b03dea57bebb579aaabdf05944f57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a38b03dea57bebb579aaabdf05944f57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a38b03dea57bebb579aaabdf05944f57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a38b03dea57bebb579aaabdf05944f57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a38b03dea57bebb579aaabdf05944f57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a38b03dea57bebb579aaabdf05944f57, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a38b03dea57bebb579aaabdf05944f57,
        type_description_1,
        par_line
    );


    // Release cached frame.
    if ( frame_a38b03dea57bebb579aaabdf05944f57 == cache_frame_a38b03dea57bebb579aaabdf05944f57 )
    {
        Py_DECREF( frame_a38b03dea57bebb579aaabdf05944f57 );
    }
    cache_frame_a38b03dea57bebb579aaabdf05944f57 = NULL;

    assertFrameObject( frame_a38b03dea57bebb579aaabdf05944f57 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_14_indent$$$function_1_predicate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

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

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_14_indent$$$function_1_predicate );
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


static PyObject *impl_textwrap$$$function_14_indent$$$function_2_prefixed_lines( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = self->m_closure[0];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = self->m_closure[1];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = self->m_closure[2];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( textwrap$$$function_14_indent$$$function_2_prefixed_lines );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_locals {
    PyObject *var_line;
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

static PyObject *textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_locals *generator_heap = (struct textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_line = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_4033ca1645705fb730cf189321474460, module_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "text" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[2] );
        generator->m_frame->m_frame.f_lineno = 478;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_splitlines, &PyTuple_GET_ITEM( const_tuple_true_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "occc";
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
                generator_heap->type_description_1 = "occc";
                generator_heap->exception_lineno = 478;
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
            PyObject *old = generator_heap->var_line;
            generator_heap->var_line = tmp_assign_source_3;
            Py_INCREF( generator_heap->var_line );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "predicate" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "occc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_line );
        tmp_args_element_name_1 = generator_heap->var_line;
        generator->m_frame->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "occc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_1 );

            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "occc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "prefix" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "occc";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_line );
        tmp_right_name_1 = generator_heap->var_line;
        tmp_expression_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "occc";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( generator_heap->var_line );
        tmp_expression_name_1 = generator_heap->var_line;
        Py_INCREF( tmp_expression_name_1 );
        condexpr_end_1:;
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_name_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_name_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "occc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 478;
        generator_heap->type_description_1 = "occc";
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
            generator_heap->var_line,
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1]
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

    Py_XDECREF( generator_heap->var_line );
    generator_heap->var_line = NULL;

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

    Py_XDECREF( generator_heap->var_line );
    generator_heap->var_line = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_maker( void )
{
    return Nuitka_Generator_New(
        textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_context,
        module_textwrap,
        const_str_plain_prefixed_lines,
#if PYTHON_VERSION >= 350
        const_str_digest_55ad5e27d0a893d1729d2b55c435a3fa,
#endif
        codeobj_4033ca1645705fb730cf189321474460,
        3,
        sizeof(struct textwrap$$$function_14_indent$$$function_2_prefixed_lines$$$genobj_1_prefixed_lines_locals)
    );
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_10_wrap( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_10_wrap,
        const_str_plain_wrap,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e6851e2cef752a4f5c79e8c526b33689,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_897aa675dc1f0ea770166be31e047ef9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_11_fill( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_11_fill,
        const_str_plain_fill,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_863c96fde07b17d6cae106dc9c87da71,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_1348efbbc7dfa6ea25a86c30cb6536b1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_12_shorten(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_12_shorten,
        const_str_plain_shorten,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_83eba34ccdbfad06b837f3409a043673,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_ea3f101f553c21b368e2e59ea2453b62,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_13_dedent(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_13_dedent,
        const_str_plain_dedent,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b1800cee9ee4b3c123ecc638e9ec3395,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_8ce8a97e0d8b33d7e94a48d1a4fba457,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_14_indent( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_14_indent,
        const_str_plain_indent,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8a95fb32241b3ebb75b917585a7eefa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_d3d52f625888a02f31054866da2bfaa5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_14_indent$$$function_1_predicate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_14_indent$$$function_1_predicate,
        const_str_plain_predicate,
#if PYTHON_VERSION >= 300
        const_str_digest_5626e271838b352703d6ea667a94ad63,
#endif
        codeobj_a38b03dea57bebb579aaabdf05944f57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_14_indent$$$function_2_prefixed_lines(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_14_indent$$$function_2_prefixed_lines,
        const_str_plain_prefixed_lines,
#if PYTHON_VERSION >= 300
        const_str_digest_55ad5e27d0a893d1729d2b55c435a3fa,
#endif
        codeobj_4033ca1645705fb730cf189321474460,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_1___init__( PyObject *defaults, PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_9ad0dec3f5d240ecb0eaeb9e193c9346,
#endif
        codeobj_4b7881cc65dd9414d0ab50a6fae3113a,
        defaults,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_textwrap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_2__munge_whitespace(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_2__munge_whitespace,
        const_str_plain__munge_whitespace,
#if PYTHON_VERSION >= 300
        const_str_digest_a665e3b3bc7a843f21f072e4ac5e0c4c,
#endif
        codeobj_6226b2ae145cc2983ebb88298e85dc6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_f57e604e5496bc829035b383d2d8b12f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_3__split(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_3__split,
        const_str_plain__split,
#if PYTHON_VERSION >= 300
        const_str_digest_df679087aa18c0316ed89659564a5d4e,
#endif
        codeobj_fe45dda3fc81d8500d56664acbc6069e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_37c5d58d588180a43047ac5a0ad2c264,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_4__fix_sentence_endings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_4__fix_sentence_endings,
        const_str_plain__fix_sentence_endings,
#if PYTHON_VERSION >= 300
        const_str_digest_8d1b2f866a9130fc0c50bbb677d42704,
#endif
        codeobj_6fac20b6a2aef31054318f39c8172088,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_ec8d36d60ad2780bce5ec51c43ff74d8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_5__handle_long_word(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_5__handle_long_word,
        const_str_plain__handle_long_word,
#if PYTHON_VERSION >= 300
        const_str_digest_21f04f3c148058f9a4013655a5963df4,
#endif
        codeobj_6d7f4a51e09134a67ea6d726ec2fa346,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_9f4a99e4996f3828b0e2cba441a6e52e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_6__wrap_chunks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_6__wrap_chunks,
        const_str_plain__wrap_chunks,
#if PYTHON_VERSION >= 300
        const_str_digest_c4d133aba7df336060ce8c0b840a30d1,
#endif
        codeobj_c54658b78c77c96eb16cd5676e29179a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_5f953be118226958c02acb9a64431a15,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_7__split_chunks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_7__split_chunks,
        const_str_plain__split_chunks,
#if PYTHON_VERSION >= 300
        const_str_digest_d6eae13fe0093272d28071d96a130967,
#endif
        codeobj_b795521d15d73de5b20725c89b50dcfe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_8_wrap(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_8_wrap,
        const_str_plain_wrap,
#if PYTHON_VERSION >= 300
        const_str_digest_30f60b006bf9702e54b7baa31712c38b,
#endif
        codeobj_62a2dc8c53ee266b2dbae5205b25cba0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_afe97bb14daf8a4a1038036eb6b1a318,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textwrap$$$function_9_fill(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textwrap$$$function_9_fill,
        const_str_plain_fill,
#if PYTHON_VERSION >= 300
        const_str_digest_f75909f8fb20e0ec5110787680e5cdae,
#endif
        codeobj_5add9bba28bbbdb6a65c7d6b4327339c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_textwrap,
        const_str_digest_84d0eeb36b77e1a460561c4a1a345809,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_textwrap =
{
    PyModuleDef_HEAD_INIT,
    "textwrap",
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

MOD_INIT_DECL( textwrap )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_textwrap );
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
    puts("textwrap: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("textwrap: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("textwrap: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittextwrap" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_textwrap = Py_InitModule4(
        "textwrap",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_textwrap = PyModule_Create( &mdef_textwrap );
#endif

    moduledict_textwrap = MODULE_DICT( module_textwrap );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_textwrap,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_textwrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_textwrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_textwrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_textwrap );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_textwrap, module_textwrap );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_TextWrapper$for_loop_1__for_iterator = NULL;
    PyObject *tmp_TextWrapper$for_loop_1__iter_value = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_2263a0508ae400399fcc2212c850a976;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_textwrap_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5dbe2a7b8f19f845e391d98af75d819c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_5dbe2a7b8f19f845e391d98af75d819c_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_415caf6a52dda1e8bf4aa4f3e5e119f3;
        UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_2263a0508ae400399fcc2212c850a976 = MAKE_MODULE_FRAME( codeobj_2263a0508ae400399fcc2212c850a976, module_textwrap );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2263a0508ae400399fcc2212c850a976 );
    assert( Py_REFCNT( frame_2263a0508ae400399fcc2212c850a976 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_textwrap;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_2263a0508ae400399fcc2212c850a976->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_276370f6ab413fafd0fe2d7f35a85c90_list );
        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_digest_12cb3a05b1b9897c2b9521e9b0a6d5e6;
        UPDATE_STRING_DICT0( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__whitespace, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
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


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
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

            goto try_except_handler_1;
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

            goto try_except_handler_1;
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
            PyObject *tmp_assign_source_9;
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

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_TextWrapper_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_2263a0508ae400399fcc2212c850a976->m_frame.f_lineno = 17;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_9;
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

                goto try_except_handler_1;
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

                    goto try_except_handler_1;
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

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 17;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 17;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_textwrap_17 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_textwrap;
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_6c15095e7ba93b81b0b01abbbaa76b94;
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_TextWrapper;
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_5dbe2a7b8f19f845e391d98af75d819c_2, codeobj_5dbe2a7b8f19f845e391d98af75d819c, module_textwrap, sizeof(void *) );
        frame_5dbe2a7b8f19f845e391d98af75d819c_2 = cache_frame_5dbe2a7b8f19f845e391d98af75d819c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_5dbe2a7b8f19f845e391d98af75d819c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_5dbe2a7b8f19f845e391d98af75d819c_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_unicode_whitespace_trans, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_2;
            tmp_res = MAPPING_HAS_ITEM( locals_textwrap_17, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_2 = PyObject_GetItem( locals_textwrap_17, const_str_plain_ord );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_space_tuple, 0 ) );

            Py_DECREF( tmp_called_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_dictset_value = const_int_pos_32;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_2:;
            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_uspace, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_mvar_value_3;
            tmp_iter_arg_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain__whitespace );

            if ( tmp_iter_arg_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__whitespace );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__whitespace );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_whitespace" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_iter_arg_1 = tmp_mvar_value_3;
                Py_INCREF( tmp_iter_arg_1 );
                }
            }

            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            assert( tmp_TextWrapper$for_loop_1__for_iterator == NULL );
            tmp_TextWrapper$for_loop_1__for_iterator = tmp_assign_source_12;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_TextWrapper$for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_TextWrapper$for_loop_1__for_iterator;
            tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 68;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_TextWrapper$for_loop_1__iter_value;
                tmp_TextWrapper$for_loop_1__iter_value = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        CHECK_OBJECT( tmp_TextWrapper$for_loop_1__iter_value );
        tmp_dictset_value = tmp_TextWrapper$for_loop_1__iter_value;
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_x, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_ord_arg_1;
            tmp_ass_subvalue_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_uspace );

            if ( tmp_ass_subvalue_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "uspace" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_ass_subscribed_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_unicode_whitespace_trans );

            if ( tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode_whitespace_trans" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_res = MAPPING_HAS_ITEM( locals_textwrap_17, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_3 = PyObject_GetItem( locals_textwrap_17, const_str_plain_ord );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_args_element_name_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_x );

            if ( tmp_args_element_name_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_ass_subscript_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_ord_arg_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_x );

            if ( tmp_ord_arg_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            if ( tmp_ord_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_ass_subscript_1 = BUILTIN_ORD( tmp_ord_arg_1 );
            Py_DECREF( tmp_ord_arg_1 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            condexpr_end_3:;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
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

        Py_XDECREF( tmp_TextWrapper$for_loop_1__iter_value );
        tmp_TextWrapper$for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_TextWrapper$for_loop_1__for_iterator );
        Py_DECREF( tmp_TextWrapper$for_loop_1__for_iterator );
        tmp_TextWrapper$for_loop_1__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_TextWrapper$for_loop_1__iter_value );
        tmp_TextWrapper$for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_TextWrapper$for_loop_1__for_iterator );
        Py_DECREF( tmp_TextWrapper$for_loop_1__for_iterator );
        tmp_TextWrapper$for_loop_1__for_iterator = NULL;

        tmp_dictset_value = const_str_digest_c20890179edf39a0e4410aebd544cb2b;
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_word_punct, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_str_digest_7d7353e3b12a585a1401cc7250c36b66;
        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_letter, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_5;
            tmp_left_name_2 = const_str_digest_0674107b2d3e86aecfffb00b3395ae4a;
            tmp_source_name_5 = PyObject_GetItem( locals_textwrap_17, const_str_plain_re );

            if ( tmp_source_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_5 );
                }
            }

            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_escape );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_2 = PyObject_GetItem( locals_textwrap_17, const_str_plain__whitespace );

            if ( tmp_args_element_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__whitespace );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__whitespace );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_whitespace" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_2 = tmp_mvar_value_5;
                Py_INCREF( tmp_args_element_name_2 );
                }
            }

            frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_whitespace, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_left_name_3 = const_str_digest_cf0613df688a76dea09fc76b1e3f5ac7;
            tmp_subscribed_name_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_whitespace );

            if ( tmp_subscribed_name_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "whitespace" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
            tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_nowhitespace, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_7;
            tmp_source_name_6 = PyObject_GetItem( locals_textwrap_17, const_str_plain_re );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 81;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_6 = tmp_mvar_value_6;
                Py_INCREF( tmp_source_name_6 );
                }
            }

            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compile );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_left_name_4 = const_str_digest_3d2eb3996a9a9a2a94bb132e1e3967a3;
            tmp_dict_key_1 = const_str_plain_wp;
            tmp_dict_value_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_word_punct );

            if ( tmp_dict_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "word_punct" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_right_name_4 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_right_name_4, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_lt;
            tmp_dict_value_2 = PyObject_GetItem( locals_textwrap_17, const_str_plain_letter );

            if ( tmp_dict_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_right_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "letter" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_right_name_4 );

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( tmp_right_name_4, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_ws;
            tmp_dict_value_3 = PyObject_GetItem( locals_textwrap_17, const_str_plain_whitespace );

            if ( tmp_dict_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_right_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "whitespace" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_right_name_4 );

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( tmp_right_name_4, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_nws;
            tmp_dict_value_4 = PyObject_GetItem( locals_textwrap_17, const_str_plain_nowhitespace );

            if ( tmp_dict_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_right_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nowhitespace" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_dict_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_right_name_4 );

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( tmp_right_name_4, tmp_dict_key_4, tmp_dict_value_4 );
            Py_DECREF( tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_source_name_7 = PyObject_GetItem( locals_textwrap_17, const_str_plain_re );

            if ( tmp_source_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_element_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_7 = tmp_mvar_value_7;
                Py_INCREF( tmp_source_name_7 );
                }
            }

            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_VERBOSE );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame.f_lineno = 81;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_wordsep_re, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_res = PyObject_DelItem( locals_textwrap_17, const_str_plain_word_punct );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_DelItem( locals_textwrap_17, const_str_plain_letter );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_DelItem( locals_textwrap_17, const_str_plain_nowhitespace );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            tmp_source_name_8 = PyObject_GetItem( locals_textwrap_17, const_str_plain_re );

            if ( tmp_source_name_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_8 = tmp_mvar_value_8;
                Py_INCREF( tmp_source_name_8 );
                }
            }

            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_compile );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_left_name_5 = const_str_digest_cc3e8ef8431c65657d305c328c512ca9;
            tmp_right_name_5 = PyObject_GetItem( locals_textwrap_17, const_str_plain_whitespace );

            if ( tmp_right_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "whitespace" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame.f_lineno = 105;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_wordsep_simple_re, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_res = PyObject_DelItem( locals_textwrap_17, const_str_plain_whitespace );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_9;
            tmp_called_instance_1 = PyObject_GetItem( locals_textwrap_17, const_str_plain_re );

            if ( tmp_called_instance_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_9;
                Py_INCREF( tmp_called_instance_1 );
                }
            }

            frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_7998bc514edd7ec5916fb8c6de94e6e2_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_sentence_end_re, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_kw_defaults_1;
            tmp_defaults_1 = const_tuple_2e5692f3992af2e8d6f8f645052932ba_tuple;
            tmp_kw_defaults_1 = PyDict_Copy( const_dict_32a265d85c65d04ced6107366644da8f );
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_1___init__( tmp_defaults_1, tmp_kw_defaults_1 );



            tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_2__munge_whitespace(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain__munge_whitespace, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_3__split(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain__split, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_4__fix_sentence_endings(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain__fix_sentence_endings, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_5__handle_long_word(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain__handle_long_word, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_6__wrap_chunks(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain__wrap_chunks, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_7__split_chunks(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain__split_chunks, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_8_wrap(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_wrap, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_textwrap$$$function_9_fill(  );



        tmp_res = PyObject_SetItem( locals_textwrap_17, const_str_plain_fill, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5dbe2a7b8f19f845e391d98af75d819c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5dbe2a7b8f19f845e391d98af75d819c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_5dbe2a7b8f19f845e391d98af75d819c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_5dbe2a7b8f19f845e391d98af75d819c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_5dbe2a7b8f19f845e391d98af75d819c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5dbe2a7b8f19f845e391d98af75d819c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_5dbe2a7b8f19f845e391d98af75d819c_2 == cache_frame_5dbe2a7b8f19f845e391d98af75d819c_2 )
        {
            Py_DECREF( frame_5dbe2a7b8f19f845e391d98af75d819c_2 );
        }
        cache_frame_5dbe2a7b8f19f845e391d98af75d819c_2 = NULL;

        assertFrameObject( frame_5dbe2a7b8f19f845e391d98af75d819c_2 );

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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_TextWrapper;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_textwrap_17;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_2263a0508ae400399fcc2212c850a976->m_frame.f_lineno = 17;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( textwrap );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_textwrap_17 );
        locals_textwrap_17 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF( locals_textwrap_17 );
        locals_textwrap_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( textwrap );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( textwrap );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_TextWrapper, tmp_assign_source_11 );
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_pos_70_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_15 = MAKE_FUNCTION_textwrap$$$function_10_wrap( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_wrap, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_int_pos_70_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_16 = MAKE_FUNCTION_textwrap$$$function_11_fill( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_fill, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_textwrap$$$function_12_shorten(  );



        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_shorten, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_10;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_compile );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = const_str_digest_0e1ca843f8c5abc4c90a60d5acf44903;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_11;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_MULTILINE );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        frame_2263a0508ae400399fcc2212c850a976->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__whitespace_only_re, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_12;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compile );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = const_str_digest_c9472a2aa94e80acdd0ca151eda97680;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_13;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_MULTILINE );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        frame_2263a0508ae400399fcc2212c850a976->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain__leading_whitespace_re, tmp_assign_source_19 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2263a0508ae400399fcc2212c850a976 );
#endif
    popFrameStack();

    assertFrameObject( frame_2263a0508ae400399fcc2212c850a976 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2263a0508ae400399fcc2212c850a976 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2263a0508ae400399fcc2212c850a976, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2263a0508ae400399fcc2212c850a976->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2263a0508ae400399fcc2212c850a976, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_textwrap$$$function_13_dedent(  );



        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_dedent, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_21 = MAKE_FUNCTION_textwrap$$$function_14_indent( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain_indent, tmp_assign_source_21 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_textwrap, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_textwrap );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
