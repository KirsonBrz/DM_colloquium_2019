/* Generated code for Python module 'gzip'
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

/* The "_module_gzip" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gzip;
PyDictObject *moduledict_gzip;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_1d48a6fb5101ac2af73a4b882db8b200;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_c683d60756656ad7b1ffa9e862f20d81;
extern PyObject *const_str_plain_builtins;
extern PyObject *const_str_plain_i;
extern PyObject *const_int_pos_9;
static PyObject *const_str_digest_fd4d6e5464e9c877a68e93aa621bc02f;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_DEFAULT_BUFFER_SIZE;
extern PyObject *const_str_plain_mode;
extern PyObject *const_tuple_type_str_type_bytes_tuple;
static PyObject *const_str_plain_wbits;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_d9d4c7d73fe97720ca8a209cd99a15fa;
static PyObject *const_str_plain__size;
extern PyObject *const_str_plain_stdout;
static PyObject *const_str_digest_507ec5c749ddd1dcb87e1ff51ef09828;
static PyObject *const_str_digest_f5f447ce36bcb89832c4deaca29debe7;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain__write_gzip_header;
static PyObject *const_tuple_bytes_chr_255_tuple;
static PyObject *const_str_plain__rewind;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_closed;
static PyObject *const_str_digest_8f529768975ef83be890cff74c5c06f0;
static PyObject *const_str_digest_b50f7bcdaaa60a5e647862eef145d2b8;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_BytesIO;
static PyObject *const_str_plain_READ;
static PyObject *const_str_plain_FTEXT;
extern PyObject *const_str_plain__crc;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_decompress;
extern PyObject *const_str_plain_SEEK_CUR;
extern PyObject *const_str_plain_compress;
static PyObject *const_str_digest_7d51efa9846962ed7804db7c79a5d877;
extern PyObject *const_str_plain__decompressor;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_endswith;
static PyObject *const_bytes_chr_2;
extern PyObject *const_str_plain_zlib;
static PyObject *const_bytes_digest_c055bb7e12100f2a8b93095c81adde8a;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_unused_data;
extern PyObject *const_str_plain_False;
extern PyObject *const_int_pos_4294967295;
static PyObject *const_str_plain_gz_mode;
static PyObject *const_tuple_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230_tuple;
extern PyObject *const_str_plain_buf;
extern PyObject *const_int_0;
static PyObject *const_str_plain_rewind;
extern PyObject *const_str_plain_getvalue;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_ded11b5acf88407a56e3a63ca1fa0aba;
extern PyObject *const_tuple_str_plain_self_str_plain_filename_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_slice_int_neg_3_none_none;
static PyObject *const_str_plain__read_gzip_header;
static PyObject *const_tuple_tuple_str_plain_w_str_plain_a_str_plain_x_tuple_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_int_neg_3;
extern PyObject *const_str_plain_whence;
extern PyObject *const_str_plain_SEEK_SET;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_basename;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
static PyObject *const_str_digest_ebe4506926ad0a75ec7333eef3efb42e;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_digest_62b7e67e29e99420603c12d205222fa5;
extern PyObject *const_tuple_int_pos_1_int_pos_2_tuple;
extern PyObject *const_str_plain_read1;
static PyObject *const_str_plain__init_read;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_digest_b345f7ac08de941e36d960ec9fd0356a;
extern PyObject *const_tuple_int_pos_8_tuple;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_bufsize;
static PyObject *const_str_digest_a40e236eafe49d1a0232e93b1ce4a42a;
static PyObject *const_bytes_chr_255;
extern PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_none_none_int_pos_9_none_none_tuple;
extern PyObject *const_str_digest_cc451c23f2bbc7009e01c93c325b5d1f;
static PyObject *const_tuple_str_plain_self_str_plain_zlib_mode_tuple;
extern PyObject *const_str_plain_U;
static PyObject *const_str_plain__read_exact;
extern PyObject *const_str_plain__buffer;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_bc39400cfc47dff03c58d62ca8886627;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_unpack;
static PyObject *const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple;
static PyObject *const_tuple_64d11fb27928921799736dadb62ac835_tuple;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_plain_seekable;
static PyObject *const_str_digest_2df873ccc96f5eff49d0604cc047485b;
extern PyObject *const_str_plain_mtime;
static PyObject *const_tuple_str_plain_self_str_plain_prepend_tuple;
extern PyObject *const_str_plain_read;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_chr_62;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_cd1b59feb5ca64d50804cbc905f6903a;
extern PyObject *const_str_plain_eof;
static PyObject *const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_read_tuple;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_wb;
static PyObject *const_str_plain_FHCRC;
static PyObject *const_str_plain__init_write;
extern PyObject *const_str_plain__fp;
static PyObject *const_str_plain_WRITE;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_output_str_plain_value_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_w;
static PyObject *const_str_digest_9e3a2c9150d7a78b093b52f499c64f8a;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_digest_010b171cebd0e5a72e203b10c48dd28a;
static PyObject *const_str_plain_Z_SYNC_FLUSH;
static PyObject *const_str_digest_5489c98ed857c9bc9a044535b80853d9;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_digest_2c9a6d0408f9e7cd974fc9053eec73a9;
static PyObject *const_str_digest_55221f0f87b2a713e74b425a8a6beb9c;
extern PyObject *const_str_plain_crc32;
static PyObject *const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple;
extern PyObject *const_str_plain_decompressobj;
extern PyObject *const_tuple_int_pos_9_tuple;
static PyObject *const_str_digest_d3c02cb1022363190e8d82a5415f24f7;
static PyObject *const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_memoryview;
static PyObject *const_str_digest_8c2cc265e5e031d8146b4816a4604aa4;
static PyObject *const_str_digest_99884c2f3a409de0c100d75dc8bc597d;
static PyObject *const_str_plain_zlib_mode;
static PyObject *const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple;
static PyObject *const_str_digest_0bbc5b01dd1506f31a43a9f9d03d81c8;
static PyObject *const_str_digest_73e93c3cda23ba8c8b6b46d96c658799;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_af3f607ae1f8915f86e4fe788f53c537;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_gzip;
static PyObject *const_str_plain__decomp_factory;
static PyObject *const_str_digest_2fb228413e153fc8bd8fa9e655b8e10e;
static PyObject *const_str_plain__GzipReader;
extern PyObject *const_str_plain_DEFLATED;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
static PyObject *const_str_digest_721349ebe1c08c538b5702b22ed7a34b;
extern PyObject *const_str_plain_EBADF;
static PyObject *const_str_digest_14b723a4d45abf13c26e5cff567ec00d;
extern PyObject *const_str_plain_compressobj;
static PyObject *const_tuple_954ddf834f221733a1960658e81a0db4_tuple;
extern PyObject *const_list_str_chr_45_list;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_stdin;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_uncompress;
extern PyObject *const_str_plain_DEF_MEM_LEVEL;
extern PyObject *const_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230;
static PyObject *const_str_digest_97baed9f51ecb3a979a97b5fa521bd9e;
extern PyObject *const_str_plain_fname;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_empty;
extern PyObject *const_bytes_chr_8;
extern PyObject *const_str_plain_writable;
static PyObject *const_str_digest_c1ca5a5cb00de96d0a9cab7839084db9;
extern PyObject *const_str_plain_fspath;
extern PyObject *const_str_plain_nbytes;
static PyObject *const_str_digest_5093759f5c6cee26eb161be32e67a0e6;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple;
extern PyObject *const_str_plain_readline;
extern PyObject *const_str_plain_bytes;
static PyObject *const_str_digest_ed6a1af39e70a427eecf81704c325d4d;
extern PyObject *const_str_digest_ad5011e256ed9cce28d3209553d9f1ad;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_str_plain_self_str_plain_f_str_plain_prepend_tuple;
static PyObject *const_str_digest_3fd4992d777c75cc85a7b584c801c4e2;
extern PyObject *const_str_digest_123bbd2635909a086cc111a56aaafbbe;
extern PyObject *const_str_plain_flush;
static PyObject *const_str_digest_cdbda891257cf4d817685e634e5b6a9b;
extern PyObject *const_str_plain_argv;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_isize;
static PyObject *const_tuple_str_plain_self_str_plain_fileobj_str_plain_myfileobj_tuple;
static PyObject *const_str_plain_FCOMMENT;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_fileobj;
extern PyObject *const_str_plain__check_not_closed;
extern PyObject *const_str_plain_peek;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_4bc36ad682f0863b8fb24d582107c150;
static PyObject *const_str_digest_a519ecf129281b0200cd6bd94e3173dc;
static PyObject *const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple;
static PyObject *const_str_digest_6f23c6b429ba9fb4566d6343cd779109;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_d7e80602892fe61491dcaedaca1ac9bb;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_space;
static PyObject *const_str_digest_2518bbdb10b72c54ff72f8802a23c910;
static PyObject *const_str_plain_writebuf;
static PyObject *const_str_plain_prepend;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_c08d3c76ccca6caa2dd7388f9bece273;
extern PyObject *const_str_plain_binary_file;
extern PyObject *const_slice_none_int_neg_3_none;
static PyObject *const_tuple_str_plain_self_str_plain_fp_str_plain___class___tuple;
extern PyObject *const_tuple_bytes_chr_8_tuple;
extern PyObject *const_str_plain_off;
static PyObject *const_str_digest_f774b987a4e5c7651e538a1f2f5e414c;
static PyObject *const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple;
static PyObject *const_str_plain__write_mtime;
extern PyObject *const_str_plain_DecompressReader;
static PyObject *const_str_digest_9a22af416778dacd1acf671128158a03;
static PyObject *const_tuple_bytes_chr_2_tuple;
extern PyObject *const_str_plain__test;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_c;
static PyObject *const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_errno_tuple;
extern PyObject *const_str_plain_GzipFile;
static PyObject *const_tuple_3e506c55444521e4cca64556d064f284_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_f64c23fdc4ada36511f5614a82953819;
static PyObject *const_str_plain__add_read_data;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_chunk;
static PyObject *const_str_plain_FNAME;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_digest_662720bcb38208f53dc17ad51de4c080;
static PyObject *const_str_digest_b53027b74c77fdb312afc3fb372a9046;
static PyObject *const_str_digest_d3f17248b43733d42f1258cafab8d024;
static PyObject *const_str_digest_fe565e6413369aec87629a29480fa4ee;
static PyObject *const_str_digest_7476e1c9fcc0a3580311773a03a49f36;
static PyObject *const_str_digest_afc1d42fe40ca26cc004acadd028ee50;
extern PyObject *const_str_plain_BaseStream;
extern PyObject *const_tuple_bytes_empty_tuple;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_tuple_bytes_digest_c055bb7e12100f2a8b93095c81adde8a_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_off_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_tuple_str_plain_data_str_plain_f_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_BufferedReader;
extern PyObject *const_str_plain_crc;
static PyObject *const_str_digest_476455f6df319728bd2508cd3632b2f5;
extern PyObject *const_str_plain_offset;
static PyObject *const_tuple_int_pos_1024_tuple;
static PyObject *const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_myfileobj;
extern PyObject *const_slice_int_pos_1_int_neg_1_none;
extern PyObject *const_str_plain_a;
static PyObject *const_str_plain__decomp_args;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_PathLike;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_2342d309e32c54e92de843912d6412c2;
extern PyObject *const_int_pos_1024;
static PyObject *const_str_digest_a7519056af3aa02631cb2ba717c656c8;
extern PyObject *const_str_plain_fp;
static PyObject *const_str_plain__PaddedFile;
static PyObject *const_str_digest_ecd0774a4670a7ba90e45c76afc73051;
static PyObject *const_str_digest_2dda58fe3b44155f9b7b17eca9192d4a;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_MAX_WBITS;
static PyObject *const_str_plain__read_eof;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_ecf4adb5c97ebc35dc35bdb24ebd0e64;
static PyObject *const_str_plain_readall;
static PyObject *const_str_digest_4452f35ec03dcb8e120bbb577481a97d;
extern PyObject *const_str_plain__read;
extern PyObject *const_str_plain_rb;
extern PyObject *const_str_plain_readable;
static PyObject *const_list_5dc791a3e65b426c74c5f8c190e59446_list;
static PyObject *const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple;
static PyObject *const_str_digest_de8bc73e0d52d3bec326685b4554d5ca;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain__length;
static PyObject *const_str_digest_1cb15492b5bbee4014be15dc28863897;
extern PyObject *const_str_plain__pos;
static PyObject *const_str_plain__stream_size;
static PyObject *const_str_digest_a985426a75625d0a32350638e2089d24;
static PyObject *const_tuple_str_plain_self_str_plain_warnings_tuple;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
static PyObject *const_str_plain_write32u;
static PyObject *const_str_digest_cb763164d676bde22b4cf3bdad34d3d1;
extern PyObject *const_str_plain_unconsumed_tail;
extern PyObject *const_str_plain_magic;
static PyObject *const_str_digest_b1f43a0c6f96af0e2f5c82ee9a5db95d;
extern PyObject *const_tuple_str_plain_r_tuple;
extern PyObject *const_tuple_str_plain_t_str_empty_tuple;
extern PyObject *const_str_plain_newline;
static PyObject *const_str_digest_281838d0670255db6fba354454f6b69c;
extern PyObject *const_str_plain__compression;
static PyObject *const_str_plain__last_mtime;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_digest_0b59e9eda6581adeda65c1b9df6b0570;
static PyObject *const_str_digest_4038895cbadf47c82464156d3c7835ce;
extern PyObject *const_str_digest_bc486a037a449e2b7dabfebb98d77642;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_plain_extra_len;
static PyObject *const_str_plain__new_member;
static PyObject *const_tuple_str_plain__PaddedFile_tuple_empty_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_TextIOWrapper;
static PyObject *const_str_digest_e5faffb71219ee16a4a785a356a6a62a;
extern PyObject *const_tuple_str_plain_self_str_plain_size_tuple;
static PyObject *const_str_digest_8787da29b733d5c8fb75c44a756edfb5;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_FEXTRA;
static PyObject *const_str_digest_ef144fe144b7617e8884c4e9a18f5207;
extern PyObject *const_bytes_chr_0;
extern PyObject *const_tuple_str_plain_self_str_plain_s_tuple;
extern PyObject *const_str_plain_compresslevel;
extern PyObject *const_str_plain_file;
static PyObject *const_str_digest_ccaef012ca2eab02590e133da28f2780;
extern PyObject *const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_1d48a6fb5101ac2af73a4b882db8b200 = UNSTREAM_STRING_ASCII( &constant_bin[ 303530 ], 20, 0 );
    const_str_digest_c683d60756656ad7b1ffa9e862f20d81 = UNSTREAM_STRING_ASCII( &constant_bin[ 303550 ], 26, 0 );
    const_str_digest_fd4d6e5464e9c877a68e93aa621bc02f = UNSTREAM_STRING_ASCII( &constant_bin[ 303576 ], 23, 0 );
    const_str_plain_wbits = UNSTREAM_STRING_ASCII( &constant_bin[ 303599 ], 5, 1 );
    const_str_digest_d9d4c7d73fe97720ca8a209cd99a15fa = UNSTREAM_STRING_ASCII( &constant_bin[ 303604 ], 13, 0 );
    const_str_plain__size = UNSTREAM_STRING_ASCII( &constant_bin[ 17100 ], 5, 1 );
    const_str_digest_507ec5c749ddd1dcb87e1ff51ef09828 = UNSTREAM_STRING_ASCII( &constant_bin[ 303617 ], 20, 0 );
    const_str_digest_f5f447ce36bcb89832c4deaca29debe7 = UNSTREAM_STRING_ASCII( &constant_bin[ 303637 ], 16, 0 );
    const_str_plain__write_gzip_header = UNSTREAM_STRING_ASCII( &constant_bin[ 303653 ], 18, 1 );
    const_tuple_bytes_chr_255_tuple = PyTuple_New( 1 );
    const_bytes_chr_255 = UNSTREAM_BYTES( &constant_bin[ 207945 ], 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_255_tuple, 0, const_bytes_chr_255 ); Py_INCREF( const_bytes_chr_255 );
    const_str_plain__rewind = UNSTREAM_STRING_ASCII( &constant_bin[ 303671 ], 7, 1 );
    const_str_digest_8f529768975ef83be890cff74c5c06f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 303678 ], 7, 0 );
    const_str_digest_b50f7bcdaaa60a5e647862eef145d2b8 = UNSTREAM_STRING_ASCII( &constant_bin[ 303685 ], 17, 0 );
    const_str_plain_READ = UNSTREAM_STRING_ASCII( &constant_bin[ 303702 ], 4, 1 );
    const_str_plain_FTEXT = UNSTREAM_STRING_ASCII( &constant_bin[ 303706 ], 5, 1 );
    const_str_digest_7d51efa9846962ed7804db7c79a5d877 = UNSTREAM_STRING_ASCII( &constant_bin[ 303711 ], 780, 0 );
    const_bytes_chr_2 = UNSTREAM_BYTES( &constant_bin[ 2962 ], 1 );
    const_bytes_digest_c055bb7e12100f2a8b93095c81adde8a = UNSTREAM_BYTES( &constant_bin[ 304491 ], 3 );
    const_str_plain_gz_mode = UNSTREAM_STRING_ASCII( &constant_bin[ 304494 ], 7, 1 );
    const_tuple_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230_tuple, 0, const_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230 ); Py_INCREF( const_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230 );
    const_str_plain_rewind = UNSTREAM_STRING_ASCII( &constant_bin[ 303672 ], 6, 1 );
    const_str_digest_ded11b5acf88407a56e3a63ca1fa0aba = UNSTREAM_STRING_ASCII( &constant_bin[ 304501 ], 36, 0 );
    const_str_plain__read_gzip_header = UNSTREAM_STRING_ASCII( &constant_bin[ 304537 ], 17, 1 );
    const_tuple_tuple_str_plain_w_str_plain_a_str_plain_x_tuple_tuple = PyTuple_New( 1 );
    const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple, 0, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_tuple_str_plain_w_str_plain_a_str_plain_x_tuple_tuple, 0, const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple ); Py_INCREF( const_tuple_str_plain_w_str_plain_a_str_plain_x_tuple );
    const_str_digest_ebe4506926ad0a75ec7333eef3efb42e = UNSTREAM_STRING_ASCII( &constant_bin[ 304554 ], 33, 0 );
    const_str_plain__init_read = UNSTREAM_STRING_ASCII( &constant_bin[ 304587 ], 10, 1 );
    const_str_digest_a40e236eafe49d1a0232e93b1ce4a42a = UNSTREAM_STRING_ASCII( &constant_bin[ 304597 ], 165, 0 );
    const_tuple_none_none_int_pos_9_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_9_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_9_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_9_none_none_tuple, 2, const_int_pos_9 ); Py_INCREF( const_int_pos_9 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_9_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_9_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_str_plain_zlib_mode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_zlib_mode_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_zlib_mode = UNSTREAM_STRING_ASCII( &constant_bin[ 304762 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_zlib_mode_tuple, 1, const_str_plain_zlib_mode ); Py_INCREF( const_str_plain_zlib_mode );
    const_str_plain__read_exact = UNSTREAM_STRING_ASCII( &constant_bin[ 304771 ], 11, 1 );
    const_str_digest_bc39400cfc47dff03c58d62ca8886627 = UNSTREAM_STRING_ASCII( &constant_bin[ 304782 ], 19, 0 );
    const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 2, const_str_plain_compresslevel ); Py_INCREF( const_str_plain_compresslevel );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 3, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 4, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 5, const_str_plain_newline ); Py_INCREF( const_str_plain_newline );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 6, const_str_plain_gz_mode ); Py_INCREF( const_str_plain_gz_mode );
    PyTuple_SET_ITEM( const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 7, const_str_plain_binary_file ); Py_INCREF( const_str_plain_binary_file );
    const_tuple_64d11fb27928921799736dadb62ac835_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_64d11fb27928921799736dadb62ac835_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_64d11fb27928921799736dadb62ac835_tuple, 1, const_str_plain_compresslevel ); Py_INCREF( const_str_plain_compresslevel );
    PyTuple_SET_ITEM( const_tuple_64d11fb27928921799736dadb62ac835_tuple, 2, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_64d11fb27928921799736dadb62ac835_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_2df873ccc96f5eff49d0604cc047485b = UNSTREAM_STRING_ASCII( &constant_bin[ 304801 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_prepend_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_prepend_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_prepend = UNSTREAM_STRING_ASCII( &constant_bin[ 238252 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_prepend_tuple, 1, const_str_plain_prepend ); Py_INCREF( const_str_plain_prepend );
    const_str_digest_cd1b59feb5ca64d50804cbc905f6903a = UNSTREAM_STRING_ASCII( &constant_bin[ 304815 ], 22, 0 );
    const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple, 2, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple, 3, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple, 4, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    const_tuple_str_plain_self_str_plain_size_str_plain_read_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_read_tuple, 2, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    const_str_plain_FHCRC = UNSTREAM_STRING_ASCII( &constant_bin[ 304837 ], 5, 1 );
    const_str_plain__init_write = UNSTREAM_STRING_ASCII( &constant_bin[ 304842 ], 11, 1 );
    const_str_plain_WRITE = UNSTREAM_STRING_ASCII( &constant_bin[ 304853 ], 5, 1 );
    const_tuple_str_plain_output_str_plain_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_output_str_plain_value_tuple, 0, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_str_plain_output_str_plain_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_9e3a2c9150d7a78b093b52f499c64f8a = UNSTREAM_STRING_ASCII( &constant_bin[ 304858 ], 91, 0 );
    const_str_plain_Z_SYNC_FLUSH = UNSTREAM_STRING_ASCII( &constant_bin[ 304949 ], 12, 1 );
    const_str_digest_5489c98ed857c9bc9a044535b80853d9 = UNSTREAM_STRING_ASCII( &constant_bin[ 304961 ], 28, 0 );
    const_str_digest_55221f0f87b2a713e74b425a8a6beb9c = UNSTREAM_STRING_ASCII( &constant_bin[ 304989 ], 26, 0 );
    const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 1, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 2, const_str_plain_whence ); Py_INCREF( const_str_plain_whence );
    PyTuple_SET_ITEM( const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 3, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 4, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    PyTuple_SET_ITEM( const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_d3c02cb1022363190e8d82a5415f24f7 = UNSTREAM_STRING_ASCII( &constant_bin[ 305015 ], 14, 0 );
    const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 1, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 3, const_str_plain_compresslevel ); Py_INCREF( const_str_plain_compresslevel );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 4, const_str_plain_fileobj ); Py_INCREF( const_str_plain_fileobj );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 5, const_str_plain_mtime ); Py_INCREF( const_str_plain_mtime );
    PyTuple_SET_ITEM( const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 6, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_digest_8c2cc265e5e031d8146b4816a4604aa4 = UNSTREAM_STRING_ASCII( &constant_bin[ 305029 ], 22, 0 );
    const_str_digest_99884c2f3a409de0c100d75dc8bc597d = UNSTREAM_STRING_ASCII( &constant_bin[ 305051 ], 89, 0 );
    const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple, 1, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple, 2, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple, 3, const_str_plain_mtime ); Py_INCREF( const_str_plain_mtime );
    const_str_digest_0bbc5b01dd1506f31a43a9f9d03d81c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 305140 ], 13, 0 );
    const_str_digest_73e93c3cda23ba8c8b6b46d96c658799 = UNSTREAM_STRING_ASCII( &constant_bin[ 305153 ], 48, 0 );
    const_str_digest_af3f607ae1f8915f86e4fe788f53c537 = UNSTREAM_STRING_ASCII( &constant_bin[ 305201 ], 14, 0 );
    const_str_plain__decomp_factory = UNSTREAM_STRING_ASCII( &constant_bin[ 305215 ], 15, 1 );
    const_str_digest_2fb228413e153fc8bd8fa9e655b8e10e = UNSTREAM_STRING_ASCII( &constant_bin[ 305230 ], 13, 0 );
    const_str_plain__GzipReader = UNSTREAM_STRING_ASCII( &constant_bin[ 303550 ], 11, 1 );
    const_str_digest_721349ebe1c08c538b5702b22ed7a34b = UNSTREAM_STRING_ASCII( &constant_bin[ 305243 ], 17, 0 );
    const_str_digest_14b723a4d45abf13c26e5cff567ec00d = UNSTREAM_STRING_ASCII( &constant_bin[ 305260 ], 49, 0 );
    const_tuple_954ddf834f221733a1960658e81a0db4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_954ddf834f221733a1960658e81a0db4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_954ddf834f221733a1960658e81a0db4_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_954ddf834f221733a1960658e81a0db4_tuple, 2, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_plain_uncompress = UNSTREAM_STRING_ASCII( &constant_bin[ 304869 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_954ddf834f221733a1960658e81a0db4_tuple, 3, const_str_plain_uncompress ); Py_INCREF( const_str_plain_uncompress );
    const_str_digest_97baed9f51ecb3a979a97b5fa521bd9e = UNSTREAM_STRING_ASCII( &constant_bin[ 305309 ], 14, 0 );
    const_str_digest_c1ca5a5cb00de96d0a9cab7839084db9 = UNSTREAM_STRING_ASCII( &constant_bin[ 305323 ], 6, 0 );
    const_str_digest_5093759f5c6cee26eb161be32e67a0e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 305329 ], 170, 0 );
    const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple, 2, const_str_plain_errno ); Py_INCREF( const_str_plain_errno );
    const_str_digest_ed6a1af39e70a427eecf81704c325d4d = UNSTREAM_STRING_ASCII( &constant_bin[ 305499 ], 1607, 0 );
    const_tuple_str_plain_self_str_plain_f_str_plain_prepend_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_f_str_plain_prepend_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_f_str_plain_prepend_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_f_str_plain_prepend_tuple, 2, const_str_plain_prepend ); Py_INCREF( const_str_plain_prepend );
    const_str_digest_3fd4992d777c75cc85a7b584c801c4e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 307106 ], 15, 0 );
    const_str_digest_cdbda891257cf4d817685e634e5b6a9b = UNSTREAM_STRING_ASCII( &constant_bin[ 307121 ], 6, 0 );
    const_str_plain_isize = UNSTREAM_STRING_ASCII( &constant_bin[ 307127 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_fileobj_str_plain_myfileobj_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fileobj_str_plain_myfileobj_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fileobj_str_plain_myfileobj_tuple, 1, const_str_plain_fileobj ); Py_INCREF( const_str_plain_fileobj );
    const_str_plain_myfileobj = UNSTREAM_STRING_ASCII( &constant_bin[ 307132 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fileobj_str_plain_myfileobj_tuple, 2, const_str_plain_myfileobj ); Py_INCREF( const_str_plain_myfileobj );
    const_str_plain_FCOMMENT = UNSTREAM_STRING_ASCII( &constant_bin[ 307141 ], 8, 1 );
    const_str_digest_4bc36ad682f0863b8fb24d582107c150 = UNSTREAM_STRING_ASCII( &constant_bin[ 307149 ], 149, 0 );
    const_str_digest_a519ecf129281b0200cd6bd94e3173dc = UNSTREAM_STRING_ASCII( &constant_bin[ 307298 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple, 1, const_str_plain_crc32 ); Py_INCREF( const_str_plain_crc32 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple, 2, const_str_plain_isize ); Py_INCREF( const_str_plain_isize );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple, 3, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_digest_6f23c6b429ba9fb4566d6343cd779109 = UNSTREAM_STRING_ASCII( &constant_bin[ 307312 ], 100, 0 );
    const_str_digest_d7e80602892fe61491dcaedaca1ac9bb = UNSTREAM_STRING_ASCII( &constant_bin[ 307412 ], 17, 0 );
    const_str_digest_2518bbdb10b72c54ff72f8802a23c910 = UNSTREAM_STRING_ASCII( &constant_bin[ 307429 ], 266, 0 );
    const_str_plain_writebuf = UNSTREAM_STRING_ASCII( &constant_bin[ 307695 ], 8, 1 );
    const_str_digest_c08d3c76ccca6caa2dd7388f9bece273 = UNSTREAM_STRING_ASCII( &constant_bin[ 307703 ], 65, 0 );
    const_tuple_str_plain_self_str_plain_fp_str_plain___class___tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fp_str_plain___class___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fp_str_plain___class___tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fp_str_plain___class___tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_f774b987a4e5c7651e538a1f2f5e414c = UNSTREAM_STRING_ASCII( &constant_bin[ 307768 ], 25, 0 );
    const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 1, const_str_plain_magic ); Py_INCREF( const_str_plain_magic );
    PyTuple_SET_ITEM( const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 3, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_str_plain_extra_len = UNSTREAM_STRING_ASCII( &constant_bin[ 307793 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 4, const_str_plain_extra_len ); Py_INCREF( const_str_plain_extra_len );
    PyTuple_SET_ITEM( const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain__write_mtime = UNSTREAM_STRING_ASCII( &constant_bin[ 307802 ], 12, 1 );
    const_str_digest_9a22af416778dacd1acf671128158a03 = UNSTREAM_STRING_ASCII( &constant_bin[ 305309 ], 13, 0 );
    const_tuple_bytes_chr_2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_2_tuple, 0, const_bytes_chr_2 ); Py_INCREF( const_bytes_chr_2 );
    const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple, 0, const_str_plain_rb ); Py_INCREF( const_str_plain_rb );
    PyTuple_SET_ITEM( const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple, 1, const_int_pos_9 ); Py_INCREF( const_int_pos_9 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_str_plain_n_str_plain_errno_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_errno_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_errno_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_errno_tuple, 2, const_str_plain_errno ); Py_INCREF( const_str_plain_errno );
    const_tuple_3e506c55444521e4cca64556d064f284_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3e506c55444521e4cca64556d064f284_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3e506c55444521e4cca64556d064f284_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_3e506c55444521e4cca64556d064f284_tuple, 2, const_str_plain_errno ); Py_INCREF( const_str_plain_errno );
    PyTuple_SET_ITEM( const_tuple_3e506c55444521e4cca64556d064f284_tuple, 3, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_digest_f64c23fdc4ada36511f5614a82953819 = UNSTREAM_STRING_ASCII( &constant_bin[ 307814 ], 15, 0 );
    const_str_plain__add_read_data = UNSTREAM_STRING_ASCII( &constant_bin[ 303562 ], 14, 1 );
    const_str_plain_FNAME = UNSTREAM_STRING_ASCII( &constant_bin[ 307829 ], 5, 1 );
    const_str_digest_b53027b74c77fdb312afc3fb372a9046 = UNSTREAM_STRING_ASCII( &constant_bin[ 307834 ], 19, 0 );
    const_str_digest_d3f17248b43733d42f1258cafab8d024 = UNSTREAM_STRING_ASCII( &constant_bin[ 307853 ], 36, 0 );
    const_str_digest_fe565e6413369aec87629a29480fa4ee = UNSTREAM_STRING_ASCII( &constant_bin[ 307889 ], 33, 0 );
    const_str_digest_7476e1c9fcc0a3580311773a03a49f36 = UNSTREAM_STRING_ASCII( &constant_bin[ 307922 ], 27, 0 );
    const_str_digest_afc1d42fe40ca26cc004acadd028ee50 = UNSTREAM_STRING_ASCII( &constant_bin[ 307949 ], 17, 0 );
    const_tuple_bytes_digest_c055bb7e12100f2a8b93095c81adde8a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_digest_c055bb7e12100f2a8b93095c81adde8a_tuple, 0, const_bytes_digest_c055bb7e12100f2a8b93095c81adde8a ); Py_INCREF( const_bytes_digest_c055bb7e12100f2a8b93095c81adde8a );
    const_tuple_str_plain_data_str_plain_f_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_f_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_f_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_476455f6df319728bd2508cd3632b2f5 = UNSTREAM_STRING_ASCII( &constant_bin[ 307966 ], 16, 0 );
    const_tuple_int_pos_1024_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1024_tuple, 0, const_int_pos_1024 ); Py_INCREF( const_int_pos_1024 );
    const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 1, const_str_plain_decompress ); Py_INCREF( const_str_plain_decompress );
    PyTuple_SET_ITEM( const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 2, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 4, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 5, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    const_str_plain__decomp_args = UNSTREAM_STRING_ASCII( &constant_bin[ 307982 ], 12, 1 );
    const_str_digest_2342d309e32c54e92de843912d6412c2 = UNSTREAM_STRING_ASCII( &constant_bin[ 307994 ], 145, 0 );
    const_str_digest_a7519056af3aa02631cb2ba717c656c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 308139 ], 23, 0 );
    const_str_plain__PaddedFile = UNSTREAM_STRING_ASCII( &constant_bin[ 303530 ], 11, 1 );
    const_str_digest_ecd0774a4670a7ba90e45c76afc73051 = UNSTREAM_STRING_ASCII( &constant_bin[ 308162 ], 21, 0 );
    const_str_digest_2dda58fe3b44155f9b7b17eca9192d4a = UNSTREAM_STRING_ASCII( &constant_bin[ 308183 ], 36, 0 );
    const_str_plain__read_eof = UNSTREAM_STRING_ASCII( &constant_bin[ 308174 ], 9, 1 );
    const_str_digest_ecf4adb5c97ebc35dc35bdb24ebd0e64 = UNSTREAM_STRING_ASCII( &constant_bin[ 308219 ], 16, 0 );
    const_str_plain_readall = UNSTREAM_STRING_ASCII( &constant_bin[ 308235 ], 7, 1 );
    const_str_digest_4452f35ec03dcb8e120bbb577481a97d = UNSTREAM_STRING_ASCII( &constant_bin[ 308242 ], 20, 0 );
    const_list_5dc791a3e65b426c74c5f8c190e59446_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_5dc791a3e65b426c74c5f8c190e59446_list, 0, const_str_plain_GzipFile ); Py_INCREF( const_str_plain_GzipFile );
    PyList_SET_ITEM( const_list_5dc791a3e65b426c74c5f8c190e59446_list, 1, const_str_plain_open ); Py_INCREF( const_str_plain_open );
    PyList_SET_ITEM( const_list_5dc791a3e65b426c74c5f8c190e59446_list, 2, const_str_plain_compress ); Py_INCREF( const_str_plain_compress );
    PyList_SET_ITEM( const_list_5dc791a3e65b426c74c5f8c190e59446_list, 3, const_str_plain_decompress ); Py_INCREF( const_str_plain_decompress );
    const_str_digest_de8bc73e0d52d3bec326685b4554d5ca = UNSTREAM_STRING_ASCII( &constant_bin[ 308262 ], 27, 0 );
    const_str_plain__length = UNSTREAM_STRING_ASCII( &constant_bin[ 9541 ], 7, 1 );
    const_str_digest_1cb15492b5bbee4014be15dc28863897 = UNSTREAM_STRING_ASCII( &constant_bin[ 308289 ], 129, 0 );
    const_str_plain__stream_size = UNSTREAM_STRING_ASCII( &constant_bin[ 308418 ], 12, 1 );
    const_str_digest_a985426a75625d0a32350638e2089d24 = UNSTREAM_STRING_ASCII( &constant_bin[ 308430 ], 17, 0 );
    const_tuple_str_plain_self_str_plain_warnings_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_warnings_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_warnings_tuple, 1, const_str_plain_warnings ); Py_INCREF( const_str_plain_warnings );
    const_str_plain_write32u = UNSTREAM_STRING_ASCII( &constant_bin[ 308447 ], 8, 1 );
    const_str_digest_cb763164d676bde22b4cf3bdad34d3d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 308455 ], 29, 0 );
    const_str_digest_b1f43a0c6f96af0e2f5c82ee9a5db95d = UNSTREAM_STRING_ASCII( &constant_bin[ 308484 ], 15, 0 );
    const_str_digest_281838d0670255db6fba354454f6b69c = UNSTREAM_STRING_ASCII( &constant_bin[ 308499 ], 17, 0 );
    const_str_plain__last_mtime = UNSTREAM_STRING_ASCII( &constant_bin[ 308516 ], 11, 1 );
    const_str_digest_4038895cbadf47c82464156d3c7835ce = UNSTREAM_STRING_ASCII( &constant_bin[ 308527 ], 17, 0 );
    const_str_plain__new_member = UNSTREAM_STRING_ASCII( &constant_bin[ 308544 ], 11, 1 );
    const_tuple_str_plain__PaddedFile_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__PaddedFile_tuple_empty_tuple, 0, const_str_plain__PaddedFile ); Py_INCREF( const_str_plain__PaddedFile );
    PyTuple_SET_ITEM( const_tuple_str_plain__PaddedFile_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_e5faffb71219ee16a4a785a356a6a62a = UNSTREAM_STRING_ASCII( &constant_bin[ 308555 ], 26, 0 );
    const_str_digest_8787da29b733d5c8fb75c44a756edfb5 = UNSTREAM_STRING_ASCII( &constant_bin[ 308581 ], 37, 0 );
    const_str_plain_FEXTRA = UNSTREAM_STRING_ASCII( &constant_bin[ 308618 ], 6, 1 );
    const_str_digest_ef144fe144b7617e8884c4e9a18f5207 = UNSTREAM_STRING_ASCII( &constant_bin[ 308624 ], 20, 0 );
    const_str_digest_ccaef012ca2eab02590e133da28f2780 = UNSTREAM_STRING_ASCII( &constant_bin[ 308644 ], 27, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gzip( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a439a13d3c843e867b23e1ad43930e43;
static PyCodeObject *codeobj_e3d20e84660fb56a09dba201d0a4af5b;
static PyCodeObject *codeobj_88e58d67c3146b12020d7e5a415ae72c;
static PyCodeObject *codeobj_2a75f4fa55c074abcc457a1a6d21d309;
static PyCodeObject *codeobj_52a1fe8d123b4457c4eadce6d8e418ed;
static PyCodeObject *codeobj_10ec0a116de16decccf28d1f99c732e1;
static PyCodeObject *codeobj_93f3cd247b066ee3c98ab925c4f358bf;
static PyCodeObject *codeobj_e439250a42fd6f8c0163427bd52fdb68;
static PyCodeObject *codeobj_dd3f06b844d7a1a28782fca8d141a363;
static PyCodeObject *codeobj_f61eaabdf6de7394344208f688deb61e;
static PyCodeObject *codeobj_af14b68f5bd8086a3f50a7a92f8430f9;
static PyCodeObject *codeobj_6187a10ac4c16f09342d387c9cc7d5ab;
static PyCodeObject *codeobj_feefe0dbab19359a89f2be8b8fec2471;
static PyCodeObject *codeobj_1c934b938b8c30606154125a9e895ad2;
static PyCodeObject *codeobj_f6b840a48db8107bfc99896d1e352ec8;
static PyCodeObject *codeobj_748b7c3cbd0a90d1179da71e9b127881;
static PyCodeObject *codeobj_5d99d60d2539691dedd64cddecbd8a56;
static PyCodeObject *codeobj_a37831451fe077ed61f4fe6d9629048c;
static PyCodeObject *codeobj_76faa3e7f32910667437d04e1be6f910;
static PyCodeObject *codeobj_610489d2892837cfb463076fc9b95151;
static PyCodeObject *codeobj_1640d49a2b53890467b396c981b1544a;
static PyCodeObject *codeobj_537739937fe61453f0eb2593e09f658d;
static PyCodeObject *codeobj_61b09b2c4ae4a5d053729970633863c5;
static PyCodeObject *codeobj_feca9daa9f6449221de8f905adb706c5;
static PyCodeObject *codeobj_6e531d4905f56a3551164bd36a11b2ec;
static PyCodeObject *codeobj_196c7abbd8fb3cd638c7889e72376534;
static PyCodeObject *codeobj_29132b79f485f8f16fbf4050783aa0ce;
static PyCodeObject *codeobj_7e60472ef9c9f358b339b000d97d8b49;
static PyCodeObject *codeobj_c7b4c04344c1e9ed74cc24a25f3bde54;
static PyCodeObject *codeobj_f0b56f989e02044b01b4ac449ef8123f;
static PyCodeObject *codeobj_480dc5126a3e8c71e8743f282b8b4572;
static PyCodeObject *codeobj_8fd4bbb1f32ee68c0a20a5cde2385bef;
static PyCodeObject *codeobj_c5b9848dd3732d55a5110b2440c1fb1b;
static PyCodeObject *codeobj_a87ab59ccd3737a53a033e93f27b14de;
static PyCodeObject *codeobj_bd371212580519ad8048c9b2dcd0207d;
static PyCodeObject *codeobj_7be37042d93b2cfa6f7dd12ca00ec2da;
static PyCodeObject *codeobj_8eaa5ea2b0bebc90542a42e896baae1e;
static PyCodeObject *codeobj_8a357a634121f3e053ae6e9656c9af5a;
static PyCodeObject *codeobj_90351ab63518e83b03fe4f3deb581d4c;
static PyCodeObject *codeobj_103a26311ce21f1ae6010ac8c1f6b70a;
static PyCodeObject *codeobj_97ab36f640362cc264bd5698e42e641c;
static PyCodeObject *codeobj_08312f9c77ac976824f5718278c49116;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8f529768975ef83be890cff74c5c06f0 );
    codeobj_a439a13d3c843e867b23e1ad43930e43 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0bbc5b01dd1506f31a43a9f9d03d81c8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e3d20e84660fb56a09dba201d0a4af5b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GzipFile, 110, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_88e58d67c3146b12020d7e5a415ae72c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__GzipReader, 377, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2a75f4fa55c074abcc457a1a6d21d309 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__PaddedFile, 69, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_52a1fe8d123b4457c4eadce6d8e418ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 74, const_tuple_str_plain_self_str_plain_f_str_plain_prepend_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10ec0a116de16decccf28d1f99c732e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 123, const_tuple_6775214a8bc1707fa309ed5ef11e5975_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93f3cd247b066ee3c98ab925c4f358bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 378, const_tuple_str_plain_self_str_plain_fp_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e439250a42fd6f8c0163427bd52fdb68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 209, const_tuple_str_plain_self_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd3f06b844d7a1a28782fca8d141a363 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__add_read_data, 489, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f61eaabdf6de7394344208f688deb61e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init_read, 385, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af14b68f5bd8086a3f50a7a92f8430f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init_write, 213, const_tuple_str_plain_self_str_plain_filename_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6187a10ac4c16f09342d387c9cc7d5ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_eof, 493, const_tuple_str_plain_self_str_plain_crc32_str_plain_isize_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_feefe0dbab19359a89f2be8b8fec2471 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_exact, 389, const_tuple_str_plain_self_str_plain_n_str_plain_data_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c934b938b8c30606154125a9e895ad2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_gzip_header, 405, const_tuple_640d97b304b66ec483a376e6fcb0265d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6b840a48db8107bfc99896d1e352ec8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rewind, 514, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_748b7c3cbd0a90d1179da71e9b127881 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__test, 535, const_tuple_0fa8b6de8bca3fbd7da2e49f8d514934_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5d99d60d2539691dedd64cddecbd8a56 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__write_gzip_header, 221, const_tuple_1d3d63be8a898e0df2fe0fda0324920d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a37831451fe077ed61f4fe6d9629048c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 302, const_tuple_str_plain_self_str_plain_fileobj_str_plain_myfileobj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_76faa3e7f32910667437d04e1be6f910 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_closed, 298, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_610489d2892837cfb463076fc9b95151 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compress, 518, const_tuple_64d11fb27928921799736dadb62ac835_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1640d49a2b53890467b396c981b1544a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decompress, 527, const_tuple_str_plain_data_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_537739937fe61453f0eb2593e09f658d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filename, 196, const_tuple_str_plain_self_str_plain_warnings_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_61b09b2c4ae4a5d053729970633863c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fileno, 328, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_feca9daa9f6449221de8f905adb706c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 321, const_tuple_str_plain_self_str_plain_zlib_mode_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6e531d4905f56a3551164bd36a11b2ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mtime, 204, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_196c7abbd8fb3cd638c7889e72376534 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 20, const_tuple_4d8f9ccdf9cca73d5329015391eb951d_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29132b79f485f8f16fbf4050783aa0ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_peek, 291, const_tuple_str_plain_self_str_plain_n_str_plain_errno_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e60472ef9c9f358b339b000d97d8b49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prepend, 93, const_tuple_str_plain_self_str_plain_prepend_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c7b4c04344c1e9ed74cc24a25f3bde54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 80, const_tuple_str_plain_self_str_plain_size_str_plain_read_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f0b56f989e02044b01b4ac449ef8123f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 271, const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_480dc5126a3e8c71e8743f282b8b4572 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 438, const_tuple_954ddf834f221733a1960658e81a0db4_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8fd4bbb1f32ee68c0a20a5cde2385bef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read1, 278, const_tuple_str_plain_self_str_plain_size_str_plain_errno_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5b9848dd3732d55a5110b2440c1fb1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readable, 343, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a87ab59ccd3737a53a033e93f27b14de = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readline, 372, const_tuple_str_plain_self_str_plain_size_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd371212580519ad8048c9b2dcd0207d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rewind, 336, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7be37042d93b2cfa6f7dd12ca00ec2da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_seek, 102, const_tuple_str_plain_self_str_plain_off_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8eaa5ea2b0bebc90542a42e896baae1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_seek, 352, const_tuple_0287e0a9327a7d050fc057b5a924db1d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8a357a634121f3e053ae6e9656c9af5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_seekable, 107, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90351ab63518e83b03fe4f3deb581d4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_seekable, 349, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_103a26311ce21f1ae6010ac8c1f6b70a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_writable, 346, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_97ab36f640362cc264bd5698e42e641c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 247, const_tuple_3e506c55444521e4cca64556d064f284_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_08312f9c77ac976824f5718278c49116 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write32u, 64, const_tuple_str_plain_output_str_plain_value_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_gzip$$$function_10_mtime(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_11___repr__(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_12__init_write(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_13__write_gzip_header(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_14_write(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_15_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_16_read1( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_17_peek(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_18_closed(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_19_close(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_1_open( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_20_flush( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_21_fileno(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_22_rewind(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_23_readable(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_24_writable(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_25_seekable(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_26_seek( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_27_readline( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_28___init__(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_29__init_read(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_2_write32u(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_30__read_exact(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_31__read_gzip_header(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_32_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_33__add_read_data(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_34__read_eof(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_35__rewind(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_36_compress( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_37_decompress(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_38__test(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_3___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_4_read(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_5_prepend( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_6_seek(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_7_seekable(  );


static PyObject *MAKE_FUNCTION_gzip$$$function_8___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gzip$$$function_9_filename(  );


// The module function definitions.
static PyObject *impl_gzip$$$function_1_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *par_compresslevel = python_pars[ 2 ];
    PyObject *par_encoding = python_pars[ 3 ];
    PyObject *par_errors = python_pars[ 4 ];
    PyObject *par_newline = python_pars[ 5 ];
    PyObject *var_gz_mode = NULL;
    PyObject *var_binary_file = NULL;
    struct Nuitka_FrameObject *frame_196c7abbd8fb3cd638c7889e72376534;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_196c7abbd8fb3cd638c7889e72376534 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_196c7abbd8fb3cd638c7889e72376534, codeobj_196c7abbd8fb3cd638c7889e72376534, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_196c7abbd8fb3cd638c7889e72376534 = cache_frame_196c7abbd8fb3cd638c7889e72376534;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_196c7abbd8fb3cd638c7889e72376534 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_196c7abbd8fb3cd638c7889e72376534 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_t;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_right_1 = par_mode;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oooooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = const_str_plain_b;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_right_2 = par_mode;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                tmp_left_name_1 = const_str_digest_2c9a6d0408f9e7cd974fc9053eec73a9;
                CHECK_OBJECT( par_mode );
                tmp_tuple_element_1 = par_mode;
                tmp_right_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 42;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 42;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 42;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_encoding );
            tmp_compexpr_left_3 = par_encoding;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_0b59e9eda6581adeda65c1b9df6b0570;
                frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 45;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 45;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_errors );
            tmp_compexpr_left_4 = par_errors;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_bc486a037a449e2b7dabfebb98d77642;
                frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 47;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 47;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_newline );
            tmp_compexpr_left_5 = par_newline;
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_5 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                tmp_make_exception_arg_4 = const_str_digest_010b171cebd0e5a72e203b10c48dd28a;
                frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 49;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 49;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_mode );
        tmp_called_instance_1 = par_mode;
        frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 51;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_plain_t_str_empty_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_gz_mode == NULL );
        var_gz_mode = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_filename );
        tmp_isinstance_inst_1 = par_filename;
        tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
        tmp_isinstance_cls_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = (PyObject *)&PyBytes_Type;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_2 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PathLike );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_isinstance_cls_1 );

            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_2 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
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
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipFile );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipFile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_1 = par_filename;
            CHECK_OBJECT( var_gz_mode );
            tmp_args_element_name_2 = var_gz_mode;
            CHECK_OBJECT( par_compresslevel );
            tmp_args_element_name_3 = par_compresslevel;
            frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_binary_file == NULL );
            var_binary_file = tmp_assign_source_2;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_attribute_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_name_2;
            CHECK_OBJECT( par_filename );
            tmp_source_name_2 = par_filename;
            tmp_attribute_name_1 = const_str_plain_read;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oooooooo";
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
            CHECK_OBJECT( par_filename );
            tmp_source_name_3 = par_filename;
            tmp_attribute_name_2 = const_str_plain_write;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_3, tmp_attribute_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_7 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_7 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipFile );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipFile" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 55;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                tmp_args_element_name_4 = Py_None;
                CHECK_OBJECT( var_gz_mode );
                tmp_args_element_name_5 = var_gz_mode;
                CHECK_OBJECT( par_compresslevel );
                tmp_args_element_name_6 = par_compresslevel;
                CHECK_OBJECT( par_filename );
                tmp_args_element_name_7 = par_filename;
                frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 55;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_binary_file == NULL );
                var_binary_file = tmp_assign_source_3;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_make_exception_arg_5;
                tmp_make_exception_arg_5 = const_str_digest_14b723a4d45abf13c26e5cff567ec00d;
                frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 57;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_5 };
                    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_5 == NULL) );
                exception_type = tmp_raise_type_5;
                exception_lineno = 57;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_7:;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = const_str_plain_t;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_right_6 = par_mode;
        tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 60;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TextIOWrapper );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_binary_file == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "binary_file" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 60;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_8 = var_binary_file;
            CHECK_OBJECT( par_encoding );
            tmp_args_element_name_9 = par_encoding;
            CHECK_OBJECT( par_errors );
            tmp_args_element_name_10 = par_errors;
            CHECK_OBJECT( par_newline );
            tmp_args_element_name_11 = par_newline;
            frame_196c7abbd8fb3cd638c7889e72376534->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_8;
        branch_no_8:;
        if ( var_binary_file == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "binary_file" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_binary_file;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_196c7abbd8fb3cd638c7889e72376534 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_196c7abbd8fb3cd638c7889e72376534 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_196c7abbd8fb3cd638c7889e72376534 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_196c7abbd8fb3cd638c7889e72376534, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_196c7abbd8fb3cd638c7889e72376534->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_196c7abbd8fb3cd638c7889e72376534, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_196c7abbd8fb3cd638c7889e72376534,
        type_description_1,
        par_filename,
        par_mode,
        par_compresslevel,
        par_encoding,
        par_errors,
        par_newline,
        var_gz_mode,
        var_binary_file
    );


    // Release cached frame.
    if ( frame_196c7abbd8fb3cd638c7889e72376534 == cache_frame_196c7abbd8fb3cd638c7889e72376534 )
    {
        Py_DECREF( frame_196c7abbd8fb3cd638c7889e72376534 );
    }
    cache_frame_196c7abbd8fb3cd638c7889e72376534 = NULL;

    assertFrameObject( frame_196c7abbd8fb3cd638c7889e72376534 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_1_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_compresslevel );
    Py_DECREF( par_compresslevel );
    par_compresslevel = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_newline );
    Py_DECREF( par_newline );
    par_newline = NULL;

    CHECK_OBJECT( (PyObject *)var_gz_mode );
    Py_DECREF( var_gz_mode );
    var_gz_mode = NULL;

    Py_XDECREF( var_binary_file );
    var_binary_file = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_compresslevel );
    Py_DECREF( par_compresslevel );
    par_compresslevel = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_newline );
    Py_DECREF( par_newline );
    par_newline = NULL;

    Py_XDECREF( var_gz_mode );
    var_gz_mode = NULL;

    Py_XDECREF( var_binary_file );
    var_binary_file = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_1_open );
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


static PyObject *impl_gzip$$$function_2_write32u( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_output = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_08312f9c77ac976824f5718278c49116;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08312f9c77ac976824f5718278c49116 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_08312f9c77ac976824f5718278c49116, codeobj_08312f9c77ac976824f5718278c49116, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_08312f9c77ac976824f5718278c49116 = cache_frame_08312f9c77ac976824f5718278c49116;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_08312f9c77ac976824f5718278c49116 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_08312f9c77ac976824f5718278c49116 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_output );
        tmp_source_name_1 = par_output;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_struct );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_2 = const_str_digest_123bbd2635909a086cc111a56aaafbbe;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_3 = par_value;
        frame_08312f9c77ac976824f5718278c49116->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pack, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_08312f9c77ac976824f5718278c49116->m_frame.f_lineno = 67;
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


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08312f9c77ac976824f5718278c49116 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08312f9c77ac976824f5718278c49116 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_08312f9c77ac976824f5718278c49116, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_08312f9c77ac976824f5718278c49116->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_08312f9c77ac976824f5718278c49116, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08312f9c77ac976824f5718278c49116,
        type_description_1,
        par_output,
        par_value
    );


    // Release cached frame.
    if ( frame_08312f9c77ac976824f5718278c49116 == cache_frame_08312f9c77ac976824f5718278c49116 )
    {
        Py_DECREF( frame_08312f9c77ac976824f5718278c49116 );
    }
    cache_frame_08312f9c77ac976824f5718278c49116 = NULL;

    assertFrameObject( frame_08312f9c77ac976824f5718278c49116 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_2_write32u );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_output );
    Py_DECREF( par_output );
    par_output = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_output );
    Py_DECREF( par_output );
    par_output = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_2_write32u );
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


static PyObject *impl_gzip$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_f = python_pars[ 1 ];
    PyObject *par_prepend = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_52a1fe8d123b4457c4eadce6d8e418ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52a1fe8d123b4457c4eadce6d8e418ed = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52a1fe8d123b4457c4eadce6d8e418ed, codeobj_52a1fe8d123b4457c4eadce6d8e418ed, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_52a1fe8d123b4457c4eadce6d8e418ed = cache_frame_52a1fe8d123b4457c4eadce6d8e418ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52a1fe8d123b4457c4eadce6d8e418ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52a1fe8d123b4457c4eadce6d8e418ed ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_prepend );
        tmp_assattr_name_1 = par_prepend;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__buffer, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_prepend );
        tmp_len_arg_1 = par_prepend;
        tmp_assattr_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__length, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_f );
        tmp_assattr_name_3 = par_f;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_file, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__read, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52a1fe8d123b4457c4eadce6d8e418ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52a1fe8d123b4457c4eadce6d8e418ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52a1fe8d123b4457c4eadce6d8e418ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52a1fe8d123b4457c4eadce6d8e418ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52a1fe8d123b4457c4eadce6d8e418ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52a1fe8d123b4457c4eadce6d8e418ed,
        type_description_1,
        par_self,
        par_f,
        par_prepend
    );


    // Release cached frame.
    if ( frame_52a1fe8d123b4457c4eadce6d8e418ed == cache_frame_52a1fe8d123b4457c4eadce6d8e418ed )
    {
        Py_DECREF( frame_52a1fe8d123b4457c4eadce6d8e418ed );
    }
    cache_frame_52a1fe8d123b4457c4eadce6d8e418ed = NULL;

    assertFrameObject( frame_52a1fe8d123b4457c4eadce6d8e418ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend );
    Py_DECREF( par_prepend );
    par_prepend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend );
    Py_DECREF( par_prepend );
    par_prepend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_3___init__ );
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


static PyObject *impl_gzip$$$function_4_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_read = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_c7b4c04344c1e9ed74cc24a25f3bde54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_c7b4c04344c1e9ed74cc24a25f3bde54 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7b4c04344c1e9ed74cc24a25f3bde54, codeobj_c7b4c04344c1e9ed74cc24a25f3bde54, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7b4c04344c1e9ed74cc24a25f3bde54 = cache_frame_c7b4c04344c1e9ed74cc24a25f3bde54;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7b4c04344c1e9ed74cc24a25f3bde54 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7b4c04344c1e9ed74cc24a25f3bde54 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__read );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_size );
            tmp_args_element_name_1 = par_size;
            frame_c7b4c04344c1e9ed74cc24a25f3bde54->m_frame.f_lineno = 82;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__read );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_right_name_1 = par_size;
        tmp_compexpr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__length );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__read );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_read == NULL );
            var_read = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__read );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_2 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( par_size );
            tmp_right_name_2 = par_size;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
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
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__read, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__buffer );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_read );
            tmp_start_name_1 = var_read;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_stop_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__read );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 86;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__read );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_read == NULL );
            var_read = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__read, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_10;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__buffer );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_read );
            tmp_start_name_2 = var_read;
            tmp_stop_name_2 = Py_None;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_file );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 91;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_read );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 91;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_size );
            tmp_left_name_5 = par_size;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__length );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 91;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 91;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_read );
            tmp_right_name_5 = var_read;
            tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 91;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_c7b4c04344c1e9ed74cc24a25f3bde54->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 91;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7b4c04344c1e9ed74cc24a25f3bde54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7b4c04344c1e9ed74cc24a25f3bde54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7b4c04344c1e9ed74cc24a25f3bde54 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7b4c04344c1e9ed74cc24a25f3bde54, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7b4c04344c1e9ed74cc24a25f3bde54->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7b4c04344c1e9ed74cc24a25f3bde54, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7b4c04344c1e9ed74cc24a25f3bde54,
        type_description_1,
        par_self,
        par_size,
        var_read
    );


    // Release cached frame.
    if ( frame_c7b4c04344c1e9ed74cc24a25f3bde54 == cache_frame_c7b4c04344c1e9ed74cc24a25f3bde54 )
    {
        Py_DECREF( frame_c7b4c04344c1e9ed74cc24a25f3bde54 );
    }
    cache_frame_c7b4c04344c1e9ed74cc24a25f3bde54 = NULL;

    assertFrameObject( frame_c7b4c04344c1e9ed74cc24a25f3bde54 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_4_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_4_read );
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


static PyObject *impl_gzip$$$function_5_prepend( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepend = python_pars[ 1 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_7e60472ef9c9f358b339b000d97d8b49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_7e60472ef9c9f358b339b000d97d8b49 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e60472ef9c9f358b339b000d97d8b49, codeobj_7e60472ef9c9f358b339b000d97d8b49, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_7e60472ef9c9f358b339b000d97d8b49 = cache_frame_7e60472ef9c9f358b339b000d97d8b49;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e60472ef9c9f358b339b000d97d8b49 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e60472ef9c9f358b339b000d97d8b49 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__read );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_prepend );
            tmp_assattr_name_1 = par_prepend;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__buffer, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__read );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( par_prepend );
            tmp_len_arg_1 = par_prepend;
            tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__read, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
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

        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__buffer );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__length, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__read, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e60472ef9c9f358b339b000d97d8b49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e60472ef9c9f358b339b000d97d8b49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e60472ef9c9f358b339b000d97d8b49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e60472ef9c9f358b339b000d97d8b49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e60472ef9c9f358b339b000d97d8b49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e60472ef9c9f358b339b000d97d8b49, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e60472ef9c9f358b339b000d97d8b49,
        type_description_1,
        par_self,
        par_prepend
    );


    // Release cached frame.
    if ( frame_7e60472ef9c9f358b339b000d97d8b49 == cache_frame_7e60472ef9c9f358b339b000d97d8b49 )
    {
        Py_DECREF( frame_7e60472ef9c9f358b339b000d97d8b49 );
    }
    cache_frame_7e60472ef9c9f358b339b000d97d8b49 = NULL;

    assertFrameObject( frame_7e60472ef9c9f358b339b000d97d8b49 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_5_prepend );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend );
    Py_DECREF( par_prepend );
    par_prepend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_prepend );
    Py_DECREF( par_prepend );
    par_prepend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_5_prepend );
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


static PyObject *impl_gzip$$$function_6_seek( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_off = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_7be37042d93b2cfa6f7dd12ca00ec2da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7be37042d93b2cfa6f7dd12ca00ec2da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7be37042d93b2cfa6f7dd12ca00ec2da, codeobj_7be37042d93b2cfa6f7dd12ca00ec2da, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_7be37042d93b2cfa6f7dd12ca00ec2da = cache_frame_7be37042d93b2cfa6f7dd12ca00ec2da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7be37042d93b2cfa6f7dd12ca00ec2da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7be37042d93b2cfa6f7dd12ca00ec2da ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__read, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__buffer, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_off );
        tmp_args_element_name_1 = par_off;
        frame_7be37042d93b2cfa6f7dd12ca00ec2da->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_seek, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7be37042d93b2cfa6f7dd12ca00ec2da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7be37042d93b2cfa6f7dd12ca00ec2da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7be37042d93b2cfa6f7dd12ca00ec2da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7be37042d93b2cfa6f7dd12ca00ec2da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7be37042d93b2cfa6f7dd12ca00ec2da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7be37042d93b2cfa6f7dd12ca00ec2da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7be37042d93b2cfa6f7dd12ca00ec2da,
        type_description_1,
        par_self,
        par_off
    );


    // Release cached frame.
    if ( frame_7be37042d93b2cfa6f7dd12ca00ec2da == cache_frame_7be37042d93b2cfa6f7dd12ca00ec2da )
    {
        Py_DECREF( frame_7be37042d93b2cfa6f7dd12ca00ec2da );
    }
    cache_frame_7be37042d93b2cfa6f7dd12ca00ec2da = NULL;

    assertFrameObject( frame_7be37042d93b2cfa6f7dd12ca00ec2da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_6_seek );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_off );
    Py_DECREF( par_off );
    par_off = NULL;

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

    CHECK_OBJECT( (PyObject *)par_off );
    Py_DECREF( par_off );
    par_off = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_6_seek );
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


static PyObject *impl_gzip$$$function_7_seekable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_7_seekable );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_7_seekable );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_gzip$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_compresslevel = python_pars[ 3 ];
    PyObject *par_fileobj = python_pars[ 4 ];
    PyObject *par_mtime = python_pars[ 5 ];
    PyObject *var_raw = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_10ec0a116de16decccf28d1f99c732e1;
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
    static struct Nuitka_FrameObject *cache_frame_10ec0a116de16decccf28d1f99c732e1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10ec0a116de16decccf28d1f99c732e1, codeobj_10ec0a116de16decccf28d1f99c732e1, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10ec0a116de16decccf28d1f99c732e1 = cache_frame_10ec0a116de16decccf28d1f99c732e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10ec0a116de16decccf28d1f99c732e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10ec0a116de16decccf28d1f99c732e1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_mode );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_mode );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooo";
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
        tmp_compexpr_left_1 = const_str_plain_t;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_right_1 = par_mode;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_compexpr_left_2 = const_str_plain_U;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_right_2 = par_mode;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = const_str_digest_ad5011e256ed9cce28d3209553d9f1ad;
            CHECK_OBJECT( par_mode );
            tmp_args_element_name_1 = par_mode;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 159;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_mode );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_mode );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooo";
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
        tmp_compexpr_left_3 = const_str_plain_b;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_right_3 = par_mode;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_mode );
            tmp_left_name_1 = par_mode;
            tmp_right_name_1 = const_str_plain_b;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = tmp_left_name_1;
            par_mode = tmp_assign_source_1;

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_fileobj );
        tmp_compexpr_left_4 = par_fileobj;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_builtins );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 163;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_open );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_2 = par_filename;
            CHECK_OBJECT( par_mode );
            tmp_or_left_value_2 = par_mode;
            tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
            if ( tmp_or_left_truth_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 163;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            if ( tmp_or_left_truth_2 == 1 )
            {
                goto or_left_2;
            }
            else
            {
                goto or_right_2;
            }
            or_right_2:;
            tmp_or_right_value_2 = const_str_plain_rb;
            tmp_args_element_name_3 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_args_element_name_3 = tmp_or_left_value_2;
            or_end_2:;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_assign_unpack_1__assign_source == NULL );
            tmp_assign_unpack_1__assign_source = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
            tmp_assign_source_3 = tmp_assign_unpack_1__assign_source;
            {
                PyObject *old = par_fileobj;
                assert( old != NULL );
                par_fileobj = tmp_assign_source_3;
                Py_INCREF( par_fileobj );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
            tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_myfileobj, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooo";
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
        CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
        Py_DECREF( tmp_assign_unpack_1__assign_source );
        tmp_assign_unpack_1__assign_source = NULL;

        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_filename );
        tmp_compexpr_left_5 = par_filename;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            CHECK_OBJECT( par_fileobj );
            tmp_getattr_target_1 = par_fileobj;
            tmp_getattr_attr_1 = const_str_plain_name;
            tmp_getattr_default_1 = const_str_empty;
            tmp_assign_source_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_filename;
                assert( old != NULL );
                par_filename = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( par_filename );
            tmp_isinstance_inst_1 = par_filename;
            tmp_isinstance_cls_1 = const_tuple_type_str_type_bytes_tuple;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = const_str_empty;
                {
                    PyObject *old = par_filename;
                    assert( old != NULL );
                    par_filename = tmp_assign_source_5;
                    Py_INCREF( par_filename );
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_os );

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

                exception_lineno = 169;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_4 = par_filename;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_fspath, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_filename;
                assert( old != NULL );
                par_filename = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_6 = par_mode;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            CHECK_OBJECT( par_fileobj );
            tmp_getattr_target_2 = par_fileobj;
            tmp_getattr_attr_2 = const_str_plain_mode;
            tmp_getattr_default_2 = const_str_plain_rb;
            tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_mode;
                assert( old != NULL );
                par_mode = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_3;
        if ( par_mode == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_mode;
        frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 173;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_r_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_mode, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__GzipReader );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__GzipReader );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_GzipReader" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 175;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_fileobj );
            tmp_args_element_name_5 = par_fileobj;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_raw == NULL );
            var_raw = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_assattr_target_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 176;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            CHECK_OBJECT( var_raw );
            tmp_args_element_name_6 = var_raw;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assattr_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_BufferedReader, call_args );
            }

            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__buffer, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            if ( par_filename == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_4 = par_filename;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_name, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_2;
            int tmp_truth_name_4;
            if ( par_mode == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = par_mode;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 179;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_tuple_str_plain_w_str_plain_a_str_plain_x_tuple_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_assattr_target_5;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 180;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_5 = tmp_mvar_value_6;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_5 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_mode, tmp_assattr_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__init_write );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_filename == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_7 = par_filename;
                frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 181;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_assattr_name_6;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_assattr_target_6;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_7;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compressobj );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_compresslevel );
                tmp_args_element_name_8 = par_compresslevel;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 183;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_8;
                tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_DEFLATED );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 183;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_9 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 184;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_9;
                tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_MAX_WBITS );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_9 );

                    exception_lineno = 184;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_9 );

                    exception_lineno = 184;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
                }

                if ( tmp_mvar_value_10 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_9 );
                    Py_DECREF( tmp_args_element_name_10 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 185;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_10;
                tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_DEF_MEM_LEVEL );
                if ( tmp_args_element_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_element_name_9 );
                    Py_DECREF( tmp_args_element_name_10 );

                    exception_lineno = 185;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_12 = const_int_0;
                frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 182;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                    tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                Py_DECREF( tmp_args_element_name_11 );
                if ( tmp_assattr_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_6 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_compress, tmp_assattr_name_6 );
                Py_DECREF( tmp_assattr_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_7;
                PyObject *tmp_assattr_target_7;
                CHECK_OBJECT( par_mtime );
                tmp_assattr_name_7 = par_mtime;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_7 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__write_mtime, tmp_assattr_name_7 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 187;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_13;
                tmp_source_name_7 = const_str_digest_ad5011e256ed9cce28d3209553d9f1ad;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
                assert( !(tmp_called_name_5 == NULL) );
                if ( par_mode == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_13 = par_mode;
                frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 189;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 189;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 189;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_8:;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_fileobj );
        tmp_assattr_name_8 = par_fileobj;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_fileobj, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_mode );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_7 = tmp_mvar_value_11;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( par_self );
            tmp_called_instance_6 = par_self;
            frame_10ec0a116de16decccf28d1f99c732e1->m_frame.f_lineno = 194;
            tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain__write_gzip_header );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ec0a116de16decccf28d1f99c732e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ec0a116de16decccf28d1f99c732e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10ec0a116de16decccf28d1f99c732e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10ec0a116de16decccf28d1f99c732e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10ec0a116de16decccf28d1f99c732e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10ec0a116de16decccf28d1f99c732e1,
        type_description_1,
        par_self,
        par_filename,
        par_mode,
        par_compresslevel,
        par_fileobj,
        par_mtime,
        var_raw
    );


    // Release cached frame.
    if ( frame_10ec0a116de16decccf28d1f99c732e1 == cache_frame_10ec0a116de16decccf28d1f99c732e1 )
    {
        Py_DECREF( frame_10ec0a116de16decccf28d1f99c732e1 );
    }
    cache_frame_10ec0a116de16decccf28d1f99c732e1 = NULL;

    assertFrameObject( frame_10ec0a116de16decccf28d1f99c732e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_compresslevel );
    Py_DECREF( par_compresslevel );
    par_compresslevel = NULL;

    CHECK_OBJECT( (PyObject *)par_fileobj );
    Py_DECREF( par_fileobj );
    par_fileobj = NULL;

    CHECK_OBJECT( (PyObject *)par_mtime );
    Py_DECREF( par_mtime );
    par_mtime = NULL;

    Py_XDECREF( var_raw );
    var_raw = NULL;

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

    Py_XDECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_compresslevel );
    Py_DECREF( par_compresslevel );
    par_compresslevel = NULL;

    Py_XDECREF( par_fileobj );
    par_fileobj = NULL;

    CHECK_OBJECT( (PyObject *)par_mtime );
    Py_DECREF( par_mtime );
    par_mtime = NULL;

    Py_XDECREF( var_raw );
    var_raw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_8___init__ );
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


static PyObject *impl_gzip$$$function_9_filename( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_warnings = NULL;
    struct Nuitka_FrameObject *frame_537739937fe61453f0eb2593e09f658d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_537739937fe61453f0eb2593e09f658d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_537739937fe61453f0eb2593e09f658d, codeobj_537739937fe61453f0eb2593e09f658d, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_537739937fe61453f0eb2593e09f658d = cache_frame_537739937fe61453f0eb2593e09f658d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_537739937fe61453f0eb2593e09f658d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_537739937fe61453f0eb2593e09f658d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_gzip;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_537739937fe61453f0eb2593e09f658d->m_frame.f_lineno = 198;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_warnings == NULL );
        var_warnings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_warnings );
        tmp_source_name_1 = var_warnings;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_8c2cc265e5e031d8146b4816a4604aa4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_1;
        tmp_args_element_name_3 = const_int_pos_2;
        frame_537739937fe61453f0eb2593e09f658d->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
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
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_int_neg_3_none_none;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_digest_662720bcb38208f53dc17ad51de4c080;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_str_digest_662720bcb38208f53dc17ad51de4c080;
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_537739937fe61453f0eb2593e09f658d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_537739937fe61453f0eb2593e09f658d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_537739937fe61453f0eb2593e09f658d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_537739937fe61453f0eb2593e09f658d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_537739937fe61453f0eb2593e09f658d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_537739937fe61453f0eb2593e09f658d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_537739937fe61453f0eb2593e09f658d,
        type_description_1,
        par_self,
        var_warnings
    );


    // Release cached frame.
    if ( frame_537739937fe61453f0eb2593e09f658d == cache_frame_537739937fe61453f0eb2593e09f658d )
    {
        Py_DECREF( frame_537739937fe61453f0eb2593e09f658d );
    }
    cache_frame_537739937fe61453f0eb2593e09f658d = NULL;

    assertFrameObject( frame_537739937fe61453f0eb2593e09f658d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_9_filename );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_warnings );
    Py_DECREF( var_warnings );
    var_warnings = NULL;

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

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_9_filename );
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


static PyObject *impl_gzip$$$function_10_mtime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6e531d4905f56a3551164bd36a11b2ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e531d4905f56a3551164bd36a11b2ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e531d4905f56a3551164bd36a11b2ec, codeobj_6e531d4905f56a3551164bd36a11b2ec, module_gzip, sizeof(void *) );
    frame_6e531d4905f56a3551164bd36a11b2ec = cache_frame_6e531d4905f56a3551164bd36a11b2ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e531d4905f56a3551164bd36a11b2ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e531d4905f56a3551164bd36a11b2ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__buffer );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_raw );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__last_mtime );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e531d4905f56a3551164bd36a11b2ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e531d4905f56a3551164bd36a11b2ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e531d4905f56a3551164bd36a11b2ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e531d4905f56a3551164bd36a11b2ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e531d4905f56a3551164bd36a11b2ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e531d4905f56a3551164bd36a11b2ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e531d4905f56a3551164bd36a11b2ec,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6e531d4905f56a3551164bd36a11b2ec == cache_frame_6e531d4905f56a3551164bd36a11b2ec )
    {
        Py_DECREF( frame_6e531d4905f56a3551164bd36a11b2ec );
    }
    cache_frame_6e531d4905f56a3551164bd36a11b2ec = NULL;

    assertFrameObject( frame_6e531d4905f56a3551164bd36a11b2ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_10_mtime );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_10_mtime );
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


static PyObject *impl_gzip$$$function_11___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_e439250a42fd6f8c0163427bd52fdb68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e439250a42fd6f8c0163427bd52fdb68 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e439250a42fd6f8c0163427bd52fdb68, codeobj_e439250a42fd6f8c0163427bd52fdb68, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_e439250a42fd6f8c0163427bd52fdb68 = cache_frame_e439250a42fd6f8c0163427bd52fdb68;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e439250a42fd6f8c0163427bd52fdb68 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e439250a42fd6f8c0163427bd52fdb68 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fileobj );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_hex_arg_1;
        PyObject *tmp_id_arg_1;
        PyObject *tmp_right_name_4;
        tmp_left_name_4 = const_str_digest_cdbda891257cf4d817685e634e5b6a9b;
        CHECK_OBJECT( var_s );
        tmp_subscribed_name_1 = var_s;
        tmp_subscript_name_1 = const_slice_int_pos_1_int_neg_1_none;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_4, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_str_space;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_id_arg_1 = par_self;
        tmp_hex_arg_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
        if ( tmp_hex_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BUILTIN_HEX( tmp_hex_arg_1 );
        Py_DECREF( tmp_hex_arg_1 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_str_chr_62;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e439250a42fd6f8c0163427bd52fdb68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e439250a42fd6f8c0163427bd52fdb68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e439250a42fd6f8c0163427bd52fdb68 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e439250a42fd6f8c0163427bd52fdb68, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e439250a42fd6f8c0163427bd52fdb68->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e439250a42fd6f8c0163427bd52fdb68, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e439250a42fd6f8c0163427bd52fdb68,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame.
    if ( frame_e439250a42fd6f8c0163427bd52fdb68 == cache_frame_e439250a42fd6f8c0163427bd52fdb68 )
    {
        Py_DECREF( frame_e439250a42fd6f8c0163427bd52fdb68 );
    }
    cache_frame_e439250a42fd6f8c0163427bd52fdb68 = NULL;

    assertFrameObject( frame_e439250a42fd6f8c0163427bd52fdb68 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_11___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_11___repr__ );
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


static PyObject *impl_gzip$$$function_12__init_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_af14b68f5bd8086a3f50a7a92f8430f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af14b68f5bd8086a3f50a7a92f8430f9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af14b68f5bd8086a3f50a7a92f8430f9, codeobj_af14b68f5bd8086a3f50a7a92f8430f9, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_af14b68f5bd8086a3f50a7a92f8430f9 = cache_frame_af14b68f5bd8086a3f50a7a92f8430f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af14b68f5bd8086a3f50a7a92f8430f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af14b68f5bd8086a3f50a7a92f8430f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_filename );
        tmp_assattr_name_1 = par_filename;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_name, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_af14b68f5bd8086a3f50a7a92f8430f9->m_frame.f_lineno = 215;
        tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_crc32, &PyTuple_GET_ITEM( const_tuple_bytes_empty_tuple, 0 ) );

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_crc, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_size, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_writebuf, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_bufsize, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_offset, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af14b68f5bd8086a3f50a7a92f8430f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af14b68f5bd8086a3f50a7a92f8430f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af14b68f5bd8086a3f50a7a92f8430f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af14b68f5bd8086a3f50a7a92f8430f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af14b68f5bd8086a3f50a7a92f8430f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af14b68f5bd8086a3f50a7a92f8430f9,
        type_description_1,
        par_self,
        par_filename
    );


    // Release cached frame.
    if ( frame_af14b68f5bd8086a3f50a7a92f8430f9 == cache_frame_af14b68f5bd8086a3f50a7a92f8430f9 )
    {
        Py_DECREF( frame_af14b68f5bd8086a3f50a7a92f8430f9 );
    }
    cache_frame_af14b68f5bd8086a3f50a7a92f8430f9 = NULL;

    assertFrameObject( frame_af14b68f5bd8086a3f50a7a92f8430f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_12__init_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_12__init_write );
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


static PyObject *impl_gzip$$$function_13__write_gzip_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_fname = NULL;
    PyObject *var_flags = NULL;
    PyObject *var_mtime = NULL;
    struct Nuitka_FrameObject *frame_5d99d60d2539691dedd64cddecbd8a56;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5d99d60d2539691dedd64cddecbd8a56 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d99d60d2539691dedd64cddecbd8a56, codeobj_5d99d60d2539691dedd64cddecbd8a56, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d99d60d2539691dedd64cddecbd8a56 = cache_frame_5d99d60d2539691dedd64cddecbd8a56;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d99d60d2539691dedd64cddecbd8a56 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d99d60d2539691dedd64cddecbd8a56 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fileobj );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 222;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fileobj );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 223;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_bytes_chr_8_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 227;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_basename );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 227;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 227;
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


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( var_fname == NULL );
        var_fname = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_fname );
        tmp_isinstance_inst_1 = var_fname;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_fname );
            tmp_called_instance_3 = var_fname;
            frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 229;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_fname;
                assert( old != NULL );
                var_fname = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_fname );
        tmp_called_instance_4 = var_fname;
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 230;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_bytes_digest_c055bb7e12100f2a8b93095c81adde8a_tuple, 0 ) );

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 230;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_fname );
            tmp_subscribed_name_1 = var_fname;
            tmp_subscript_name_1 = const_slice_none_int_neg_3_none;
            tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_fname;
                assert( old != NULL );
                var_fname = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5d99d60d2539691dedd64cddecbd8a56, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5d99d60d2539691dedd64cddecbd8a56, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_UnicodeEncodeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_bytes_empty;
            {
                PyObject *old = var_fname;
                var_fname = tmp_assign_source_4;
                Py_INCREF( var_fname );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 224;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_5d99d60d2539691dedd64cddecbd8a56->m_frame) frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_3;
        branch_end_3:;
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_13__write_gzip_header );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        assert( var_flags == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_flags = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        if ( var_fname == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fname" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( var_fname );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FNAME );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FNAME );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FNAME" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 236;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_6 = tmp_mvar_value_2;
            {
                PyObject *old = var_flags;
                assert( old != NULL );
                var_flags = tmp_assign_source_6;
                Py_INCREF( var_flags );
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_chr_arg_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_fileobj );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_write );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_flags );
        tmp_chr_arg_1 = var_flags;
        tmp_called_instance_5 = BUILTIN_CHR( tmp_chr_arg_1 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 237;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__write_mtime );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_mtime == NULL );
        var_mtime = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_mtime );
        tmp_compexpr_left_2 = var_mtime;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 240;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_3;
            frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 240;
            tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_time );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_mtime;
                assert( old != NULL );
                var_mtime = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_int_arg_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_write32u );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_write32u );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "write32u" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_fileobj );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mtime );
        tmp_int_arg_1 = var_mtime;
        tmp_args_element_name_4 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_fileobj );
        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 242;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_bytes_chr_2_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_source_name_11;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_fileobj );
        if ( tmp_called_instance_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 243;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_bytes_chr_255_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_8 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        if ( var_fname == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fname" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( var_fname );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oooo";
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
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_fileobj );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_write );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            if ( var_fname == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fname" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 245;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_1 = var_fname;
            tmp_right_name_1 = const_bytes_chr_0;
            tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_BYTES( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 245;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_5d99d60d2539691dedd64cddecbd8a56->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        branch_no_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d99d60d2539691dedd64cddecbd8a56 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d99d60d2539691dedd64cddecbd8a56 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d99d60d2539691dedd64cddecbd8a56, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d99d60d2539691dedd64cddecbd8a56->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d99d60d2539691dedd64cddecbd8a56, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d99d60d2539691dedd64cddecbd8a56,
        type_description_1,
        par_self,
        var_fname,
        var_flags,
        var_mtime
    );


    // Release cached frame.
    if ( frame_5d99d60d2539691dedd64cddecbd8a56 == cache_frame_5d99d60d2539691dedd64cddecbd8a56 )
    {
        Py_DECREF( frame_5d99d60d2539691dedd64cddecbd8a56 );
    }
    cache_frame_5d99d60d2539691dedd64cddecbd8a56 = NULL;

    assertFrameObject( frame_5d99d60d2539691dedd64cddecbd8a56 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_13__write_gzip_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    CHECK_OBJECT( (PyObject *)var_flags );
    Py_DECREF( var_flags );
    var_flags = NULL;

    CHECK_OBJECT( (PyObject *)var_mtime );
    Py_DECREF( var_mtime );
    var_mtime = NULL;

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

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_mtime );
    var_mtime = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_13__write_gzip_header );
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


static PyObject *impl_gzip$$$function_14_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_errno = NULL;
    PyObject *var_length = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_97ab36f640362cc264bd5698e42e641c;
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
    static struct Nuitka_FrameObject *cache_frame_97ab36f640362cc264bd5698e42e641c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_97ab36f640362cc264bd5698e42e641c, codeobj_97ab36f640362cc264bd5698e42e641c, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_97ab36f640362cc264bd5698e42e641c = cache_frame_97ab36f640362cc264bd5698e42e641c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_97ab36f640362cc264bd5698e42e641c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_97ab36f640362cc264bd5698e42e641c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 248;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_not_closed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooo";
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
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_errno;
            tmp_globals_name_1 = (PyObject *)moduledict_gzip;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            tmp_level_name_1 = const_int_0;
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 250;
            tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( var_errno == NULL );
            var_errno = tmp_assign_source_1;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_make_exception_arg_2;
            CHECK_OBJECT( var_errno );
            tmp_source_name_2 = var_errno;
            tmp_make_exception_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EBADF );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = const_str_digest_ded11b5acf88407a56e3a63ca1fa0aba;
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_OSError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 251;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
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
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fileobj );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_fe565e6413369aec87629a29480fa4ee;
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 254;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 254;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_data );
        tmp_isinstance_inst_1 = par_data;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooo";
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
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_data );
            tmp_len_arg_1 = par_data;
            tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_length == NULL );
            var_length = tmp_assign_source_2;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyMemoryView_Type;
            CHECK_OBJECT( par_data );
            tmp_args_element_name_1 = par_data;
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 260;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_data;
                assert( old != NULL );
                par_data = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_data );
            tmp_source_name_4 = par_data;
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nbytes );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_length == NULL );
            var_length = tmp_assign_source_4;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_length );
        tmp_compexpr_left_3 = var_length;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fileobj );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_write );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_compress );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 264;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_data );
            tmp_args_element_name_3 = par_data;
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_compress, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 264;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 264;
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


                exception_lineno = 264;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_size );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            CHECK_OBJECT( var_length );
            tmp_right_name_1 = var_length;
            tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_size, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 266;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_2;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_crc32 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_data );
            tmp_args_element_name_4 = par_data;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_crc );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 266;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_97ab36f640362cc264bd5698e42e641c->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_crc, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_offset );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_2__start == NULL );
            tmp_inplace_assign_attr_2__start = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
            tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
            CHECK_OBJECT( var_length );
            tmp_right_name_2 = var_length;
            tmp_assign_source_8 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            assert( tmp_inplace_assign_attr_2__end == NULL );
            tmp_inplace_assign_attr_2__end = tmp_assign_source_8;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
            tmp_assattr_name_3 = tmp_inplace_assign_attr_2__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_offset, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
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

        branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97ab36f640362cc264bd5698e42e641c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97ab36f640362cc264bd5698e42e641c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_97ab36f640362cc264bd5698e42e641c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_97ab36f640362cc264bd5698e42e641c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_97ab36f640362cc264bd5698e42e641c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_97ab36f640362cc264bd5698e42e641c,
        type_description_1,
        par_self,
        par_data,
        var_errno,
        var_length
    );


    // Release cached frame.
    if ( frame_97ab36f640362cc264bd5698e42e641c == cache_frame_97ab36f640362cc264bd5698e42e641c )
    {
        Py_DECREF( frame_97ab36f640362cc264bd5698e42e641c );
    }
    cache_frame_97ab36f640362cc264bd5698e42e641c = NULL;

    assertFrameObject( frame_97ab36f640362cc264bd5698e42e641c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_length );
    tmp_return_value = var_length;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_14_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_length );
    Py_DECREF( var_length );
    var_length = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_errno );
    var_errno = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_14_write );
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


static PyObject *impl_gzip$$$function_15_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_errno = NULL;
    struct Nuitka_FrameObject *frame_f0b56f989e02044b01b4ac449ef8123f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f0b56f989e02044b01b4ac449ef8123f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f0b56f989e02044b01b4ac449ef8123f, codeobj_f0b56f989e02044b01b4ac449ef8123f, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f0b56f989e02044b01b4ac449ef8123f = cache_frame_f0b56f989e02044b01b4ac449ef8123f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f0b56f989e02044b01b4ac449ef8123f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f0b56f989e02044b01b4ac449ef8123f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_f0b56f989e02044b01b4ac449ef8123f->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_not_closed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_errno;
            tmp_globals_name_1 = (PyObject *)moduledict_gzip;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            tmp_level_name_1 = const_int_0;
            frame_f0b56f989e02044b01b4ac449ef8123f->m_frame.f_lineno = 274;
            tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( var_errno == NULL );
            var_errno = tmp_assign_source_1;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_make_exception_arg_2;
            CHECK_OBJECT( var_errno );
            tmp_source_name_2 = var_errno;
            tmp_make_exception_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EBADF );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = const_str_digest_2dda58fe3b44155f9b7b17eca9192d4a;
            frame_f0b56f989e02044b01b4ac449ef8123f->m_frame.f_lineno = 275;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_OSError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 275;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__buffer );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_args_element_name_1 = par_size;
        frame_f0b56f989e02044b01b4ac449ef8123f->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0b56f989e02044b01b4ac449ef8123f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0b56f989e02044b01b4ac449ef8123f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0b56f989e02044b01b4ac449ef8123f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f0b56f989e02044b01b4ac449ef8123f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f0b56f989e02044b01b4ac449ef8123f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f0b56f989e02044b01b4ac449ef8123f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f0b56f989e02044b01b4ac449ef8123f,
        type_description_1,
        par_self,
        par_size,
        var_errno
    );


    // Release cached frame.
    if ( frame_f0b56f989e02044b01b4ac449ef8123f == cache_frame_f0b56f989e02044b01b4ac449ef8123f )
    {
        Py_DECREF( frame_f0b56f989e02044b01b4ac449ef8123f );
    }
    cache_frame_f0b56f989e02044b01b4ac449ef8123f = NULL;

    assertFrameObject( frame_f0b56f989e02044b01b4ac449ef8123f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_15_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_errno );
    var_errno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_15_read );
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


static PyObject *impl_gzip$$$function_16_read1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_errno = NULL;
    struct Nuitka_FrameObject *frame_8fd4bbb1f32ee68c0a20a5cde2385bef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8fd4bbb1f32ee68c0a20a5cde2385bef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8fd4bbb1f32ee68c0a20a5cde2385bef, codeobj_8fd4bbb1f32ee68c0a20a5cde2385bef, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8fd4bbb1f32ee68c0a20a5cde2385bef = cache_frame_8fd4bbb1f32ee68c0a20a5cde2385bef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8fd4bbb1f32ee68c0a20a5cde2385bef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8fd4bbb1f32ee68c0a20a5cde2385bef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_8fd4bbb1f32ee68c0a20a5cde2385bef->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_not_closed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_errno;
            tmp_globals_name_1 = (PyObject *)moduledict_gzip;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            tmp_level_name_1 = const_int_0;
            frame_8fd4bbb1f32ee68c0a20a5cde2385bef->m_frame.f_lineno = 284;
            tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( var_errno == NULL );
            var_errno = tmp_assign_source_1;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_make_exception_arg_2;
            CHECK_OBJECT( var_errno );
            tmp_source_name_2 = var_errno;
            tmp_make_exception_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EBADF );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = const_str_digest_8787da29b733d5c8fb75c44a756edfb5;
            frame_8fd4bbb1f32ee68c0a20a5cde2385bef->m_frame.f_lineno = 285;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_OSError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 285;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_size );
        tmp_compexpr_left_2 = par_size;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 288;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DEFAULT_BUFFER_SIZE );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_size;
                assert( old != NULL );
                par_size = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__buffer );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_args_element_name_1 = par_size;
        frame_8fd4bbb1f32ee68c0a20a5cde2385bef->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read1, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fd4bbb1f32ee68c0a20a5cde2385bef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fd4bbb1f32ee68c0a20a5cde2385bef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fd4bbb1f32ee68c0a20a5cde2385bef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fd4bbb1f32ee68c0a20a5cde2385bef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fd4bbb1f32ee68c0a20a5cde2385bef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fd4bbb1f32ee68c0a20a5cde2385bef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fd4bbb1f32ee68c0a20a5cde2385bef,
        type_description_1,
        par_self,
        par_size,
        var_errno
    );


    // Release cached frame.
    if ( frame_8fd4bbb1f32ee68c0a20a5cde2385bef == cache_frame_8fd4bbb1f32ee68c0a20a5cde2385bef )
    {
        Py_DECREF( frame_8fd4bbb1f32ee68c0a20a5cde2385bef );
    }
    cache_frame_8fd4bbb1f32ee68c0a20a5cde2385bef = NULL;

    assertFrameObject( frame_8fd4bbb1f32ee68c0a20a5cde2385bef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_16_read1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

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

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_errno );
    var_errno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_16_read1 );
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


static PyObject *impl_gzip$$$function_17_peek( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_errno = NULL;
    struct Nuitka_FrameObject *frame_29132b79f485f8f16fbf4050783aa0ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29132b79f485f8f16fbf4050783aa0ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29132b79f485f8f16fbf4050783aa0ce, codeobj_29132b79f485f8f16fbf4050783aa0ce, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29132b79f485f8f16fbf4050783aa0ce = cache_frame_29132b79f485f8f16fbf4050783aa0ce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29132b79f485f8f16fbf4050783aa0ce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29132b79f485f8f16fbf4050783aa0ce ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_29132b79f485f8f16fbf4050783aa0ce->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_not_closed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_errno;
            tmp_globals_name_1 = (PyObject *)moduledict_gzip;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            tmp_level_name_1 = const_int_0;
            frame_29132b79f485f8f16fbf4050783aa0ce->m_frame.f_lineno = 294;
            tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( var_errno == NULL );
            var_errno = tmp_assign_source_1;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_make_exception_arg_2;
            CHECK_OBJECT( var_errno );
            tmp_source_name_2 = var_errno;
            tmp_make_exception_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EBADF );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = const_str_digest_d3f17248b43733d42f1258cafab8d024;
            frame_29132b79f485f8f16fbf4050783aa0ce->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_OSError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 295;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__buffer );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_29132b79f485f8f16fbf4050783aa0ce->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_peek, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29132b79f485f8f16fbf4050783aa0ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_29132b79f485f8f16fbf4050783aa0ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29132b79f485f8f16fbf4050783aa0ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29132b79f485f8f16fbf4050783aa0ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29132b79f485f8f16fbf4050783aa0ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29132b79f485f8f16fbf4050783aa0ce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29132b79f485f8f16fbf4050783aa0ce,
        type_description_1,
        par_self,
        par_n,
        var_errno
    );


    // Release cached frame.
    if ( frame_29132b79f485f8f16fbf4050783aa0ce == cache_frame_29132b79f485f8f16fbf4050783aa0ce )
    {
        Py_DECREF( frame_29132b79f485f8f16fbf4050783aa0ce );
    }
    cache_frame_29132b79f485f8f16fbf4050783aa0ce = NULL;

    assertFrameObject( frame_29132b79f485f8f16fbf4050783aa0ce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_17_peek );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_errno );
    var_errno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_17_peek );
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


static PyObject *impl_gzip$$$function_18_closed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_76faa3e7f32910667437d04e1be6f910;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76faa3e7f32910667437d04e1be6f910 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76faa3e7f32910667437d04e1be6f910, codeobj_76faa3e7f32910667437d04e1be6f910, module_gzip, sizeof(void *) );
    frame_76faa3e7f32910667437d04e1be6f910 = cache_frame_76faa3e7f32910667437d04e1be6f910;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76faa3e7f32910667437d04e1be6f910 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76faa3e7f32910667437d04e1be6f910 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fileobj );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_1 );
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76faa3e7f32910667437d04e1be6f910 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76faa3e7f32910667437d04e1be6f910 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76faa3e7f32910667437d04e1be6f910 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76faa3e7f32910667437d04e1be6f910, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76faa3e7f32910667437d04e1be6f910->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76faa3e7f32910667437d04e1be6f910, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76faa3e7f32910667437d04e1be6f910,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_76faa3e7f32910667437d04e1be6f910 == cache_frame_76faa3e7f32910667437d04e1be6f910 )
    {
        Py_DECREF( frame_76faa3e7f32910667437d04e1be6f910 );
    }
    cache_frame_76faa3e7f32910667437d04e1be6f910 = NULL;

    assertFrameObject( frame_76faa3e7f32910667437d04e1be6f910 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_18_closed );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_18_closed );
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


static PyObject *impl_gzip$$$function_19_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_fileobj = NULL;
    PyObject *var_myfileobj = NULL;
    struct Nuitka_FrameObject *frame_a37831451fe077ed61f4fe6d9629048c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a37831451fe077ed61f4fe6d9629048c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a37831451fe077ed61f4fe6d9629048c, codeobj_a37831451fe077ed61f4fe6d9629048c, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a37831451fe077ed61f4fe6d9629048c = cache_frame_a37831451fe077ed61f4fe6d9629048c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a37831451fe077ed61f4fe6d9629048c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a37831451fe077ed61f4fe6d9629048c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fileobj );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_fileobj == NULL );
        var_fileobj = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_fileobj );
        tmp_compexpr_left_1 = var_fileobj;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fileobj, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mode );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 308;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_fileobj );
            tmp_source_name_3 = var_fileobj;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compress );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 309;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 309;
            tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 309;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 309;
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


                exception_lineno = 309;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_write32u );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_write32u );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "write32u" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 310;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_fileobj );
            tmp_args_element_name_2 = var_fileobj;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_crc );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 310;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_write32u );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_write32u );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "write32u" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 312;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_fileobj );
            tmp_args_element_name_4 = var_fileobj;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_right_name_1 = const_int_pos_4294967295;
            tmp_args_element_name_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 312;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 312;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_mode );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_4;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_2;
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__buffer );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 314;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 314;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_3:;
        }
        branch_end_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a37831451fe077ed61f4fe6d9629048c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a37831451fe077ed61f4fe6d9629048c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_myfileobj );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        assert( var_myfileobj == NULL );
        var_myfileobj = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_myfileobj );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_myfileobj );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_myfileobj, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( var_myfileobj );
            tmp_called_instance_3 = var_myfileobj;
            frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 319;
            tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_4:;
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 307;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a37831451fe077ed61f4fe6d9629048c->m_frame) frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_19_close );
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
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_myfileobj );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_myfileobj == NULL );
        var_myfileobj = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_myfileobj );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_myfileobj );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooo";
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_myfileobj, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( var_myfileobj );
            tmp_called_instance_4 = var_myfileobj;
            frame_a37831451fe077ed61f4fe6d9629048c->m_frame.f_lineno = 319;
            tmp_call_result_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a37831451fe077ed61f4fe6d9629048c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a37831451fe077ed61f4fe6d9629048c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a37831451fe077ed61f4fe6d9629048c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a37831451fe077ed61f4fe6d9629048c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a37831451fe077ed61f4fe6d9629048c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a37831451fe077ed61f4fe6d9629048c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a37831451fe077ed61f4fe6d9629048c,
        type_description_1,
        par_self,
        var_fileobj,
        var_myfileobj
    );


    // Release cached frame.
    if ( frame_a37831451fe077ed61f4fe6d9629048c == cache_frame_a37831451fe077ed61f4fe6d9629048c )
    {
        Py_DECREF( frame_a37831451fe077ed61f4fe6d9629048c );
    }
    cache_frame_a37831451fe077ed61f4fe6d9629048c = NULL;

    assertFrameObject( frame_a37831451fe077ed61f4fe6d9629048c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_19_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_fileobj );
    Py_DECREF( var_fileobj );
    var_fileobj = NULL;

    Py_XDECREF( var_myfileobj );
    var_myfileobj = NULL;

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

    Py_XDECREF( var_fileobj );
    var_fileobj = NULL;

    Py_XDECREF( var_myfileobj );
    var_myfileobj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_19_close );
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


static PyObject *impl_gzip$$$function_20_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_zlib_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_feca9daa9f6449221de8f905adb706c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_feca9daa9f6449221de8f905adb706c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_feca9daa9f6449221de8f905adb706c5, codeobj_feca9daa9f6449221de8f905adb706c5, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_feca9daa9f6449221de8f905adb706c5 = cache_frame_feca9daa9f6449221de8f905adb706c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_feca9daa9f6449221de8f905adb706c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_feca9daa9f6449221de8f905adb706c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_feca9daa9f6449221de8f905adb706c5->m_frame.f_lineno = 322;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_not_closed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fileobj );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compress );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 325;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_zlib_mode );
            tmp_args_element_name_2 = par_zlib_mode;
            frame_feca9daa9f6449221de8f905adb706c5->m_frame.f_lineno = 325;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_flush, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 325;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_feca9daa9f6449221de8f905adb706c5->m_frame.f_lineno = 325;
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


                exception_lineno = 325;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fileobj );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_feca9daa9f6449221de8f905adb706c5->m_frame.f_lineno = 326;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_flush );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feca9daa9f6449221de8f905adb706c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feca9daa9f6449221de8f905adb706c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_feca9daa9f6449221de8f905adb706c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_feca9daa9f6449221de8f905adb706c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_feca9daa9f6449221de8f905adb706c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_feca9daa9f6449221de8f905adb706c5,
        type_description_1,
        par_self,
        par_zlib_mode
    );


    // Release cached frame.
    if ( frame_feca9daa9f6449221de8f905adb706c5 == cache_frame_feca9daa9f6449221de8f905adb706c5 )
    {
        Py_DECREF( frame_feca9daa9f6449221de8f905adb706c5 );
    }
    cache_frame_feca9daa9f6449221de8f905adb706c5 = NULL;

    assertFrameObject( frame_feca9daa9f6449221de8f905adb706c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_20_flush );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_zlib_mode );
    Py_DECREF( par_zlib_mode );
    par_zlib_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_zlib_mode );
    Py_DECREF( par_zlib_mode );
    par_zlib_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_20_flush );
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


static PyObject *impl_gzip$$$function_21_fileno( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_61b09b2c4ae4a5d053729970633863c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61b09b2c4ae4a5d053729970633863c5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61b09b2c4ae4a5d053729970633863c5, codeobj_61b09b2c4ae4a5d053729970633863c5, module_gzip, sizeof(void *) );
    frame_61b09b2c4ae4a5d053729970633863c5 = cache_frame_61b09b2c4ae4a5d053729970633863c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61b09b2c4ae4a5d053729970633863c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61b09b2c4ae4a5d053729970633863c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fileobj );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_61b09b2c4ae4a5d053729970633863c5->m_frame.f_lineno = 334;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fileno );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b09b2c4ae4a5d053729970633863c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b09b2c4ae4a5d053729970633863c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b09b2c4ae4a5d053729970633863c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61b09b2c4ae4a5d053729970633863c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61b09b2c4ae4a5d053729970633863c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61b09b2c4ae4a5d053729970633863c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61b09b2c4ae4a5d053729970633863c5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_61b09b2c4ae4a5d053729970633863c5 == cache_frame_61b09b2c4ae4a5d053729970633863c5 )
    {
        Py_DECREF( frame_61b09b2c4ae4a5d053729970633863c5 );
    }
    cache_frame_61b09b2c4ae4a5d053729970633863c5 = NULL;

    assertFrameObject( frame_61b09b2c4ae4a5d053729970633863c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_21_fileno );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_21_fileno );
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


static PyObject *impl_gzip$$$function_22_rewind( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bd371212580519ad8048c9b2dcd0207d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bd371212580519ad8048c9b2dcd0207d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd371212580519ad8048c9b2dcd0207d, codeobj_bd371212580519ad8048c9b2dcd0207d, module_gzip, sizeof(void *) );
    frame_bd371212580519ad8048c9b2dcd0207d = cache_frame_bd371212580519ad8048c9b2dcd0207d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd371212580519ad8048c9b2dcd0207d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd371212580519ad8048c9b2dcd0207d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "o";
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
            tmp_make_exception_arg_1 = const_str_digest_e5faffb71219ee16a4a785a356a6a62a;
            frame_bd371212580519ad8048c9b2dcd0207d->m_frame.f_lineno = 340;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 340;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__buffer );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bd371212580519ad8048c9b2dcd0207d->m_frame.f_lineno = 341;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_seek, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd371212580519ad8048c9b2dcd0207d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd371212580519ad8048c9b2dcd0207d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd371212580519ad8048c9b2dcd0207d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd371212580519ad8048c9b2dcd0207d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd371212580519ad8048c9b2dcd0207d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd371212580519ad8048c9b2dcd0207d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bd371212580519ad8048c9b2dcd0207d == cache_frame_bd371212580519ad8048c9b2dcd0207d )
    {
        Py_DECREF( frame_bd371212580519ad8048c9b2dcd0207d );
    }
    cache_frame_bd371212580519ad8048c9b2dcd0207d = NULL;

    assertFrameObject( frame_bd371212580519ad8048c9b2dcd0207d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_22_rewind );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_22_rewind );
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


static PyObject *impl_gzip$$$function_23_readable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c5b9848dd3732d55a5110b2440c1fb1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5b9848dd3732d55a5110b2440c1fb1b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5b9848dd3732d55a5110b2440c1fb1b, codeobj_c5b9848dd3732d55a5110b2440c1fb1b, module_gzip, sizeof(void *) );
    frame_c5b9848dd3732d55a5110b2440c1fb1b = cache_frame_c5b9848dd3732d55a5110b2440c1fb1b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5b9848dd3732d55a5110b2440c1fb1b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5b9848dd3732d55a5110b2440c1fb1b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5b9848dd3732d55a5110b2440c1fb1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5b9848dd3732d55a5110b2440c1fb1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5b9848dd3732d55a5110b2440c1fb1b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5b9848dd3732d55a5110b2440c1fb1b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5b9848dd3732d55a5110b2440c1fb1b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5b9848dd3732d55a5110b2440c1fb1b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5b9848dd3732d55a5110b2440c1fb1b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c5b9848dd3732d55a5110b2440c1fb1b == cache_frame_c5b9848dd3732d55a5110b2440c1fb1b )
    {
        Py_DECREF( frame_c5b9848dd3732d55a5110b2440c1fb1b );
    }
    cache_frame_c5b9848dd3732d55a5110b2440c1fb1b = NULL;

    assertFrameObject( frame_c5b9848dd3732d55a5110b2440c1fb1b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_23_readable );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_23_readable );
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


static PyObject *impl_gzip$$$function_24_writable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_103a26311ce21f1ae6010ac8c1f6b70a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_103a26311ce21f1ae6010ac8c1f6b70a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_103a26311ce21f1ae6010ac8c1f6b70a, codeobj_103a26311ce21f1ae6010ac8c1f6b70a, module_gzip, sizeof(void *) );
    frame_103a26311ce21f1ae6010ac8c1f6b70a = cache_frame_103a26311ce21f1ae6010ac8c1f6b70a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_103a26311ce21f1ae6010ac8c1f6b70a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_103a26311ce21f1ae6010ac8c1f6b70a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_103a26311ce21f1ae6010ac8c1f6b70a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_103a26311ce21f1ae6010ac8c1f6b70a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_103a26311ce21f1ae6010ac8c1f6b70a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_103a26311ce21f1ae6010ac8c1f6b70a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_103a26311ce21f1ae6010ac8c1f6b70a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_103a26311ce21f1ae6010ac8c1f6b70a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_103a26311ce21f1ae6010ac8c1f6b70a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_103a26311ce21f1ae6010ac8c1f6b70a == cache_frame_103a26311ce21f1ae6010ac8c1f6b70a )
    {
        Py_DECREF( frame_103a26311ce21f1ae6010ac8c1f6b70a );
    }
    cache_frame_103a26311ce21f1ae6010ac8c1f6b70a = NULL;

    assertFrameObject( frame_103a26311ce21f1ae6010ac8c1f6b70a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_24_writable );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_24_writable );
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


static PyObject *impl_gzip$$$function_25_seekable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_25_seekable );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_25_seekable );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_gzip$$$function_26_seek( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_offset = python_pars[ 1 ];
    PyObject *par_whence = python_pars[ 2 ];
    PyObject *var_count = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8eaa5ea2b0bebc90542a42e896baae1e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8eaa5ea2b0bebc90542a42e896baae1e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8eaa5ea2b0bebc90542a42e896baae1e, codeobj_8eaa5ea2b0bebc90542a42e896baae1e, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8eaa5ea2b0bebc90542a42e896baae1e = cache_frame_8eaa5ea2b0bebc90542a42e896baae1e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8eaa5ea2b0bebc90542a42e896baae1e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8eaa5ea2b0bebc90542a42e896baae1e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WRITE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_whence );
            tmp_compexpr_left_2 = par_whence;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 354;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SEEK_SET );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oooooo";
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
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_3;
                CHECK_OBJECT( par_whence );
                tmp_compexpr_left_3 = par_whence;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 355;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_3;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SEEK_CUR );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_assign_source_1;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_right_name_1;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_4 = par_self;
                    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_offset );
                    if ( tmp_left_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 356;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_offset );
                    tmp_right_name_1 = par_offset;
                    tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_left_name_1 );
                    if ( tmp_assign_source_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 356;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_offset;
                        assert( old != NULL );
                        par_offset = tmp_assign_source_1;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    tmp_make_exception_arg_1 = const_str_digest_7476e1c9fcc0a3580311773a03a49f36;
                    frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame.f_lineno = 358;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 358;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_3:;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_5;
            if ( par_offset == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 359;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_4 = par_offset;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_offset );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 359;
                type_description_1 = "oooooo";
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
                tmp_make_exception_arg_2 = const_str_digest_ccaef012ca2eab02590e133da28f2780;
                frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame.f_lineno = 360;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 360;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_6;
            if ( par_offset == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 361;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = par_offset;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_offset );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_count == NULL );
            var_count = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_bytes_chr_0;
            tmp_right_name_3 = const_int_pos_1024;
            tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_chunk == NULL );
            var_chunk = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_count );
            tmp_left_name_4 = var_count;
            tmp_right_name_4 = const_int_pos_1024;
            tmp_xrange_low_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 363;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 363;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 363;
                type_description_1 = "oooooo";
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
                    type_description_1 = "oooooo";
                    exception_lineno = 363;
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
                PyObject *old = var_i;
                var_i = tmp_assign_source_6;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( var_chunk );
            tmp_args_element_name_1 = var_chunk;
            frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame.f_lineno = 364;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
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

        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_write );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = const_bytes_chr_0;
            CHECK_OBJECT( var_count );
            tmp_left_name_6 = var_count;
            tmp_right_name_6 = const_int_pos_1024;
            tmp_right_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 365;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 365;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame.f_lineno = 365;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_mode );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_READ );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "READ" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 366;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_5 = tmp_mvar_value_4;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "oooooo";
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_called_instance_2 = par_self;
                frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame.f_lineno = 367;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__check_not_closed );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__buffer );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 368;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_offset );
                tmp_args_element_name_3 = par_offset;
                CHECK_OBJECT( par_whence );
                tmp_args_element_name_4 = par_whence;
                frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame.f_lineno = 368;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_seek, call_args );
                }

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 368;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_5:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_offset );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eaa5ea2b0bebc90542a42e896baae1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eaa5ea2b0bebc90542a42e896baae1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eaa5ea2b0bebc90542a42e896baae1e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8eaa5ea2b0bebc90542a42e896baae1e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8eaa5ea2b0bebc90542a42e896baae1e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8eaa5ea2b0bebc90542a42e896baae1e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8eaa5ea2b0bebc90542a42e896baae1e,
        type_description_1,
        par_self,
        par_offset,
        par_whence,
        var_count,
        var_chunk,
        var_i
    );


    // Release cached frame.
    if ( frame_8eaa5ea2b0bebc90542a42e896baae1e == cache_frame_8eaa5ea2b0bebc90542a42e896baae1e )
    {
        Py_DECREF( frame_8eaa5ea2b0bebc90542a42e896baae1e );
    }
    cache_frame_8eaa5ea2b0bebc90542a42e896baae1e = NULL;

    assertFrameObject( frame_8eaa5ea2b0bebc90542a42e896baae1e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_26_seek );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

    CHECK_OBJECT( (PyObject *)par_whence );
    Py_DECREF( par_whence );
    par_whence = NULL;

    Py_XDECREF( var_count );
    var_count = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    Py_XDECREF( par_offset );
    par_offset = NULL;

    CHECK_OBJECT( (PyObject *)par_whence );
    Py_DECREF( par_whence );
    par_whence = NULL;

    Py_XDECREF( var_count );
    var_count = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_26_seek );
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


static PyObject *impl_gzip$$$function_27_readline( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a87ab59ccd3737a53a033e93f27b14de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a87ab59ccd3737a53a033e93f27b14de = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a87ab59ccd3737a53a033e93f27b14de, codeobj_a87ab59ccd3737a53a033e93f27b14de, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_a87ab59ccd3737a53a033e93f27b14de = cache_frame_a87ab59ccd3737a53a033e93f27b14de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a87ab59ccd3737a53a033e93f27b14de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a87ab59ccd3737a53a033e93f27b14de ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_a87ab59ccd3737a53a033e93f27b14de->m_frame.f_lineno = 373;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_not_closed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__buffer );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_args_element_name_1 = par_size;
        frame_a87ab59ccd3737a53a033e93f27b14de->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_readline, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a87ab59ccd3737a53a033e93f27b14de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a87ab59ccd3737a53a033e93f27b14de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a87ab59ccd3737a53a033e93f27b14de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a87ab59ccd3737a53a033e93f27b14de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a87ab59ccd3737a53a033e93f27b14de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a87ab59ccd3737a53a033e93f27b14de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a87ab59ccd3737a53a033e93f27b14de,
        type_description_1,
        par_self,
        par_size
    );


    // Release cached frame.
    if ( frame_a87ab59ccd3737a53a033e93f27b14de == cache_frame_a87ab59ccd3737a53a033e93f27b14de )
    {
        Py_DECREF( frame_a87ab59ccd3737a53a033e93f27b14de );
    }
    cache_frame_a87ab59ccd3737a53a033e93f27b14de = NULL;

    assertFrameObject( frame_a87ab59ccd3737a53a033e93f27b14de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_27_readline );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_27_readline );
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


static PyObject *impl_gzip$$$function_28___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_93f3cd247b066ee3c98ab925c4f358bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_93f3cd247b066ee3c98ab925c4f358bf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93f3cd247b066ee3c98ab925c4f358bf, codeobj_93f3cd247b066ee3c98ab925c4f358bf, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_93f3cd247b066ee3c98ab925c4f358bf = cache_frame_93f3cd247b066ee3c98ab925c4f358bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93f3cd247b066ee3c98ab925c4f358bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93f3cd247b066ee3c98ab925c4f358bf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "__class__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__PaddedFile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__PaddedFile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_PaddedFile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fp );
        tmp_args_element_name_1 = par_fp;
        frame_93f3cd247b066ee3c98ab925c4f358bf->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decompressobj );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_wbits;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 380;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MAX_WBITS );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 380;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 380;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_93f3cd247b066ee3c98ab925c4f358bf->m_frame.f_lineno = 379;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__new_member, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__last_mtime, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93f3cd247b066ee3c98ab925c4f358bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93f3cd247b066ee3c98ab925c4f358bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93f3cd247b066ee3c98ab925c4f358bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93f3cd247b066ee3c98ab925c4f358bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93f3cd247b066ee3c98ab925c4f358bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93f3cd247b066ee3c98ab925c4f358bf,
        type_description_1,
        par_self,
        par_fp,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_93f3cd247b066ee3c98ab925c4f358bf == cache_frame_93f3cd247b066ee3c98ab925c4f358bf )
    {
        Py_DECREF( frame_93f3cd247b066ee3c98ab925c4f358bf );
    }
    cache_frame_93f3cd247b066ee3c98ab925c4f358bf = NULL;

    assertFrameObject( frame_93f3cd247b066ee3c98ab925c4f358bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_28___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_28___init__ );
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


static PyObject *impl_gzip$$$function_29__init_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f61eaabdf6de7394344208f688deb61e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f61eaabdf6de7394344208f688deb61e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f61eaabdf6de7394344208f688deb61e, codeobj_f61eaabdf6de7394344208f688deb61e, module_gzip, sizeof(void *) );
    frame_f61eaabdf6de7394344208f688deb61e = cache_frame_f61eaabdf6de7394344208f688deb61e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f61eaabdf6de7394344208f688deb61e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f61eaabdf6de7394344208f688deb61e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_f61eaabdf6de7394344208f688deb61e->m_frame.f_lineno = 386;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_crc32, &PyTuple_GET_ITEM( const_tuple_bytes_empty_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__crc, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__stream_size, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f61eaabdf6de7394344208f688deb61e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f61eaabdf6de7394344208f688deb61e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f61eaabdf6de7394344208f688deb61e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f61eaabdf6de7394344208f688deb61e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f61eaabdf6de7394344208f688deb61e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f61eaabdf6de7394344208f688deb61e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f61eaabdf6de7394344208f688deb61e == cache_frame_f61eaabdf6de7394344208f688deb61e )
    {
        Py_DECREF( frame_f61eaabdf6de7394344208f688deb61e );
    }
    cache_frame_f61eaabdf6de7394344208f688deb61e = NULL;

    assertFrameObject( frame_f61eaabdf6de7394344208f688deb61e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_29__init_read );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_29__init_read );
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


static PyObject *impl_gzip$$$function_30__read_exact( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_data = NULL;
    PyObject *var_b = NULL;
    struct Nuitka_FrameObject *frame_feefe0dbab19359a89f2be8b8fec2471;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_feefe0dbab19359a89f2be8b8fec2471 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_feefe0dbab19359a89f2be8b8fec2471, codeobj_feefe0dbab19359a89f2be8b8fec2471, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_feefe0dbab19359a89f2be8b8fec2471 = cache_frame_feefe0dbab19359a89f2be8b8fec2471;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_feefe0dbab19359a89f2be8b8fec2471 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_feefe0dbab19359a89f2be8b8fec2471 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_feefe0dbab19359a89f2be8b8fec2471->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_data );
        tmp_len_arg_1 = var_data;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_1 = par_n;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
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
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_read );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_left_name_1 = par_n;
        CHECK_OBJECT( var_data );
        tmp_len_arg_2 = var_data;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_feefe0dbab19359a89f2be8b8fec2471->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_b );
        tmp_operand_name_2 = var_b;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "oooo";
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_c08d3c76ccca6caa2dd7388f9bece273;
            frame_feefe0dbab19359a89f2be8b8fec2471->m_frame.f_lineno = 400;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_EOFError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 400;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_data );
        tmp_left_name_2 = var_data;
        CHECK_OBJECT( var_b );
        tmp_right_name_2 = var_b;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        var_data = tmp_assign_source_3;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feefe0dbab19359a89f2be8b8fec2471 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_feefe0dbab19359a89f2be8b8fec2471 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_feefe0dbab19359a89f2be8b8fec2471, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_feefe0dbab19359a89f2be8b8fec2471->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_feefe0dbab19359a89f2be8b8fec2471, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_feefe0dbab19359a89f2be8b8fec2471,
        type_description_1,
        par_self,
        par_n,
        var_data,
        var_b
    );


    // Release cached frame.
    if ( frame_feefe0dbab19359a89f2be8b8fec2471 == cache_frame_feefe0dbab19359a89f2be8b8fec2471 )
    {
        Py_DECREF( frame_feefe0dbab19359a89f2be8b8fec2471 );
    }
    cache_frame_feefe0dbab19359a89f2be8b8fec2471 = NULL;

    assertFrameObject( frame_feefe0dbab19359a89f2be8b8fec2471 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_data );
    tmp_return_value = var_data;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_30__read_exact );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_30__read_exact );
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


static PyObject *impl_gzip$$$function_31__read_gzip_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_magic = NULL;
    PyObject *var_method = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_extra_len = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1c934b938b8c30606154125a9e895ad2;
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
    static struct Nuitka_FrameObject *cache_frame_1c934b938b8c30606154125a9e895ad2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c934b938b8c30606154125a9e895ad2, codeobj_1c934b938b8c30606154125a9e895ad2, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1c934b938b8c30606154125a9e895ad2 = cache_frame_1c934b938b8c30606154125a9e895ad2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c934b938b8c30606154125a9e895ad2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c934b938b8c30606154125a9e895ad2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 406;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_magic == NULL );
        var_magic = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_magic );
        tmp_compexpr_left_1 = var_magic;
        tmp_compexpr_right_1 = const_bytes_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_magic );
        tmp_compexpr_left_2 = var_magic;
        tmp_compexpr_right_2 = const_bytes_digest_d0ab049cf07d1ec9fe7fbaf9b131e230;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_fd4d6e5464e9c877a68e93aa621bc02f;
            CHECK_OBJECT( var_magic );
            tmp_right_name_1 = var_magic;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 411;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 411;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_struct );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_unpack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = const_str_digest_c1ca5a5cb00de96d0a9cab7839084db9;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 414;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__read_exact, &PyTuple_GET_ITEM( const_tuple_int_pos_8_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooo";
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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
            exception_lineno = 413;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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
            exception_lineno = 413;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooo";
            exception_lineno = 413;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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
                    exception_lineno = 413;
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
            exception_lineno = 413;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_method == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_method = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_flag == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_flag = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assattr_name_1 = tmp_tuple_unpack_1__element_3;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__last_mtime, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
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
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_method );
        tmp_compexpr_left_3 = var_method;
        tmp_compexpr_right_3 = const_int_pos_8;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_55221f0f87b2a713e74b425a8a6beb9c;
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 416;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 416;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_flag );
        tmp_left_name_2 = var_flag;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FEXTRA );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FEXTRA );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FEXTRA" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 418;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = tmp_mvar_value_2;
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_op_bitand_res_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_1 );

            exception_lineno = 418;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_1 );
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_instance_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_struct );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 420;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_unpack );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            tmp_args_element_name_3 = const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 420;
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__read_exact, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 420;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 420;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
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
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 0, 1 );
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


                type_description_1 = "oooooo";
                exception_lineno = 420;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
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

                        type_description_1 = "oooooo";
                        exception_lineno = 420;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooo";
                exception_lineno = 420;
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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
            assert( var_extra_len == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_extra_len = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT( var_extra_len );
            tmp_args_element_name_5 = var_extra_len;
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 421;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__read_exact, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 421;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_op_bitand_res_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_flag );
        tmp_left_name_3 = var_flag;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FNAME );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FNAME );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FNAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_4;
        tmp_op_bitand_res_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_op_bitand_res_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_op_bitand_res_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_2 );

            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_2 );
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        loop_start_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__fp );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 425;
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_s;
                var_s = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_s );
            tmp_operand_name_1 = var_s;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooo";
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
            CHECK_OBJECT( var_s );
            tmp_compexpr_left_4 = var_s;
            tmp_compexpr_right_4 = const_bytes_chr_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_6 = tmp_or_left_value_1;
            or_end_1:;
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
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_1;
        loop_end_1:;
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_op_bitand_res_3;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_flag );
        tmp_left_name_4 = var_flag;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FCOMMENT );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FCOMMENT );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FCOMMENT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = tmp_mvar_value_5;
        tmp_op_bitand_res_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_op_bitand_res_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_op_bitand_res_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_3 );

            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_3 );
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        loop_start_2:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__fp );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 431;
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_s;
                var_s = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_s );
            tmp_operand_name_2 = var_s;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_s );
            tmp_compexpr_left_5 = var_s;
            tmp_compexpr_right_5 = const_bytes_chr_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_condition_result_8 = tmp_or_left_value_2;
            or_end_2:;
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
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_2;
        loop_end_2:;
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_op_bitand_res_4;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_flag );
        tmp_left_name_5 = var_flag;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FHCRC );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FHCRC );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FHCRC" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 434;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = tmp_mvar_value_6;
        tmp_op_bitand_res_4 = BINARY_OPERATION( PyNumber_And, tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_op_bitand_res_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_op_bitand_res_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_4 );

            exception_lineno = 434;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_4 );
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
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_7 = par_self;
            frame_1c934b938b8c30606154125a9e895ad2->m_frame.f_lineno = 435;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain__read_exact, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c934b938b8c30606154125a9e895ad2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c934b938b8c30606154125a9e895ad2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c934b938b8c30606154125a9e895ad2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c934b938b8c30606154125a9e895ad2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c934b938b8c30606154125a9e895ad2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c934b938b8c30606154125a9e895ad2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c934b938b8c30606154125a9e895ad2,
        type_description_1,
        par_self,
        var_magic,
        var_method,
        var_flag,
        var_extra_len,
        var_s
    );


    // Release cached frame.
    if ( frame_1c934b938b8c30606154125a9e895ad2 == cache_frame_1c934b938b8c30606154125a9e895ad2 )
    {
        Py_DECREF( frame_1c934b938b8c30606154125a9e895ad2 );
    }
    cache_frame_1c934b938b8c30606154125a9e895ad2 = NULL;

    assertFrameObject( frame_1c934b938b8c30606154125a9e895ad2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_31__read_gzip_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_magic );
    Py_DECREF( var_magic );
    var_magic = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_extra_len );
    var_extra_len = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    Py_XDECREF( var_magic );
    var_magic = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_extra_len );
    var_extra_len = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_31__read_gzip_header );
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


static PyObject *impl_gzip$$$function_32_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_buf = NULL;
    PyObject *var_uncompress = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_480dc5126a3e8c71e8743f282b8b4572;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_480dc5126a3e8c71e8743f282b8b4572 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_480dc5126a3e8c71e8743f282b8b4572, codeobj_480dc5126a3e8c71e8743f282b8b4572, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_480dc5126a3e8c71e8743f282b8b4572 = cache_frame_480dc5126a3e8c71e8743f282b8b4572;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_480dc5126a3e8c71e8743f282b8b4572 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_480dc5126a3e8c71e8743f282b8b4572 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_size );
        tmp_compexpr_left_1 = par_size;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooo";
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 440;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readall );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 440;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_size );
        tmp_operand_name_1 = par_size;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "oooo";
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
        tmp_return_value = const_bytes_empty;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__decompressor );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eof );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 449;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 454;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__read_eof );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__new_member, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__decomp_factory );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__decomp_args );
            if ( tmp_dircall_arg2_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );

                exception_lineno = 457;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assattr_name_2 = impl___internal__$$$function_9_complex_call_helper_star_dict( dir_call_args );
            }
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__decompressor, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__new_member );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 459;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 462;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__init_read );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 462;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 463;
            tmp_operand_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain__read_gzip_header );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "oooo";
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
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_assattr_target_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__pos );
                if ( tmp_assattr_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 464;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__size, tmp_assattr_name_3 );
                Py_DECREF( tmp_assattr_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 464;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
            }
            tmp_return_value = const_bytes_empty;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_5:;
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__new_member, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 466;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__fp );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_read );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_1;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_DEFAULT_BUFFER_SIZE );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 469;
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


            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_buf;
            var_buf = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__decompressor );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buf );
        tmp_args_element_name_2 = var_buf;
        CHECK_OBJECT( par_size );
        tmp_args_element_name_3 = par_size;
        frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_decompress, call_args );
        }

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uncompress;
            var_uncompress = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__decompressor );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_unconsumed_tail );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_bytes_empty;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__fp );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_prepend );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_16 = par_self;
            tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__decompressor );
            if ( tmp_source_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 473;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_unconsumed_tail );
            Py_DECREF( tmp_source_name_15 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 473;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 473;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_17;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__decompressor );
            if ( tmp_source_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 474;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_unused_data );
            Py_DECREF( tmp_source_name_17 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 474;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_bytes_empty;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 474;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_19;
                PyObject *tmp_source_name_20;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_source_name_21;
                PyObject *tmp_source_name_22;
                CHECK_OBJECT( par_self );
                tmp_source_name_20 = par_self;
                tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__fp );
                if ( tmp_source_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 477;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_prepend );
                Py_DECREF( tmp_source_name_19 );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 477;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_22 = par_self;
                tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__decompressor );
                if ( tmp_source_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 477;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_unused_data );
                Py_DECREF( tmp_source_name_21 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 477;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 477;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 477;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_7:;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_uncompress );
        tmp_compexpr_left_4 = var_uncompress;
        tmp_compexpr_right_4 = const_bytes_empty;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "oooo";
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
        goto loop_end_1;
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_buf );
        tmp_compexpr_left_5 = var_buf;
        tmp_compexpr_right_5 = const_bytes_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 481;
            type_description_1 = "oooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_c08d3c76ccca6caa2dd7388f9bece273;
            frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 482;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_EOFError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 482;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_9:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_self );
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT( var_uncompress );
        tmp_args_element_name_6 = var_uncompress;
        frame_480dc5126a3e8c71e8743f282b8b4572->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain__add_read_data, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_23;
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__pos );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooo";
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
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        CHECK_OBJECT( var_uncompress );
        tmp_len_arg_1 = var_uncompress;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_5 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__pos, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_480dc5126a3e8c71e8743f282b8b4572 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_480dc5126a3e8c71e8743f282b8b4572 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_480dc5126a3e8c71e8743f282b8b4572 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_480dc5126a3e8c71e8743f282b8b4572, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_480dc5126a3e8c71e8743f282b8b4572->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_480dc5126a3e8c71e8743f282b8b4572, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_480dc5126a3e8c71e8743f282b8b4572,
        type_description_1,
        par_self,
        par_size,
        var_buf,
        var_uncompress
    );


    // Release cached frame.
    if ( frame_480dc5126a3e8c71e8743f282b8b4572 == cache_frame_480dc5126a3e8c71e8743f282b8b4572 )
    {
        Py_DECREF( frame_480dc5126a3e8c71e8743f282b8b4572 );
    }
    cache_frame_480dc5126a3e8c71e8743f282b8b4572 = NULL;

    assertFrameObject( frame_480dc5126a3e8c71e8743f282b8b4572 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    CHECK_OBJECT( var_uncompress );
    tmp_return_value = var_uncompress;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_32_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_uncompress );
    var_uncompress = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_uncompress );
    var_uncompress = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_32_read );
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


static PyObject *impl_gzip$$$function_33__add_read_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_dd3f06b844d7a1a28782fca8d141a363;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dd3f06b844d7a1a28782fca8d141a363 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd3f06b844d7a1a28782fca8d141a363, codeobj_dd3f06b844d7a1a28782fca8d141a363, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_dd3f06b844d7a1a28782fca8d141a363 = cache_frame_dd3f06b844d7a1a28782fca8d141a363;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd3f06b844d7a1a28782fca8d141a363 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd3f06b844d7a1a28782fca8d141a363 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 490;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_crc32 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__crc );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 490;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dd3f06b844d7a1a28782fca8d141a363->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__crc, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__stream_size );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 491;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__stream_size, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd3f06b844d7a1a28782fca8d141a363 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd3f06b844d7a1a28782fca8d141a363 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd3f06b844d7a1a28782fca8d141a363, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd3f06b844d7a1a28782fca8d141a363->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd3f06b844d7a1a28782fca8d141a363, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd3f06b844d7a1a28782fca8d141a363,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_dd3f06b844d7a1a28782fca8d141a363 == cache_frame_dd3f06b844d7a1a28782fca8d141a363 )
    {
        Py_DECREF( frame_dd3f06b844d7a1a28782fca8d141a363 );
    }
    cache_frame_dd3f06b844d7a1a28782fca8d141a363 = NULL;

    assertFrameObject( frame_dd3f06b844d7a1a28782fca8d141a363 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_33__add_read_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_33__add_read_data );
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


static PyObject *impl_gzip$$$function_34__read_eof( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_crc32 = NULL;
    PyObject *var_isize = NULL;
    PyObject *var_c = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6187a10ac4c16f09342d387c9cc7d5ab;
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
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6187a10ac4c16f09342d387c9cc7d5ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6187a10ac4c16f09342d387c9cc7d5ab, codeobj_6187a10ac4c16f09342d387c9cc7d5ab, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6187a10ac4c16f09342d387c9cc7d5ab = cache_frame_6187a10ac4c16f09342d387c9cc7d5ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6187a10ac4c16f09342d387c9cc7d5ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6187a10ac4c16f09342d387c9cc7d5ab ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_struct );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 498;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_unpack );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = const_str_digest_cc451c23f2bbc7009e01c93c325b5d1f;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame.f_lineno = 498;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__read_exact, &PyTuple_GET_ITEM( const_tuple_int_pos_8_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 498;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame.f_lineno = 498;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "oooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 498;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 498;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooo";
                    exception_lineno = 498;
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

            type_description_1 = "oooo";
            exception_lineno = 498;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_crc32 == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_crc32 = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_isize == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_isize = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_crc32 );
        tmp_compexpr_left_1 = var_crc32;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__crc );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "oooo";
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_hex_arg_1;
            PyObject *tmp_hex_arg_2;
            PyObject *tmp_source_name_3;
            tmp_left_name_1 = const_str_digest_f774b987a4e5c7651e538a1f2f5e414c;
            CHECK_OBJECT( var_crc32 );
            tmp_hex_arg_1 = var_crc32;
            tmp_tuple_element_1 = BUILTIN_HEX( tmp_hex_arg_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_hex_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__crc );
            if ( tmp_hex_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 501;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = BUILTIN_HEX( tmp_hex_arg_2 );
            Py_DECREF( tmp_hex_arg_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 501;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame.f_lineno = 500;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 500;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_isize );
            tmp_compexpr_left_2 = var_isize;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__stream_size );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 502;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_4294967295;
            tmp_compexpr_right_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 502;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 502;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_ebe4506926ad0a75ec7333eef3efb42e;
                frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame.f_lineno = 503;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 503;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_bytes_chr_0;
        assert( var_c == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_c = tmp_assign_source_6;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_c );
        tmp_compexpr_left_3 = var_c;
        tmp_compexpr_right_3 = const_bytes_chr_0;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "oooo";
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
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__fp );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame.f_lineno = 510;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            assert( old != NULL );
            var_c = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_c );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_c );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__fp );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 512;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_c );
            tmp_args_element_name_3 = var_c;
            frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame.f_lineno = 512;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_prepend, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 512;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6187a10ac4c16f09342d387c9cc7d5ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6187a10ac4c16f09342d387c9cc7d5ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6187a10ac4c16f09342d387c9cc7d5ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6187a10ac4c16f09342d387c9cc7d5ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6187a10ac4c16f09342d387c9cc7d5ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6187a10ac4c16f09342d387c9cc7d5ab,
        type_description_1,
        par_self,
        var_crc32,
        var_isize,
        var_c
    );


    // Release cached frame.
    if ( frame_6187a10ac4c16f09342d387c9cc7d5ab == cache_frame_6187a10ac4c16f09342d387c9cc7d5ab )
    {
        Py_DECREF( frame_6187a10ac4c16f09342d387c9cc7d5ab );
    }
    cache_frame_6187a10ac4c16f09342d387c9cc7d5ab = NULL;

    assertFrameObject( frame_6187a10ac4c16f09342d387c9cc7d5ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_34__read_eof );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_crc32 );
    Py_DECREF( var_crc32 );
    var_crc32 = NULL;

    CHECK_OBJECT( (PyObject *)var_isize );
    Py_DECREF( var_isize );
    var_isize = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

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

    Py_XDECREF( var_crc32 );
    var_crc32 = NULL;

    Py_XDECREF( var_isize );
    var_isize = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_34__read_eof );
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


static PyObject *impl_gzip$$$function_35__rewind( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f6b840a48db8107bfc99896d1e352ec8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f6b840a48db8107bfc99896d1e352ec8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6b840a48db8107bfc99896d1e352ec8, codeobj_f6b840a48db8107bfc99896d1e352ec8, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_f6b840a48db8107bfc99896d1e352ec8 = cache_frame_f6b840a48db8107bfc99896d1e352ec8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6b840a48db8107bfc99896d1e352ec8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6b840a48db8107bfc99896d1e352ec8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "__class__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 515;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 515;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_f6b840a48db8107bfc99896d1e352ec8->m_frame.f_lineno = 515;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__rewind );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 515;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__new_member, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6b840a48db8107bfc99896d1e352ec8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6b840a48db8107bfc99896d1e352ec8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6b840a48db8107bfc99896d1e352ec8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6b840a48db8107bfc99896d1e352ec8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6b840a48db8107bfc99896d1e352ec8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6b840a48db8107bfc99896d1e352ec8,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_f6b840a48db8107bfc99896d1e352ec8 == cache_frame_f6b840a48db8107bfc99896d1e352ec8 )
    {
        Py_DECREF( frame_f6b840a48db8107bfc99896d1e352ec8 );
    }
    cache_frame_f6b840a48db8107bfc99896d1e352ec8 = NULL;

    assertFrameObject( frame_f6b840a48db8107bfc99896d1e352ec8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_35__rewind );
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_35__rewind );
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


static PyObject *impl_gzip$$$function_36_compress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *par_compresslevel = python_pars[ 1 ];
    PyObject *var_buf = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_610489d2892837cfb463076fc9b95151;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_610489d2892837cfb463076fc9b95151 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_610489d2892837cfb463076fc9b95151, codeobj_610489d2892837cfb463076fc9b95151, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_610489d2892837cfb463076fc9b95151 = cache_frame_610489d2892837cfb463076fc9b95151;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_610489d2892837cfb463076fc9b95151 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_610489d2892837cfb463076fc9b95151 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 522;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 522;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_BytesIO );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_buf == NULL );
        var_buf = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipFile );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipFile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 523;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_dict_key_1 = const_str_plain_fileobj;
        CHECK_OBJECT( var_buf );
        tmp_dict_value_1 = var_buf;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_mode;
        tmp_dict_value_2 = const_str_plain_wb;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_compresslevel;
        CHECK_OBJECT( par_compresslevel );
        tmp_dict_value_3 = par_compresslevel;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 523;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 523;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_6 = tmp_with_1__enter;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_f = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_f );
        tmp_called_instance_2 = var_f;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_write, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_610489d2892837cfb463076fc9b95151, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_610489d2892837cfb463076fc9b95151, exception_keeper_lineno_1 );
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


            exception_lineno = 523;
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
            frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 523;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
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
                exception_lineno = 523;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_610489d2892837cfb463076fc9b95151->m_frame) frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 523;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_610489d2892837cfb463076fc9b95151->m_frame) frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = exception_tb->tb_lineno;
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
    NUITKA_CANNOT_GET_HERE( gzip$$$function_36_compress );
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
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 523;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 523;
                type_description_1 = "oooo";
                goto try_except_handler_2;
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
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 523;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
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
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_buf );
        tmp_called_instance_3 = var_buf;
        frame_610489d2892837cfb463076fc9b95151->m_frame.f_lineno = 525;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getvalue );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_610489d2892837cfb463076fc9b95151 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_610489d2892837cfb463076fc9b95151 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_610489d2892837cfb463076fc9b95151 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_610489d2892837cfb463076fc9b95151, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_610489d2892837cfb463076fc9b95151->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_610489d2892837cfb463076fc9b95151, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_610489d2892837cfb463076fc9b95151,
        type_description_1,
        par_data,
        par_compresslevel,
        var_buf,
        var_f
    );


    // Release cached frame.
    if ( frame_610489d2892837cfb463076fc9b95151 == cache_frame_610489d2892837cfb463076fc9b95151 )
    {
        Py_DECREF( frame_610489d2892837cfb463076fc9b95151 );
    }
    cache_frame_610489d2892837cfb463076fc9b95151 = NULL;

    assertFrameObject( frame_610489d2892837cfb463076fc9b95151 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_36_compress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_compresslevel );
    Py_DECREF( par_compresslevel );
    par_compresslevel = NULL;

    CHECK_OBJECT( (PyObject *)var_buf );
    Py_DECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_compresslevel );
    Py_DECREF( par_compresslevel );
    par_compresslevel = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_36_compress );
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


static PyObject *impl_gzip$$$function_37_decompress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_1640d49a2b53890467b396c981b1544a;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_1640d49a2b53890467b396c981b1544a = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1640d49a2b53890467b396c981b1544a, codeobj_1640d49a2b53890467b396c981b1544a, module_gzip, sizeof(void *)+sizeof(void *) );
    frame_1640d49a2b53890467b396c981b1544a = cache_frame_1640d49a2b53890467b396c981b1544a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1640d49a2b53890467b396c981b1544a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1640d49a2b53890467b396c981b1544a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipFile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipFile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 531;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_fileobj;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 531;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_BytesIO, call_args );
        }

        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_1 = "oo";
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


            exception_lineno = 531;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_f );
        tmp_called_instance_2 = var_f;
        frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 532;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_read );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 532;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_37_decompress );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1640d49a2b53890467b396c981b1544a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1640d49a2b53890467b396c981b1544a, exception_keeper_lineno_1 );
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


            exception_lineno = 531;
            type_description_1 = "oo";
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
            nuitka_bool tmp_assign_source_6;
            tmp_assign_source_6 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_6;
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
            frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "oo";
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
                exception_lineno = 531;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_1640d49a2b53890467b396c981b1544a->m_frame) frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 531;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1640d49a2b53890467b396c981b1544a->m_frame) frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_37_decompress );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_4 = tmp_with_1__exit;
        frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 531;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_return_handler_2;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 531;
                type_description_1 = "oo";
                goto try_except_handler_2;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_1640d49a2b53890467b396c981b1544a->m_frame.f_lineno = 531;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1640d49a2b53890467b396c981b1544a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1640d49a2b53890467b396c981b1544a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1640d49a2b53890467b396c981b1544a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1640d49a2b53890467b396c981b1544a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1640d49a2b53890467b396c981b1544a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1640d49a2b53890467b396c981b1544a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1640d49a2b53890467b396c981b1544a,
        type_description_1,
        par_data,
        var_f
    );


    // Release cached frame.
    if ( frame_1640d49a2b53890467b396c981b1544a == cache_frame_1640d49a2b53890467b396c981b1544a )
    {
        Py_DECREF( frame_1640d49a2b53890467b396c981b1544a );
    }
    cache_frame_1640d49a2b53890467b396c981b1544a = NULL;

    assertFrameObject( frame_1640d49a2b53890467b396c981b1544a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_37_decompress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_37_decompress );
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


static PyObject *impl_gzip$$$function_38__test( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_args = NULL;
    PyObject *var_decompress = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_f = NULL;
    PyObject *var_g = NULL;
    PyObject *var_chunk = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_748b7c3cbd0a90d1179da71e9b127881;
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
    static struct Nuitka_FrameObject *cache_frame_748b7c3cbd0a90d1179da71e9b127881 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_748b7c3cbd0a90d1179da71e9b127881, codeobj_748b7c3cbd0a90d1179da71e9b127881, module_gzip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_748b7c3cbd0a90d1179da71e9b127881 = cache_frame_748b7c3cbd0a90d1179da71e9b127881;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_748b7c3cbd0a90d1179da71e9b127881 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_748b7c3cbd0a90d1179da71e9b127881 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 539;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_argv );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_args == NULL );
        var_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_args );
        tmp_and_left_value_1 = var_args;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( var_args );
        tmp_subscribed_name_2 = var_args;
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_digest_b345f7ac08de941e36d960ec9fd0356a;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 540;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_assign_source_2 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_decompress == NULL );
        var_decompress = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_decompress );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_decompress );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 541;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_args );
            tmp_subscribed_name_3 = var_args;
            tmp_subscript_name_3 = const_slice_int_pos_1_none_none;
            tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 542;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_args;
                assert( old != NULL );
                var_args = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_args );
        tmp_operand_name_1 = var_args;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 543;
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
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = LIST_COPY( const_list_str_chr_45_list );
            {
                PyObject *old = var_args;
                assert( old != NULL );
                var_args = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        if ( var_args == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 545;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = var_args;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "oooooo";
                exception_lineno = 545;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_7;
            Py_INCREF( var_arg );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_decompress );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_decompress );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_arg );
            tmp_compexpr_left_2 = var_arg;
            tmp_compexpr_right_2 = const_str_chr_45;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 547;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_source_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipFile );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipFile" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 548;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                tmp_dict_key_1 = const_str_plain_filename;
                tmp_dict_value_1 = const_str_empty;
                tmp_kw_name_1 = _PyDict_NewPresized( 3 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_mode;
                tmp_dict_value_2 = const_str_plain_rb;
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_fileobj;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_kw_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 548;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_3 = tmp_mvar_value_3;
                tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stdin );
                if ( tmp_source_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_1 );

                    exception_lineno = 548;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_buffer );
                Py_DECREF( tmp_source_name_2 );
                if ( tmp_dict_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_1 );

                    exception_lineno = 548;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
                Py_DECREF( tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 548;
                tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 548;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_f;
                    var_f = tmp_assign_source_8;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_source_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

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

                    exception_lineno = 549;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stdout );
                if ( tmp_source_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 549;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_buffer );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 549;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_g;
                    var_g = tmp_assign_source_9;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                CHECK_OBJECT( var_arg );
                tmp_subscribed_name_4 = var_arg;
                tmp_subscript_name_4 = const_slice_int_neg_3_none_none;
                tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 551;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_compexpr_right_3 = const_str_digest_662720bcb38208f53dc17ad51de4c080;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 551;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_1;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_operand_name_2;
                    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_print );
                    assert( tmp_called_name_2 != NULL );
                    tmp_args_element_name_1 = const_str_digest_5489c98ed857c9bc9a044535b80853d9;
                    CHECK_OBJECT( var_arg );
                    tmp_operand_name_2 = var_arg;
                    tmp_args_element_name_2 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_2 );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 552;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 552;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_call_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 552;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_1 );
                }
                goto loop_start_1;
                branch_no_5:;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_open );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 554;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                CHECK_OBJECT( var_arg );
                tmp_args_element_name_3 = var_arg;
                tmp_args_element_name_4 = const_str_plain_rb;
                frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 554;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 554;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_f;
                    var_f = tmp_assign_source_10;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_builtins );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 555;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_6 = tmp_mvar_value_6;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_open );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 555;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_arg );
                tmp_subscribed_name_5 = var_arg;
                tmp_subscript_name_5 = const_slice_none_int_neg_3_none;
                tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 555;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_6 = const_str_plain_wb;
                frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 555;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 555;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_g;
                    var_g = tmp_assign_source_11;
                    Py_XDECREF( old );
                }

            }
            branch_end_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_arg );
            tmp_compexpr_left_4 = var_arg;
            tmp_compexpr_right_4 = const_str_chr_45;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 557;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_12;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_7;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

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

                    exception_lineno = 558;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_8 = tmp_mvar_value_7;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_stdin );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 558;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_buffer );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 558;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_f;
                    var_f = tmp_assign_source_12;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_9;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipFile );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipFile" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 559;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_5 = tmp_mvar_value_8;
                tmp_dict_key_4 = const_str_plain_filename;
                tmp_dict_value_4 = const_str_empty;
                tmp_kw_name_2 = _PyDict_NewPresized( 3 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_5 = const_str_plain_mode;
                tmp_dict_value_5 = const_str_plain_wb;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_fileobj;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_kw_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 559;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_10 = tmp_mvar_value_9;
                tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_stdout );
                if ( tmp_source_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 559;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_buffer );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_dict_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_kw_name_2 );

                    exception_lineno = 559;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
                Py_DECREF( tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 559;
                tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 559;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_g;
                    var_g = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_builtins );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtins" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 561;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_10;
                CHECK_OBJECT( var_arg );
                tmp_args_element_name_7 = var_arg;
                tmp_args_element_name_8 = const_str_plain_rb;
                frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 561;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_open, call_args );
                }

                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 561;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_f;
                    var_f = tmp_assign_source_14;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_args_element_name_10;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_open );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 562;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_6 = tmp_mvar_value_11;
                CHECK_OBJECT( var_arg );
                tmp_left_name_1 = var_arg;
                tmp_right_name_1 = const_str_digest_662720bcb38208f53dc17ad51de4c080;
                tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 562;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_10 = const_str_plain_wb;
                frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 562;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 562;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_g;
                    var_g = tmp_assign_source_15;
                    Py_XDECREF( old );
                }

            }
            branch_end_6:;
        }
        branch_end_3:;
    }
    loop_start_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_2;
        if ( var_f == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 564;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_f;
        frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 564;
        tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_1024_tuple, 0 ) );

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 564;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_chunk );
        tmp_operand_name_3 = var_chunk;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        goto loop_end_2;
        branch_no_7:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_11;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 567;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = var_g;
        CHECK_OBJECT( var_chunk );
        tmp_args_element_name_11 = var_chunk;
        frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 567;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 567;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_12;
        if ( var_g == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 568;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_5 = var_g;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 568;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_12 = tmp_mvar_value_12;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_stdout );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_buffer );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_5 );
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
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_3;
            if ( var_g == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 569;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_4 = var_g;
            frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 569;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 569;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_13;
        if ( var_f == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 570;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_6 = var_f;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 570;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_14 = tmp_mvar_value_13;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_stdin );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_buffer );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 570;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_6 );
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_4;
            if ( var_f == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 571;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_5 = var_f;
            frame_748b7c3cbd0a90d1179da71e9b127881->m_frame.f_lineno = 571;
            tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 571;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_9:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_748b7c3cbd0a90d1179da71e9b127881 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_748b7c3cbd0a90d1179da71e9b127881 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_748b7c3cbd0a90d1179da71e9b127881, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_748b7c3cbd0a90d1179da71e9b127881->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_748b7c3cbd0a90d1179da71e9b127881, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_748b7c3cbd0a90d1179da71e9b127881,
        type_description_1,
        var_args,
        var_decompress,
        var_arg,
        var_f,
        var_g,
        var_chunk
    );


    // Release cached frame.
    if ( frame_748b7c3cbd0a90d1179da71e9b127881 == cache_frame_748b7c3cbd0a90d1179da71e9b127881 )
    {
        Py_DECREF( frame_748b7c3cbd0a90d1179da71e9b127881 );
    }
    cache_frame_748b7c3cbd0a90d1179da71e9b127881 = NULL;

    assertFrameObject( frame_748b7c3cbd0a90d1179da71e9b127881 );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gzip$$$function_38__test );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_args );
    var_args = NULL;

    CHECK_OBJECT( (PyObject *)var_decompress );
    Py_DECREF( var_decompress );
    var_decompress = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

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

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_decompress );
    var_decompress = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gzip$$$function_38__test );
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



static PyObject *MAKE_FUNCTION_gzip$$$function_10_mtime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_10_mtime,
        const_str_plain_mtime,
#if PYTHON_VERSION >= 300
        const_str_digest_a519ecf129281b0200cd6bd94e3173dc,
#endif
        codeobj_6e531d4905f56a3551164bd36a11b2ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_73e93c3cda23ba8c8b6b46d96c658799,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_11___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_11___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_a985426a75625d0a32350638e2089d24,
#endif
        codeobj_e439250a42fd6f8c0163427bd52fdb68,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_12__init_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_12__init_write,
        const_str_plain__init_write,
#if PYTHON_VERSION >= 300
        const_str_digest_ef144fe144b7617e8884c4e9a18f5207,
#endif
        codeobj_af14b68f5bd8086a3f50a7a92f8430f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_13__write_gzip_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_13__write_gzip_header,
        const_str_plain__write_gzip_header,
#if PYTHON_VERSION >= 300
        const_str_digest_de8bc73e0d52d3bec326685b4554d5ca,
#endif
        codeobj_5d99d60d2539691dedd64cddecbd8a56,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_14_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_14_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        const_str_digest_af3f607ae1f8915f86e4fe788f53c537,
#endif
        codeobj_97ab36f640362cc264bd5698e42e641c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_15_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_15_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_9a22af416778dacd1acf671128158a03,
#endif
        codeobj_f0b56f989e02044b01b4ac449ef8123f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_16_read1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_16_read1,
        const_str_plain_read1,
#if PYTHON_VERSION >= 300
        const_str_digest_97baed9f51ecb3a979a97b5fa521bd9e,
#endif
        codeobj_8fd4bbb1f32ee68c0a20a5cde2385bef,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_6f23c6b429ba9fb4566d6343cd779109,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_17_peek(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_17_peek,
        const_str_plain_peek,
#if PYTHON_VERSION >= 300
        const_str_digest_d9d4c7d73fe97720ca8a209cd99a15fa,
#endif
        codeobj_29132b79f485f8f16fbf4050783aa0ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_18_closed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_18_closed,
        const_str_plain_closed,
#if PYTHON_VERSION >= 300
        const_str_digest_b1f43a0c6f96af0e2f5c82ee9a5db95d,
#endif
        codeobj_76faa3e7f32910667437d04e1be6f910,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_19_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_19_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_2df873ccc96f5eff49d0604cc047485b,
#endif
        codeobj_a37831451fe077ed61f4fe6d9629048c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_1_open( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_1_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_196c7abbd8fb3cd638c7889e72376534,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_7d51efa9846962ed7804db7c79a5d877,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_20_flush( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_20_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 300
        const_str_digest_d3c02cb1022363190e8d82a5415f24f7,
#endif
        codeobj_feca9daa9f6449221de8f905adb706c5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_21_fileno(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_21_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 300
        const_str_digest_3fd4992d777c75cc85a7b584c801c4e2,
#endif
        codeobj_61b09b2c4ae4a5d053729970633863c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_a40e236eafe49d1a0232e93b1ce4a42a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_22_rewind(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_22_rewind,
        const_str_plain_rewind,
#if PYTHON_VERSION >= 300
        const_str_digest_f64c23fdc4ada36511f5614a82953819,
#endif
        codeobj_bd371212580519ad8048c9b2dcd0207d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_9e3a2c9150d7a78b093b52f499c64f8a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_23_readable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_23_readable,
        const_str_plain_readable,
#if PYTHON_VERSION >= 300
        const_str_digest_afc1d42fe40ca26cc004acadd028ee50,
#endif
        codeobj_c5b9848dd3732d55a5110b2440c1fb1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_24_writable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_24_writable,
        const_str_plain_writable,
#if PYTHON_VERSION >= 300
        const_str_digest_b50f7bcdaaa60a5e647862eef145d2b8,
#endif
        codeobj_103a26311ce21f1ae6010ac8c1f6b70a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_25_seekable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_25_seekable,
        const_str_plain_seekable,
#if PYTHON_VERSION >= 300
        const_str_digest_281838d0670255db6fba354454f6b69c,
#endif
        codeobj_90351ab63518e83b03fe4f3deb581d4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_26_seek( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_26_seek,
        const_str_plain_seek,
#if PYTHON_VERSION >= 300
        const_str_digest_2fb228413e153fc8bd8fa9e655b8e10e,
#endif
        codeobj_8eaa5ea2b0bebc90542a42e896baae1e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_27_readline( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_27_readline,
        const_str_plain_readline,
#if PYTHON_VERSION >= 300
        const_str_digest_d7e80602892fe61491dcaedaca1ac9bb,
#endif
        codeobj_a87ab59ccd3737a53a033e93f27b14de,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_28___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_28___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_507ec5c749ddd1dcb87e1ff51ef09828,
#endif
        codeobj_93f3cd247b066ee3c98ab925c4f358bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_29__init_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_29__init_read,
        const_str_plain__init_read,
#if PYTHON_VERSION >= 300
        const_str_digest_cd1b59feb5ca64d50804cbc905f6903a,
#endif
        codeobj_f61eaabdf6de7394344208f688deb61e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_2_write32u(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_2_write32u,
        const_str_plain_write32u,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_08312f9c77ac976824f5718278c49116,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_30__read_exact(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_30__read_exact,
        const_str_plain__read_exact,
#if PYTHON_VERSION >= 300
        const_str_digest_a7519056af3aa02631cb2ba717c656c8,
#endif
        codeobj_feefe0dbab19359a89f2be8b8fec2471,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_4bc36ad682f0863b8fb24d582107c150,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_31__read_gzip_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_31__read_gzip_header,
        const_str_plain__read_gzip_header,
#if PYTHON_VERSION >= 300
        const_str_digest_cb763164d676bde22b4cf3bdad34d3d1,
#endif
        codeobj_1c934b938b8c30606154125a9e895ad2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_32_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_32_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_f5f447ce36bcb89832c4deaca29debe7,
#endif
        codeobj_480dc5126a3e8c71e8743f282b8b4572,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_33__add_read_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_33__add_read_data,
        const_str_plain__add_read_data,
#if PYTHON_VERSION >= 300
        const_str_digest_c683d60756656ad7b1ffa9e862f20d81,
#endif
        codeobj_dd3f06b844d7a1a28782fca8d141a363,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_34__read_eof(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_34__read_eof,
        const_str_plain__read_eof,
#if PYTHON_VERSION >= 300
        const_str_digest_ecd0774a4670a7ba90e45c76afc73051,
#endif
        codeobj_6187a10ac4c16f09342d387c9cc7d5ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_35__rewind(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_35__rewind,
        const_str_plain__rewind,
#if PYTHON_VERSION >= 300
        const_str_digest_b53027b74c77fdb312afc3fb372a9046,
#endif
        codeobj_f6b840a48db8107bfc99896d1e352ec8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_36_compress( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_36_compress,
        const_str_plain_compress,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_610489d2892837cfb463076fc9b95151,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_1cb15492b5bbee4014be15dc28863897,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_37_decompress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_37_decompress,
        const_str_plain_decompress,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1640d49a2b53890467b396c981b1544a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_99884c2f3a409de0c100d75dc8bc597d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_38__test(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_38__test,
        const_str_plain__test,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_748b7c3cbd0a90d1179da71e9b127881,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_1d48a6fb5101ac2af73a4b882db8b200,
#endif
        codeobj_52a1fe8d123b4457c4eadce6d8e418ed,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_4_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_4_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_ecf4adb5c97ebc35dc35bdb24ebd0e64,
#endif
        codeobj_c7b4c04344c1e9ed74cc24a25f3bde54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_5_prepend( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_5_prepend,
        const_str_plain_prepend,
#if PYTHON_VERSION >= 300
        const_str_digest_bc39400cfc47dff03c58d62ca8886627,
#endif
        codeobj_7e60472ef9c9f358b339b000d97d8b49,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_6_seek(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_6_seek,
        const_str_plain_seek,
#if PYTHON_VERSION >= 300
        const_str_digest_476455f6df319728bd2508cd3632b2f5,
#endif
        codeobj_7be37042d93b2cfa6f7dd12ca00ec2da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_7_seekable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_7_seekable,
        const_str_plain_seekable,
#if PYTHON_VERSION >= 300
        const_str_digest_4452f35ec03dcb8e120bbb577481a97d,
#endif
        codeobj_8a357a634121f3e053ae6e9656c9af5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_8___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_721349ebe1c08c538b5702b22ed7a34b,
#endif
        codeobj_10ec0a116de16decccf28d1f99c732e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        const_str_digest_ed6a1af39e70a427eecf81704c325d4d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gzip$$$function_9_filename(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gzip$$$function_9_filename,
        const_str_plain_filename,
#if PYTHON_VERSION >= 300
        const_str_digest_4038895cbadf47c82464156d3c7835ce,
#endif
        codeobj_537739937fe61453f0eb2593e09f658d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gzip,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gzip =
{
    PyModuleDef_HEAD_INIT,
    "gzip",
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

MOD_INIT_DECL( gzip )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gzip );
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
    puts("gzip: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gzip: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gzip: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgzip" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gzip = Py_InitModule4(
        "gzip",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_gzip = PyModule_Create( &mdef_gzip );
#endif

    moduledict_gzip = MODULE_DICT( module_gzip );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_gzip,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_gzip,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_gzip,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_gzip,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_gzip );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_gzip, module_gzip );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = PyCell_EMPTY();
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a439a13d3c843e867b23e1ad43930e43;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_gzip_69 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2a75f4fa55c074abcc457a1a6d21d309_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a75f4fa55c074abcc457a1a6d21d309_2 = NULL;
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
    PyObject *locals_gzip_110 = NULL;
    struct Nuitka_FrameObject *frame_e3d20e84660fb56a09dba201d0a4af5b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e3d20e84660fb56a09dba201d0a4af5b_3 = NULL;
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
    PyObject *locals_gzip_377 = NULL;
    struct Nuitka_FrameObject *frame_88e58d67c3146b12020d7e5a415ae72c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_88e58d67c3146b12020d7e5a415ae72c_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_2342d309e32c54e92de843912d6412c2;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a439a13d3c843e867b23e1ad43930e43 = MAKE_MODULE_FRAME( codeobj_a439a13d3c843e867b23e1ad43930e43, module_gzip );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a439a13d3c843e867b23e1ad43930e43 );
    assert( Py_REFCNT( frame_a439a13d3c843e867b23e1ad43930e43 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_struct;
        tmp_globals_name_1 = (PyObject *)moduledict_gzip;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_gzip;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 8;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_time;
        tmp_globals_name_3 = (PyObject *)moduledict_gzip;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 8;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_os;
        tmp_globals_name_4 = (PyObject *)moduledict_gzip;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_zlib;
        tmp_globals_name_5 = (PyObject *)moduledict_gzip;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_builtins;
        tmp_globals_name_6 = (PyObject *)moduledict_gzip;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 10;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        assert( !(tmp_assign_source_9 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_builtins, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_io;
        tmp_globals_name_7 = (PyObject *)moduledict_gzip;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain__compression;
        tmp_globals_name_8 = (PyObject *)moduledict_gzip;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = Py_None;
        tmp_level_name_8 = const_int_0;
        frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 12;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__compression, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY( const_list_5dc791a3e65b426c74c5f8c190e59446_list );
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_int_pos_1_int_pos_2_int_pos_4_int_pos_8_int_pos_16_tuple;
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_13 == NULL) );
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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



            exception_lineno = 16;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
        if ( tmp_assign_source_15 == NULL )
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



            exception_lineno = 16;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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



            exception_lineno = 16;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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



            exception_lineno = 16;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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



            exception_lineno = 16;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_18;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

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
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FTEXT, tmp_assign_source_19 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FHCRC, tmp_assign_source_20 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_3;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FEXTRA, tmp_assign_source_21 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_4;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FNAME, tmp_assign_source_22 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_5;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_FCOMMENT, tmp_assign_source_23 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_int_pos_1_int_pos_2_tuple;
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_24 == NULL) );
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
        if ( tmp_assign_source_25 == NULL )
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



            exception_lineno = 18;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
        if ( tmp_assign_source_26 == NULL )
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



            exception_lineno = 18;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
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
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_READ, tmp_assign_source_27 );
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;
        UPDATE_STRING_DICT0( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_WRITE, tmp_assign_source_28 );
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_plain_rb_int_pos_9_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_29 = MAKE_FUNCTION_gzip$$$function_1_open( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_open, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_gzip$$$function_2_write32u(  );



        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_write32u, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
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


            exception_lineno = 69;

            goto try_except_handler_5;
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


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_32 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_32;
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


            exception_lineno = 69;

            goto try_except_handler_5;
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


            exception_lineno = 69;

            goto try_except_handler_5;
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
            PyObject *tmp_assign_source_33;
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


                exception_lineno = 69;

                goto try_except_handler_5;
            }
            tmp_args_name_1 = const_tuple_str_plain__PaddedFile_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 69;
            tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_33;
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


                exception_lineno = 69;

                goto try_except_handler_5;
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


                    exception_lineno = 69;

                    goto try_except_handler_5;
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

                    exception_lineno = 69;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 69;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 69;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_34;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_gzip_69 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_gzip;
        tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_5093759f5c6cee26eb161be32e67a0e6;
        tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain__PaddedFile;
        tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_2a75f4fa55c074abcc457a1a6d21d309_2, codeobj_2a75f4fa55c074abcc457a1a6d21d309, module_gzip, sizeof(void *) );
        frame_2a75f4fa55c074abcc457a1a6d21d309_2 = cache_frame_2a75f4fa55c074abcc457a1a6d21d309_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2a75f4fa55c074abcc457a1a6d21d309_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2a75f4fa55c074abcc457a1a6d21d309_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_bytes_empty_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_3___init__( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_4_read(  );



        tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain_read, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_bytes_empty_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_5_prepend( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain_prepend, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_6_seek(  );



        tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain_seek, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_7_seekable(  );



        tmp_res = PyObject_SetItem( locals_gzip_69, const_str_plain_seekable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2a75f4fa55c074abcc457a1a6d21d309_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2a75f4fa55c074abcc457a1a6d21d309_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2a75f4fa55c074abcc457a1a6d21d309_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2a75f4fa55c074abcc457a1a6d21d309_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2a75f4fa55c074abcc457a1a6d21d309_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2a75f4fa55c074abcc457a1a6d21d309_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_2a75f4fa55c074abcc457a1a6d21d309_2 == cache_frame_2a75f4fa55c074abcc457a1a6d21d309_2 )
        {
            Py_DECREF( frame_2a75f4fa55c074abcc457a1a6d21d309_2 );
        }
        cache_frame_2a75f4fa55c074abcc457a1a6d21d309_2 = NULL;

        assertFrameObject( frame_2a75f4fa55c074abcc457a1a6d21d309_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain__PaddedFile;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_gzip_69;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 69;
            tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;

                goto try_except_handler_7;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_35 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_35 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_gzip_69 );
        locals_gzip_69 = NULL;
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

        Py_DECREF( locals_gzip_69 );
        locals_gzip_69 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 69;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__PaddedFile, tmp_assign_source_35 );
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__compression );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compression );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compression" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;

            goto try_except_handler_8;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_BaseStream );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        tmp_assign_source_37 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_38 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
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


            exception_lineno = 110;

            goto try_except_handler_8;
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


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_8;
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


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
        Py_DECREF( tmp_type_arg_2 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_3:;
        condexpr_end_2:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_40;
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


            exception_lineno = 110;

            goto try_except_handler_8;
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


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_6 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_6, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_7 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto try_except_handler_8;
            }
            tmp_tuple_element_4 = const_str_plain_GzipFile;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 110;
            tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_41;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_8 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_8, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto try_except_handler_8;
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
                PyObject *tmp_source_name_9;
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


                    exception_lineno = 110;

                    goto try_except_handler_8;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_3 = tmp_class_creation_2__prepared;
                tmp_source_name_9 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_9 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_9 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 110;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 110;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_42;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_gzip_110 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_gzip;
        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_2518bbdb10b72c54ff72f8802a23c910;
        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_GzipFile;
        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_e3d20e84660fb56a09dba201d0a4af5b_3, codeobj_e3d20e84660fb56a09dba201d0a4af5b, module_gzip, sizeof(void *) );
        frame_e3d20e84660fb56a09dba201d0a4af5b_3 = cache_frame_e3d20e84660fb56a09dba201d0a4af5b_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_e3d20e84660fb56a09dba201d0a4af5b_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_e3d20e84660fb56a09dba201d0a4af5b_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_myfileobj, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_int_pos_9_none_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_8___init__( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM( locals_gzip_110, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_4 = PyObject_GetItem( locals_gzip_110, const_str_plain_property );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_gzip$$$function_9_filename(  );



            frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame.f_lineno = 196;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_gzip$$$function_9_filename(  );



            frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame.f_lineno = 196;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_filename, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM( locals_gzip_110, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_11 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_5;
            }
            else
            {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_6 = PyObject_GetItem( locals_gzip_110, const_str_plain_property );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_gzip$$$function_10_mtime(  );



            frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_gzip$$$function_10_mtime(  );



            frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_mtime, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_11___repr__(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_12__init_write(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain__init_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_13__write_gzip_header(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain__write_gzip_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_14_write(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_15_read( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_read, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_16_read1( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_read1, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_17_peek(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_peek, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM( locals_gzip_110, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_6;
            }
            else
            {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_8 = PyObject_GetItem( locals_gzip_110, const_str_plain_property );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_gzip$$$function_18_closed(  );



            frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_name_9 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_6 = MAKE_FUNCTION_gzip$$$function_18_closed(  );



            frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_closed, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_19_close(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_4;
            tmp_source_name_10 = PyObject_GetItem( locals_gzip_110, const_str_plain_zlib );

            if ( tmp_source_name_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_zlib );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 321;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_source_name_10 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_10 );
                }
            }

            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Z_SYNC_FLUSH );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_7 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_6 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_20_flush( tmp_defaults_7 );



            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_flush, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_21_fileno(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_fileno, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_22_rewind(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_rewind, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_23_readable(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_readable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_24_writable(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_writable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_25_seekable(  );



        tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_seekable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_5;
            tmp_source_name_11 = PyObject_GetItem( locals_gzip_110, const_str_plain_io );

            if ( tmp_source_name_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_io );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_source_name_11 = tmp_mvar_value_5;
                Py_INCREF( tmp_source_name_11 );
                }
            }

            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SEEK_SET );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_8 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_defaults_8, 0, tmp_tuple_element_7 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_26_seek( tmp_defaults_8 );



            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_seek, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_9 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_27_readline( tmp_defaults_9 );



            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain_readline, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e3d20e84660fb56a09dba201d0a4af5b_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e3d20e84660fb56a09dba201d0a4af5b_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_e3d20e84660fb56a09dba201d0a4af5b_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_e3d20e84660fb56a09dba201d0a4af5b_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_e3d20e84660fb56a09dba201d0a4af5b_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e3d20e84660fb56a09dba201d0a4af5b_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_e3d20e84660fb56a09dba201d0a4af5b_3 == cache_frame_e3d20e84660fb56a09dba201d0a4af5b_3 )
        {
            Py_DECREF( frame_e3d20e84660fb56a09dba201d0a4af5b_3 );
        }
        cache_frame_e3d20e84660fb56a09dba201d0a4af5b_3 = NULL;

        assertFrameObject( frame_e3d20e84660fb56a09dba201d0a4af5b_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_13;
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


                exception_lineno = 110;

                goto try_except_handler_10;
            }
            tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
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
            tmp_res = PyObject_SetItem( locals_gzip_110, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto try_except_handler_10;
            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_10 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_GzipFile;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_gzip_110;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 110;
            tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;

                goto try_except_handler_10;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_43 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_43 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_gzip_110 );
        locals_gzip_110 = NULL;
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

        Py_DECREF( locals_gzip_110 );
        locals_gzip_110 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 110;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_GzipFile, tmp_assign_source_43 );
    }
    goto try_end_6;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__compression );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compression );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compression" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 377;

            goto try_except_handler_11;
        }

        tmp_source_name_12 = tmp_mvar_value_6;
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_DecompressReader );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        tmp_assign_source_45 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_3__bases_orig == NULL );
        tmp_class_creation_3__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_3__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_46 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_2 = tmp_class_creation_3__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_4 );
        Py_DECREF( tmp_type_arg_4 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_48 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_16;
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


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 377;

            goto try_except_handler_11;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_13 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_14 = tmp_class_creation_3__metaclass;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_11;
            }
            tmp_tuple_element_10 = const_str_plain__GzipReader;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 377;
            tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_11;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_49;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_15 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_11;
            }
            tmp_condition_result_18 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_5;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;

                    goto try_except_handler_11;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_5 = tmp_class_creation_3__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_5 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 377;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 377;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_11;
            }
            branch_no_10:;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_50;
        }
        branch_end_9:;
    }
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_gzip_377 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_gzip;
        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain__GzipReader;
        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto try_except_handler_13;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_88e58d67c3146b12020d7e5a415ae72c_4, codeobj_88e58d67c3146b12020d7e5a415ae72c, module_gzip, sizeof(void *) );
        frame_88e58d67c3146b12020d7e5a415ae72c_4 = cache_frame_88e58d67c3146b12020d7e5a415ae72c_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_88e58d67c3146b12020d7e5a415ae72c_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_88e58d67c3146b12020d7e5a415ae72c_4 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_28___init__(  );

        ((struct Nuitka_FunctionObject *)tmp_dictset_value)->m_closure[0] = outline_2_var___class__;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_dictset_value)->m_closure[0] );


        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_29__init_read(  );



        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain__init_read, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_30__read_exact(  );



        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain__read_exact, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_31__read_gzip_header(  );



        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain__read_gzip_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_10 );
            tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_32_read( tmp_defaults_10 );



            tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain_read, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_33__add_read_data(  );



        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain__add_read_data, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 489;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_34__read_eof(  );



        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain__read_eof, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 493;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_gzip$$$function_35__rewind(  );

        ((struct Nuitka_FunctionObject *)tmp_dictset_value)->m_closure[0] = outline_2_var___class__;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_dictset_value)->m_closure[0] );


        tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain__rewind, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_88e58d67c3146b12020d7e5a415ae72c_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_88e58d67c3146b12020d7e5a415ae72c_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_88e58d67c3146b12020d7e5a415ae72c_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_88e58d67c3146b12020d7e5a415ae72c_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_88e58d67c3146b12020d7e5a415ae72c_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_88e58d67c3146b12020d7e5a415ae72c_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_88e58d67c3146b12020d7e5a415ae72c_4 == cache_frame_88e58d67c3146b12020d7e5a415ae72c_4 )
        {
            Py_DECREF( frame_88e58d67c3146b12020d7e5a415ae72c_4 );
        }
        cache_frame_88e58d67c3146b12020d7e5a415ae72c_4 = NULL;

        assertFrameObject( frame_88e58d67c3146b12020d7e5a415ae72c_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_13;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_13;
            }
            tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_dictset_value = tmp_class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem( locals_gzip_377, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_13;
            }
            branch_no_11:;
        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = const_str_plain__GzipReader;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
            tmp_tuple_element_12 = locals_gzip_377;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_a439a13d3c843e867b23e1ad43930e43->m_frame.f_lineno = 377;
            tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;

                goto try_except_handler_13;
            }
            {
                PyObject *old = PyCell_GET( outline_2_var___class__ );
                PyCell_SET( outline_2_var___class__, tmp_assign_source_52 );
                Py_XDECREF( old );
            }

        }
        CHECK_OBJECT( PyCell_GET( outline_2_var___class__ ) );
        tmp_assign_source_51 = PyCell_GET( outline_2_var___class__ );
        Py_INCREF( tmp_assign_source_51 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_gzip_377 );
        locals_gzip_377 = NULL;
        goto try_return_handler_12;
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

        Py_DECREF( locals_gzip_377 );
        locals_gzip_377 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gzip );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 377;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__GzipReader, tmp_assign_source_51 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a439a13d3c843e867b23e1ad43930e43 );
#endif
    popFrameStack();

    assertFrameObject( frame_a439a13d3c843e867b23e1ad43930e43 );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a439a13d3c843e867b23e1ad43930e43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a439a13d3c843e867b23e1ad43930e43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a439a13d3c843e867b23e1ad43930e43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a439a13d3c843e867b23e1ad43930e43, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases_orig );
    Py_DECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

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
        PyObject *tmp_assign_source_53;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = const_tuple_int_pos_9_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_assign_source_53 = MAKE_FUNCTION_gzip$$$function_36_compress( tmp_defaults_11 );



        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_compress, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_FUNCTION_gzip$$$function_37_decompress(  );



        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain_decompress, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_FUNCTION_gzip$$$function_38__test(  );



        UPDATE_STRING_DICT1( moduledict_gzip, (Nuitka_StringObject *)const_str_plain__test, tmp_assign_source_55 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_gzip, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_gzip );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
