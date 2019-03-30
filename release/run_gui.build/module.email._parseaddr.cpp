/* Generated code for Python module 'email._parseaddr'
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

/* The "_module_email$_parseaddr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email$_parseaddr;
PyDictObject *moduledict_email$_parseaddr;

/* The declarations of module constants used, if any. */
extern PyObject *const_int_pos_12;
extern PyObject *const_tuple_str_chr_43_tuple;
static PyObject *const_str_plain_returnlist;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_index;
static PyObject *const_str_plain_getdomain;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_getaddrspec;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_38c1e4674a3d3409729b1762b2cac18b;
static PyObject *const_str_plain_allowcomments;
static PyObject *const_str_plain_adlist;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a;
extern PyObject *const_str_plain_COMMASPACE;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_chr_60;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_digest_24fbba627d2552038ed5e6fb5a86b549;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain_preserve_ws;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_i;
static PyObject *const_str_digest_80c0d04cc8346cad18e840f508fe1c9e;
extern PyObject *const_str_plain_0;
static PyObject *const_str_digest_ddf6c7cc780d451ffc34a9a4364ed04a;
static PyObject *const_str_digest_a6a8906f01df54038862927dd6004ba9;
extern PyObject *const_str_plain_mktime;
static PyObject *const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple;
extern PyObject *const_str_plain_tue;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_rfind;
static PyObject *const_str_plain_yy;
static PyObject *const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *const_str_digest_64b4968e38cf7e39d2c870c13dd738dd;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_fad78ae70f0f47bab7cf6c6815dd549a;
static PyObject *const_str_digest_9135bd4e7efb3acbb9a8ebf4ea4e2866;
extern PyObject *const_str_plain___sub__;
extern PyObject *const_tuple_str_plain_self_str_plain_index_tuple;
static PyObject *const_str_plain_fieldlen;
static PyObject *const_tuple_str_chr_34_str_digest_4911663181756066342617a7d23098eb_false_tuple;
extern PyObject *const_slice_int_pos_3_none_none;
static PyObject *const_str_plain_sdlist;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_48930c92c40a4c43e2b386b7aeae0e7d;
static PyObject *const_str_plain___iadd__;
extern PyObject *const_int_pos_5;
extern PyObject *const_tuple_str_chr_58_tuple;
extern PyObject *const_str_digest_0674107b2d3e86aecfffb00b3395ae4a;
extern PyObject *const_str_plain_addresslist;
extern PyObject *const_tuple_str_chr_92_str_digest_7cb7e1a5659547478f12d8fe755efd75_tuple;
static PyObject *const_str_plain_tmm;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_getaddress;
static PyObject *const_str_digest_f1cb0013611bc32f424141176b188e49;
static PyObject *const_str_digest_ec93d122199e6159d63db6147f8717ce;
static PyObject *const_str_plain_gotonext;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_thu;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_plain_getdomainliteral;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_fri;
static PyObject *const_str_plain_atomends;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_6677ff01973ad5462845c601087dc400;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_getcomment;
extern PyObject *const_str_chr_62;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_digest_1e4616cb2877c002aa48d41e8b575b32;
extern PyObject *const_str_plain_quote;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_chr_41;
extern PyObject *const_str_plain___len__;
static PyObject *const_str_digest_4c10ea677c5985268e1c1e519afaa07c;
static PyObject *const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple;
static PyObject *const_str_digest_7090cf249c3582908cdbed990435c817;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_mm;
static PyObject *const_str_digest_5c89709a48945a5ebff790f6bfd4f4e7;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_commentlist;
static PyObject *const_tuple_str_plain_data_str_plain_res_tuple;
extern PyObject *const_str_plain_mon;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_isdigit;
extern PyObject *const_str_digest_ac3c04695ae18e90f167bbe6a79ef359;
static PyObject *const_str_plain_phraseends;
static PyObject *const_str_digest_df19d0c761abd86826e77f06a1f4c299;
extern PyObject *const_str_chr_45;
static PyObject *const_str_digest_50cb28a74c0abb0150bab9c2a569a009;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_int_pos_68;
static PyObject *const_str_plain_getquote;
static PyObject *const_str_digest_c92b31c4df3c7cc8607bc704b366a728;
extern PyObject *const_str_chr_64;
static PyObject *const_tuple_str_dot_str_empty_tuple;
extern PyObject *const_str_chr_91;
static PyObject *const_str_digest_f3002bab0927ff1980bb821637eb966d;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_d79cfdb9557c580313dead15cbd34257;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_chr_45_tuple;
static PyObject *const_str_digest_defb5316411f5eda4d458633449911f9;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_tzsign;
static PyObject *const_str_digest_bdcebde3432f639563b92f72b787114c;
static PyObject *const_str_plain___isub__;
extern PyObject *const_str_space;
static PyObject *const_str_digest_4785c769eb1af187e19d18bf425a5fd8;
extern PyObject *const_tuple_str_chr_64_tuple;
extern PyObject *const_str_plain_AddressList;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_calendar;
static PyObject *const_str_digest_02136fd8dd9396db4fe0775d11f156ad;
static PyObject *const_tuple_str_chr_40_str_digest_9b805b6192aac3720032f6d97fd0bf27_true_tuple;
static PyObject *const_str_digest_5e6858139daf36d44e718ecee097ee97;
static PyObject *const_str_plain_addrspec;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_SPACE;
extern PyObject *const_str_chr_92;
extern PyObject *const_str_plain_timegm;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple;
static PyObject *const_str_plain_oldcl;
extern PyObject *const_str_plain_split;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_remove;
static PyObject *const_tuple_str_plain_AddrlistClass_tuple_empty_tuple;
static PyObject *const_tuple_15a20060772d61fe130db102860c505d_tuple;
static PyObject *const_str_plain_atomlist;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_AddrlistClass;
static PyObject *const_str_plain_dd;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_fb8548a88f43a901ee8de7b230c86a0a_list;
static PyObject *const_str_plain_getatom;
static PyObject *const_str_plain_oldpos;
static PyObject *const_str_plain_getdelimited;
static PyObject *const_str_digest_0f31a3180a2ee48342f1e758017e19b0;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain_expectroute;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
extern PyObject *const_slice_none_int_pos_8_none;
static PyObject *const_str_digest_9b805b6192aac3720032f6d97fd0bf27;
static PyObject *const_str_digest_e57ea08b7110c8a17e2a05392e4eb6fe;
static PyObject *const_tuple_7d29400a6519c59de6b32737d817369b_tuple;
extern PyObject *const_int_pos_1900;
extern PyObject *const_str_plain_tz;
static PyObject *const_str_digest_df4c8da05564ee27b2bd7a618eeccb59;
extern PyObject *const_slice_none_int_pos_5_none;
static PyObject *const_str_plain_specials;
static PyObject *const_str_plain_CR;
static PyObject *const_str_digest_dc57a83f629836bb58a2f9270bf61cfd;
static PyObject *const_str_digest_3e99414955bbcd4e76ce3f221ce9cb78;
extern PyObject *const_str_chr_58;
extern PyObject *const_list_str_empty_list;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_tuple_str_plain_str_tuple;
extern PyObject *const_str_plain_tm;
extern PyObject *const_str_plain_ws;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_beginchar;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_489468d43040bd349fad79a0859e81fe;
extern PyObject *const_str_plain_mktime_tz;
extern PyObject *const_str_digest_c245c8a772b3a33119deac8565a08f57;
static PyObject *const_str_plain_getphraselist;
static PyObject *const_str_plain__daynames;
static PyObject *const_str_digest_964af0501dad3c155597daef02b65515;
extern PyObject *const_str_chr_40;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_wed;
extern PyObject *const_str_plain_EMPTYSTRING;
static PyObject *const_str_digest_f40a07001cf534a9ff74c7f024c6ae90;
static PyObject *const_str_digest_ca236d04fcee6bc49f19e4f6c825e3c1;
extern PyObject *const_tuple_str_empty_str_empty_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain__parsedate_tz;
static PyObject *const_str_digest_7815c991d0afd7287e78713907983209;
static PyObject *const_str_digest_11f2fb395eb3d1bcb84b088cbd977291;
static PyObject *const_str_plain_getrouteaddr;
extern PyObject *const_str_plain_stuff;
static PyObject *const_slice_none_int_pos_9_none;
static PyObject *const_str_plain_slist;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_859981c7c1b5933339c0504fc3962cbe;
static PyObject *const_str_digest_e391fbebd60c6bddbb3f1a25a164ed5b;
static PyObject *const_str_plain__timezones;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_sun;
static PyObject *const_str_digest_d3fb8c2654c1918e87aa9f4d33369829;
static PyObject *const_tuple_str_plain_self_str_plain_wslist_tuple;
extern PyObject *const_str_plain_sat;
static PyObject *const_str_digest_a535e8ccac160400e142228c364c6fd5;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_self_str_plain_sdlist_tuple;
static PyObject *const_str_digest_f717fc6c600a521690d4c5fccca7e0c2;
static PyObject *const_str_plain__monthnames;
static PyObject *const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple;
static PyObject *const_str_digest_75b168fba240912f90890636ee280c57;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_plist;
extern PyObject *const_str_plain_replace;
extern PyObject *const_int_pos_3600;
static PyObject *const_tuple_str_chr_91_str_digest_4785c769eb1af187e19d18bf425a5fd8_false_tuple;
static PyObject *const_str_plain_LWS;
extern PyObject *const_str_digest_7cb7e1a5659547478f12d8fe755efd75;
static PyObject *const_str_digest_01ddeff52903ebf9203a5861272393bd;
static PyObject *const_list_92cc68f28b76d52409e08ee8e9149d92_list;
extern PyObject *const_str_plain_endchars;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_digest_7ca129d2d421fe965ad48cbb290b579b;
extern PyObject *const_str_plain_field;
extern PyObject *const_str_plain_other;
static PyObject *const_str_digest_4af07f555cf39ae48b35b4fa9abd691f;
extern PyObject *const_str_chr_34;
static PyObject *const_str_digest_3b87ab80344ea5bb4a5b4d311d476990;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_2000;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_getaddrlist;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_thh;
static PyObject *const_str_plain_newaddr;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_data_str_plain_t_tuple;
extern PyObject *const_str_plain_parsedate;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_plain_aslist;
extern PyObject *const_str_plain_FWS;
static PyObject *const_str_plain_tss;
extern PyObject *const_tuple_str_chr_34_str_digest_c245c8a772b3a33119deac8565a08f57_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple;
static PyObject *const_tuple_tuple_str_empty_str_empty_tuple_tuple;
static PyObject *const_str_digest_c187ccaa27f2071bab4a2e5face88f40;
static PyObject *const_tuple_str_plain_self_str_plain_plist_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_field_tuple;
extern PyObject *const_str_chr_59;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_a30142b5278125f0f4f41a86461cc83e;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_ac02ab0238280e341b2aff0eed15b128;
extern PyObject *const_list_7cb077ac2ddb10d2fb6c6f0a558f0830_list;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
static PyObject *const_dict_45a77cbc356231bd0aa293d6947517e6;
extern PyObject *const_str_plain_find;
static PyObject *const_str_plain_tzoffset;
static PyObject *const_str_plain_ad;
extern PyObject *const_int_pos_100;
static PyObject *const_str_plain_routeaddr;
extern PyObject *const_str_plain_parsedate_tz;
static PyObject *const_str_plain_wslist;
static PyObject *const_str_digest_4911663181756066342617a7d23098eb;
static PyObject *const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple;
extern PyObject *const_str_plain___add__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_returnlist = UNSTREAM_STRING_ASCII( &constant_bin[ 204081 ], 10, 1 );
    const_str_plain_getdomain = UNSTREAM_STRING_ASCII( &constant_bin[ 204091 ], 9, 1 );
    const_str_plain_getaddrspec = UNSTREAM_STRING_ASCII( &constant_bin[ 204100 ], 11, 1 );
    const_str_digest_38c1e4674a3d3409729b1762b2cac18b = UNSTREAM_STRING_ASCII( &constant_bin[ 204111 ], 22, 0 );
    const_str_plain_allowcomments = UNSTREAM_STRING_ASCII( &constant_bin[ 204133 ], 13, 1 );
    const_str_plain_adlist = UNSTREAM_STRING_ASCII( &constant_bin[ 204146 ], 6, 1 );
    const_str_digest_24fbba627d2552038ed5e6fb5a86b549 = UNSTREAM_STRING_ASCII( &constant_bin[ 204152 ], 55, 0 );
    const_str_plain_preserve_ws = UNSTREAM_STRING_ASCII( &constant_bin[ 204207 ], 11, 1 );
    const_str_digest_80c0d04cc8346cad18e840f508fe1c9e = UNSTREAM_STRING_ASCII( &constant_bin[ 204218 ], 22, 0 );
    const_str_digest_ddf6c7cc780d451ffc34a9a4364ed04a = UNSTREAM_STRING_ASCII( &constant_bin[ 204240 ], 276, 0 );
    const_str_digest_a6a8906f01df54038862927dd6004ba9 = UNSTREAM_STRING_ASCII( &constant_bin[ 204516 ], 2, 0 );
    const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 2, const_str_plain_stuff ); Py_INCREF( const_str_plain_stuff );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_dd = UNSTREAM_STRING_ASCII( &constant_bin[ 8881 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 4, const_str_plain_dd ); Py_INCREF( const_str_plain_dd );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 5, const_str_plain_mm ); Py_INCREF( const_str_plain_mm );
    const_str_plain_yy = UNSTREAM_STRING_ASCII( &constant_bin[ 46001 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 6, const_str_plain_yy ); Py_INCREF( const_str_plain_yy );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 7, const_str_plain_tm ); Py_INCREF( const_str_plain_tm );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 8, const_str_plain_tz ); Py_INCREF( const_str_plain_tz );
    const_str_plain_thh = UNSTREAM_STRING_ASCII( &constant_bin[ 82175 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 9, const_str_plain_thh ); Py_INCREF( const_str_plain_thh );
    const_str_plain_tmm = UNSTREAM_STRING_ASCII( &constant_bin[ 204518 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 10, const_str_plain_tmm ); Py_INCREF( const_str_plain_tmm );
    const_str_plain_tss = UNSTREAM_STRING_ASCII( &constant_bin[ 204521 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 11, const_str_plain_tss ); Py_INCREF( const_str_plain_tss );
    const_str_plain_tzoffset = UNSTREAM_STRING_ASCII( &constant_bin[ 204524 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 12, const_str_plain_tzoffset ); Py_INCREF( const_str_plain_tzoffset );
    PyTuple_SET_ITEM( const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 13, const_str_plain_tzsign ); Py_INCREF( const_str_plain_tzsign );
    const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_atomends = UNSTREAM_STRING_ASCII( &constant_bin[ 204282 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 1, const_str_plain_atomends ); Py_INCREF( const_str_plain_atomends );
    const_str_plain_atomlist = UNSTREAM_STRING_ASCII( &constant_bin[ 204532 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 2, const_str_plain_atomlist ); Py_INCREF( const_str_plain_atomlist );
    const_str_digest_64b4968e38cf7e39d2c870c13dd738dd = UNSTREAM_STRING_ASCII( &constant_bin[ 204540 ], 248, 0 );
    const_str_digest_fad78ae70f0f47bab7cf6c6815dd549a = UNSTREAM_STRING_ASCII( &constant_bin[ 204788 ], 38, 0 );
    const_str_digest_9135bd4e7efb3acbb9a8ebf4ea4e2866 = UNSTREAM_STRING_ASCII( &constant_bin[ 204826 ], 22, 0 );
    const_str_plain_fieldlen = UNSTREAM_STRING_ASCII( &constant_bin[ 204848 ], 8, 1 );
    const_tuple_str_chr_34_str_digest_4911663181756066342617a7d23098eb_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_chr_34_str_digest_4911663181756066342617a7d23098eb_false_tuple, 0, const_str_chr_34 ); Py_INCREF( const_str_chr_34 );
    const_str_digest_4911663181756066342617a7d23098eb = UNSTREAM_STRING_ASCII( &constant_bin[ 204856 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_chr_34_str_digest_4911663181756066342617a7d23098eb_false_tuple, 1, const_str_digest_4911663181756066342617a7d23098eb ); Py_INCREF( const_str_digest_4911663181756066342617a7d23098eb );
    PyTuple_SET_ITEM( const_tuple_str_chr_34_str_digest_4911663181756066342617a7d23098eb_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_plain_sdlist = UNSTREAM_STRING_ASCII( &constant_bin[ 204858 ], 6, 1 );
    const_str_digest_48930c92c40a4c43e2b386b7aeae0e7d = UNSTREAM_STRING_ASCII( &constant_bin[ 204864 ], 486, 0 );
    const_str_plain___iadd__ = UNSTREAM_STRING_ASCII( &constant_bin[ 205350 ], 8, 1 );
    const_str_plain_getaddress = UNSTREAM_STRING_ASCII( &constant_bin[ 205358 ], 10, 1 );
    const_str_digest_f1cb0013611bc32f424141176b188e49 = UNSTREAM_STRING_ASCII( &constant_bin[ 205368 ], 23, 0 );
    const_str_digest_ec93d122199e6159d63db6147f8717ce = UNSTREAM_STRING_ASCII( &constant_bin[ 205391 ], 20, 0 );
    const_str_plain_gotonext = UNSTREAM_STRING_ASCII( &constant_bin[ 204840 ], 8, 1 );
    const_str_plain_getdomainliteral = UNSTREAM_STRING_ASCII( &constant_bin[ 205411 ], 16, 1 );
    const_str_digest_6677ff01973ad5462845c601087dc400 = UNSTREAM_STRING_ASCII( &constant_bin[ 205427 ], 25, 0 );
    const_str_plain_getcomment = UNSTREAM_STRING_ASCII( &constant_bin[ 205452 ], 10, 1 );
    const_str_digest_4c10ea677c5985268e1c1e519afaa07c = UNSTREAM_STRING_ASCII( &constant_bin[ 205462 ], 33, 0 );
    const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_expectroute = UNSTREAM_STRING_ASCII( &constant_bin[ 205495 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 1, const_str_plain_expectroute ); Py_INCREF( const_str_plain_expectroute );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 2, const_str_plain_adlist ); Py_INCREF( const_str_plain_adlist );
    const_str_digest_7090cf249c3582908cdbed990435c817 = UNSTREAM_STRING_ASCII( &constant_bin[ 205506 ], 27, 0 );
    const_str_digest_5c89709a48945a5ebff790f6bfd4f4e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 205533 ], 86, 0 );
    const_str_plain_commentlist = UNSTREAM_STRING_ASCII( &constant_bin[ 205619 ], 11, 1 );
    const_tuple_str_plain_data_str_plain_res_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_res_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_phraseends = UNSTREAM_STRING_ASCII( &constant_bin[ 205630 ], 10, 1 );
    const_str_digest_df19d0c761abd86826e77f06a1f4c299 = UNSTREAM_STRING_ASCII( &constant_bin[ 205640 ], 24, 0 );
    const_str_digest_50cb28a74c0abb0150bab9c2a569a009 = UNSTREAM_STRING_ASCII( &constant_bin[ 205664 ], 19, 0 );
    const_str_plain_getquote = UNSTREAM_STRING_ASCII( &constant_bin[ 204125 ], 8, 1 );
    const_str_digest_c92b31c4df3c7cc8607bc704b366a728 = UNSTREAM_STRING_ASCII( &constant_bin[ 205683 ], 25, 0 );
    const_tuple_str_dot_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_dot_str_empty_tuple, 0, const_str_dot ); Py_INCREF( const_str_dot );
    PyTuple_SET_ITEM( const_tuple_str_dot_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_f3002bab0927ff1980bb821637eb966d = UNSTREAM_STRING_ASCII( &constant_bin[ 205708 ], 45, 0 );
    const_str_digest_d79cfdb9557c580313dead15cbd34257 = UNSTREAM_STRING_ASCII( &constant_bin[ 205753 ], 259, 0 );
    const_str_digest_defb5316411f5eda4d458633449911f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 206012 ], 64, 0 );
    const_str_digest_bdcebde3432f639563b92f72b787114c = UNSTREAM_STRING_ASCII( &constant_bin[ 206076 ], 253, 0 );
    const_str_plain___isub__ = UNSTREAM_STRING_ASCII( &constant_bin[ 205403 ], 8, 1 );
    const_str_digest_4785c769eb1af187e19d18bf425a5fd8 = UNSTREAM_STRING_ASCII( &constant_bin[ 206329 ], 2, 0 );
    const_str_digest_02136fd8dd9396db4fe0775d11f156ad = UNSTREAM_STRING_ASCII( &constant_bin[ 206331 ], 19, 0 );
    const_tuple_str_chr_40_str_digest_9b805b6192aac3720032f6d97fd0bf27_true_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_chr_40_str_digest_9b805b6192aac3720032f6d97fd0bf27_true_tuple, 0, const_str_chr_40 ); Py_INCREF( const_str_chr_40 );
    const_str_digest_9b805b6192aac3720032f6d97fd0bf27 = UNSTREAM_STRING_ASCII( &constant_bin[ 206350 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_chr_40_str_digest_9b805b6192aac3720032f6d97fd0bf27_true_tuple, 1, const_str_digest_9b805b6192aac3720032f6d97fd0bf27 ); Py_INCREF( const_str_digest_9b805b6192aac3720032f6d97fd0bf27 );
    PyTuple_SET_ITEM( const_tuple_str_chr_40_str_digest_9b805b6192aac3720032f6d97fd0bf27_true_tuple, 2, Py_True ); Py_INCREF( Py_True );
    const_str_digest_5e6858139daf36d44e718ecee097ee97 = UNSTREAM_STRING_ASCII( &constant_bin[ 206352 ], 81, 0 );
    const_str_plain_addrspec = UNSTREAM_STRING_ASCII( &constant_bin[ 204103 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    const_str_plain_newaddr = UNSTREAM_STRING_ASCII( &constant_bin[ 206433 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 2, const_str_plain_newaddr ); Py_INCREF( const_str_plain_newaddr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_oldcl = UNSTREAM_STRING_ASCII( &constant_bin[ 206440 ], 5, 1 );
    const_tuple_str_plain_AddrlistClass_tuple_empty_tuple = PyTuple_New( 2 );
    const_str_plain_AddrlistClass = UNSTREAM_STRING_ASCII( &constant_bin[ 204111 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AddrlistClass_tuple_empty_tuple, 0, const_str_plain_AddrlistClass ); Py_INCREF( const_str_plain_AddrlistClass );
    PyTuple_SET_ITEM( const_tuple_str_plain_AddrlistClass_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_tuple_15a20060772d61fe130db102860c505d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_15a20060772d61fe130db102860c505d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_aslist = UNSTREAM_STRING_ASCII( &constant_bin[ 206445 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_15a20060772d61fe130db102860c505d_tuple, 1, const_str_plain_aslist ); Py_INCREF( const_str_plain_aslist );
    PyTuple_SET_ITEM( const_tuple_15a20060772d61fe130db102860c505d_tuple, 2, const_str_plain_preserve_ws ); Py_INCREF( const_str_plain_preserve_ws );
    PyTuple_SET_ITEM( const_tuple_15a20060772d61fe130db102860c505d_tuple, 3, const_str_plain_ws ); Py_INCREF( const_str_plain_ws );
    const_list_fb8548a88f43a901ee8de7b230c86a0a_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 206451 ], 163 );
    const_str_plain_getatom = UNSTREAM_STRING_ASCII( &constant_bin[ 206614 ], 7, 1 );
    const_str_plain_oldpos = UNSTREAM_STRING_ASCII( &constant_bin[ 206621 ], 6, 1 );
    const_str_plain_getdelimited = UNSTREAM_STRING_ASCII( &constant_bin[ 205057 ], 12, 1 );
    const_str_digest_0f31a3180a2ee48342f1e758017e19b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 206627 ], 129, 0 );
    const_str_digest_e57ea08b7110c8a17e2a05392e4eb6fe = UNSTREAM_STRING_ASCII( &constant_bin[ 206756 ], 23, 0 );
    const_tuple_7d29400a6519c59de6b32737d817369b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_beginchar = UNSTREAM_STRING_ASCII( &constant_bin[ 204931 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 1, const_str_plain_beginchar ); Py_INCREF( const_str_plain_beginchar );
    PyTuple_SET_ITEM( const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 2, const_str_plain_endchars ); Py_INCREF( const_str_plain_endchars );
    PyTuple_SET_ITEM( const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 3, const_str_plain_allowcomments ); Py_INCREF( const_str_plain_allowcomments );
    const_str_plain_slist = UNSTREAM_STRING_ASCII( &constant_bin[ 206446 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 4, const_str_plain_slist ); Py_INCREF( const_str_plain_slist );
    PyTuple_SET_ITEM( const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 5, const_str_plain_quote ); Py_INCREF( const_str_plain_quote );
    const_str_digest_df4c8da05564ee27b2bd7a618eeccb59 = UNSTREAM_STRING_ASCII( &constant_bin[ 206779 ], 19, 0 );
    const_str_plain_specials = UNSTREAM_STRING_ASCII( &constant_bin[ 184967 ], 8, 1 );
    const_str_plain_CR = UNSTREAM_STRING_ASCII( &constant_bin[ 1029 ], 2, 1 );
    const_str_digest_dc57a83f629836bb58a2f9270bf61cfd = UNSTREAM_STRING_ASCII( &constant_bin[ 206798 ], 390, 0 );
    const_str_digest_3e99414955bbcd4e76ce3f221ce9cb78 = UNSTREAM_STRING_ASCII( &constant_bin[ 207188 ], 12, 0 );
    const_str_digest_489468d43040bd349fad79a0859e81fe = UNSTREAM_STRING_ASCII( &constant_bin[ 207200 ], 20, 0 );
    const_str_plain_getphraselist = UNSTREAM_STRING_ASCII( &constant_bin[ 204418 ], 13, 1 );
    const_str_plain__daynames = UNSTREAM_STRING_ASCII( &constant_bin[ 207220 ], 9, 1 );
    const_str_digest_964af0501dad3c155597daef02b65515 = UNSTREAM_STRING_ASCII( &constant_bin[ 207229 ], 28, 0 );
    const_str_digest_f40a07001cf534a9ff74c7f024c6ae90 = UNSTREAM_STRING_ASCII( &constant_bin[ 207257 ], 21, 0 );
    const_str_digest_ca236d04fcee6bc49f19e4f6c825e3c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 207278 ], 38, 0 );
    const_str_digest_7815c991d0afd7287e78713907983209 = UNSTREAM_STRING_ASCII( &constant_bin[ 207316 ], 20, 0 );
    const_str_digest_11f2fb395eb3d1bcb84b088cbd977291 = UNSTREAM_STRING_ASCII( &constant_bin[ 207336 ], 49, 0 );
    const_str_plain_getrouteaddr = UNSTREAM_STRING_ASCII( &constant_bin[ 207385 ], 12, 1 );
    const_slice_none_int_pos_9_none = PySlice_New( Py_None, const_int_pos_9, Py_None );
    const_str_digest_859981c7c1b5933339c0504fc3962cbe = UNSTREAM_STRING_ASCII( &constant_bin[ 207397 ], 25, 0 );
    const_str_digest_e391fbebd60c6bddbb3f1a25a164ed5b = UNSTREAM_STRING_ASCII( &constant_bin[ 207422 ], 30, 0 );
    const_str_plain__timezones = UNSTREAM_STRING_ASCII( &constant_bin[ 207452 ], 10, 1 );
    const_str_digest_d3fb8c2654c1918e87aa9f4d33369829 = UNSTREAM_STRING_ASCII( &constant_bin[ 207462 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_wslist_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_wslist_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_wslist = UNSTREAM_STRING_ASCII( &constant_bin[ 207488 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_wslist_tuple, 1, const_str_plain_wslist ); Py_INCREF( const_str_plain_wslist );
    const_str_digest_a535e8ccac160400e142228c364c6fd5 = UNSTREAM_STRING_ASCII( &constant_bin[ 207494 ], 19, 0 );
    const_tuple_str_plain_self_str_plain_sdlist_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sdlist_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sdlist_tuple, 1, const_str_plain_sdlist ); Py_INCREF( const_str_plain_sdlist );
    const_str_digest_f717fc6c600a521690d4c5fccca7e0c2 = UNSTREAM_STRING_ASCII( &constant_bin[ 73252 ], 2, 0 );
    const_str_plain__monthnames = UNSTREAM_STRING_ASCII( &constant_bin[ 207513 ], 11, 1 );
    const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 1, const_str_plain_oldpos ); Py_INCREF( const_str_plain_oldpos );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 2, const_str_plain_oldcl ); Py_INCREF( const_str_plain_oldcl );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 3, const_str_plain_plist ); Py_INCREF( const_str_plain_plist );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 4, const_str_plain_returnlist ); Py_INCREF( const_str_plain_returnlist );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 5, const_str_plain_addrspec ); Py_INCREF( const_str_plain_addrspec );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 6, const_str_plain_fieldlen ); Py_INCREF( const_str_plain_fieldlen );
    const_str_plain_routeaddr = UNSTREAM_STRING_ASCII( &constant_bin[ 207388 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 7, const_str_plain_routeaddr ); Py_INCREF( const_str_plain_routeaddr );
    const_str_digest_75b168fba240912f90890636ee280c57 = UNSTREAM_STRING_ASCII( &constant_bin[ 207524 ], 131, 0 );
    const_tuple_str_chr_91_str_digest_4785c769eb1af187e19d18bf425a5fd8_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_chr_91_str_digest_4785c769eb1af187e19d18bf425a5fd8_false_tuple, 0, const_str_chr_91 ); Py_INCREF( const_str_chr_91 );
    PyTuple_SET_ITEM( const_tuple_str_chr_91_str_digest_4785c769eb1af187e19d18bf425a5fd8_false_tuple, 1, const_str_digest_4785c769eb1af187e19d18bf425a5fd8 ); Py_INCREF( const_str_digest_4785c769eb1af187e19d18bf425a5fd8 );
    PyTuple_SET_ITEM( const_tuple_str_chr_91_str_digest_4785c769eb1af187e19d18bf425a5fd8_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_str_plain_LWS = UNSTREAM_STRING_ASCII( &constant_bin[ 207655 ], 3, 1 );
    const_str_digest_01ddeff52903ebf9203a5861272393bd = UNSTREAM_STRING_ASCII( &constant_bin[ 207658 ], 99, 0 );
    const_list_92cc68f28b76d52409e08ee8e9149d92_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_92cc68f28b76d52409e08ee8e9149d92_list, 0, const_str_plain_mktime_tz ); Py_INCREF( const_str_plain_mktime_tz );
    PyList_SET_ITEM( const_list_92cc68f28b76d52409e08ee8e9149d92_list, 1, const_str_plain_parsedate ); Py_INCREF( const_str_plain_parsedate );
    PyList_SET_ITEM( const_list_92cc68f28b76d52409e08ee8e9149d92_list, 2, const_str_plain_parsedate_tz ); Py_INCREF( const_str_plain_parsedate_tz );
    PyList_SET_ITEM( const_list_92cc68f28b76d52409e08ee8e9149d92_list, 3, const_str_plain_quote ); Py_INCREF( const_str_plain_quote );
    const_str_digest_4af07f555cf39ae48b35b4fa9abd691f = UNSTREAM_STRING_ASCII( &constant_bin[ 207757 ], 24, 0 );
    const_str_digest_3b87ab80344ea5bb4a5b4d311d476990 = UNSTREAM_STRING_ASCII( &constant_bin[ 207781 ], 23, 0 );
    const_str_plain_getaddrlist = UNSTREAM_STRING_ASCII( &constant_bin[ 205441 ], 11, 1 );
    const_tuple_str_plain_data_str_plain_t_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_t_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_t_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_tuple_str_empty_str_empty_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_str_empty_str_empty_tuple_tuple, 0, const_tuple_str_empty_str_empty_tuple ); Py_INCREF( const_tuple_str_empty_str_empty_tuple );
    const_str_digest_c187ccaa27f2071bab4a2e5face88f40 = UNSTREAM_STRING_ASCII( &constant_bin[ 207804 ], 69, 0 );
    const_tuple_str_plain_self_str_plain_plist_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_plist_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_plist_tuple, 1, const_str_plain_plist ); Py_INCREF( const_str_plain_plist );
    const_tuple_str_plain_self_str_plain_field_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_field_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_field_tuple, 1, const_str_plain_field ); Py_INCREF( const_str_plain_field );
    const_str_digest_a30142b5278125f0f4f41a86461cc83e = UNSTREAM_STRING_ASCII( &constant_bin[ 207873 ], 26, 0 );
    const_dict_45a77cbc356231bd0aa293d6947517e6 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 207899 ], 139 );
    const_str_plain_ad = UNSTREAM_STRING_ASCII( &constant_bin[ 106 ], 2, 1 );
    const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 1, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 2, const_str_plain_ad ); Py_INCREF( const_str_plain_ad );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email$_parseaddr( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_69fb19d3aa6279cbe2ef99fe6a94a898;
static PyCodeObject *codeobj_54f94964110b0ee723097125a093c7f9;
static PyCodeObject *codeobj_d0574a1829dd005417e9235480b7670b;
static PyCodeObject *codeobj_7f0942a92178632723119b9008c9e6c5;
static PyCodeObject *codeobj_139e18cdb8832f2936517b6b99b65f17;
static PyCodeObject *codeobj_9cd2a4a55cdf57a1310f1f0fb1cbe17c;
static PyCodeObject *codeobj_5c9f3829b782f69df77623ea3eba072a;
static PyCodeObject *codeobj_4cf17055adfd0e95338ede29ca6a03a0;
static PyCodeObject *codeobj_e47f0ce2e85bea29088830d47228bfd5;
static PyCodeObject *codeobj_64b23ab4f4713725dce2911cf3759818;
static PyCodeObject *codeobj_f2b160ec90053f8fc9b263226ecb1fd9;
static PyCodeObject *codeobj_3a58d9f6ce19d7e4ee6b8224bfc61719;
static PyCodeObject *codeobj_e84f218dc50f9bf66473540e434ff93a;
static PyCodeObject *codeobj_c50bc9954be99adbb1483a7fe2a04c3c;
static PyCodeObject *codeobj_f50ebf24bc5b7d7de57c2a671ed749cf;
static PyCodeObject *codeobj_ce45ecb5b37911262a25263894792c4d;
static PyCodeObject *codeobj_53094b3685836dae01ae2b2bdab05523;
static PyCodeObject *codeobj_a69690c49d527598d65a84a48fcbd118;
static PyCodeObject *codeobj_678ad22578a99dcdee788e85273dcc60;
static PyCodeObject *codeobj_9719e93c477622a8de27fa8a311ec6ac;
static PyCodeObject *codeobj_ff711bffdbb49ca377c255f7f751b274;
static PyCodeObject *codeobj_096f560ed75ba9326e22aedf229562a0;
static PyCodeObject *codeobj_9095c7a1ab2c03e52bfb8b4eddf59d2f;
static PyCodeObject *codeobj_e0651e3abcfd3db9aed53ec9cf27f4bf;
static PyCodeObject *codeobj_54a01e50dc2e9e6ce52703244df67744;
static PyCodeObject *codeobj_d4ff104122529263f8b7a7b9dbb1a618;
static PyCodeObject *codeobj_63ba698f660678e99fdb9ba2fc3a7282;
static PyCodeObject *codeobj_84293de29f22d1ca1124bb5ae553f860;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a535e8ccac160400e142228c364c6fd5 );
    codeobj_69fb19d3aa6279cbe2ef99fe6a94a898 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c92b31c4df3c7cc8607bc704b366a728, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_54f94964110b0ee723097125a093c7f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AddressList, 495, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d0574a1829dd005417e9235480b7670b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AddrlistClass, 203, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_7f0942a92178632723119b9008c9e6c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___add__, 507, const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_139e18cdb8832f2936517b6b99b65f17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 538, const_tuple_str_plain_self_str_plain_index_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9cd2a4a55cdf57a1310f1f0fb1cbe17c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iadd__, 516, const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c9f3829b782f69df77623ea3eba072a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 213, const_tuple_str_plain_self_str_plain_field_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4cf17055adfd0e95338ede29ca6a03a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 497, const_tuple_str_plain_self_str_plain_field_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e47f0ce2e85bea29088830d47228bfd5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___isub__, 531, const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64b23ab4f4713725dce2911cf3759818 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 504, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2b160ec90053f8fc9b263226ecb1fd9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___sub__, 523, const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a58d9f6ce19d7e4ee6b8224bfc61719 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parsedate_tz, 57, const_tuple_63d9fc85c617dee4a06256a091c2c106_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e84f218dc50f9bf66473540e434ff93a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getaddress, 260, const_tuple_f100089b35f6eb0ac65491ff7e7d5e0a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c50bc9954be99adbb1483a7fe2a04c3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getaddrlist, 246, const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f50ebf24bc5b7d7de57c2a671ed749cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getaddrspec, 351, const_tuple_15a20060772d61fe130db102860c505d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce45ecb5b37911262a25263894792c4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getatom, 452, const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53094b3685836dae01ae2b2bdab05523 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getcomment, 444, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a69690c49d527598d65a84a48fcbd118 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getdelimited, 403, const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_678ad22578a99dcdee788e85273dcc60 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getdomain, 384, const_tuple_str_plain_self_str_plain_sdlist_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9719e93c477622a8de27fa8a311ec6ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getdomainliteral, 448, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff711bffdbb49ca377c255f7f751b274 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getphraselist, 472, const_tuple_str_plain_self_str_plain_plist_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_096f560ed75ba9326e22aedf229562a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getquote, 440, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9095c7a1ab2c03e52bfb8b4eddf59d2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getrouteaddr, 319, const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e0651e3abcfd3db9aed53ec9cf27f4bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gotonext, 232, const_tuple_str_plain_self_str_plain_wslist_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_54a01e50dc2e9e6ce52703244df67744 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mktime_tz, 183, const_tuple_str_plain_data_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d4ff104122529263f8b7a7b9dbb1a618 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parsedate, 174, const_tuple_str_plain_data_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_63ba698f660678e99fdb9ba2fc3a7282 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parsedate_tz, 45, const_tuple_str_plain_data_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_84293de29f22d1ca1124bb5ae553f860 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_quote, 193, const_tuple_str_plain_str_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_10_getrouteaddr(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_11_getaddrspec(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_12_getdomain(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_13_getdelimited( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_14_getquote(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_15_getcomment(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_16_getdomainliteral(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_17_getatom( PyObject *defaults );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_18_getphraselist(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_19___init__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_1_parsedate_tz(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_20___len__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_21___add__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_22___iadd__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_23___sub__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_24___isub__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_25___getitem__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_2__parsedate_tz(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_3_parsedate(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_4_mktime_tz(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_5_quote(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_7_gotonext(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_8_getaddrlist(  );


static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_9_getaddress(  );


// The module function definitions.
static PyObject *impl_email$_parseaddr$$$function_1_parsedate_tz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_63ba698f660678e99fdb9ba2fc3a7282;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_63ba698f660678e99fdb9ba2fc3a7282 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_63ba698f660678e99fdb9ba2fc3a7282, codeobj_63ba698f660678e99fdb9ba2fc3a7282, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_63ba698f660678e99fdb9ba2fc3a7282 = cache_frame_63ba698f660678e99fdb9ba2fc3a7282;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_63ba698f660678e99fdb9ba2fc3a7282 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_63ba698f660678e99fdb9ba2fc3a7282 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__parsedate_tz );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parsedate_tz );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_parsedate_tz" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_63ba698f660678e99fdb9ba2fc3a7282->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_res );
        tmp_operand_name_1 = var_res;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_res );
        tmp_subscribed_name_1 = var_res;
        tmp_subscript_name_1 = const_int_pos_9;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 9 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            int tmp_ass_subscript_res_1;
            tmp_ass_subvalue_1 = const_int_0;
            CHECK_OBJECT( var_res );
            tmp_ass_subscribed_1 = var_res;
            tmp_ass_subscript_1 = const_int_pos_9;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 9, tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT( var_res );
        tmp_tuple_arg_1 = var_res;
        tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63ba698f660678e99fdb9ba2fc3a7282 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_63ba698f660678e99fdb9ba2fc3a7282 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63ba698f660678e99fdb9ba2fc3a7282 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_63ba698f660678e99fdb9ba2fc3a7282, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_63ba698f660678e99fdb9ba2fc3a7282->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_63ba698f660678e99fdb9ba2fc3a7282, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_63ba698f660678e99fdb9ba2fc3a7282,
        type_description_1,
        par_data,
        var_res
    );


    // Release cached frame.
    if ( frame_63ba698f660678e99fdb9ba2fc3a7282 == cache_frame_63ba698f660678e99fdb9ba2fc3a7282 )
    {
        Py_DECREF( frame_63ba698f660678e99fdb9ba2fc3a7282 );
    }
    cache_frame_63ba698f660678e99fdb9ba2fc3a7282 = NULL;

    assertFrameObject( frame_63ba698f660678e99fdb9ba2fc3a7282 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_1_parsedate_tz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_1_parsedate_tz );
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


static PyObject *impl_email$_parseaddr$$$function_2__parsedate_tz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *var_i = NULL;
    PyObject *var_stuff = NULL;
    PyObject *var_s = NULL;
    PyObject *var_dd = NULL;
    PyObject *var_mm = NULL;
    PyObject *var_yy = NULL;
    PyObject *var_tm = NULL;
    PyObject *var_tz = NULL;
    PyObject *var_thh = NULL;
    PyObject *var_tmm = NULL;
    PyObject *var_tss = NULL;
    PyObject *var_tzoffset = NULL;
    PyObject *var_tzsign = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3a58d9f6ce19d7e4ee6b8224bfc61719;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    static struct Nuitka_FrameObject *cache_frame_3a58d9f6ce19d7e4ee6b8224bfc61719 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a58d9f6ce19d7e4ee6b8224bfc61719, codeobj_3a58d9f6ce19d7e4ee6b8224bfc61719, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3a58d9f6ce19d7e4ee6b8224bfc61719 = cache_frame_3a58d9f6ce19d7e4ee6b8224bfc61719;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_data );
        tmp_operand_name_1 = par_data;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_data );
        tmp_called_instance_1 = par_data;
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 69;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_split );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert( old != NULL );
            par_data = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_data );
        tmp_subscribed_name_1 = par_data;
        tmp_subscript_name_1 = const_int_0;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        CHECK_OBJECT( par_data );
        tmp_subscribed_name_2 = par_data;
        tmp_subscript_name_2 = const_int_0;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 72;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__daynames );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__daynames );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_daynames" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT( par_data );
            tmp_delsubscr_target_1 = par_data;
            tmp_delsubscr_subscript_1 = const_int_0;
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_data );
            tmp_subscribed_name_3 = par_data;
            tmp_subscript_name_3 = const_int_0;
            tmp_called_instance_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 76;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_rfind, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_i == NULL );
            var_i = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_i );
            tmp_compexpr_left_2 = var_i;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_start_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                int tmp_ass_subscript_res_1;
                CHECK_OBJECT( par_data );
                tmp_subscribed_name_5 = par_data;
                tmp_subscript_name_4 = const_int_0;
                tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_4, 0 );
                if ( tmp_subscribed_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 78;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_i );
                tmp_left_name_1 = var_i;
                tmp_right_name_1 = const_int_pos_1;
                tmp_start_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_start_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_4 );

                    exception_lineno = 78;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_1 = Py_None;
                tmp_step_name_1 = Py_None;
                tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                Py_DECREF( tmp_start_name_1 );
                assert( !(tmp_subscript_name_5 == NULL) );
                tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_5 );
                Py_DECREF( tmp_subscribed_name_4 );
                Py_DECREF( tmp_subscript_name_5 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 78;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_data );
                tmp_ass_subscribed_1 = par_data;
                tmp_ass_subscript_1 = const_int_0;
                tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_ass_subscript_res_1 == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 78;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT( par_data );
            tmp_subscribed_name_6 = par_data;
            tmp_subscript_name_6 = const_int_0;
            tmp_called_instance_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 80;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_stuff == NULL );
            var_stuff = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( var_stuff );
            tmp_len_arg_2 = var_stuff;
            tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_pos_3;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                CHECK_OBJECT( var_stuff );
                tmp_left_name_2 = var_stuff;
                CHECK_OBJECT( par_data );
                tmp_subscribed_name_7 = par_data;
                tmp_subscript_name_7 = const_slice_int_pos_1_none_none;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 82;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 82;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_data;
                    assert( old != NULL );
                    par_data = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_3;
        if ( par_data == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_3 = par_data;
        tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_4;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            if ( par_data == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 84;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_8 = par_data;
            tmp_subscript_name_8 = const_int_pos_3;
            tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 3 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_s == NULL );
            var_s = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT( var_s );
            tmp_called_instance_6 = var_s;
            frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 85;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_chr_43_tuple, 0 ) );

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_i );
            tmp_compexpr_left_6 = var_i;
            tmp_compexpr_right_6 = const_int_neg_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_called_instance_7;
                CHECK_OBJECT( var_s );
                tmp_called_instance_7 = var_s;
                frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 87;
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 87;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_i;
                    assert( old != NULL );
                    var_i = tmp_assign_source_7;
                    Py_DECREF( old );
                }

            }
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_i );
            tmp_compexpr_left_7 = var_i;
            tmp_compexpr_right_7 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_list_element_1;
                PyObject *tmp_subscribed_name_9;
                PyObject *tmp_subscript_name_9;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                PyObject *tmp_subscribed_name_10;
                PyObject *tmp_subscript_name_10;
                PyObject *tmp_start_name_3;
                PyObject *tmp_stop_name_3;
                PyObject *tmp_step_name_3;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( var_s );
                tmp_subscribed_name_9 = var_s;
                tmp_start_name_2 = Py_None;
                CHECK_OBJECT( var_i );
                tmp_stop_name_2 = var_i;
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_9 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                assert( !(tmp_subscript_name_9 == NULL) );
                tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                Py_DECREF( tmp_subscript_name_9 );
                if ( tmp_list_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_ass_subvalue_2 = PyList_New( 2 );
                PyList_SET_ITEM( tmp_ass_subvalue_2, 0, tmp_list_element_1 );
                CHECK_OBJECT( var_s );
                tmp_subscribed_name_10 = var_s;
                CHECK_OBJECT( var_i );
                tmp_start_name_3 = var_i;
                tmp_stop_name_3 = Py_None;
                tmp_step_name_3 = Py_None;
                tmp_subscript_name_10 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                assert( !(tmp_subscript_name_10 == NULL) );
                tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
                Py_DECREF( tmp_subscript_name_10 );
                if ( tmp_list_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_ass_subvalue_2 );

                    exception_lineno = 89;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyList_SET_ITEM( tmp_ass_subvalue_2, 1, tmp_list_element_1 );
                if ( par_data == NULL )
                {
                    Py_DECREF( tmp_ass_subvalue_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 89;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_ass_subscribed_2 = par_data;
                tmp_ass_subscript_2 = const_slice_int_pos_3_none_none;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_called_instance_8;
                PyObject *tmp_call_result_2;
                if ( par_data == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 91;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_8 = par_data;
                frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 91;
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 91;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_end_8:;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_4;
        if ( par_data == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_4 = par_data;
        tmp_compexpr_left_8 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_pos_5;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        assert( !(tmp_res == -1) );
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        if ( par_data == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_11 = par_data;
        tmp_subscript_name_11 = const_slice_none_int_pos_5_none;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            par_data = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_data );
        tmp_iter_arg_1 = par_data;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
        if ( tmp_assign_source_10 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
        if ( tmp_assign_source_14 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 95;
                    goto try_except_handler_3;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
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

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        assert( var_dd == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_dd = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        assert( var_mm == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_mm = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;
        assert( var_yy == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_yy = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_4;
        assert( var_tm == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_tm = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_5;
        assert( var_tz == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_tz = tmp_assign_source_19;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT( var_mm );
        tmp_called_instance_9 = var_mm;
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 96;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_lower );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mm;
            assert( old != NULL );
            var_mm = tmp_assign_source_20;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_mm );
        tmp_compexpr_left_9 = var_mm;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__monthnames );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_monthnames" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_9 = tmp_mvar_value_2;
        tmp_res = PySequence_Contains( tmp_compexpr_right_9, tmp_compexpr_left_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_10;
            CHECK_OBJECT( var_mm );
            tmp_tuple_element_1 = var_mm;
            tmp_iter_arg_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_dd );
            tmp_called_instance_10 = var_dd;
            frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 98;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_lower );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 98;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_1 );
            tmp_assign_source_21 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 98;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 98;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
        }
        goto try_end_3;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_24 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_dd;
                assert( old != NULL );
                var_dd = tmp_assign_source_24;
                Py_INCREF( var_dd );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_mm;
                assert( old != NULL );
                var_mm = tmp_assign_source_25;
                Py_INCREF( var_mm );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( var_mm );
            tmp_compexpr_left_10 = var_mm;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__monthnames );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_monthnames" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 99;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_10 = tmp_mvar_value_3;
            tmp_res = PySequence_Contains( tmp_compexpr_right_10, tmp_compexpr_left_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
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
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_11:;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__monthnames );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_monthnames" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_4;
        CHECK_OBJECT( var_mm );
        tmp_args_element_name_1 = var_mm;
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_index, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mm;
            assert( old != NULL );
            var_mm = tmp_assign_source_26;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( var_mm );
        tmp_compexpr_left_11 = var_mm;
        tmp_compexpr_right_11 = const_int_pos_12;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_27;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_mm );
            tmp_left_name_4 = var_mm;
            tmp_right_name_4 = const_int_pos_12;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = tmp_left_name_4;
            var_mm = tmp_assign_source_27;

        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        CHECK_OBJECT( var_dd );
        tmp_subscribed_name_12 = var_dd;
        tmp_subscript_name_12 = const_int_neg_1;
        tmp_compexpr_left_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, -1 );
        if ( tmp_compexpr_left_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_12 = const_str_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        Py_DECREF( tmp_compexpr_left_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_28;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            CHECK_OBJECT( var_dd );
            tmp_subscribed_name_13 = var_dd;
            tmp_subscript_name_13 = const_slice_none_int_neg_1_none;
            tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_dd;
                assert( old != NULL );
                var_dd = tmp_assign_source_28;
                Py_DECREF( old );
            }

        }
        branch_no_13:;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT( var_yy );
        tmp_called_instance_12 = var_yy;
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 106;
        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_13 = var_i;
        tmp_compexpr_right_13 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( var_tm );
            tmp_tuple_element_2 = var_tm;
            tmp_iter_arg_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_yy );
            tmp_tuple_element_2 = var_yy;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_2 );
            tmp_assign_source_30 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            assert( !(tmp_assign_source_30 == NULL) );
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_30;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
            if ( tmp_assign_source_31 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 108;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
            if ( tmp_assign_source_32 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 108;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_32;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_33 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_yy;
                assert( old != NULL );
                var_yy = tmp_assign_source_33;
                Py_INCREF( var_yy );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_34 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_tm;
                assert( old != NULL );
                var_tm = tmp_assign_source_34;
                Py_INCREF( var_tm );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        CHECK_OBJECT( var_yy );
        tmp_subscribed_name_14 = var_yy;
        tmp_subscript_name_14 = const_int_neg_1;
        tmp_compexpr_left_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, -1 );
        if ( tmp_compexpr_left_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_14 = const_str_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        Py_DECREF( tmp_compexpr_left_14 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_35;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            CHECK_OBJECT( var_yy );
            tmp_subscribed_name_15 = var_yy;
            tmp_subscript_name_15 = const_slice_none_int_neg_1_none;
            tmp_assign_source_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_yy;
                assert( old != NULL );
                var_yy = tmp_assign_source_35;
                Py_DECREF( old );
            }

        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        if ( var_yy == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "yy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_16 = var_yy;
        tmp_subscript_name_16 = const_int_0;
        tmp_called_instance_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 0 );
        if ( tmp_called_instance_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 111;
        tmp_operand_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_isdigit );
        Py_DECREF( tmp_called_instance_13 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT( var_tz );
            tmp_tuple_element_3 = var_tz;
            tmp_iter_arg_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_3 );
            if ( var_yy == NULL )
            {
                Py_DECREF( tmp_iter_arg_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "yy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 112;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_tuple_element_3 = var_yy;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_3 );
            tmp_assign_source_36 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_4__source_iter == NULL );
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_36;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
            if ( tmp_assign_source_37 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__element_1 == NULL );
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
            if ( tmp_assign_source_38 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_9;
            }
            assert( tmp_tuple_unpack_4__element_2 == NULL );
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_38;
        }
        goto try_end_7;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        goto try_end_8;
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

        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_39 = tmp_tuple_unpack_4__element_1;
            {
                PyObject *old = var_yy;
                var_yy = tmp_assign_source_39;
                Py_INCREF( var_yy );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_40 = tmp_tuple_unpack_4__element_2;
            {
                PyObject *old = var_tz;
                assert( old != NULL );
                var_tz = tmp_assign_source_40;
                Py_INCREF( var_tz );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        CHECK_OBJECT( var_tm );
        tmp_subscribed_name_17 = var_tm;
        tmp_subscript_name_17 = const_int_neg_1;
        tmp_compexpr_left_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_17, tmp_subscript_name_17, -1 );
        if ( tmp_compexpr_left_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_15 = const_str_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        Py_DECREF( tmp_compexpr_left_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_41;
            PyObject *tmp_subscribed_name_18;
            PyObject *tmp_subscript_name_18;
            CHECK_OBJECT( var_tm );
            tmp_subscribed_name_18 = var_tm;
            tmp_subscript_name_18 = const_slice_none_int_neg_1_none;
            tmp_assign_source_41 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tm;
                assert( old != NULL );
                var_tm = tmp_assign_source_41;
                Py_DECREF( old );
            }

        }
        branch_no_17:;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_14;
        if ( var_tm == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = var_tm;
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 115;
        tmp_assign_source_42 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tm;
            var_tm = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT( var_tm );
        tmp_len_arg_5 = var_tm;
        tmp_compexpr_left_16 = BUILTIN_LEN( tmp_len_arg_5 );
        if ( tmp_compexpr_left_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_16 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        Py_DECREF( tmp_compexpr_left_16 );
        assert( !(tmp_res == -1) );
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
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT( var_tm );
            tmp_iter_arg_5 = var_tm;
            tmp_assign_source_43 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_10;
            }
            assert( tmp_tuple_unpack_5__source_iter == NULL );
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_43;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_44 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
            if ( tmp_assign_source_44 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_5__element_1 == NULL );
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
            if ( tmp_assign_source_45 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_11;
            }
            assert( tmp_tuple_unpack_5__element_2 == NULL );
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_45;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_5__source_iter;
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

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 117;
                        goto try_except_handler_11;
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

                type_description_1 = "oooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_11;
            }
        }
        goto try_end_9;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        try_end_9:;
        goto try_end_10;
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

        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_46 = tmp_tuple_unpack_5__element_1;
            assert( var_thh == NULL );
            Py_INCREF( tmp_assign_source_46 );
            var_thh = tmp_assign_source_46;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_47 = tmp_tuple_unpack_5__element_2;
            assert( var_tmm == NULL );
            Py_INCREF( tmp_assign_source_47 );
            var_tmm = tmp_assign_source_47;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = const_str_plain_0;
            assert( var_tss == NULL );
            Py_INCREF( tmp_assign_source_48 );
            var_tss = tmp_assign_source_48;
        }
        goto branch_end_18;
        branch_no_18:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            PyObject *tmp_len_arg_6;
            CHECK_OBJECT( var_tm );
            tmp_len_arg_6 = var_tm;
            tmp_compexpr_left_17 = BUILTIN_LEN( tmp_len_arg_6 );
            if ( tmp_compexpr_left_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_17 = const_int_pos_3;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
            Py_DECREF( tmp_compexpr_left_17 );
            assert( !(tmp_res == -1) );
            tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_19;
            }
            else
            {
                goto branch_no_19;
            }
            branch_yes_19:;
            // Tried code:
            {
                PyObject *tmp_assign_source_49;
                PyObject *tmp_iter_arg_6;
                CHECK_OBJECT( var_tm );
                tmp_iter_arg_6 = var_tm;
                tmp_assign_source_49 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_6 );
                if ( tmp_assign_source_49 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_12;
                }
                assert( tmp_tuple_unpack_6__source_iter == NULL );
                tmp_tuple_unpack_6__source_iter = tmp_assign_source_49;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_50;
                PyObject *tmp_unpack_14;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_14, 0, 3 );
                if ( tmp_assign_source_50 == NULL )
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


                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 120;
                    goto try_except_handler_13;
                }
                assert( tmp_tuple_unpack_6__element_1 == NULL );
                tmp_tuple_unpack_6__element_1 = tmp_assign_source_50;
            }
            {
                PyObject *tmp_assign_source_51;
                PyObject *tmp_unpack_15;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_15 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_15, 1, 3 );
                if ( tmp_assign_source_51 == NULL )
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


                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 120;
                    goto try_except_handler_13;
                }
                assert( tmp_tuple_unpack_6__element_2 == NULL );
                tmp_tuple_unpack_6__element_2 = tmp_assign_source_51;
            }
            {
                PyObject *tmp_assign_source_52;
                PyObject *tmp_unpack_16;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_16, 2, 3 );
                if ( tmp_assign_source_52 == NULL )
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


                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 120;
                    goto try_except_handler_13;
                }
                assert( tmp_tuple_unpack_6__element_3 == NULL );
                tmp_tuple_unpack_6__element_3 = tmp_assign_source_52;
            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
                tmp_iterator_name_3 = tmp_tuple_unpack_6__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 120;
                            goto try_except_handler_13;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 120;
                    goto try_except_handler_13;
                }
            }
            goto try_end_11;
            // Exception handler code:
            try_except_handler_13:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
            Py_DECREF( tmp_tuple_unpack_6__source_iter );
            tmp_tuple_unpack_6__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_12;
            // End of try:
            try_end_11:;
            goto try_end_12;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_tuple_unpack_6__element_1 );
            tmp_tuple_unpack_6__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_6__element_2 );
            tmp_tuple_unpack_6__element_2 = NULL;

            Py_XDECREF( tmp_tuple_unpack_6__element_3 );
            tmp_tuple_unpack_6__element_3 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto frame_exception_exit_1;
            // End of try:
            try_end_12:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
            Py_DECREF( tmp_tuple_unpack_6__source_iter );
            tmp_tuple_unpack_6__source_iter = NULL;

            {
                PyObject *tmp_assign_source_53;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
                tmp_assign_source_53 = tmp_tuple_unpack_6__element_1;
                assert( var_thh == NULL );
                Py_INCREF( tmp_assign_source_53 );
                var_thh = tmp_assign_source_53;
            }
            Py_XDECREF( tmp_tuple_unpack_6__element_1 );
            tmp_tuple_unpack_6__element_1 = NULL;

            {
                PyObject *tmp_assign_source_54;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
                tmp_assign_source_54 = tmp_tuple_unpack_6__element_2;
                assert( var_tmm == NULL );
                Py_INCREF( tmp_assign_source_54 );
                var_tmm = tmp_assign_source_54;
            }
            Py_XDECREF( tmp_tuple_unpack_6__element_2 );
            tmp_tuple_unpack_6__element_2 = NULL;

            {
                PyObject *tmp_assign_source_55;
                CHECK_OBJECT( tmp_tuple_unpack_6__element_3 );
                tmp_assign_source_55 = tmp_tuple_unpack_6__element_3;
                assert( var_tss == NULL );
                Py_INCREF( tmp_assign_source_55 );
                var_tss = tmp_assign_source_55;
            }
            Py_XDECREF( tmp_tuple_unpack_6__element_3 );
            tmp_tuple_unpack_6__element_3 = NULL;

            goto branch_end_19;
            branch_no_19:;
            {
                nuitka_bool tmp_condition_result_20;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_18;
                PyObject *tmp_compexpr_right_18;
                PyObject *tmp_len_arg_7;
                PyObject *tmp_compexpr_left_19;
                PyObject *tmp_compexpr_right_19;
                PyObject *tmp_subscribed_name_19;
                PyObject *tmp_subscript_name_19;
                CHECK_OBJECT( var_tm );
                tmp_len_arg_7 = var_tm;
                tmp_compexpr_left_18 = BUILTIN_LEN( tmp_len_arg_7 );
                if ( tmp_compexpr_left_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_18 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
                Py_DECREF( tmp_compexpr_left_18 );
                assert( !(tmp_res == -1) );
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
                tmp_compexpr_left_19 = const_str_dot;
                CHECK_OBJECT( var_tm );
                tmp_subscribed_name_19 = var_tm;
                tmp_subscript_name_19 = const_int_0;
                tmp_compexpr_right_19 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, 0 );
                if ( tmp_compexpr_right_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PySequence_Contains( tmp_compexpr_right_19, tmp_compexpr_left_19 );
                Py_DECREF( tmp_compexpr_right_19 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_20 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_20 = tmp_and_left_value_1;
                and_end_1:;
                if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_20;
                }
                else
                {
                    goto branch_no_20;
                }
                branch_yes_20:;
                {
                    PyObject *tmp_assign_source_56;
                    PyObject *tmp_called_instance_15;
                    PyObject *tmp_subscribed_name_20;
                    PyObject *tmp_subscript_name_20;
                    CHECK_OBJECT( var_tm );
                    tmp_subscribed_name_20 = var_tm;
                    tmp_subscript_name_20 = const_int_0;
                    tmp_called_instance_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 0 );
                    if ( tmp_called_instance_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 123;
                        type_description_1 = "oooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 123;
                    tmp_assign_source_56 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

                    Py_DECREF( tmp_called_instance_15 );
                    if ( tmp_assign_source_56 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 123;
                        type_description_1 = "oooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_tm;
                        assert( old != NULL );
                        var_tm = tmp_assign_source_56;
                        Py_DECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_21;
                    PyObject *tmp_compexpr_left_20;
                    PyObject *tmp_compexpr_right_20;
                    PyObject *tmp_len_arg_8;
                    CHECK_OBJECT( var_tm );
                    tmp_len_arg_8 = var_tm;
                    tmp_compexpr_left_20 = BUILTIN_LEN( tmp_len_arg_8 );
                    if ( tmp_compexpr_left_20 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "oooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_20 = const_int_pos_2;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_20, tmp_compexpr_right_20 );
                    Py_DECREF( tmp_compexpr_left_20 );
                    assert( !(tmp_res == -1) );
                    tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_21;
                    }
                    else
                    {
                        goto branch_no_21;
                    }
                    branch_yes_21:;
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_57;
                        PyObject *tmp_iter_arg_7;
                        CHECK_OBJECT( var_tm );
                        tmp_iter_arg_7 = var_tm;
                        tmp_assign_source_57 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_7 );
                        if ( tmp_assign_source_57 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 125;
                            type_description_1 = "oooooooooooooo";
                            goto try_except_handler_14;
                        }
                        assert( tmp_tuple_unpack_7__source_iter == NULL );
                        tmp_tuple_unpack_7__source_iter = tmp_assign_source_57;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_58;
                        PyObject *tmp_unpack_17;
                        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                        tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
                        tmp_assign_source_58 = UNPACK_NEXT( tmp_unpack_17, 0, 2 );
                        if ( tmp_assign_source_58 == NULL )
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


                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 125;
                            goto try_except_handler_15;
                        }
                        assert( tmp_tuple_unpack_7__element_1 == NULL );
                        tmp_tuple_unpack_7__element_1 = tmp_assign_source_58;
                    }
                    {
                        PyObject *tmp_assign_source_59;
                        PyObject *tmp_unpack_18;
                        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                        tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
                        tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_18, 1, 2 );
                        if ( tmp_assign_source_59 == NULL )
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


                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 125;
                            goto try_except_handler_15;
                        }
                        assert( tmp_tuple_unpack_7__element_2 == NULL );
                        tmp_tuple_unpack_7__element_2 = tmp_assign_source_59;
                    }
                    {
                        PyObject *tmp_iterator_name_4;
                        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
                        tmp_iterator_name_4 = tmp_tuple_unpack_7__source_iter;
                        // Check if iterator has left-over elements.
                        CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

                        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                                    type_description_1 = "oooooooooooooo";
                                    exception_lineno = 125;
                                    goto try_except_handler_15;
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

                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 125;
                            goto try_except_handler_15;
                        }
                    }
                    goto try_end_13;
                    // Exception handler code:
                    try_except_handler_15:;
                    exception_keeper_type_13 = exception_type;
                    exception_keeper_value_13 = exception_value;
                    exception_keeper_tb_13 = exception_tb;
                    exception_keeper_lineno_13 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
                    Py_DECREF( tmp_tuple_unpack_7__source_iter );
                    tmp_tuple_unpack_7__source_iter = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_13;
                    exception_value = exception_keeper_value_13;
                    exception_tb = exception_keeper_tb_13;
                    exception_lineno = exception_keeper_lineno_13;

                    goto try_except_handler_14;
                    // End of try:
                    try_end_13:;
                    goto try_end_14;
                    // Exception handler code:
                    try_except_handler_14:;
                    exception_keeper_type_14 = exception_type;
                    exception_keeper_value_14 = exception_value;
                    exception_keeper_tb_14 = exception_tb;
                    exception_keeper_lineno_14 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
                    tmp_tuple_unpack_7__element_1 = NULL;

                    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
                    tmp_tuple_unpack_7__element_2 = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_14;
                    exception_value = exception_keeper_value_14;
                    exception_tb = exception_keeper_tb_14;
                    exception_lineno = exception_keeper_lineno_14;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_14:;
                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
                    Py_DECREF( tmp_tuple_unpack_7__source_iter );
                    tmp_tuple_unpack_7__source_iter = NULL;

                    {
                        PyObject *tmp_assign_source_60;
                        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
                        tmp_assign_source_60 = tmp_tuple_unpack_7__element_1;
                        assert( var_thh == NULL );
                        Py_INCREF( tmp_assign_source_60 );
                        var_thh = tmp_assign_source_60;
                    }
                    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
                    tmp_tuple_unpack_7__element_1 = NULL;

                    {
                        PyObject *tmp_assign_source_61;
                        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
                        tmp_assign_source_61 = tmp_tuple_unpack_7__element_2;
                        assert( var_tmm == NULL );
                        Py_INCREF( tmp_assign_source_61 );
                        var_tmm = tmp_assign_source_61;
                    }
                    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
                    tmp_tuple_unpack_7__element_2 = NULL;

                    {
                        PyObject *tmp_assign_source_62;
                        tmp_assign_source_62 = const_int_0;
                        assert( var_tss == NULL );
                        Py_INCREF( tmp_assign_source_62 );
                        var_tss = tmp_assign_source_62;
                    }
                    goto branch_end_21;
                    branch_no_21:;
                    {
                        nuitka_bool tmp_condition_result_22;
                        PyObject *tmp_compexpr_left_21;
                        PyObject *tmp_compexpr_right_21;
                        PyObject *tmp_len_arg_9;
                        CHECK_OBJECT( var_tm );
                        tmp_len_arg_9 = var_tm;
                        tmp_compexpr_left_21 = BUILTIN_LEN( tmp_len_arg_9 );
                        if ( tmp_compexpr_left_21 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 127;
                            type_description_1 = "oooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_21 = const_int_pos_3;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_21, tmp_compexpr_right_21 );
                        Py_DECREF( tmp_compexpr_left_21 );
                        assert( !(tmp_res == -1) );
                        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_22;
                        }
                        else
                        {
                            goto branch_no_22;
                        }
                        branch_yes_22:;
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_63;
                            PyObject *tmp_iter_arg_8;
                            CHECK_OBJECT( var_tm );
                            tmp_iter_arg_8 = var_tm;
                            tmp_assign_source_63 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_8 );
                            if ( tmp_assign_source_63 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 128;
                                type_description_1 = "oooooooooooooo";
                                goto try_except_handler_16;
                            }
                            assert( tmp_tuple_unpack_8__source_iter == NULL );
                            tmp_tuple_unpack_8__source_iter = tmp_assign_source_63;
                        }
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_64;
                            PyObject *tmp_unpack_19;
                            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                            tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
                            tmp_assign_source_64 = UNPACK_NEXT( tmp_unpack_19, 0, 3 );
                            if ( tmp_assign_source_64 == NULL )
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


                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 128;
                                goto try_except_handler_17;
                            }
                            assert( tmp_tuple_unpack_8__element_1 == NULL );
                            tmp_tuple_unpack_8__element_1 = tmp_assign_source_64;
                        }
                        {
                            PyObject *tmp_assign_source_65;
                            PyObject *tmp_unpack_20;
                            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                            tmp_unpack_20 = tmp_tuple_unpack_8__source_iter;
                            tmp_assign_source_65 = UNPACK_NEXT( tmp_unpack_20, 1, 3 );
                            if ( tmp_assign_source_65 == NULL )
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


                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 128;
                                goto try_except_handler_17;
                            }
                            assert( tmp_tuple_unpack_8__element_2 == NULL );
                            tmp_tuple_unpack_8__element_2 = tmp_assign_source_65;
                        }
                        {
                            PyObject *tmp_assign_source_66;
                            PyObject *tmp_unpack_21;
                            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                            tmp_unpack_21 = tmp_tuple_unpack_8__source_iter;
                            tmp_assign_source_66 = UNPACK_NEXT( tmp_unpack_21, 2, 3 );
                            if ( tmp_assign_source_66 == NULL )
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


                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 128;
                                goto try_except_handler_17;
                            }
                            assert( tmp_tuple_unpack_8__element_3 == NULL );
                            tmp_tuple_unpack_8__element_3 = tmp_assign_source_66;
                        }
                        {
                            PyObject *tmp_iterator_name_5;
                            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
                            tmp_iterator_name_5 = tmp_tuple_unpack_8__source_iter;
                            // Check if iterator has left-over elements.
                            CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

                            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                                        type_description_1 = "oooooooooooooo";
                                        exception_lineno = 128;
                                        goto try_except_handler_17;
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

                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 128;
                                goto try_except_handler_17;
                            }
                        }
                        goto try_end_15;
                        // Exception handler code:
                        try_except_handler_17:;
                        exception_keeper_type_15 = exception_type;
                        exception_keeper_value_15 = exception_value;
                        exception_keeper_tb_15 = exception_tb;
                        exception_keeper_lineno_15 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
                        Py_DECREF( tmp_tuple_unpack_8__source_iter );
                        tmp_tuple_unpack_8__source_iter = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_15;
                        exception_value = exception_keeper_value_15;
                        exception_tb = exception_keeper_tb_15;
                        exception_lineno = exception_keeper_lineno_15;

                        goto try_except_handler_16;
                        // End of try:
                        try_end_15:;
                        goto try_end_16;
                        // Exception handler code:
                        try_except_handler_16:;
                        exception_keeper_type_16 = exception_type;
                        exception_keeper_value_16 = exception_value;
                        exception_keeper_tb_16 = exception_tb;
                        exception_keeper_lineno_16 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
                        tmp_tuple_unpack_8__element_1 = NULL;

                        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
                        tmp_tuple_unpack_8__element_2 = NULL;

                        Py_XDECREF( tmp_tuple_unpack_8__element_3 );
                        tmp_tuple_unpack_8__element_3 = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_16;
                        exception_value = exception_keeper_value_16;
                        exception_tb = exception_keeper_tb_16;
                        exception_lineno = exception_keeper_lineno_16;

                        goto frame_exception_exit_1;
                        // End of try:
                        try_end_16:;
                        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
                        Py_DECREF( tmp_tuple_unpack_8__source_iter );
                        tmp_tuple_unpack_8__source_iter = NULL;

                        {
                            PyObject *tmp_assign_source_67;
                            CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
                            tmp_assign_source_67 = tmp_tuple_unpack_8__element_1;
                            assert( var_thh == NULL );
                            Py_INCREF( tmp_assign_source_67 );
                            var_thh = tmp_assign_source_67;
                        }
                        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
                        tmp_tuple_unpack_8__element_1 = NULL;

                        {
                            PyObject *tmp_assign_source_68;
                            CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
                            tmp_assign_source_68 = tmp_tuple_unpack_8__element_2;
                            assert( var_tmm == NULL );
                            Py_INCREF( tmp_assign_source_68 );
                            var_tmm = tmp_assign_source_68;
                        }
                        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
                        tmp_tuple_unpack_8__element_2 = NULL;

                        {
                            PyObject *tmp_assign_source_69;
                            CHECK_OBJECT( tmp_tuple_unpack_8__element_3 );
                            tmp_assign_source_69 = tmp_tuple_unpack_8__element_3;
                            assert( var_tss == NULL );
                            Py_INCREF( tmp_assign_source_69 );
                            var_tss = tmp_assign_source_69;
                        }
                        Py_XDECREF( tmp_tuple_unpack_8__element_3 );
                        tmp_tuple_unpack_8__element_3 = NULL;

                        branch_no_22:;
                    }
                    branch_end_21:;
                }
                goto branch_end_20;
                branch_no_20:;
                tmp_return_value = Py_None;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_end_20:;
            }
            branch_end_19:;
        }
        branch_end_18:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_int_arg_1;
        if ( var_yy == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "yy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_int_arg_1 = var_yy;
        tmp_assign_source_70 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_yy;
            var_yy = tmp_assign_source_70;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_int_arg_2;
        if ( var_dd == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_int_arg_2 = var_dd;
        tmp_assign_source_71 = PyNumber_Int( tmp_int_arg_2 );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_dd;
            var_dd = tmp_assign_source_71;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_int_arg_3;
        if ( var_thh == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thh" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_int_arg_3 = var_thh;
        tmp_assign_source_72 = PyNumber_Int( tmp_int_arg_3 );
        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_thh;
            var_thh = tmp_assign_source_72;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_int_arg_4;
        if ( var_tmm == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tmm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_int_arg_4 = var_tmm;
        tmp_assign_source_73 = PyNumber_Int( tmp_int_arg_4 );
        if ( tmp_assign_source_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_tmm;
            var_tmm = tmp_assign_source_73;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_int_arg_5;
        if ( var_tss == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tss" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_int_arg_5 = var_tss;
        tmp_assign_source_74 = PyNumber_Int( tmp_int_arg_5 );
        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_tss;
            var_tss = tmp_assign_source_74;
            Py_XDECREF( old );
        }

    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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

    if ( exception_keeper_tb_17 == NULL )
    {
        exception_keeper_tb_17 = MAKE_TRACEBACK( frame_3a58d9f6ce19d7e4ee6b8224bfc61719, exception_keeper_lineno_17 );
    }
    else if ( exception_keeper_lineno_17 != 0 )
    {
        exception_keeper_tb_17 = ADD_TRACEBACK( exception_keeper_tb_17, frame_3a58d9f6ce19d7e4ee6b8224bfc61719, exception_keeper_lineno_17 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17 );
    PyException_SetTraceback( exception_keeper_value_17, (PyObject *)exception_keeper_tb_17 );
    PUBLISH_EXCEPTION( &exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        tmp_compexpr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_22 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_22, tmp_compexpr_right_22 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_23;
        }
        else
        {
            goto branch_no_23;
        }
        branch_yes_23:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_19;
        goto branch_end_23;
        branch_no_23:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 131;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame) frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_19;
        branch_end_23:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_2__parsedate_tz );
    return NULL;
    // Return handler code:
    try_return_handler_19:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_17:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        CHECK_OBJECT( var_yy );
        tmp_compexpr_left_23 = var_yy;
        tmp_compexpr_right_23 = const_int_pos_100;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_23, tmp_compexpr_right_23 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_24;
        }
        else
        {
            goto branch_no_24;
        }
        branch_yes_24:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_compexpr_left_24;
            PyObject *tmp_compexpr_right_24;
            CHECK_OBJECT( var_yy );
            tmp_compexpr_left_24 = var_yy;
            tmp_compexpr_right_24 = const_int_pos_68;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_24, tmp_compexpr_right_24 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_25;
            }
            else
            {
                goto branch_no_25;
            }
            branch_yes_25:;
            {
                PyObject *tmp_assign_source_75;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_yy );
                tmp_left_name_5 = var_yy;
                tmp_right_name_5 = const_int_pos_1900;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_75 = tmp_left_name_5;
                var_yy = tmp_assign_source_75;

            }
            goto branch_end_25;
            branch_no_25:;
            {
                PyObject *tmp_assign_source_76;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                CHECK_OBJECT( var_yy );
                tmp_left_name_6 = var_yy;
                tmp_right_name_6 = const_int_pos_2000;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 150;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_76 = tmp_left_name_6;
                var_yy = tmp_assign_source_76;

            }
            branch_end_25:;
        }
        branch_no_24:;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = Py_None;
        assert( var_tzoffset == NULL );
        Py_INCREF( tmp_assign_source_77 );
        var_tzoffset = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_16;
        CHECK_OBJECT( var_tz );
        tmp_called_instance_16 = var_tz;
        frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 152;
        tmp_assign_source_78 = CALL_METHOD_NO_ARGS( tmp_called_instance_16, const_str_plain_upper );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tz;
            assert( old != NULL );
            var_tz = tmp_assign_source_78;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( var_tz );
        tmp_compexpr_left_25 = var_tz;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__timezones );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__timezones );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_timezones" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_25 = tmp_mvar_value_5;
        tmp_res = PySequence_Contains( tmp_compexpr_right_25, tmp_compexpr_left_25 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_26 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_26;
        }
        else
        {
            goto branch_no_26;
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_subscribed_name_21;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_subscript_name_21;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__timezones );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__timezones );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_timezones" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 154;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_21 = tmp_mvar_value_6;
            CHECK_OBJECT( var_tz );
            tmp_subscript_name_21 = var_tz;
            tmp_assign_source_79 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
            if ( tmp_assign_source_79 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tzoffset;
                assert( old != NULL );
                var_tzoffset = tmp_assign_source_79;
                Py_DECREF( old );
            }

        }
        goto branch_end_26;
        branch_no_26:;
        // Tried code:
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_int_arg_6;
            CHECK_OBJECT( var_tz );
            tmp_int_arg_6 = var_tz;
            tmp_assign_source_80 = PyNumber_Int( tmp_int_arg_6 );
            if ( tmp_assign_source_80 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = var_tzoffset;
                assert( old != NULL );
                var_tzoffset = tmp_assign_source_80;
                Py_DECREF( old );
            }

        }
        goto try_end_18;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
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

        if ( exception_keeper_tb_19 == NULL )
        {
            exception_keeper_tb_19 = MAKE_TRACEBACK( frame_3a58d9f6ce19d7e4ee6b8224bfc61719, exception_keeper_lineno_19 );
        }
        else if ( exception_keeper_lineno_19 != 0 )
        {
            exception_keeper_tb_19 = ADD_TRACEBACK( exception_keeper_tb_19, frame_3a58d9f6ce19d7e4ee6b8224bfc61719, exception_keeper_lineno_19 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19 );
        PyException_SetTraceback( exception_keeper_value_19, (PyObject *)exception_keeper_tb_19 );
        PUBLISH_EXCEPTION( &exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_compexpr_left_26;
            PyObject *tmp_compexpr_right_26;
            tmp_compexpr_left_26 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_26 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_26, tmp_compexpr_right_26 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_21;
            }
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_21;
            }
            tmp_condition_result_27 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_27;
            }
            else
            {
                goto branch_no_27;
            }
            branch_yes_27:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 156;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame) frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_21;
            branch_no_27:;
        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto frame_exception_exit_1;
        // End of try:
        try_end_19:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_18;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_2__parsedate_tz );
        return NULL;
        // End of try:
        try_end_18:;
        {
            nuitka_bool tmp_condition_result_28;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_27;
            PyObject *tmp_compexpr_right_27;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_call_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_tzoffset );
            tmp_compexpr_left_27 = var_tzoffset;
            tmp_compexpr_right_27 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_27, tmp_compexpr_right_27 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "oooooooooooooo";
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
            CHECK_OBJECT( var_tz );
            tmp_called_instance_17 = var_tz;
            frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame.f_lineno = 160;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 160;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
            tmp_condition_result_28 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_28 = tmp_and_left_value_2;
            and_end_2:;
            if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_28;
            }
            else
            {
                goto branch_no_28;
            }
            branch_yes_28:;
            {
                PyObject *tmp_assign_source_81;
                tmp_assign_source_81 = Py_None;
                {
                    PyObject *old = var_tzoffset;
                    assert( old != NULL );
                    var_tzoffset = tmp_assign_source_81;
                    Py_INCREF( var_tzoffset );
                    Py_DECREF( old );
                }

            }
            branch_no_28:;
        }
        branch_end_26:;
    }
    {
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_3;
        if ( var_tzoffset == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzoffset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( var_tzoffset );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_29;
        }
        else
        {
            goto branch_no_29;
        }
        branch_yes_29:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_28;
            PyObject *tmp_compexpr_right_28;
            if ( var_tzoffset == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzoffset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 164;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_28 = var_tzoffset;
            tmp_compexpr_right_28 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_28, tmp_compexpr_right_28 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_30;
            }
            else
            {
                goto branch_no_30;
            }
            branch_yes_30:;
            {
                PyObject *tmp_assign_source_82;
                tmp_assign_source_82 = const_int_neg_1;
                assert( var_tzsign == NULL );
                Py_INCREF( tmp_assign_source_82 );
                var_tzsign = tmp_assign_source_82;
            }
            {
                PyObject *tmp_assign_source_83;
                PyObject *tmp_operand_name_4;
                if ( var_tzoffset == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzoffset" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 166;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_operand_name_4 = var_tzoffset;
                tmp_assign_source_83 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
                if ( tmp_assign_source_83 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_tzoffset;
                    var_tzoffset = tmp_assign_source_83;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_30;
            branch_no_30:;
            {
                PyObject *tmp_assign_source_84;
                tmp_assign_source_84 = const_int_pos_1;
                assert( var_tzsign == NULL );
                Py_INCREF( tmp_assign_source_84 );
                var_tzsign = tmp_assign_source_84;
            }
            branch_end_30:;
        }
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_tzsign );
            tmp_left_name_7 = var_tzsign;
            if ( var_tzoffset == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzoffset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_10 = var_tzoffset;
            tmp_right_name_8 = const_int_pos_100;
            tmp_left_name_9 = BINARY_OPERATION_FLOORDIV( tmp_left_name_10, tmp_right_name_8 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_9 = const_int_pos_3600;
            tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_tzoffset == NULL )
            {
                Py_DECREF( tmp_left_name_8 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzoffset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_12 = var_tzoffset;
            tmp_right_name_11 = const_int_pos_100;
            tmp_left_name_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_11 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_12 = const_int_pos_60;
            tmp_right_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_85 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_assign_source_85 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tzoffset;
                var_tzoffset = tmp_assign_source_85;
                Py_XDECREF( old );
            }

        }
        branch_no_29:;
    }
    {
        PyObject *tmp_list_element_2;
        if ( var_yy == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "yy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = var_yy;
        tmp_return_value = PyList_New( 10 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_2 );
        CHECK_OBJECT( var_mm );
        tmp_list_element_2 = var_mm;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 1, tmp_list_element_2 );
        CHECK_OBJECT( var_dd );
        tmp_list_element_2 = var_dd;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 2, tmp_list_element_2 );
        CHECK_OBJECT( var_thh );
        tmp_list_element_2 = var_thh;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 3, tmp_list_element_2 );
        CHECK_OBJECT( var_tmm );
        tmp_list_element_2 = var_tmm;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 4, tmp_list_element_2 );
        CHECK_OBJECT( var_tss );
        tmp_list_element_2 = var_tss;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 5, tmp_list_element_2 );
        tmp_list_element_2 = const_int_0;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 6, tmp_list_element_2 );
        tmp_list_element_2 = const_int_pos_1;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 7, tmp_list_element_2 );
        tmp_list_element_2 = const_int_neg_1;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 8, tmp_list_element_2 );
        if ( var_tzoffset == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzoffset" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = var_tzoffset;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_return_value, 9, tmp_list_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a58d9f6ce19d7e4ee6b8224bfc61719, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a58d9f6ce19d7e4ee6b8224bfc61719->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a58d9f6ce19d7e4ee6b8224bfc61719, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a58d9f6ce19d7e4ee6b8224bfc61719,
        type_description_1,
        par_data,
        var_i,
        var_stuff,
        var_s,
        var_dd,
        var_mm,
        var_yy,
        var_tm,
        var_tz,
        var_thh,
        var_tmm,
        var_tss,
        var_tzoffset,
        var_tzsign
    );


    // Release cached frame.
    if ( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 == cache_frame_3a58d9f6ce19d7e4ee6b8224bfc61719 )
    {
        Py_DECREF( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 );
    }
    cache_frame_3a58d9f6ce19d7e4ee6b8224bfc61719 = NULL;

    assertFrameObject( frame_3a58d9f6ce19d7e4ee6b8224bfc61719 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_2__parsedate_tz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_stuff );
    var_stuff = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_dd );
    var_dd = NULL;

    Py_XDECREF( var_mm );
    var_mm = NULL;

    Py_XDECREF( var_yy );
    var_yy = NULL;

    Py_XDECREF( var_tm );
    var_tm = NULL;

    Py_XDECREF( var_tz );
    var_tz = NULL;

    Py_XDECREF( var_thh );
    var_thh = NULL;

    Py_XDECREF( var_tmm );
    var_tmm = NULL;

    Py_XDECREF( var_tss );
    var_tss = NULL;

    Py_XDECREF( var_tzoffset );
    var_tzoffset = NULL;

    Py_XDECREF( var_tzsign );
    var_tzsign = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_stuff );
    var_stuff = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_dd );
    var_dd = NULL;

    Py_XDECREF( var_mm );
    var_mm = NULL;

    Py_XDECREF( var_yy );
    var_yy = NULL;

    Py_XDECREF( var_tm );
    var_tm = NULL;

    Py_XDECREF( var_tz );
    var_tz = NULL;

    Py_XDECREF( var_thh );
    var_thh = NULL;

    Py_XDECREF( var_tmm );
    var_tmm = NULL;

    Py_XDECREF( var_tss );
    var_tss = NULL;

    Py_XDECREF( var_tzoffset );
    var_tzoffset = NULL;

    Py_XDECREF( var_tzsign );
    var_tzsign = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_2__parsedate_tz );
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


