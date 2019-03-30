/* Generated code for Python module 'posixpath'
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

/* The "_module_posixpath" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_posixpath;
PyDictObject *moduledict_posixpath;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_689d97326f0ebf35d54585a76b04c936;
extern PyObject *const_str_plain_defpath;
extern PyObject *const_str_plain_set;
extern PyObject *const_str_plain_fspath;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a250765a107d7d57a8b84e66d6eb166b;
extern PyObject *const_str_plain_pwd;
static PyObject *const_str_plain_comps;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_sep;
extern PyObject *const_str_plain_comp;
extern PyObject *const_tuple_str_plain_path_tuple;
extern PyObject *const_str_plain_ValueError;
static PyObject *const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple;
static PyObject *const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple;
static PyObject *const_str_plain_ino2;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_b1103b75937103fe3c728e801a96c739;
static PyObject *const_tuple_str_plain_filename_str_plain_path_str_plain_ok_tuple;
static PyObject *const_bytes_chr_36;
static PyObject *const_str_plain_ino1;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_st_dev;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_max;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_slice_int_pos_1_int_neg_1_none;
static PyObject *const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple;
extern PyObject *const_str_plain_prefix;
static PyObject *const_str_plain_empty;
static PyObject *const_bytes_chr_47;
static PyObject *const_str_plain_dotdot;
extern PyObject *const_str_plain_relpath;
extern PyObject *const_str_plain_a;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_rfind;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_AttributeError;
static PyObject *const_str_digest_e084d9312b34c8a5904de57ebbf664bb;
static PyObject *const_tuple_str_plain_commonpath_tuple;
extern PyObject *const_str_plain_normcase;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_getcwd;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_chr_36;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_1f5bd7b7cdf5210fb912c281960b3784;
static PyObject *const_str_plain_rel_list;
static PyObject *const_str_digest_e8e129de11dc1c2dd6bf5564336fc621;
extern PyObject *const_str_plain_expanduser;
static PyObject *const_bytes_digest_619dc84745473e473a3171d7c4141e1c;
extern PyObject *const_str_plain_stat;
static PyObject *const_bytes_chr_126;
static PyObject *const_tuple_str_plain_p_str_plain_sep_str_plain_i_tuple;
extern PyObject *const_str_plain_fsencode;
static PyObject *const_tuple_str_plain_path_str_plain_st_tuple;
extern PyObject *const_str_plain_paths;
extern PyObject *const_str_plain_TypeError;
extern PyObject *const_str_plain_join;
extern PyObject *const_bytes_chr_125;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_platform;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_islink;
static PyObject *const_tuple_32a689c16b0c6f9a7e85912e093cc562_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_plain_getpwuid;
static PyObject *const_str_digest_44ab9043440a6f5475044ca061c38b3a;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_HOME;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_chr_123;
static PyObject *const_str_digest_e957ed3279db0abd10e60989b2779ff8;
extern PyObject *const_str_plain_lexists;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_partition;
static PyObject *const_str_plain_getcwdb;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_devnull;
static PyObject *const_str_plain_dev1;
static PyObject *const_str_digest_1a12e8e6a69dd62f8ee1636cdc149b15;
static PyObject *const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple;
extern PyObject *const_str_plain_j;
static PyObject *const_str_plain__splitext;
extern PyObject *const_str_plain_KeyError;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain__get_sep;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_seen;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_2e5d09070c1bbc29393ec38d5e9c304c;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain__check_arg_types;
extern PyObject *const_str_plain_splitdrive;
extern PyObject *const_str_plain_s1;
extern PyObject *const_str_plain_commonprefix;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_head;
static PyObject *const_str_digest_3ebeee0cbb0ee362ec0aadfef9e7cff8;
static PyObject *const_tuple_str_plain_p_str_plain_sep_str_plain_extsep_tuple;
extern PyObject *const_str_plain_normpath;
extern PyObject *const_slice_none_int_0_none;
extern PyObject *const_str_plain_parent;
static PyObject *const_str_digest_7c7ed7b8d89e8602c36c96b5789260a0;
static PyObject *const_str_plain_newpath;
extern PyObject *const_bytes_chr_46;
static PyObject *const_tuple_str_digest_a250765a107d7d57a8b84e66d6eb166b_tuple;
static PyObject *const_str_digest_701fa0e7722c57df7eb7635e34fa8871;
static PyObject *const_str_plain_new_comps;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_append;
extern PyObject *const_tuple_str_plain_path_str_plain_sep_tuple;
static PyObject *const_str_plain_start_list;
extern PyObject *const_str_plain_tail;
extern PyObject *const_str_chr_125;
extern PyObject *const_str_plain_curdir;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_userhome;
static PyObject *const_bytes_chr_123;
static PyObject *const_str_digest_af9ffe54a70f7a2624fb2d45cf3e6229;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_span;
static PyObject *const_str_digest_523bbf3c556796a50a49c4c020958a1b;
static PyObject *const_tuple_89639440c52efaec6ce612a28102e1c7_tuple;
static PyObject *const_str_plain_initial_slashes;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_isabs;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_split_paths;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_c6d4672103e05daf95e66f9650159637_tuple;
extern PyObject *const_str_plain_st_mode;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_realpath;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_e31e7a21e5597f1c28e6caa1503351b2;
extern PyObject *const_str_plain_splitext;
static PyObject *const_str_plain_BytesWarning;
extern PyObject *const_slice_none_int_pos_1_none;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_getuid;
extern PyObject *const_str_plain_rest;
static PyObject *const_str_digest_5496ff33dd61dd4d7378939d9b861cfc;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_getpwnam;
static PyObject *const_str_digest_0512d1631454e86e375a4a4113b64782;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_altsep;
extern PyObject *const_str_plain_ok;
extern PyObject *const_str_plain_st_ino;
static PyObject *const_str_digest_410feef5d2282fab7cabb3ceeb8d0601;
static PyObject *const_str_plain_extsep;
static PyObject *const_str_digest_bb6ac4d09e8375224e2e45f51638261b;
static PyObject *const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple;
extern PyObject *const_str_plain_lstat;
static PyObject *const_str_plain__joinrealpath;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_6058b8b47c5b0b116f271ba9e0feb694;
static PyObject *const_tuple_str_digest_1f5bd7b7cdf5210fb912c281960b3784_tuple;
extern PyObject *const_str_plain_OSError;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_digest_7b79a8950d64155a442741f6cc8c809b;
extern PyObject *const_str_plain_s2;
static PyObject *const_str_plain_pw_dir;
static PyObject *const_str_plain_ismount;
static PyObject *const_str_plain_tilde;
static PyObject *const_tuple_873b9b0fb3230c08849a837942aa107a_tuple;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_commonpath;
extern PyObject *const_str_plain_ASCII;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_cwd;
extern PyObject *const_str_plain_st;
static PyObject *const_str_digest_d846a94230723ca9679176ff3600da9f;
extern PyObject *const_str_plain__;
extern PyObject *const_str_chr_126;
static PyObject *const_str_plain_environb;
static PyObject *const_str_digest_16a4a9b9dacb0fb063cce9cb46e76c61;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_basename;
static PyObject *const_str_plain_pwent;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_expandvars;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_isinstance;
extern PyObject *const_str_plain_filename;
extern PyObject *const_tuple_str_plain_s_str_plain_sep_tuple;
extern PyObject *const_str_plain_getattr;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain__varprogb;
extern PyObject *const_str_plain_posixpath;
static PyObject *const_bytes_digest_9c4bca9d222e07510ef0a0ee3fdb36d9;
extern PyObject *const_str_plain_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_curdir_tuple;
static PyObject *const_str_digest_889e73b06bccabeb860b4570072af6c7;
static PyObject *const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_pardir;
static PyObject *const_str_plain_supports_unicode_filenames;
static PyObject *const_str_digest_18a23ac1f0cd40a463ca97aa3ef3c83c;
extern PyObject *const_str_plain_rstrip;
extern PyObject *const_str_plain_fsdecode;
static PyObject *const_tuple_str_digest_6058b8b47c5b0b116f271ba9e0feb694_tuple;
extern PyObject *const_str_plain_pathsep;
static PyObject *const_tuple_str_plain_path_str_plain_cwd_tuple;
static PyObject *const_str_plain_path_list;
static PyObject *const_list_a67fb49f51c8ca43239e54c479acc2ea_list;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_S_ISLNK;
extern PyObject *const_str_plain_readlink;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_a95935884e50a51dbe5b47044bdbd9e1;
extern PyObject *const_str_plain_darwin;
static PyObject *const_tuple_str_plain_c_str_plain_curdir_tuple;
static PyObject *const_str_plain_dev2;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_805ca885f4b0f82e3997f120f096a561;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
static PyObject *const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple;
extern PyObject *const_str_plain_find;
static PyObject *const_tuple_str_plain_p_tuple;
extern PyObject *const_str_plain_common;
static PyObject *const_str_plain__varprog;
static PyObject *const_str_plain_genericpath;
static PyObject *const_str_digest_ec1a55942773a1ed1b0ab975ca03ca6f;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_689d97326f0ebf35d54585a76b04c936 = UNSTREAM_STRING_ASCII( &constant_bin[ 513780 ], 54, 0 );
    const_str_digest_a250765a107d7d57a8b84e66d6eb166b = UNSTREAM_STRING_ASCII( &constant_bin[ 513834 ], 37, 0 );
    const_str_plain_comps = UNSTREAM_STRING_ASCII( &constant_bin[ 87848 ], 5, 1 );
    const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 1, const_str_plain_re ); Py_INCREF( const_str_plain_re );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 2, const_str_plain_search ); Py_INCREF( const_str_plain_search );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 3, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 4, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 5, const_str_plain_environ ); Py_INCREF( const_str_plain_environ );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 7, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 8, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 9, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 10, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 11, const_str_plain_tail ); Py_INCREF( const_str_plain_tail );
    const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple, 3, const_str_plain_head ); Py_INCREF( const_str_plain_head );
    PyTuple_SET_ITEM( const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple, 4, const_str_plain_tail ); Py_INCREF( const_str_plain_tail );
    const_str_plain_ino2 = UNSTREAM_STRING_ASCII( &constant_bin[ 513871 ], 4, 1 );
    const_str_digest_b1103b75937103fe3c728e801a96c739 = UNSTREAM_STRING_ASCII( &constant_bin[ 513875 ], 38, 0 );
    const_tuple_str_plain_filename_str_plain_path_str_plain_ok_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_path_str_plain_ok_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_path_str_plain_ok_tuple, 1, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_path_str_plain_ok_tuple, 2, const_str_plain_ok ); Py_INCREF( const_str_plain_ok );
    const_bytes_chr_36 = UNSTREAM_BYTES( &constant_bin[ 8970 ], 1 );
    const_str_plain_ino1 = UNSTREAM_STRING_ASCII( &constant_bin[ 513913 ], 4, 1 );
    const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple, 3, const_str_plain_head ); Py_INCREF( const_str_plain_head );
    const_str_plain_empty = UNSTREAM_STRING_ASCII( &constant_bin[ 41677 ], 5, 1 );
    const_bytes_chr_47 = UNSTREAM_BYTES( &constant_bin[ 2189 ], 1 );
    const_str_plain_dotdot = UNSTREAM_STRING_ASCII( &constant_bin[ 513917 ], 6, 1 );
    const_str_digest_e084d9312b34c8a5904de57ebbf664bb = UNSTREAM_STRING_ASCII( &constant_bin[ 513923 ], 48, 0 );
    const_tuple_str_plain_commonpath_tuple = PyTuple_New( 1 );
    const_str_plain_commonpath = UNSTREAM_STRING_ASCII( &constant_bin[ 513834 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_commonpath_tuple, 0, const_str_plain_commonpath ); Py_INCREF( const_str_plain_commonpath );
    const_str_digest_1f5bd7b7cdf5210fb912c281960b3784 = UNSTREAM_STRING_ASCII( &constant_bin[ 513971 ], 37, 0 );
    const_str_plain_rel_list = UNSTREAM_STRING_ASCII( &constant_bin[ 514008 ], 8, 1 );
    const_str_digest_e8e129de11dc1c2dd6bf5564336fc621 = UNSTREAM_STRING_ASCII( &constant_bin[ 514016 ], 68, 0 );
    const_bytes_digest_619dc84745473e473a3171d7c4141e1c = UNSTREAM_BYTES( &constant_bin[ 514084 ], 17 );
    const_bytes_chr_126 = UNSTREAM_BYTES( &constant_bin[ 49084 ], 1 );
    const_tuple_str_plain_p_str_plain_sep_str_plain_i_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_i_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_path_str_plain_st_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_st_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_st_tuple, 1, const_str_plain_st ); Py_INCREF( const_str_plain_st );
    const_tuple_32a689c16b0c6f9a7e85912e093cc562_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_32a689c16b0c6f9a7e85912e093cc562_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_32a689c16b0c6f9a7e85912e093cc562_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_32a689c16b0c6f9a7e85912e093cc562_tuple, 2, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    const_str_digest_44ab9043440a6f5475044ca061c38b3a = UNSTREAM_STRING_ASCII( &constant_bin[ 514101 ], 108, 0 );
    const_str_digest_e957ed3279db0abd10e60989b2779ff8 = UNSTREAM_STRING_ASCII( &constant_bin[ 514209 ], 74, 0 );
    const_str_plain_getcwdb = UNSTREAM_STRING_ASCII( &constant_bin[ 514283 ], 7, 1 );
    const_str_plain_dev1 = UNSTREAM_STRING_ASCII( &constant_bin[ 514290 ], 4, 1 );
    const_str_digest_1a12e8e6a69dd62f8ee1636cdc149b15 = UNSTREAM_STRING_ASCII( &constant_bin[ 514294 ], 18, 0 );
    const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain_tilde = UNSTREAM_STRING_ASCII( &constant_bin[ 313825 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 1, const_str_plain_tilde ); Py_INCREF( const_str_plain_tilde );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 2, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 4, const_str_plain_pwd ); Py_INCREF( const_str_plain_pwd );
    const_str_plain_userhome = UNSTREAM_STRING_ASCII( &constant_bin[ 514312 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 5, const_str_plain_userhome ); Py_INCREF( const_str_plain_userhome );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 6, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_pwent = UNSTREAM_STRING_ASCII( &constant_bin[ 514320 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 7, const_str_plain_pwent ); Py_INCREF( const_str_plain_pwent );
    PyTuple_SET_ITEM( const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 8, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    const_str_plain__splitext = UNSTREAM_STRING_ASCII( &constant_bin[ 514325 ], 9, 1 );
    const_str_plain__get_sep = UNSTREAM_STRING_ASCII( &constant_bin[ 514334 ], 8, 1 );
    const_str_digest_2e5d09070c1bbc29393ec38d5e9c304c = UNSTREAM_STRING_ASCII( &constant_bin[ 514342 ], 487, 0 );
    const_str_plain__check_arg_types = UNSTREAM_STRING_ASCII( &constant_bin[ 514829 ], 16, 1 );
    const_str_digest_3ebeee0cbb0ee362ec0aadfef9e7cff8 = UNSTREAM_STRING_ASCII( &constant_bin[ 514845 ], 67, 0 );
    const_tuple_str_plain_p_str_plain_sep_str_plain_extsep_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_extsep_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_extsep_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    const_str_plain_extsep = UNSTREAM_STRING_ASCII( &constant_bin[ 514912 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_sep_str_plain_extsep_tuple, 2, const_str_plain_extsep ); Py_INCREF( const_str_plain_extsep );
    const_str_digest_7c7ed7b8d89e8602c36c96b5789260a0 = UNSTREAM_STRING_ASCII( &constant_bin[ 514918 ], 45, 0 );
    const_str_plain_newpath = UNSTREAM_STRING_ASCII( &constant_bin[ 514963 ], 7, 1 );
    const_tuple_str_digest_a250765a107d7d57a8b84e66d6eb166b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a250765a107d7d57a8b84e66d6eb166b_tuple, 0, const_str_digest_a250765a107d7d57a8b84e66d6eb166b ); Py_INCREF( const_str_digest_a250765a107d7d57a8b84e66d6eb166b );
    const_str_digest_701fa0e7722c57df7eb7635e34fa8871 = UNSTREAM_STRING_ASCII( &constant_bin[ 514970 ], 12, 0 );
    const_str_plain_new_comps = UNSTREAM_STRING_ASCII( &constant_bin[ 514982 ], 9, 1 );
    const_str_plain_start_list = UNSTREAM_STRING_ASCII( &constant_bin[ 514991 ], 10, 1 );
    const_bytes_chr_123 = UNSTREAM_BYTES( &constant_bin[ 8978 ], 1 );
    const_str_digest_af9ffe54a70f7a2624fb2d45cf3e6229 = UNSTREAM_STRING_ASCII( &constant_bin[ 515001 ], 50, 0 );
    const_str_digest_523bbf3c556796a50a49c4c020958a1b = UNSTREAM_STRING_ASCII( &constant_bin[ 515051 ], 35, 0 );
    const_tuple_89639440c52efaec6ce612a28102e1c7_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 1, const_str_plain_rest ); Py_INCREF( const_str_plain_rest );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 2, const_str_plain_seen ); Py_INCREF( const_str_plain_seen );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 3, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 4, const_str_plain_curdir ); Py_INCREF( const_str_plain_curdir );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 5, const_str_plain_pardir ); Py_INCREF( const_str_plain_pardir );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 6, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 7, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 8, const_str_plain_newpath ); Py_INCREF( const_str_plain_newpath );
    PyTuple_SET_ITEM( const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 9, const_str_plain_ok ); Py_INCREF( const_str_plain_ok );
    const_str_plain_initial_slashes = UNSTREAM_STRING_ASCII( &constant_bin[ 515086 ], 15, 1 );
    const_str_plain_split_paths = UNSTREAM_STRING_ASCII( &constant_bin[ 515101 ], 11, 1 );
    const_tuple_c6d4672103e05daf95e66f9650159637_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 1, const_str_plain_s1 ); Py_INCREF( const_str_plain_s1 );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 2, const_str_plain_parent ); Py_INCREF( const_str_plain_parent );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 3, const_str_plain_s2 ); Py_INCREF( const_str_plain_s2 );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 4, const_str_plain_dev1 ); Py_INCREF( const_str_plain_dev1 );
    const_str_plain_dev2 = UNSTREAM_STRING_ASCII( &constant_bin[ 515112 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 5, const_str_plain_dev2 ); Py_INCREF( const_str_plain_dev2 );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 6, const_str_plain_ino1 ); Py_INCREF( const_str_plain_ino1 );
    PyTuple_SET_ITEM( const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 7, const_str_plain_ino2 ); Py_INCREF( const_str_plain_ino2 );
    const_str_digest_e31e7a21e5597f1c28e6caa1503351b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 515116 ], 36, 0 );
    const_str_plain_BytesWarning = UNSTREAM_STRING_ASCII( &constant_bin[ 5037 ], 12, 1 );
    const_str_digest_5496ff33dd61dd4d7378939d9b861cfc = UNSTREAM_STRING_ASCII( &constant_bin[ 515152 ], 29, 0 );
    const_str_digest_0512d1631454e86e375a4a4113b64782 = UNSTREAM_STRING_ASCII( &constant_bin[ 515181 ], 31, 0 );
    const_str_digest_410feef5d2282fab7cabb3ceeb8d0601 = UNSTREAM_STRING_ASCII( &constant_bin[ 515212 ], 41, 0 );
    const_str_digest_bb6ac4d09e8375224e2e45f51638261b = UNSTREAM_STRING_ASCII( &constant_bin[ 515253 ], 128, 0 );
    const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 2, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 3, const_str_plain_dot ); Py_INCREF( const_str_plain_dot );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 4, const_str_plain_dotdot ); Py_INCREF( const_str_plain_dotdot );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 5, const_str_plain_initial_slashes ); Py_INCREF( const_str_plain_initial_slashes );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 6, const_str_plain_comps ); Py_INCREF( const_str_plain_comps );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 7, const_str_plain_new_comps ); Py_INCREF( const_str_plain_new_comps );
    PyTuple_SET_ITEM( const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 8, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    const_str_plain__joinrealpath = UNSTREAM_STRING_ASCII( &constant_bin[ 515381 ], 13, 1 );
    const_str_digest_6058b8b47c5b0b116f271ba9e0feb694 = UNSTREAM_STRING_ASCII( &constant_bin[ 515394 ], 17, 0 );
    const_tuple_str_digest_1f5bd7b7cdf5210fb912c281960b3784_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1f5bd7b7cdf5210fb912c281960b3784_tuple, 0, const_str_digest_1f5bd7b7cdf5210fb912c281960b3784 ); Py_INCREF( const_str_digest_1f5bd7b7cdf5210fb912c281960b3784 );
    const_str_plain_pw_dir = UNSTREAM_STRING_ASCII( &constant_bin[ 515411 ], 6, 1 );
    const_str_plain_ismount = UNSTREAM_STRING_ASCII( &constant_bin[ 515417 ], 7, 1 );
    const_tuple_873b9b0fb3230c08849a837942aa107a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 1, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 2, const_str_plain_curdir ); Py_INCREF( const_str_plain_curdir );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 3, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 4, const_str_plain_pardir ); Py_INCREF( const_str_plain_pardir );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 5, const_str_plain_start_list ); Py_INCREF( const_str_plain_start_list );
    const_str_plain_path_list = UNSTREAM_STRING_ASCII( &constant_bin[ 515424 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 6, const_str_plain_path_list ); Py_INCREF( const_str_plain_path_list );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 8, const_str_plain_rel_list ); Py_INCREF( const_str_plain_rel_list );
    const_str_plain_cwd = UNSTREAM_STRING_ASCII( &constant_bin[ 514286 ], 3, 1 );
    const_str_digest_d846a94230723ca9679176ff3600da9f = UNSTREAM_STRING_ASCII( &constant_bin[ 515433 ], 90, 0 );
    const_str_plain_environb = UNSTREAM_STRING_ASCII( &constant_bin[ 515523 ], 8, 1 );
    const_str_digest_16a4a9b9dacb0fb063cce9cb46e76c61 = UNSTREAM_STRING_ASCII( &constant_bin[ 515531 ], 24, 0 );
    const_str_plain__varprogb = UNSTREAM_STRING_ASCII( &constant_bin[ 515555 ], 9, 1 );
    const_bytes_digest_9c4bca9d222e07510ef0a0ee3fdb36d9 = UNSTREAM_BYTES( &constant_bin[ 16192 ], 2 );
    const_tuple_str_plain_s_str_plain_curdir_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_curdir_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_curdir_tuple, 1, const_str_plain_curdir ); Py_INCREF( const_str_plain_curdir );
    const_str_digest_889e73b06bccabeb860b4570072af6c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 515564 ], 14, 0 );
    const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple, 2, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple, 4, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain_supports_unicode_filenames = UNSTREAM_STRING_ASCII( &constant_bin[ 515578 ], 26, 1 );
    const_str_digest_18a23ac1f0cd40a463ca97aa3ef3c83c = UNSTREAM_STRING_ASCII( &constant_bin[ 514084 ], 17, 0 );
    const_tuple_str_digest_6058b8b47c5b0b116f271ba9e0feb694_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6058b8b47c5b0b116f271ba9e0feb694_tuple, 0, const_str_digest_6058b8b47c5b0b116f271ba9e0feb694 ); Py_INCREF( const_str_digest_6058b8b47c5b0b116f271ba9e0feb694 );
    const_tuple_str_plain_path_str_plain_cwd_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_cwd_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_str_plain_cwd_tuple, 1, const_str_plain_cwd ); Py_INCREF( const_str_plain_cwd );
    const_list_a67fb49f51c8ca43239e54c479acc2ea_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 515604 ], 378 );
    const_tuple_str_plain_c_str_plain_curdir_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_curdir_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_curdir_tuple, 1, const_str_plain_curdir ); Py_INCREF( const_str_plain_curdir );
    const_str_digest_805ca885f4b0f82e3997f120f096a561 = UNSTREAM_STRING_ASCII( &constant_bin[ 515982 ], 230, 0 );
    const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 0, const_str_plain_paths ); Py_INCREF( const_str_plain_paths );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 2, const_str_plain_curdir ); Py_INCREF( const_str_plain_curdir );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 3, const_str_plain_split_paths ); Py_INCREF( const_str_plain_split_paths );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 4, const_str_plain_isabs ); Py_INCREF( const_str_plain_isabs );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 5, const_str_plain_s1 ); Py_INCREF( const_str_plain_s1 );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 6, const_str_plain_s2 ); Py_INCREF( const_str_plain_s2 );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 7, const_str_plain_common ); Py_INCREF( const_str_plain_common );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 8, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 9, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 10, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_tuple_str_plain_p_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_plain__varprog = UNSTREAM_STRING_ASCII( &constant_bin[ 515555 ], 8, 1 );
    const_str_plain_genericpath = UNSTREAM_STRING_ASCII( &constant_bin[ 516212 ], 11, 1 );
    const_str_digest_ec1a55942773a1ed1b0ab975ca03ca6f = UNSTREAM_STRING_ASCII( &constant_bin[ 516223 ], 79, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_posixpath( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5c1ebb48dafe0dcac44e2789fbbb977e;
static PyCodeObject *codeobj_580b416fd3249f100b2206c5f2e847e9;
static PyCodeObject *codeobj_ba6b83a4682530271f13a5d9b87cfd8e;
static PyCodeObject *codeobj_629587f1c7e8a57b82ce3cc8cf836c95;
static PyCodeObject *codeobj_4eb7e5185dd90c9bf2852e9954b4ebd5;
static PyCodeObject *codeobj_c127bb162707ffe2a40f889bd66ed297;
static PyCodeObject *codeobj_72906f671423e389d38a290f92f60d4a;
static PyCodeObject *codeobj_7717b938ff4fd3f9af100f43a2f7ded4;
static PyCodeObject *codeobj_16335085026ecaac193d47cfd3adf26d;
static PyCodeObject *codeobj_8245de23f6e4d7c84fa131d25024e506;
static PyCodeObject *codeobj_fd091b000d5d7971c3aa77f9917ab0f4;
static PyCodeObject *codeobj_d99a59f2b05188310cab52c877a96534;
static PyCodeObject *codeobj_ebc5658db313ea15d29a93d4f409547c;
static PyCodeObject *codeobj_1ad1d92b452d1befb2c72e832829209c;
static PyCodeObject *codeobj_7ef05e1614c9d2572427d000df4409b1;
static PyCodeObject *codeobj_628b738afa890ab587d5950a4a85db0a;
static PyCodeObject *codeobj_78a54ba806e1672841f32242f232b1bd;
static PyCodeObject *codeobj_397202efc2b630cb188b236126d5db05;
static PyCodeObject *codeobj_887486b44ad26d3c0d0db1fd31143c3f;
static PyCodeObject *codeobj_00c7312b8dfff6ce8e6bbf21ad113834;
static PyCodeObject *codeobj_00e99e93bef9d23175c34f79dbcd3bf7;
static PyCodeObject *codeobj_66367538a4ae89f5640c2965f7170c02;
static PyCodeObject *codeobj_4fef3835bf939f079960d8171920406b;
static PyCodeObject *codeobj_4fd7665c81fa92877db1855c758dacc9;
static PyCodeObject *codeobj_523314e93f947be88fab8eaaa0c505b0;
static PyCodeObject *codeobj_974ab439aba454e1b4acb90bc219172d;
static PyCodeObject *codeobj_9d6ff0e77641baeb8603519524738996;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_701fa0e7722c57df7eb7635e34fa8871 );
    codeobj_5c1ebb48dafe0dcac44e2789fbbb977e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 512, const_tuple_32a689c16b0c6f9a7e85912e093cc562_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_580b416fd3249f100b2206c5f2e847e9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 475, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba6b83a4682530271f13a5d9b87cfd8e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 476, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_629587f1c7e8a57b82ce3cc8cf836c95 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 509, const_tuple_str_plain_path_str_plain_sep_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4eb7e5185dd90c9bf2852e9954b4ebd5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 516, const_tuple_str_plain_c_str_plain_curdir_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c127bb162707ffe2a40f889bd66ed297 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 516, const_tuple_str_plain_s_str_plain_curdir_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72906f671423e389d38a290f92f60d4a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1a12e8e6a69dd62f8ee1636cdc149b15, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7717b938ff4fd3f9af100f43a2f7ded4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_sep, 41, const_tuple_str_plain_path_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_16335085026ecaac193d47cfd3adf26d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__joinrealpath, 400, const_tuple_89639440c52efaec6ce612a28102e1c7_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8245de23f6e4d7c84fa131d25024e506 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_abspath, 376, const_tuple_str_plain_path_str_plain_cwd_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fd091b000d5d7971c3aa77f9917ab0f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_basename, 144, const_tuple_str_plain_p_str_plain_sep_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d99a59f2b05188310cab52c877a96534 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_commonpath, 494, const_tuple_8c6270da38e4c87e4e75c4b4f37e0b7f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ebc5658db313ea15d29a93d4f409547c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dirname, 154, const_tuple_str_plain_p_str_plain_sep_str_plain_i_str_plain_head_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ad1d92b452d1befb2c72e832829209c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expanduser, 232, const_tuple_2f9ed1dc4c2674ceebb1602c1fae137d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ef05e1614c9d2572427d000df4409b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expandvars, 285, const_tuple_c84daf717f7e28bea734fbac1252f43b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_628b738afa890ab587d5950a4a85db0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isabs, 64, const_tuple_str_plain_s_str_plain_sep_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_78a54ba806e1672841f32242f232b1bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_islink, 168, const_tuple_str_plain_path_str_plain_st_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_397202efc2b630cb188b236126d5db05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ismount, 190, const_tuple_c6d4672103e05daf95e66f9650159637_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_887486b44ad26d3c0d0db1fd31143c3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_join, 75, const_tuple_a131fdc42d367b19b93c90c8b592d1ea_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_00c7312b8dfff6ce8e6bbf21ad113834 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lexists, 178, const_tuple_str_plain_path_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_00e99e93bef9d23175c34f79dbcd3bf7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normcase, 52, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_66367538a4ae89f5640c2965f7170c02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normpath, 338, const_tuple_226eb69e8d4243a1334e9de2952121ce_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4fef3835bf939f079960d8171920406b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_realpath, 391, const_tuple_str_plain_filename_str_plain_path_str_plain_ok_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4fd7665c81fa92877db1855c758dacc9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_relpath, 453, const_tuple_873b9b0fb3230c08849a837942aa107a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_523314e93f947be88fab8eaaa0c505b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_split, 104, const_tuple_7b267442fbdbbab9f11565da9cda1136_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_974ab439aba454e1b4acb90bc219172d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_splitdrive, 135, const_tuple_str_plain_p_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d6ff0e77641baeb8603519524738996 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_splitext, 121, const_tuple_str_plain_p_str_plain_sep_str_plain_extsep_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_posixpath$$$function_10_islink(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_11_lexists(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_12_ismount(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_13_expanduser(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_14_expandvars(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_15_normpath(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_16_abspath(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_17_realpath(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_18__joinrealpath(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_19_relpath( PyObject *defaults );


static PyObject *MAKE_FUNCTION_posixpath$$$function_1__get_sep(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_20_commonpath(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_2_normcase(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_3_isabs(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_4_join(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_5_split(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_6_splitext(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_7_splitdrive(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_8_basename(  );


static PyObject *MAKE_FUNCTION_posixpath$$$function_9_dirname(  );


// The module function definitions.
static PyObject *impl_posixpath$$$function_1__get_sep( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7717b938ff4fd3f9af100f43a2f7ded4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7717b938ff4fd3f9af100f43a2f7ded4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7717b938ff4fd3f9af100f43a2f7ded4, codeobj_7717b938ff4fd3f9af100f43a2f7ded4, module_posixpath, sizeof(void *) );
    frame_7717b938ff4fd3f9af100f43a2f7ded4 = cache_frame_7717b938ff4fd3f9af100f43a2f7ded4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7717b938ff4fd3f9af100f43a2f7ded4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7717b938ff4fd3f9af100f43a2f7ded4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_7717b938ff4fd3f9af100f43a2f7ded4->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 42;
            type_description_1 = "o";
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
        tmp_return_value = const_bytes_chr_47;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_str_chr_47;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7717b938ff4fd3f9af100f43a2f7ded4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7717b938ff4fd3f9af100f43a2f7ded4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7717b938ff4fd3f9af100f43a2f7ded4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7717b938ff4fd3f9af100f43a2f7ded4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7717b938ff4fd3f9af100f43a2f7ded4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7717b938ff4fd3f9af100f43a2f7ded4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7717b938ff4fd3f9af100f43a2f7ded4,
        type_description_1,
        par_path
    );


    // Release cached frame.
    if ( frame_7717b938ff4fd3f9af100f43a2f7ded4 == cache_frame_7717b938ff4fd3f9af100f43a2f7ded4 )
    {
        Py_DECREF( frame_7717b938ff4fd3f9af100f43a2f7ded4 );
    }
    cache_frame_7717b938ff4fd3f9af100f43a2f7ded4 = NULL;

    assertFrameObject( frame_7717b938ff4fd3f9af100f43a2f7ded4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_1__get_sep );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_1__get_sep );
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


static PyObject *impl_posixpath$$$function_2_normcase( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_00e99e93bef9d23175c34f79dbcd3bf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_00e99e93bef9d23175c34f79dbcd3bf7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00e99e93bef9d23175c34f79dbcd3bf7, codeobj_00e99e93bef9d23175c34f79dbcd3bf7, module_posixpath, sizeof(void *) );
    frame_00e99e93bef9d23175c34f79dbcd3bf7 = cache_frame_00e99e93bef9d23175c34f79dbcd3bf7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00e99e93bef9d23175c34f79dbcd3bf7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00e99e93bef9d23175c34f79dbcd3bf7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_00e99e93bef9d23175c34f79dbcd3bf7->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_args_element_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
        frame_00e99e93bef9d23175c34f79dbcd3bf7->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "o";
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_TypeError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TypeError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_5;
            tmp_source_name_1 = const_str_digest_af9ffe54a70f7a2624fb2d45cf3e6229;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
            assert( !(tmp_called_name_3 == NULL) );
            CHECK_OBJECT( par_s );
            tmp_source_name_3 = par_s;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 57;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 57;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_00e99e93bef9d23175c34f79dbcd3bf7->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_00e99e93bef9d23175c34f79dbcd3bf7->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 56;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00e99e93bef9d23175c34f79dbcd3bf7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00e99e93bef9d23175c34f79dbcd3bf7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00e99e93bef9d23175c34f79dbcd3bf7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00e99e93bef9d23175c34f79dbcd3bf7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00e99e93bef9d23175c34f79dbcd3bf7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00e99e93bef9d23175c34f79dbcd3bf7,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_00e99e93bef9d23175c34f79dbcd3bf7 == cache_frame_00e99e93bef9d23175c34f79dbcd3bf7 )
    {
        Py_DECREF( frame_00e99e93bef9d23175c34f79dbcd3bf7 );
    }
    cache_frame_00e99e93bef9d23175c34f79dbcd3bf7 = NULL;

    assertFrameObject( frame_00e99e93bef9d23175c34f79dbcd3bf7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_s );
    tmp_return_value = par_s;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_2_normcase );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_2_normcase );
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


static PyObject *impl_posixpath$$$function_3_isabs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_sep = NULL;
    struct Nuitka_FrameObject *frame_628b738afa890ab587d5950a4a85db0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_628b738afa890ab587d5950a4a85db0a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_628b738afa890ab587d5950a4a85db0a, codeobj_628b738afa890ab587d5950a4a85db0a, module_posixpath, sizeof(void *)+sizeof(void *) );
    frame_628b738afa890ab587d5950a4a85db0a = cache_frame_628b738afa890ab587d5950a4a85db0a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_628b738afa890ab587d5950a4a85db0a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_628b738afa890ab587d5950a4a85db0a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_628b738afa890ab587d5950a4a85db0a->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_sep );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_sep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        frame_628b738afa890ab587d5950a4a85db0a->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_sep == NULL );
        var_sep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_s );
        tmp_called_instance_2 = par_s;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_3 = var_sep;
        frame_628b738afa890ab587d5950a4a85db0a->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_628b738afa890ab587d5950a4a85db0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_628b738afa890ab587d5950a4a85db0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_628b738afa890ab587d5950a4a85db0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_628b738afa890ab587d5950a4a85db0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_628b738afa890ab587d5950a4a85db0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_628b738afa890ab587d5950a4a85db0a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_628b738afa890ab587d5950a4a85db0a,
        type_description_1,
        par_s,
        var_sep
    );


    // Release cached frame.
    if ( frame_628b738afa890ab587d5950a4a85db0a == cache_frame_628b738afa890ab587d5950a4a85db0a )
    {
        Py_DECREF( frame_628b738afa890ab587d5950a4a85db0a );
    }
    cache_frame_628b738afa890ab587d5950a4a85db0a = NULL;

    assertFrameObject( frame_628b738afa890ab587d5950a4a85db0a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_3_isabs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

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

    Py_XDECREF( var_sep );
    var_sep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_3_isabs );
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


static PyObject *impl_posixpath$$$function_4_join( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *var_sep = NULL;
    PyObject *var_path = NULL;
    PyObject *var_b = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_887486b44ad26d3c0d0db1fd31143c3f;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_887486b44ad26d3c0d0db1fd31143c3f = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_887486b44ad26d3c0d0db1fd31143c3f, codeobj_887486b44ad26d3c0d0db1fd31143c3f, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_887486b44ad26d3c0d0db1fd31143c3f = cache_frame_887486b44ad26d3c0d0db1fd31143c3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_887486b44ad26d3c0d0db1fd31143c3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_887486b44ad26d3c0d0db1fd31143c3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_sep );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_sep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sep == NULL );
        var_sep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( par_a );
        tmp_assign_source_3 = par_a;
        assert( var_path == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_path = tmp_assign_source_3;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_p );
        tmp_operand_name_1 = par_p;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_op_add_res_1;
            CHECK_OBJECT( var_path );
            tmp_subscribed_name_1 = var_path;
            tmp_subscript_name_1 = const_slice_none_int_0_none;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_sep );
            tmp_right_name_1 = var_sep;
            tmp_op_add_res_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_op_add_res_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_op_add_res_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_map );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_map );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "map" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fspath );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_p );
        tmp_args_element_name_4 = par_p;
        frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
                type_description_1 = "ooooo";
                exception_lineno = 86;
                goto try_except_handler_3;
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
            PyObject *old = var_b;
            var_b = tmp_assign_source_6;
            Py_INCREF( var_b );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_b );
        tmp_called_instance_2 = var_b;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_5 = var_sep;
        frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_b );
            tmp_assign_source_7 = var_b;
            {
                PyObject *old = var_path;
                var_path = tmp_assign_source_7;
                Py_INCREF( var_path );
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_6;
            int tmp_truth_name_2;
            if ( var_path == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 89;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_operand_name_2 = var_path;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            if ( var_path == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 89;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_called_instance_3 = var_path;
            CHECK_OBJECT( var_sep );
            tmp_args_element_name_6 = var_sep;
            frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_endswith, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 89;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            tmp_condition_result_3 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_3 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                if ( var_path == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 90;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }

                tmp_left_name_2 = var_path;
                CHECK_OBJECT( var_b );
                tmp_right_name_2 = var_b;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_8 = tmp_left_name_2;
                var_path = tmp_assign_source_8;

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                if ( var_path == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 92;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }

                tmp_left_name_3 = var_path;
                CHECK_OBJECT( var_sep );
                tmp_left_name_4 = var_sep;
                CHECK_OBJECT( var_b );
                tmp_right_name_4 = var_b;
                tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_9 = tmp_left_name_3;
                var_path = tmp_assign_source_9;

            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_887486b44ad26d3c0d0db1fd31143c3f, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_887486b44ad26d3c0d0db1fd31143c3f, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_TypeError );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TypeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        tmp_compexpr_right_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_AttributeError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AttributeError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AttributeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_BytesWarning );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesWarning );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 2, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_call_result_3;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_genericpath );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_genericpath );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "genericpath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }

            tmp_source_name_2 = tmp_mvar_value_8;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__check_arg_types );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_tuple_element_2 = const_str_plain_join;
            tmp_dircall_arg2_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_a );
            tmp_tuple_element_2 = par_a;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( par_p );
            tmp_dircall_arg3_1 = par_p;
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_call_result_3 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 95;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame) frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 83;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame) frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
        branch_end_4:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_4_join );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( var_path == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_path;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_887486b44ad26d3c0d0db1fd31143c3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_887486b44ad26d3c0d0db1fd31143c3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_887486b44ad26d3c0d0db1fd31143c3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_887486b44ad26d3c0d0db1fd31143c3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_887486b44ad26d3c0d0db1fd31143c3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_887486b44ad26d3c0d0db1fd31143c3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_887486b44ad26d3c0d0db1fd31143c3f,
        type_description_1,
        par_a,
        par_p,
        var_sep,
        var_path,
        var_b
    );


    // Release cached frame.
    if ( frame_887486b44ad26d3c0d0db1fd31143c3f == cache_frame_887486b44ad26d3c0d0db1fd31143c3f )
    {
        Py_DECREF( frame_887486b44ad26d3c0d0db1fd31143c3f );
    }
    cache_frame_887486b44ad26d3c0d0db1fd31143c3f = NULL;

    assertFrameObject( frame_887486b44ad26d3c0d0db1fd31143c3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_4_join );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_4_join );
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


static PyObject *impl_posixpath$$$function_5_split( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_sep = NULL;
    PyObject *var_i = NULL;
    PyObject *var_head = NULL;
    PyObject *var_tail = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_523314e93f947be88fab8eaaa0c505b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_523314e93f947be88fab8eaaa0c505b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_523314e93f947be88fab8eaaa0c505b0, codeobj_523314e93f947be88fab8eaaa0c505b0, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_523314e93f947be88fab8eaaa0c505b0 = cache_frame_523314e93f947be88fab8eaaa0c505b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_523314e93f947be88fab8eaaa0c505b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_523314e93f947be88fab8eaaa0c505b0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_523314e93f947be88fab8eaaa0c505b0->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_sep );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_sep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_523314e93f947be88fab8eaaa0c505b0->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sep == NULL );
        var_sep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_p );
        tmp_called_instance_2 = par_p;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_3 = var_sep;
        frame_523314e93f947be88fab8eaaa0c505b0->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_rfind, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_p );
        tmp_subscribed_name_1 = par_p;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_i );
        tmp_stop_name_1 = var_i;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_p );
        tmp_subscribed_name_2 = par_p;
        CHECK_OBJECT( var_i );
        tmp_start_name_2 = var_i;
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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
            exception_lineno = 110;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_6 == NULL )
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
            exception_lineno = 110;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_head == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_head = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_tail == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_tail = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_head );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_head );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( var_head );
        tmp_compexpr_left_1 = var_head;
        CHECK_OBJECT( var_sep );
        tmp_left_name_2 = var_sep;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_head );
        tmp_args_element_name_4 = var_head;
        frame_523314e93f947be88fab8eaaa0c505b0->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_head );
            tmp_called_instance_3 = var_head;
            CHECK_OBJECT( var_sep );
            tmp_args_element_name_5 = var_sep;
            frame_523314e93f947be88fab8eaaa0c505b0->m_frame.f_lineno = 112;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_rstrip, call_args );
            }

            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_head;
                assert( old != NULL );
                var_head = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_523314e93f947be88fab8eaaa0c505b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_523314e93f947be88fab8eaaa0c505b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_523314e93f947be88fab8eaaa0c505b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_523314e93f947be88fab8eaaa0c505b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_523314e93f947be88fab8eaaa0c505b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_523314e93f947be88fab8eaaa0c505b0,
        type_description_1,
        par_p,
        var_sep,
        var_i,
        var_head,
        var_tail
    );


    // Release cached frame.
    if ( frame_523314e93f947be88fab8eaaa0c505b0 == cache_frame_523314e93f947be88fab8eaaa0c505b0 )
    {
        Py_DECREF( frame_523314e93f947be88fab8eaaa0c505b0 );
    }
    cache_frame_523314e93f947be88fab8eaaa0c505b0 = NULL;

    assertFrameObject( frame_523314e93f947be88fab8eaaa0c505b0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_head );
        tmp_tuple_element_2 = var_head;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_tail );
        tmp_tuple_element_2 = var_tail;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_5_split );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_head );
    Py_DECREF( var_head );
    var_head = NULL;

    CHECK_OBJECT( (PyObject *)var_tail );
    Py_DECREF( var_tail );
    var_tail = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_head );
    var_head = NULL;

    Py_XDECREF( var_tail );
    var_tail = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_5_split );
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


static PyObject *impl_posixpath$$$function_6_splitext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_sep = NULL;
    PyObject *var_extsep = NULL;
    struct Nuitka_FrameObject *frame_9d6ff0e77641baeb8603519524738996;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d6ff0e77641baeb8603519524738996 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d6ff0e77641baeb8603519524738996, codeobj_9d6ff0e77641baeb8603519524738996, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9d6ff0e77641baeb8603519524738996 = cache_frame_9d6ff0e77641baeb8603519524738996;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d6ff0e77641baeb8603519524738996 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d6ff0e77641baeb8603519524738996 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_9d6ff0e77641baeb8603519524738996->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        frame_9d6ff0e77641baeb8603519524738996->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 123;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_bytes_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_sep = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_bytes_chr_46;
            assert( var_extsep == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_extsep = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_str_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_sep = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_dot;
            assert( var_extsep == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_extsep = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_genericpath );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_genericpath );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "genericpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_4 = par_p;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_5 = var_sep;
        tmp_args_element_name_6 = Py_None;
        CHECK_OBJECT( var_extsep );
        tmp_args_element_name_7 = var_extsep;
        frame_9d6ff0e77641baeb8603519524738996->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS4( tmp_called_instance_2, const_str_plain__splitext, call_args );
        }

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
    RESTORE_FRAME_EXCEPTION( frame_9d6ff0e77641baeb8603519524738996 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d6ff0e77641baeb8603519524738996 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d6ff0e77641baeb8603519524738996 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d6ff0e77641baeb8603519524738996, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d6ff0e77641baeb8603519524738996->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d6ff0e77641baeb8603519524738996, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d6ff0e77641baeb8603519524738996,
        type_description_1,
        par_p,
        var_sep,
        var_extsep
    );


    // Release cached frame.
    if ( frame_9d6ff0e77641baeb8603519524738996 == cache_frame_9d6ff0e77641baeb8603519524738996 )
    {
        Py_DECREF( frame_9d6ff0e77641baeb8603519524738996 );
    }
    cache_frame_9d6ff0e77641baeb8603519524738996 = NULL;

    assertFrameObject( frame_9d6ff0e77641baeb8603519524738996 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_6_splitext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_extsep );
    Py_DECREF( var_extsep );
    var_extsep = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_extsep );
    var_extsep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_6_splitext );
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


static PyObject *impl_posixpath$$$function_7_splitdrive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_974ab439aba454e1b4acb90bc219172d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_974ab439aba454e1b4acb90bc219172d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_974ab439aba454e1b4acb90bc219172d, codeobj_974ab439aba454e1b4acb90bc219172d, module_posixpath, sizeof(void *) );
    frame_974ab439aba454e1b4acb90bc219172d = cache_frame_974ab439aba454e1b4acb90bc219172d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_974ab439aba454e1b4acb90bc219172d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_974ab439aba454e1b4acb90bc219172d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_974ab439aba454e1b4acb90bc219172d->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_p );
        tmp_subscribed_name_1 = par_p;
        tmp_subscript_name_1 = const_slice_none_int_0_none;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_p );
        tmp_tuple_element_1 = par_p;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_974ab439aba454e1b4acb90bc219172d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_974ab439aba454e1b4acb90bc219172d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_974ab439aba454e1b4acb90bc219172d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_974ab439aba454e1b4acb90bc219172d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_974ab439aba454e1b4acb90bc219172d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_974ab439aba454e1b4acb90bc219172d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_974ab439aba454e1b4acb90bc219172d,
        type_description_1,
        par_p
    );


    // Release cached frame.
    if ( frame_974ab439aba454e1b4acb90bc219172d == cache_frame_974ab439aba454e1b4acb90bc219172d )
    {
        Py_DECREF( frame_974ab439aba454e1b4acb90bc219172d );
    }
    cache_frame_974ab439aba454e1b4acb90bc219172d = NULL;

    assertFrameObject( frame_974ab439aba454e1b4acb90bc219172d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_7_splitdrive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_7_splitdrive );
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


static PyObject *impl_posixpath$$$function_8_basename( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_sep = NULL;
    PyObject *var_i = NULL;
    struct Nuitka_FrameObject *frame_fd091b000d5d7971c3aa77f9917ab0f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd091b000d5d7971c3aa77f9917ab0f4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd091b000d5d7971c3aa77f9917ab0f4, codeobj_fd091b000d5d7971c3aa77f9917ab0f4, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fd091b000d5d7971c3aa77f9917ab0f4 = cache_frame_fd091b000d5d7971c3aa77f9917ab0f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd091b000d5d7971c3aa77f9917ab0f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd091b000d5d7971c3aa77f9917ab0f4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_fd091b000d5d7971c3aa77f9917ab0f4->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_sep );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_sep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_fd091b000d5d7971c3aa77f9917ab0f4->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_sep == NULL );
        var_sep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_p );
        tmp_called_instance_2 = par_p;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_3 = var_sep;
        frame_fd091b000d5d7971c3aa77f9917ab0f4->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_rfind, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_3;
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_p );
        tmp_subscribed_name_1 = par_p;
        CHECK_OBJECT( var_i );
        tmp_start_name_1 = var_i;
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd091b000d5d7971c3aa77f9917ab0f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd091b000d5d7971c3aa77f9917ab0f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd091b000d5d7971c3aa77f9917ab0f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd091b000d5d7971c3aa77f9917ab0f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd091b000d5d7971c3aa77f9917ab0f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd091b000d5d7971c3aa77f9917ab0f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd091b000d5d7971c3aa77f9917ab0f4,
        type_description_1,
        par_p,
        var_sep,
        var_i
    );


    // Release cached frame.
    if ( frame_fd091b000d5d7971c3aa77f9917ab0f4 == cache_frame_fd091b000d5d7971c3aa77f9917ab0f4 )
    {
        Py_DECREF( frame_fd091b000d5d7971c3aa77f9917ab0f4 );
    }
    cache_frame_fd091b000d5d7971c3aa77f9917ab0f4 = NULL;

    assertFrameObject( frame_fd091b000d5d7971c3aa77f9917ab0f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_8_basename );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_8_basename );
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


static PyObject *impl_posixpath$$$function_9_dirname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_sep = NULL;
    PyObject *var_i = NULL;
    PyObject *var_head = NULL;
    struct Nuitka_FrameObject *frame_ebc5658db313ea15d29a93d4f409547c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ebc5658db313ea15d29a93d4f409547c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ebc5658db313ea15d29a93d4f409547c, codeobj_ebc5658db313ea15d29a93d4f409547c, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ebc5658db313ea15d29a93d4f409547c = cache_frame_ebc5658db313ea15d29a93d4f409547c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ebc5658db313ea15d29a93d4f409547c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ebc5658db313ea15d29a93d4f409547c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_ebc5658db313ea15d29a93d4f409547c->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_p;
            assert( old != NULL );
            par_p = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_sep );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_sep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_p );
        tmp_args_element_name_2 = par_p;
        frame_ebc5658db313ea15d29a93d4f409547c->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_sep == NULL );
        var_sep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_p );
        tmp_called_instance_2 = par_p;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_3 = var_sep;
        frame_ebc5658db313ea15d29a93d4f409547c->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_rfind, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_p );
        tmp_subscribed_name_1 = par_p;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_i );
        tmp_stop_name_1 = var_i;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_head == NULL );
        var_head = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_head );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_head );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
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
        CHECK_OBJECT( var_head );
        tmp_compexpr_left_1 = var_head;
        CHECK_OBJECT( var_sep );
        tmp_left_name_2 = var_sep;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_head );
        tmp_args_element_name_4 = var_head;
        frame_ebc5658db313ea15d29a93d4f409547c->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_head );
            tmp_called_instance_3 = var_head;
            CHECK_OBJECT( var_sep );
            tmp_args_element_name_5 = var_sep;
            frame_ebc5658db313ea15d29a93d4f409547c->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_rstrip, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_head;
                assert( old != NULL );
                var_head = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebc5658db313ea15d29a93d4f409547c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ebc5658db313ea15d29a93d4f409547c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ebc5658db313ea15d29a93d4f409547c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ebc5658db313ea15d29a93d4f409547c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ebc5658db313ea15d29a93d4f409547c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ebc5658db313ea15d29a93d4f409547c,
        type_description_1,
        par_p,
        var_sep,
        var_i,
        var_head
    );


    // Release cached frame.
    if ( frame_ebc5658db313ea15d29a93d4f409547c == cache_frame_ebc5658db313ea15d29a93d4f409547c )
    {
        Py_DECREF( frame_ebc5658db313ea15d29a93d4f409547c );
    }
    cache_frame_ebc5658db313ea15d29a93d4f409547c = NULL;

    assertFrameObject( frame_ebc5658db313ea15d29a93d4f409547c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_head );
    tmp_return_value = var_head;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_9_dirname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_head );
    Py_DECREF( var_head );
    var_head = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_head );
    var_head = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_9_dirname );
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


static PyObject *impl_posixpath$$$function_10_islink( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_st = NULL;
    struct Nuitka_FrameObject *frame_78a54ba806e1672841f32242f232b1bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_78a54ba806e1672841f32242f232b1bd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78a54ba806e1672841f32242f232b1bd, codeobj_78a54ba806e1672841f32242f232b1bd, module_posixpath, sizeof(void *)+sizeof(void *) );
    frame_78a54ba806e1672841f32242f232b1bd = cache_frame_78a54ba806e1672841f32242f232b1bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78a54ba806e1672841f32242f232b1bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78a54ba806e1672841f32242f232b1bd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_78a54ba806e1672841f32242f232b1bd->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_lstat, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( var_st == NULL );
        var_st = tmp_assign_source_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_78a54ba806e1672841f32242f232b1bd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_78a54ba806e1672841f32242f232b1bd, exception_keeper_lineno_1 );
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_OSError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OSError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OSError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_AttributeError );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AttributeError );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AttributeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "oo";
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


            exception_lineno = 172;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 170;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_78a54ba806e1672841f32242f232b1bd->m_frame) frame_78a54ba806e1672841f32242f232b1bd->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_10_islink );
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
    try_end_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_stat );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stat );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_S_ISLNK );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_st );
        tmp_source_name_2 = var_st;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_st_mode );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_78a54ba806e1672841f32242f232b1bd->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78a54ba806e1672841f32242f232b1bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_78a54ba806e1672841f32242f232b1bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78a54ba806e1672841f32242f232b1bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78a54ba806e1672841f32242f232b1bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78a54ba806e1672841f32242f232b1bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78a54ba806e1672841f32242f232b1bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78a54ba806e1672841f32242f232b1bd,
        type_description_1,
        par_path,
        var_st
    );


    // Release cached frame.
    if ( frame_78a54ba806e1672841f32242f232b1bd == cache_frame_78a54ba806e1672841f32242f232b1bd )
    {
        Py_DECREF( frame_78a54ba806e1672841f32242f232b1bd );
    }
    cache_frame_78a54ba806e1672841f32242f232b1bd = NULL;

    assertFrameObject( frame_78a54ba806e1672841f32242f232b1bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_10_islink );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_10_islink );
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


static PyObject *impl_posixpath$$$function_11_lexists( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_00c7312b8dfff6ce8e6bbf21ad113834;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_00c7312b8dfff6ce8e6bbf21ad113834 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00c7312b8dfff6ce8e6bbf21ad113834, codeobj_00c7312b8dfff6ce8e6bbf21ad113834, module_posixpath, sizeof(void *) );
    frame_00c7312b8dfff6ce8e6bbf21ad113834 = cache_frame_00c7312b8dfff6ce8e6bbf21ad113834;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00c7312b8dfff6ce8e6bbf21ad113834 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00c7312b8dfff6ce8e6bbf21ad113834 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;
            type_description_1 = "o";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_00c7312b8dfff6ce8e6bbf21ad113834->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_lstat, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_00c7312b8dfff6ce8e6bbf21ad113834, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_00c7312b8dfff6ce8e6bbf21ad113834, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_OSError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OSError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OSError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "o";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 180;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_00c7312b8dfff6ce8e6bbf21ad113834->m_frame) frame_00c7312b8dfff6ce8e6bbf21ad113834->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_11_lexists );
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
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00c7312b8dfff6ce8e6bbf21ad113834 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_00c7312b8dfff6ce8e6bbf21ad113834 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00c7312b8dfff6ce8e6bbf21ad113834 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00c7312b8dfff6ce8e6bbf21ad113834, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00c7312b8dfff6ce8e6bbf21ad113834->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00c7312b8dfff6ce8e6bbf21ad113834, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00c7312b8dfff6ce8e6bbf21ad113834,
        type_description_1,
        par_path
    );


    // Release cached frame.
    if ( frame_00c7312b8dfff6ce8e6bbf21ad113834 == cache_frame_00c7312b8dfff6ce8e6bbf21ad113834 )
    {
        Py_DECREF( frame_00c7312b8dfff6ce8e6bbf21ad113834 );
    }
    cache_frame_00c7312b8dfff6ce8e6bbf21ad113834 = NULL;

    assertFrameObject( frame_00c7312b8dfff6ce8e6bbf21ad113834 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_11_lexists );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_11_lexists );
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


static PyObject *impl_posixpath$$$function_12_ismount( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_s1 = NULL;
    PyObject *var_parent = NULL;
    PyObject *var_s2 = NULL;
    PyObject *var_dev1 = NULL;
    PyObject *var_dev2 = NULL;
    PyObject *var_ino1 = NULL;
    PyObject *var_ino2 = NULL;
    struct Nuitka_FrameObject *frame_397202efc2b630cb188b236126d5db05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_397202efc2b630cb188b236126d5db05 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_397202efc2b630cb188b236126d5db05, codeobj_397202efc2b630cb188b236126d5db05, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_397202efc2b630cb188b236126d5db05 = cache_frame_397202efc2b630cb188b236126d5db05;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_397202efc2b630cb188b236126d5db05 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_397202efc2b630cb188b236126d5db05 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_lstat, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert( var_s1 == NULL );
        var_s1 = tmp_assign_source_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_397202efc2b630cb188b236126d5db05, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_397202efc2b630cb188b236126d5db05, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_OSError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OSError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OSError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooooooo";
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 192;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_397202efc2b630cb188b236126d5db05->m_frame) frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_12_ismount );
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
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_stat );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stat );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_S_ISLNK );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_s1 );
        tmp_source_name_2 = var_s1;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_st_mode );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_3 = par_path;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_5;
        frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 203;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_6;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_5 = par_path;
            tmp_args_element_name_6 = const_bytes_digest_9c4bca9d222e07510ef0a0ee3fdb36d9;
            frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_parent == NULL );
            var_parent = tmp_assign_source_2;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_7 = par_path;
            tmp_args_element_name_8 = const_str_digest_7b79a8950d64155a442741f6cc8c809b;
            frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 205;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_parent == NULL );
            var_parent = tmp_assign_source_3;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_realpath );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_realpath );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "realpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_parent );
        tmp_args_element_name_9 = var_parent;
        frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_parent;
            assert( old != NULL );
            var_parent = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = tmp_mvar_value_9;
        CHECK_OBJECT( var_parent );
        tmp_args_element_name_10 = var_parent;
        frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_lstat, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        assert( var_s2 == NULL );
        var_s2 = tmp_assign_source_5;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_397202efc2b630cb188b236126d5db05, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_397202efc2b630cb188b236126d5db05, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_10;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_OSError );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OSError );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OSError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_10;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_5;
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 207;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_397202efc2b630cb188b236126d5db05->m_frame) frame_397202efc2b630cb188b236126d5db05->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
        branch_end_4:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_12_ismount );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_s1 );
        tmp_source_name_3 = var_s1;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_st_dev );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dev1 == NULL );
        var_dev1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_s2 );
        tmp_source_name_4 = var_s2;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_st_dev );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dev2 == NULL );
        var_dev2 = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_dev1 );
        tmp_compexpr_left_3 = var_dev1;
        CHECK_OBJECT( var_dev2 );
        tmp_compexpr_right_3 = var_dev2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooooooo";
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_s1 );
        tmp_source_name_5 = var_s1;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_st_ino );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ino1 == NULL );
        var_ino1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( var_s2 );
        tmp_source_name_6 = var_s2;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_st_ino );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ino2 == NULL );
        var_ino2 = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_ino1 );
        tmp_compexpr_left_4 = var_ino1;
        CHECK_OBJECT( var_ino2 );
        tmp_compexpr_right_4 = var_ino2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooooooo";
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_397202efc2b630cb188b236126d5db05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_397202efc2b630cb188b236126d5db05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_397202efc2b630cb188b236126d5db05 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_397202efc2b630cb188b236126d5db05, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_397202efc2b630cb188b236126d5db05->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_397202efc2b630cb188b236126d5db05, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_397202efc2b630cb188b236126d5db05,
        type_description_1,
        par_path,
        var_s1,
        var_parent,
        var_s2,
        var_dev1,
        var_dev2,
        var_ino1,
        var_ino2
    );


    // Release cached frame.
    if ( frame_397202efc2b630cb188b236126d5db05 == cache_frame_397202efc2b630cb188b236126d5db05 )
    {
        Py_DECREF( frame_397202efc2b630cb188b236126d5db05 );
    }
    cache_frame_397202efc2b630cb188b236126d5db05 = NULL;

    assertFrameObject( frame_397202efc2b630cb188b236126d5db05 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_12_ismount );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_s1 );
    var_s1 = NULL;

    Py_XDECREF( var_parent );
    var_parent = NULL;

    Py_XDECREF( var_s2 );
    var_s2 = NULL;

    Py_XDECREF( var_dev1 );
    var_dev1 = NULL;

    Py_XDECREF( var_dev2 );
    var_dev2 = NULL;

    Py_XDECREF( var_ino1 );
    var_ino1 = NULL;

    Py_XDECREF( var_ino2 );
    var_ino2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_s1 );
    var_s1 = NULL;

    Py_XDECREF( var_parent );
    var_parent = NULL;

    Py_XDECREF( var_s2 );
    var_s2 = NULL;

    Py_XDECREF( var_dev1 );
    var_dev1 = NULL;

    Py_XDECREF( var_dev2 );
    var_dev2 = NULL;

    Py_XDECREF( var_ino1 );
    var_ino1 = NULL;

    Py_XDECREF( var_ino2 );
    var_ino2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_12_ismount );
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


static PyObject *impl_posixpath$$$function_13_expanduser( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_tilde = NULL;
    PyObject *var_sep = NULL;
    PyObject *var_i = NULL;
    PyObject *var_pwd = NULL;
    PyObject *var_userhome = NULL;
    PyObject *var_name = NULL;
    PyObject *var_pwent = NULL;
    PyObject *var_root = NULL;
    struct Nuitka_FrameObject *frame_1ad1d92b452d1befb2c72e832829209c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_1ad1d92b452d1befb2c72e832829209c = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ad1d92b452d1befb2c72e832829209c, codeobj_1ad1d92b452d1befb2c72e832829209c, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1ad1d92b452d1befb2c72e832829209c = cache_frame_1ad1d92b452d1befb2c72e832829209c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ad1d92b452d1befb2c72e832829209c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ad1d92b452d1befb2c72e832829209c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_2 = par_path;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 236;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_bytes_chr_126;
            assert( var_tilde == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_tilde = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_str_chr_126;
            assert( var_tilde == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_tilde = tmp_assign_source_3;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_path );
        tmp_called_instance_2 = par_path;
        CHECK_OBJECT( var_tilde );
        tmp_args_element_name_4 = var_tilde;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( par_path );
        tmp_return_value = par_path;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_sep );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_sep" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_5 = par_path;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sep == NULL );
        var_sep = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_path );
        tmp_called_instance_3 = par_path;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_6 = var_sep;
        tmp_args_element_name_7 = const_int_pos_1;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_find, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_1 = var_i;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_len );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 245;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_8 = par_path;
            frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_i;
                assert( old != NULL );
                var_i = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_2 = var_i;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_6;
            tmp_compexpr_left_3 = const_str_plain_HOME;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 247;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_6;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
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
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_name_name_1;
                PyObject *tmp_globals_name_1;
                PyObject *tmp_locals_name_1;
                PyObject *tmp_fromlist_name_1;
                PyObject *tmp_level_name_1;
                tmp_name_name_1 = const_str_plain_pwd;
                tmp_globals_name_1 = (PyObject *)moduledict_posixpath;
                tmp_locals_name_1 = Py_None;
                tmp_fromlist_name_1 = Py_None;
                tmp_level_name_1 = const_int_0;
                frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 248;
                tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_pwd == NULL );
                var_pwd = tmp_assign_source_7;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_source_name_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_7;
                CHECK_OBJECT( var_pwd );
                tmp_source_name_3 = var_pwd;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_getpwuid );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 250;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 250;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_4 = tmp_mvar_value_7;
                frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 250;
                tmp_args_element_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getuid );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 250;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 250;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_source_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 250;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pw_dir );
                Py_DECREF( tmp_source_name_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 250;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                assert( var_userhome == NULL );
                var_userhome = tmp_assign_source_8;
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

            // Preserve existing published exception.
            exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_type_1 );
            exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_value_1 );
            exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF( exception_preserved_tb_1 );

            if ( exception_keeper_tb_1 == NULL )
            {
                exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1ad1d92b452d1befb2c72e832829209c, exception_keeper_lineno_1 );
            }
            else if ( exception_keeper_lineno_1 != 0 )
            {
                exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1ad1d92b452d1befb2c72e832829209c, exception_keeper_lineno_1 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
            PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_mvar_value_8;
                tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_KeyError );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KeyError );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "KeyError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 251;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_3;
                }

                tmp_compexpr_right_4 = tmp_mvar_value_8;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 251;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_3;
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
                CHECK_OBJECT( par_path );
                tmp_return_value = par_path;
                Py_INCREF( tmp_return_value );
                goto try_return_handler_3;
                goto branch_end_6;
                branch_no_6:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 249;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_1ad1d92b452d1befb2c72e832829209c->m_frame) frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
                branch_end_6:;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( posixpath$$$function_13_expanduser );
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
            try_end_1:;
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 256;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_9;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_environ );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 256;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_1 = const_str_plain_HOME;
                tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 256;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_userhome == NULL );
                var_userhome = tmp_assign_source_9;
            }
            branch_end_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_pwd;
            tmp_globals_name_2 = (PyObject *)moduledict_posixpath;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = Py_None;
            tmp_level_name_2 = const_int_0;
            frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 258;
            tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 258;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pwd == NULL );
            var_pwd = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_path );
            tmp_subscribed_name_2 = par_path;
            tmp_start_name_1 = const_int_pos_1;
            CHECK_OBJECT( var_i );
            tmp_stop_name_1 = var_i;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_name == NULL );
            var_name = tmp_assign_source_11;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_mvar_value_11;
            int tmp_truth_name_2;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 260;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_10;
            CHECK_OBJECT( var_name );
            tmp_args_element_name_10 = var_name;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 260;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_11 = tmp_mvar_value_11;
            frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 260;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 260;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_12;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_str );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 261;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = tmp_mvar_value_12;
                CHECK_OBJECT( var_name );
                tmp_args_element_name_12 = var_name;
                tmp_args_element_name_13 = const_str_plain_ASCII;
                frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 261;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 261;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_name;
                    assert( old != NULL );
                    var_name = tmp_assign_source_12;
                    Py_DECREF( old );
                }

            }
            branch_no_7:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_14;
            CHECK_OBJECT( var_pwd );
            tmp_called_instance_5 = var_pwd;
            CHECK_OBJECT( var_name );
            tmp_args_element_name_14 = var_name;
            frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_getpwnam, call_args );
            }

            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
            assert( var_pwent == NULL );
            var_pwent = tmp_assign_source_13;
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
            exception_keeper_tb_3 = MAKE_TRACEBACK( frame_1ad1d92b452d1befb2c72e832829209c, exception_keeper_lineno_3 );
        }
        else if ( exception_keeper_lineno_3 != 0 )
        {
            exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_1ad1d92b452d1befb2c72e832829209c, exception_keeper_lineno_3 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
        PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
        PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_mvar_value_13;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_KeyError );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KeyError );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "KeyError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 264;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }

            tmp_compexpr_right_5 = tmp_mvar_value_13;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
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
            CHECK_OBJECT( par_path );
            tmp_return_value = par_path;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_5;
            goto branch_end_8;
            branch_no_8:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 262;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_1ad1d92b452d1befb2c72e832829209c->m_frame) frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
            branch_end_8:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_13_expanduser );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto frame_return_exit_1;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_2:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( var_pwent );
            tmp_source_name_5 = var_pwent;
            tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pw_dir );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_userhome == NULL );
            var_userhome = tmp_assign_source_14;
        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_mvar_value_15;
        int tmp_truth_name_3;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_14;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_15 = par_path;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = tmp_mvar_value_15;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_16;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fsencode );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_userhome == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "userhome" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_17 = var_userhome;
            frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_userhome;
                var_userhome = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = const_bytes_chr_47;
            assert( var_root == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_root = tmp_assign_source_16;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = const_str_chr_47;
            assert( var_root == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_root = tmp_assign_source_17;
        }
        branch_end_9:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_18;
        if ( var_userhome == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "userhome" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_userhome;
        CHECK_OBJECT( var_root );
        tmp_args_element_name_18 = var_root;
        frame_1ad1d92b452d1befb2c72e832829209c->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_rstrip, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userhome;
            var_userhome = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_userhome );
        tmp_left_name_1 = var_userhome;
        CHECK_OBJECT( par_path );
        tmp_subscribed_name_3 = par_path;
        CHECK_OBJECT( var_i );
        tmp_start_name_2 = var_i;
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 275;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( var_root );
        tmp_or_right_value_1 = var_root;
        Py_INCREF( tmp_or_right_value_1 );
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad1d92b452d1befb2c72e832829209c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad1d92b452d1befb2c72e832829209c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad1d92b452d1befb2c72e832829209c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ad1d92b452d1befb2c72e832829209c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ad1d92b452d1befb2c72e832829209c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ad1d92b452d1befb2c72e832829209c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ad1d92b452d1befb2c72e832829209c,
        type_description_1,
        par_path,
        var_tilde,
        var_sep,
        var_i,
        var_pwd,
        var_userhome,
        var_name,
        var_pwent,
        var_root
    );


    // Release cached frame.
    if ( frame_1ad1d92b452d1befb2c72e832829209c == cache_frame_1ad1d92b452d1befb2c72e832829209c )
    {
        Py_DECREF( frame_1ad1d92b452d1befb2c72e832829209c );
    }
    cache_frame_1ad1d92b452d1befb2c72e832829209c = NULL;

    assertFrameObject( frame_1ad1d92b452d1befb2c72e832829209c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_13_expanduser );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_tilde );
    Py_DECREF( var_tilde );
    var_tilde = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_pwd );
    var_pwd = NULL;

    Py_XDECREF( var_userhome );
    var_userhome = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_pwent );
    var_pwent = NULL;

    Py_XDECREF( var_root );
    var_root = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_tilde );
    var_tilde = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_pwd );
    var_pwd = NULL;

    Py_XDECREF( var_userhome );
    var_userhome = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_pwent );
    var_pwent = NULL;

    Py_XDECREF( var_root );
    var_root = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_13_expanduser );
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


static PyObject *impl_posixpath$$$function_14_expandvars( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_re = NULL;
    PyObject *var_search = NULL;
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *var_environ = NULL;
    PyObject *var_i = NULL;
    PyObject *var_m = NULL;
    PyObject *var_j = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *var_tail = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7ef05e1614c9d2572427d000df4409b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_7ef05e1614c9d2572427d000df4409b1 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ef05e1614c9d2572427d000df4409b1, codeobj_7ef05e1614c9d2572427d000df4409b1, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ef05e1614c9d2572427d000df4409b1 = cache_frame_7ef05e1614c9d2572427d000df4409b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ef05e1614c9d2572427d000df4409b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ef05e1614c9d2572427d000df4409b1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_2 = par_path;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 290;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 290;
            type_description_1 = "oooooooooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_bytes_chr_36;
            CHECK_OBJECT( par_path );
            tmp_compexpr_right_1 = par_path;
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "oooooooooooo";
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
            CHECK_OBJECT( par_path );
            tmp_return_value = par_path;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprogb );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__varprogb );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_varprogb" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 293;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_operand_name_1 = tmp_mvar_value_4;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "oooooooooooo";
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_name_name_1;
                PyObject *tmp_globals_name_1;
                PyObject *tmp_locals_name_1;
                PyObject *tmp_fromlist_name_1;
                PyObject *tmp_level_name_1;
                tmp_name_name_1 = const_str_plain_re;
                tmp_globals_name_1 = (PyObject *)moduledict_posixpath;
                tmp_locals_name_1 = Py_None;
                tmp_fromlist_name_1 = Py_None;
                tmp_level_name_1 = const_int_0;
                frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 294;
                tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 294;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_re == NULL );
                var_re = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( var_re );
                tmp_source_name_1 = var_re;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 295;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_4 = const_bytes_digest_619dc84745473e473a3171d7c4141e1c;
                CHECK_OBJECT( var_re );
                tmp_source_name_2 = var_re;
                tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ASCII );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 295;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 295;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 295;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprogb, tmp_assign_source_3 );
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprogb );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__varprogb );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_varprogb" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 296;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_5;
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_search );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_search == NULL );
            var_search = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_bytes_chr_123;
            assert( var_start == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_start = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_bytes_chr_125;
            assert( var_end == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_end = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_getattr );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getattr );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getattr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 299;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_6;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 299;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_6 = tmp_mvar_value_7;
            tmp_args_element_name_7 = const_str_plain_environb;
            tmp_args_element_name_8 = Py_None;
            frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 299;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_environ == NULL );
            var_environ = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = const_str_chr_36;
            CHECK_OBJECT( par_path );
            tmp_compexpr_right_2 = par_path;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( par_path );
            tmp_return_value = par_path;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprog );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__varprog );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_varprog" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 303;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_operand_name_2 = tmp_mvar_value_8;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooooooooooo";
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
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_name_name_2;
                PyObject *tmp_globals_name_2;
                PyObject *tmp_locals_name_2;
                PyObject *tmp_fromlist_name_2;
                PyObject *tmp_level_name_2;
                tmp_name_name_2 = const_str_plain_re;
                tmp_globals_name_2 = (PyObject *)moduledict_posixpath;
                tmp_locals_name_2 = Py_None;
                tmp_fromlist_name_2 = Py_None;
                tmp_level_name_2 = const_int_0;
                frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 304;
                tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_re == NULL );
                var_re = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_4;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_source_name_5;
                CHECK_OBJECT( var_re );
                tmp_source_name_4 = var_re;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compile );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_9 = const_str_digest_18a23ac1f0cd40a463ca97aa3ef3c83c;
                CHECK_OBJECT( var_re );
                tmp_source_name_5 = var_re;
                tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ASCII );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 305;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 305;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_10 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprog, tmp_assign_source_9 );
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprog );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__varprog );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_varprog" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 306;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_9;
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_search );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_search == NULL );
            var_search = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = const_str_chr_123;
            assert( var_start == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_start = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = const_str_chr_125;
            assert( var_end == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_end = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_10;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 309;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_10;
            tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_environ );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_environ == NULL );
            var_environ = tmp_assign_source_13;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_0;
        assert( var_i == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_i = tmp_assign_source_14;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( var_search );
        tmp_called_name_5 = var_search;
        if ( par_path == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = par_path;
        if ( var_i == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_i;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_m );
        tmp_operand_name_3 = var_m;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        branch_no_6:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_m );
        tmp_called_instance_2 = var_m;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 315;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_span, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 315;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_18 == NULL )
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
            exception_lineno = 315;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 315;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooo";
            exception_lineno = 315;
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
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_19;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_20;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_m );
        tmp_called_instance_3 = var_m;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 316;
        tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_13;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_14;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_name );
        tmp_called_instance_4 = var_name;
        CHECK_OBJECT( var_start );
        tmp_args_element_name_13 = var_start;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_startswith, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 317;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        CHECK_OBJECT( var_name );
        tmp_called_instance_5 = var_name;
        CHECK_OBJECT( var_end );
        tmp_args_element_name_14 = var_end;
        frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_endswith, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 317;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_name );
            tmp_subscribed_name_1 = var_name;
            tmp_subscript_name_1 = const_slice_int_pos_1_int_neg_1_none;
            tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_name;
                assert( old != NULL );
                var_name = tmp_assign_source_22;
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_True;
        {
            PyObject *old = tmp_try_except_1__unhandled_indicator;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_23;
            Py_INCREF( tmp_try_except_1__unhandled_indicator );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_environ );
        tmp_compexpr_left_3 = var_environ;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }

            tmp_source_name_8 = tmp_mvar_value_11;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_fsencode );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }

            tmp_source_name_9 = tmp_mvar_value_12;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_environ );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_subscribed_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_instance_6 = tmp_mvar_value_13;
            CHECK_OBJECT( var_name );
            tmp_args_element_name_16 = var_name;
            frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 321;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_subscript_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_fsdecode, call_args );
            }

            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_subscribed_name_2 );

                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 321;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = var_value;
                var_value = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_environ );
            tmp_subscribed_name_3 = var_environ;
            CHECK_OBJECT( var_name );
            tmp_subscript_name_3 = var_name;
            tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = var_value;
                var_value = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        branch_end_8:;
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

    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_False;
        {
            PyObject *old = tmp_try_except_1__unhandled_indicator;
            assert( old != NULL );
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_26;
            Py_INCREF( tmp_try_except_1__unhandled_indicator );
            Py_DECREF( old );
        }

    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_7ef05e1614c9d2572427d000df4409b1, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_7ef05e1614c9d2572427d000df4409b1, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_14;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_KeyError );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KeyError );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "KeyError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }

        tmp_compexpr_right_4 = tmp_mvar_value_14;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT( var_j );
            tmp_assign_source_27 = var_j;
            {
                PyObject *old = var_i;
                assert( old != NULL );
                var_i = tmp_assign_source_27;
                Py_INCREF( var_i );
                Py_DECREF( old );
            }

        }
        goto branch_end_9;
        branch_no_9:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 319;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_7ef05e1614c9d2572427d000df4409b1->m_frame) frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
        branch_end_9:;
    }
    goto try_end_4;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_14_expandvars );
    return NULL;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_10;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        int tmp_truth_name_4;
        CHECK_OBJECT( tmp_try_except_1__unhandled_indicator );
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_try_except_1__unhandled_indicator );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_left_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_28;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            if ( par_path == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_subscribed_name_4 = par_path;
            CHECK_OBJECT( var_j );
            tmp_start_name_1 = var_j;
            tmp_stop_name_1 = Py_None;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_tail;
                var_tail = tmp_assign_source_28;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_right_name_1;
            if ( par_path == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_subscribed_name_5 = par_path;
            tmp_start_name_2 = Py_None;
            if ( var_i == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_stop_name_2 = var_i;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_subscript_name_5 == NULL) );
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            Py_DECREF( tmp_subscript_name_5 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            if ( var_value == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_right_name_1 = var_value;
            tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = par_path;
                par_path = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_len );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 329;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_7 = tmp_mvar_value_15;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_17 = par_path;
            frame_7ef05e1614c9d2572427d000df4409b1->m_frame.f_lineno = 329;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 329;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_path );
            tmp_left_name_2 = par_path;
            CHECK_OBJECT( var_tail );
            tmp_right_name_2 = var_tail;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_31 = tmp_left_name_2;
            par_path = tmp_assign_source_31;

        }
        branch_no_10:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if ( par_path == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_path;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef05e1614c9d2572427d000df4409b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef05e1614c9d2572427d000df4409b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef05e1614c9d2572427d000df4409b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ef05e1614c9d2572427d000df4409b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ef05e1614c9d2572427d000df4409b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ef05e1614c9d2572427d000df4409b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ef05e1614c9d2572427d000df4409b1,
        type_description_1,
        par_path,
        var_re,
        var_search,
        var_start,
        var_end,
        var_environ,
        var_i,
        var_m,
        var_j,
        var_name,
        var_value,
        var_tail
    );


    // Release cached frame.
    if ( frame_7ef05e1614c9d2572427d000df4409b1 == cache_frame_7ef05e1614c9d2572427d000df4409b1 )
    {
        Py_DECREF( frame_7ef05e1614c9d2572427d000df4409b1 );
    }
    cache_frame_7ef05e1614c9d2572427d000df4409b1 = NULL;

    assertFrameObject( frame_7ef05e1614c9d2572427d000df4409b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_14_expandvars );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_re );
    var_re = NULL;

    Py_XDECREF( var_search );
    var_search = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_environ );
    var_environ = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_tail );
    var_tail = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_re );
    var_re = NULL;

    Py_XDECREF( var_search );
    var_search = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_environ );
    var_environ = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_tail );
    var_tail = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_14_expandvars );
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


static PyObject *impl_posixpath$$$function_15_normpath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_sep = NULL;
    PyObject *var_empty = NULL;
    PyObject *var_dot = NULL;
    PyObject *var_dotdot = NULL;
    PyObject *var_initial_slashes = NULL;
    PyObject *var_comps = NULL;
    PyObject *var_new_comps = NULL;
    PyObject *var_comp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_66367538a4ae89f5640c2965f7170c02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_66367538a4ae89f5640c2965f7170c02 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66367538a4ae89f5640c2965f7170c02, codeobj_66367538a4ae89f5640c2965f7170c02, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_66367538a4ae89f5640c2965f7170c02 = cache_frame_66367538a4ae89f5640c2965f7170c02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66367538a4ae89f5640c2965f7170c02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66367538a4ae89f5640c2965f7170c02 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_2 = par_path;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 341;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_bytes_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_sep = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_bytes_empty;
            assert( var_empty == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_empty = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_bytes_chr_46;
            assert( var_dot == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_dot = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_bytes_digest_9c4bca9d222e07510ef0a0ee3fdb36d9;
            assert( var_dotdot == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_dotdot = tmp_assign_source_5;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_str_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_sep = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_empty;
            assert( var_empty == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_empty = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = const_str_dot;
            assert( var_dot == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_dot = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = const_str_digest_7b79a8950d64155a442741f6cc8c809b;
            assert( var_dotdot == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_dotdot = tmp_assign_source_9;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_1 = par_path;
        CHECK_OBJECT( var_empty );
        tmp_compexpr_right_1 = var_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( var_dot );
        tmp_return_value = var_dot;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_path );
        tmp_called_instance_2 = par_path;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_4 = var_sep;
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_initial_slashes == NULL );
        var_initial_slashes = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        int tmp_truth_name_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_initial_slashes );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_initial_slashes );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( par_path );
        tmp_source_name_1 = par_path;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_startswith );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sep );
        tmp_left_name_1 = var_sep;
        tmp_right_name_1 = const_int_pos_2;
        tmp_args_element_name_5 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        CHECK_OBJECT( par_path );
        tmp_source_name_2 = par_path;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_startswith );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sep );
        tmp_left_name_2 = var_sep;
        tmp_right_name_2 = const_int_pos_3;
        tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = const_int_pos_2;
            {
                PyObject *old = var_initial_slashes;
                assert( old != NULL );
                var_initial_slashes = tmp_assign_source_11;
                Py_INCREF( var_initial_slashes );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_path );
        tmp_called_instance_3 = par_path;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_7 = var_sep;
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_comps == NULL );
        var_comps = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyList_New( 0 );
        assert( var_new_comps == NULL );
        var_new_comps = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_comps );
        tmp_iter_arg_1 = var_comps;
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 361;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_16 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_comp;
            var_comp = tmp_assign_source_16;
            Py_INCREF( var_comp );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_comp );
        tmp_compexpr_left_2 = var_comp;
        CHECK_OBJECT( var_empty );
        tmp_tuple_element_1 = var_empty;
        tmp_compexpr_right_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_dot );
        tmp_tuple_element_1 = var_dot;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
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
        goto loop_start_1;
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_comp );
        tmp_compexpr_left_3 = var_comp;
        CHECK_OBJECT( var_dotdot );
        tmp_compexpr_right_3 = var_dotdot;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_initial_slashes );
        tmp_operand_name_2 = var_initial_slashes;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_new_comps );
        tmp_operand_name_3 = var_new_comps;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_or_left_value_2 = tmp_and_left_value_3;
        and_end_3:;
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
        CHECK_OBJECT( var_new_comps );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_new_comps );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_new_comps );
        tmp_subscribed_name_1 = var_new_comps;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_dotdot );
        tmp_compexpr_right_4 = var_dotdot;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_2 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_or_right_value_2 = tmp_and_left_value_4;
        and_end_4:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_new_comps );
            tmp_called_instance_4 = var_new_comps;
            CHECK_OBJECT( var_comp );
            tmp_args_element_name_8 = var_comp;
            frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 366;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_5;
            CHECK_OBJECT( var_new_comps );
            tmp_truth_name_5 = CHECK_IF_TRUE( var_new_comps );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_5;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( var_new_comps );
                tmp_called_instance_5 = var_new_comps;
                frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 368;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_pop );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 368;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_6:;
        }
        branch_end_5:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "ooooooooo";
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

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( var_new_comps );
        tmp_assign_source_17 = var_new_comps;
        {
            PyObject *old = var_comps;
            assert( old != NULL );
            var_comps = tmp_assign_source_17;
            Py_INCREF( var_comps );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_sep );
        tmp_called_instance_6 = var_sep;
        CHECK_OBJECT( var_comps );
        tmp_args_element_name_9 = var_comps;
        frame_66367538a4ae89f5640c2965f7170c02->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_join, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_18;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_6;
        CHECK_OBJECT( var_initial_slashes );
        tmp_truth_name_6 = CHECK_IF_TRUE( var_initial_slashes );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_sep );
            tmp_left_name_4 = var_sep;
            CHECK_OBJECT( var_initial_slashes );
            tmp_right_name_3 = var_initial_slashes;
            tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_path );
            tmp_right_name_4 = par_path;
            tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_path;
                assert( old != NULL );
                par_path = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        CHECK_OBJECT( par_path );
        tmp_or_left_value_3 = par_path;
        tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
        if ( tmp_or_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT( var_dot );
        tmp_or_right_value_3 = var_dot;
        tmp_return_value = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_return_value = tmp_or_left_value_3;
        or_end_3:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66367538a4ae89f5640c2965f7170c02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_66367538a4ae89f5640c2965f7170c02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66367538a4ae89f5640c2965f7170c02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66367538a4ae89f5640c2965f7170c02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66367538a4ae89f5640c2965f7170c02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66367538a4ae89f5640c2965f7170c02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66367538a4ae89f5640c2965f7170c02,
        type_description_1,
        par_path,
        var_sep,
        var_empty,
        var_dot,
        var_dotdot,
        var_initial_slashes,
        var_comps,
        var_new_comps,
        var_comp
    );


    // Release cached frame.
    if ( frame_66367538a4ae89f5640c2965f7170c02 == cache_frame_66367538a4ae89f5640c2965f7170c02 )
    {
        Py_DECREF( frame_66367538a4ae89f5640c2965f7170c02 );
    }
    cache_frame_66367538a4ae89f5640c2965f7170c02 = NULL;

    assertFrameObject( frame_66367538a4ae89f5640c2965f7170c02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_15_normpath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_empty );
    Py_DECREF( var_empty );
    var_empty = NULL;

    CHECK_OBJECT( (PyObject *)var_dot );
    Py_DECREF( var_dot );
    var_dot = NULL;

    CHECK_OBJECT( (PyObject *)var_dotdot );
    Py_DECREF( var_dotdot );
    var_dotdot = NULL;

    Py_XDECREF( var_initial_slashes );
    var_initial_slashes = NULL;

    Py_XDECREF( var_comps );
    var_comps = NULL;

    Py_XDECREF( var_new_comps );
    var_new_comps = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

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

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_empty );
    var_empty = NULL;

    Py_XDECREF( var_dot );
    var_dot = NULL;

    Py_XDECREF( var_dotdot );
    var_dotdot = NULL;

    Py_XDECREF( var_initial_slashes );
    var_initial_slashes = NULL;

    Py_XDECREF( var_comps );
    var_comps = NULL;

    Py_XDECREF( var_new_comps );
    var_new_comps = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_15_normpath );
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


static PyObject *impl_posixpath$$$function_16_abspath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *var_cwd = NULL;
    struct Nuitka_FrameObject *frame_8245de23f6e4d7c84fa131d25024e506;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8245de23f6e4d7c84fa131d25024e506 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8245de23f6e4d7c84fa131d25024e506, codeobj_8245de23f6e4d7c84fa131d25024e506, module_posixpath, sizeof(void *)+sizeof(void *) );
    frame_8245de23f6e4d7c84fa131d25024e506 = cache_frame_8245de23f6e4d7c84fa131d25024e506;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8245de23f6e4d7c84fa131d25024e506 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8245de23f6e4d7c84fa131d25024e506 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isabs );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isabs );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isabs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_2 = par_path;
        frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
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
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_4;
            int tmp_truth_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 380;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_3 = par_path;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 380;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_4;
            frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 380;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 380;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 381;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_5;
                frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 381;
                tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getcwdb );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 381;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                assert( var_cwd == NULL );
                var_cwd = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 383;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_6;
                frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 383;
                tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getcwd );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 383;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                assert( var_cwd == NULL );
                var_cwd = tmp_assign_source_3;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 384;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_7;
            CHECK_OBJECT( var_cwd );
            tmp_args_element_name_5 = var_cwd;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_6 = par_path;
            frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 384;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 384;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_path;
                assert( old != NULL );
                par_path = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_normpath );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normpath );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_8;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_7 = par_path;
        frame_8245de23f6e4d7c84fa131d25024e506->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8245de23f6e4d7c84fa131d25024e506 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8245de23f6e4d7c84fa131d25024e506 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8245de23f6e4d7c84fa131d25024e506 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8245de23f6e4d7c84fa131d25024e506, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8245de23f6e4d7c84fa131d25024e506->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8245de23f6e4d7c84fa131d25024e506, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8245de23f6e4d7c84fa131d25024e506,
        type_description_1,
        par_path,
        var_cwd
    );


    // Release cached frame.
    if ( frame_8245de23f6e4d7c84fa131d25024e506 == cache_frame_8245de23f6e4d7c84fa131d25024e506 )
    {
        Py_DECREF( frame_8245de23f6e4d7c84fa131d25024e506 );
    }
    cache_frame_8245de23f6e4d7c84fa131d25024e506 = NULL;

    assertFrameObject( frame_8245de23f6e4d7c84fa131d25024e506 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_16_abspath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_cwd );
    var_cwd = NULL;

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

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_cwd );
    var_cwd = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_16_abspath );
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


static PyObject *impl_posixpath$$$function_17_realpath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *var_path = NULL;
    PyObject *var_ok = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4fef3835bf939f079960d8171920406b;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4fef3835bf939f079960d8171920406b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4fef3835bf939f079960d8171920406b, codeobj_4fef3835bf939f079960d8171920406b, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4fef3835bf939f079960d8171920406b = cache_frame_4fef3835bf939f079960d8171920406b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4fef3835bf939f079960d8171920406b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4fef3835bf939f079960d8171920406b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 394;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_1 = par_filename;
        frame_4fef3835bf939f079960d8171920406b->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filename;
            assert( old != NULL );
            par_filename = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__joinrealpath );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__joinrealpath );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_joinrealpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_filename );
        tmp_subscribed_name_1 = par_filename;
        tmp_subscript_name_1 = const_slice_none_int_0_none;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_3 = par_filename;
        tmp_args_element_name_4 = PyDict_New();
        frame_4fef3835bf939f079960d8171920406b->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooo";
            exception_lineno = 395;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooo";
            exception_lineno = 395;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooo";
                    exception_lineno = 395;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooo";
            exception_lineno = 395;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_path == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_path = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_ok == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_ok = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_abspath );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abspath );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abspath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 396;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_path );
        tmp_args_element_name_5 = var_path;
        frame_4fef3835bf939f079960d8171920406b->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fef3835bf939f079960d8171920406b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fef3835bf939f079960d8171920406b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fef3835bf939f079960d8171920406b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4fef3835bf939f079960d8171920406b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4fef3835bf939f079960d8171920406b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4fef3835bf939f079960d8171920406b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4fef3835bf939f079960d8171920406b,
        type_description_1,
        par_filename,
        var_path,
        var_ok
    );


    // Release cached frame.
    if ( frame_4fef3835bf939f079960d8171920406b == cache_frame_4fef3835bf939f079960d8171920406b )
    {
        Py_DECREF( frame_4fef3835bf939f079960d8171920406b );
    }
    cache_frame_4fef3835bf939f079960d8171920406b = NULL;

    assertFrameObject( frame_4fef3835bf939f079960d8171920406b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_17_realpath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)var_path );
    Py_DECREF( var_path );
    var_path = NULL;

    CHECK_OBJECT( (PyObject *)var_ok );
    Py_DECREF( var_ok );
    var_ok = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_ok );
    var_ok = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_17_realpath );
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


static PyObject *impl_posixpath$$$function_18__joinrealpath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *par_rest = python_pars[ 1 ];
    PyObject *par_seen = python_pars[ 2 ];
    PyObject *var_sep = NULL;
    PyObject *var_curdir = NULL;
    PyObject *var_pardir = NULL;
    PyObject *var_name = NULL;
    PyObject *var__ = NULL;
    PyObject *var_newpath = NULL;
    PyObject *var_ok = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_16335085026ecaac193d47cfd3adf26d;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_16335085026ecaac193d47cfd3adf26d = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_16335085026ecaac193d47cfd3adf26d, codeobj_16335085026ecaac193d47cfd3adf26d, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_16335085026ecaac193d47cfd3adf26d = cache_frame_16335085026ecaac193d47cfd3adf26d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_16335085026ecaac193d47cfd3adf26d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_16335085026ecaac193d47cfd3adf26d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
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
            tmp_assign_source_1 = const_bytes_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_sep = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_bytes_chr_46;
            assert( var_curdir == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_curdir = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_bytes_digest_9c4bca9d222e07510ef0a0ee3fdb36d9;
            assert( var_pardir == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_pardir = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_str_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_sep = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_dot;
            assert( var_curdir == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_curdir = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_str_digest_7b79a8950d64155a442741f6cc8c809b;
            assert( var_pardir == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_pardir = tmp_assign_source_6;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isabs );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isabs );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isabs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 410;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_rest );
        tmp_args_element_name_3 = par_rest;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 410;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_rest );
            tmp_subscribed_name_1 = par_rest;
            tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
            tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_rest;
                assert( old != NULL );
                par_rest = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( var_sep );
            tmp_assign_source_8 = var_sep;
            {
                PyObject *old = par_path;
                assert( old != NULL );
                par_path = tmp_assign_source_8;
                Py_INCREF( par_path );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_rest );
        tmp_operand_name_1 = par_rest;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oooooooooo";
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
        goto loop_end_1;
        branch_no_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_rest );
        tmp_called_instance_1 = par_rest;
        CHECK_OBJECT( var_sep );
        tmp_args_element_name_4 = var_sep;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_partition, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 415;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 415;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 415;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 415;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooo";
            exception_lineno = 415;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_13;
            Py_INCREF( var_name );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_14;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_rest;
            assert( old != NULL );
            par_rest = tmp_assign_source_15;
            Py_INCREF( par_rest );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_name );
        tmp_operand_name_2 = var_name;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_name );
        tmp_compexpr_left_1 = var_name;
        CHECK_OBJECT( var_curdir );
        tmp_compexpr_right_1 = var_curdir;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        goto loop_start_1;
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_name );
        tmp_compexpr_left_2 = var_name;
        CHECK_OBJECT( var_pardir );
        tmp_compexpr_right_2 = var_pardir;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooooooooo";
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
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_3;
            if ( par_path == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 421;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_3 = CHECK_IF_TRUE( par_path );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_5;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_split );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_split );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "split" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 422;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                if ( par_path == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 422;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }

                tmp_args_element_name_5 = par_path;
                frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 422;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_16 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__source_iter;
                    tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


                    type_description_1 = "oooooooooo";
                    exception_lineno = 422;
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__element_1;
                    tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
                if ( tmp_assign_source_18 == NULL )
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


                    type_description_1 = "oooooooooo";
                    exception_lineno = 422;
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_tuple_unpack_2__element_2;
                    tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
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

                            type_description_1 = "oooooooooo";
                            exception_lineno = 422;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 422;
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

            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

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
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
                {
                    PyObject *old = par_path;
                    par_path = tmp_assign_source_19;
                    Py_INCREF( par_path );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
                {
                    PyObject *old = var_name;
                    assert( old != NULL );
                    var_name = tmp_assign_source_20;
                    Py_INCREF( var_name );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( var_name );
                tmp_compexpr_left_3 = var_name;
                CHECK_OBJECT( var_pardir );
                tmp_compexpr_right_3 = var_pardir;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 423;
                    type_description_1 = "oooooooooo";
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
                    PyObject *tmp_assign_source_21;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_args_element_name_8;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 424;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_4 = tmp_mvar_value_5;
                    CHECK_OBJECT( par_path );
                    tmp_args_element_name_6 = par_path;
                    CHECK_OBJECT( var_pardir );
                    tmp_args_element_name_7 = var_pardir;
                    CHECK_OBJECT( var_pardir );
                    tmp_args_element_name_8 = var_pardir;
                    frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 424;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
                    }

                    if ( tmp_assign_source_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 424;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_path;
                        assert( old != NULL );
                        par_path = tmp_assign_source_21;
                        Py_DECREF( old );
                    }

                }
                branch_no_7:;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT( var_pardir );
                tmp_assign_source_22 = var_pardir;
                {
                    PyObject *old = par_path;
                    par_path = tmp_assign_source_22;
                    Py_INCREF( par_path );
                    Py_XDECREF( old );
                }

            }
            branch_end_6:;
        }
        goto loop_start_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        if ( par_path == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_path;
        CHECK_OBJECT( var_name );
        tmp_args_element_name_10 = var_name;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_newpath;
            var_newpath = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_islink );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_islink );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "islink" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( var_newpath );
        tmp_args_element_name_11 = var_newpath;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "oooooooooo";
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
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( var_newpath );
            tmp_assign_source_24 = var_newpath;
            {
                PyObject *old = par_path;
                par_path = tmp_assign_source_24;
                Py_INCREF( par_path );
                Py_XDECREF( old );
            }

        }
        goto loop_start_1;
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_newpath );
        tmp_compexpr_left_4 = var_newpath;
        CHECK_OBJECT( par_seen );
        tmp_compexpr_right_4 = par_seen;
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_25;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_seen );
            tmp_subscribed_name_2 = par_seen;
            CHECK_OBJECT( var_newpath );
            tmp_subscript_name_2 = var_newpath;
            tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_path;
                par_path = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_path );
            tmp_compexpr_left_5 = par_path;
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_10 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            goto loop_start_1;
            branch_no_10:;
        }
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_8;
            CHECK_OBJECT( var_newpath );
            tmp_args_element_name_12 = var_newpath;
            CHECK_OBJECT( par_rest );
            tmp_args_element_name_13 = par_rest;
            frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 441;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = Py_False;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_None;
        CHECK_OBJECT( par_seen );
        tmp_ass_subscribed_1 = par_seen;
        CHECK_OBJECT( var_newpath );
        tmp_ass_subscript_1 = var_newpath;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__joinrealpath );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__joinrealpath );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_joinrealpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_8 = tmp_mvar_value_9;
        if ( par_path == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_14 = par_path;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_2 = tmp_mvar_value_10;
        CHECK_OBJECT( var_newpath );
        tmp_args_element_name_16 = var_newpath;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_readlink, call_args );
        }

        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_seen );
        tmp_args_element_name_17 = par_seen;
        frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_17 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_26 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
        if ( tmp_assign_source_27 == NULL )
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


            type_description_1 = "oooooooooo";
            exception_lineno = 443;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
        if ( tmp_assign_source_28 == NULL )
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


            type_description_1 = "oooooooooo";
            exception_lineno = 443;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 443;
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

            type_description_1 = "oooooooooo";
            exception_lineno = 443;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

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
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = par_path;
            par_path = tmp_assign_source_29;
            Py_INCREF( par_path );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_ok;
            var_ok = tmp_assign_source_30;
            Py_INCREF( var_ok );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( var_ok );
        tmp_operand_name_4 = var_ok;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooooo";
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
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 445;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_11;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_18 = par_path;
            CHECK_OBJECT( par_rest );
            tmp_args_element_name_19 = par_rest;
            frame_16335085026ecaac193d47cfd3adf26d->m_frame.f_lineno = 445;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_False;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_path );
        tmp_ass_subvalue_2 = par_path;
        CHECK_OBJECT( par_seen );
        tmp_ass_subscribed_2 = par_seen;
        CHECK_OBJECT( var_newpath );
        tmp_ass_subscript_2 = var_newpath;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_element_3;
        if ( par_path == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 448;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_path;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_True;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16335085026ecaac193d47cfd3adf26d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16335085026ecaac193d47cfd3adf26d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16335085026ecaac193d47cfd3adf26d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16335085026ecaac193d47cfd3adf26d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16335085026ecaac193d47cfd3adf26d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16335085026ecaac193d47cfd3adf26d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16335085026ecaac193d47cfd3adf26d,
        type_description_1,
        par_path,
        par_rest,
        par_seen,
        var_sep,
        var_curdir,
        var_pardir,
        var_name,
        var__,
        var_newpath,
        var_ok
    );


    // Release cached frame.
    if ( frame_16335085026ecaac193d47cfd3adf26d == cache_frame_16335085026ecaac193d47cfd3adf26d )
    {
        Py_DECREF( frame_16335085026ecaac193d47cfd3adf26d );
    }
    cache_frame_16335085026ecaac193d47cfd3adf26d = NULL;

    assertFrameObject( frame_16335085026ecaac193d47cfd3adf26d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_18__joinrealpath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_rest );
    par_rest = NULL;

    CHECK_OBJECT( (PyObject *)par_seen );
    Py_DECREF( par_seen );
    par_seen = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_curdir );
    Py_DECREF( var_curdir );
    var_curdir = NULL;

    CHECK_OBJECT( (PyObject *)var_pardir );
    Py_DECREF( var_pardir );
    var_pardir = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_newpath );
    var_newpath = NULL;

    Py_XDECREF( var_ok );
    var_ok = NULL;

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

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_rest );
    par_rest = NULL;

    CHECK_OBJECT( (PyObject *)par_seen );
    Py_DECREF( par_seen );
    par_seen = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_curdir );
    var_curdir = NULL;

    Py_XDECREF( var_pardir );
    var_pardir = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_newpath );
    var_newpath = NULL;

    Py_XDECREF( var_ok );
    var_ok = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_18__joinrealpath );
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


static PyObject *impl_posixpath$$$function_19_relpath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[ 0 ];
    PyObject *par_start = python_pars[ 1 ];
    PyObject *var_curdir = NULL;
    PyObject *var_sep = NULL;
    PyObject *var_pardir = NULL;
    PyObject *var_start_list = NULL;
    PyObject *var_path_list = NULL;
    PyObject *var_i = NULL;
    PyObject *var_rel_list = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4fd7665c81fa92877db1855c758dacc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_580b416fd3249f100b2206c5f2e847e9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_580b416fd3249f100b2206c5f2e847e9_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_ba6b83a4682530271f13a5d9b87cfd8e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_ba6b83a4682530271f13a5d9b87cfd8e_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_4fd7665c81fa92877db1855c758dacc9 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4fd7665c81fa92877db1855c758dacc9, codeobj_4fd7665c81fa92877db1855c758dacc9, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4fd7665c81fa92877db1855c758dacc9 = cache_frame_4fd7665c81fa92877db1855c758dacc9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4fd7665c81fa92877db1855c758dacc9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4fd7665c81fa92877db1855c758dacc9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_path );
        tmp_operand_name_1 = par_path;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooooooooo";
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_ValueError );

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

                exception_lineno = 457;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 457;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_6058b8b47c5b0b116f271ba9e0feb694_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 457;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 459;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_1 = par_path;
        frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fspath, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 460;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_path );
        tmp_args_element_name_2 = par_path;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 460;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_4;
        frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 460;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            tmp_assign_source_2 = const_bytes_chr_46;
            assert( var_curdir == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_curdir = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_bytes_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_sep = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_bytes_digest_9c4bca9d222e07510ef0a0ee3fdb36d9;
            assert( var_pardir == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_pardir = tmp_assign_source_4;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_dot;
            assert( var_curdir == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_curdir = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_str_chr_47;
            assert( var_sep == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_sep = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_digest_7b79a8950d64155a442741f6cc8c809b;
            assert( var_pardir == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_pardir = tmp_assign_source_7;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_start );
        tmp_compexpr_left_1 = par_start;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_curdir );
            tmp_assign_source_8 = var_curdir;
            {
                PyObject *old = par_start;
                assert( old != NULL );
                par_start = tmp_assign_source_8;
                Py_INCREF( par_start );
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 472;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( par_start );
            tmp_args_element_name_4 = par_start;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 472;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_fspath, call_args );
            }

            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_start;
                assert( old != NULL );
                par_start = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_abspath );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abspath );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abspath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 475;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_3 = tmp_mvar_value_6;
            CHECK_OBJECT( par_start );
            tmp_args_element_name_5 = par_start;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 475;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_sep );
            tmp_args_element_name_6 = var_sep;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 475;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_580b416fd3249f100b2206c5f2e847e9_2, codeobj_580b416fd3249f100b2206c5f2e847e9, module_posixpath, sizeof(void *) );
        frame_580b416fd3249f100b2206c5f2e847e9_2 = cache_frame_580b416fd3249f100b2206c5f2e847e9_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_580b416fd3249f100b2206c5f2e847e9_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_580b416fd3249f100b2206c5f2e847e9_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    exception_lineno = 475;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_14;
                Py_INCREF( outline_0_var_x );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_2;
            CHECK_OBJECT( outline_0_var_x );
            tmp_truth_name_2 = CHECK_IF_TRUE( outline_0_var_x );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 475;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_x );
                tmp_append_value_1 = outline_0_var_x;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 475;
                    type_description_2 = "o";
                    goto try_except_handler_4;
                }
            }
            branch_no_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_10 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
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
        RESTORE_FRAME_EXCEPTION( frame_580b416fd3249f100b2206c5f2e847e9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_580b416fd3249f100b2206c5f2e847e9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_580b416fd3249f100b2206c5f2e847e9_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_580b416fd3249f100b2206c5f2e847e9_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_580b416fd3249f100b2206c5f2e847e9_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_580b416fd3249f100b2206c5f2e847e9_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_580b416fd3249f100b2206c5f2e847e9_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame.
        if ( frame_580b416fd3249f100b2206c5f2e847e9_2 == cache_frame_580b416fd3249f100b2206c5f2e847e9_2 )
        {
            Py_DECREF( frame_580b416fd3249f100b2206c5f2e847e9_2 );
        }
        cache_frame_580b416fd3249f100b2206c5f2e847e9_2 = NULL;

        assertFrameObject( frame_580b416fd3249f100b2206c5f2e847e9_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
        return NULL;
        outline_exception_1:;
        exception_lineno = 475;
        goto try_except_handler_2;
        outline_result_1:;
        assert( var_start_list == NULL );
        var_start_list = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_15;
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_abspath );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abspath );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abspath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 476;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_7 = par_path;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 476;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_sep );
            tmp_args_element_name_8 = var_sep;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 476;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_split, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_17;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ba6b83a4682530271f13a5d9b87cfd8e_3, codeobj_ba6b83a4682530271f13a5d9b87cfd8e, module_posixpath, sizeof(void *) );
        frame_ba6b83a4682530271f13a5d9b87cfd8e_3 = cache_frame_ba6b83a4682530271f13a5d9b87cfd8e_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 476;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_19 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_x;
                outline_1_var_x = tmp_assign_source_19;
                Py_INCREF( outline_1_var_x );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_truth_name_3;
            CHECK_OBJECT( outline_1_var_x );
            tmp_truth_name_3 = CHECK_IF_TRUE( outline_1_var_x );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 476;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_append_list_2 = tmp_listcomp_2__contraction;
                CHECK_OBJECT( outline_1_var_x );
                tmp_append_value_2 = outline_1_var_x;
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 476;
                    type_description_2 = "o";
                    goto try_except_handler_6;
                }
            }
            branch_no_5:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_assign_source_15 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        goto frame_return_exit_3;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ba6b83a4682530271f13a5d9b87cfd8e_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ba6b83a4682530271f13a5d9b87cfd8e_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ba6b83a4682530271f13a5d9b87cfd8e_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ba6b83a4682530271f13a5d9b87cfd8e_3,
            type_description_2,
            outline_1_var_x
        );


        // Release cached frame.
        if ( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 == cache_frame_ba6b83a4682530271f13a5d9b87cfd8e_3 )
        {
            Py_DECREF( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 );
        }
        cache_frame_ba6b83a4682530271f13a5d9b87cfd8e_3 = NULL;

        assertFrameObject( frame_ba6b83a4682530271f13a5d9b87cfd8e_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF( outline_1_var_x );
        outline_1_var_x = NULL;

        goto outline_result_2;
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

        Py_XDECREF( outline_1_var_x );
        outline_1_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
        return NULL;
        outline_exception_2:;
        exception_lineno = 476;
        goto try_except_handler_2;
        outline_result_2:;
        assert( var_path_list == NULL );
        var_path_list = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_commonprefix );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_commonprefix );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "commonprefix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_6 = tmp_mvar_value_9;
        CHECK_OBJECT( var_start_list );
        tmp_list_element_1 = var_start_list;
        tmp_args_element_name_10 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_10, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_path_list );
        tmp_list_element_1 = var_path_list;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_10, 1, tmp_list_element_1 );
        frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_pardir );
        tmp_list_element_2 = var_pardir;
        tmp_left_name_2 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_left_name_2, 0, tmp_list_element_2 );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( var_start_list );
        tmp_args_element_name_11 = var_start_list;
        frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 480;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_i );
        tmp_right_name_2 = var_i;
        tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_path_list );
        tmp_subscribed_name_1 = var_path_list;
        CHECK_OBJECT( var_i );
        tmp_start_name_1 = var_i;
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_rel_list == NULL );
        var_rel_list = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_rel_list );
        tmp_operand_name_2 = var_rel_list;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        CHECK_OBJECT( var_curdir );
        tmp_return_value = var_curdir;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_6:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "join" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 483;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_11;
        CHECK_OBJECT( var_rel_list );
        tmp_dircall_arg2_1 = var_rel_list;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_2_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 483;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_4fd7665c81fa92877db1855c758dacc9, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_4fd7665c81fa92877db1855c758dacc9, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_mvar_value_15;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_TypeError );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TypeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 484;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = tmp_mvar_value_12;
        tmp_compexpr_right_2 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_AttributeError );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AttributeError );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AttributeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 484;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = tmp_mvar_value_13;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_BytesWarning );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesWarning );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 484;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = tmp_mvar_value_14;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 2, tmp_tuple_element_1 );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 484;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = tmp_mvar_value_15;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_2, 3, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 484;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_genericpath );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_genericpath );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "genericpath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 485;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_instance_5 = tmp_mvar_value_16;
            tmp_args_element_name_12 = const_str_plain_relpath;
            CHECK_OBJECT( par_path );
            tmp_args_element_name_13 = par_path;
            CHECK_OBJECT( par_start );
            tmp_args_element_name_14 = par_start;
            frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = 485;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_5, const_str_plain__check_arg_types, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 485;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 486;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fd7665c81fa92877db1855c758dacc9->m_frame) frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_7;
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 474;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4fd7665c81fa92877db1855c758dacc9->m_frame) frame_4fd7665c81fa92877db1855c758dacc9->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_7;
        branch_end_7:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fd7665c81fa92877db1855c758dacc9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fd7665c81fa92877db1855c758dacc9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fd7665c81fa92877db1855c758dacc9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4fd7665c81fa92877db1855c758dacc9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4fd7665c81fa92877db1855c758dacc9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4fd7665c81fa92877db1855c758dacc9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4fd7665c81fa92877db1855c758dacc9,
        type_description_1,
        par_path,
        par_start,
        var_curdir,
        var_sep,
        var_pardir,
        var_start_list,
        var_path_list,
        var_i,
        var_rel_list
    );


    // Release cached frame.
    if ( frame_4fd7665c81fa92877db1855c758dacc9 == cache_frame_4fd7665c81fa92877db1855c758dacc9 )
    {
        Py_DECREF( frame_4fd7665c81fa92877db1855c758dacc9 );
    }
    cache_frame_4fd7665c81fa92877db1855c758dacc9 = NULL;

    assertFrameObject( frame_4fd7665c81fa92877db1855c758dacc9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)var_curdir );
    Py_DECREF( var_curdir );
    var_curdir = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_pardir );
    Py_DECREF( var_pardir );
    var_pardir = NULL;

    CHECK_OBJECT( (PyObject *)var_start_list );
    Py_DECREF( var_start_list );
    var_start_list = NULL;

    CHECK_OBJECT( (PyObject *)var_path_list );
    Py_DECREF( var_path_list );
    var_path_list = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_rel_list );
    Py_DECREF( var_rel_list );
    var_rel_list = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( var_curdir );
    var_curdir = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_pardir );
    var_pardir = NULL;

    Py_XDECREF( var_start_list );
    var_start_list = NULL;

    Py_XDECREF( var_path_list );
    var_path_list = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_rel_list );
    var_rel_list = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_19_relpath );
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


static PyObject *impl_posixpath$$$function_20_commonpath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_paths = python_pars[ 0 ];
    struct Nuitka_CellObject *var_sep = PyCell_EMPTY();
    PyObject *var_curdir = NULL;
    PyObject *var_split_paths = NULL;
    PyObject *var_isabs = NULL;
    PyObject *var_s1 = NULL;
    PyObject *var_s2 = NULL;
    PyObject *var_common = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *var_prefix = NULL;
    PyObject *outline_0_var_path = NULL;
    PyObject *outline_1_var_s = NULL;
    PyObject *outline_2_var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d99a59f2b05188310cab52c877a96534;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_629587f1c7e8a57b82ce3cc8cf836c95_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_629587f1c7e8a57b82ce3cc8cf836c95_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_c127bb162707ffe2a40f889bd66ed297_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    struct Nuitka_FrameObject *frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_c127bb162707ffe2a40f889bd66ed297_3 = NULL;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_d99a59f2b05188310cab52c877a96534 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d99a59f2b05188310cab52c877a96534, codeobj_d99a59f2b05188310cab52c877a96534, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d99a59f2b05188310cab52c877a96534 = cache_frame_d99a59f2b05188310cab52c877a96534;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d99a59f2b05188310cab52c877a96534 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d99a59f2b05188310cab52c877a96534 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_paths );
        tmp_operand_name_1 = par_paths;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ocooooooooo";
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_ValueError );

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

                exception_lineno = 498;
                type_description_1 = "ocooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 498;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_a250765a107d7d57a8b84e66d6eb166b_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "ocooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 498;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_tuple );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tuple );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tuple" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 500;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_map );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_map );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "map" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 500;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 500;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fspath );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_paths );
        tmp_args_element_name_3 = par_paths;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_paths;
            assert( old != NULL );
            par_paths = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 501;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( par_paths );
        tmp_subscribed_name_1 = par_paths;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 501;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_6;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 501;
            type_description_1 = "ocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            tmp_assign_source_2 = const_bytes_chr_47;
            assert( PyCell_GET( var_sep ) == NULL );
            Py_INCREF( tmp_assign_source_2 );
            PyCell_SET( var_sep, tmp_assign_source_2 );

        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_bytes_chr_46;
            assert( var_curdir == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_curdir = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_str_chr_47;
            assert( PyCell_GET( var_sep ) == NULL );
            Py_INCREF( tmp_assign_source_4 );
            PyCell_SET( var_sep, tmp_assign_source_4 );

        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_dot;
            assert( var_curdir == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_curdir = tmp_assign_source_5;
        }
        branch_end_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_paths );
            tmp_iter_arg_1 = par_paths;
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 509;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_629587f1c7e8a57b82ce3cc8cf836c95_2, codeobj_629587f1c7e8a57b82ce3cc8cf836c95, module_posixpath, sizeof(void *)+sizeof(void *) );
        frame_629587f1c7e8a57b82ce3cc8cf836c95_2 = cache_frame_629587f1c7e8a57b82ce3cc8cf836c95_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oc";
                    exception_lineno = 509;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_path;
                outline_0_var_path = tmp_assign_source_10;
                Py_INCREF( outline_0_var_path );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_path );
            tmp_called_instance_1 = outline_0_var_path;
            CHECK_OBJECT( PyCell_GET( var_sep ) );
            tmp_args_element_name_6 = PyCell_GET( var_sep );
            frame_629587f1c7e8a57b82ce3cc8cf836c95_2->m_frame.f_lineno = 509;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 509;
                type_description_2 = "oc";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 509;
                type_description_2 = "oc";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_2 = "oc";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_6 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
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
        RESTORE_FRAME_EXCEPTION( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_629587f1c7e8a57b82ce3cc8cf836c95_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_629587f1c7e8a57b82ce3cc8cf836c95_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_629587f1c7e8a57b82ce3cc8cf836c95_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_629587f1c7e8a57b82ce3cc8cf836c95_2,
            type_description_2,
            outline_0_var_path,
            var_sep
        );


        // Release cached frame.
        if ( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 == cache_frame_629587f1c7e8a57b82ce3cc8cf836c95_2 )
        {
            Py_DECREF( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 );
        }
        cache_frame_629587f1c7e8a57b82ce3cc8cf836c95_2 = NULL;

        assertFrameObject( frame_629587f1c7e8a57b82ce3cc8cf836c95_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ocooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_path );
        outline_0_var_path = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_path );
        outline_0_var_path = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        outline_exception_1:;
        exception_lineno = 509;
        goto try_except_handler_2;
        outline_result_1:;
        assert( var_split_paths == NULL );
        var_split_paths = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_set );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 512;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( par_paths );
            tmp_iter_arg_3 = par_paths;
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 512;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_12;
        }
        // Tried code:
        tmp_args_element_name_7 = posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_7)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_7)->m_closure[1] = var_sep;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_7)->m_closure[1] );


        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        outline_result_2:;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 512;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ocooooooooo";
            exception_lineno = 512;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
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

                    type_description_1 = "ocooooooooo";
                    exception_lineno = 512;
                    goto try_except_handler_8;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ocooooooooo";
            exception_lineno = 512;
            goto try_except_handler_8;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_d99a59f2b05188310cab52c877a96534, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_d99a59f2b05188310cab52c877a96534, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_8;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_ValueError );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 513;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_9;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_8;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_9;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_raise_cause_1;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_ValueError );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 514;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_6 = tmp_mvar_value_9;
            frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 514;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_1f5bd7b7cdf5210fb912c281960b3784_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 514;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_9;
            }
            tmp_raise_cause_1 = Py_None;
            exception_type = tmp_raise_type_2;
            exception_value = NULL;
            Py_INCREF( tmp_raise_cause_1 );
            exception_lineno = 514;
            RAISE_EXCEPTION_WITH_CAUSE( &exception_type, &exception_value, &exception_tb, tmp_raise_cause_1 );
            type_description_1 = "ocooooooooo";
            goto try_except_handler_9;
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 511;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d99a59f2b05188310cab52c877a96534->m_frame) frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ocooooooooo";
        goto try_except_handler_9;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert( var_isabs == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_isabs = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( var_split_paths );
            tmp_iter_arg_4 = var_split_paths;
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 516;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_10;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_17;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c127bb162707ffe2a40f889bd66ed297_3, codeobj_c127bb162707ffe2a40f889bd66ed297, module_posixpath, sizeof(void *)+sizeof(void *) );
        frame_c127bb162707ffe2a40f889bd66ed297_3 = cache_frame_c127bb162707ffe2a40f889bd66ed297_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c127bb162707ffe2a40f889bd66ed297_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c127bb162707ffe2a40f889bd66ed297_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 516;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_19 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_s;
                outline_1_var_s = tmp_assign_source_19;
                Py_INCREF( outline_1_var_s );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            // Tried code:
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT( outline_1_var_s );
                tmp_iter_arg_5 = outline_1_var_s;
                tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_5 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_2 = "oo";
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_20;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = PyList_New( 0 );
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_21;
                    Py_XDECREF( old );
                }

            }
            MAKE_OR_REUSE_FRAME( cache_frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4, codeobj_4eb7e5185dd90c9bf2852e9954b4ebd5, module_posixpath, sizeof(void *)+sizeof(void *) );
            frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 = cache_frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT( tmp_listcomp$listcomp_1__$0 );
                tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_3 );
                if ( tmp_assign_source_22 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_3 = "oo";
                        exception_lineno = 516;
                        goto try_except_handler_13;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_22;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_23;
                CHECK_OBJECT( tmp_listcomp$listcomp_1__iter_value_0 );
                tmp_assign_source_23 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_2_var_c;
                    outline_2_var_c = tmp_assign_source_23;
                    Py_INCREF( outline_2_var_c );
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_4;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                int tmp_truth_name_2;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( outline_2_var_c );
                tmp_truth_name_2 = CHECK_IF_TRUE( outline_2_var_c );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_3 = "oo";
                    goto try_except_handler_13;
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
                CHECK_OBJECT( outline_2_var_c );
                tmp_compexpr_left_2 = outline_2_var_c;
                CHECK_OBJECT( var_curdir );
                tmp_compexpr_right_2 = var_curdir;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_3 = "oo";
                    goto try_except_handler_13;
                }
                tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_4 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_4 = tmp_and_left_value_1;
                and_end_1:;
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
                    PyObject *tmp_append_list_3;
                    PyObject *tmp_append_value_3;
                    CHECK_OBJECT( tmp_listcomp$listcomp_1__contraction );
                    tmp_append_list_3 = tmp_listcomp$listcomp_1__contraction;
                    CHECK_OBJECT( outline_2_var_c );
                    tmp_append_value_3 = outline_2_var_c;
                    assert( PyList_Check( tmp_append_list_3 ) );
                    tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 516;
                        type_description_3 = "oo";
                        goto try_except_handler_13;
                    }
                }
                branch_no_4:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 516;
                type_description_3 = "oo";
                goto try_except_handler_13;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT( tmp_listcomp$listcomp_1__contraction );
            tmp_append_value_2 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF( tmp_append_value_2 );
            goto try_return_handler_13;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
            return NULL;
            // Return handler code:
            try_return_handler_13:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__$0 );
            Py_DECREF( tmp_listcomp$listcomp_1__$0 );
            tmp_listcomp$listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__contraction );
            Py_DECREF( tmp_listcomp$listcomp_1__contraction );
            tmp_listcomp$listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp$listcomp_1__iter_value_0 );
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_4;
            // Exception handler code:
            try_except_handler_13:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__$0 );
            Py_DECREF( tmp_listcomp$listcomp_1__$0 );
            tmp_listcomp$listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__contraction );
            Py_DECREF( tmp_listcomp$listcomp_1__contraction );
            tmp_listcomp$listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp$listcomp_1__iter_value_0 );
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_4;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_return_exit_4:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_12;

            frame_exception_exit_4:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4,
                type_description_3,
                outline_2_var_c,
                var_curdir
            );


            // Release cached frame.
            if ( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 == cache_frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 )
            {
                Py_DECREF( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 );
            }
            cache_frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 = NULL;

            assertFrameObject( frame_4eb7e5185dd90c9bf2852e9954b4ebd5_4 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_3:;
            type_description_2 = "oo";
            goto try_except_handler_12;
            skip_nested_handling_2:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
            return NULL;
            // Return handler code:
            try_return_handler_12:;
            Py_XDECREF( outline_2_var_c );
            outline_2_var_c = NULL;

            goto outline_result_4;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( outline_2_var_c );
            outline_2_var_c = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto outline_exception_3;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
            return NULL;
            outline_exception_3:;
            exception_lineno = 516;
            goto try_except_handler_11;
            outline_result_4:;
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 516;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_2 = "oo";
            goto try_except_handler_11;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_assign_source_15 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        goto frame_return_exit_3;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c127bb162707ffe2a40f889bd66ed297_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_c127bb162707ffe2a40f889bd66ed297_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c127bb162707ffe2a40f889bd66ed297_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c127bb162707ffe2a40f889bd66ed297_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c127bb162707ffe2a40f889bd66ed297_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c127bb162707ffe2a40f889bd66ed297_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c127bb162707ffe2a40f889bd66ed297_3,
            type_description_2,
            outline_1_var_s,
            var_curdir
        );


        // Release cached frame.
        if ( frame_c127bb162707ffe2a40f889bd66ed297_3 == cache_frame_c127bb162707ffe2a40f889bd66ed297_3 )
        {
            Py_DECREF( frame_c127bb162707ffe2a40f889bd66ed297_3 );
        }
        cache_frame_c127bb162707ffe2a40f889bd66ed297_3 = NULL;

        assertFrameObject( frame_c127bb162707ffe2a40f889bd66ed297_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_2:;
        type_description_1 = "ocooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_3:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF( outline_1_var_s );
        outline_1_var_s = NULL;

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

        Py_XDECREF( outline_1_var_s );
        outline_1_var_s = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
        return NULL;
        outline_exception_2:;
        exception_lineno = 516;
        goto try_except_handler_2;
        outline_result_3:;
        {
            PyObject *old = var_split_paths;
            assert( old != NULL );
            var_split_paths = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_min );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_min );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "min" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 517;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( var_split_paths );
        tmp_args_element_name_8 = var_split_paths;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        assert( var_s1 == NULL );
        var_s1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_max );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_max );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "max" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 518;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_8 = tmp_mvar_value_11;
        CHECK_OBJECT( var_split_paths );
        tmp_args_element_name_9 = var_split_paths;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        assert( var_s2 == NULL );
        var_s2 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( var_s1 );
        tmp_assign_source_26 = var_s1;
        assert( var_common == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_common = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_enumerate );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enumerate );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "enumerate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 520;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_9 = tmp_mvar_value_12;
        CHECK_OBJECT( var_s1 );
        tmp_args_element_name_10 = var_s1;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_4 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_4 );
        if ( tmp_assign_source_28 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_4;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ocooooooooo";
                exception_lineno = 520;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_7 = tmp_for_loop_1__iter_value;
        tmp_assign_source_29 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_7 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_2, 0, 2 );
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


            type_description_1 = "ocooooooooo";
            exception_lineno = 520;
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_3, 1, 2 );
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


            type_description_1 = "ocooooooooo";
            exception_lineno = 520;
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_31;
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

                    type_description_1 = "ocooooooooo";
                    exception_lineno = 520;
                    goto try_except_handler_16;
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

            type_description_1 = "ocooooooooo";
            exception_lineno = 520;
            goto try_except_handler_16;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_15;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_32 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_32;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_33 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_33;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_c );
        tmp_compexpr_left_3 = var_c;
        CHECK_OBJECT( var_s2 );
        tmp_subscribed_name_2 = var_s2;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_2 = var_i;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_14;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_14;
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
            PyObject *tmp_assign_source_34;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( var_s1 );
            tmp_subscribed_name_3 = var_s1;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( var_i );
            tmp_stop_name_1 = var_i;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_3 == NULL) );
            tmp_assign_source_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 522;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = var_common;
                assert( old != NULL );
                var_common = tmp_assign_source_34;
                Py_DECREF( old );
            }

        }
        goto loop_end_4;
        branch_no_5:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        type_description_1 = "ocooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_35;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_isabs );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_isabs );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( PyCell_GET( var_sep ) );
        tmp_assign_source_35 = PyCell_GET( var_sep );
        Py_INCREF( tmp_assign_source_35 );
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( PyCell_GET( var_sep ) );
        tmp_subscribed_name_4 = PyCell_GET( var_sep );
        tmp_subscript_name_4 = const_slice_none_int_0_none;
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        assert( var_prefix == NULL );
        var_prefix = tmp_assign_source_35;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( var_prefix );
        tmp_left_name_1 = var_prefix;
        CHECK_OBJECT( PyCell_GET( var_sep ) );
        tmp_source_name_2 = PyCell_GET( var_sep );
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        if ( var_common == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 526;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_11 = var_common;
        frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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

    if ( exception_keeper_tb_14 == NULL )
    {
        exception_keeper_tb_14 = MAKE_TRACEBACK( frame_d99a59f2b05188310cab52c877a96534, exception_keeper_lineno_14 );
    }
    else if ( exception_keeper_lineno_14 != 0 )
    {
        exception_keeper_tb_14 = ADD_TRACEBACK( exception_keeper_tb_14, frame_d99a59f2b05188310cab52c877a96534, exception_keeper_lineno_14 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    PyException_SetTraceback( exception_keeper_value_14, (PyObject *)exception_keeper_tb_14 );
    PUBLISH_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_mvar_value_14;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_TypeError );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TypeError );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TypeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 527;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_17;
        }

        tmp_tuple_element_1 = tmp_mvar_value_13;
        tmp_compexpr_right_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_1 );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_AttributeError );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AttributeError );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AttributeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 527;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_17;
        }

        tmp_tuple_element_1 = tmp_mvar_value_14;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 1, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 527;
            type_description_1 = "ocooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_call_result_2;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_genericpath );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_genericpath );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "genericpath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 528;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_17;
            }

            tmp_source_name_3 = tmp_mvar_value_15;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__check_arg_types );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 528;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_17;
            }
            tmp_dircall_arg2_1 = const_tuple_str_plain_commonpath_tuple;
            CHECK_OBJECT( par_paths );
            tmp_dircall_arg3_1 = par_paths;
            Py_INCREF( tmp_dircall_arg2_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_call_result_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 528;
                type_description_1 = "ocooooooooo";
                goto try_except_handler_17;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 529;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d99a59f2b05188310cab52c877a96534->m_frame) frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ocooooooooo";
        goto try_except_handler_17;
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 508;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d99a59f2b05188310cab52c877a96534->m_frame) frame_d99a59f2b05188310cab52c877a96534->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ocooooooooo";
        goto try_except_handler_17;
        branch_end_6:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d99a59f2b05188310cab52c877a96534 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d99a59f2b05188310cab52c877a96534 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d99a59f2b05188310cab52c877a96534 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d99a59f2b05188310cab52c877a96534, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d99a59f2b05188310cab52c877a96534->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d99a59f2b05188310cab52c877a96534, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d99a59f2b05188310cab52c877a96534,
        type_description_1,
        par_paths,
        var_sep,
        var_curdir,
        var_split_paths,
        var_isabs,
        var_s1,
        var_s2,
        var_common,
        var_i,
        var_c,
        var_prefix
    );


    // Release cached frame.
    if ( frame_d99a59f2b05188310cab52c877a96534 == cache_frame_d99a59f2b05188310cab52c877a96534 )
    {
        Py_DECREF( frame_d99a59f2b05188310cab52c877a96534 );
    }
    cache_frame_d99a59f2b05188310cab52c877a96534 = NULL;

    assertFrameObject( frame_d99a59f2b05188310cab52c877a96534 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_paths );
    Py_DECREF( par_paths );
    par_paths = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    CHECK_OBJECT( (PyObject *)var_curdir );
    Py_DECREF( var_curdir );
    var_curdir = NULL;

    CHECK_OBJECT( (PyObject *)var_split_paths );
    Py_DECREF( var_split_paths );
    var_split_paths = NULL;

    CHECK_OBJECT( (PyObject *)var_isabs );
    Py_DECREF( var_isabs );
    var_isabs = NULL;

    CHECK_OBJECT( (PyObject *)var_s1 );
    Py_DECREF( var_s1 );
    var_s1 = NULL;

    CHECK_OBJECT( (PyObject *)var_s2 );
    Py_DECREF( var_s2 );
    var_s2 = NULL;

    Py_XDECREF( var_common );
    var_common = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_prefix );
    Py_DECREF( var_prefix );
    var_prefix = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_paths );
    Py_DECREF( par_paths );
    par_paths = NULL;

    CHECK_OBJECT( (PyObject *)var_sep );
    Py_DECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_curdir );
    var_curdir = NULL;

    Py_XDECREF( var_split_paths );
    var_split_paths = NULL;

    Py_XDECREF( var_isabs );
    var_isabs = NULL;

    Py_XDECREF( var_s1 );
    var_s1 = NULL;

    Py_XDECREF( var_s2 );
    var_s2 = NULL;

    Py_XDECREF( var_common );
    var_common = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( posixpath$$$function_20_commonpath );
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



struct posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_locals {
    PyObject *var_p;
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

static PyObject *posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_locals *generator_heap = (struct posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_5c1ebb48dafe0dcac44e2789fbbb977e, module_posixpath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 512;
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
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_p );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_p );
        tmp_subscribed_name_1 = generator_heap->var_p;
        tmp_subscript_name_1 = const_slice_none_int_pos_1_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 512;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sep" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 512;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[1] );
        tmp_expression_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 512;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_subscribed_name_1, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 512;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 512;
        generator_heap->type_description_1 = "Noc";
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
            generator_heap->var_p,
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

    Py_XDECREF( generator_heap->var_p );
    generator_heap->var_p = NULL;

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

    Py_XDECREF( generator_heap->var_p );
    generator_heap->var_p = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_context,
        module_posixpath,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_5496ff33dd61dd4d7378939d9b861cfc,
#endif
        codeobj_5c1ebb48dafe0dcac44e2789fbbb977e,
        2,
        sizeof(struct posixpath$$$function_20_commonpath$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_10_islink(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_10_islink,
        const_str_plain_islink,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_78a54ba806e1672841f32242f232b1bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_b1103b75937103fe3c728e801a96c739,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_11_lexists(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_11_lexists,
        const_str_plain_lexists,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_00c7312b8dfff6ce8e6bbf21ad113834,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_3ebeee0cbb0ee362ec0aadfef9e7cff8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_12_ismount(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_12_ismount,
        const_str_plain_ismount,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_397202efc2b630cb188b236126d5db05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_e31e7a21e5597f1c28e6caa1503351b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_13_expanduser(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_13_expanduser,
        const_str_plain_expanduser,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ad1d92b452d1befb2c72e832829209c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_ec1a55942773a1ed1b0ab975ca03ca6f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_14_expandvars(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_14_expandvars,
        const_str_plain_expandvars,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ef05e1614c9d2572427d000df4409b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_d846a94230723ca9679176ff3600da9f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_15_normpath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_15_normpath,
        const_str_plain_normpath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66367538a4ae89f5640c2965f7170c02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_e084d9312b34c8a5904de57ebbf664bb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_16_abspath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_16_abspath,
        const_str_plain_abspath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8245de23f6e4d7c84fa131d25024e506,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_16a4a9b9dacb0fb063cce9cb46e76c61,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_17_realpath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_17_realpath,
        const_str_plain_realpath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4fef3835bf939f079960d8171920406b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_44ab9043440a6f5475044ca061c38b3a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_18__joinrealpath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_18__joinrealpath,
        const_str_plain__joinrealpath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_16335085026ecaac193d47cfd3adf26d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_19_relpath( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_19_relpath,
        const_str_plain_relpath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4fd7665c81fa92877db1855c758dacc9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_523bbf3c556796a50a49c4c020958a1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_1__get_sep(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_1__get_sep,
        const_str_plain__get_sep,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7717b938ff4fd3f9af100f43a2f7ded4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_20_commonpath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_20_commonpath,
        const_str_plain_commonpath,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d99a59f2b05188310cab52c877a96534,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_e8e129de11dc1c2dd6bf5564336fc621,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_2_normcase(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_2_normcase,
        const_str_plain_normcase,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_00e99e93bef9d23175c34f79dbcd3bf7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_689d97326f0ebf35d54585a76b04c936,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_3_isabs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_3_isabs,
        const_str_plain_isabs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_628b738afa890ab587d5950a4a85db0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_0512d1631454e86e375a4a4113b64782,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_4_join(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_4_join,
        const_str_plain_join,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_887486b44ad26d3c0d0db1fd31143c3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_805ca885f4b0f82e3997f120f096a561,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_5_split(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_5_split,
        const_str_plain_split,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_523314e93f947be88fab8eaaa0c505b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_bb6ac4d09e8375224e2e45f51638261b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_6_splitext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_6_splitext,
        const_str_plain_splitext,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d6ff0e77641baeb8603519524738996,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_7_splitdrive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_7_splitdrive,
        const_str_plain_splitdrive,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_974ab439aba454e1b4acb90bc219172d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_e957ed3279db0abd10e60989b2779ff8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_8_basename(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_8_basename,
        const_str_plain_basename,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fd091b000d5d7971c3aa77f9917ab0f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_410feef5d2282fab7cabb3ceeb8d0601,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_posixpath$$$function_9_dirname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_posixpath$$$function_9_dirname,
        const_str_plain_dirname,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ebc5658db313ea15d29a93d4f409547c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_posixpath,
        const_str_digest_7c7ed7b8d89e8602c36c96b5789260a0,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_posixpath =
{
    PyModuleDef_HEAD_INIT,
    "posixpath",
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

MOD_INIT_DECL( posixpath )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_posixpath );
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
    puts("posixpath: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("posixpath: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("posixpath: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initposixpath" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_posixpath = Py_InitModule4(
        "posixpath",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_posixpath = PyModule_Create( &mdef_posixpath );
#endif

    moduledict_posixpath = MODULE_DICT( module_posixpath );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_posixpath,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_posixpath,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_posixpath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_posixpath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_posixpath );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_posixpath, module_posixpath );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_72906f671423e389d38a290f92f60d4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_2e5d09070c1bbc29393ec38d5e9c304c;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_72906f671423e389d38a290f92f60d4a = MAKE_MODULE_FRAME( codeobj_72906f671423e389d38a290f92f60d4a, module_posixpath );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_72906f671423e389d38a290f92f60d4a );
    assert( Py_REFCNT( frame_72906f671423e389d38a290f92f60d4a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_dot;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_curdir, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_7b79a8950d64155a442741f6cc8c809b;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_pardir, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_dot;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_extsep, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_chr_47;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_sep, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_chr_58;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_pathsep, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_digest_889e73b06bccabeb860b4570072af6c7;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_defpath, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_altsep, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_str_digest_a95935884e50a51dbe5b47044bdbd9e1;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_devnull, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_posixpath;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_72906f671423e389d38a290f92f60d4a->m_frame.f_lineno = 25;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_posixpath;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_72906f671423e389d38a290f92f60d4a->m_frame.f_lineno = 26;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_13 == NULL) );
        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_stat;
        tmp_globals_name_3 = (PyObject *)moduledict_posixpath;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_72906f671423e389d38a290f92f60d4a->m_frame.f_lineno = 27;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_stat, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_genericpath;
        tmp_globals_name_4 = (PyObject *)moduledict_posixpath;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_72906f671423e389d38a290f92f60d4a->m_frame.f_lineno = 28;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_genericpath, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_genericpath;
        tmp_globals_name_5 = (PyObject *)moduledict_posixpath;
        tmp_locals_name_5 = (PyObject *)moduledict_posixpath;
        tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
        tmp_level_name_5 = const_int_0;
        frame_72906f671423e389d38a290f92f60d4a->m_frame.f_lineno = 29;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_posixpath, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = LIST_COPY( const_list_a67fb49f51c8ca43239e54c479acc2ea_list );
        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_posixpath$$$function_1__get_sep(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__get_sep, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_posixpath$$$function_2_normcase(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_normcase, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_posixpath$$$function_3_isabs(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_isabs, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_posixpath$$$function_4_join(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_join, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_posixpath$$$function_5_split(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_split, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_posixpath$$$function_6_splitext(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_splitext, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_genericpath );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_genericpath );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "genericpath" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__splitext );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___doc__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_splitext );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_splitext );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "splitext" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = tmp_mvar_value_4;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain___doc__, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_posixpath$$$function_7_splitdrive(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_splitdrive, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_posixpath$$$function_8_basename(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_basename, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_posixpath$$$function_9_dirname(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_dirname, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_posixpath$$$function_10_islink(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_islink, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_posixpath$$$function_11_lexists(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_lexists, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_posixpath$$$function_12_ismount(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_ismount, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_posixpath$$$function_13_expanduser(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_expanduser, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = Py_None;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprog, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = Py_None;
        UPDATE_STRING_DICT0( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__varprogb, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_posixpath$$$function_14_expandvars(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_expandvars, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_posixpath$$$function_15_normpath(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_normpath, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_posixpath$$$function_16_abspath(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_abspath, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_posixpath$$$function_17_realpath(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_realpath, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_posixpath$$$function_18__joinrealpath(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain__joinrealpath, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_platform );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_darwin;
        tmp_assign_source_37 = RICH_COMPARE_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_supports_unicode_filenames, tmp_assign_source_37 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72906f671423e389d38a290f92f60d4a );
#endif
    popFrameStack();

    assertFrameObject( frame_72906f671423e389d38a290f92f60d4a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72906f671423e389d38a290f92f60d4a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72906f671423e389d38a290f92f60d4a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72906f671423e389d38a290f92f60d4a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72906f671423e389d38a290f92f60d4a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_38 = MAKE_FUNCTION_posixpath$$$function_19_relpath( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_relpath, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_posixpath$$$function_20_commonpath(  );



        UPDATE_STRING_DICT1( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain_commonpath, tmp_assign_source_39 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_posixpath, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_posixpath );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
