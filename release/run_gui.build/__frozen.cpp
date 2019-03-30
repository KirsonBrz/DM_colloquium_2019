// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "_collections_abc", 1176641, 28903 },
        { "_compression", 1205544, 4085 },
        { "_weakrefset", 1209629, 7423 },
        { "abc", 1217052, 6412 },
        { "base64", 1223464, 16949 },
        { "bz2", 1240413, 11142 },
        { "codecs", 1251555, 33859 },
        { "collections", 1285414, -46571 },
        { "collections.abc", 1176641, 28903 },
        { "copyreg", 1331985, 4205 },
        { "dis", 1336190, 15166 },
        { "encodings", 1799773, -3908 },
        { "encodings.aliases", 1803681, 6257 },
        { "encodings.ascii", 1809938, 1845 },
        { "encodings.base64_codec", 1811783, 2384 },
        { "encodings.big5", 1814167, 1405 },
        { "encodings.big5hkscs", 1815572, 1415 },
        { "encodings.bz2_codec", 1816987, 3246 },
        { "encodings.charmap", 1820233, 2898 },
        { "encodings.cp037", 1823131, 2390 },
        { "encodings.cp1006", 1825521, 2466 },
        { "encodings.cp1026", 1827987, 2394 },
        { "encodings.cp1125", 1830381, 8087 },
        { "encodings.cp1140", 1838468, 2380 },
        { "encodings.cp1250", 1840848, 2417 },
        { "encodings.cp1251", 1843265, 2414 },
        { "encodings.cp1252", 1845679, 2417 },
        { "encodings.cp1253", 1848096, 2430 },
        { "encodings.cp1254", 1850526, 2419 },
        { "encodings.cp1255", 1852945, 2438 },
        { "encodings.cp1256", 1855383, 2416 },
        { "encodings.cp1257", 1857799, 2424 },
        { "encodings.cp1258", 1860223, 2422 },
        { "encodings.cp273", 1862645, 2376 },
        { "encodings.cp424", 1865021, 2420 },
        { "encodings.cp437", 1867441, 7804 },
        { "encodings.cp500", 1875245, 2390 },
        { "encodings.cp65001", 1877635, 1644 },
        { "encodings.cp720", 1879279, 2487 },
        { "encodings.cp737", 1881766, 8126 },
        { "encodings.cp775", 1889892, 7834 },
        { "encodings.cp850", 1897726, 7465 },
        { "encodings.cp852", 1905191, 7842 },
        { "encodings.cp855", 1913033, 8095 },
        { "encodings.cp856", 1921128, 2452 },
        { "encodings.cp857", 1923580, 7447 },
        { "encodings.cp858", 1931027, 7435 },
        { "encodings.cp860", 1938462, 7783 },
        { "encodings.cp861", 1946245, 7798 },
        { "encodings.cp862", 1954043, 7987 },
        { "encodings.cp863", 1962030, 7798 },
        { "encodings.cp864", 1969828, 7944 },
        { "encodings.cp865", 1977772, 7798 },
        { "encodings.cp866", 1985570, 8131 },
        { "encodings.cp869", 1993701, 7824 },
        { "encodings.cp874", 2001525, 2518 },
        { "encodings.cp875", 2004043, 2387 },
        { "encodings.cp932", 2006430, 1407 },
        { "encodings.cp949", 2007837, 1407 },
        { "encodings.cp950", 2009244, 1407 },
        { "encodings.euc_jis_2004", 2010651, 1421 },
        { "encodings.euc_jisx0213", 2012072, 1421 },
        { "encodings.euc_jp", 2013493, 1409 },
        { "encodings.euc_kr", 2014902, 1409 },
        { "encodings.gb18030", 2016311, 1411 },
        { "encodings.gb2312", 2017722, 1409 },
        { "encodings.gbk", 2019131, 1403 },
        { "encodings.hex_codec", 2020534, 2371 },
        { "encodings.hp_roman8", 2022905, 2591 },
        { "encodings.hz", 2025496, 1401 },
        { "encodings.idna", 2026897, 5685 },
        { "encodings.iso2022_jp", 2032582, 1422 },
        { "encodings.iso2022_jp_1", 2034004, 1426 },
        { "encodings.iso2022_jp_2", 2035430, 1426 },
        { "encodings.iso2022_jp_2004", 2036856, 1432 },
        { "encodings.iso2022_jp_3", 2038288, 1426 },
        { "encodings.iso2022_jp_ext", 2039714, 1430 },
        { "encodings.iso2022_kr", 2041144, 1422 },
        { "encodings.iso8859_1", 2042566, 2389 },
        { "encodings.iso8859_10", 2044955, 2394 },
        { "encodings.iso8859_11", 2047349, 2488 },
        { "encodings.iso8859_13", 2049837, 2397 },
        { "encodings.iso8859_14", 2052234, 2415 },
        { "encodings.iso8859_15", 2054649, 2394 },
        { "encodings.iso8859_16", 2057043, 2396 },
        { "encodings.iso8859_2", 2059439, 2389 },
        { "encodings.iso8859_3", 2061828, 2396 },
        { "encodings.iso8859_4", 2064224, 2389 },
        { "encodings.iso8859_5", 2066613, 2390 },
        { "encodings.iso8859_6", 2069003, 2434 },
        { "encodings.iso8859_7", 2071437, 2397 },
        { "encodings.iso8859_8", 2073834, 2428 },
        { "encodings.iso8859_9", 2076262, 2389 },
        { "encodings.johab", 2078651, 1407 },
        { "encodings.koi8_r", 2080058, 2441 },
        { "encodings.koi8_t", 2082499, 2352 },
        { "encodings.koi8_u", 2084851, 2427 },
        { "encodings.kz1048", 2087278, 2404 },
        { "encodings.latin_1", 2089682, 1857 },
        { "encodings.mac_arabic", 2091539, 7698 },
        { "encodings.mac_centeuro", 2099237, 2428 },
        { "encodings.mac_croatian", 2101665, 2436 },
        { "encodings.mac_cyrillic", 2104101, 2426 },
        { "encodings.mac_farsi", 2106527, 2370 },
        { "encodings.mac_greek", 2108897, 2410 },
        { "encodings.mac_iceland", 2111307, 2429 },
        { "encodings.mac_latin2", 2113736, 2570 },
        { "encodings.mac_roman", 2116306, 2427 },
        { "encodings.mac_romanian", 2118733, 2437 },
        { "encodings.mac_turkish", 2121170, 2430 },
        { "encodings.mbcs", 2123600, 1656 },
        { "encodings.oem", 2125256, 1469 },
        { "encodings.palmos", 2126725, 2417 },
        { "encodings.ptcp154", 2129142, 2511 },
        { "encodings.punycode", 2131653, 6378 },
        { "encodings.quopri_codec", 2138031, 2404 },
        { "encodings.raw_unicode_escape", 2140435, 1730 },
        { "encodings.rot_13", 2142165, 2990 },
        { "encodings.shift_jis", 2145155, 1415 },
        { "encodings.shift_jis_2004", 2146570, 1425 },
        { "encodings.shift_jisx0213", 2147995, 1425 },
        { "encodings.tis_620", 2149420, 2479 },
        { "encodings.undefined", 2151899, 2124 },
        { "encodings.unicode_escape", 2154023, 1710 },
        { "encodings.unicode_internal", 2155733, 1720 },
        { "encodings.utf_16", 2157453, 4794 },
        { "encodings.utf_16_be", 2162247, 1595 },
        { "encodings.utf_16_le", 2163842, 1595 },
        { "encodings.utf_32", 2165437, 4687 },
        { "encodings.utf_32_be", 2170124, 1488 },
        { "encodings.utf_32_le", 2171612, 1488 },
        { "encodings.utf_7", 2173100, 1516 },
        { "encodings.utf_8", 2174616, 1575 },
        { "encodings.utf_8_sig", 2176191, 4477 },
        { "encodings.uu_codec", 2180668, 3186 },
        { "encodings.zlib_codec", 2183854, 3084 },
        { "enum", 1351356, 24232 },
        { "functools", 1375588, 23916 },
        { "genericpath", 1399504, 3709 },
        { "heapq", 1403213, 14323 },
        { "importlib", 1417536, -3693 },
        { "importlib._bootstrap", 1421229, 29139 },
        { "importlib._bootstrap_external", 1450368, 41779 },
        { "importlib.machinery", 1492147, 933 },
        { "inspect", 1493080, 79993 },
        { "io", 1573073, 3370 },
        { "keyword", 1576443, 1770 },
        { "linecache", 1578213, 3750 },
        { "locale", 1581963, 34516 },
        { "ntpath", 1616479, 12965 },
        { "opcode", 2186938, 5339 },
        { "operator", 1629444, 13861 },
        { "os", 1643305, 29654 },
        { "quopri", 1672959, 5732 },
        { "re", 1678691, 13765 },
        { "reprlib", 1692456, 5311 },
        { "sre_compile", 2192277, 15164 },
        { "sre_constants", 2207441, 6252 },
        { "sre_parse", 2213693, 21318 },
        { "stat", 1697767, 3834 },
        { "stringprep", 2235011, 9993 },
        { "struct", 1701601, 295 },
        { "threading", 1701896, 37663 },
        { "token", 2245004, 3560 },
        { "tokenize", 1739559, 17792 },
        { "traceback", 1757351, 19584 },
        { "types", 1776935, 8937 },
        { "warnings", 1785872, 13901 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