static PyObject *impl_email$_parseaddr$$$function_3_parsedate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_d4ff104122529263f8b7a7b9dbb1a618;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d4ff104122529263f8b7a7b9dbb1a618 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d4ff104122529263f8b7a7b9dbb1a618, codeobj_d4ff104122529263f8b7a7b9dbb1a618, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_d4ff104122529263f8b7a7b9dbb1a618 = cache_frame_d4ff104122529263f8b7a7b9dbb1a618;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d4ff104122529263f8b7a7b9dbb1a618 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d4ff104122529263f8b7a7b9dbb1a618 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_parsedate_tz );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parsedate_tz );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parsedate_tz" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_d4ff104122529263f8b7a7b9dbb1a618->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_t == NULL );
        var_t = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_t );
        tmp_isinstance_inst_1 = var_t;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oo";
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_t );
            tmp_subscribed_name_1 = var_t;
            tmp_subscript_name_1 = const_slice_none_int_pos_9_none;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( var_t );
        tmp_return_value = var_t;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4ff104122529263f8b7a7b9dbb1a618 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4ff104122529263f8b7a7b9dbb1a618 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4ff104122529263f8b7a7b9dbb1a618 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d4ff104122529263f8b7a7b9dbb1a618, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d4ff104122529263f8b7a7b9dbb1a618->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d4ff104122529263f8b7a7b9dbb1a618, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d4ff104122529263f8b7a7b9dbb1a618,
        type_description_1,
        par_data,
        var_t
    );


    // Release cached frame.
    if ( frame_d4ff104122529263f8b7a7b9dbb1a618 == cache_frame_d4ff104122529263f8b7a7b9dbb1a618 )
    {
        Py_DECREF( frame_d4ff104122529263f8b7a7b9dbb1a618 );
    }
    cache_frame_d4ff104122529263f8b7a7b9dbb1a618 = NULL;

    assertFrameObject( frame_d4ff104122529263f8b7a7b9dbb1a618 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_3_parsedate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_3_parsedate );
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


