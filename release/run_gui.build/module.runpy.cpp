/* Generated code for Python module 'runpy'
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

/* The "_module_runpy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_runpy;
PyDictObject *moduledict_runpy;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_e30909b0262560e6f0b594efd6576614;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_2786cb3b26f8e27a952c95716352310a_tuple;
static PyObject *const_str_plain_alter_argv;
static PyObject *const_str_plain__ModifiedArgv0;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_pkg_name;
static PyObject *const_tuple_str_digest_3c1e4da0674afd8783dae852eb4e9a41_tuple;
static PyObject *const_str_plain__sentinel;
static PyObject *const_str_digest_ec89dfce7bd7431f070751cf63e11651;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_str_plain___main___tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_3c1e4da0674afd8783dae852eb4e9a41;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_plain_run_module;
static PyObject *const_str_digest_8a005358640ac3e052dbb43bddc7d1fc;
static PyObject *const_tuple_str_digest_cf4a22ba20483c170ae4409b20b9528f_tuple;
static PyObject *const_str_plain_NullImporter;
extern PyObject *const_tuple_9a73bb3861e25f5d83343d2bb8437642_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_ex;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_9e98ca2f6ab02cf1e5ec1c608e4365e4;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_b640604c478e3681ea49b13570917bfb;
extern PyObject *const_str_plain_argv;
static PyObject *const_str_digest_4298d63360e91925ca064fc698c92d9d;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_9e390c4c6a3cdabc8174a1dc2acf7bba;
extern PyObject *const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_cf4a22ba20483c170ae4409b20b9528f;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_temp_module;
static PyObject *const_tuple_1d422e59299e462d163fd1feef23cead_tuple;
static PyObject *const_str_plain__saved_module;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple;
extern PyObject *const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e;
extern PyObject *const_str_plain_ModuleType;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_alter_sys;
extern PyObject *const_str_plain_read_code;
static PyObject *const_list_str_plain_run_module_str_plain_run_path_list;
static PyObject *const_str_plain__Error;
static PyObject *const_str_digest_3d480548567d4e34014e302be9c8d9c8;
extern PyObject *const_str_plain_importlib;
static PyObject *const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple;
static PyObject *const_str_plain_main_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_insert;
static PyObject *const_str_digest_e389e52b73f6614d09f6ecd8a0d56db3;
extern PyObject *const_str_plain_parent;
extern PyObject *const_str_plain__get_module_details;
static PyObject *const_str_digest_48fdf98e43c0245629546ebb16ea30ff;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_runpy;
extern PyObject *const_str_plain_rb;
static PyObject *const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_digest_8ddca526c3394b6db39e649e33e40c5d;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_01967ede29810c56c8d154fa1e1cdbea;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
extern PyObject *const_str_plain_pkgutil;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_get_code;
static PyObject *const_str_plain__get_main_module_details;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_rpartition;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_mod_spec;
static PyObject *const_str_digest_0612de75f014b71ea10fce2870dd4bd0;
static PyObject *const_str_plain_path_name;
extern PyObject *const_str_plain_util;
static PyObject *const_str_digest_05c8b6990b0e1f723b2b84e177b834c4;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain__run_code;
extern PyObject *const_str_plain_RuntimeWarning;
extern PyObject *const_str_plain_remove;
static PyObject *const_str_digest_4ec3a8ba39cf3befb64e691998ae0d76;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_mod_globals;
static PyObject *const_str_plain_init_globals;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_f;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
static PyObject *const_str_plain_pkg_main_name;
static PyObject *const_str_digest_980a96f456b0af3a23bcc3f64dadcb19;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568_tuple;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_plain_main_globals;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_is_NullImporter;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_7b3f42cfb809ef9015daf9353f0abfe0;
extern PyObject *const_str_plain_find_spec;
static PyObject *const_str_plain__get_code_from_file;
static PyObject *const_str_plain__run_module_as_main;
static PyObject *const_tuple_c61c7083002490444e123d16501dabe7_tuple;
extern PyObject *const_str_plain___main__;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_cfb1e6c603044c180c5a1a0f5dac47b7;
static PyObject *const_str_digest_63c15dee5511bbd456bbc1c0adde219a;
static PyObject *const_str_digest_0584a78b726907933d76fa2a97e9084d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain_exit;
static PyObject *const_str_angle_run_path;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain__;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple;
static PyObject *const_str_plain_script_name;
static PyObject *const_str_digest_81ac163e5e6bb2013de6b611a30e2aa4;
extern PyObject *const_str_plain_submodule_search_locations;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_exc;
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_str_plain_read_code_str_plain_get_importer_tuple;
extern PyObject *const_str_plain_cached;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_types;
static PyObject *const_str_plain_saved_main;
static PyObject *const_str_plain_run_name;
static PyObject *const_str_plain_run_globals;
extern PyObject *const_str_plain_get_importer;
static PyObject *const_str_digest_3e1bdbc18cab6b5926335d0d664894ac;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_digest_b1747dd27a65efd1995926e007b5b7b6;
extern PyObject *const_str_plain_importer;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain_run_path;
static PyObject *const_str_digest_24055b5cbc753ba229ba91dddeb73b09;
static PyObject *const_str_plain__run_module_code;
extern PyObject *const_tuple_none_none_false_tuple;
extern PyObject *const_str_plain_fname;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_imp;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_existing;
static PyObject *const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain__TempModule;
extern PyObject *const_str_empty;
extern PyObject *const_str_angle_string;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_executable;
static PyObject *const_tuple_str_plain_self_str_plain_mod_name_tuple;
static PyObject *const_str_plain__saved_value;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_spec;
extern PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
extern PyObject *const_str_plain_mod_name;
extern PyObject *const_str_plain_exec;
extern PyObject *const_str_plain_loader;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e30909b0262560e6f0b594efd6576614 = UNSTREAM_STRING_ASCII( &constant_bin[ 974934 ], 453, 0 );
    const_tuple_2786cb3b26f8e27a952c95716352310a_tuple = PyTuple_New( 12 );
    const_str_plain_path_name = UNSTREAM_STRING_ASCII( &constant_bin[ 975387 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 0, const_str_plain_path_name ); Py_INCREF( const_str_plain_path_name );
    const_str_plain_init_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 975396 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 1, const_str_plain_init_globals ); Py_INCREF( const_str_plain_init_globals );
    const_str_plain_run_name = UNSTREAM_STRING_ASCII( &constant_bin[ 975408 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 2, const_str_plain_run_name ); Py_INCREF( const_str_plain_run_name );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 3, const_str_plain_pkg_name ); Py_INCREF( const_str_plain_pkg_name );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 4, const_str_plain_importer ); Py_INCREF( const_str_plain_importer );
    const_str_plain_is_NullImporter = UNSTREAM_STRING_ASCII( &constant_bin[ 975416 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 5, const_str_plain_is_NullImporter ); Py_INCREF( const_str_plain_is_NullImporter );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 6, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 7, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 8, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 9, const_str_plain_mod_spec ); Py_INCREF( const_str_plain_mod_spec );
    const_str_plain_temp_module = UNSTREAM_STRING_ASCII( &constant_bin[ 975431 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 10, const_str_plain_temp_module ); Py_INCREF( const_str_plain_temp_module );
    const_str_plain_mod_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 975442 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 11, const_str_plain_mod_globals ); Py_INCREF( const_str_plain_mod_globals );
    const_str_plain_alter_argv = UNSTREAM_STRING_ASCII( &constant_bin[ 975453 ], 10, 1 );
    const_str_plain__ModifiedArgv0 = UNSTREAM_STRING_ASCII( &constant_bin[ 975463 ], 14, 1 );
    const_tuple_str_digest_3c1e4da0674afd8783dae852eb4e9a41_tuple = PyTuple_New( 1 );
    const_str_digest_3c1e4da0674afd8783dae852eb4e9a41 = UNSTREAM_STRING_ASCII( &constant_bin[ 975477 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3c1e4da0674afd8783dae852eb4e9a41_tuple, 0, const_str_digest_3c1e4da0674afd8783dae852eb4e9a41 ); Py_INCREF( const_str_digest_3c1e4da0674afd8783dae852eb4e9a41 );
    const_str_plain__sentinel = UNSTREAM_STRING_ASCII( &constant_bin[ 975486 ], 9, 1 );
    const_str_digest_ec89dfce7bd7431f070751cf63e11651 = UNSTREAM_STRING_ASCII( &constant_bin[ 975495 ], 20, 0 );
    const_str_plain_run_module = UNSTREAM_STRING_ASCII( &constant_bin[ 975111 ], 10, 1 );
    const_str_digest_8a005358640ac3e052dbb43bddc7d1fc = UNSTREAM_STRING_ASCII( &constant_bin[ 975515 ], 51, 0 );
    const_tuple_str_digest_cf4a22ba20483c170ae4409b20b9528f_tuple = PyTuple_New( 1 );
    const_str_digest_cf4a22ba20483c170ae4409b20b9528f = UNSTREAM_STRING_ASCII( &constant_bin[ 975566 ], 35, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_cf4a22ba20483c170ae4409b20b9528f_tuple, 0, const_str_digest_cf4a22ba20483c170ae4409b20b9528f ); Py_INCREF( const_str_digest_cf4a22ba20483c170ae4409b20b9528f );
    const_str_plain_NullImporter = UNSTREAM_STRING_ASCII( &constant_bin[ 975419 ], 12, 1 );
    const_str_digest_9e98ca2f6ab02cf1e5ec1c608e4365e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 975601 ], 23, 0 );
    const_str_digest_b640604c478e3681ea49b13570917bfb = UNSTREAM_STRING_ASCII( &constant_bin[ 975624 ], 26, 0 );
    const_str_digest_4298d63360e91925ca064fc698c92d9d = UNSTREAM_STRING_ASCII( &constant_bin[ 975650 ], 58, 0 );
    const_str_digest_9e390c4c6a3cdabc8174a1dc2acf7bba = UNSTREAM_STRING_ASCII( &constant_bin[ 975708 ], 30, 0 );
    const_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568 = UNSTREAM_STRING_ASCII( &constant_bin[ 975738 ], 37, 0 );
    const_tuple_1d422e59299e462d163fd1feef23cead_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 0, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_str_plain_run_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 975775 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 1, const_str_plain_run_globals ); Py_INCREF( const_str_plain_run_globals );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 2, const_str_plain_init_globals ); Py_INCREF( const_str_plain_init_globals );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 3, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 4, const_str_plain_mod_spec ); Py_INCREF( const_str_plain_mod_spec );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 5, const_str_plain_pkg_name ); Py_INCREF( const_str_plain_pkg_name );
    const_str_plain_script_name = UNSTREAM_STRING_ASCII( &constant_bin[ 975786 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 6, const_str_plain_script_name ); Py_INCREF( const_str_plain_script_name );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 7, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 8, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 9, const_str_plain_cached ); Py_INCREF( const_str_plain_cached );
    const_str_plain__saved_module = UNSTREAM_STRING_ASCII( &constant_bin[ 975797 ], 13, 1 );
    const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 0, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 1, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 2, const_str_plain_pkg_name ); Py_INCREF( const_str_plain_pkg_name );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 3, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_existing = UNSTREAM_STRING_ASCII( &constant_bin[ 42315 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 5, const_str_plain_existing ); Py_INCREF( const_str_plain_existing );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 6, const_str_plain_warn ); Py_INCREF( const_str_plain_warn );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 7, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 8, const_str_plain_spec ); Py_INCREF( const_str_plain_spec );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 9, const_str_plain_ex ); Py_INCREF( const_str_plain_ex );
    const_str_plain_pkg_main_name = UNSTREAM_STRING_ASCII( &constant_bin[ 975810 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 10, const_str_plain_pkg_main_name ); Py_INCREF( const_str_plain_pkg_main_name );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 11, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 12, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_str_plain_alter_sys = UNSTREAM_STRING_ASCII( &constant_bin[ 975823 ], 9, 1 );
    const_list_str_plain_run_module_str_plain_run_path_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_run_module_str_plain_run_path_list, 0, const_str_plain_run_module ); Py_INCREF( const_str_plain_run_module );
    const_str_plain_run_path = UNSTREAM_STRING_ASCII( &constant_bin[ 975832 ], 8, 1 );
    PyList_SET_ITEM( const_list_str_plain_run_module_str_plain_run_path_list, 1, const_str_plain_run_path ); Py_INCREF( const_str_plain_run_path );
    const_str_plain__Error = UNSTREAM_STRING_ASCII( &constant_bin[ 975840 ], 6, 1 );
    const_str_digest_3d480548567d4e34014e302be9c8d9c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 975846 ], 21, 0 );
    const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 0, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    PyTuple_SET_ITEM( const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 1, const_str_plain_init_globals ); Py_INCREF( const_str_plain_init_globals );
    PyTuple_SET_ITEM( const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 2, const_str_plain_run_name ); Py_INCREF( const_str_plain_run_name );
    PyTuple_SET_ITEM( const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 3, const_str_plain_alter_sys ); Py_INCREF( const_str_plain_alter_sys );
    PyTuple_SET_ITEM( const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 4, const_str_plain_mod_spec ); Py_INCREF( const_str_plain_mod_spec );
    PyTuple_SET_ITEM( const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 5, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_str_plain_main_name = UNSTREAM_STRING_ASCII( &constant_bin[ 975814 ], 9, 1 );
    const_str_digest_e389e52b73f6614d09f6ecd8a0d56db3 = UNSTREAM_STRING_ASCII( &constant_bin[ 975867 ], 8, 0 );
    const_str_digest_48fdf98e43c0245629546ebb16ea30ff = UNSTREAM_STRING_ASCII( &constant_bin[ 975875 ], 110, 0 );
    const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 0, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 1, const_str_plain_alter_argv ); Py_INCREF( const_str_plain_alter_argv );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 2, const_str_plain_mod_spec ); Py_INCREF( const_str_plain_mod_spec );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 3, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 4, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_main_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 975985 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 6, const_str_plain_main_globals ); Py_INCREF( const_str_plain_main_globals );
    const_str_digest_8ddca526c3394b6db39e649e33e40c5d = UNSTREAM_STRING_ASCII( &constant_bin[ 975997 ], 66, 0 );
    const_str_digest_01967ede29810c56c8d154fa1e1cdbea = UNSTREAM_STRING_ASCII( &constant_bin[ 976063 ], 23, 0 );
    const_str_plain__get_main_module_details = UNSTREAM_STRING_ASCII( &constant_bin[ 976086 ], 24, 1 );
    const_str_digest_0612de75f014b71ea10fce2870dd4bd0 = UNSTREAM_STRING_ASCII( &constant_bin[ 976110 ], 24, 0 );
    const_str_digest_05c8b6990b0e1f723b2b84e177b834c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 976134 ], 14, 0 );
    const_str_plain__run_code = UNSTREAM_STRING_ASCII( &constant_bin[ 976148 ], 9, 1 );
    const_str_digest_4ec3a8ba39cf3befb64e691998ae0d76 = UNSTREAM_STRING_ASCII( &constant_bin[ 976157 ], 351, 0 );
    const_str_digest_980a96f456b0af3a23bcc3f64dadcb19 = UNSTREAM_STRING_ASCII( &constant_bin[ 976508 ], 67, 0 );
    const_tuple_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568_tuple, 0, const_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568 ); Py_INCREF( const_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568 );
    const_str_digest_7b3f42cfb809ef9015daf9353f0abfe0 = UNSTREAM_STRING_ASCII( &constant_bin[ 976575 ], 154, 0 );
    const_str_plain__get_code_from_file = UNSTREAM_STRING_ASCII( &constant_bin[ 976729 ], 19, 1 );
    const_str_plain__run_module_as_main = UNSTREAM_STRING_ASCII( &constant_bin[ 976008 ], 19, 1 );
    const_tuple_c61c7083002490444e123d16501dabe7_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c61c7083002490444e123d16501dabe7_tuple, 0, const_str_plain_run_name ); Py_INCREF( const_str_plain_run_name );
    PyTuple_SET_ITEM( const_tuple_c61c7083002490444e123d16501dabe7_tuple, 1, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_c61c7083002490444e123d16501dabe7_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_c61c7083002490444e123d16501dabe7_tuple, 3, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_str_digest_cfb1e6c603044c180c5a1a0f5dac47b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 976748 ], 41, 0 );
    const_str_digest_63c15dee5511bbd456bbc1c0adde219a = UNSTREAM_STRING_ASCII( &constant_bin[ 976789 ], 53, 0 );
    const_str_digest_0584a78b726907933d76fa2a97e9084d = UNSTREAM_STRING_ASCII( &constant_bin[ 976842 ], 346, 0 );
    const_str_angle_run_path = UNSTREAM_STRING_ASCII( &constant_bin[ 977188 ], 10, 0 );
    const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple, 0, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple, 1, const_str_plain_main_name ); Py_INCREF( const_str_plain_main_name );
    const_str_plain_saved_main = UNSTREAM_STRING_ASCII( &constant_bin[ 977198 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple, 2, const_str_plain_saved_main ); Py_INCREF( const_str_plain_saved_main );
    PyTuple_SET_ITEM( const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple, 3, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    const_str_digest_81ac163e5e6bb2013de6b611a30e2aa4 = UNSTREAM_STRING_ASCII( &constant_bin[ 977208 ], 18, 0 );
    const_tuple_str_plain_read_code_str_plain_get_importer_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_read_code_str_plain_get_importer_tuple, 0, const_str_plain_read_code ); Py_INCREF( const_str_plain_read_code );
    PyTuple_SET_ITEM( const_tuple_str_plain_read_code_str_plain_get_importer_tuple, 1, const_str_plain_get_importer ); Py_INCREF( const_str_plain_get_importer );
    const_str_digest_3e1bdbc18cab6b5926335d0d664894ac = UNSTREAM_STRING_ASCII( &constant_bin[ 977226 ], 31, 0 );
    const_str_digest_b1747dd27a65efd1995926e007b5b7b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 977257 ], 20, 0 );
    const_str_digest_24055b5cbc753ba229ba91dddeb73b09 = UNSTREAM_STRING_ASCII( &constant_bin[ 977277 ], 48, 0 );
    const_str_plain__run_module_code = UNSTREAM_STRING_ASCII( &constant_bin[ 977325 ], 16, 1 );
    const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 0, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 1, const_str_plain_init_globals ); Py_INCREF( const_str_plain_init_globals );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 2, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 3, const_str_plain_mod_spec ); Py_INCREF( const_str_plain_mod_spec );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 4, const_str_plain_pkg_name ); Py_INCREF( const_str_plain_pkg_name );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 5, const_str_plain_script_name ); Py_INCREF( const_str_plain_script_name );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 6, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 7, const_str_plain_temp_module ); Py_INCREF( const_str_plain_temp_module );
    PyTuple_SET_ITEM( const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 8, const_str_plain_mod_globals ); Py_INCREF( const_str_plain_mod_globals );
    const_str_plain__TempModule = UNSTREAM_STRING_ASCII( &constant_bin[ 975495 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_mod_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mod_name_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mod_name_tuple, 1, const_str_plain_mod_name ); Py_INCREF( const_str_plain_mod_name );
    const_str_plain__saved_value = UNSTREAM_STRING_ASCII( &constant_bin[ 977341 ], 12, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_runpy( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_df1cffd86c3f4f4ffb2f991a345af148;
static PyCodeObject *codeobj_93fe1e41baad1e23eb5fa0c91fa2cdfd;
static PyCodeObject *codeobj_0af0b0b67ac0f1d5797eab9eb6cd0d53;
static PyCodeObject *codeobj_cb73eea32e1c2ab1c613a0cb0db31232;
static PyCodeObject *codeobj_c77ba59ae73a48ec1f8944aab6312412;
static PyCodeObject *codeobj_411115b97531bc96338338b3f5a62f5e;
static PyCodeObject *codeobj_1c987b7057fd0d24fff561c3ba7380b7;
static PyCodeObject *codeobj_0a352355d5ea2c4aed604fcaacce8d89;
static PyCodeObject *codeobj_f2dcfba97aee75444c200da750e5dcc2;
static PyCodeObject *codeobj_c35cb8e4cab43793e7cc3a7d882561ab;
static PyCodeObject *codeobj_2abe0636f9a05ddba82d743986c5044b;
static PyCodeObject *codeobj_c50773cdc742872a58dac101a8af90f0;
static PyCodeObject *codeobj_e93fdf8e18ff942ec850dbad794d18bf;
static PyCodeObject *codeobj_59727678f766fa0b3bd8590109ff52e6;
static PyCodeObject *codeobj_8ecf3e55229cbcf2ad032c461bcbed54;
static PyCodeObject *codeobj_751e2831ccadd49e70211cee39b3b830;
static PyCodeObject *codeobj_072fc8bf7447d0c663c1c13583dd9906;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e389e52b73f6614d09f6ecd8a0d56db3 );
    codeobj_df1cffd86c3f4f4ffb2f991a345af148 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_05c8b6990b0e1f723b2b84e177b834c4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_93fe1e41baad1e23eb5fa0c91fa2cdfd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ModifiedArgv0, 46, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0af0b0b67ac0f1d5797eab9eb6cd0d53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__TempModule, 23, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_cb73eea32e1c2ab1c613a0cb0db31232 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 30, const_tuple_str_plain_self_str_plain_mod_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c77ba59ae73a48ec1f8944aab6312412 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 51, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_411115b97531bc96338338b3f5a62f5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 39, const_tuple_str_plain_self_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_1c987b7057fd0d24fff561c3ba7380b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 57, const_tuple_str_plain_self_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_0a352355d5ea2c4aed604fcaacce8d89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 25, const_tuple_str_plain_self_str_plain_mod_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2dcfba97aee75444c200da750e5dcc2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 47, const_tuple_str_plain_self_str_plain_value_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c35cb8e4cab43793e7cc3a7d882561ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_code_from_file, 229, const_tuple_c61c7083002490444e123d16501dabe7_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2abe0636f9a05ddba82d743986c5044b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_main_module_details, 210, const_tuple_f954528dcfe2330da8b084ceaafed5cf_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c50773cdc742872a58dac101a8af90f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_module_details, 102, const_tuple_724569f76b5def951d21eb39aec5f0f8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e93fdf8e18ff942ec850dbad794d18bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__run_code, 62, const_tuple_1d422e59299e462d163fd1feef23cead_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59727678f766fa0b3bd8590109ff52e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__run_module_as_main, 167, const_tuple_032ee512fcd8fc0e538c050c13204de9_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8ecf3e55229cbcf2ad032c461bcbed54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__run_module_code, 88, const_tuple_7430fcbe0cf6320c2b8d7b7e9947fcd7_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_751e2831ccadd49e70211cee39b3b830 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run_module, 195, const_tuple_21cbbb583af69b7c2b2ff9c5c735e2ab_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_072fc8bf7447d0c663c1c13583dd9906 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run_path, 239, const_tuple_2786cb3b26f8e27a952c95716352310a_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_runpy$$$function_10__run_module_as_main( PyObject *defaults );


static PyObject *MAKE_FUNCTION_runpy$$$function_11_run_module( PyObject *defaults );


static PyObject *MAKE_FUNCTION_runpy$$$function_12__get_main_module_details( PyObject *defaults );


static PyObject *MAKE_FUNCTION_runpy$$$function_13__get_code_from_file(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_14_run_path( PyObject *defaults );


static PyObject *MAKE_FUNCTION_runpy$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_2___enter__(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_3___exit__(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_5___enter__(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_6___exit__(  );


static PyObject *MAKE_FUNCTION_runpy$$$function_7__run_code( PyObject *defaults );


static PyObject *MAKE_FUNCTION_runpy$$$function_8__run_module_code( PyObject *defaults );


static PyObject *MAKE_FUNCTION_runpy$$$function_9__get_module_details( PyObject *defaults );


// The module function definitions.
static PyObject *impl_runpy$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mod_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0a352355d5ea2c4aed604fcaacce8d89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a352355d5ea2c4aed604fcaacce8d89 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a352355d5ea2c4aed604fcaacce8d89, codeobj_0a352355d5ea2c4aed604fcaacce8d89, module_runpy, sizeof(void *)+sizeof(void *) );
    frame_0a352355d5ea2c4aed604fcaacce8d89 = cache_frame_0a352355d5ea2c4aed604fcaacce8d89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a352355d5ea2c4aed604fcaacce8d89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a352355d5ea2c4aed604fcaacce8d89 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_mod_name );
        tmp_assattr_name_1 = par_mod_name;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_mod_name, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_types );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_mod_name );
        tmp_args_element_name_1 = par_mod_name;
        frame_0a352355d5ea2c4aed604fcaacce8d89->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ModuleType, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_module, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__saved_module, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a352355d5ea2c4aed604fcaacce8d89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a352355d5ea2c4aed604fcaacce8d89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a352355d5ea2c4aed604fcaacce8d89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a352355d5ea2c4aed604fcaacce8d89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a352355d5ea2c4aed604fcaacce8d89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a352355d5ea2c4aed604fcaacce8d89,
        type_description_1,
        par_self,
        par_mod_name
    );


    // Release cached frame.
    if ( frame_0a352355d5ea2c4aed604fcaacce8d89 == cache_frame_0a352355d5ea2c4aed604fcaacce8d89 )
    {
        Py_DECREF( frame_0a352355d5ea2c4aed604fcaacce8d89 );
    }
    cache_frame_0a352355d5ea2c4aed604fcaacce8d89 = NULL;

    assertFrameObject( frame_0a352355d5ea2c4aed604fcaacce8d89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_1___init__ );
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


static PyObject *impl_runpy$$$function_2___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_mod_name = NULL;
    struct Nuitka_FrameObject *frame_cb73eea32e1c2ab1c613a0cb0db31232;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_cb73eea32e1c2ab1c613a0cb0db31232 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb73eea32e1c2ab1c613a0cb0db31232, codeobj_cb73eea32e1c2ab1c613a0cb0db31232, module_runpy, sizeof(void *)+sizeof(void *) );
    frame_cb73eea32e1c2ab1c613a0cb0db31232 = cache_frame_cb73eea32e1c2ab1c613a0cb0db31232;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb73eea32e1c2ab1c613a0cb0db31232 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb73eea32e1c2ab1c613a0cb0db31232 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mod_name );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_mod_name == NULL );
        var_mod_name = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__saved_module );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_modules );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 33;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_mod_name );
        tmp_subscript_name_1 = var_mod_name;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 33;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_cb73eea32e1c2ab1c613a0cb0db31232->m_frame.f_lineno = 33;
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


            exception_lineno = 33;
            type_description_1 = "oo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_cb73eea32e1c2ab1c613a0cb0db31232, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_cb73eea32e1c2ab1c613a0cb0db31232, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oo";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 32;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cb73eea32e1c2ab1c613a0cb0db31232->m_frame) frame_cb73eea32e1c2ab1c613a0cb0db31232->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_no_1:;
    }
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_2___enter__ );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_module );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_2;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_modules );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mod_name );
        tmp_ass_subscript_1 = var_mod_name;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb73eea32e1c2ab1c613a0cb0db31232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb73eea32e1c2ab1c613a0cb0db31232 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb73eea32e1c2ab1c613a0cb0db31232, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb73eea32e1c2ab1c613a0cb0db31232->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb73eea32e1c2ab1c613a0cb0db31232, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb73eea32e1c2ab1c613a0cb0db31232,
        type_description_1,
        par_self,
        var_mod_name
    );


    // Release cached frame.
    if ( frame_cb73eea32e1c2ab1c613a0cb0db31232 == cache_frame_cb73eea32e1c2ab1c613a0cb0db31232 )
    {
        Py_DECREF( frame_cb73eea32e1c2ab1c613a0cb0db31232 );
    }
    cache_frame_cb73eea32e1c2ab1c613a0cb0db31232 = NULL;

    assertFrameObject( frame_cb73eea32e1c2ab1c613a0cb0db31232 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_2___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_mod_name );
    Py_DECREF( var_mod_name );
    var_mod_name = NULL;

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

    Py_XDECREF( var_mod_name );
    var_mod_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_2___enter__ );
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


static PyObject *impl_runpy$$$function_3___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_411115b97531bc96338338b3f5a62f5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_411115b97531bc96338338b3f5a62f5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_411115b97531bc96338338b3f5a62f5e, codeobj_411115b97531bc96338338b3f5a62f5e, module_runpy, sizeof(void *)+sizeof(void *) );
    frame_411115b97531bc96338338b3f5a62f5e = cache_frame_411115b97531bc96338338b3f5a62f5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_411115b97531bc96338338b3f5a62f5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_411115b97531bc96338338b3f5a62f5e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__saved_module );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 40;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__saved_module );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_modules );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mod_name );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_delsubscr_subscript_1;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 43;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_modules );
            if ( tmp_delsubscr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_mod_name );
            if ( tmp_delsubscr_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_delsubscr_target_1 );

                exception_lineno = 43;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
            Py_DECREF( tmp_delsubscr_target_1 );
            Py_DECREF( tmp_delsubscr_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__saved_module, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_411115b97531bc96338338b3f5a62f5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_411115b97531bc96338338b3f5a62f5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_411115b97531bc96338338b3f5a62f5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_411115b97531bc96338338b3f5a62f5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_411115b97531bc96338338b3f5a62f5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_411115b97531bc96338338b3f5a62f5e,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame.
    if ( frame_411115b97531bc96338338b3f5a62f5e == cache_frame_411115b97531bc96338338b3f5a62f5e )
    {
        Py_DECREF( frame_411115b97531bc96338338b3f5a62f5e );
    }
    cache_frame_411115b97531bc96338338b3f5a62f5e = NULL;

    assertFrameObject( frame_411115b97531bc96338338b3f5a62f5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_3___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_3___exit__ );
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


static PyObject *impl_runpy$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_f2dcfba97aee75444c200da750e5dcc2;
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
    static struct Nuitka_FrameObject *cache_frame_f2dcfba97aee75444c200da750e5dcc2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2dcfba97aee75444c200da750e5dcc2, codeobj_f2dcfba97aee75444c200da750e5dcc2, module_runpy, sizeof(void *)+sizeof(void *) );
    frame_f2dcfba97aee75444c200da750e5dcc2 = cache_frame_f2dcfba97aee75444c200da750e5dcc2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2dcfba97aee75444c200da750e5dcc2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2dcfba97aee75444c200da750e5dcc2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_value );
        tmp_assattr_name_1 = par_value;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        frame_f2dcfba97aee75444c200da750e5dcc2->m_frame.f_lineno = 49;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assattr_name_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__saved_value, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assattr_name_3 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__sentinel, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2dcfba97aee75444c200da750e5dcc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2dcfba97aee75444c200da750e5dcc2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2dcfba97aee75444c200da750e5dcc2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2dcfba97aee75444c200da750e5dcc2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2dcfba97aee75444c200da750e5dcc2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2dcfba97aee75444c200da750e5dcc2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_f2dcfba97aee75444c200da750e5dcc2 == cache_frame_f2dcfba97aee75444c200da750e5dcc2 )
    {
        Py_DECREF( frame_f2dcfba97aee75444c200da750e5dcc2 );
    }
    cache_frame_f2dcfba97aee75444c200da750e5dcc2 = NULL;

    assertFrameObject( frame_f2dcfba97aee75444c200da750e5dcc2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_4___init__ );
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


static PyObject *impl_runpy$$$function_5___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c77ba59ae73a48ec1f8944aab6312412;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c77ba59ae73a48ec1f8944aab6312412 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c77ba59ae73a48ec1f8944aab6312412, codeobj_c77ba59ae73a48ec1f8944aab6312412, module_runpy, sizeof(void *) );
    frame_c77ba59ae73a48ec1f8944aab6312412 = cache_frame_c77ba59ae73a48ec1f8944aab6312412;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c77ba59ae73a48ec1f8944aab6312412 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c77ba59ae73a48ec1f8944aab6312412 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__saved_value );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__sentinel );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
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
            tmp_make_exception_arg_1 = const_str_digest_9e390c4c6a3cdabc8174a1dc2acf7bba;
            frame_c77ba59ae73a48ec1f8944aab6312412->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 53;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_argv );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__saved_value, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_value );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_argv );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c77ba59ae73a48ec1f8944aab6312412 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c77ba59ae73a48ec1f8944aab6312412 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c77ba59ae73a48ec1f8944aab6312412, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c77ba59ae73a48ec1f8944aab6312412->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c77ba59ae73a48ec1f8944aab6312412, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c77ba59ae73a48ec1f8944aab6312412,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c77ba59ae73a48ec1f8944aab6312412 == cache_frame_c77ba59ae73a48ec1f8944aab6312412 )
    {
        Py_DECREF( frame_c77ba59ae73a48ec1f8944aab6312412 );
    }
    cache_frame_c77ba59ae73a48ec1f8944aab6312412 = NULL;

    assertFrameObject( frame_c77ba59ae73a48ec1f8944aab6312412 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_5___enter__ );
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
    NUITKA_CANNOT_GET_HERE( runpy$$$function_5___enter__ );
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


static PyObject *impl_runpy$$$function_6___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1c987b7057fd0d24fff561c3ba7380b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1c987b7057fd0d24fff561c3ba7380b7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c987b7057fd0d24fff561c3ba7380b7, codeobj_1c987b7057fd0d24fff561c3ba7380b7, module_runpy, sizeof(void *)+sizeof(void *) );
    frame_1c987b7057fd0d24fff561c3ba7380b7 = cache_frame_1c987b7057fd0d24fff561c3ba7380b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c987b7057fd0d24fff561c3ba7380b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c987b7057fd0d24fff561c3ba7380b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__sentinel );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__saved_value );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_argv );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c987b7057fd0d24fff561c3ba7380b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c987b7057fd0d24fff561c3ba7380b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c987b7057fd0d24fff561c3ba7380b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c987b7057fd0d24fff561c3ba7380b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c987b7057fd0d24fff561c3ba7380b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c987b7057fd0d24fff561c3ba7380b7,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame.
    if ( frame_1c987b7057fd0d24fff561c3ba7380b7 == cache_frame_1c987b7057fd0d24fff561c3ba7380b7 )
    {
        Py_DECREF( frame_1c987b7057fd0d24fff561c3ba7380b7 );
    }
    cache_frame_1c987b7057fd0d24fff561c3ba7380b7 = NULL;

    assertFrameObject( frame_1c987b7057fd0d24fff561c3ba7380b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_6___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_6___exit__ );
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


static PyObject *impl_runpy$$$function_7__run_code( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_code = python_pars[ 0 ];
    PyObject *par_run_globals = python_pars[ 1 ];
    PyObject *par_init_globals = python_pars[ 2 ];
    PyObject *par_mod_name = python_pars[ 3 ];
    PyObject *par_mod_spec = python_pars[ 4 ];
    PyObject *par_pkg_name = python_pars[ 5 ];
    PyObject *par_script_name = python_pars[ 6 ];
    PyObject *var_loader = NULL;
    PyObject *var_fname = NULL;
    PyObject *var_cached = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    struct Nuitka_FrameObject *frame_e93fdf8e18ff942ec850dbad794d18bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_runpy$$$function_7__run_code = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e93fdf8e18ff942ec850dbad794d18bf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e93fdf8e18ff942ec850dbad794d18bf, codeobj_e93fdf8e18ff942ec850dbad794d18bf, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e93fdf8e18ff942ec850dbad794d18bf = cache_frame_e93fdf8e18ff942ec850dbad794d18bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e93fdf8e18ff942ec850dbad794d18bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e93fdf8e18ff942ec850dbad794d18bf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_init_globals );
        tmp_compexpr_left_1 = par_init_globals;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_run_globals );
            tmp_called_instance_1 = par_run_globals;
            CHECK_OBJECT( par_init_globals );
            tmp_args_element_name_1 = par_init_globals;
            frame_e93fdf8e18ff942ec850dbad794d18bf->m_frame.f_lineno = 67;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_mod_spec );
        tmp_compexpr_left_2 = par_mod_spec;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = Py_None;
            assert( var_loader == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_loader = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( par_script_name );
            tmp_assign_source_2 = par_script_name;
            assert( var_fname == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_fname = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = Py_None;
            assert( var_cached == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_cached = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_mod_spec );
            tmp_source_name_1 = par_mod_spec;
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loader );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_loader == NULL );
            var_loader = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_mod_spec );
            tmp_source_name_2 = par_mod_spec;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_origin );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_fname == NULL );
            var_fname = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_mod_spec );
            tmp_source_name_3 = par_mod_spec;
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cached );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cached == NULL );
            var_cached = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_pkg_name );
            tmp_compexpr_left_3 = par_pkg_name;
            tmp_compexpr_right_3 = Py_None;
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( par_mod_spec );
                tmp_source_name_4 = par_mod_spec;
                tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_parent );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 77;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_pkg_name;
                    assert( old != NULL );
                    par_pkg_name = tmp_assign_source_7;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT( par_run_globals );
        tmp_source_name_5 = par_run_globals;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_update );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain___name__;
        CHECK_OBJECT( par_mod_name );
        tmp_dict_value_1 = par_mod_name;
        tmp_kw_name_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain___file__;
        CHECK_OBJECT( var_fname );
        tmp_dict_value_2 = var_fname;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain___cached__;
        CHECK_OBJECT( var_cached );
        tmp_dict_value_3 = var_cached;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain___doc__;
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain___loader__;
        CHECK_OBJECT( var_loader );
        tmp_dict_value_5 = var_loader;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain___package__;
        if ( par_pkg_name == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkg_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = par_pkg_name;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain___spec__;
        CHECK_OBJECT( par_mod_spec );
        tmp_dict_value_7 = par_mod_spec;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_e93fdf8e18ff942ec850dbad794d18bf->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( par_run_globals );
            tmp_assign_source_8 = par_run_globals;
            assert( tmp_exec_call_1__globals == NULL );
            Py_INCREF( tmp_assign_source_8 );
            tmp_exec_call_1__globals = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( tmp_exec_call_1__globals );
            tmp_compexpr_left_4 = tmp_exec_call_1__globals;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            if (locals_runpy$$$function_7__run_code == NULL) locals_runpy$$$function_7__run_code = PyDict_New();
            tmp_assign_source_9 = locals_runpy$$$function_7__run_code;
            Py_INCREF( tmp_assign_source_9 );
            if ( par_code != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_code );
                value = par_code;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_code, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_code );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( par_run_globals != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_run_globals );
                value = par_run_globals;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_run_globals, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_run_globals );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( par_init_globals != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_init_globals );
                value = par_init_globals;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_init_globals, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_init_globals );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( par_mod_name != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_mod_name );
                value = par_mod_name;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_mod_name, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_mod_name );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( par_mod_spec != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_mod_spec );
                value = par_mod_spec;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_mod_spec, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_mod_spec );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( par_pkg_name != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_pkg_name );
                value = par_pkg_name;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_pkg_name, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_pkg_name );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( par_script_name != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( par_script_name );
                value = par_script_name;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_script_name, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_script_name );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( var_loader != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( var_loader );
                value = var_loader;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_loader, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_loader );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( var_fname != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( var_fname );
                value = var_fname;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_fname, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_fname );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if ( var_cached != NULL )
            {
                PyObject *value;
                CHECK_OBJECT( var_cached );
                value = var_cached;

                UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_9, (Nuitka_StringObject *)const_str_plain_cached, value );
            }
            else
            {
                int res = PyDict_DelItem( tmp_assign_source_9, const_str_plain_cached );

                if ( res != 0 )
                {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( tmp_exec_call_1__globals );
            tmp_assign_source_9 = tmp_exec_call_1__globals;
            Py_INCREF( tmp_assign_source_9 );
            condexpr_end_1:;
            assert( tmp_exec_call_1__locals == NULL );
            tmp_exec_call_1__locals = tmp_assign_source_9;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_exec_call_1__globals );
            tmp_compexpr_left_5 = tmp_exec_call_1__globals;
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_5 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = (PyObject *)moduledict_runpy;
                {
                    PyObject *old = tmp_exec_call_1__globals;
                    assert( old != NULL );
                    tmp_exec_call_1__globals = tmp_assign_source_10;
                    Py_INCREF( tmp_exec_call_1__globals );
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        // Tried code:
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            if ( par_code == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 85;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }

            tmp_eval_source_1 = par_code;
            CHECK_OBJECT( tmp_exec_call_1__globals );
            tmp_eval_globals_1 = tmp_exec_call_1__globals;
            CHECK_OBJECT( tmp_exec_call_1__locals );
            tmp_eval_locals_1 = tmp_exec_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL, NULL );
            if ( tmp_eval_compiled_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_outline_return_value_1 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
            Py_DECREF( tmp_eval_compiled_1 );
            if ( tmp_outline_return_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_7__run_code );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
        Py_DECREF( tmp_exec_call_1__globals );
        tmp_exec_call_1__globals = NULL;

        CHECK_OBJECT( (PyObject *)tmp_exec_call_1__locals );
        Py_DECREF( tmp_exec_call_1__locals );
        tmp_exec_call_1__locals = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
        Py_DECREF( tmp_exec_call_1__globals );
        tmp_exec_call_1__globals = NULL;

        CHECK_OBJECT( (PyObject *)tmp_exec_call_1__locals );
        Py_DECREF( tmp_exec_call_1__locals );
        tmp_exec_call_1__locals = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( runpy$$$function_7__run_code );
        return NULL;
        outline_result_1:;
        Py_DECREF( tmp_outline_return_value_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e93fdf8e18ff942ec850dbad794d18bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e93fdf8e18ff942ec850dbad794d18bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e93fdf8e18ff942ec850dbad794d18bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e93fdf8e18ff942ec850dbad794d18bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e93fdf8e18ff942ec850dbad794d18bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e93fdf8e18ff942ec850dbad794d18bf,
        type_description_1,
        par_code,
        par_run_globals,
        par_init_globals,
        par_mod_name,
        par_mod_spec,
        par_pkg_name,
        par_script_name,
        var_loader,
        var_fname,
        var_cached
    );


    // Release cached frame.
    if ( frame_e93fdf8e18ff942ec850dbad794d18bf == cache_frame_e93fdf8e18ff942ec850dbad794d18bf )
    {
        Py_DECREF( frame_e93fdf8e18ff942ec850dbad794d18bf );
    }
    cache_frame_e93fdf8e18ff942ec850dbad794d18bf = NULL;

    assertFrameObject( frame_e93fdf8e18ff942ec850dbad794d18bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    if ( par_run_globals == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "run_globals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );



        goto try_except_handler_1;
    }

    tmp_return_value = par_run_globals;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_7__run_code );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_code );
    par_code = NULL;

    Py_XDECREF( par_run_globals );
    par_run_globals = NULL;

    Py_XDECREF( par_init_globals );
    par_init_globals = NULL;

    Py_XDECREF( par_mod_name );
    par_mod_name = NULL;

    Py_XDECREF( par_mod_spec );
    par_mod_spec = NULL;

    Py_XDECREF( par_pkg_name );
    par_pkg_name = NULL;

    Py_XDECREF( par_script_name );
    par_script_name = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_cached );
    var_cached = NULL;

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

    Py_XDECREF( par_code );
    par_code = NULL;

    Py_XDECREF( par_run_globals );
    par_run_globals = NULL;

    Py_XDECREF( par_init_globals );
    par_init_globals = NULL;

    Py_XDECREF( par_mod_name );
    par_mod_name = NULL;

    Py_XDECREF( par_mod_spec );
    par_mod_spec = NULL;

    Py_XDECREF( par_pkg_name );
    par_pkg_name = NULL;

    Py_XDECREF( par_script_name );
    par_script_name = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_cached );
    var_cached = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_7__run_code );
    return NULL;

function_exception_exit:
    Py_XDECREF( locals_runpy$$$function_7__run_code );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF( locals_runpy$$$function_7__run_code );


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_runpy$$$function_8__run_module_code( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_code = python_pars[ 0 ];
    PyObject *par_init_globals = python_pars[ 1 ];
    PyObject *par_mod_name = python_pars[ 2 ];
    PyObject *par_mod_spec = python_pars[ 3 ];
    PyObject *par_pkg_name = python_pars[ 4 ];
    PyObject *par_script_name = python_pars[ 5 ];
    PyObject *var_fname = NULL;
    PyObject *var_temp_module = NULL;
    PyObject *var_mod_globals = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_8ecf3e55229cbcf2ad032c461bcbed54;
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
    bool tmp_result;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    static struct Nuitka_FrameObject *cache_frame_8ecf3e55229cbcf2ad032c461bcbed54 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ecf3e55229cbcf2ad032c461bcbed54, codeobj_8ecf3e55229cbcf2ad032c461bcbed54, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ecf3e55229cbcf2ad032c461bcbed54 = cache_frame_8ecf3e55229cbcf2ad032c461bcbed54;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ecf3e55229cbcf2ad032c461bcbed54 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ecf3e55229cbcf2ad032c461bcbed54 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_mod_spec );
        tmp_compexpr_left_1 = par_mod_spec;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_script_name );
        tmp_assign_source_1 = par_script_name;
        Py_INCREF( tmp_assign_source_1 );
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_mod_spec );
        tmp_source_name_1 = par_mod_spec;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_origin );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert( var_fname == NULL );
        var_fname = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__TempModule );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TempModule );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_TempModule" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_mod_name );
        tmp_args_element_name_1 = par_mod_name;
        frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_2__source == NULL );
        tmp_with_2__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_2 = tmp_with_2__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_2__enter == NULL );
        tmp_with_2__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_3 = tmp_with_2__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_2__exit == NULL );
        tmp_with_2__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_with_2__enter );
        tmp_assign_source_6 = tmp_with_2__enter;
        assert( var_temp_module == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_temp_module = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__ModifiedArgv0 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ModifiedArgv0 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ModifiedArgv0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_fname );
        tmp_args_element_name_2 = var_fname;
        frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_4 = tmp_with_1__source;
        tmp_called_name_4 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_5 = tmp_with_1__source;
        tmp_assign_source_9 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___exit__ );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( var_temp_module );
        tmp_source_name_7 = var_temp_module;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_module );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_6 );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert( var_mod_globals == NULL );
        var_mod_globals = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_code );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_code );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_code" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_5 = tmp_mvar_value_3;
        CHECK_OBJECT( par_code );
        tmp_args_element_name_3 = par_code;
        CHECK_OBJECT( var_mod_globals );
        tmp_args_element_name_4 = var_mod_globals;
        CHECK_OBJECT( par_init_globals );
        tmp_args_element_name_5 = par_init_globals;
        CHECK_OBJECT( par_mod_name );
        tmp_args_element_name_6 = par_mod_name;
        CHECK_OBJECT( par_mod_spec );
        tmp_args_element_name_7 = par_mod_spec;
        CHECK_OBJECT( par_pkg_name );
        tmp_args_element_name_8 = par_pkg_name;
        CHECK_OBJECT( par_script_name );
        tmp_args_element_name_9 = par_script_name;
        frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_5, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8ecf3e55229cbcf2ad032c461bcbed54, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8ecf3e55229cbcf2ad032c461bcbed54, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
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
        {
            nuitka_bool tmp_assign_source_12;
            tmp_assign_source_12 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            tmp_args_element_name_10 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_11 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_12 = EXC_TRACEBACK(PyThreadState_GET());
            frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_8;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 93;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame) frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 93;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame) frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_8__run_module_code );
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_8 = tmp_with_1__exit;
            frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_4:;
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_8ecf3e55229cbcf2ad032c461bcbed54, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_8ecf3e55229cbcf2ad032c461bcbed54, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
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


            exception_lineno = 93;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            nuitka_bool tmp_assign_source_13;
            tmp_assign_source_13 = NUITKA_BOOL_FALSE;
            tmp_with_2__indicator = tmp_assign_source_13;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_9 = tmp_with_2__exit;
            tmp_args_element_name_13 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_14 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_15 = EXC_TRACEBACK(PyThreadState_GET());
            frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_9;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_9;
            }
            tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 93;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame) frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 93;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame) frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_9;
        branch_end_5:;
    }
    goto try_end_6;
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
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_8__run_module_code );
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_10 = tmp_with_2__exit;
            frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_7 );
                Py_XDECREF( exception_keeper_value_7 );
                Py_XDECREF( exception_keeper_tb_7 );

                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_7:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_with_2__indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_11 = tmp_with_2__exit;
            frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 93;
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_8:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_with_2__source );
    Py_DECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
    Py_DECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
    Py_DECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    {
        PyObject *tmp_called_instance_1;
        if ( var_mod_globals == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mod_globals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_mod_globals;
        frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame.f_lineno = 99;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ecf3e55229cbcf2ad032c461bcbed54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ecf3e55229cbcf2ad032c461bcbed54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ecf3e55229cbcf2ad032c461bcbed54 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ecf3e55229cbcf2ad032c461bcbed54, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ecf3e55229cbcf2ad032c461bcbed54->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ecf3e55229cbcf2ad032c461bcbed54, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ecf3e55229cbcf2ad032c461bcbed54,
        type_description_1,
        par_code,
        par_init_globals,
        par_mod_name,
        par_mod_spec,
        par_pkg_name,
        par_script_name,
        var_fname,
        var_temp_module,
        var_mod_globals
    );


    // Release cached frame.
    if ( frame_8ecf3e55229cbcf2ad032c461bcbed54 == cache_frame_8ecf3e55229cbcf2ad032c461bcbed54 )
    {
        Py_DECREF( frame_8ecf3e55229cbcf2ad032c461bcbed54 );
    }
    cache_frame_8ecf3e55229cbcf2ad032c461bcbed54 = NULL;

    assertFrameObject( frame_8ecf3e55229cbcf2ad032c461bcbed54 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_8__run_module_code );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_code );
    Py_DECREF( par_code );
    par_code = NULL;

    CHECK_OBJECT( (PyObject *)par_init_globals );
    Py_DECREF( par_init_globals );
    par_init_globals = NULL;

    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_mod_spec );
    Py_DECREF( par_mod_spec );
    par_mod_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_pkg_name );
    Py_DECREF( par_pkg_name );
    par_pkg_name = NULL;

    CHECK_OBJECT( (PyObject *)par_script_name );
    Py_DECREF( par_script_name );
    par_script_name = NULL;

    CHECK_OBJECT( (PyObject *)var_fname );
    Py_DECREF( var_fname );
    var_fname = NULL;

    CHECK_OBJECT( (PyObject *)var_temp_module );
    Py_DECREF( var_temp_module );
    var_temp_module = NULL;

    Py_XDECREF( var_mod_globals );
    var_mod_globals = NULL;

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

    CHECK_OBJECT( (PyObject *)par_code );
    Py_DECREF( par_code );
    par_code = NULL;

    CHECK_OBJECT( (PyObject *)par_init_globals );
    Py_DECREF( par_init_globals );
    par_init_globals = NULL;

    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_mod_spec );
    Py_DECREF( par_mod_spec );
    par_mod_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_pkg_name );
    Py_DECREF( par_pkg_name );
    par_pkg_name = NULL;

    CHECK_OBJECT( (PyObject *)par_script_name );
    Py_DECREF( par_script_name );
    par_script_name = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_temp_module );
    var_temp_module = NULL;

    Py_XDECREF( var_mod_globals );
    var_mod_globals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_8__run_module_code );
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


static PyObject *impl_runpy$$$function_9__get_module_details( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod_name = python_pars[ 0 ];
    PyObject *par_error = python_pars[ 1 ];
    PyObject *var_pkg_name = NULL;
    PyObject *var__ = NULL;
    PyObject *var_e = NULL;
    PyObject *var_existing = NULL;
    PyObject *var_warn = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_spec = NULL;
    PyObject *var_ex = NULL;
    PyObject *var_pkg_main_name = NULL;
    PyObject *var_loader = NULL;
    PyObject *var_code = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c50773cdc742872a58dac101a8af90f0;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_c50773cdc742872a58dac101a8af90f0 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c50773cdc742872a58dac101a8af90f0, codeobj_c50773cdc742872a58dac101a8af90f0, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c50773cdc742872a58dac101a8af90f0 = cache_frame_c50773cdc742872a58dac101a8af90f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c50773cdc742872a58dac101a8af90f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c50773cdc742872a58dac101a8af90f0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_mod_name );
        tmp_called_instance_1 = par_mod_name;
        frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 103;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 103;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            CHECK_OBJECT( par_error );
            tmp_called_name_1 = par_error;
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 104;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_cf4a22ba20483c170ae4409b20b9528f_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 104;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_mod_name );
        tmp_called_instance_2 = par_mod_name;
        frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 105;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_rpartition, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
        if ( tmp_assign_source_2 == NULL )
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 105;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 105;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 105;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 105;
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

            type_description_1 = "ooooooooooooo";
            exception_lineno = 105;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_pkg_name == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_pkg_name = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_7;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_pkg_name );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_pkg_name );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        // Tried code:
        {
            PyObject *tmp_name_name_1;
            PyObject *tmp_imported_value_1;
            CHECK_OBJECT( var_pkg_name );
            tmp_name_name_1 = var_pkg_name;
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 109;
            tmp_imported_value_1 = IMPORT_MODULE1( tmp_name_name_1 );
            if ( tmp_imported_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_imported_value_1 );
        }
        goto try_end_3;
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
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_3 == NULL )
        {
            exception_keeper_tb_3 = MAKE_TRACEBACK( frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_3 );
        }
        else if ( exception_keeper_lineno_3 != 0 )
        {
            exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_3 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
        PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
        PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_ImportError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
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
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_e = tmp_assign_source_8;
            }
            // Tried code:
            {
                nuitka_bool tmp_condition_result_4;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_source_name_1;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_2;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( var_e );
                tmp_source_name_1 = var_e;
                tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
                if ( tmp_compexpr_left_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_compexpr_right_2 = Py_None;
                tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_compexpr_left_2 );
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
                CHECK_OBJECT( var_e );
                tmp_source_name_2 = var_e;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_pkg_name );
                tmp_compexpr_right_3 = var_pkg_name;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
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
                CHECK_OBJECT( var_pkg_name );
                tmp_source_name_3 = var_pkg_name;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_startswith );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_e );
                tmp_source_name_4 = var_e;
                tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 115;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_right_name_1 = const_str_dot;
                tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 115;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 115;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_6;
                }
                tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_right_value_1 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_or_right_value_1 = tmp_and_left_value_1;
                and_end_1:;
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
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 116;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_c50773cdc742872a58dac101a8af90f0->m_frame) frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
                branch_no_4:;
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

            Py_XDECREF( var_e );
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_5;
            // End of try:
            try_end_4:;
            Py_XDECREF( var_e );
            var_e = NULL;

            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 108;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c50773cdc742872a58dac101a8af90f0->m_frame) frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
            branch_end_3:;
        }
        goto try_end_5;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_3;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
        return NULL;
        // End of try:
        try_end_3:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

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

                exception_lineno = 118;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_1;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_modules );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_mod_name );
            tmp_args_element_name_2 = par_mod_name;
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_existing == NULL );
            var_existing = tmp_assign_source_9;
        }
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_existing );
            tmp_compexpr_left_4 = var_existing;
            tmp_compexpr_right_4 = Py_None;
            tmp_and_left_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_existing );
            tmp_source_name_6 = var_existing;
            tmp_attribute_name_1 = const_str_plain___path__;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_6, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_5 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_5 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_import_name_from_1;
                PyObject *tmp_name_name_2;
                PyObject *tmp_globals_name_1;
                PyObject *tmp_locals_name_1;
                PyObject *tmp_fromlist_name_1;
                PyObject *tmp_level_name_1;
                tmp_name_name_2 = const_str_plain_warnings;
                tmp_globals_name_1 = (PyObject *)moduledict_runpy;
                tmp_locals_name_1 = Py_None;
                tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
                tmp_level_name_1 = const_int_0;
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 120;
                tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
                if ( tmp_import_name_from_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warn );
                Py_DECREF( tmp_import_name_from_1 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_warn == NULL );
                var_warn = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_7;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_source_name_7 = const_str_digest_7b3f42cfb809ef9015daf9353f0abfe0;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
                assert( !(tmp_called_name_3 == NULL) );
                tmp_dict_key_1 = const_str_plain_mod_name;
                CHECK_OBJECT( par_mod_name );
                tmp_dict_value_1 = par_mod_name;
                tmp_kw_name_1 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_pkg_name;
                CHECK_OBJECT( var_pkg_name );
                tmp_dict_value_2 = var_pkg_name;
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 121;
                tmp_assign_source_11 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 121;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_msg == NULL );
                var_msg = tmp_assign_source_11;
            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( var_warn );
                tmp_called_name_4 = var_warn;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 125;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_2;
                CHECK_OBJECT( var_msg );
                tmp_args_element_name_4 = var_msg;
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 125;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 125;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 125;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 125;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_5:;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_importlib );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_source_name_8 = tmp_mvar_value_3;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_util );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( par_mod_name );
        tmp_args_element_name_5 = par_mod_name;
        frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_find_spec, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        assert( var_spec == NULL );
        var_spec = tmp_assign_source_12;
    }
    goto try_end_6;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = const_tuple_9a73bb3861e25f5d83343d2bb8437642_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = EXC_VALUE(PyThreadState_GET());
            assert( var_ex == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_ex = tmp_assign_source_13;
        }
        Py_XDECREF( var_msg );
        var_msg = NULL;

        // Tried code:
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_10;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_raise_cause_1;
            CHECK_OBJECT( par_error );
            tmp_called_name_6 = par_error;
            tmp_source_name_9 = const_str_digest_4298d63360e91925ca064fc698c92d9d;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_format );
            assert( !(tmp_called_name_7 == NULL) );
            CHECK_OBJECT( par_mod_name );
            tmp_args_element_name_7 = par_mod_name;
            CHECK_OBJECT( var_ex );
            tmp_type_arg_1 = var_ex;
            tmp_source_name_10 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_source_name_10 == NULL) );
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 134;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT( var_ex );
            tmp_args_element_name_9 = var_ex;
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_9;
            }
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT( var_ex );
            tmp_raise_cause_1 = var_ex;
            exception_type = tmp_raise_type_2;
            exception_value = NULL;
            Py_INCREF( tmp_raise_cause_1 );
            exception_lineno = 134;
            RAISE_EXCEPTION_WITH_CAUSE( &exception_type, &exception_value, &exception_tb, tmp_raise_cause_1 );
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
        return NULL;
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

        Py_XDECREF( var_ex );
        var_ex = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 127;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c50773cdc742872a58dac101a8af90f0->m_frame) frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
        branch_end_6:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_spec );
        tmp_compexpr_left_6 = var_spec;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_error );
            tmp_called_name_8 = par_error;
            tmp_left_name_2 = const_str_digest_81ac163e5e6bb2013de6b611a30e2aa4;
            CHECK_OBJECT( par_mod_name );
            tmp_right_name_2 = par_mod_name;
            tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 136;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_spec );
        tmp_source_name_11 = var_spec;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_submodule_search_locations );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_7 );
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
            nuitka_bool tmp_condition_result_9;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_3;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_mod_name );
            tmp_compexpr_left_8 = par_mod_name;
            tmp_compexpr_right_8 = const_str_plain___main__;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
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
            CHECK_OBJECT( par_mod_name );
            tmp_called_instance_5 = par_mod_name;
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 138;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_digest_3c1e4da0674afd8783dae852eb4e9a41_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
            tmp_condition_result_9 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_condition_result_9 = tmp_or_left_value_2;
            or_end_2:;
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_called_name_9;
                CHECK_OBJECT( par_error );
                tmp_called_name_9 = par_error;
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 139;
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_bcb8c0ff6b4dfb1dbf020260dcea2568_tuple, 0 ) );

                if ( tmp_raise_type_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 139;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_4;
                exception_lineno = 139;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_mod_name );
            tmp_left_name_3 = par_mod_name;
            tmp_right_name_3 = const_str_digest_3c1e4da0674afd8783dae852eb4e9a41;
            tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
            assert( var_pkg_main_name == NULL );
            var_pkg_main_name = tmp_assign_source_14;
        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_module_details );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_module_details );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_module_details" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 142;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }

            tmp_called_name_10 = tmp_mvar_value_4;
            CHECK_OBJECT( var_pkg_main_name );
            tmp_args_element_name_11 = var_pkg_main_name;
            CHECK_OBJECT( par_error );
            tmp_args_element_name_12 = par_error;
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 142;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
        return NULL;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_3 );
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_3 );
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_3 );

        if ( exception_keeper_tb_9 == NULL )
        {
            exception_keeper_tb_9 = MAKE_TRACEBACK( frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_9 );
        }
        else if ( exception_keeper_lineno_9 != 0 )
        {
            exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_9 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
        PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
            CHECK_OBJECT( par_error );
            tmp_compexpr_right_9 = par_error;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_11;
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
                PyObject *tmp_assign_source_15;
                tmp_assign_source_15 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_15 );
                var_e = tmp_assign_source_15;
            }
            // Tried code:
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT( par_mod_name );
                tmp_compexpr_left_10 = par_mod_name;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

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

                    exception_lineno = 144;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_source_name_12 = tmp_mvar_value_5;
                tmp_compexpr_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_modules );
                if ( tmp_compexpr_right_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 144;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
                }
                tmp_res = PySequence_Contains( tmp_compexpr_right_10, tmp_compexpr_left_10 );
                Py_DECREF( tmp_compexpr_right_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 144;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
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
                    exception_lineno = 145;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_c50773cdc742872a58dac101a8af90f0->m_frame) frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
                branch_no_11:;
            }
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_called_name_11;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( par_error );
                tmp_called_name_11 = par_error;
                tmp_left_name_4 = const_str_digest_8a005358640ac3e052dbb43bddc7d1fc;
                CHECK_OBJECT( var_e );
                tmp_tuple_element_1 = var_e;
                tmp_right_name_4 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_mod_name );
                tmp_tuple_element_1 = par_mod_name;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_1 );
                tmp_args_element_name_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_args_element_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 146;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
                }
                frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 146;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_raise_type_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 146;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_12;
                }
                exception_type = tmp_raise_type_5;
                exception_lineno = 146;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
            return NULL;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_10 = exception_type;
            exception_keeper_value_10 = exception_value;
            exception_keeper_tb_10 = exception_tb;
            exception_keeper_lineno_10 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( var_e );
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_10;
            exception_value = exception_keeper_value_10;
            exception_tb = exception_keeper_tb_10;
            exception_lineno = exception_keeper_lineno_10;

            goto try_except_handler_11;
            // End of try:
            goto branch_end_10;
            branch_no_10:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 140;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c50773cdc742872a58dac101a8af90f0->m_frame) frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
            branch_end_10:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
        return NULL;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( var_spec );
        tmp_source_name_13 = var_spec;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_loader );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_loader == NULL );
        var_loader = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( var_loader );
        tmp_compexpr_left_11 = var_loader;
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_12 = ( tmp_compexpr_left_11 == tmp_compexpr_right_11 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_6;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( par_error );
            tmp_called_name_12 = par_error;
            tmp_left_name_5 = const_str_digest_24055b5cbc753ba229ba91dddeb73b09;
            CHECK_OBJECT( par_mod_name );
            tmp_right_name_5 = par_mod_name;
            tmp_args_element_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_raise_type_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_6;
            exception_lineno = 150;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_12:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( var_loader );
        tmp_called_instance_6 = var_loader;
        CHECK_OBJECT( par_mod_name );
        tmp_args_element_name_15 = par_mod_name;
        frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_get_code, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        assert( var_code == NULL );
        var_code = tmp_assign_source_17;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_4 );
    exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_4 );
    exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_4 );

    if ( exception_keeper_tb_12 == NULL )
    {
        exception_keeper_tb_12 = MAKE_TRACEBACK( frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_12 );
    }
    else if ( exception_keeper_lineno_12 != 0 )
    {
        exception_keeper_tb_12 = ADD_TRACEBACK( exception_keeper_tb_12, frame_c50773cdc742872a58dac101a8af90f0, exception_keeper_lineno_12 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    PyException_SetTraceback( exception_keeper_value_12, (PyObject *)exception_keeper_tb_12 );
    PUBLISH_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_12 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
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
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_e = tmp_assign_source_18;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_raise_cause_2;
            CHECK_OBJECT( par_error );
            tmp_called_name_13 = par_error;
            CHECK_OBJECT( var_e );
            tmp_format_value_1 = var_e;
            tmp_format_spec_1 = const_str_empty;
            tmp_args_element_name_16 = BUILTIN_FORMAT( tmp_format_value_1, tmp_format_spec_1 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_15;
            }
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_raise_type_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_15;
            }
            CHECK_OBJECT( var_e );
            tmp_raise_cause_2 = var_e;
            exception_type = tmp_raise_type_7;
            exception_value = NULL;
            Py_INCREF( tmp_raise_cause_2 );
            exception_lineno = 155;
            RAISE_EXCEPTION_WITH_CAUSE( &exception_type, &exception_value, &exception_tb, tmp_raise_cause_2 );
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_15;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
        return NULL;
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

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        goto branch_end_13;
        branch_no_13:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 152;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c50773cdc742872a58dac101a8af90f0->m_frame) frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_14;
        branch_end_13:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( var_code );
        tmp_compexpr_left_13 = var_code;
        tmp_compexpr_right_13 = Py_None;
        tmp_condition_result_14 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_8;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( par_error );
            tmp_called_name_14 = par_error;
            tmp_left_name_6 = const_str_digest_3e1bdbc18cab6b5926335d0d664894ac;
            CHECK_OBJECT( par_mod_name );
            tmp_right_name_6 = par_mod_name;
            tmp_args_element_name_17 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c50773cdc742872a58dac101a8af90f0->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_raise_type_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_8;
            exception_lineno = 157;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_14:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50773cdc742872a58dac101a8af90f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50773cdc742872a58dac101a8af90f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50773cdc742872a58dac101a8af90f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c50773cdc742872a58dac101a8af90f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c50773cdc742872a58dac101a8af90f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c50773cdc742872a58dac101a8af90f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c50773cdc742872a58dac101a8af90f0,
        type_description_1,
        par_mod_name,
        par_error,
        var_pkg_name,
        var__,
        var_e,
        var_existing,
        var_warn,
        var_msg,
        var_spec,
        var_ex,
        var_pkg_main_name,
        var_loader,
        var_code
    );


    // Release cached frame.
    if ( frame_c50773cdc742872a58dac101a8af90f0 == cache_frame_c50773cdc742872a58dac101a8af90f0 )
    {
        Py_DECREF( frame_c50773cdc742872a58dac101a8af90f0 );
    }
    cache_frame_c50773cdc742872a58dac101a8af90f0 = NULL;

    assertFrameObject( frame_c50773cdc742872a58dac101a8af90f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_mod_name );
        tmp_tuple_element_2 = par_mod_name;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_spec );
        tmp_tuple_element_2 = var_spec;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_code );
        tmp_tuple_element_2 = var_code;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)var_pkg_name );
    Py_DECREF( var_pkg_name );
    var_pkg_name = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_existing );
    var_existing = NULL;

    Py_XDECREF( var_warn );
    var_warn = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_spec );
    Py_DECREF( var_spec );
    var_spec = NULL;

    Py_XDECREF( var_pkg_main_name );
    var_pkg_main_name = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    Py_XDECREF( var_pkg_name );
    var_pkg_name = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_existing );
    var_existing = NULL;

    Py_XDECREF( var_warn );
    var_warn = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_spec );
    var_spec = NULL;

    Py_XDECREF( var_ex );
    var_ex = NULL;

    Py_XDECREF( var_pkg_main_name );
    var_pkg_main_name = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_9__get_module_details );
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


static PyObject *impl_runpy$$$function_10__run_module_as_main( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod_name = python_pars[ 0 ];
    PyObject *par_alter_argv = python_pars[ 1 ];
    PyObject *var_mod_spec = NULL;
    PyObject *var_code = NULL;
    PyObject *var_exc = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_main_globals = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_59727678f766fa0b3bd8590109ff52e6;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_59727678f766fa0b3bd8590109ff52e6 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59727678f766fa0b3bd8590109ff52e6, codeobj_59727678f766fa0b3bd8590109ff52e6, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_59727678f766fa0b3bd8590109ff52e6 = cache_frame_59727678f766fa0b3bd8590109ff52e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59727678f766fa0b3bd8590109ff52e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59727678f766fa0b3bd8590109ff52e6 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_alter_argv );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_alter_argv );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_mod_name );
        tmp_compexpr_left_1 = par_mod_name;
        tmp_compexpr_right_1 = const_str_plain___main__;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_module_details );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_module_details );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_module_details" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_mod_name );
            tmp_args_element_name_1 = par_mod_name;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__Error );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Error );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_Error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }

            tmp_args_element_name_2 = tmp_mvar_value_2;
            frame_59727678f766fa0b3bd8590109ff52e6->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
            if ( tmp_assign_source_2 == NULL )
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


                type_description_1 = "ooooooo";
                exception_lineno = 183;
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 183;
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 183;
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                        type_description_1 = "ooooooo";
                        exception_lineno = 183;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooo";
                exception_lineno = 183;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

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
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_mod_name;
                assert( old != NULL );
                par_mod_name = tmp_assign_source_5;
                Py_INCREF( par_mod_name );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
            assert( var_mod_spec == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_mod_spec = tmp_assign_source_6;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
            assert( var_code == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_code = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        goto branch_end_1;
        branch_no_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_main_module_details );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_main_module_details );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_main_module_details" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__Error );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Error );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_Error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }

            tmp_args_element_name_3 = tmp_mvar_value_4;
            frame_59727678f766fa0b3bd8590109ff52e6->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
            if ( tmp_assign_source_9 == NULL )
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


                type_description_1 = "ooooooo";
                exception_lineno = 185;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 185;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


                type_description_1 = "ooooooo";
                exception_lineno = 185;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
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

                        type_description_1 = "ooooooo";
                        exception_lineno = 185;
                        goto try_except_handler_6;
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

                type_description_1 = "ooooooo";
                exception_lineno = 185;
                goto try_except_handler_6;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = par_mod_name;
                assert( old != NULL );
                par_mod_name = tmp_assign_source_12;
                Py_INCREF( par_mod_name );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
            assert( var_mod_spec == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_mod_spec = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
            assert( var_code == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_code = tmp_assign_source_14;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        branch_end_1:;
    }
    goto try_end_5;
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
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_59727678f766fa0b3bd8590109ff52e6, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_59727678f766fa0b3bd8590109ff52e6, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_5;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__Error );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Error );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_Error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_5;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
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
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = EXC_VALUE(PyThreadState_GET());
            assert( var_exc == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_exc = tmp_assign_source_15;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_6;
            tmp_left_name_1 = const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }

            tmp_source_name_1 = tmp_mvar_value_6;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_executable );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }
            tmp_right_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_exc );
            tmp_tuple_element_1 = var_exc;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_assign_source_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }
            assert( var_msg == NULL );
            var_msg = tmp_assign_source_16;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }

            tmp_called_instance_1 = tmp_mvar_value_7;
            CHECK_OBJECT( var_msg );
            tmp_args_element_name_4 = var_msg;
            frame_59727678f766fa0b3bd8590109ff52e6->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_exit, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto try_end_6;
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

        Py_XDECREF( var_exc );
        var_exc = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_6:;
        Py_XDECREF( var_exc );
        var_exc = NULL;

        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 181;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_59727678f766fa0b3bd8590109ff52e6->m_frame) frame_59727678f766fa0b3bd8590109ff52e6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
        branch_end_2:;
    }
    goto try_end_7;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_10__run_module_as_main );
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_8;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_modules );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain___main__;
        tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_main_globals == NULL );
        var_main_globals = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_alter_argv );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_alter_argv );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_4;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            if ( var_mod_spec == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mod_spec" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = var_mod_spec;
            tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_origin );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_9;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_argv );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 191;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_int_0;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_code );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_code );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_code" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_10;
        if ( var_code == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_code;
        CHECK_OBJECT( var_main_globals );
        tmp_args_element_name_6 = var_main_globals;
        tmp_args_element_name_7 = Py_None;
        tmp_args_element_name_8 = const_str_plain___main__;
        if ( var_mod_spec == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mod_spec" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = var_mod_spec;
        frame_59727678f766fa0b3bd8590109ff52e6->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59727678f766fa0b3bd8590109ff52e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_59727678f766fa0b3bd8590109ff52e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59727678f766fa0b3bd8590109ff52e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59727678f766fa0b3bd8590109ff52e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59727678f766fa0b3bd8590109ff52e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59727678f766fa0b3bd8590109ff52e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59727678f766fa0b3bd8590109ff52e6,
        type_description_1,
        par_mod_name,
        par_alter_argv,
        var_mod_spec,
        var_code,
        var_exc,
        var_msg,
        var_main_globals
    );


    // Release cached frame.
    if ( frame_59727678f766fa0b3bd8590109ff52e6 == cache_frame_59727678f766fa0b3bd8590109ff52e6 )
    {
        Py_DECREF( frame_59727678f766fa0b3bd8590109ff52e6 );
    }
    cache_frame_59727678f766fa0b3bd8590109ff52e6 = NULL;

    assertFrameObject( frame_59727678f766fa0b3bd8590109ff52e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_10__run_module_as_main );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_alter_argv );
    Py_DECREF( par_alter_argv );
    par_alter_argv = NULL;

    Py_XDECREF( var_mod_spec );
    var_mod_spec = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    CHECK_OBJECT( (PyObject *)var_main_globals );
    Py_DECREF( var_main_globals );
    var_main_globals = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_alter_argv );
    Py_DECREF( par_alter_argv );
    par_alter_argv = NULL;

    Py_XDECREF( var_mod_spec );
    var_mod_spec = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_main_globals );
    var_main_globals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_10__run_module_as_main );
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


static PyObject *impl_runpy$$$function_11_run_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod_name = python_pars[ 0 ];
    PyObject *par_init_globals = python_pars[ 1 ];
    PyObject *par_run_name = python_pars[ 2 ];
    PyObject *par_alter_sys = python_pars[ 3 ];
    PyObject *var_mod_spec = NULL;
    PyObject *var_code = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_751e2831ccadd49e70211cee39b3b830;
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
    static struct Nuitka_FrameObject *cache_frame_751e2831ccadd49e70211cee39b3b830 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_751e2831ccadd49e70211cee39b3b830, codeobj_751e2831ccadd49e70211cee39b3b830, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_751e2831ccadd49e70211cee39b3b830 = cache_frame_751e2831ccadd49e70211cee39b3b830;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_751e2831ccadd49e70211cee39b3b830 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_751e2831ccadd49e70211cee39b3b830 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_module_details );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_module_details );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_module_details" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_mod_name );
        tmp_args_element_name_1 = par_mod_name;
        frame_751e2831ccadd49e70211cee39b3b830->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
        if ( tmp_assign_source_2 == NULL )
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


            type_description_1 = "oooooo";
            exception_lineno = 201;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooo";
            exception_lineno = 201;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooo";
            exception_lineno = 201;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 201;
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

            type_description_1 = "oooooo";
            exception_lineno = 201;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_mod_name;
            assert( old != NULL );
            par_mod_name = tmp_assign_source_5;
            Py_INCREF( par_mod_name );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_mod_spec == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_mod_spec = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_code == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_code = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_run_name );
        tmp_compexpr_left_1 = par_run_name;
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
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( par_mod_name );
            tmp_assign_source_8 = par_mod_name;
            {
                PyObject *old = par_run_name;
                assert( old != NULL );
                par_run_name = tmp_assign_source_8;
                Py_INCREF( par_run_name );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_alter_sys );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_alter_sys );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_module_code );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_module_code );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_module_code" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 205;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_code );
            tmp_args_element_name_2 = var_code;
            CHECK_OBJECT( par_init_globals );
            tmp_args_element_name_3 = par_init_globals;
            CHECK_OBJECT( par_run_name );
            tmp_args_element_name_4 = par_run_name;
            CHECK_OBJECT( var_mod_spec );
            tmp_args_element_name_5 = var_mod_spec;
            frame_751e2831ccadd49e70211cee39b3b830->m_frame.f_lineno = 205;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_code );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_code );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_code" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 208;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_code );
            tmp_args_element_name_6 = var_code;
            tmp_args_element_name_7 = PyDict_New();
            CHECK_OBJECT( par_init_globals );
            tmp_args_element_name_8 = par_init_globals;
            CHECK_OBJECT( par_run_name );
            tmp_args_element_name_9 = par_run_name;
            CHECK_OBJECT( var_mod_spec );
            tmp_args_element_name_10 = var_mod_spec;
            frame_751e2831ccadd49e70211cee39b3b830->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_751e2831ccadd49e70211cee39b3b830 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_751e2831ccadd49e70211cee39b3b830 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_751e2831ccadd49e70211cee39b3b830 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_751e2831ccadd49e70211cee39b3b830, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_751e2831ccadd49e70211cee39b3b830->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_751e2831ccadd49e70211cee39b3b830, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_751e2831ccadd49e70211cee39b3b830,
        type_description_1,
        par_mod_name,
        par_init_globals,
        par_run_name,
        par_alter_sys,
        var_mod_spec,
        var_code
    );


    // Release cached frame.
    if ( frame_751e2831ccadd49e70211cee39b3b830 == cache_frame_751e2831ccadd49e70211cee39b3b830 )
    {
        Py_DECREF( frame_751e2831ccadd49e70211cee39b3b830 );
    }
    cache_frame_751e2831ccadd49e70211cee39b3b830 = NULL;

    assertFrameObject( frame_751e2831ccadd49e70211cee39b3b830 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_11_run_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_init_globals );
    Py_DECREF( par_init_globals );
    par_init_globals = NULL;

    CHECK_OBJECT( (PyObject *)par_run_name );
    Py_DECREF( par_run_name );
    par_run_name = NULL;

    CHECK_OBJECT( (PyObject *)par_alter_sys );
    Py_DECREF( par_alter_sys );
    par_alter_sys = NULL;

    CHECK_OBJECT( (PyObject *)var_mod_spec );
    Py_DECREF( var_mod_spec );
    var_mod_spec = NULL;

    CHECK_OBJECT( (PyObject *)var_code );
    Py_DECREF( var_code );
    var_code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mod_name );
    Py_DECREF( par_mod_name );
    par_mod_name = NULL;

    CHECK_OBJECT( (PyObject *)par_init_globals );
    Py_DECREF( par_init_globals );
    par_init_globals = NULL;

    Py_XDECREF( par_run_name );
    par_run_name = NULL;

    CHECK_OBJECT( (PyObject *)par_alter_sys );
    Py_DECREF( par_alter_sys );
    par_alter_sys = NULL;

    Py_XDECREF( var_mod_spec );
    var_mod_spec = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_11_run_module );
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


static PyObject *impl_runpy$$$function_12__get_main_module_details( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_error = python_pars[ 0 ];
    PyObject *var_saved_main = NULL;
    PyObject *var_exc = NULL;
    struct Nuitka_FrameObject *frame_2abe0636f9a05ddba82d743986c5044b;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_2abe0636f9a05ddba82d743986c5044b = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2abe0636f9a05ddba82d743986c5044b, codeobj_2abe0636f9a05ddba82d743986c5044b, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2abe0636f9a05ddba82d743986c5044b = cache_frame_2abe0636f9a05ddba82d743986c5044b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2abe0636f9a05ddba82d743986c5044b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2abe0636f9a05ddba82d743986c5044b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 216;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_modules );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain___main__;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        assert( var_saved_main == NULL );
        var_saved_main = tmp_assign_source_1;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_delsubscr_subscript_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 217;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_modules );
        if ( tmp_delsubscr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = const_str_plain___main__;
        tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
        Py_DECREF( tmp_delsubscr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_module_details );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_module_details );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_module_details" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "oNoo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        frame_2abe0636f9a05ddba82d743986c5044b->m_frame.f_lineno = 219;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain___main___tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oNoo";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2abe0636f9a05ddba82d743986c5044b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2abe0636f9a05ddba82d743986c5044b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oNoo";
            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
            assert( var_exc == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_exc = tmp_assign_source_2;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_unicode_arg_1;
            tmp_compexpr_left_2 = const_str_plain___main__;
            CHECK_OBJECT( var_exc );
            tmp_unicode_arg_1 = var_exc;
            tmp_compexpr_right_2 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oNoo";
                goto try_except_handler_5;
            }
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oNoo";
                goto try_except_handler_5;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_raise_cause_1;
                CHECK_OBJECT( par_error );
                tmp_called_name_2 = par_error;
                tmp_left_name_1 = const_str_digest_b640604c478e3681ea49b13570917bfb;
                tmp_tuple_element_1 = const_str_plain___main__;
                tmp_right_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_right_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 223;
                    type_description_1 = "oNoo";
                    goto try_except_handler_5;
                }

                tmp_source_name_3 = tmp_mvar_value_4;
                tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 223;
                    type_description_1 = "oNoo";
                    goto try_except_handler_5;
                }
                tmp_subscript_name_2 = const_int_0;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 223;
                    type_description_1 = "oNoo";
                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oNoo";
                    goto try_except_handler_5;
                }
                frame_2abe0636f9a05ddba82d743986c5044b->m_frame.f_lineno = 222;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oNoo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_exc );
                tmp_raise_cause_1 = var_exc;
                exception_type = tmp_raise_type_1;
                exception_value = NULL;
                Py_INCREF( tmp_raise_cause_1 );
                exception_lineno = 223;
                RAISE_EXCEPTION_WITH_CAUSE( &exception_type, &exception_value, &exception_tb, tmp_raise_cause_1 );
                type_description_1 = "oNoo";
                goto try_except_handler_5;
            }
            branch_no_2:;
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 224;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2abe0636f9a05ddba82d743986c5044b->m_frame) frame_2abe0636f9a05ddba82d743986c5044b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oNoo";
        goto try_except_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
        return NULL;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( var_exc );
        var_exc = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 218;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2abe0636f9a05ddba82d743986c5044b->m_frame) frame_2abe0636f9a05ddba82d743986c5044b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oNoo";
        goto try_except_handler_4;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
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

    goto try_except_handler_2;
    // End of try:
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_saved_main );
        tmp_ass_subvalue_1 = var_saved_main;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 226;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_modules );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_str_plain___main__;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
    }
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_2abe0636f9a05ddba82d743986c5044b, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_2abe0636f9a05ddba82d743986c5044b, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_saved_main );
        tmp_ass_subvalue_2 = var_saved_main;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 226;
            type_description_1 = "oNoo";
            goto try_except_handler_6;
        }

        tmp_source_name_5 = tmp_mvar_value_6;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_modules );
        if ( tmp_ass_subscribed_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oNoo";
            goto try_except_handler_6;
        }
        tmp_ass_subscript_2 = const_str_plain___main__;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscribed_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oNoo";
            goto try_except_handler_6;
        }
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 218;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2abe0636f9a05ddba82d743986c5044b->m_frame) frame_2abe0636f9a05ddba82d743986c5044b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oNoo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2abe0636f9a05ddba82d743986c5044b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2abe0636f9a05ddba82d743986c5044b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2abe0636f9a05ddba82d743986c5044b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2abe0636f9a05ddba82d743986c5044b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2abe0636f9a05ddba82d743986c5044b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2abe0636f9a05ddba82d743986c5044b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2abe0636f9a05ddba82d743986c5044b,
        type_description_1,
        par_error,
        NULL,
        var_saved_main,
        var_exc
    );


    // Release cached frame.
    if ( frame_2abe0636f9a05ddba82d743986c5044b == cache_frame_2abe0636f9a05ddba82d743986c5044b )
    {
        Py_DECREF( frame_2abe0636f9a05ddba82d743986c5044b );
    }
    cache_frame_2abe0636f9a05ddba82d743986c5044b = NULL;

    assertFrameObject( frame_2abe0636f9a05ddba82d743986c5044b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)var_saved_main );
    Py_DECREF( var_saved_main );
    var_saved_main = NULL;

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

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    Py_XDECREF( var_saved_main );
    var_saved_main = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_12__get_main_module_details );
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


static PyObject *impl_runpy$$$function_13__get_code_from_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_run_name = python_pars[ 0 ];
    PyObject *par_fname = python_pars[ 1 ];
    PyObject *var_f = NULL;
    PyObject *var_code = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_c35cb8e4cab43793e7cc3a7d882561ab;
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
    bool tmp_result;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    static struct Nuitka_FrameObject *cache_frame_c35cb8e4cab43793e7cc3a7d882561ab = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c35cb8e4cab43793e7cc3a7d882561ab, codeobj_c35cb8e4cab43793e7cc3a7d882561ab, module_runpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c35cb8e4cab43793e7cc3a7d882561ab = cache_frame_c35cb8e4cab43793e7cc3a7d882561ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c35cb8e4cab43793e7cc3a7d882561ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c35cb8e4cab43793e7cc3a7d882561ab ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT( par_fname );
        tmp_open_filename_1 = par_fname;
        tmp_open_mode_1 = const_str_plain_rb;
        tmp_assign_source_1 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 231;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_5 = tmp_with_1__enter;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_f = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_read_code );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_code );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_code" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_f );
        tmp_args_element_name_1 = var_f;
        frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert( var_code == NULL );
        var_code = tmp_assign_source_6;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c35cb8e4cab43793e7cc3a7d882561ab, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c35cb8e4cab43793e7cc3a7d882561ab, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_7;
            tmp_assign_source_7 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_7;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            tmp_args_element_name_2 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_4 = EXC_TRACEBACK(PyThreadState_GET());
            frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 231;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame) frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 231;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame) frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_13__get_code_from_file );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 231;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 231;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 231;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if ( var_code == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_code;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_open_filename_2;
            PyObject *tmp_open_mode_2;
            CHECK_OBJECT( par_fname );
            tmp_open_filename_2 = par_fname;
            tmp_open_mode_2 = const_str_plain_rb;
            tmp_assign_source_8 = BUILTIN_OPEN( tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            assert( tmp_with_2__source == NULL );
            tmp_with_2__source = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_with_2__source );
            tmp_source_name_3 = tmp_with_2__source;
            tmp_called_name_6 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 235;
            tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
            Py_DECREF( tmp_called_name_6 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            assert( tmp_with_2__enter == NULL );
            tmp_with_2__enter = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_with_2__source );
            tmp_source_name_4 = tmp_with_2__source;
            tmp_assign_source_10 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            assert( tmp_with_2__exit == NULL );
            tmp_with_2__exit = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_assign_source_11;
            tmp_assign_source_11 = NUITKA_BOOL_TRUE;
            tmp_with_2__indicator = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_with_2__enter );
            tmp_assign_source_12 = tmp_with_2__enter;
            {
                PyObject *old = var_f;
                assert( old != NULL );
                var_f = tmp_assign_source_12;
                Py_INCREF( var_f );
                Py_DECREF( old );
            }

        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_compile_source_1;
            PyObject *tmp_compile_filename_1;
            PyObject *tmp_compile_mode_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_f );
            tmp_called_instance_1 = var_f;
            frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 236;
            tmp_compile_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_read );
            if ( tmp_compile_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( par_fname );
            tmp_compile_filename_1 = par_fname;
            tmp_compile_mode_1 = const_str_plain_exec;
            tmp_assign_source_13 = COMPILE_CODE( tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL, NULL );
            Py_DECREF( tmp_compile_source_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_code;
                var_code = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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

        if ( exception_keeper_tb_5 == NULL )
        {
            exception_keeper_tb_5 = MAKE_TRACEBACK( frame_c35cb8e4cab43793e7cc3a7d882561ab, exception_keeper_lineno_5 );
        }
        else if ( exception_keeper_lineno_5 != 0 )
        {
            exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_c35cb8e4cab43793e7cc3a7d882561ab, exception_keeper_lineno_5 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
        PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
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


                exception_lineno = 235;
                type_description_1 = "oooo";
                goto try_except_handler_9;
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
                nuitka_bool tmp_assign_source_14;
                tmp_assign_source_14 = NUITKA_BOOL_FALSE;
                tmp_with_2__indicator = tmp_assign_source_14;
            }
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_7 = tmp_with_2__exit;
                tmp_args_element_name_5 = EXC_TYPE(PyThreadState_GET());
                tmp_args_element_name_6 = EXC_VALUE(PyThreadState_GET());
                tmp_args_element_name_7 = EXC_TRACEBACK(PyThreadState_GET());
                frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 235;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
                }

                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "oooo";
                    goto try_except_handler_9;
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
                    exception_lineno = 235;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame) frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto try_except_handler_9;
                branch_no_7:;
            }
            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 235;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame) frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_9;
            branch_end_6:;
        }
        goto try_end_6;
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
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_6:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_5;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_13__get_code_from_file );
        return NULL;
        // End of try:
        try_end_5:;
        goto try_end_7;
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

        {
            nuitka_bool tmp_condition_result_8;
            nuitka_bool tmp_compexpr_left_6;
            nuitka_bool tmp_compexpr_right_6;
            assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_6 = tmp_with_2__indicator;
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
                PyObject *tmp_called_name_8;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_8 = tmp_with_2__exit;
                frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 235;
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_7 );
                    Py_XDECREF( exception_keeper_value_7 );
                    Py_XDECREF( exception_keeper_tb_7 );

                    exception_lineno = 235;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_no_8:;
        }
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_6;
        // End of try:
        try_end_7:;
        {
            nuitka_bool tmp_condition_result_9;
            nuitka_bool tmp_compexpr_left_7;
            nuitka_bool tmp_compexpr_right_7;
            assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_7 = tmp_with_2__indicator;
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
                PyObject *tmp_called_name_9;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_9 = tmp_with_2__exit;
                frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame.f_lineno = 235;
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "oooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_9:;
        }
        goto try_end_8;
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

        Py_XDECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        Py_XDECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        Py_XDECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_with_2__source );
        Py_DECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
        Py_DECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
        Py_DECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        branch_no_5:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( var_code == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_code;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_fname );
        tmp_tuple_element_1 = par_fname;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c35cb8e4cab43793e7cc3a7d882561ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c35cb8e4cab43793e7cc3a7d882561ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c35cb8e4cab43793e7cc3a7d882561ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c35cb8e4cab43793e7cc3a7d882561ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c35cb8e4cab43793e7cc3a7d882561ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c35cb8e4cab43793e7cc3a7d882561ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c35cb8e4cab43793e7cc3a7d882561ab,
        type_description_1,
        par_run_name,
        par_fname,
        var_f,
        var_code
    );


    // Release cached frame.
    if ( frame_c35cb8e4cab43793e7cc3a7d882561ab == cache_frame_c35cb8e4cab43793e7cc3a7d882561ab )
    {
        Py_DECREF( frame_c35cb8e4cab43793e7cc3a7d882561ab );
    }
    cache_frame_c35cb8e4cab43793e7cc3a7d882561ab = NULL;

    assertFrameObject( frame_c35cb8e4cab43793e7cc3a7d882561ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_13__get_code_from_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_run_name );
    Py_DECREF( par_run_name );
    par_run_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fname );
    Py_DECREF( par_fname );
    par_fname = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_run_name );
    Py_DECREF( par_run_name );
    par_run_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fname );
    Py_DECREF( par_fname );
    par_fname = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_13__get_code_from_file );
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


static PyObject *impl_runpy$$$function_14_run_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path_name = python_pars[ 0 ];
    PyObject *par_init_globals = python_pars[ 1 ];
    PyObject *par_run_name = python_pars[ 2 ];
    PyObject *var_pkg_name = NULL;
    PyObject *var_importer = NULL;
    nuitka_bool var_is_NullImporter = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_code = NULL;
    PyObject *var_fname = NULL;
    PyObject *var_mod_name = NULL;
    PyObject *var_mod_spec = NULL;
    PyObject *var_temp_module = NULL;
    PyObject *var_mod_globals = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_072fc8bf7447d0c663c1c13583dd9906;
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
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    static struct Nuitka_FrameObject *cache_frame_072fc8bf7447d0c663c1c13583dd9906 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_run_name );
        tmp_compexpr_left_1 = par_run_name;
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
            tmp_assign_source_1 = const_str_angle_run_path;
            {
                PyObject *old = par_run_name;
                assert( old != NULL );
                par_run_name = tmp_assign_source_1;
                Py_INCREF( par_run_name );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_072fc8bf7447d0c663c1c13583dd9906, codeobj_072fc8bf7447d0c663c1c13583dd9906, module_runpy, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_072fc8bf7447d0c663c1c13583dd9906 = cache_frame_072fc8bf7447d0c663c1c13583dd9906;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_072fc8bf7447d0c663c1c13583dd9906 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_072fc8bf7447d0c663c1c13583dd9906 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_run_name );
        tmp_called_instance_1 = par_run_name;
        frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 251;
        tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rpartition, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "oooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "oooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkg_name == NULL );
        var_pkg_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_get_importer );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_importer );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_importer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;
            type_description_1 = "oooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_path_name );
        tmp_args_element_name_1 = par_path_name;
        frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooooboooooo";
            goto frame_exception_exit_1;
        }
        assert( var_importer == NULL );
        var_importer = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        var_is_NullImporter = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( var_importer );
        tmp_type_arg_1 = var_importer;
        tmp_source_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_source_name_1 == NULL) );
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___module__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "oooooboooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_plain_imp;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "oooooboooooo";
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
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_type_arg_2;
            CHECK_OBJECT( var_importer );
            tmp_type_arg_2 = var_importer;
            tmp_source_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_source_name_2 == NULL) );
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooboooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_plain_NullImporter;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooboooooo";
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
                nuitka_bool tmp_assign_source_5;
                tmp_assign_source_5 = NUITKA_BOOL_TRUE;
                var_is_NullImporter = tmp_assign_source_5;
            }
            branch_no_3:;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_importer );
        tmp_isinstance_inst_1 = var_importer;
        tmp_isinstance_cls_1 = (PyObject *)Py_TYPE( Py_None );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooooboooooo";
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
        if ( var_is_NullImporter == NUITKA_BOOL_UNASSIGNED )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_NullImporter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;
            type_description_1 = "oooooboooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_1 = var_is_NullImporter;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_code_from_file );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_code_from_file );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_code_from_file" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 261;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_run_name );
            tmp_args_element_name_2 = par_run_name;
            CHECK_OBJECT( par_path_name );
            tmp_args_element_name_3 = par_path_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 261;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_7 == NULL )
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


                type_description_1 = "oooooboooooo";
                exception_lineno = 261;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_8 == NULL )
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


                type_description_1 = "oooooboooooo";
                exception_lineno = 261;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                        type_description_1 = "oooooboooooo";
                        exception_lineno = 261;
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

                type_description_1 = "oooooboooooo";
                exception_lineno = 261;
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
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
            assert( var_code == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_code = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
            assert( var_fname == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_fname = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_module_code );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_module_code );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_module_code" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 262;
                type_description_1 = "oooooboooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_code );
            tmp_tuple_element_1 = var_code;
            tmp_args_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_init_globals );
            tmp_tuple_element_1 = par_init_globals;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_run_name );
            tmp_tuple_element_1 = par_run_name;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_pkg_name;
            CHECK_OBJECT( var_pkg_name );
            tmp_dict_value_1 = var_pkg_name;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_script_name;
            CHECK_OBJECT( var_fname );
            tmp_dict_value_2 = var_fname;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 262;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "oooooboooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 267;
                type_description_1 = "oooooboooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooboooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_int_0;
            CHECK_OBJECT( par_path_name );
            tmp_args_element_name_5 = par_path_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_insert, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooboooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_main_module_details );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_main_module_details );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_main_module_details" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 275;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 275;
            tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_11 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 0, 3 );
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


                type_description_1 = "oooooboooooo";
                exception_lineno = 275;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 1, 3 );
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


                type_description_1 = "oooooboooooo";
                exception_lineno = 275;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 2, 3 );
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


                type_description_1 = "oooooboooooo";
                exception_lineno = 275;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_14;
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

                        type_description_1 = "oooooboooooo";
                        exception_lineno = 275;
                        goto try_except_handler_6;
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

                type_description_1 = "oooooboooooo";
                exception_lineno = 275;
                goto try_except_handler_6;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_4;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
            assert( var_mod_name == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_mod_name = tmp_assign_source_15;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
            assert( var_mod_spec == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_mod_spec = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
            assert( var_code == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_code = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__TempModule );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TempModule );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_TempModule" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_7;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( par_run_name );
            tmp_args_element_name_6 = par_run_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_7;
            }
            assert( tmp_with_2__source == NULL );
            tmp_with_2__source = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_with_2__source );
            tmp_source_name_4 = tmp_with_2__source;
            tmp_called_name_6 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_7;
            }
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
            tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
            Py_DECREF( tmp_called_name_6 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_7;
            }
            assert( tmp_with_2__enter == NULL );
            tmp_with_2__enter = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_with_2__source );
            tmp_source_name_5 = tmp_with_2__source;
            tmp_assign_source_20 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___exit__ );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_7;
            }
            assert( tmp_with_2__exit == NULL );
            tmp_with_2__exit = tmp_assign_source_20;
        }
        {
            nuitka_bool tmp_assign_source_21;
            tmp_assign_source_21 = NUITKA_BOOL_TRUE;
            tmp_with_2__indicator = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_with_2__enter );
            tmp_assign_source_22 = tmp_with_2__enter;
            assert( var_temp_module == NULL );
            Py_INCREF( tmp_assign_source_22 );
            var_temp_module = tmp_assign_source_22;
        }
        // Tried code:
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__ModifiedArgv0 );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ModifiedArgv0 );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ModifiedArgv0" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 277;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_10;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( par_path_name );
            tmp_args_element_name_7 = par_path_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 277;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 277;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_10;
            }
            assert( tmp_with_1__source == NULL );
            tmp_with_1__source = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_with_1__source );
            tmp_source_name_6 = tmp_with_1__source;
            tmp_called_name_8 = LOOKUP_SPECIAL( tmp_source_name_6, const_str_plain___enter__ );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_10;
            }
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
            tmp_assign_source_24 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
            Py_DECREF( tmp_called_name_8 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_10;
            }
            assert( tmp_with_1__enter == NULL );
            tmp_with_1__enter = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_with_1__source );
            tmp_source_name_7 = tmp_with_1__source;
            tmp_assign_source_25 = LOOKUP_SPECIAL( tmp_source_name_7, const_str_plain___exit__ );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_10;
            }
            assert( tmp_with_1__exit == NULL );
            tmp_with_1__exit = tmp_assign_source_25;
        }
        {
            nuitka_bool tmp_assign_source_26;
            tmp_assign_source_26 = NUITKA_BOOL_TRUE;
            tmp_with_1__indicator = tmp_assign_source_26;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( var_temp_module );
            tmp_source_name_9 = var_temp_module;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_module );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_27 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_8 );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_12;
            }
            assert( var_mod_globals == NULL );
            var_mod_globals = tmp_assign_source_27;
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_code );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_code );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_code" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 279;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_12;
            }

            tmp_called_name_9 = tmp_mvar_value_8;
            CHECK_OBJECT( var_code );
            tmp_args_element_name_8 = var_code;
            CHECK_OBJECT( var_mod_globals );
            tmp_args_element_name_9 = var_mod_globals;
            CHECK_OBJECT( par_init_globals );
            tmp_args_element_name_10 = par_init_globals;
            CHECK_OBJECT( par_run_name );
            tmp_args_element_name_11 = par_run_name;
            CHECK_OBJECT( var_mod_spec );
            tmp_args_element_name_12 = var_mod_spec;
            CHECK_OBJECT( var_pkg_name );
            tmp_args_element_name_13 = var_pkg_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 279;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_9, call_args );
            }

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_12;
            }
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 279;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_copy );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_12;
            }
            goto try_return_handler_11;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // Exception handler code:
        try_except_handler_12:;
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
            exception_keeper_tb_5 = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_5 );
        }
        else if ( exception_keeper_lineno_5 != 0 )
        {
            exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_5 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
        PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_4 = PyExc_BaseException;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_13;
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
                nuitka_bool tmp_assign_source_28;
                tmp_assign_source_28 = NUITKA_BOOL_FALSE;
                tmp_with_1__indicator = tmp_assign_source_28;
            }
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_name_10;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_10 = tmp_with_1__exit;
                tmp_args_element_name_14 = EXC_TYPE(PyThreadState_GET());
                tmp_args_element_name_15 = EXC_VALUE(PyThreadState_GET());
                tmp_args_element_name_16 = EXC_TRACEBACK(PyThreadState_GET());
                frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
                    tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
                }

                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_13;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_13;
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
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 276;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_13;
                branch_no_6:;
            }
            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 276;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooboooooo";
            goto try_except_handler_13;
            branch_end_5:;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_13:;
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

        goto try_except_handler_11;
        // End of try:
        try_end_5:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_6;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // End of try:
        try_end_6:;
        goto try_end_7;
        // Return handler code:
        try_return_handler_11:;
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_11 = tmp_with_1__exit;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_10;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            nuitka_bool tmp_condition_result_7;
            nuitka_bool tmp_compexpr_left_5;
            nuitka_bool tmp_compexpr_right_5;
            assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_5 = tmp_with_1__indicator;
            tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
            tmp_condition_result_7 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_12;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_12 = tmp_with_1__exit;
                frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_7 );
                    Py_XDECREF( exception_keeper_value_7 );
                    Py_XDECREF( exception_keeper_tb_7 );

                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_10;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_no_7:;
        }
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_10;
        // End of try:
        try_end_7:;
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
                PyObject *tmp_called_name_13;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( tmp_with_1__exit );
                tmp_called_name_13 = tmp_with_1__exit;
                frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_10;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_8:;
        }
        goto try_end_8;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)tmp_with_1__source );
        Py_DECREF( tmp_with_1__source );
        tmp_with_1__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
        Py_DECREF( tmp_with_1__enter );
        tmp_with_1__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
        Py_DECREF( tmp_with_1__exit );
        tmp_with_1__exit = NULL;

        goto try_return_handler_8;
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

        Py_XDECREF( tmp_with_1__source );
        tmp_with_1__source = NULL;

        Py_XDECREF( tmp_with_1__enter );
        tmp_with_1__enter = NULL;

        Py_XDECREF( tmp_with_1__exit );
        tmp_with_1__exit = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_8:;
        CHECK_OBJECT( (PyObject *)tmp_with_1__source );
        Py_DECREF( tmp_with_1__source );
        tmp_with_1__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
        Py_DECREF( tmp_with_1__enter );
        tmp_with_1__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
        Py_DECREF( tmp_with_1__exit );
        tmp_with_1__exit = NULL;

        goto try_end_9;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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

        if ( exception_keeper_tb_9 == NULL )
        {
            exception_keeper_tb_9 = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_9 );
        }
        else if ( exception_keeper_lineno_9 != 0 )
        {
            exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_9 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
        PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_7 = PyExc_BaseException;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_14;
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
                nuitka_bool tmp_assign_source_29;
                tmp_assign_source_29 = NUITKA_BOOL_FALSE;
                tmp_with_2__indicator = tmp_assign_source_29;
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_name_14;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_args_element_name_19;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_14 = tmp_with_2__exit;
                tmp_args_element_name_17 = EXC_TYPE(PyThreadState_GET());
                tmp_args_element_name_18 = EXC_VALUE(PyThreadState_GET());
                tmp_args_element_name_19 = EXC_TRACEBACK(PyThreadState_GET());
                frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
                }

                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_14;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_14;
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
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 276;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_14;
                branch_no_10:;
            }
            goto branch_end_9;
            branch_no_9:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 276;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooboooooo";
            goto try_except_handler_14;
            branch_end_9:;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_8;
        // End of try:
        try_end_10:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_9;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // End of try:
        try_end_9:;
        goto try_end_11;
        // Return handler code:
        try_return_handler_8:;
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_15 = tmp_with_2__exit;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        goto try_return_handler_7;
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

        {
            nuitka_bool tmp_condition_result_11;
            nuitka_bool tmp_compexpr_left_8;
            nuitka_bool tmp_compexpr_right_8;
            assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_8 = tmp_with_2__indicator;
            tmp_compexpr_right_8 = NUITKA_BOOL_TRUE;
            tmp_condition_result_11 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_16;
                PyObject *tmp_call_result_6;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_16 = tmp_with_2__exit;
                frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_11 );
                    Py_XDECREF( exception_keeper_value_11 );
                    Py_XDECREF( exception_keeper_tb_11 );

                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_7;
                }
                Py_DECREF( tmp_call_result_6 );
            }
            branch_no_11:;
        }
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_7;
        // End of try:
        try_end_11:;
        {
            nuitka_bool tmp_condition_result_12;
            nuitka_bool tmp_compexpr_left_9;
            nuitka_bool tmp_compexpr_right_9;
            assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_9 = tmp_with_2__indicator;
            tmp_compexpr_right_9 = NUITKA_BOOL_TRUE;
            tmp_condition_result_12 = ( tmp_compexpr_left_9 == tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_17;
                PyObject *tmp_call_result_7;
                CHECK_OBJECT( tmp_with_2__exit );
                tmp_called_name_17 = tmp_with_2__exit;
                frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 276;
                tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooboooooo";
                    goto try_except_handler_7;
                }
                Py_DECREF( tmp_call_result_7 );
            }
            branch_no_12:;
        }
        goto try_end_12;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_with_2__source );
        Py_DECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
        Py_DECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
        Py_DECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        Py_XDECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        Py_XDECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_4;
        // End of try:
        try_end_12:;
        goto try_end_13;
        // Return handler code:
        try_return_handler_4:;
        // Tried code:
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_20;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_15;
            }

            tmp_source_name_10 = tmp_mvar_value_9;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_15;
            }
            CHECK_OBJECT( par_path_name );
            tmp_args_element_name_20 = par_path_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_remove, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_15;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        goto try_end_14;
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

        // Preserve existing published exception.
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_3 );
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_3 );
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_3 );

        if ( exception_keeper_tb_13 == NULL )
        {
            exception_keeper_tb_13 = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_13 );
        }
        else if ( exception_keeper_lineno_13 != 0 )
        {
            exception_keeper_tb_13 = ADD_TRACEBACK( exception_keeper_tb_13, frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_13 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
        PyException_SetTraceback( exception_keeper_value_13, (PyObject *)exception_keeper_tb_13 );
        PUBLISH_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            tmp_compexpr_left_10 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_10 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_16;
            }
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_16;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 282;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooboooooo";
            goto try_except_handler_16;
            branch_no_13:;
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_1;
        // End of try:
        try_end_15:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        goto try_end_14;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // End of try:
        try_end_14:;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_4 );
        exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_4 );
        exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_4 );

        if ( exception_keeper_tb_15 == NULL )
        {
            exception_keeper_tb_15 = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_15 );
        }
        else if ( exception_keeper_lineno_15 != 0 )
        {
            exception_keeper_tb_15 = ADD_TRACEBACK( exception_keeper_tb_15, frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_15 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15 );
        PyException_SetTraceback( exception_keeper_value_15, (PyObject *)exception_keeper_tb_15 );
        PUBLISH_EXCEPTION( &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15 );
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_18;
            }

            tmp_source_name_11 = tmp_mvar_value_10;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_18;
            }
            CHECK_OBJECT( par_path_name );
            tmp_args_element_name_21 = par_path_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_call_result_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_remove, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_18;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_3 );
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_3 );
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_3 );

        if ( exception_keeper_tb_16 == NULL )
        {
            exception_keeper_tb_16 = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_16 );
        }
        else if ( exception_keeper_lineno_16 != 0 )
        {
            exception_keeper_tb_16 = ADD_TRACEBACK( exception_keeper_tb_16, frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_16 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16 );
        PyException_SetTraceback( exception_keeper_value_16, (PyObject *)exception_keeper_tb_16 );
        PUBLISH_EXCEPTION( &exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_11 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_19;
            }
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_19;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 282;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooboooooo";
            goto try_except_handler_19;
            branch_no_14:;
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_17;
        // End of try:
        try_end_17:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        goto try_end_16;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // End of try:
        try_end_16:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 268;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooboooooo";
        goto try_except_handler_17;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_13:;
        CHECK_OBJECT( (PyObject *)tmp_with_2__source );
        Py_DECREF( tmp_with_2__source );
        tmp_with_2__source = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
        Py_DECREF( tmp_with_2__enter );
        tmp_with_2__enter = NULL;

        CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
        Py_DECREF( tmp_with_2__exit );
        tmp_with_2__exit = NULL;

        // Tried code:
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_name_22;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_20;
            }

            tmp_source_name_12 = tmp_mvar_value_11;
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_20;
            }
            CHECK_OBJECT( par_path_name );
            tmp_args_element_name_22 = par_path_name;
            frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_call_result_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_remove, call_args );
            }

            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_call_result_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_20;
            }
            Py_DECREF( tmp_call_result_10 );
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
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_3 );
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_3 );
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_3 );

        if ( exception_keeper_tb_19 == NULL )
        {
            exception_keeper_tb_19 = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_19 );
        }
        else if ( exception_keeper_lineno_19 != 0 )
        {
            exception_keeper_tb_19 = ADD_TRACEBACK( exception_keeper_tb_19, frame_072fc8bf7447d0c663c1c13583dd9906, exception_keeper_lineno_19 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19 );
        PyException_SetTraceback( exception_keeper_value_19, (PyObject *)exception_keeper_tb_19 );
        PUBLISH_EXCEPTION( &exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_12 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_21;
            }
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooboooooo";
                goto try_except_handler_21;
            }
            tmp_condition_result_15 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 282;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame) frame_072fc8bf7447d0c663c1c13583dd9906->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooboooooo";
            goto try_except_handler_21;
            branch_no_15:;
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
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto frame_exception_exit_1;
        // End of try:
        try_end_19:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
        goto try_end_18;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
        return NULL;
        // End of try:
        try_end_18:;
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_072fc8bf7447d0c663c1c13583dd9906 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_072fc8bf7447d0c663c1c13583dd9906 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_072fc8bf7447d0c663c1c13583dd9906 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_072fc8bf7447d0c663c1c13583dd9906, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_072fc8bf7447d0c663c1c13583dd9906->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_072fc8bf7447d0c663c1c13583dd9906, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_072fc8bf7447d0c663c1c13583dd9906,
        type_description_1,
        par_path_name,
        par_init_globals,
        par_run_name,
        var_pkg_name,
        var_importer,
        (int)var_is_NullImporter,
        var_code,
        var_fname,
        var_mod_name,
        var_mod_spec,
        var_temp_module,
        var_mod_globals
    );


    // Release cached frame.
    if ( frame_072fc8bf7447d0c663c1c13583dd9906 == cache_frame_072fc8bf7447d0c663c1c13583dd9906 )
    {
        Py_DECREF( frame_072fc8bf7447d0c663c1c13583dd9906 );
    }
    cache_frame_072fc8bf7447d0c663c1c13583dd9906 = NULL;

    assertFrameObject( frame_072fc8bf7447d0c663c1c13583dd9906 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_path_name );
    Py_DECREF( par_path_name );
    par_path_name = NULL;

    CHECK_OBJECT( (PyObject *)par_init_globals );
    Py_DECREF( par_init_globals );
    par_init_globals = NULL;

    CHECK_OBJECT( (PyObject *)par_run_name );
    Py_DECREF( par_run_name );
    par_run_name = NULL;

    CHECK_OBJECT( (PyObject *)var_pkg_name );
    Py_DECREF( var_pkg_name );
    var_pkg_name = NULL;

    CHECK_OBJECT( (PyObject *)var_importer );
    Py_DECREF( var_importer );
    var_importer = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_mod_name );
    var_mod_name = NULL;

    Py_XDECREF( var_mod_spec );
    var_mod_spec = NULL;

    Py_XDECREF( var_temp_module );
    var_temp_module = NULL;

    Py_XDECREF( var_mod_globals );
    var_mod_globals = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path_name );
    Py_DECREF( par_path_name );
    par_path_name = NULL;

    CHECK_OBJECT( (PyObject *)par_init_globals );
    Py_DECREF( par_init_globals );
    par_init_globals = NULL;

    CHECK_OBJECT( (PyObject *)par_run_name );
    Py_DECREF( par_run_name );
    par_run_name = NULL;

    Py_XDECREF( var_pkg_name );
    var_pkg_name = NULL;

    Py_XDECREF( var_importer );
    var_importer = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_mod_name );
    var_mod_name = NULL;

    Py_XDECREF( var_mod_spec );
    var_mod_spec = NULL;

    Py_XDECREF( var_temp_module );
    var_temp_module = NULL;

    Py_XDECREF( var_mod_globals );
    var_mod_globals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( runpy$$$function_14_run_path );
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



static PyObject *MAKE_FUNCTION_runpy$$$function_10__run_module_as_main( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_10__run_module_as_main,
        const_str_plain__run_module_as_main,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59727678f766fa0b3bd8590109ff52e6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        const_str_digest_e30909b0262560e6f0b594efd6576614,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_11_run_module( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_11_run_module,
        const_str_plain_run_module,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_751e2831ccadd49e70211cee39b3b830,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        const_str_digest_48fdf98e43c0245629546ebb16ea30ff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_12__get_main_module_details( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_12__get_main_module_details,
        const_str_plain__get_main_module_details,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2abe0636f9a05ddba82d743986c5044b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_13__get_code_from_file(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_13__get_code_from_file,
        const_str_plain__get_code_from_file,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c35cb8e4cab43793e7cc3a7d882561ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_14_run_path( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_14_run_path,
        const_str_plain_run_path,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_072fc8bf7447d0c663c1c13583dd9906,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        const_str_digest_4ec3a8ba39cf3befb64e691998ae0d76,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_ec89dfce7bd7431f070751cf63e11651,
#endif
        codeobj_0a352355d5ea2c4aed604fcaacce8d89,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_2___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_2___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_3d480548567d4e34014e302be9c8d9c8,
#endif
        codeobj_cb73eea32e1c2ab1c613a0cb0db31232,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_3___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_3___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_b1747dd27a65efd1995926e007b5b7b6,
#endif
        codeobj_411115b97531bc96338338b3f5a62f5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_01967ede29810c56c8d154fa1e1cdbea,
#endif
        codeobj_f2dcfba97aee75444c200da750e5dcc2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_5___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_5___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_0612de75f014b71ea10fce2870dd4bd0,
#endif
        codeobj_c77ba59ae73a48ec1f8944aab6312412,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_6___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_6___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_9e98ca2f6ab02cf1e5ec1c608e4365e4,
#endif
        codeobj_1c987b7057fd0d24fff561c3ba7380b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_7__run_code( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_7__run_code,
        const_str_plain__run_code,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e93fdf8e18ff942ec850dbad794d18bf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        const_str_digest_cfb1e6c603044c180c5a1a0f5dac47b7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_8__run_module_code( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_8__run_module_code,
        const_str_plain__run_module_code,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8ecf3e55229cbcf2ad032c461bcbed54,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        const_str_digest_63c15dee5511bbd456bbc1c0adde219a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_runpy$$$function_9__get_module_details( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_runpy$$$function_9__get_module_details,
        const_str_plain__get_module_details,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c50773cdc742872a58dac101a8af90f0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_runpy,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_runpy =
{
    PyModuleDef_HEAD_INIT,
    "runpy",
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

MOD_INIT_DECL( runpy )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_runpy );
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
    puts("runpy: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("runpy: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("runpy: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrunpy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_runpy = Py_InitModule4(
        "runpy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_runpy = PyModule_Create( &mdef_runpy );
#endif

    moduledict_runpy = MODULE_DICT( module_runpy );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_runpy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_runpy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_runpy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_runpy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_runpy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_runpy, module_runpy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_df1cffd86c3f4f4ffb2f991a345af148;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_runpy_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 = NULL;
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
    PyObject *locals_runpy_46 = NULL;
    struct Nuitka_FrameObject *frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 = NULL;
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
    PyObject *locals_runpy_160 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_0584a78b726907933d76fa2a97e9084d;
        UPDATE_STRING_DICT0( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_df1cffd86c3f4f4ffb2f991a345af148 = MAKE_MODULE_FRAME( codeobj_df1cffd86c3f4f4ffb2f991a345af148, module_runpy );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_df1cffd86c3f4f4ffb2f991a345af148 );
    assert( Py_REFCNT( frame_df1cffd86c3f4f4ffb2f991a345af148 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_runpy;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 13;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
        tmp_globals_name_2 = (PyObject *)moduledict_runpy;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e;
        tmp_globals_name_3 = (PyObject *)moduledict_runpy;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_types;
        tmp_globals_name_4 = (PyObject *)moduledict_runpy;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 16;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_pkgutil;
        tmp_globals_name_5 = (PyObject *)moduledict_runpy;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_read_code_str_plain_get_importer_tuple;
        tmp_level_name_5 = const_int_0;
        frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 17;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_read_code );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_read_code, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_importer );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_get_importer, tmp_assign_source_10 );
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_str_plain_run_module_str_plain_run_path_list );
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 23;

            goto try_except_handler_2;
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


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_2;
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


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
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


            exception_lineno = 23;

            goto try_except_handler_2;
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


            exception_lineno = 23;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_15;
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


                exception_lineno = 23;

                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = const_str_plain__TempModule;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 23;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
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


                exception_lineno = 23;

                goto try_except_handler_2;
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


                    exception_lineno = 23;

                    goto try_except_handler_2;
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

                    exception_lineno = 23;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 23;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 23;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_runpy_23 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_runpy;
        tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_980a96f456b0af3a23bcc3f64dadcb19;
        tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain__TempModule;
        tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2, codeobj_0af0b0b67ac0f1d5797eab9eb6cd0d53, module_runpy, sizeof(void *) );
        frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 = cache_frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_runpy$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_runpy$$$function_2___enter__(  );



        tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_runpy$$$function_3___exit__(  );



        tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 == cache_frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 )
        {
            Py_DECREF( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 );
        }
        cache_frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 = NULL;

        assertFrameObject( frame_0af0b0b67ac0f1d5797eab9eb6cd0d53_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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


                exception_lineno = 23;

                goto try_except_handler_4;
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
            tmp_res = PyObject_SetItem( locals_runpy_23, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain__TempModule;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_runpy_23;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 23;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_17 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_runpy_23 );
        locals_runpy_23 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF( locals_runpy_23 );
        locals_runpy_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
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
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 23;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__TempModule, tmp_assign_source_17 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_19 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
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


            exception_lineno = 46;

            goto try_except_handler_5;
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


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
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


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
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


            exception_lineno = 46;

            goto try_except_handler_5;
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


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
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


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            tmp_tuple_element_4 = const_str_plain__ModifiedArgv0;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 46;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_22;
        }
        {
            nuitka_bool tmp_condition_result_11;
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


                exception_lineno = 46;

                goto try_except_handler_5;
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
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_4;
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


                    exception_lineno = 46;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 46;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 46;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 46;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_23;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_runpy_46 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_runpy;
        tmp_res = PyObject_SetItem( locals_runpy_46, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain__ModifiedArgv0;
        tmp_res = PyObject_SetItem( locals_runpy_46, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3, codeobj_93fe1e41baad1e23eb5fa0c91fa2cdfd, module_runpy, sizeof(void *) );
        frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 = cache_frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_runpy$$$function_4___init__(  );



        tmp_res = PyObject_SetItem( locals_runpy_46, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_runpy$$$function_5___enter__(  );



        tmp_res = PyObject_SetItem( locals_runpy_46, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_runpy$$$function_6___exit__(  );



        tmp_res = PyObject_SetItem( locals_runpy_46, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 == cache_frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 )
        {
            Py_DECREF( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 );
        }
        cache_frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 = NULL;

        assertFrameObject( frame_93fe1e41baad1e23eb5fa0c91fa2cdfd_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_7;
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
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_runpy_46, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain__ModifiedArgv0;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_runpy_46;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 46;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_24 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_runpy_46 );
        locals_runpy_46 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF( locals_runpy_46 );
        locals_runpy_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 46;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__ModifiedArgv0, tmp_assign_source_24 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_26 = MAKE_FUNCTION_runpy$$$function_7__run_code( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_code, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_27 = MAKE_FUNCTION_runpy$$$function_8__run_module_code( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_module_code, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = PyExc_ImportError;
        tmp_defaults_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_7 );
        tmp_assign_source_28 = MAKE_FUNCTION_runpy$$$function_9__get_module_details( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_module_details, tmp_assign_source_28 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_29 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
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


            exception_lineno = 160;

            goto try_except_handler_8;
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


            exception_lineno = 160;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_8;
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


            exception_lineno = 160;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_8;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
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


            exception_lineno = 160;

            goto try_except_handler_8;
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


            exception_lineno = 160;

            goto try_except_handler_8;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;

                goto try_except_handler_8;
            }
            tmp_tuple_element_8 = const_str_plain__Error;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 160;
            tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_32;
        }
        {
            nuitka_bool tmp_condition_result_17;
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


                exception_lineno = 160;

                goto try_except_handler_8;
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
                PyObject *tmp_source_name_12;
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


                    exception_lineno = 160;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 160;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_9 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 160;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 160;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_33;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_runpy_160 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_runpy;
        tmp_res = PyObject_SetItem( locals_runpy_160, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_8ddca526c3394b6db39e649e33e40c5d;
        tmp_res = PyObject_SetItem( locals_runpy_160, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain__Error;
        tmp_res = PyObject_SetItem( locals_runpy_160, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto try_except_handler_10;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            tmp_compexpr_right_3 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;

                goto try_except_handler_10;
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
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_runpy_160, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = const_str_plain__Error;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_runpy_160;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame.f_lineno = 160;
            tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;

                goto try_except_handler_10;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_34 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_runpy_160 );
        locals_runpy_160 = NULL;
        goto try_return_handler_9;
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

        Py_DECREF( locals_runpy_160 );
        locals_runpy_160 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( runpy );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 160;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__Error, tmp_assign_source_34 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df1cffd86c3f4f4ffb2f991a345af148 );
#endif
    popFrameStack();

    assertFrameObject( frame_df1cffd86c3f4f4ffb2f991a345af148 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df1cffd86c3f4f4ffb2f991a345af148 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df1cffd86c3f4f4ffb2f991a345af148, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df1cffd86c3f4f4ffb2f991a345af148->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df1cffd86c3f4f4ffb2f991a345af148, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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

    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_36 = MAKE_FUNCTION_runpy$$$function_10__run_module_as_main( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__run_module_as_main, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_none_false_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_37 = MAKE_FUNCTION_runpy$$$function_11_run_module( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_run_module, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_6;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = PyExc_ImportError;
        tmp_defaults_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_6, 0, tmp_tuple_element_11 );
        tmp_assign_source_38 = MAKE_FUNCTION_runpy$$$function_12__get_main_module_details( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_main_module_details, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_runpy$$$function_13__get_code_from_file(  );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain__get_code_from_file, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_40 = MAKE_FUNCTION_runpy$$$function_14_run_path( tmp_defaults_7 );



        UPDATE_STRING_DICT1( moduledict_runpy, (Nuitka_StringObject *)const_str_plain_run_path, tmp_assign_source_40 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_runpy, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_runpy );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
