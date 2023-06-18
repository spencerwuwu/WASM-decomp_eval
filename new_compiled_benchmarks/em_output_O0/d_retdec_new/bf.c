
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "bf.h"
int64_t local_memcpy(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3;
    int64_t v2 = v1 >> 32;
    int64_t v3 = a2; // 0x2d
    int64_t v4 = a1; // 0x2d
    if ((int32_t)v2 < 1) {
        // 0x5e
        return v2 & 0xffffffff;
    }
    int64_t v5 = v1; // 0x2d
    v5 -= 0x100000000;
    *(int64_t *)v4 = *(int64_t *)v3;
    int64_t v6 = v5 >> 32;
    v3 += 8;
    v4 += 8;
    while ((int32_t)v6 >= 1) {
        // 0x33
        v5 -= 0x100000000;
        *(int64_t *)v4 = *(int64_t *)v3;
        v6 = v5 >> 32;
        v3 += 8;
        v4 += 8;
    }
    // 0x5e
    return v6 & 0xffffffff;
}
void BF_set_key(int32_t len, char * data) {
    int64_t in[1]; // bp-64, 0x60
    int64_t in2[1]; // bp-72, 0x60
    int64_t v1 = *(int64_t *)166; // 0x9f
    int64_t v2 = (int64_t)data;
    char * d; // bp-80, 0x60
    *(int64_t *)&d = v2;
    uint64_t v3 = (int64_t)(len < 72 ? len : 72) + v2; // 0xcb
    int64_t v4 = 0;
    uint64_t v5 = (int64_t)data + 1; // 0xea
    char * v6 = (char *)v5; // 0xee
    d = v6;
    unsigned char v7 = *data; // 0xf2
    char * v8 = v6; // 0x101
    if (v5 >= v3) {
        // 0x107
        v8 = data;
        *(int64_t *)&d = (int64_t)v8;
    }
    uint64_t v9 = (int64_t)v8 + 1; // 0x122
    char * v10 = (char *)v9; // 0x126
    d = v10;
    unsigned char v11 = *v8; // 0x12a
    char * v12 = v10; // 0x13d
    if (v9 >= v3) {
        // 0x143
        v12 = data;
        *(int64_t *)&d = (int64_t)v12;
    }
    uint64_t v13 = (int64_t)v12 + 1; // 0x15e
    char * v14 = (char *)v13; // 0x162
    d = v14;
    unsigned char v15 = *v12; // 0x166
    char * v16 = v14; // 0x179
    if (v13 >= v3) {
        // 0x17f
        v16 = data;
        *(int64_t *)&d = (int64_t)v16;
    }
    uint64_t v17 = (int64_t)v16 + 1; // 0x19a
    d = (char *)v17;
    unsigned char v18 = *v16; // 0x1a2
    if (v17 >= v3) {
        // 0x1bb
        *(int64_t *)&d = (int64_t)data;
    }
    int64_t * v19 = (int64_t *)(8 * v4 + v1); // 0x1cf
    int64_t v20 = *v19; // 0x1cf
    *v19 = v20 ^ (256 * (256 * (256 * (int64_t)v7 | (int64_t)v11) | (int64_t)v15) | (int64_t)v18);
    v4++;
    while (v4 != 18) {
        char * v21 = d; // 0x60
        v5 = (int64_t)v21 + 1;
        v6 = (char *)v5;
        d = v6;
        v7 = *v21;
        v8 = v6;
        if (v5 >= v3) {
            // 0x107
            v8 = data;
            *(int64_t *)&d = (int64_t)v8;
        }
        // 0x10f
        v9 = (int64_t)v8 + 1;
        v10 = (char *)v9;
        d = v10;
        v11 = *v8;
        v12 = v10;
        if (v9 >= v3) {
            // 0x143
            v12 = data;
            *(int64_t *)&d = (int64_t)v12;
        }
        // 0x14b
        v13 = (int64_t)v12 + 1;
        v14 = (char *)v13;
        d = v14;
        v15 = *v12;
        v16 = v14;
        if (v13 >= v3) {
            // 0x17f
            v16 = data;
            *(int64_t *)&d = (int64_t)v16;
        }
        // 0x187
        v17 = (int64_t)v16 + 1;
        d = (char *)v17;
        v18 = *v16;
        if (v17 >= v3) {
            // 0x1bb
            *(int64_t *)&d = (int64_t)data;
        }
        // 0x1c3
        v19 = (int64_t *)(8 * v4 + v1);
        v20 = *v19;
        *v19 = v20 ^ (256 * (256 * (256 * (int64_t)v7 | (int64_t)v11) | (int64_t)v15) | (int64_t)v18);
        v4++;
    }
    // 0x1e5
    for (int64_t i = 0; i < 18; i += 2) {
        // 0x206
        BF_encrypt(in2, 1);
        int64_t v22 = 8 * i; // 0x220
        *(int64_t *)(v22 + v1) = in2[0];
        *(int64_t *)((v22 | 8) + v1) = in[0];
    }
    int64_t v23 = *(int64_t *)590; // 0x247
    for (int64_t i = 0; i < 1024; i += 2) {
        // 0x266
        BF_encrypt(in2, 1);
        int64_t v24 = 8 * i; // 0x280
        *(int64_t *)(v24 + v23) = in2[0];
        *(int64_t *)((v24 | 8) + v23) = in[0];
    }
}
void BF_encrypt(int64_t * data, int32_t encrypt) {
    int64_t v1 = (int64_t)data;
    int64_t v2 = *(int64_t *)706; // 0x2bb
    int64_t * v3 = (int64_t *)v2; // 0x2c2
    int64_t v4 = *(int64_t *)717; // 0x2c6
    int64_t * v5 = (int64_t *)(v1 + 8); // 0x2e0
    int64_t v6 = *v5; // 0x2e0
    int64_t v7; // 0x2b0
    int64_t v8; // 0x2b0
    if (encrypt == 0) {
        uint64_t v9 = *(int64_t *)(v2 + 136) ^ v1; // 0xbd7
        int64_t v10 = *(int64_t *)(8 * v9 / 0x1000000 + v4); // 0xbfe
        int64_t v11 = *(int64_t *)((v9 / 0x2000 & 2040 | 2048) + v4); // 0xc1c
        int64_t v12 = *(int64_t *)((v9 / 32 & 2040 | 0x1000) + v4); // 0xc3a
        int64_t v13 = *(int64_t *)((8 * v9 & 2040 | 0x1800) + v4); // 0xc54
        uint64_t v14 = *(int64_t *)(v2 + 128) ^ v6 ^ (v11 + v10 ^ v12) + v13 & 0xffffffff; // 0xc65
        int64_t v15 = *(int64_t *)(8 * v14 / 0x1000000 + v4); // 0xc89
        int64_t v16 = *(int64_t *)((v14 / 0x2000 & 2040 | 2048) + v4); // 0xca7
        int64_t v17 = *(int64_t *)((v14 / 32 & 2040 | 0x1000) + v4); // 0xcc5
        int64_t v18 = *(int64_t *)((8 * v14 & 2040 | 0x1800) + v4); // 0xcdf
        uint64_t v19 = *(int64_t *)(v2 + 120) ^ v9 ^ (v16 + v15 ^ v17) + v18 & 0xffffffff; // 0xcf0
        int64_t v20 = *(int64_t *)(8 * v19 / 0x1000000 + v4); // 0xd14
        int64_t v21 = *(int64_t *)((v19 / 0x2000 & 2040 | 2048) + v4); // 0xd32
        int64_t v22 = *(int64_t *)((v19 / 32 & 2040 | 0x1000) + v4); // 0xd50
        int64_t v23 = *(int64_t *)((8 * v19 & 2040 | 0x1800) + v4); // 0xd6a
        uint64_t v24 = *(int64_t *)(v2 + 112) ^ v14 ^ (v21 + v20 ^ v22) + v23 & 0xffffffff; // 0xd7b
        int64_t v25 = *(int64_t *)(8 * v24 / 0x1000000 + v4); // 0xd9f
        int64_t v26 = *(int64_t *)((v24 / 0x2000 & 2040 | 2048) + v4); // 0xdbd
        int64_t v27 = *(int64_t *)((v24 / 32 & 2040 | 0x1000) + v4); // 0xddb
        int64_t v28 = *(int64_t *)((8 * v24 & 2040 | 0x1800) + v4); // 0xdf5
        uint64_t v29 = *(int64_t *)(v2 + 104) ^ v19 ^ (v26 + v25 ^ v27) + v28 & 0xffffffff; // 0xe06
        int64_t v30 = *(int64_t *)(8 * v29 / 0x1000000 + v4); // 0xe2a
        int64_t v31 = *(int64_t *)((v29 / 0x2000 & 2040 | 2048) + v4); // 0xe48
        int64_t v32 = *(int64_t *)((v29 / 32 & 2040 | 0x1000) + v4); // 0xe66
        int64_t v33 = *(int64_t *)((8 * v29 & 2040 | 0x1800) + v4); // 0xe80
        uint64_t v34 = *(int64_t *)(v2 + 96) ^ v24 ^ (v31 + v30 ^ v32) + v33 & 0xffffffff; // 0xe91
        int64_t v35 = *(int64_t *)(8 * v34 / 0x1000000 + v4); // 0xeb5
        int64_t v36 = *(int64_t *)((v34 / 0x2000 & 2040 | 2048) + v4); // 0xed3
        int64_t v37 = *(int64_t *)((v34 / 32 & 2040 | 0x1000) + v4); // 0xef1
        int64_t v38 = *(int64_t *)((8 * v34 & 2040 | 0x1800) + v4); // 0xf0b
        uint64_t v39 = *(int64_t *)(v2 + 88) ^ v29 ^ (v36 + v35 ^ v37) + v38 & 0xffffffff; // 0xf1c
        int64_t v40 = *(int64_t *)(8 * v39 / 0x1000000 + v4); // 0xf40
        int64_t v41 = *(int64_t *)((v39 / 0x2000 & 2040 | 2048) + v4); // 0xf5e
        int64_t v42 = *(int64_t *)((v39 / 32 & 2040 | 0x1000) + v4); // 0xf7c
        int64_t v43 = *(int64_t *)((8 * v39 & 2040 | 0x1800) + v4); // 0xf96
        uint64_t v44 = *(int64_t *)(v2 + 80) ^ v34 ^ (v41 + v40 ^ v42) + v43 & 0xffffffff; // 0xfa7
        int64_t v45 = *(int64_t *)(8 * v44 / 0x1000000 + v4); // 0xfcb
        int64_t v46 = *(int64_t *)((v44 / 0x2000 & 2040 | 2048) + v4); // 0xfe9
        int64_t v47 = *(int64_t *)((v44 / 32 & 2040 | 0x1000) + v4); // 0x1007
        int64_t v48 = *(int64_t *)((8 * v44 & 2040 | 0x1800) + v4); // 0x1021
        uint64_t v49 = *(int64_t *)(v2 + 72) ^ v39 ^ (v46 + v45 ^ v47) + v48 & 0xffffffff; // 0x1032
        int64_t v50 = *(int64_t *)(8 * v49 / 0x1000000 + v4); // 0x1056
        int64_t v51 = *(int64_t *)((v49 / 0x2000 & 2040 | 2048) + v4); // 0x1074
        int64_t v52 = *(int64_t *)((v49 / 32 & 2040 | 0x1000) + v4); // 0x1092
        int64_t v53 = *(int64_t *)((8 * v49 & 2040 | 0x1800) + v4); // 0x10ac
        uint64_t v54 = *(int64_t *)(v2 + 64) ^ v44 ^ (v51 + v50 ^ v52) + v53 & 0xffffffff; // 0x10bd
        int64_t v55 = *(int64_t *)(8 * v54 / 0x1000000 + v4); // 0x10e1
        int64_t v56 = *(int64_t *)((v54 / 0x2000 & 2040 | 2048) + v4); // 0x10ff
        int64_t v57 = *(int64_t *)((v54 / 32 & 2040 | 0x1000) + v4); // 0x111d
        int64_t v58 = *(int64_t *)((8 * v54 & 2040 | 0x1800) + v4); // 0x1137
        uint64_t v59 = *(int64_t *)(v2 + 56) ^ v49 ^ (v56 + v55 ^ v57) + v58 & 0xffffffff; // 0x1148
        int64_t v60 = *(int64_t *)(8 * v59 / 0x1000000 + v4); // 0x116c
        int64_t v61 = *(int64_t *)((v59 / 0x2000 & 2040 | 2048) + v4); // 0x118a
        int64_t v62 = *(int64_t *)((v59 / 32 & 2040 | 0x1000) + v4); // 0x11a8
        int64_t v63 = *(int64_t *)((8 * v59 & 2040 | 0x1800) + v4); // 0x11c2
        uint64_t v64 = *(int64_t *)(v2 + 48) ^ v54 ^ (v61 + v60 ^ v62) + v63 & 0xffffffff; // 0x11d3
        int64_t v65 = *(int64_t *)(8 * v64 / 0x1000000 + v4); // 0x11f7
        int64_t v66 = *(int64_t *)((v64 / 0x2000 & 2040 | 2048) + v4); // 0x1215
        int64_t v67 = *(int64_t *)((v64 / 32 & 2040 | 0x1000) + v4); // 0x1233
        int64_t v68 = *(int64_t *)((8 * v64 & 2040 | 0x1800) + v4); // 0x124d
        uint64_t v69 = *(int64_t *)(v2 + 40) ^ v59 ^ (v66 + v65 ^ v67) + v68 & 0xffffffff; // 0x125e
        int64_t v70 = *(int64_t *)(8 * v69 / 0x1000000 + v4); // 0x1282
        int64_t v71 = *(int64_t *)((v69 / 0x2000 & 2040 | 2048) + v4); // 0x12a0
        int64_t v72 = *(int64_t *)((v69 / 32 & 2040 | 0x1000) + v4); // 0x12be
        int64_t v73 = *(int64_t *)((8 * v69 & 2040 | 0x1800) + v4); // 0x12d8
        uint64_t v74 = *(int64_t *)(v2 + 32) ^ v64 ^ (v71 + v70 ^ v72) + v73 & 0xffffffff; // 0x12e9
        int64_t v75 = *(int64_t *)(8 * v74 / 0x1000000 + v4); // 0x130d
        int64_t v76 = *(int64_t *)((v74 / 0x2000 & 2040 | 2048) + v4); // 0x132b
        int64_t v77 = *(int64_t *)((v74 / 32 & 2040 | 0x1000) + v4); // 0x1349
        int64_t v78 = *(int64_t *)((8 * v74 & 2040 | 0x1800) + v4); // 0x1363
        uint64_t v79 = *(int64_t *)(v2 + 24) ^ v69 ^ (v76 + v75 ^ v77) + v78 & 0xffffffff; // 0x1374
        int64_t v80 = *(int64_t *)(8 * v79 / 0x1000000 + v4); // 0x1398
        int64_t v81 = *(int64_t *)((v79 / 0x2000 & 2040 | 2048) + v4); // 0x13b6
        int64_t v82 = *(int64_t *)((v79 / 32 & 2040 | 0x1000) + v4); // 0x13d4
        int64_t v83 = *(int64_t *)((8 * v79 & 2040 | 0x1800) + v4); // 0x13ee
        uint64_t v84 = *(int64_t *)(v2 + 16) ^ v74 ^ (v81 + v80 ^ v82) + v83 & 0xffffffff; // 0x13ff
        int64_t v85 = *(int64_t *)(v2 + 8); // 0x140b
        int64_t v86 = *(int64_t *)(8 * v84 / 0x1000000 + v4); // 0x1423
        int64_t v87 = *(int64_t *)((v84 / 0x2000 & 2040 | 2048) + v4); // 0x1441
        int64_t v88 = *(int64_t *)((v84 / 32 & 2040 | 0x1000) + v4); // 0x145f
        int64_t v89 = *(int64_t *)((8 * v84 & 2040 | 0x1800) + v4); // 0x1479
        v7 = v85 ^ v79 ^ (v87 + v86 ^ v88) + v89 & 0xffffffff;
        v8 = *v3 ^ v84;
    } else {
        uint64_t v90 = *v3 ^ v1; // 0x2f9
        int64_t v91 = *(int64_t *)(8 * v90 / 0x1000000 + v4); // 0x31d
        int64_t v92 = *(int64_t *)((v90 / 0x2000 & 2040 | 2048) + v4); // 0x33b
        int64_t v93 = *(int64_t *)((v90 / 32 & 2040 | 0x1000) + v4); // 0x359
        int64_t v94 = *(int64_t *)((8 * v90 & 2040 | 0x1800) + v4); // 0x373
        uint64_t v95 = *(int64_t *)(v2 + 8) ^ v6 ^ (v92 + v91 ^ v93) + v94 & 0xffffffff; // 0x384
        int64_t v96 = *(int64_t *)(8 * v95 / 0x1000000 + v4); // 0x3a8
        int64_t v97 = *(int64_t *)((v95 / 0x2000 & 2040 | 2048) + v4); // 0x3c6
        int64_t v98 = *(int64_t *)((v95 / 32 & 2040 | 0x1000) + v4); // 0x3e4
        int64_t v99 = *(int64_t *)((8 * v95 & 2040 | 0x1800) + v4); // 0x3fe
        uint64_t v100 = *(int64_t *)(v2 + 16) ^ v90 ^ (v97 + v96 ^ v98) + v99 & 0xffffffff; // 0x40f
        int64_t v101 = *(int64_t *)(8 * v100 / 0x1000000 + v4); // 0x433
        int64_t v102 = *(int64_t *)((v100 / 0x2000 & 2040 | 2048) + v4); // 0x451
        int64_t v103 = *(int64_t *)((v100 / 32 & 2040 | 0x1000) + v4); // 0x46f
        int64_t v104 = *(int64_t *)((8 * v100 & 2040 | 0x1800) + v4); // 0x489
        uint64_t v105 = *(int64_t *)(v2 + 24) ^ v95 ^ (v102 + v101 ^ v103) + v104 & 0xffffffff; // 0x49a
        int64_t v106 = *(int64_t *)(8 * v105 / 0x1000000 + v4); // 0x4be
        int64_t v107 = *(int64_t *)((v105 / 0x2000 & 2040 | 2048) + v4); // 0x4dc
        int64_t v108 = *(int64_t *)((v105 / 32 & 2040 | 0x1000) + v4); // 0x4fa
        int64_t v109 = *(int64_t *)((8 * v105 & 2040 | 0x1800) + v4); // 0x514
        uint64_t v110 = *(int64_t *)(v2 + 32) ^ v100 ^ (v107 + v106 ^ v108) + v109 & 0xffffffff; // 0x525
        int64_t v111 = *(int64_t *)(8 * v110 / 0x1000000 + v4); // 0x549
        int64_t v112 = *(int64_t *)((v110 / 0x2000 & 2040 | 2048) + v4); // 0x567
        int64_t v113 = *(int64_t *)((v110 / 32 & 2040 | 0x1000) + v4); // 0x585
        int64_t v114 = *(int64_t *)((8 * v110 & 2040 | 0x1800) + v4); // 0x59f
        uint64_t v115 = *(int64_t *)(v2 + 40) ^ v105 ^ (v112 + v111 ^ v113) + v114 & 0xffffffff; // 0x5b0
        int64_t v116 = *(int64_t *)(8 * v115 / 0x1000000 + v4); // 0x5d4
        int64_t v117 = *(int64_t *)((v115 / 0x2000 & 2040 | 2048) + v4); // 0x5f2
        int64_t v118 = *(int64_t *)((v115 / 32 & 2040 | 0x1000) + v4); // 0x610
        int64_t v119 = *(int64_t *)((8 * v115 & 2040 | 0x1800) + v4); // 0x62a
        uint64_t v120 = *(int64_t *)(v2 + 48) ^ v110 ^ (v117 + v116 ^ v118) + v119 & 0xffffffff; // 0x63b
        int64_t v121 = *(int64_t *)(8 * v120 / 0x1000000 + v4); // 0x65f
        int64_t v122 = *(int64_t *)((v120 / 0x2000 & 2040 | 2048) + v4); // 0x67d
        int64_t v123 = *(int64_t *)((v120 / 32 & 2040 | 0x1000) + v4); // 0x69b
        int64_t v124 = *(int64_t *)((8 * v120 & 2040 | 0x1800) + v4); // 0x6b5
        uint64_t v125 = *(int64_t *)(v2 + 56) ^ v115 ^ (v122 + v121 ^ v123) + v124 & 0xffffffff; // 0x6c6
        int64_t v126 = *(int64_t *)(8 * v125 / 0x1000000 + v4); // 0x6ea
        int64_t v127 = *(int64_t *)((v125 / 0x2000 & 2040 | 2048) + v4); // 0x708
        int64_t v128 = *(int64_t *)((v125 / 32 & 2040 | 0x1000) + v4); // 0x726
        int64_t v129 = *(int64_t *)((8 * v125 & 2040 | 0x1800) + v4); // 0x740
        uint64_t v130 = *(int64_t *)(v2 + 64) ^ v120 ^ (v127 + v126 ^ v128) + v129 & 0xffffffff; // 0x751
        int64_t v131 = *(int64_t *)(8 * v130 / 0x1000000 + v4); // 0x775
        int64_t v132 = *(int64_t *)((v130 / 0x2000 & 2040 | 2048) + v4); // 0x793
        int64_t v133 = *(int64_t *)((v130 / 32 & 2040 | 0x1000) + v4); // 0x7b1
        int64_t v134 = *(int64_t *)((8 * v130 & 2040 | 0x1800) + v4); // 0x7cb
        uint64_t v135 = *(int64_t *)(v2 + 72) ^ v125 ^ (v132 + v131 ^ v133) + v134 & 0xffffffff; // 0x7dc
        int64_t v136 = *(int64_t *)(8 * v135 / 0x1000000 + v4); // 0x800
        int64_t v137 = *(int64_t *)((v135 / 0x2000 & 2040 | 2048) + v4); // 0x81e
        int64_t v138 = *(int64_t *)((v135 / 32 & 2040 | 0x1000) + v4); // 0x83c
        int64_t v139 = *(int64_t *)((8 * v135 & 2040 | 0x1800) + v4); // 0x856
        uint64_t v140 = *(int64_t *)(v2 + 80) ^ v130 ^ (v137 + v136 ^ v138) + v139 & 0xffffffff; // 0x867
        int64_t v141 = *(int64_t *)(8 * v140 / 0x1000000 + v4); // 0x88b
        int64_t v142 = *(int64_t *)((v140 / 0x2000 & 2040 | 2048) + v4); // 0x8a9
        int64_t v143 = *(int64_t *)((v140 / 32 & 2040 | 0x1000) + v4); // 0x8c7
        int64_t v144 = *(int64_t *)((8 * v140 & 2040 | 0x1800) + v4); // 0x8e1
        uint64_t v145 = *(int64_t *)(v2 + 88) ^ v135 ^ (v142 + v141 ^ v143) + v144 & 0xffffffff; // 0x8f2
        int64_t v146 = *(int64_t *)(8 * v145 / 0x1000000 + v4); // 0x916
        int64_t v147 = *(int64_t *)((v145 / 0x2000 & 2040 | 2048) + v4); // 0x934
        int64_t v148 = *(int64_t *)((v145 / 32 & 2040 | 0x1000) + v4); // 0x952
        int64_t v149 = *(int64_t *)((8 * v145 & 2040 | 0x1800) + v4); // 0x96c
        uint64_t v150 = *(int64_t *)(v2 + 96) ^ v140 ^ (v147 + v146 ^ v148) + v149 & 0xffffffff; // 0x97d
        int64_t v151 = *(int64_t *)(8 * v150 / 0x1000000 + v4); // 0x9a1
        int64_t v152 = *(int64_t *)((v150 / 0x2000 & 2040 | 2048) + v4); // 0x9bf
        int64_t v153 = *(int64_t *)((v150 / 32 & 2040 | 0x1000) + v4); // 0x9dd
        int64_t v154 = *(int64_t *)((8 * v150 & 2040 | 0x1800) + v4); // 0x9f7
        uint64_t v155 = *(int64_t *)(v2 + 104) ^ v145 ^ (v152 + v151 ^ v153) + v154 & 0xffffffff; // 0xa08
        int64_t v156 = *(int64_t *)(8 * v155 / 0x1000000 + v4); // 0xa2c
        int64_t v157 = *(int64_t *)((v155 / 0x2000 & 2040 | 2048) + v4); // 0xa4a
        int64_t v158 = *(int64_t *)((v155 / 32 & 2040 | 0x1000) + v4); // 0xa68
        int64_t v159 = *(int64_t *)((8 * v155 & 2040 | 0x1800) + v4); // 0xa82
        uint64_t v160 = *(int64_t *)(v2 + 112) ^ v150 ^ (v157 + v156 ^ v158) + v159 & 0xffffffff; // 0xa93
        int64_t v161 = *(int64_t *)(8 * v160 / 0x1000000 + v4); // 0xab7
        int64_t v162 = *(int64_t *)((v160 / 0x2000 & 2040 | 2048) + v4); // 0xad5
        int64_t v163 = *(int64_t *)((v160 / 32 & 2040 | 0x1000) + v4); // 0xaf3
        int64_t v164 = *(int64_t *)((8 * v160 & 2040 | 0x1800) + v4); // 0xb0d
        uint64_t v165 = *(int64_t *)(v2 + 120) ^ v155 ^ (v162 + v161 ^ v163) + v164 & 0xffffffff; // 0xb1e
        int64_t v166 = *(int64_t *)(v2 + 128); // 0xb2a
        int64_t v167 = *(int64_t *)(8 * v165 / 0x1000000 + v4); // 0xb45
        int64_t v168 = *(int64_t *)((v165 / 0x2000 & 2040 | 2048) + v4); // 0xb63
        int64_t v169 = *(int64_t *)((v165 / 32 & 2040 | 0x1000) + v4); // 0xb81
        int64_t v170 = *(int64_t *)((8 * v165 & 2040 | 0x1800) + v4); // 0xb9b
        v7 = v166 ^ v160 ^ (v168 + v167 ^ v169) + v170 & 0xffffffff;
        v8 = *(int64_t *)(v2 + 136) ^ v165;
    }
    // 0x14a1
    *v5 = v7 & 0xffffffff;
    *data = v8 & 0xffffffff;
}
void BF_cfb64_encrypt(char * in, char * out, int64_t length, char * ivec, int32_t * num, int32_t encrypt) {
    int64_t ti2[1]; // bp-112, 0x14d0
    int64_t ti[1]; // bp-120, 0x14d0
    int64_t v1[1]; // 0x1853
    int64_t v2[1]; // 0x18cb
    int64_t v3[1]; // 0x15b2
    int64_t v4[1]; // 0x162a
    // 0x14d0
    int64_t v5; // 0x14d0
    int32_t v6 = v5;
    char * iv = ivec; // bp-128, 0x1508
    int64_t v7; // 0x14d0
    if (encrypt != 0) {
        // 0x151b
        if (length == 0) {
            // 0x1a60
            *num = v6;
            return;
        }
        // 0x1534
        iv = ivec;
        int64_t v8 = length;
        int32_t v9 = v6; // 0x17a7
        char * v10 = out; // 0x14d0
        char * v11 = in; // 0x14d0
        char * v12 = iv; // 0x1538
        int64_t v13; // 0x153e
        unsigned char v14; // 0x154d
        unsigned char v15; // 0x1567
        unsigned char v16; // 0x1585
        unsigned char v17; // 0x15a3
        unsigned char v18; // 0x15c5
        unsigned char v19; // 0x15df
        unsigned char v20; // 0x15fd
        unsigned char v21; // 0x161b
        uint64_t v22; // 0x1644
        int64_t v23; // 0x165c
        uint64_t v24; // 0x16cc
        if (v9 == 0) {
            // 0x153e
            v13 = (int64_t)iv;
            v14 = *(char *)&v7;
            v15 = *(char *)(v13 + 1);
            v16 = *(char *)(v13 + 2);
            v17 = *(char *)(v13 + 3);
            v3[0] = 0x10000 * (int64_t)v15 | 0x1000000 * (int64_t)v14 | 256 * (int64_t)v16 | (int64_t)v17;
            ti = v3;
            v18 = *(char *)(v13 + 4);
            v19 = *(char *)(v13 + 5);
            v20 = *(char *)(v13 + 6);
            v21 = *(char *)(v13 + 7);
            v4[0] = 0x10000 * (int64_t)v19 | 0x1000000 * (int64_t)v18 | 256 * (int64_t)v20 | (int64_t)v21;
            ti2 = v4;
            BF_encrypt(ti, 1);
            v22 = ti[0];
            v23 = (int64_t)ivec;
            *ivec = (char)(v22 / 0x1000000);
            *(char *)(v23 + 1) = (char)(v22 / 0x10000);
            *(char *)(v23 + 2) = (char)(v22 / 256);
            *(char *)(v23 + 3) = (char)v22;
            v24 = ti2[0];
            *(char *)(v23 + 4) = (char)(v24 / 0x1000000);
            *(char *)(v23 + 5) = (char)(v24 / 0x10000);
            *(char *)(v23 + 6) = (char)(v24 / 256);
            *(char *)(v23 + 7) = (char)v24;
            v12 = ivec;
            *(int64_t *)&iv = (int64_t)v12;
        }
        // 0x175c
        v8--;
        int64_t v25 = v9; // 0x1772
        char v26 = *(char *)((int64_t)v12 + v25) ^ *v11;
        *v10 = v26;
        *(char *)((int64_t)iv + v25) = v26;
        v9 = v9 + 1 & 7;
        while (v8 != 0) {
            // 0x175c
            v10 = (char *)((int64_t)v10 + 1);
            v11 = (char *)((int64_t)v11 + 1);
            v12 = iv;
            if (v9 == 0) {
                // 0x153e
                v13 = (int64_t)iv;
                v14 = *(char *)&v7;
                v15 = *(char *)(v13 + 1);
                v16 = *(char *)(v13 + 2);
                v17 = *(char *)(v13 + 3);
                v3[0] = 0x10000 * (int64_t)v15 | 0x1000000 * (int64_t)v14 | 256 * (int64_t)v16 | (int64_t)v17;
                ti = v3;
                v18 = *(char *)(v13 + 4);
                v19 = *(char *)(v13 + 5);
                v20 = *(char *)(v13 + 6);
                v21 = *(char *)(v13 + 7);
                v4[0] = 0x10000 * (int64_t)v19 | 0x1000000 * (int64_t)v18 | 256 * (int64_t)v20 | (int64_t)v21;
                ti2 = v4;
                BF_encrypt(ti, 1);
                v22 = ti[0];
                v23 = (int64_t)ivec;
                *ivec = (char)(v22 / 0x1000000);
                *(char *)(v23 + 1) = (char)(v22 / 0x10000);
                *(char *)(v23 + 2) = (char)(v22 / 256);
                *(char *)(v23 + 3) = (char)v22;
                v24 = ti2[0];
                *(char *)(v23 + 4) = (char)(v24 / 0x1000000);
                *(char *)(v23 + 5) = (char)(v24 / 0x10000);
                *(char *)(v23 + 6) = (char)(v24 / 256);
                *(char *)(v23 + 7) = (char)v24;
                v12 = ivec;
                *(int64_t *)&iv = (int64_t)v12;
            }
            // 0x175c
            v8--;
            v25 = v9;
            v26 = *(char *)((int64_t)v12 + v25) ^ *v11;
            *v10 = v26;
            *(char *)((int64_t)iv + v25) = v26;
            v9 = v9 + 1 & 7;
        }
        // 0x1a60
        *num = v9;
        return;
    }
    // 0x17bc
    if (length == 0) {
        // 0x1a60
        *num = v6;
        return;
    }
    int64_t v27 = length;
    int32_t v28 = v6; // 0x1a50
    char * v29 = out; // 0x14d0
    char * v30 = in; // 0x14d0
    unsigned char v31; // 0x17ee
    unsigned char v32; // 0x1808
    unsigned char v33; // 0x1826
    unsigned char v34; // 0x1844
    unsigned char v35; // 0x1866
    unsigned char v36; // 0x1880
    unsigned char v37; // 0x189e
    unsigned char v38; // 0x18bc
    uint64_t v39; // 0x18e5
    int64_t v40; // 0x18fd
    uint64_t v41; // 0x196d
    int64_t v42; // 0x17df
    if (v28 == 0) {
        // 0x17df
        v42 = (int64_t)ivec;
        v31 = *(char *)&v7;
        v32 = *(char *)(v42 + 1);
        v33 = *(char *)(v42 + 2);
        v34 = *(char *)(v42 + 3);
        v1[0] = 0x10000 * (int64_t)v32 | 0x1000000 * (int64_t)v31 | 256 * (int64_t)v33 | (int64_t)v34;
        ti = v1;
        v35 = *(char *)(v42 + 4);
        v36 = *(char *)(v42 + 5);
        v37 = *(char *)(v42 + 6);
        v38 = *(char *)(v42 + 7);
        v2[0] = 0x10000 * (int64_t)v36 | 0x1000000 * (int64_t)v35 | 256 * (int64_t)v37 | (int64_t)v38;
        ti2 = v2;
        BF_encrypt(ti, 1);
        v39 = ti[0];
        v40 = (int64_t)ivec;
        *ivec = (char)(v39 / 0x1000000);
        *(char *)(v40 + 1) = (char)(v39 / 0x10000);
        *(char *)(v40 + 2) = (char)(v39 / 256);
        *(char *)(v40 + 3) = (char)v39;
        v41 = ti2[0];
        *(char *)(v40 + 4) = (char)(v41 / 0x1000000);
        *(char *)(v40 + 5) = (char)(v41 / 0x10000);
        *(char *)(v40 + 6) = (char)(v41 / 256);
        *(char *)(v40 + 7) = (char)v41;
        *(int64_t *)&iv = (int64_t)ivec;
    }
    // 0x19fd
    v27--;
    char v43 = *v30; // 0x1a0c
    char * v44 = (char *)((int64_t)ivec + (int64_t)v28); // 0x1a19
    *v44 = v43;
    *v29 = *v44 ^ v43;
    v28 = v28 + 1 & 7;
    while (v27 != 0) {
        // 0x19fd
        v29 = (char *)((int64_t)v29 + 1);
        v30 = (char *)((int64_t)v30 + 1);
        char * v45 = iv; // 0x17d9
        if (v28 == 0) {
            // 0x17df
            v42 = (int64_t)iv;
            v31 = *(char *)&v7;
            v32 = *(char *)(v42 + 1);
            v33 = *(char *)(v42 + 2);
            v34 = *(char *)(v42 + 3);
            v1[0] = 0x10000 * (int64_t)v32 | 0x1000000 * (int64_t)v31 | 256 * (int64_t)v33 | (int64_t)v34;
            ti = v1;
            v35 = *(char *)(v42 + 4);
            v36 = *(char *)(v42 + 5);
            v37 = *(char *)(v42 + 6);
            v38 = *(char *)(v42 + 7);
            v2[0] = 0x10000 * (int64_t)v36 | 0x1000000 * (int64_t)v35 | 256 * (int64_t)v37 | (int64_t)v38;
            ti2 = v2;
            BF_encrypt(ti, 1);
            v39 = ti[0];
            v40 = (int64_t)ivec;
            *ivec = (char)(v39 / 0x1000000);
            *(char *)(v40 + 1) = (char)(v39 / 0x10000);
            *(char *)(v40 + 2) = (char)(v39 / 256);
            *(char *)(v40 + 3) = (char)v39;
            v41 = ti2[0];
            *(char *)(v40 + 4) = (char)(v41 / 0x1000000);
            *(char *)(v40 + 5) = (char)(v41 / 0x10000);
            *(char *)(v40 + 6) = (char)(v41 / 256);
            *(char *)(v40 + 7) = (char)v41;
            v45 = ivec;
            *(int64_t *)&iv = (int64_t)v45;
        }
        // 0x19fd
        v27--;
        v43 = *v30;
        v44 = (char *)((int64_t)v45 + (int64_t)v28);
        *v44 = v43;
        *v29 = *v44 ^ v43;
        v28 = v28 + 1 & 7;
    }
    // 0x1a60
    *num = v28;
}