static PyObject *impl_email$_parseaddr$$$function_4_mktime_tz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_54a01e50dc2e9e6ce52703244df67744;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54a01e50dc2e9e6ce52703244df67744 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54a01e50dc2e9e6ce52703244df67744, codeobj_54a01e50dc2e9e6ce52703244df67744, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_54a01e50dc2e9e6ce52703244df67744 = cache_frame_54a01e50dc2e9e6ce52703244df67744;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54a01e50dc2e9e6ce52703244df67744 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54a01e50dc2e9e6ce52703244df67744 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_data );
        tmp_subscribed_name_1 = par_data;
        tmp_subscript_name_1 = const_int_pos_9;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 9 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mktime );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_data );
            tmp_subscribed_name_2 = par_data;
            tmp_subscript_name_2 = const_slice_none_int_pos_8_none;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 187;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_tuple_int_neg_1_tuple;
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 187;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_54a01e50dc2e9e6ce52703244df67744->m_frame.f_lineno = 187;
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


                exception_lineno = 187;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_calendar );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calendar" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 189;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_data );
            tmp_args_element_name_2 = par_data;
            frame_54a01e50dc2e9e6ce52703244df67744->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_timegm, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_t == NULL );
            var_t = tmp_assign_source_1;
        }
        {
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_t );
            tmp_left_name_2 = var_t;
            CHECK_OBJECT( par_data );
            tmp_subscribed_name_3 = par_data;
            tmp_subscript_name_3 = const_int_pos_9;
            tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 9 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54a01e50dc2e9e6ce52703244df67744 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54a01e50dc2e9e6ce52703244df67744 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54a01e50dc2e9e6ce52703244df67744 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54a01e50dc2e9e6ce52703244df67744, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54a01e50dc2e9e6ce52703244df67744->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54a01e50dc2e9e6ce52703244df67744, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54a01e50dc2e9e6ce52703244df67744,
        type_description_1,
        par_data,
        var_t
    );


    // Release cached frame.
    if ( frame_54a01e50dc2e9e6ce52703244df67744 == cache_frame_54a01e50dc2e9e6ce52703244df67744 )
    {
        Py_DECREF( frame_54a01e50dc2e9e6ce52703244df67744 );
    }
    cache_frame_54a01e50dc2e9e6ce52703244df67744 = NULL;

    assertFrameObject( frame_54a01e50dc2e9e6ce52703244df67744 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_4_mktime_tz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_4_mktime_tz );
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


static PyObject *impl_email$_parseaddr$$$function_5_quote( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_str = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_84293de29f22d1ca1124bb5ae553f860;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84293de29f22d1ca1124bb5ae553f860 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_84293de29f22d1ca1124bb5ae553f860, codeobj_84293de29f22d1ca1124bb5ae553f860, module_email$_parseaddr, sizeof(void *) );
    frame_84293de29f22d1ca1124bb5ae553f860 = cache_frame_84293de29f22d1ca1124bb5ae553f860;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_84293de29f22d1ca1124bb5ae553f860 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_84293de29f22d1ca1124bb5ae553f860 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_str );
        tmp_called_instance_2 = par_str;
        frame_84293de29f22d1ca1124bb5ae553f860->m_frame.f_lineno = 200;
        tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_92_str_digest_7cb7e1a5659547478f12d8fe755efd75_tuple, 0 ) );

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_84293de29f22d1ca1124bb5ae553f860->m_frame.f_lineno = 200;
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_34_str_digest_c245c8a772b3a33119deac8565a08f57_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_84293de29f22d1ca1124bb5ae553f860 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_84293de29f22d1ca1124bb5ae553f860 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_84293de29f22d1ca1124bb5ae553f860 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_84293de29f22d1ca1124bb5ae553f860, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_84293de29f22d1ca1124bb5ae553f860->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_84293de29f22d1ca1124bb5ae553f860, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_84293de29f22d1ca1124bb5ae553f860,
        type_description_1,
        par_str
    );


    // Release cached frame.
    if ( frame_84293de29f22d1ca1124bb5ae553f860 == cache_frame_84293de29f22d1ca1124bb5ae553f860 )
    {
        Py_DECREF( frame_84293de29f22d1ca1124bb5ae553f860 );
    }
    cache_frame_84293de29f22d1ca1124bb5ae553f860 = NULL;

    assertFrameObject( frame_84293de29f22d1ca1124bb5ae553f860 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_5_quote );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_str );
    Py_DECREF( par_str );
    par_str = NULL;

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

    CHECK_OBJECT( (PyObject *)par_str );
    Py_DECREF( par_str );
    par_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_5_quote );
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


static PyObject *impl_email$_parseaddr$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_field = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5c9f3829b782f69df77623ea3eba072a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c9f3829b782f69df77623ea3eba072a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c9f3829b782f69df77623ea3eba072a, codeobj_5c9f3829b782f69df77623ea3eba072a, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_5c9f3829b782f69df77623ea3eba072a = cache_frame_5c9f3829b782f69df77623ea3eba072a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c9f3829b782f69df77623ea3eba072a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c9f3829b782f69df77623ea3eba072a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_str_digest_3e99414955bbcd4e76ce3f221ce9cb78;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_specials, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_str_digest_ac02ab0238280e341b2aff0eed15b128;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_LWS, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_str_digest_7ca129d2d421fe965ad48cbb290b579b;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_CR, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LWS );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CR );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_FWS, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_specials );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_LWS );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CR );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_atomends, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_atomends );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5c9f3829b782f69df77623ea3eba072a->m_frame.f_lineno = 228;
        tmp_assattr_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_dot_str_empty_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assattr_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_phraseends, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_field );
        tmp_assattr_name_8 = par_field;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_field, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_commentlist, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c9f3829b782f69df77623ea3eba072a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c9f3829b782f69df77623ea3eba072a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c9f3829b782f69df77623ea3eba072a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c9f3829b782f69df77623ea3eba072a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c9f3829b782f69df77623ea3eba072a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c9f3829b782f69df77623ea3eba072a,
        type_description_1,
        par_self,
        par_field
    );


    // Release cached frame.
    if ( frame_5c9f3829b782f69df77623ea3eba072a == cache_frame_5c9f3829b782f69df77623ea3eba072a )
    {
        Py_DECREF( frame_5c9f3829b782f69df77623ea3eba072a );
    }
    cache_frame_5c9f3829b782f69df77623ea3eba072a = NULL;

    assertFrameObject( frame_5c9f3829b782f69df77623ea3eba072a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_field );
    Py_DECREF( par_field );
    par_field = NULL;

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

    CHECK_OBJECT( (PyObject *)par_field );
    Py_DECREF( par_field );
    par_field = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_6___init__ );
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


static PyObject *impl_email$_parseaddr$$$function_7_gotonext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_wslist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_e0651e3abcfd3db9aed53ec9cf27f4bf;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e0651e3abcfd3db9aed53ec9cf27f4bf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_wslist == NULL );
        var_wslist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0651e3abcfd3db9aed53ec9cf27f4bf, codeobj_e0651e3abcfd3db9aed53ec9cf27f4bf, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_e0651e3abcfd3db9aed53ec9cf27f4bf = cache_frame_e0651e3abcfd3db9aed53ec9cf27f4bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0651e3abcfd3db9aed53ec9cf27f4bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0651e3abcfd3db9aed53ec9cf27f4bf ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pos );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oo";
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
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_LWS );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_str_digest_a6a8906f01df54038862927dd6004ba9;
        tmp_compexpr_right_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oo";
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 237;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_digest_a6a8906f01df54038862927dd6004ba9;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT( var_wslist );
                tmp_source_name_8 = var_wslist;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 238;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_field );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 238;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_pos );
                if ( tmp_subscript_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 238;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 238;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_e0651e3abcfd3db9aed53ec9cf27f4bf->m_frame.f_lineno = 238;
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


                    exception_lineno = 238;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_pos );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_2 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
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
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_field );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_pos );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_4 );

                exception_lineno = 240;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_str_chr_40;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_14;
                PyObject *tmp_source_name_15;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_commentlist );
                if ( tmp_source_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 241;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
                Py_DECREF( tmp_source_name_14 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 241;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_called_instance_1 = par_self;
                frame_e0651e3abcfd3db9aed53ec9cf27f4bf->m_frame.f_lineno = 241;
                tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getcomment );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 241;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_e0651e3abcfd3db9aed53ec9cf27f4bf->m_frame.f_lineno = 241;
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


                    exception_lineno = 241;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto branch_end_4;
            branch_no_4:;
            goto loop_end_1;
            branch_end_4:;
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EMPTYSTRING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_wslist );
        tmp_args_element_name_3 = var_wslist;
        frame_e0651e3abcfd3db9aed53ec9cf27f4bf->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0651e3abcfd3db9aed53ec9cf27f4bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0651e3abcfd3db9aed53ec9cf27f4bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0651e3abcfd3db9aed53ec9cf27f4bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0651e3abcfd3db9aed53ec9cf27f4bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0651e3abcfd3db9aed53ec9cf27f4bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0651e3abcfd3db9aed53ec9cf27f4bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e0651e3abcfd3db9aed53ec9cf27f4bf,
        type_description_1,
        par_self,
        var_wslist
    );


    // Release cached frame.
    if ( frame_e0651e3abcfd3db9aed53ec9cf27f4bf == cache_frame_e0651e3abcfd3db9aed53ec9cf27f4bf )
    {
        Py_DECREF( frame_e0651e3abcfd3db9aed53ec9cf27f4bf );
    }
    cache_frame_e0651e3abcfd3db9aed53ec9cf27f4bf = NULL;

    assertFrameObject( frame_e0651e3abcfd3db9aed53ec9cf27f4bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_7_gotonext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_wslist );
    Py_DECREF( var_wslist );
    var_wslist = NULL;

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

    CHECK_OBJECT( (PyObject *)var_wslist );
    Py_DECREF( var_wslist );
    var_wslist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_7_gotonext );
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


static PyObject *impl_email$_parseaddr$$$function_8_getaddrlist( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_result = NULL;
    PyObject *var_ad = NULL;
    struct Nuitka_FrameObject *frame_c50bc9954be99adbb1483a7fe2a04c3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c50bc9954be99adbb1483a7fe2a04c3c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c50bc9954be99adbb1483a7fe2a04c3c, codeobj_c50bc9954be99adbb1483a7fe2a04c3c, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c50bc9954be99adbb1483a7fe2a04c3c = cache_frame_c50bc9954be99adbb1483a7fe2a04c3c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c50bc9954be99adbb1483a7fe2a04c3c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c50bc9954be99adbb1483a7fe2a04c3c ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pos );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_c50bc9954be99adbb1483a7fe2a04c3c->m_frame.f_lineno = 253;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getaddress );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ad;
            var_ad = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_ad );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_ad );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 255;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_1 = var_result;
            CHECK_OBJECT( var_ad );
            tmp_right_name_1 = var_ad;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_1;
            var_result = tmp_assign_source_3;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = var_result;
            frame_c50bc9954be99adbb1483a7fe2a04c3c->m_frame.f_lineno = 257;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_tuple_str_empty_str_empty_tuple_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50bc9954be99adbb1483a7fe2a04c3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50bc9954be99adbb1483a7fe2a04c3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50bc9954be99adbb1483a7fe2a04c3c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c50bc9954be99adbb1483a7fe2a04c3c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c50bc9954be99adbb1483a7fe2a04c3c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c50bc9954be99adbb1483a7fe2a04c3c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c50bc9954be99adbb1483a7fe2a04c3c,
        type_description_1,
        par_self,
        var_result,
        var_ad
    );


    // Release cached frame.
    if ( frame_c50bc9954be99adbb1483a7fe2a04c3c == cache_frame_c50bc9954be99adbb1483a7fe2a04c3c )
    {
        Py_DECREF( frame_c50bc9954be99adbb1483a7fe2a04c3c );
    }
    cache_frame_c50bc9954be99adbb1483a7fe2a04c3c = NULL;

    assertFrameObject( frame_c50bc9954be99adbb1483a7fe2a04c3c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_8_getaddrlist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_ad );
    var_ad = NULL;

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

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_ad );
    var_ad = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_8_getaddrlist );
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


static PyObject *impl_email$_parseaddr$$$function_9_getaddress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_oldpos = NULL;
    PyObject *var_oldcl = NULL;
    PyObject *var_plist = NULL;
    PyObject *var_returnlist = NULL;
    PyObject *var_addrspec = NULL;
    PyObject *var_fieldlen = NULL;
    PyObject *var_routeaddr = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_attr_4__end = NULL;
    PyObject *tmp_inplace_assign_attr_4__start = NULL;
    struct Nuitka_FrameObject *frame_e84f218dc50f9bf66473540e434ff93a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e84f218dc50f9bf66473540e434ff93a = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e84f218dc50f9bf66473540e434ff93a, codeobj_e84f218dc50f9bf66473540e434ff93a, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e84f218dc50f9bf66473540e434ff93a = cache_frame_e84f218dc50f9bf66473540e434ff93a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e84f218dc50f9bf66473540e434ff93a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e84f218dc50f9bf66473540e434ff93a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_commentlist, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 263;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_gotonext );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pos );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_oldpos == NULL );
        var_oldpos = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_commentlist );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_oldcl == NULL );
        var_oldcl = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 267;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getphraselist );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_plist == NULL );
        var_plist = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 269;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_gotonext );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New( 0 );
        assert( var_returnlist == NULL );
        var_returnlist = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pos );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 272;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 272;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "oooooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_plist );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_plist );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 274;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_list_element_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPACE" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 275;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_1;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 275;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_commentlist );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 275;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 275;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 275;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_list_element_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_plist );
                tmp_subscribed_name_1 = var_plist;
                tmp_subscript_name_1 = const_int_0;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_list_element_1 );

                    exception_lineno = 275;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
                tmp_assign_source_5 = PyList_New( 1 );
                PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
                {
                    PyObject *old = var_returnlist;
                    assert( old != NULL );
                    var_returnlist = tmp_assign_source_5;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 277;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 277;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 277;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_str_digest_f717fc6c600a521690d4c5fccca7e0c2;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 277;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( var_oldpos );
                tmp_assattr_name_2 = var_oldpos;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                CHECK_OBJECT( var_oldcl );
                tmp_assattr_name_3 = var_oldcl;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_commentlist, tmp_assattr_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 281;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_called_instance_4;
                CHECK_OBJECT( par_self );
                tmp_called_instance_4 = par_self;
                frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 282;
                tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getaddrspec );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 282;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_addrspec == NULL );
                var_addrspec = tmp_assign_source_6;
            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_list_element_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_source_name_10;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPACE" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 283;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_join );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 283;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_commentlist );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 283;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 283;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 283;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_list_element_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var_addrspec );
                tmp_tuple_element_2 = var_addrspec;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_2 );
                tmp_assign_source_7 = PyList_New( 1 );
                PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_2 );
                {
                    PyObject *old = var_returnlist;
                    assert( old != NULL );
                    var_returnlist = tmp_assign_source_7;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_12;
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_field );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_pos );
                if ( tmp_subscript_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 285;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = const_str_chr_58;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "oooooooo";
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
                    PyObject *tmp_assign_source_8;
                    tmp_assign_source_8 = PyList_New( 0 );
                    {
                        PyObject *old = var_returnlist;
                        assert( old != NULL );
                        var_returnlist = tmp_assign_source_8;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_len_arg_2;
                    PyObject *tmp_source_name_13;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_13 = par_self;
                    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_field );
                    if ( tmp_len_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_2 );
                    Py_DECREF( tmp_len_arg_2 );
                    if ( tmp_assign_source_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_fieldlen == NULL );
                    var_fieldlen = tmp_assign_source_9;
                }
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_source_name_14;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_14 = par_self;
                    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_pos );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 290;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_inplace_assign_attr_1__start == NULL );
                    tmp_inplace_assign_attr_1__start = tmp_assign_source_10;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                    tmp_right_name_1 = const_int_pos_1;
                    tmp_assign_source_11 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 290;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    assert( tmp_inplace_assign_attr_1__end == NULL );
                    tmp_inplace_assign_attr_1__end = tmp_assign_source_11;
                }
                // Tried code:
                {
                    PyObject *tmp_assattr_name_4;
                    PyObject *tmp_assattr_target_4;
                    CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
                    tmp_assattr_name_4 = tmp_inplace_assign_attr_1__end;
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_4 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_pos, tmp_assattr_name_4 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 290;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }
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

                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
                Py_DECREF( tmp_inplace_assign_attr_1__end );
                tmp_inplace_assign_attr_1__end = NULL;

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

                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
                Py_DECREF( tmp_inplace_assign_attr_1__start );
                tmp_inplace_assign_attr_1__start = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto frame_exception_exit_1;
                // End of try:
                try_end_2:;
                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
                Py_DECREF( tmp_inplace_assign_attr_1__end );
                tmp_inplace_assign_attr_1__end = NULL;

                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
                Py_DECREF( tmp_inplace_assign_attr_1__start );
                tmp_inplace_assign_attr_1__start = NULL;

                loop_start_1:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_len_arg_3;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pos );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 291;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_field );
                    if ( tmp_len_arg_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 291;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_3 );
                    Py_DECREF( tmp_len_arg_3 );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 291;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_operand_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 291;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                    Py_DECREF( tmp_operand_name_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 291;
                        type_description_1 = "oooooooo";
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
                    PyObject *tmp_called_instance_5;
                    PyObject *tmp_call_result_3;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_5 = par_self;
                    frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 292;
                    tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_gotonext );
                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 292;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                {
                    nuitka_bool tmp_condition_result_6;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_19;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_17 = par_self;
                    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_pos );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 293;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_fieldlen );
                    tmp_compexpr_right_5 = var_fieldlen;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 293;
                        type_description_1 = "oooooooo";
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
                    CHECK_OBJECT( par_self );
                    tmp_source_name_18 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_field );
                    if ( tmp_subscribed_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 293;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_19 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_pos );
                    if ( tmp_subscript_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscribed_name_4 );

                        exception_lineno = 293;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    Py_DECREF( tmp_subscribed_name_4 );
                    Py_DECREF( tmp_subscript_name_4 );
                    if ( tmp_compexpr_left_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 293;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_6 = const_str_chr_59;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    Py_DECREF( tmp_compexpr_left_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 293;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_6 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_6 = tmp_and_left_value_1;
                    and_end_1:;
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
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_source_name_20;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_20 = par_self;
                        tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_pos );
                        if ( tmp_assign_source_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 294;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( tmp_inplace_assign_attr_2__start == NULL );
                        tmp_inplace_assign_attr_2__start = tmp_assign_source_12;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                        tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                        tmp_right_name_2 = const_int_pos_1;
                        tmp_assign_source_13 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
                        if ( tmp_assign_source_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 294;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_4;
                        }
                        assert( tmp_inplace_assign_attr_2__end == NULL );
                        tmp_inplace_assign_attr_2__end = tmp_assign_source_13;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_5;
                        PyObject *tmp_assattr_target_5;
                        CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                        tmp_assattr_name_5 = tmp_inplace_assign_attr_2__end;
                        CHECK_OBJECT( par_self );
                        tmp_assattr_target_5 = par_self;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 294;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_5;
                        }
                    }
                    goto try_end_3;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
                    Py_DECREF( tmp_inplace_assign_attr_2__end );
                    tmp_inplace_assign_attr_2__end = NULL;

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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
                    Py_DECREF( tmp_inplace_assign_attr_2__start );
                    tmp_inplace_assign_attr_2__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_4;
                    exception_value = exception_keeper_value_4;
                    exception_tb = exception_keeper_tb_4;
                    exception_lineno = exception_keeper_lineno_4;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_4:;
                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
                    Py_DECREF( tmp_inplace_assign_attr_2__end );
                    tmp_inplace_assign_attr_2__end = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
                    Py_DECREF( tmp_inplace_assign_attr_2__start );
                    tmp_inplace_assign_attr_2__start = NULL;

                    goto loop_end_1;
                    branch_no_6:;
                }
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_called_instance_6;
                    CHECK_OBJECT( var_returnlist );
                    tmp_left_name_3 = var_returnlist;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_6 = par_self;
                    frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 296;
                    tmp_right_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getaddress );
                    if ( tmp_right_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 296;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_right_name_3 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 296;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_returnlist;
                        assert( old != NULL );
                        var_returnlist = tmp_assign_source_14;
                        Py_DECREF( old );
                    }

                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 291;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                goto loop_start_1;
                loop_end_1:;
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_7;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_subscript_name_5;
                    PyObject *tmp_source_name_22;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_21 = par_self;
                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_field );
                    if ( tmp_subscribed_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 298;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_22 = par_self;
                    tmp_subscript_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_pos );
                    if ( tmp_subscript_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscribed_name_5 );

                        exception_lineno = 298;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                    Py_DECREF( tmp_subscribed_name_5 );
                    Py_DECREF( tmp_subscript_name_5 );
                    if ( tmp_compexpr_left_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 298;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_7 = const_str_chr_60;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    Py_DECREF( tmp_compexpr_left_7 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 298;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
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
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_called_instance_7;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_7 = par_self;
                        frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 300;
                        tmp_assign_source_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_getrouteaddr );
                        if ( tmp_assign_source_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 300;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_routeaddr == NULL );
                        var_routeaddr = tmp_assign_source_15;
                    }
                    {
                        nuitka_bool tmp_condition_result_8;
                        PyObject *tmp_source_name_23;
                        PyObject *tmp_attribute_value_1;
                        int tmp_truth_name_2;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_23 = par_self;
                        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_commentlist );
                        if ( tmp_attribute_value_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 302;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_1 );
                        if ( tmp_truth_name_2 == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_attribute_value_1 );

                            exception_lineno = 302;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        Py_DECREF( tmp_attribute_value_1 );
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
                            PyObject *tmp_assign_source_16;
                            PyObject *tmp_list_element_3;
                            PyObject *tmp_tuple_element_3;
                            PyObject *tmp_left_name_4;
                            PyObject *tmp_left_name_5;
                            PyObject *tmp_left_name_6;
                            PyObject *tmp_called_instance_8;
                            PyObject *tmp_mvar_value_3;
                            PyObject *tmp_args_element_name_3;
                            PyObject *tmp_right_name_4;
                            PyObject *tmp_right_name_5;
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_24;
                            PyObject *tmp_args_element_name_4;
                            PyObject *tmp_source_name_25;
                            PyObject *tmp_right_name_6;
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE );

                            if (unlikely( tmp_mvar_value_3 == NULL ))
                            {
                                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE );
                            }

                            if ( tmp_mvar_value_3 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPACE" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 303;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_instance_8 = tmp_mvar_value_3;
                            CHECK_OBJECT( var_plist );
                            tmp_args_element_name_3 = var_plist;
                            frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 303;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_3 };
                                tmp_left_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_join, call_args );
                            }

                            if ( tmp_left_name_6 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 303;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_right_name_4 = const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a;
                            tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_6, tmp_right_name_4 );
                            Py_DECREF( tmp_left_name_6 );
                            if ( tmp_left_name_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 303;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_source_name_24 = const_str_space;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_join );
                            assert( !(tmp_called_name_3 == NULL) );
                            CHECK_OBJECT( par_self );
                            tmp_source_name_25 = par_self;
                            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_commentlist );
                            if ( tmp_args_element_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_left_name_5 );
                                Py_DECREF( tmp_called_name_3 );

                                exception_lineno = 304;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 304;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_4 };
                                tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                            }

                            Py_DECREF( tmp_called_name_3 );
                            Py_DECREF( tmp_args_element_name_4 );
                            if ( tmp_right_name_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_left_name_5 );

                                exception_lineno = 304;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                            Py_DECREF( tmp_left_name_5 );
                            Py_DECREF( tmp_right_name_5 );
                            if ( tmp_left_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 303;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_right_name_6 = const_str_chr_41;
                            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_4, tmp_right_name_6 );
                            Py_DECREF( tmp_left_name_4 );
                            if ( tmp_tuple_element_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 304;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_list_element_3 = PyTuple_New( 2 );
                            PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_3 );
                            CHECK_OBJECT( var_routeaddr );
                            tmp_tuple_element_3 = var_routeaddr;
                            Py_INCREF( tmp_tuple_element_3 );
                            PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_3 );
                            tmp_assign_source_16 = PyList_New( 1 );
                            PyList_SET_ITEM( tmp_assign_source_16, 0, tmp_list_element_3 );
                            {
                                PyObject *old = var_returnlist;
                                assert( old != NULL );
                                var_returnlist = tmp_assign_source_16;
                                Py_DECREF( old );
                            }

                        }
                        goto branch_end_8;
                        branch_no_8:;
                        {
                            PyObject *tmp_assign_source_17;
                            PyObject *tmp_list_element_4;
                            PyObject *tmp_tuple_element_4;
                            PyObject *tmp_called_instance_9;
                            PyObject *tmp_mvar_value_4;
                            PyObject *tmp_args_element_name_5;
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE );

                            if (unlikely( tmp_mvar_value_4 == NULL ))
                            {
                                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE );
                            }

                            if ( tmp_mvar_value_4 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPACE" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 306;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_instance_9 = tmp_mvar_value_4;
                            CHECK_OBJECT( var_plist );
                            tmp_args_element_name_5 = var_plist;
                            frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 306;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_5 };
                                tmp_tuple_element_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_join, call_args );
                            }

                            if ( tmp_tuple_element_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 306;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_list_element_4 = PyTuple_New( 2 );
                            PyTuple_SET_ITEM( tmp_list_element_4, 0, tmp_tuple_element_4 );
                            CHECK_OBJECT( var_routeaddr );
                            tmp_tuple_element_4 = var_routeaddr;
                            Py_INCREF( tmp_tuple_element_4 );
                            PyTuple_SET_ITEM( tmp_list_element_4, 1, tmp_tuple_element_4 );
                            tmp_assign_source_17 = PyList_New( 1 );
                            PyList_SET_ITEM( tmp_assign_source_17, 0, tmp_list_element_4 );
                            {
                                PyObject *old = var_returnlist;
                                assert( old != NULL );
                                var_returnlist = tmp_assign_source_17;
                                Py_DECREF( old );
                            }

                        }
                        branch_end_8:;
                    }
                    goto branch_end_7;
                    branch_no_7:;
                    {
                        nuitka_bool tmp_condition_result_9;
                        int tmp_truth_name_3;
                        CHECK_OBJECT( var_plist );
                        tmp_truth_name_3 = CHECK_IF_TRUE( var_plist );
                        if ( tmp_truth_name_3 == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 309;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            PyObject *tmp_assign_source_18;
                            PyObject *tmp_list_element_5;
                            PyObject *tmp_tuple_element_5;
                            PyObject *tmp_called_name_4;
                            PyObject *tmp_source_name_26;
                            PyObject *tmp_mvar_value_5;
                            PyObject *tmp_args_element_name_6;
                            PyObject *tmp_source_name_27;
                            PyObject *tmp_subscribed_name_6;
                            PyObject *tmp_subscript_name_6;
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE );

                            if (unlikely( tmp_mvar_value_5 == NULL ))
                            {
                                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE );
                            }

                            if ( tmp_mvar_value_5 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPACE" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_26 = tmp_mvar_value_5;
                            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_join );
                            if ( tmp_called_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_self );
                            tmp_source_name_27 = par_self;
                            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_commentlist );
                            if ( tmp_args_element_name_6 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_4 );

                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 310;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_6 };
                                tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                            }

                            Py_DECREF( tmp_called_name_4 );
                            Py_DECREF( tmp_args_element_name_6 );
                            if ( tmp_tuple_element_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_list_element_5 = PyTuple_New( 2 );
                            PyTuple_SET_ITEM( tmp_list_element_5, 0, tmp_tuple_element_5 );
                            CHECK_OBJECT( var_plist );
                            tmp_subscribed_name_6 = var_plist;
                            tmp_subscript_name_6 = const_int_0;
                            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
                            if ( tmp_tuple_element_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_list_element_5 );

                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            PyTuple_SET_ITEM( tmp_list_element_5, 1, tmp_tuple_element_5 );
                            tmp_assign_source_18 = PyList_New( 1 );
                            PyList_SET_ITEM( tmp_assign_source_18, 0, tmp_list_element_5 );
                            {
                                PyObject *old = var_returnlist;
                                assert( old != NULL );
                                var_returnlist = tmp_assign_source_18;
                                Py_DECREF( old );
                            }

                        }
                        goto branch_end_9;
                        branch_no_9:;
                        {
                            nuitka_bool tmp_condition_result_10;
                            PyObject *tmp_compexpr_left_8;
                            PyObject *tmp_compexpr_right_8;
                            PyObject *tmp_subscribed_name_7;
                            PyObject *tmp_source_name_28;
                            PyObject *tmp_subscript_name_7;
                            PyObject *tmp_source_name_29;
                            PyObject *tmp_source_name_30;
                            CHECK_OBJECT( par_self );
                            tmp_source_name_28 = par_self;
                            tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_field );
                            if ( tmp_subscribed_name_7 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 311;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_self );
                            tmp_source_name_29 = par_self;
                            tmp_subscript_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_pos );
                            if ( tmp_subscript_name_7 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_subscribed_name_7 );

                                exception_lineno = 311;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                            Py_DECREF( tmp_subscribed_name_7 );
                            Py_DECREF( tmp_subscript_name_7 );
                            if ( tmp_compexpr_left_8 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 311;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_self );
                            tmp_source_name_30 = par_self;
                            tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_specials );
                            if ( tmp_compexpr_right_8 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_compexpr_left_8 );

                                exception_lineno = 311;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
                            Py_DECREF( tmp_compexpr_left_8 );
                            Py_DECREF( tmp_compexpr_right_8 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 311;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                                PyObject *tmp_assign_source_19;
                                PyObject *tmp_source_name_31;
                                CHECK_OBJECT( par_self );
                                tmp_source_name_31 = par_self;
                                tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_pos );
                                if ( tmp_assign_source_19 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 312;
                                    type_description_1 = "oooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( tmp_inplace_assign_attr_3__start == NULL );
                                tmp_inplace_assign_attr_3__start = tmp_assign_source_19;
                            }
                            // Tried code:
                            {
                                PyObject *tmp_assign_source_20;
                                PyObject *tmp_left_name_7;
                                PyObject *tmp_right_name_7;
                                CHECK_OBJECT( tmp_inplace_assign_attr_3__start );
                                tmp_left_name_7 = tmp_inplace_assign_attr_3__start;
                                tmp_right_name_7 = const_int_pos_1;
                                tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7 );
                                if ( tmp_assign_source_20 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 312;
                                    type_description_1 = "oooooooo";
                                    goto try_except_handler_6;
                                }
                                assert( tmp_inplace_assign_attr_3__end == NULL );
                                tmp_inplace_assign_attr_3__end = tmp_assign_source_20;
                            }
                            // Tried code:
                            {
                                PyObject *tmp_assattr_name_6;
                                PyObject *tmp_assattr_target_6;
                                CHECK_OBJECT( tmp_inplace_assign_attr_3__end );
                                tmp_assattr_name_6 = tmp_inplace_assign_attr_3__end;
                                CHECK_OBJECT( par_self );
                                tmp_assattr_target_6 = par_self;
                                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_pos, tmp_assattr_name_6 );
                                if ( tmp_result == false )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 312;
                                    type_description_1 = "oooooooo";
                                    goto try_except_handler_7;
                                }
                            }
                            goto try_end_5;
                            // Exception handler code:
                            try_except_handler_7:;
                            exception_keeper_type_5 = exception_type;
                            exception_keeper_value_5 = exception_value;
                            exception_keeper_tb_5 = exception_tb;
                            exception_keeper_lineno_5 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
                            Py_DECREF( tmp_inplace_assign_attr_3__end );
                            tmp_inplace_assign_attr_3__end = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_5;
                            exception_value = exception_keeper_value_5;
                            exception_tb = exception_keeper_tb_5;
                            exception_lineno = exception_keeper_lineno_5;

                            goto try_except_handler_6;
                            // End of try:
                            try_end_5:;
                            goto try_end_6;
                            // Exception handler code:
                            try_except_handler_6:;
                            exception_keeper_type_6 = exception_type;
                            exception_keeper_value_6 = exception_value;
                            exception_keeper_tb_6 = exception_tb;
                            exception_keeper_lineno_6 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
                            Py_DECREF( tmp_inplace_assign_attr_3__start );
                            tmp_inplace_assign_attr_3__start = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_6;
                            exception_value = exception_keeper_value_6;
                            exception_tb = exception_keeper_tb_6;
                            exception_lineno = exception_keeper_lineno_6;

                            goto frame_exception_exit_1;
                            // End of try:
                            try_end_6:;
                            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
                            Py_DECREF( tmp_inplace_assign_attr_3__end );
                            tmp_inplace_assign_attr_3__end = NULL;

                            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
                            Py_DECREF( tmp_inplace_assign_attr_3__start );
                            tmp_inplace_assign_attr_3__start = NULL;

                            branch_no_10:;
                        }
                        branch_end_9:;
                    }
                    branch_end_7:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_10 = par_self;
        frame_e84f218dc50f9bf66473540e434ff93a->m_frame.f_lineno = 314;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_gotonext );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_source_name_32;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_source_name_33;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_source_name_34;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_source_name_35;
        CHECK_OBJECT( par_self );
        tmp_source_name_32 = par_self;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_pos );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_33 = par_self;
        tmp_len_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_field );
        if ( tmp_len_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_9 );

            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = BUILTIN_LEN( tmp_len_arg_4 );
        Py_DECREF( tmp_len_arg_4 );
        if ( tmp_compexpr_right_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_9 );

            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        Py_DECREF( tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooo";
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
        CHECK_OBJECT( par_self );
        tmp_source_name_34 = par_self;
        tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_field );
        if ( tmp_subscribed_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_35 = par_self;
        tmp_subscript_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_pos );
        if ( tmp_subscript_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_8 );

            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscribed_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_compexpr_left_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = const_str_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        Py_DECREF( tmp_compexpr_left_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_11 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_source_name_36;
            CHECK_OBJECT( par_self );
            tmp_source_name_36 = par_self;
            tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_pos );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_4__start == NULL );
            tmp_inplace_assign_attr_4__start = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( tmp_inplace_assign_attr_4__start );
            tmp_left_name_8 = tmp_inplace_assign_attr_4__start;
            tmp_right_name_8 = const_int_pos_1;
            tmp_assign_source_22 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "oooooooo";
                goto try_except_handler_8;
            }
            assert( tmp_inplace_assign_attr_4__end == NULL );
            tmp_inplace_assign_attr_4__end = tmp_assign_source_22;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            CHECK_OBJECT( tmp_inplace_assign_attr_4__end );
            tmp_assattr_name_7 = tmp_inplace_assign_attr_4__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_pos, tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "oooooooo";
                goto try_except_handler_9;
            }
        }
        goto try_end_7;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__end );
        Py_DECREF( tmp_inplace_assign_attr_4__end );
        tmp_inplace_assign_attr_4__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        goto try_end_8;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__start );
        Py_DECREF( tmp_inplace_assign_attr_4__start );
        tmp_inplace_assign_attr_4__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__end );
        Py_DECREF( tmp_inplace_assign_attr_4__end );
        tmp_inplace_assign_attr_4__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__start );
        Py_DECREF( tmp_inplace_assign_attr_4__start );
        tmp_inplace_assign_attr_4__start = NULL;

        branch_no_11:;
    }
    if ( var_returnlist == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "returnlist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_returnlist;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e84f218dc50f9bf66473540e434ff93a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e84f218dc50f9bf66473540e434ff93a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e84f218dc50f9bf66473540e434ff93a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e84f218dc50f9bf66473540e434ff93a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e84f218dc50f9bf66473540e434ff93a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e84f218dc50f9bf66473540e434ff93a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e84f218dc50f9bf66473540e434ff93a,
        type_description_1,
        par_self,
        var_oldpos,
        var_oldcl,
        var_plist,
        var_returnlist,
        var_addrspec,
        var_fieldlen,
        var_routeaddr
    );


    // Release cached frame.
    if ( frame_e84f218dc50f9bf66473540e434ff93a == cache_frame_e84f218dc50f9bf66473540e434ff93a )
    {
        Py_DECREF( frame_e84f218dc50f9bf66473540e434ff93a );
    }
    cache_frame_e84f218dc50f9bf66473540e434ff93a = NULL;

    assertFrameObject( frame_e84f218dc50f9bf66473540e434ff93a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_9_getaddress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_oldpos );
    Py_DECREF( var_oldpos );
    var_oldpos = NULL;

    CHECK_OBJECT( (PyObject *)var_oldcl );
    Py_DECREF( var_oldcl );
    var_oldcl = NULL;

    CHECK_OBJECT( (PyObject *)var_plist );
    Py_DECREF( var_plist );
    var_plist = NULL;

    Py_XDECREF( var_returnlist );
    var_returnlist = NULL;

    Py_XDECREF( var_addrspec );
    var_addrspec = NULL;

    Py_XDECREF( var_fieldlen );
    var_fieldlen = NULL;

    Py_XDECREF( var_routeaddr );
    var_routeaddr = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_oldpos );
    var_oldpos = NULL;

    Py_XDECREF( var_oldcl );
    var_oldcl = NULL;

    Py_XDECREF( var_plist );
    var_plist = NULL;

    Py_XDECREF( var_returnlist );
    var_returnlist = NULL;

    Py_XDECREF( var_addrspec );
    var_addrspec = NULL;

    Py_XDECREF( var_fieldlen );
    var_fieldlen = NULL;

    Py_XDECREF( var_routeaddr );
    var_routeaddr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_9_getaddress );
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


static PyObject *impl_email$_parseaddr$$$function_10_getrouteaddr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_expectroute = NULL;
    PyObject *var_adlist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_attr_4__end = NULL;
    PyObject *tmp_inplace_assign_attr_4__start = NULL;
    PyObject *tmp_inplace_assign_attr_5__end = NULL;
    PyObject *tmp_inplace_assign_attr_5__start = NULL;
    struct Nuitka_FrameObject *frame_9095c7a1ab2c03e52bfb8b4eddf59d2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_9095c7a1ab2c03e52bfb8b4eddf59d2f = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9095c7a1ab2c03e52bfb8b4eddf59d2f, codeobj_9095c7a1ab2c03e52bfb8b4eddf59d2f, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9095c7a1ab2c03e52bfb8b4eddf59d2f = cache_frame_9095c7a1ab2c03e52bfb8b4eddf59d2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_chr_60;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert( var_expectroute == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_expectroute = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pos );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_9095c7a1ab2c03e52bfb8b4eddf59d2f->m_frame.f_lineno = 329;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_gotonext );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_empty;
        assert( var_adlist == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_adlist = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pos );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooo";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if ( var_expectroute == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expectroute" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( var_expectroute );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            frame_9095c7a1ab2c03e52bfb8b4eddf59d2f->m_frame.f_lineno = 333;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getdomain );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            {
                PyObject *old = var_expectroute;
                var_expectroute = tmp_assign_source_5;
                Py_INCREF( var_expectroute );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 335;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_chr_62;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooo";
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 336;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_inplace_assign_attr_2__start == NULL );
                tmp_inplace_assign_attr_2__start = tmp_assign_source_6;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                tmp_right_name_2 = const_int_pos_1;
                tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 336;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                assert( tmp_inplace_assign_attr_2__end == NULL );
                tmp_inplace_assign_attr_2__end = tmp_assign_source_7;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 336;
                    type_description_1 = "ooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_3;
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            goto loop_end_1;
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_field );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 338;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_pos );
                if ( tmp_subscript_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 338;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 338;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_str_chr_64;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 338;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
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
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_source_name_11;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_11 = par_self;
                    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_pos );
                    if ( tmp_assign_source_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 339;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = tmp_inplace_assign_attr_3__start;
                        tmp_inplace_assign_attr_3__start = tmp_assign_source_8;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    CHECK_OBJECT( tmp_inplace_assign_attr_3__start );
                    tmp_left_name_3 = tmp_inplace_assign_attr_3__start;
                    tmp_right_name_3 = const_int_pos_1;
                    tmp_assign_source_9 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_assign_source_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 339;
                        type_description_1 = "ooo";
                        goto try_except_handler_6;
                    }
                    {
                        PyObject *old = tmp_inplace_assign_attr_3__end;
                        tmp_inplace_assign_attr_3__end = tmp_assign_source_9;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_assattr_target_3;
                    CHECK_OBJECT( tmp_inplace_assign_attr_3__end );
                    tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_3 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_pos, tmp_assattr_name_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 339;
                        type_description_1 = "ooo";
                        goto try_except_handler_7;
                    }
                }
                goto try_end_5;
                // Exception handler code:
                try_except_handler_7:;
                exception_keeper_type_5 = exception_type;
                exception_keeper_value_5 = exception_value;
                exception_keeper_tb_5 = exception_tb;
                exception_keeper_lineno_5 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
                Py_DECREF( tmp_inplace_assign_attr_3__end );
                tmp_inplace_assign_attr_3__end = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_5;
                exception_value = exception_keeper_value_5;
                exception_tb = exception_keeper_tb_5;
                exception_lineno = exception_keeper_lineno_5;

                goto try_except_handler_6;
                // End of try:
                try_end_5:;
                goto try_end_6;
                // Exception handler code:
                try_except_handler_6:;
                exception_keeper_type_6 = exception_type;
                exception_keeper_value_6 = exception_value;
                exception_keeper_tb_6 = exception_tb;
                exception_keeper_lineno_6 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
                Py_DECREF( tmp_inplace_assign_attr_3__start );
                tmp_inplace_assign_attr_3__start = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_6;
                exception_value = exception_keeper_value_6;
                exception_tb = exception_keeper_tb_6;
                exception_lineno = exception_keeper_lineno_6;

                goto frame_exception_exit_1;
                // End of try:
                try_end_6:;
                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
                Py_DECREF( tmp_inplace_assign_attr_3__end );
                tmp_inplace_assign_attr_3__end = NULL;

                CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
                Py_DECREF( tmp_inplace_assign_attr_3__start );
                tmp_inplace_assign_attr_3__start = NULL;

                {
                    PyObject *tmp_assign_source_10;
                    tmp_assign_source_10 = Py_True;
                    {
                        PyObject *old = var_expectroute;
                        var_expectroute = tmp_assign_source_10;
                        Py_INCREF( var_expectroute );
                        Py_XDECREF( old );
                    }

                }
                goto branch_end_5;
                branch_no_5:;
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_13;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_12 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_field );
                    if ( tmp_subscribed_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 341;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_13 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_pos );
                    if ( tmp_subscript_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscribed_name_4 );

                        exception_lineno = 341;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    Py_DECREF( tmp_subscribed_name_4 );
                    Py_DECREF( tmp_subscript_name_4 );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 341;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_str_chr_58;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 341;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
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
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_source_name_14;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_14 = par_self;
                        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_pos );
                        if ( tmp_assign_source_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 342;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_4__start;
                            tmp_inplace_assign_attr_4__start = tmp_assign_source_11;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_left_name_4;
                        PyObject *tmp_right_name_4;
                        CHECK_OBJECT( tmp_inplace_assign_attr_4__start );
                        tmp_left_name_4 = tmp_inplace_assign_attr_4__start;
                        tmp_right_name_4 = const_int_pos_1;
                        tmp_assign_source_12 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_4, tmp_right_name_4 );
                        if ( tmp_assign_source_12 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 342;
                            type_description_1 = "ooo";
                            goto try_except_handler_8;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_4__end;
                            tmp_inplace_assign_attr_4__end = tmp_assign_source_12;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_4;
                        PyObject *tmp_assattr_target_4;
                        CHECK_OBJECT( tmp_inplace_assign_attr_4__end );
                        tmp_assattr_name_4 = tmp_inplace_assign_attr_4__end;
                        CHECK_OBJECT( par_self );
                        tmp_assattr_target_4 = par_self;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_pos, tmp_assattr_name_4 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 342;
                            type_description_1 = "ooo";
                            goto try_except_handler_9;
                        }
                    }
                    goto try_end_7;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__end );
                    Py_DECREF( tmp_inplace_assign_attr_4__end );
                    tmp_inplace_assign_attr_4__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_7;
                    exception_value = exception_keeper_value_7;
                    exception_tb = exception_keeper_tb_7;
                    exception_lineno = exception_keeper_lineno_7;

                    goto try_except_handler_8;
                    // End of try:
                    try_end_7:;
                    goto try_end_8;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__start );
                    Py_DECREF( tmp_inplace_assign_attr_4__start );
                    tmp_inplace_assign_attr_4__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_8;
                    exception_value = exception_keeper_value_8;
                    exception_tb = exception_keeper_tb_8;
                    exception_lineno = exception_keeper_lineno_8;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_8:;
                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__end );
                    Py_DECREF( tmp_inplace_assign_attr_4__end );
                    tmp_inplace_assign_attr_4__end = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_4__start );
                    Py_DECREF( tmp_inplace_assign_attr_4__start );
                    tmp_inplace_assign_attr_4__start = NULL;

                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_called_instance_3;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_3 = par_self;
                        frame_9095c7a1ab2c03e52bfb8b4eddf59d2f->m_frame.f_lineno = 344;
                        tmp_assign_source_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getaddrspec );
                        if ( tmp_assign_source_13 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 344;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_adlist;
                            assert( old != NULL );
                            var_adlist = tmp_assign_source_13;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_14;
                        PyObject *tmp_source_name_15;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_15 = par_self;
                        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pos );
                        if ( tmp_assign_source_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 345;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        assert( tmp_inplace_assign_attr_5__start == NULL );
                        tmp_inplace_assign_attr_5__start = tmp_assign_source_14;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_left_name_5;
                        PyObject *tmp_right_name_5;
                        CHECK_OBJECT( tmp_inplace_assign_attr_5__start );
                        tmp_left_name_5 = tmp_inplace_assign_attr_5__start;
                        tmp_right_name_5 = const_int_pos_1;
                        tmp_assign_source_15 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
                        if ( tmp_assign_source_15 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 345;
                            type_description_1 = "ooo";
                            goto try_except_handler_10;
                        }
                        assert( tmp_inplace_assign_attr_5__end == NULL );
                        tmp_inplace_assign_attr_5__end = tmp_assign_source_15;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_5;
                        PyObject *tmp_assattr_target_5;
                        CHECK_OBJECT( tmp_inplace_assign_attr_5__end );
                        tmp_assattr_name_5 = tmp_inplace_assign_attr_5__end;
                        CHECK_OBJECT( par_self );
                        tmp_assattr_target_5 = par_self;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 345;
                            type_description_1 = "ooo";
                            goto try_except_handler_11;
                        }
                    }
                    goto try_end_9;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_5__end );
                    Py_DECREF( tmp_inplace_assign_attr_5__end );
                    tmp_inplace_assign_attr_5__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_9;
                    exception_value = exception_keeper_value_9;
                    exception_tb = exception_keeper_tb_9;
                    exception_lineno = exception_keeper_lineno_9;

                    goto try_except_handler_10;
                    // End of try:
                    try_end_9:;
                    goto try_end_10;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_5__start );
                    Py_DECREF( tmp_inplace_assign_attr_5__start );
                    tmp_inplace_assign_attr_5__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_10;
                    exception_value = exception_keeper_value_10;
                    exception_tb = exception_keeper_tb_10;
                    exception_lineno = exception_keeper_lineno_10;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_10:;
                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_5__end );
                    Py_DECREF( tmp_inplace_assign_attr_5__end );
                    tmp_inplace_assign_attr_5__end = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_5__start );
                    Py_DECREF( tmp_inplace_assign_attr_5__start );
                    tmp_inplace_assign_attr_5__start = NULL;

                    goto loop_end_1;
                    branch_end_6:;
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        frame_9095c7a1ab2c03e52bfb8b4eddf59d2f->m_frame.f_lineno = 347;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_gotonext );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if ( var_adlist == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "adlist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_adlist;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9095c7a1ab2c03e52bfb8b4eddf59d2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9095c7a1ab2c03e52bfb8b4eddf59d2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9095c7a1ab2c03e52bfb8b4eddf59d2f,
        type_description_1,
        par_self,
        var_expectroute,
        var_adlist
    );


    // Release cached frame.
    if ( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f == cache_frame_9095c7a1ab2c03e52bfb8b4eddf59d2f )
    {
        Py_DECREF( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f );
    }
    cache_frame_9095c7a1ab2c03e52bfb8b4eddf59d2f = NULL;

    assertFrameObject( frame_9095c7a1ab2c03e52bfb8b4eddf59d2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_10_getrouteaddr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_expectroute );
    var_expectroute = NULL;

    Py_XDECREF( var_adlist );
    var_adlist = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_expectroute );
    var_expectroute = NULL;

    Py_XDECREF( var_adlist );
    var_adlist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_10_getrouteaddr );
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


static PyObject *impl_email$_parseaddr$$$function_11_getaddrspec( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_aslist = NULL;
    PyObject *var_preserve_ws = NULL;
    PyObject *var_ws = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_f50ebf24bc5b7d7de57c2a671ed749cf;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f50ebf24bc5b7d7de57c2a671ed749cf = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_aslist == NULL );
        var_aslist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f50ebf24bc5b7d7de57c2a671ed749cf, codeobj_f50ebf24bc5b7d7de57c2a671ed749cf, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f50ebf24bc5b7d7de57c2a671ed749cf = cache_frame_f50ebf24bc5b7d7de57c2a671ed749cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f50ebf24bc5b7d7de57c2a671ed749cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f50ebf24bc5b7d7de57c2a671ed749cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 355;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_gotonext );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pos );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        {
            PyObject *old = var_preserve_ws;
            var_preserve_ws = tmp_assign_source_2;
            Py_INCREF( var_preserve_ws );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_dot;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oooo";
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
            nuitka_bool tmp_condition_result_3;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_aslist );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_aslist );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
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
            CHECK_OBJECT( var_aslist );
            tmp_subscribed_name_2 = var_aslist;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 359;
            tmp_operand_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_3 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( var_aslist );
                tmp_called_instance_3 = var_aslist;
                frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 360;
                tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_pop );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 360;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( var_aslist );
            tmp_called_instance_4 = var_aslist;
            frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 361;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pos );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
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
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            {
                PyObject *old = var_preserve_ws;
                assert( old != NULL );
                var_preserve_ws = tmp_assign_source_5;
                Py_INCREF( var_preserve_ws );
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_field );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_pos );
            if ( tmp_subscript_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_3 );

                exception_lineno = 364;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscribed_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_chr_34;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( var_aslist );
                tmp_source_name_8 = var_aslist;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 365;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_2 = const_str_digest_1e4616cb2877c002aa48d41e8b575b32;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_quote );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quote );
                }

                if ( tmp_mvar_value_1 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "quote" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 365;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_1;
                CHECK_OBJECT( par_self );
                tmp_called_instance_5 = par_self;
                frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 365;
                tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_getquote );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 365;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 365;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 365;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 365;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 365;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 365;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_field );
                if ( tmp_subscribed_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 366;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_pos );
                if ( tmp_subscript_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_4 );

                    exception_lineno = 366;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscribed_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 366;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_atomends );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 366;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 366;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    nuitka_bool tmp_condition_result_6;
                    int tmp_and_left_truth_2;
                    nuitka_bool tmp_and_left_value_2;
                    nuitka_bool tmp_and_right_value_2;
                    int tmp_truth_name_2;
                    PyObject *tmp_operand_name_3;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_subscript_name_5;
                    CHECK_OBJECT( var_aslist );
                    tmp_truth_name_2 = CHECK_IF_TRUE( var_aslist );
                    if ( tmp_truth_name_2 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    CHECK_OBJECT( var_aslist );
                    tmp_subscribed_name_5 = var_aslist;
                    tmp_subscript_name_5 = const_int_neg_1;
                    tmp_called_instance_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
                    if ( tmp_called_instance_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 367;
                    tmp_operand_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_strip );
                    Py_DECREF( tmp_called_instance_6 );
                    if ( tmp_operand_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
                    Py_DECREF( tmp_operand_name_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_called_instance_7;
                        PyObject *tmp_call_result_5;
                        CHECK_OBJECT( var_aslist );
                        tmp_called_instance_7 = var_aslist;
                        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 368;
                        tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_pop );
                        if ( tmp_call_result_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 368;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_5 );
                    }
                    branch_no_6:;
                }
                goto loop_end_1;
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_called_instance_8;
                    CHECK_OBJECT( var_aslist );
                    tmp_source_name_12 = var_aslist;
                    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
                    if ( tmp_called_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 371;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_8 = par_self;
                    frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 371;
                    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_getatom );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );

                        exception_lineno = 371;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 371;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3 };
                        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_call_result_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 371;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_6 );
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT( par_self );
        tmp_called_instance_9 = par_self;
        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 372;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_gotonext );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ws;
            var_ws = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_3;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_preserve_ws );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_preserve_ws );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_ws );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_ws );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_7 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_called_instance_10;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_aslist );
            tmp_called_instance_10 = var_aslist;
            CHECK_OBJECT( var_ws );
            tmp_args_element_name_4 = var_ws;
            frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 374;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 374;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_7:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_13;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_15;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_pos );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_field );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_source_name_15 = par_self;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_field );
        if ( tmp_subscribed_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_subscript_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_pos );
        if ( tmp_subscript_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_6 );

            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscribed_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_str_chr_64;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_8 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EMPTYSTRING" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 377;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_11 = tmp_mvar_value_2;
            CHECK_OBJECT( var_aslist );
            tmp_args_element_name_5 = var_aslist;
            frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 377;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_join, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT( var_aslist );
        tmp_called_instance_12 = var_aslist;
        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 379;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_chr_64_tuple, 0 ) );

        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_pos );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_2__start == NULL );
        tmp_inplace_assign_attr_2__start = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
        tmp_left_name_3 = tmp_inplace_assign_attr_2__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_8 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert( tmp_inplace_assign_attr_2__end == NULL );
        tmp_inplace_assign_attr_2__end = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
        tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT( par_self );
        tmp_called_instance_13 = par_self;
        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 381;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_gotonext );
        if ( tmp_call_result_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_9 );
    }
    {
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_15;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EMPTYSTRING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = tmp_mvar_value_3;
        CHECK_OBJECT( var_aslist );
        tmp_args_element_name_6 = var_aslist;
        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 382;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_join, call_args );
        }

        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_called_instance_15 = par_self;
        frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame.f_lineno = 382;
        tmp_right_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain_getdomain );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f50ebf24bc5b7d7de57c2a671ed749cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f50ebf24bc5b7d7de57c2a671ed749cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f50ebf24bc5b7d7de57c2a671ed749cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f50ebf24bc5b7d7de57c2a671ed749cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f50ebf24bc5b7d7de57c2a671ed749cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f50ebf24bc5b7d7de57c2a671ed749cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f50ebf24bc5b7d7de57c2a671ed749cf,
        type_description_1,
        par_self,
        var_aslist,
        var_preserve_ws,
        var_ws
    );


    // Release cached frame.
    if ( frame_f50ebf24bc5b7d7de57c2a671ed749cf == cache_frame_f50ebf24bc5b7d7de57c2a671ed749cf )
    {
        Py_DECREF( frame_f50ebf24bc5b7d7de57c2a671ed749cf );
    }
    cache_frame_f50ebf24bc5b7d7de57c2a671ed749cf = NULL;

    assertFrameObject( frame_f50ebf24bc5b7d7de57c2a671ed749cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_11_getaddrspec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_aslist );
    Py_DECREF( var_aslist );
    var_aslist = NULL;

    Py_XDECREF( var_preserve_ws );
    var_preserve_ws = NULL;

    Py_XDECREF( var_ws );
    var_ws = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_aslist );
    Py_DECREF( var_aslist );
    var_aslist = NULL;

    Py_XDECREF( var_preserve_ws );
    var_preserve_ws = NULL;

    Py_XDECREF( var_ws );
    var_ws = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_11_getaddrspec );
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


static PyObject *impl_email$_parseaddr$$$function_12_getdomain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_sdlist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_678ad22578a99dcdee788e85273dcc60;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_678ad22578a99dcdee788e85273dcc60 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_sdlist == NULL );
        var_sdlist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_678ad22578a99dcdee788e85273dcc60, codeobj_678ad22578a99dcdee788e85273dcc60, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_678ad22578a99dcdee788e85273dcc60 = cache_frame_678ad22578a99dcdee788e85273dcc60;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_678ad22578a99dcdee788e85273dcc60 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_678ad22578a99dcdee788e85273dcc60 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pos );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oo";
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
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_LWS );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pos );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
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
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 390;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_chr_40;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_commentlist );
                if ( tmp_source_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 391;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 391;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_called_instance_1 = par_self;
                frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 391;
                tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getcomment );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 391;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 391;
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


                    exception_lineno = 391;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_12;
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_field );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_pos );
                if ( tmp_subscript_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 392;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_str_chr_91;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "oo";
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT( var_sdlist );
                    tmp_source_name_13 = var_sdlist;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_append );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 393;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_2 = par_self;
                    frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 393;
                    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getdomainliteral );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 393;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 393;
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


                        exception_lineno = 393;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_15;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_14 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_field );
                    if ( tmp_subscribed_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 394;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pos );
                    if ( tmp_subscript_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscribed_name_4 );

                        exception_lineno = 394;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    Py_DECREF( tmp_subscribed_name_4 );
                    Py_DECREF( tmp_subscript_name_4 );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 394;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_str_dot;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 394;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
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
                        PyObject *tmp_assign_source_4;
                        PyObject *tmp_source_name_16;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_16 = par_self;
                        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_pos );
                        if ( tmp_assign_source_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 395;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_2__start;
                            tmp_inplace_assign_attr_2__start = tmp_assign_source_4;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_5;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                        tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                        tmp_right_name_2 = const_int_pos_1;
                        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
                        if ( tmp_assign_source_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 395;
                            type_description_1 = "oo";
                            goto try_except_handler_4;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_2__end;
                            tmp_inplace_assign_attr_2__end = tmp_assign_source_5;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_2;
                        PyObject *tmp_assattr_target_2;
                        CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                        tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                        CHECK_OBJECT( par_self );
                        tmp_assattr_target_2 = par_self;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 395;
                            type_description_1 = "oo";
                            goto try_except_handler_5;
                        }
                    }
                    goto try_end_3;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
                    Py_DECREF( tmp_inplace_assign_attr_2__end );
                    tmp_inplace_assign_attr_2__end = NULL;

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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
                    Py_DECREF( tmp_inplace_assign_attr_2__start );
                    tmp_inplace_assign_attr_2__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_4;
                    exception_value = exception_keeper_value_4;
                    exception_tb = exception_keeper_tb_4;
                    exception_lineno = exception_keeper_lineno_4;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_4:;
                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
                    Py_DECREF( tmp_inplace_assign_attr_2__end );
                    tmp_inplace_assign_attr_2__end = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
                    Py_DECREF( tmp_inplace_assign_attr_2__start );
                    tmp_inplace_assign_attr_2__start = NULL;

                    {
                        PyObject *tmp_called_instance_3;
                        PyObject *tmp_call_result_3;
                        CHECK_OBJECT( var_sdlist );
                        tmp_called_instance_3 = var_sdlist;
                        frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 396;
                        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

                        if ( tmp_call_result_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 396;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_3 );
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_6;
                        PyObject *tmp_compexpr_right_6;
                        PyObject *tmp_subscribed_name_5;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_subscript_name_5;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_source_name_19;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_17 = par_self;
                        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_field );
                        if ( tmp_subscribed_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 397;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_18 = par_self;
                        tmp_subscript_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_pos );
                        if ( tmp_subscript_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_subscribed_name_5 );

                            exception_lineno = 397;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                        Py_DECREF( tmp_subscribed_name_5 );
                        Py_DECREF( tmp_subscript_name_5 );
                        if ( tmp_compexpr_left_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 397;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_19 = par_self;
                        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_atomends );
                        if ( tmp_compexpr_right_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_compexpr_left_6 );

                            exception_lineno = 397;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
                        Py_DECREF( tmp_compexpr_left_6 );
                        Py_DECREF( tmp_compexpr_right_6 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 397;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_6;
                        }
                        else
                        {
                            goto branch_no_6;
                        }
                        branch_yes_6:;
                        goto loop_end_1;
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_20;
                            PyObject *tmp_call_result_4;
                            PyObject *tmp_args_element_name_3;
                            PyObject *tmp_called_instance_4;
                            CHECK_OBJECT( var_sdlist );
                            tmp_source_name_20 = var_sdlist;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_append );
                            if ( tmp_called_name_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 400;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_self );
                            tmp_called_instance_4 = par_self;
                            frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 400;
                            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getatom );
                            if ( tmp_args_element_name_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_3 );

                                exception_lineno = 400;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 400;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_3 };
                                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                            }

                            Py_DECREF( tmp_called_name_3 );
                            Py_DECREF( tmp_args_element_name_3 );
                            if ( tmp_call_result_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 400;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            Py_DECREF( tmp_call_result_4 );
                        }
                        branch_end_6:;
                    }
                    branch_end_5:;
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


        exception_lineno = 387;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EMPTYSTRING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_1;
        CHECK_OBJECT( var_sdlist );
        tmp_args_element_name_4 = var_sdlist;
        frame_678ad22578a99dcdee788e85273dcc60->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_678ad22578a99dcdee788e85273dcc60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_678ad22578a99dcdee788e85273dcc60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_678ad22578a99dcdee788e85273dcc60 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_678ad22578a99dcdee788e85273dcc60, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_678ad22578a99dcdee788e85273dcc60->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_678ad22578a99dcdee788e85273dcc60, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_678ad22578a99dcdee788e85273dcc60,
        type_description_1,
        par_self,
        var_sdlist
    );


    // Release cached frame.
    if ( frame_678ad22578a99dcdee788e85273dcc60 == cache_frame_678ad22578a99dcdee788e85273dcc60 )
    {
        Py_DECREF( frame_678ad22578a99dcdee788e85273dcc60 );
    }
    cache_frame_678ad22578a99dcdee788e85273dcc60 = NULL;

    assertFrameObject( frame_678ad22578a99dcdee788e85273dcc60 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_12_getdomain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_sdlist );
    Py_DECREF( var_sdlist );
    var_sdlist = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_sdlist );
    Py_DECREF( var_sdlist );
    var_sdlist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_12_getdomain );
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


static PyObject *impl_email$_parseaddr$$$function_13_getdelimited( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_beginchar = python_pars[ 1 ];
    PyObject *par_endchars = python_pars[ 2 ];
    PyObject *par_allowcomments = python_pars[ 3 ];
    PyObject *var_slist = NULL;
    PyObject *var_quote = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    struct Nuitka_FrameObject *frame_a69690c49d527598d65a84a48fcbd118;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_a69690c49d527598d65a84a48fcbd118 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a69690c49d527598d65a84a48fcbd118, codeobj_a69690c49d527598d65a84a48fcbd118, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a69690c49d527598d65a84a48fcbd118 = cache_frame_a69690c49d527598d65a84a48fcbd118;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a69690c49d527598d65a84a48fcbd118 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a69690c49d527598d65a84a48fcbd118 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_beginchar );
        tmp_compexpr_right_1 = par_beginchar;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
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
        tmp_return_value = const_str_empty;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_str_empty_list );
        assert( var_slist == NULL );
        var_slist = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert( var_quote == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_quote = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pos );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pos );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if ( var_quote == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "quote" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 423;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( var_quote );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_slist );
            tmp_source_name_6 = var_slist;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a69690c49d527598d65a84a48fcbd118->m_frame.f_lineno = 424;
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


                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            {
                PyObject *old = var_quote;
                var_quote = tmp_assign_source_5;
                Py_INCREF( var_quote );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_field );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_pos );
            if ( tmp_subscript_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_3 );

                exception_lineno = 426;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscribed_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_endchars );
            tmp_compexpr_right_3 = par_endchars;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_pos );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 427;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_inplace_assign_attr_2__start == NULL );
                tmp_inplace_assign_attr_2__start = tmp_assign_source_6;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                tmp_right_name_2 = const_int_pos_1;
                tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 427;
                    type_description_1 = "oooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_inplace_assign_attr_2__end == NULL );
                tmp_inplace_assign_attr_2__end = tmp_assign_source_7;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 427;
                    type_description_1 = "oooooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_3;
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
            Py_DECREF( tmp_inplace_assign_attr_2__end );
            tmp_inplace_assign_attr_2__end = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
            Py_DECREF( tmp_inplace_assign_attr_2__start );
            tmp_inplace_assign_attr_2__start = NULL;

            goto loop_end_1;
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                int tmp_truth_name_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_source_name_12;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_source_name_13;
                CHECK_OBJECT( par_allowcomments );
                tmp_truth_name_2 = CHECK_IF_TRUE( par_allowcomments );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 429;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_field );
                if ( tmp_subscribed_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 429;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_pos );
                if ( tmp_subscript_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_4 );

                    exception_lineno = 429;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscribed_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 429;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_str_chr_40;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 429;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_called_instance_1;
                    CHECK_OBJECT( var_slist );
                    tmp_source_name_14 = var_slist;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 430;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_1 = par_self;
                    frame_a69690c49d527598d65a84a48fcbd118->m_frame.f_lineno = 430;
                    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getcomment );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 430;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_a69690c49d527598d65a84a48fcbd118->m_frame.f_lineno = 430;
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


                        exception_lineno = 430;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                goto loop_start_1;
                goto branch_end_5;
                branch_no_5:;
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_subscript_name_5;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_field );
                    if ( tmp_subscribed_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 432;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_subscript_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_pos );
                    if ( tmp_subscript_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscribed_name_5 );

                        exception_lineno = 432;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                    Py_DECREF( tmp_subscribed_name_5 );
                    Py_DECREF( tmp_subscript_name_5 );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 432;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_str_chr_92;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 432;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
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
                        PyObject *tmp_assign_source_8;
                        tmp_assign_source_8 = Py_True;
                        {
                            PyObject *old = var_quote;
                            var_quote = tmp_assign_source_8;
                            Py_INCREF( var_quote );
                            Py_XDECREF( old );
                        }

                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_call_result_3;
                        PyObject *tmp_args_element_name_3;
                        PyObject *tmp_subscribed_name_6;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_subscript_name_6;
                        PyObject *tmp_source_name_19;
                        CHECK_OBJECT( var_slist );
                        tmp_source_name_17 = var_slist;
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_append );
                        if ( tmp_called_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 435;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_18 = par_self;
                        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_field );
                        if ( tmp_subscribed_name_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );

                            exception_lineno = 435;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_19 = par_self;
                        tmp_subscript_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_pos );
                        if ( tmp_subscript_name_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );
                            Py_DECREF( tmp_subscribed_name_6 );

                            exception_lineno = 435;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                        Py_DECREF( tmp_subscribed_name_6 );
                        Py_DECREF( tmp_subscript_name_6 );
                        if ( tmp_args_element_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );

                            exception_lineno = 435;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_a69690c49d527598d65a84a48fcbd118->m_frame.f_lineno = 435;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_3 };
                            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                        }

                        Py_DECREF( tmp_called_name_3 );
                        Py_DECREF( tmp_args_element_name_3 );
                        if ( tmp_call_result_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 435;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_3 );
                    }
                    branch_end_6:;
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_pos );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_3__start;
            tmp_inplace_assign_attr_3__start = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( tmp_inplace_assign_attr_3__start );
        tmp_left_name_3 = tmp_inplace_assign_attr_3__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_10 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_3__end;
            tmp_inplace_assign_attr_3__end = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( tmp_inplace_assign_attr_3__end );
        tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_pos, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
    Py_DECREF( tmp_inplace_assign_attr_3__end );
    tmp_inplace_assign_attr_3__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
    Py_DECREF( tmp_inplace_assign_attr_3__start );
    tmp_inplace_assign_attr_3__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__end );
    Py_DECREF( tmp_inplace_assign_attr_3__end );
    tmp_inplace_assign_attr_3__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_3__start );
    Py_DECREF( tmp_inplace_assign_attr_3__start );
    tmp_inplace_assign_attr_3__start = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EMPTYSTRING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_slist );
        tmp_args_element_name_4 = var_slist;
        frame_a69690c49d527598d65a84a48fcbd118->m_frame.f_lineno = 438;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a69690c49d527598d65a84a48fcbd118 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a69690c49d527598d65a84a48fcbd118 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a69690c49d527598d65a84a48fcbd118 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a69690c49d527598d65a84a48fcbd118, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a69690c49d527598d65a84a48fcbd118->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a69690c49d527598d65a84a48fcbd118, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a69690c49d527598d65a84a48fcbd118,
        type_description_1,
        par_self,
        par_beginchar,
        par_endchars,
        par_allowcomments,
        var_slist,
        var_quote
    );


    // Release cached frame.
    if ( frame_a69690c49d527598d65a84a48fcbd118 == cache_frame_a69690c49d527598d65a84a48fcbd118 )
    {
        Py_DECREF( frame_a69690c49d527598d65a84a48fcbd118 );
    }
    cache_frame_a69690c49d527598d65a84a48fcbd118 = NULL;

    assertFrameObject( frame_a69690c49d527598d65a84a48fcbd118 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_13_getdelimited );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_beginchar );
    Py_DECREF( par_beginchar );
    par_beginchar = NULL;

    CHECK_OBJECT( (PyObject *)par_endchars );
    Py_DECREF( par_endchars );
    par_endchars = NULL;

    CHECK_OBJECT( (PyObject *)par_allowcomments );
    Py_DECREF( par_allowcomments );
    par_allowcomments = NULL;

    Py_XDECREF( var_slist );
    var_slist = NULL;

    Py_XDECREF( var_quote );
    var_quote = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_beginchar );
    Py_DECREF( par_beginchar );
    par_beginchar = NULL;

    CHECK_OBJECT( (PyObject *)par_endchars );
    Py_DECREF( par_endchars );
    par_endchars = NULL;

    CHECK_OBJECT( (PyObject *)par_allowcomments );
    Py_DECREF( par_allowcomments );
    par_allowcomments = NULL;

    Py_XDECREF( var_slist );
    var_slist = NULL;

    Py_XDECREF( var_quote );
    var_quote = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_13_getdelimited );
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


static PyObject *impl_email$_parseaddr$$$function_14_getquote( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_096f560ed75ba9326e22aedf229562a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_096f560ed75ba9326e22aedf229562a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_096f560ed75ba9326e22aedf229562a0, codeobj_096f560ed75ba9326e22aedf229562a0, module_email$_parseaddr, sizeof(void *) );
    frame_096f560ed75ba9326e22aedf229562a0 = cache_frame_096f560ed75ba9326e22aedf229562a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_096f560ed75ba9326e22aedf229562a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_096f560ed75ba9326e22aedf229562a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_096f560ed75ba9326e22aedf229562a0->m_frame.f_lineno = 442;
        tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_getdelimited, &PyTuple_GET_ITEM( const_tuple_str_chr_34_str_digest_4911663181756066342617a7d23098eb_false_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_096f560ed75ba9326e22aedf229562a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_096f560ed75ba9326e22aedf229562a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_096f560ed75ba9326e22aedf229562a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_096f560ed75ba9326e22aedf229562a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_096f560ed75ba9326e22aedf229562a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_096f560ed75ba9326e22aedf229562a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_096f560ed75ba9326e22aedf229562a0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_096f560ed75ba9326e22aedf229562a0 == cache_frame_096f560ed75ba9326e22aedf229562a0 )
    {
        Py_DECREF( frame_096f560ed75ba9326e22aedf229562a0 );
    }
    cache_frame_096f560ed75ba9326e22aedf229562a0 = NULL;

    assertFrameObject( frame_096f560ed75ba9326e22aedf229562a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_14_getquote );
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
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_14_getquote );
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


static PyObject *impl_email$_parseaddr$$$function_15_getcomment( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_53094b3685836dae01ae2b2bdab05523;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53094b3685836dae01ae2b2bdab05523 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53094b3685836dae01ae2b2bdab05523, codeobj_53094b3685836dae01ae2b2bdab05523, module_email$_parseaddr, sizeof(void *) );
    frame_53094b3685836dae01ae2b2bdab05523 = cache_frame_53094b3685836dae01ae2b2bdab05523;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53094b3685836dae01ae2b2bdab05523 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53094b3685836dae01ae2b2bdab05523 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_53094b3685836dae01ae2b2bdab05523->m_frame.f_lineno = 446;
        tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_getdelimited, &PyTuple_GET_ITEM( const_tuple_str_chr_40_str_digest_9b805b6192aac3720032f6d97fd0bf27_true_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53094b3685836dae01ae2b2bdab05523 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53094b3685836dae01ae2b2bdab05523 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53094b3685836dae01ae2b2bdab05523 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53094b3685836dae01ae2b2bdab05523, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53094b3685836dae01ae2b2bdab05523->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53094b3685836dae01ae2b2bdab05523, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53094b3685836dae01ae2b2bdab05523,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_53094b3685836dae01ae2b2bdab05523 == cache_frame_53094b3685836dae01ae2b2bdab05523 )
    {
        Py_DECREF( frame_53094b3685836dae01ae2b2bdab05523 );
    }
    cache_frame_53094b3685836dae01ae2b2bdab05523 = NULL;

    assertFrameObject( frame_53094b3685836dae01ae2b2bdab05523 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_15_getcomment );
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
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_15_getcomment );
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


static PyObject *impl_email$_parseaddr$$$function_16_getdomainliteral( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9719e93c477622a8de27fa8a311ec6ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9719e93c477622a8de27fa8a311ec6ac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9719e93c477622a8de27fa8a311ec6ac, codeobj_9719e93c477622a8de27fa8a311ec6ac, module_email$_parseaddr, sizeof(void *) );
    frame_9719e93c477622a8de27fa8a311ec6ac = cache_frame_9719e93c477622a8de27fa8a311ec6ac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9719e93c477622a8de27fa8a311ec6ac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9719e93c477622a8de27fa8a311ec6ac ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_left_name_1 = const_str_digest_0674107b2d3e86aecfffb00b3395ae4a;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_9719e93c477622a8de27fa8a311ec6ac->m_frame.f_lineno = 450;
        tmp_right_name_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_getdelimited, &PyTuple_GET_ITEM( const_tuple_str_chr_91_str_digest_4785c769eb1af187e19d18bf425a5fd8_false_tuple, 0 ) );

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9719e93c477622a8de27fa8a311ec6ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9719e93c477622a8de27fa8a311ec6ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9719e93c477622a8de27fa8a311ec6ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9719e93c477622a8de27fa8a311ec6ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9719e93c477622a8de27fa8a311ec6ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9719e93c477622a8de27fa8a311ec6ac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9719e93c477622a8de27fa8a311ec6ac,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9719e93c477622a8de27fa8a311ec6ac == cache_frame_9719e93c477622a8de27fa8a311ec6ac )
    {
        Py_DECREF( frame_9719e93c477622a8de27fa8a311ec6ac );
    }
    cache_frame_9719e93c477622a8de27fa8a311ec6ac = NULL;

    assertFrameObject( frame_9719e93c477622a8de27fa8a311ec6ac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_16_getdomainliteral );
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
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_16_getdomainliteral );
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


static PyObject *impl_email$_parseaddr$$$function_17_getatom( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_atomends = python_pars[ 1 ];
    PyObject *var_atomlist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_ce45ecb5b37911262a25263894792c4d;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ce45ecb5b37911262a25263894792c4d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_str_empty_list );
        assert( var_atomlist == NULL );
        var_atomlist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce45ecb5b37911262a25263894792c4d, codeobj_ce45ecb5b37911262a25263894792c4d, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce45ecb5b37911262a25263894792c4d = cache_frame_ce45ecb5b37911262a25263894792c4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce45ecb5b37911262a25263894792c4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce45ecb5b37911262a25263894792c4d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_atomends );
        tmp_compexpr_left_1 = par_atomends;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atomends );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_atomends;
                assert( old != NULL );
                par_atomends = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pos );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 463;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 463;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "ooo";
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_atomends );
        tmp_compexpr_right_3 = par_atomends;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooo";
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
        goto loop_end_1;
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_atomlist );
            tmp_source_name_6 = var_atomlist;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 467;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 467;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 467;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_ce45ecb5b37911262a25263894792c4d->m_frame.f_lineno = 467;
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


                exception_lineno = 467;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pos );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_1__start;
            tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_1__end;
            tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
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
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EMPTYSTRING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 470;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_atomlist );
        tmp_args_element_name_2 = var_atomlist;
        frame_ce45ecb5b37911262a25263894792c4d->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce45ecb5b37911262a25263894792c4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce45ecb5b37911262a25263894792c4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce45ecb5b37911262a25263894792c4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce45ecb5b37911262a25263894792c4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce45ecb5b37911262a25263894792c4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce45ecb5b37911262a25263894792c4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce45ecb5b37911262a25263894792c4d,
        type_description_1,
        par_self,
        par_atomends,
        var_atomlist
    );


    // Release cached frame.
    if ( frame_ce45ecb5b37911262a25263894792c4d == cache_frame_ce45ecb5b37911262a25263894792c4d )
    {
        Py_DECREF( frame_ce45ecb5b37911262a25263894792c4d );
    }
    cache_frame_ce45ecb5b37911262a25263894792c4d = NULL;

    assertFrameObject( frame_ce45ecb5b37911262a25263894792c4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_17_getatom );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_atomends );
    Py_DECREF( par_atomends );
    par_atomends = NULL;

    CHECK_OBJECT( (PyObject *)var_atomlist );
    Py_DECREF( var_atomlist );
    var_atomlist = NULL;

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

    Py_XDECREF( par_atomends );
    par_atomends = NULL;

    CHECK_OBJECT( (PyObject *)var_atomlist );
    Py_DECREF( var_atomlist );
    var_atomlist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_17_getatom );
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


static PyObject *impl_email$_parseaddr$$$function_18_getphraselist( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_plist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_ff711bffdbb49ca377c255f7f751b274;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ff711bffdbb49ca377c255f7f751b274 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_plist == NULL );
        var_plist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff711bffdbb49ca377c255f7f751b274, codeobj_ff711bffdbb49ca377c255f7f751b274, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_ff711bffdbb49ca377c255f7f751b274 = cache_frame_ff711bffdbb49ca377c255f7f751b274;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff711bffdbb49ca377c255f7f751b274 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff711bffdbb49ca377c255f7f751b274 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pos );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_field );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "oo";
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
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_field );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pos );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_FWS );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 482;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pos );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
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
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_field );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 484;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_chr_34;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( var_plist );
                tmp_source_name_9 = var_plist;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_called_instance_1 = par_self;
                frame_ff711bffdbb49ca377c255f7f751b274->m_frame.f_lineno = 485;
                tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getquote );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 485;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_ff711bffdbb49ca377c255f7f751b274->m_frame.f_lineno = 485;
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


                    exception_lineno = 485;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_field );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_11 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_pos );
                if ( tmp_subscript_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 486;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_str_chr_40;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oo";
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_13 = par_self;
                    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_commentlist );
                    if ( tmp_source_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 487;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
                    Py_DECREF( tmp_source_name_12 );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 487;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_2 = par_self;
                    frame_ff711bffdbb49ca377c255f7f751b274->m_frame.f_lineno = 487;
                    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getcomment );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 487;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    frame_ff711bffdbb49ca377c255f7f751b274->m_frame.f_lineno = 487;
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


                        exception_lineno = 487;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_14 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_field );
                    if ( tmp_subscribed_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 488;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pos );
                    if ( tmp_subscript_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscribed_name_4 );

                        exception_lineno = 488;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                    Py_DECREF( tmp_subscribed_name_4 );
                    Py_DECREF( tmp_subscript_name_4 );
                    if ( tmp_compexpr_left_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 488;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_phraseends );
                    if ( tmp_compexpr_right_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_5 );

                        exception_lineno = 488;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
                    Py_DECREF( tmp_compexpr_left_5 );
                    Py_DECREF( tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 488;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_call_result_3;
                        PyObject *tmp_args_element_name_3;
                        PyObject *tmp_called_name_4;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_args_element_name_4;
                        PyObject *tmp_source_name_19;
                        CHECK_OBJECT( var_plist );
                        tmp_source_name_17 = var_plist;
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_append );
                        if ( tmp_called_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 491;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_18 = par_self;
                        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_getatom );
                        if ( tmp_called_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );

                            exception_lineno = 491;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_self );
                        tmp_source_name_19 = par_self;
                        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_phraseends );
                        if ( tmp_args_element_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );
                            Py_DECREF( tmp_called_name_4 );

                            exception_lineno = 491;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        frame_ff711bffdbb49ca377c255f7f751b274->m_frame.f_lineno = 491;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_4 };
                            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                        }

                        Py_DECREF( tmp_called_name_4 );
                        Py_DECREF( tmp_args_element_name_4 );
                        if ( tmp_args_element_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );

                            exception_lineno = 491;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        frame_ff711bffdbb49ca377c255f7f751b274->m_frame.f_lineno = 491;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_3 };
                            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                        }

                        Py_DECREF( tmp_called_name_3 );
                        Py_DECREF( tmp_args_element_name_3 );
                        if ( tmp_call_result_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 491;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_3 );
                    }
                    branch_end_5:;
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


        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff711bffdbb49ca377c255f7f751b274 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff711bffdbb49ca377c255f7f751b274 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff711bffdbb49ca377c255f7f751b274, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff711bffdbb49ca377c255f7f751b274->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff711bffdbb49ca377c255f7f751b274, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff711bffdbb49ca377c255f7f751b274,
        type_description_1,
        par_self,
        var_plist
    );


    // Release cached frame.
    if ( frame_ff711bffdbb49ca377c255f7f751b274 == cache_frame_ff711bffdbb49ca377c255f7f751b274 )
    {
        Py_DECREF( frame_ff711bffdbb49ca377c255f7f751b274 );
    }
    cache_frame_ff711bffdbb49ca377c255f7f751b274 = NULL;

    assertFrameObject( frame_ff711bffdbb49ca377c255f7f751b274 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_plist );
    tmp_return_value = var_plist;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_18_getphraselist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_plist );
    Py_DECREF( var_plist );
    var_plist = NULL;

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

    CHECK_OBJECT( (PyObject *)var_plist );
    Py_DECREF( var_plist );
    var_plist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_18_getphraselist );
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


static PyObject *impl_email$_parseaddr$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_field = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4cf17055adfd0e95338ede29ca6a03a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4cf17055adfd0e95338ede29ca6a03a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cf17055adfd0e95338ede29ca6a03a0, codeobj_4cf17055adfd0e95338ede29ca6a03a0, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_4cf17055adfd0e95338ede29ca6a03a0 = cache_frame_4cf17055adfd0e95338ede29ca6a03a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cf17055adfd0e95338ede29ca6a03a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cf17055adfd0e95338ede29ca6a03a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddrlistClass );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AddrlistClass );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AddrlistClass" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 498;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_field );
        tmp_args_element_name_2 = par_field;
        frame_4cf17055adfd0e95338ede29ca6a03a0->m_frame.f_lineno = 498;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_field );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_field );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            frame_4cf17055adfd0e95338ede29ca6a03a0->m_frame.f_lineno = 500;
            tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getaddrlist );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_addresslist, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = PyList_New( 0 );
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_addresslist, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 502;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cf17055adfd0e95338ede29ca6a03a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cf17055adfd0e95338ede29ca6a03a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cf17055adfd0e95338ede29ca6a03a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cf17055adfd0e95338ede29ca6a03a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cf17055adfd0e95338ede29ca6a03a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cf17055adfd0e95338ede29ca6a03a0,
        type_description_1,
        par_self,
        par_field
    );


    // Release cached frame.
    if ( frame_4cf17055adfd0e95338ede29ca6a03a0 == cache_frame_4cf17055adfd0e95338ede29ca6a03a0 )
    {
        Py_DECREF( frame_4cf17055adfd0e95338ede29ca6a03a0 );
    }
    cache_frame_4cf17055adfd0e95338ede29ca6a03a0 = NULL;

    assertFrameObject( frame_4cf17055adfd0e95338ede29ca6a03a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_19___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_field );
    Py_DECREF( par_field );
    par_field = NULL;

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

    CHECK_OBJECT( (PyObject *)par_field );
    Py_DECREF( par_field );
    par_field = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_19___init__ );
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


static PyObject *impl_email$_parseaddr$$$function_20___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_64b23ab4f4713725dce2911cf3759818;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64b23ab4f4713725dce2911cf3759818 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64b23ab4f4713725dce2911cf3759818, codeobj_64b23ab4f4713725dce2911cf3759818, module_email$_parseaddr, sizeof(void *) );
    frame_64b23ab4f4713725dce2911cf3759818 = cache_frame_64b23ab4f4713725dce2911cf3759818;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64b23ab4f4713725dce2911cf3759818 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64b23ab4f4713725dce2911cf3759818 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addresslist );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64b23ab4f4713725dce2911cf3759818 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64b23ab4f4713725dce2911cf3759818 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64b23ab4f4713725dce2911cf3759818 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64b23ab4f4713725dce2911cf3759818, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64b23ab4f4713725dce2911cf3759818->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64b23ab4f4713725dce2911cf3759818, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64b23ab4f4713725dce2911cf3759818,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_64b23ab4f4713725dce2911cf3759818 == cache_frame_64b23ab4f4713725dce2911cf3759818 )
    {
        Py_DECREF( frame_64b23ab4f4713725dce2911cf3759818 );
    }
    cache_frame_64b23ab4f4713725dce2911cf3759818 = NULL;

    assertFrameObject( frame_64b23ab4f4713725dce2911cf3759818 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_20___len__ );
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
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_20___len__ );
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


static PyObject *impl_email$_parseaddr$$$function_21___add__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_newaddr = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7f0942a92178632723119b9008c9e6c5;
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
    static struct Nuitka_FrameObject *cache_frame_7f0942a92178632723119b9008c9e6c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7f0942a92178632723119b9008c9e6c5, codeobj_7f0942a92178632723119b9008c9e6c5, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7f0942a92178632723119b9008c9e6c5 = cache_frame_7f0942a92178632723119b9008c9e6c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7f0942a92178632723119b9008c9e6c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7f0942a92178632723119b9008c9e6c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddressList );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AddressList );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AddressList" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_7f0942a92178632723119b9008c9e6c5->m_frame.f_lineno = 509;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_newaddr == NULL );
        var_newaddr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addresslist );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_none_none_none;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_newaddr );
        tmp_assattr_target_1 = var_newaddr;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_addresslist, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_other );
        tmp_source_name_2 = par_other;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addresslist );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 511;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_4;
            Py_INCREF( var_x );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addresslist );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_newaddr );
            tmp_source_name_4 = var_newaddr;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addresslist );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 513;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_x );
            tmp_args_element_name_1 = var_x;
            frame_7f0942a92178632723119b9008c9e6c5->m_frame.f_lineno = 513;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 513;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        type_description_1 = "oooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f0942a92178632723119b9008c9e6c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f0942a92178632723119b9008c9e6c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f0942a92178632723119b9008c9e6c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f0942a92178632723119b9008c9e6c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f0942a92178632723119b9008c9e6c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f0942a92178632723119b9008c9e6c5,
        type_description_1,
        par_self,
        par_other,
        var_newaddr,
        var_x
    );


    // Release cached frame.
    if ( frame_7f0942a92178632723119b9008c9e6c5 == cache_frame_7f0942a92178632723119b9008c9e6c5 )
    {
        Py_DECREF( frame_7f0942a92178632723119b9008c9e6c5 );
    }
    cache_frame_7f0942a92178632723119b9008c9e6c5 = NULL;

    assertFrameObject( frame_7f0942a92178632723119b9008c9e6c5 );

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

    CHECK_OBJECT( var_newaddr );
    tmp_return_value = var_newaddr;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_21___add__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_newaddr );
    Py_DECREF( var_newaddr );
    var_newaddr = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_newaddr );
    var_newaddr = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_21___add__ );
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


static PyObject *impl_email$_parseaddr$$$function_22___iadd__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c;
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
    static struct Nuitka_FrameObject *cache_frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c, codeobj_9cd2a4a55cdf57a1310f1f0fb1cbe17c, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c = cache_frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_other );
        tmp_source_name_1 = par_other;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addresslist );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 518;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_3;
            Py_INCREF( var_x );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addresslist );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addresslist );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_x );
            tmp_args_element_name_1 = var_x;
            frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c->m_frame.f_lineno = 520;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c,
        type_description_1,
        par_self,
        par_other,
        var_x
    );


    // Release cached frame.
    if ( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c == cache_frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c )
    {
        Py_DECREF( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c );
    }
    cache_frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c = NULL;

    assertFrameObject( frame_9cd2a4a55cdf57a1310f1f0fb1cbe17c );

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

    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_22___iadd__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_22___iadd__ );
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


static PyObject *impl_email$_parseaddr$$$function_23___sub__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_newaddr = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f2b160ec90053f8fc9b263226ecb1fd9;
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
    static struct Nuitka_FrameObject *cache_frame_f2b160ec90053f8fc9b263226ecb1fd9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2b160ec90053f8fc9b263226ecb1fd9, codeobj_f2b160ec90053f8fc9b263226ecb1fd9, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f2b160ec90053f8fc9b263226ecb1fd9 = cache_frame_f2b160ec90053f8fc9b263226ecb1fd9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2b160ec90053f8fc9b263226ecb1fd9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2b160ec90053f8fc9b263226ecb1fd9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddressList );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AddressList );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AddressList" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 525;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_f2b160ec90053f8fc9b263226ecb1fd9->m_frame.f_lineno = 525;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_newaddr == NULL );
        var_newaddr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addresslist );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 526;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_4;
            Py_INCREF( var_x );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT( par_other );
        tmp_source_name_2 = par_other;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addresslist );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 527;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 527;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_newaddr );
            tmp_source_name_3 = var_newaddr;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addresslist );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 528;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_x );
            tmp_args_element_name_1 = var_x;
            frame_f2b160ec90053f8fc9b263226ecb1fd9->m_frame.f_lineno = 528;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 528;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2b160ec90053f8fc9b263226ecb1fd9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2b160ec90053f8fc9b263226ecb1fd9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2b160ec90053f8fc9b263226ecb1fd9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2b160ec90053f8fc9b263226ecb1fd9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2b160ec90053f8fc9b263226ecb1fd9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2b160ec90053f8fc9b263226ecb1fd9,
        type_description_1,
        par_self,
        par_other,
        var_newaddr,
        var_x
    );


    // Release cached frame.
    if ( frame_f2b160ec90053f8fc9b263226ecb1fd9 == cache_frame_f2b160ec90053f8fc9b263226ecb1fd9 )
    {
        Py_DECREF( frame_f2b160ec90053f8fc9b263226ecb1fd9 );
    }
    cache_frame_f2b160ec90053f8fc9b263226ecb1fd9 = NULL;

    assertFrameObject( frame_f2b160ec90053f8fc9b263226ecb1fd9 );

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

    CHECK_OBJECT( var_newaddr );
    tmp_return_value = var_newaddr;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_23___sub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_newaddr );
    Py_DECREF( var_newaddr );
    var_newaddr = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_newaddr );
    var_newaddr = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_23___sub__ );
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


static PyObject *impl_email$_parseaddr$$$function_24___isub__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e47f0ce2e85bea29088830d47228bfd5;
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
    static struct Nuitka_FrameObject *cache_frame_e47f0ce2e85bea29088830d47228bfd5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e47f0ce2e85bea29088830d47228bfd5, codeobj_e47f0ce2e85bea29088830d47228bfd5, module_email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e47f0ce2e85bea29088830d47228bfd5 = cache_frame_e47f0ce2e85bea29088830d47228bfd5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e47f0ce2e85bea29088830d47228bfd5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e47f0ce2e85bea29088830d47228bfd5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_other );
        tmp_source_name_1 = par_other;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addresslist );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 533;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_3;
            Py_INCREF( var_x );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addresslist );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addresslist );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 535;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_x );
            tmp_args_element_name_1 = var_x;
            frame_e47f0ce2e85bea29088830d47228bfd5->m_frame.f_lineno = 535;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_remove, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 535;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e47f0ce2e85bea29088830d47228bfd5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e47f0ce2e85bea29088830d47228bfd5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e47f0ce2e85bea29088830d47228bfd5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e47f0ce2e85bea29088830d47228bfd5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e47f0ce2e85bea29088830d47228bfd5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e47f0ce2e85bea29088830d47228bfd5,
        type_description_1,
        par_self,
        par_other,
        var_x
    );


    // Release cached frame.
    if ( frame_e47f0ce2e85bea29088830d47228bfd5 == cache_frame_e47f0ce2e85bea29088830d47228bfd5 )
    {
        Py_DECREF( frame_e47f0ce2e85bea29088830d47228bfd5 );
    }
    cache_frame_e47f0ce2e85bea29088830d47228bfd5 = NULL;

    assertFrameObject( frame_e47f0ce2e85bea29088830d47228bfd5 );

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

    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_24___isub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_24___isub__ );
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


static PyObject *impl_email$_parseaddr$$$function_25___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_index = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_139e18cdb8832f2936517b6b99b65f17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_139e18cdb8832f2936517b6b99b65f17 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_139e18cdb8832f2936517b6b99b65f17, codeobj_139e18cdb8832f2936517b6b99b65f17, module_email$_parseaddr, sizeof(void *)+sizeof(void *) );
    frame_139e18cdb8832f2936517b6b99b65f17 = cache_frame_139e18cdb8832f2936517b6b99b65f17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_139e18cdb8832f2936517b6b99b65f17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_139e18cdb8832f2936517b6b99b65f17 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addresslist );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_index );
        tmp_subscript_name_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_139e18cdb8832f2936517b6b99b65f17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_139e18cdb8832f2936517b6b99b65f17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_139e18cdb8832f2936517b6b99b65f17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_139e18cdb8832f2936517b6b99b65f17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_139e18cdb8832f2936517b6b99b65f17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_139e18cdb8832f2936517b6b99b65f17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_139e18cdb8832f2936517b6b99b65f17,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame.
    if ( frame_139e18cdb8832f2936517b6b99b65f17 == cache_frame_139e18cdb8832f2936517b6b99b65f17 )
    {
        Py_DECREF( frame_139e18cdb8832f2936517b6b99b65f17 );
    }
    cache_frame_139e18cdb8832f2936517b6b99b65f17 = NULL;

    assertFrameObject( frame_139e18cdb8832f2936517b6b99b65f17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_25___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

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

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$_parseaddr$$$function_25___getitem__ );
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



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_10_getrouteaddr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_10_getrouteaddr,
        const_str_plain_getrouteaddr,
#if PYTHON_VERSION >= 300
        const_str_digest_d3fb8c2654c1918e87aa9f4d33369829,
#endif
        codeobj_9095c7a1ab2c03e52bfb8b4eddf59d2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_0f31a3180a2ee48342f1e758017e19b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_11_getaddrspec(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_11_getaddrspec,
        const_str_plain_getaddrspec,
#if PYTHON_VERSION >= 300
        const_str_digest_859981c7c1b5933339c0504fc3962cbe,
#endif
        codeobj_f50ebf24bc5b7d7de57c2a671ed749cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_964af0501dad3c155597daef02b65515,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_12_getdomain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_12_getdomain,
        const_str_plain_getdomain,
#if PYTHON_VERSION >= 300
        const_str_digest_e57ea08b7110c8a17e2a05392e4eb6fe,
#endif
        codeobj_678ad22578a99dcdee788e85273dcc60,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_f3002bab0927ff1980bb821637eb966d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_13_getdelimited( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_13_getdelimited,
        const_str_plain_getdelimited,
#if PYTHON_VERSION >= 300
        const_str_digest_a30142b5278125f0f4f41a86461cc83e,
#endif
        codeobj_a69690c49d527598d65a84a48fcbd118,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_48930c92c40a4c43e2b386b7aeae0e7d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_14_getquote(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_14_getquote,
        const_str_plain_getquote,
#if PYTHON_VERSION >= 300
        const_str_digest_38c1e4674a3d3409729b1762b2cac18b,
#endif
        codeobj_096f560ed75ba9326e22aedf229562a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_11f2fb395eb3d1bcb84b088cbd977291,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_15_getcomment(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_15_getcomment,
        const_str_plain_getcomment,
#if PYTHON_VERSION >= 300
        const_str_digest_df19d0c761abd86826e77f06a1f4c299,
#endif
        codeobj_53094b3685836dae01ae2b2bdab05523,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_24fbba627d2552038ed5e6fb5a86b549,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_16_getdomainliteral(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_16_getdomainliteral,
        const_str_plain_getdomainliteral,
#if PYTHON_VERSION >= 300
        const_str_digest_e391fbebd60c6bddbb3f1a25a164ed5b,
#endif
        codeobj_9719e93c477622a8de27fa8a311ec6ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_4c10ea677c5985268e1c1e519afaa07c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_17_getatom( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_17_getatom,
        const_str_plain_getatom,
#if PYTHON_VERSION >= 300
        const_str_digest_f40a07001cf534a9ff74c7f024c6ae90,
#endif
        codeobj_ce45ecb5b37911262a25263894792c4d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_ddf6c7cc780d451ffc34a9a4364ed04a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_18_getphraselist(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_18_getphraselist,
        const_str_plain_getphraselist,
#if PYTHON_VERSION >= 300
        const_str_digest_7090cf249c3582908cdbed990435c817,
#endif
        codeobj_ff711bffdbb49ca377c255f7f751b274,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_bdcebde3432f639563b92f72b787114c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_19___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_489468d43040bd349fad79a0859e81fe,
#endif
        codeobj_4cf17055adfd0e95338ede29ca6a03a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_1_parsedate_tz(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_1_parsedate_tz,
        const_str_plain_parsedate_tz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_63ba698f660678e99fdb9ba2fc3a7282,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_5e6858139daf36d44e718ecee097ee97,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_20___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_20___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 300
        const_str_digest_02136fd8dd9396db4fe0775d11f156ad,
#endif
        codeobj_64b23ab4f4713725dce2911cf3759818,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_21___add__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_21___add__,
        const_str_plain___add__,
#if PYTHON_VERSION >= 300
        const_str_digest_df4c8da05564ee27b2bd7a618eeccb59,
#endif
        codeobj_7f0942a92178632723119b9008c9e6c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_22___iadd__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_22___iadd__,
        const_str_plain___iadd__,
#if PYTHON_VERSION >= 300
        const_str_digest_7815c991d0afd7287e78713907983209,
#endif
        codeobj_9cd2a4a55cdf57a1310f1f0fb1cbe17c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_23___sub__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_23___sub__,
        const_str_plain___sub__,
#if PYTHON_VERSION >= 300
        const_str_digest_50cb28a74c0abb0150bab9c2a569a009,
#endif
        codeobj_f2b160ec90053f8fc9b263226ecb1fd9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_24___isub__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_24___isub__,
        const_str_plain___isub__,
#if PYTHON_VERSION >= 300
        const_str_digest_ec93d122199e6159d63db6147f8717ce,
#endif
        codeobj_e47f0ce2e85bea29088830d47228bfd5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_25___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_25___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_3b87ab80344ea5bb4a5b4d311d476990,
#endif
        codeobj_139e18cdb8832f2936517b6b99b65f17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_2__parsedate_tz(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_2__parsedate_tz,
        const_str_plain__parsedate_tz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a58d9f6ce19d7e4ee6b8224bfc61719,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_dc57a83f629836bb58a2f9270bf61cfd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_3_parsedate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_3_parsedate,
        const_str_plain_parsedate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d4ff104122529263f8b7a7b9dbb1a618,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_ca236d04fcee6bc49f19e4f6c825e3c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_4_mktime_tz(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_4_mktime_tz,
        const_str_plain_mktime_tz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_54a01e50dc2e9e6ce52703244df67744,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_c187ccaa27f2071bab4a2e5face88f40,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_5_quote(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_5_quote,
        const_str_plain_quote,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_84293de29f22d1ca1124bb5ae553f860,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_64b4968e38cf7e39d2c870c13dd738dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_80c0d04cc8346cad18e840f508fe1c9e,
#endif
        codeobj_5c9f3829b782f69df77623ea3eba072a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_75b168fba240912f90890636ee280c57,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_7_gotonext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_7_gotonext,
        const_str_plain_gotonext,
#if PYTHON_VERSION >= 300
        const_str_digest_9135bd4e7efb3acbb9a8ebf4ea4e2866,
#endif
        codeobj_e0651e3abcfd3db9aed53ec9cf27f4bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_fad78ae70f0f47bab7cf6c6815dd549a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_8_getaddrlist(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_8_getaddrlist,
        const_str_plain_getaddrlist,
#if PYTHON_VERSION >= 300
        const_str_digest_6677ff01973ad5462845c601087dc400,
#endif
        codeobj_c50bc9954be99adbb1483a7fe2a04c3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_5c89709a48945a5ebff790f6bfd4f4e7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$_parseaddr$$$function_9_getaddress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$_parseaddr$$$function_9_getaddress,
        const_str_plain_getaddress,
#if PYTHON_VERSION >= 300
        const_str_digest_4af07f555cf39ae48b35b4fa9abd691f,
#endif
        codeobj_e84f218dc50f9bf66473540e434ff93a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_email$_parseaddr,
        const_str_digest_f1cb0013611bc32f424141176b188e49,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email$_parseaddr =
{
    PyModuleDef_HEAD_INIT,
    "email._parseaddr",
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

MOD_INIT_DECL( email$_parseaddr )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email$_parseaddr );
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
    puts("email._parseaddr: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email._parseaddr: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email._parseaddr: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail$_parseaddr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email$_parseaddr = Py_InitModule4(
        "email._parseaddr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email$_parseaddr = PyModule_Create( &mdef_email$_parseaddr );
#endif

    moduledict_email$_parseaddr = MODULE_DICT( module_email$_parseaddr );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_email$_parseaddr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email$_parseaddr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$_parseaddr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$_parseaddr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email$_parseaddr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ac3c04695ae18e90f167bbe6a79ef359, module_email$_parseaddr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_69fb19d3aa6279cbe2ef99fe6a94a898;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_email$_parseaddr_203 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d0574a1829dd005417e9235480b7670b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d0574a1829dd005417e9235480b7670b_2 = NULL;
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
    PyObject *locals_email$_parseaddr_495 = NULL;
    struct Nuitka_FrameObject *frame_54f94964110b0ee723097125a093c7f9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_54f94964110b0ee723097125a093c7f9_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_01ddeff52903ebf9203a5861272393bd;
        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_69fb19d3aa6279cbe2ef99fe6a94a898 = MAKE_MODULE_FRAME( codeobj_69fb19d3aa6279cbe2ef99fe6a94a898, module_email$_parseaddr );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_69fb19d3aa6279cbe2ef99fe6a94a898 );
    assert( Py_REFCNT( frame_69fb19d3aa6279cbe2ef99fe6a94a898 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_92cc68f28b76d52409e08ee8e9149d92_list );
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_time;
        tmp_globals_name_1 = (PyObject *)moduledict_email$_parseaddr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame.f_lineno = 16;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_calendar;
        tmp_globals_name_2 = (PyObject *)moduledict_email$_parseaddr;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame.f_lineno = 16;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_space;
        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_empty;
        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
        UPDATE_STRING_DICT0( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_COMMASPACE, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_fb8548a88f43a901ee8de7b230c86a0a_list );
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_7cb077ac2ddb10d2fb6c6f0a558f0830_list );
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__daynames, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_Copy( const_dict_45a77cbc356231bd0aa293d6947517e6 );
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__timezones, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_email$_parseaddr$$$function_1_parsedate_tz(  );



        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_parsedate_tz, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_email$_parseaddr$$$function_2__parsedate_tz(  );



        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain__parsedate_tz, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_email$_parseaddr$$$function_3_parsedate(  );



        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_parsedate, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_email$_parseaddr$$$function_4_mktime_tz(  );



        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_mktime_tz, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_email$_parseaddr$$$function_5_quote(  );



        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
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


            exception_lineno = 203;

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


            exception_lineno = 203;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
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


            exception_lineno = 203;

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


            exception_lineno = 203;

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
            PyObject *tmp_assign_source_20;
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


                exception_lineno = 203;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_AddrlistClass_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame.f_lineno = 203;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_20;
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


                exception_lineno = 203;

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


                    exception_lineno = 203;

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

                    exception_lineno = 203;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 203;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_21;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_email$_parseaddr_203 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ac3c04695ae18e90f167bbe6a79ef359;
        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_d79cfdb9557c580313dead15cbd34257;
        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_AddrlistClass;
        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d0574a1829dd005417e9235480b7670b_2, codeobj_d0574a1829dd005417e9235480b7670b, module_email$_parseaddr, sizeof(void *) );
        frame_d0574a1829dd005417e9235480b7670b_2 = cache_frame_d0574a1829dd005417e9235480b7670b_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d0574a1829dd005417e9235480b7670b_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d0574a1829dd005417e9235480b7670b_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_6___init__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_7_gotonext(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_gotonext, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_8_getaddrlist(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getaddrlist, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_9_getaddress(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getaddress, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_10_getrouteaddr(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getrouteaddr, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_11_getaddrspec(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getaddrspec, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_12_getdomain(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getdomain, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_13_getdelimited( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getdelimited, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 403;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_14_getquote(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getquote, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_15_getcomment(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getcomment, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_16_getdomainliteral(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getdomainliteral, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_17_getatom( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getatom, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_18_getphraselist(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_203, const_str_plain_getphraselist, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d0574a1829dd005417e9235480b7670b_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d0574a1829dd005417e9235480b7670b_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d0574a1829dd005417e9235480b7670b_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d0574a1829dd005417e9235480b7670b_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d0574a1829dd005417e9235480b7670b_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d0574a1829dd005417e9235480b7670b_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_d0574a1829dd005417e9235480b7670b_2 == cache_frame_d0574a1829dd005417e9235480b7670b_2 )
        {
            Py_DECREF( frame_d0574a1829dd005417e9235480b7670b_2 );
        }
        cache_frame_d0574a1829dd005417e9235480b7670b_2 = NULL;

        assertFrameObject( frame_d0574a1829dd005417e9235480b7670b_2 );

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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_AddrlistClass;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_email$_parseaddr_203;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame.f_lineno = 203;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$_parseaddr );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_email$_parseaddr_203 );
        locals_email$_parseaddr_203 = NULL;
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

        Py_DECREF( locals_email$_parseaddr_203 );
        locals_email$_parseaddr_203 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$_parseaddr );
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
        NUITKA_CANNOT_GET_HERE( email$_parseaddr );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 203;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddrlistClass, tmp_assign_source_22 );
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddrlistClass );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AddrlistClass );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AddrlistClass" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 495;

            goto try_except_handler_4;
        }

        tmp_tuple_element_3 = tmp_mvar_value_3;
        tmp_assign_source_24 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
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


            exception_lineno = 495;

            goto try_except_handler_4;
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


            exception_lineno = 495;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_4;
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


            exception_lineno = 495;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        Py_DECREF( tmp_type_arg_2 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_3:;
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
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


            exception_lineno = 495;

            goto try_except_handler_4;
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


            exception_lineno = 495;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_28;
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


                exception_lineno = 495;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_AddressList;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame.f_lineno = 495;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 495;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_28;
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


                exception_lineno = 495;

                goto try_except_handler_4;
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


                    exception_lineno = 495;

                    goto try_except_handler_4;
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

                    exception_lineno = 495;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 495;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 495;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_29;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_email$_parseaddr_495 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ac3c04695ae18e90f167bbe6a79ef359;
        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_defb5316411f5eda4d458633449911f9;
        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_AddressList;
        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_54f94964110b0ee723097125a093c7f9_3, codeobj_54f94964110b0ee723097125a093c7f9, module_email$_parseaddr, sizeof(void *) );
        frame_54f94964110b0ee723097125a093c7f9_3 = cache_frame_54f94964110b0ee723097125a093c7f9_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_54f94964110b0ee723097125a093c7f9_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_54f94964110b0ee723097125a093c7f9_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_19___init__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_20___len__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___len__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_21___add__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___add__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_22___iadd__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___iadd__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_23___sub__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___sub__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_24___isub__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___isub__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_email$_parseaddr$$$function_25___getitem__(  );



        tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___getitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_54f94964110b0ee723097125a093c7f9_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_54f94964110b0ee723097125a093c7f9_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_54f94964110b0ee723097125a093c7f9_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_54f94964110b0ee723097125a093c7f9_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_54f94964110b0ee723097125a093c7f9_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_54f94964110b0ee723097125a093c7f9_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_54f94964110b0ee723097125a093c7f9_3 == cache_frame_54f94964110b0ee723097125a093c7f9_3 )
        {
            Py_DECREF( frame_54f94964110b0ee723097125a093c7f9_3 );
        }
        cache_frame_54f94964110b0ee723097125a093c7f9_3 = NULL;

        assertFrameObject( frame_54f94964110b0ee723097125a093c7f9_3 );

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


                exception_lineno = 495;

                goto try_except_handler_6;
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
            tmp_res = PyObject_SetItem( locals_email$_parseaddr_495, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 495;

                goto try_except_handler_6;
            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_AddressList;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_email$_parseaddr_495;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame.f_lineno = 495;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 495;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_30 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$_parseaddr );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_email$_parseaddr_495 );
        locals_email$_parseaddr_495 = NULL;
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

        Py_DECREF( locals_email$_parseaddr_495 );
        locals_email$_parseaddr_495 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( email$_parseaddr );
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
        NUITKA_CANNOT_GET_HERE( email$_parseaddr );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 495;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddressList, tmp_assign_source_30 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69fb19d3aa6279cbe2ef99fe6a94a898 );
#endif
    popFrameStack();

    assertFrameObject( frame_69fb19d3aa6279cbe2ef99fe6a94a898 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69fb19d3aa6279cbe2ef99fe6a94a898 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_69fb19d3aa6279cbe2ef99fe6a94a898, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_69fb19d3aa6279cbe2ef99fe6a94a898->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_69fb19d3aa6279cbe2ef99fe6a94a898, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_email$_parseaddr, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_email$_parseaddr );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
