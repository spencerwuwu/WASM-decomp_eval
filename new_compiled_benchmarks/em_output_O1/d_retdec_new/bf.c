
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "bf.h"
int64_t local_memcpy(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2; // 0x2
    if ((int32_t)a3 < 1) {
        // 0x28
        int64_t result; // 0x0
        return result;
    }
    int64_t v2 = a1; // 0x2
    int64_t v3 = a3;
    int64_t result2 = v3 + 0xffffffff & 0xffffffff; // 0x10
    *(int64_t *)v2 = *(int64_t *)v1;
    v1 += 8;
    v2 += 8;
    while ((int32_t)v3 > 1) {
        // 0x10
        v3 = result2;
        result2 = v3 + 0xffffffff & 0xffffffff;
        *(int64_t *)v2 = *(int64_t *)v1;
        v1 += 8;
        v2 += 8;
    }
    // 0x28
    return result2;
}
void BF_set_key(int32_t len, char * data) {
    // 0x30
    int128_t v1; // 0x30
    int128_t v2 = v1;
    int64_t v3 = (int64_t)data;
    int64_t v4 = *(int64_t *)74; // 0x43
    memcpy(v4, *(int64_t *)81, 144);
    int64_t v5 = *(int64_t *)101; // 0x5e
    memcpy(v5, *(int64_t *)108, (int64_t)&g6);
    uint64_t v6 = (len < 72 == (71 - len & len) < 0 ? 72 : (int64_t)len) + v3; // 0x86
    int64_t v7 = 0;
    uint64_t v8 = v3 + 1; // 0xa0
    int64_t v9 = v8 < v6 ? v8 : v3;
    uint64_t v10 = v9 + 1; // 0xac
    int64_t v11 = v10 < v6 ? v10 : v3;
    unsigned char v12 = *(char *)v3; // 0xb8
    unsigned char v13 = *(char *)v9; // 0xbb
    unsigned char v14 = *(char *)v11; // 0xc9
    uint64_t v15 = v11 + 1; // 0xcc
    int64_t v16 = v15 < v6 ? v15 : v3;
    unsigned char v17 = *(char *)v16; // 0xde
    uint64_t v18 = v16 + 1; // 0xe1
    int64_t * v19 = (int64_t *)(8 * v7 + v4); // 0x90
    int64_t v20 = *v19; // 0x90
    *v19 = (256 * (256 * (int64_t)v13 | 0x10000 * (int64_t)v12 | (int64_t)v14) | (int64_t)v17) ^ v20;
    int64_t v21 = v7 + 1; // 0x9e
    int64_t v22 = v18 < v6 ? v18 : v3; // 0x9e
    while (v7 != 17) {
        // 0xa0
        v7 = v21;
        v8 = v22 + 1;
        v9 = v8 < v6 ? v8 : v3;
        v10 = v9 + 1;
        v11 = v10 < v6 ? v10 : v3;
        v12 = *(char *)v22;
        v13 = *(char *)v9;
        v14 = *(char *)v11;
        v15 = v11 + 1;
        v16 = v15 < v6 ? v15 : v3;
        v17 = *(char *)v16;
        v18 = v16 + 1;
        v19 = (int64_t *)(8 * v7 + v4);
        v20 = *v19;
        *v19 = (256 * (256 * (int64_t)v13 | 0x10000 * (int64_t)v12 | (int64_t)v14) | (int64_t)v17) ^ v20;
        v21 = v7 + 1;
        v22 = v18 < v6 ? v18 : v3;
    }
    int64_t v23 = __asm_movaps(__asm_xorps(v2, v2)); // bp-72, 0xf4
    uint64_t v24 = 0;
    BF_encrypt(&v23, 1);
    *(int64_t *)(8 * v24 + v4) = v23;
    int64_t v25 = v24 + 2; // 0x145
    while (v24 < 16) {
        // 0x110
        v24 = v25;
        BF_encrypt(&v23, 1);
        *(int64_t *)(8 * v24 + v4) = v23;
        v25 = v24 + 2;
    }
    uint64_t v26 = 0;
    BF_encrypt(&v23, 1);
    *(int64_t *)(8 * v26 + v5) = v23;
    int64_t v27 = v26 + 2; // 0x189
    while (v26 < 1022) {
        // 0x150
        v26 = v27;
        BF_encrypt(&v23, 1);
        *(int64_t *)(8 * v26 + v5) = v23;
        v27 = v26 + 2;
    }
}
void BF_encrypt(int64_t * data, int32_t encrypt) {
    int64_t v1 = (int64_t)data;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x1a4
    int64_t v3 = *v2; // 0x1a4
    int64_t v4; // 0x1a0
    int64_t v5; // 0x1a0
    if (encrypt == 0) {
        int64_t v6 = *(int64_t *)1448; // 0x5a1
        uint64_t v7 = *(int64_t *)(v6 + 136) ^ v1; // 0x5a8
        int64_t v8 = *(int64_t *)1469; // 0x5b6
        int64_t v9 = v8 + 2048; // 0x5cb
        int32_t v10 = *(int32_t *)((v7 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x5cb
        int32_t v11 = *(int32_t *)(8 * v7 / 0x1000000 + v8); // 0x5d3
        int64_t v12 = v8 + (int64_t)&g1; // 0x5da
        int32_t v13 = *(int32_t *)((v7 / 32 & 2040) + v12); // 0x5da
        int64_t v14 = v8 + (int64_t)&g5; // 0x5e5
        int32_t v15 = *(int32_t *)((8 * v7 & 2040) + v14); // 0x5e5
        uint64_t v16 = *(int64_t *)(v6 + 128) ^ v3 ^ (int64_t)((v11 + v10 ^ v13) + v15); // 0x5f4
        int32_t v17 = *(int32_t *)((v16 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x60a
        int32_t v18 = *(int32_t *)(8 * v16 / 0x1000000 + v8); // 0x612
        int32_t v19 = *(int32_t *)((v16 / 32 & 2040) + v12); // 0x619
        int32_t v20 = *(int32_t *)((8 * v16 & 2040) + v14); // 0x624
        uint64_t v21 = *(int64_t *)(v6 + 120) ^ v7 ^ (int64_t)((v18 + v17 ^ v19) + v20); // 0x630
        int32_t v22 = *(int32_t *)((v21 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x647
        int32_t v23 = *(int32_t *)(8 * v21 / 0x1000000 + v8); // 0x64f
        int32_t v24 = *(int32_t *)((v21 / 32 & 2040) + v12); // 0x656
        int32_t v25 = *(int32_t *)((8 * v21 & 2040) + v14); // 0x661
        uint64_t v26 = *(int64_t *)(v6 + 112) ^ v16 ^ (int64_t)((v23 + v22 ^ v24) + v25); // 0x66d
        int32_t v27 = *(int32_t *)((v26 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x685
        int32_t v28 = *(int32_t *)(8 * v26 / 0x1000000 + v8); // 0x68d
        int32_t v29 = *(int32_t *)((v26 / 32 & 2040) + v12); // 0x694
        int32_t v30 = *(int32_t *)((8 * v26 & 2040) + v14); // 0x69f
        uint64_t v31 = *(int64_t *)(v6 + 104) ^ v21 ^ (int64_t)((v28 + v27 ^ v29) + v30); // 0x6ab
        int32_t v32 = *(int32_t *)((v31 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x6c1
        int32_t v33 = *(int32_t *)(8 * v31 / 0x1000000 + v8); // 0x6c9
        int32_t v34 = *(int32_t *)((v31 / 32 & 2040) + v12); // 0x6d0
        int32_t v35 = *(int32_t *)((8 * v31 & 2040) + v14); // 0x6db
        uint64_t v36 = *(int64_t *)(v6 + 96) ^ v26 ^ (int64_t)((v33 + v32 ^ v34) + v35); // 0x6e7
        int32_t v37 = *(int32_t *)((v36 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x6fe
        int32_t v38 = *(int32_t *)(8 * v36 / 0x1000000 + v8); // 0x706
        int32_t v39 = *(int32_t *)((v36 / 32 & 2040) + v12); // 0x70d
        int32_t v40 = *(int32_t *)((8 * v36 & 2040) + v14); // 0x718
        uint64_t v41 = *(int64_t *)(v6 + 88) ^ v31 ^ (int64_t)((v38 + v37 ^ v39) + v40); // 0x724
        int32_t v42 = *(int32_t *)((v41 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x73c
        int32_t v43 = *(int32_t *)(8 * v41 / 0x1000000 + v8); // 0x744
        int32_t v44 = *(int32_t *)((v41 / 32 & 2040) + v12); // 0x74b
        int32_t v45 = *(int32_t *)((8 * v41 & 2040) + v14); // 0x756
        uint64_t v46 = *(int64_t *)(v6 + 80) ^ v36 ^ (int64_t)((v43 + v42 ^ v44) + v45); // 0x762
        int32_t v47 = *(int32_t *)((v46 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x778
        int32_t v48 = *(int32_t *)(8 * v46 / 0x1000000 + v8); // 0x780
        int32_t v49 = *(int32_t *)((v46 / 32 & 2040) + v12); // 0x787
        int32_t v50 = *(int32_t *)((8 * v46 & 2040) + v14); // 0x792
        uint64_t v51 = *(int64_t *)(v6 + 72) ^ v41 ^ (int64_t)((v48 + v47 ^ v49) + v50); // 0x79e
        int32_t v52 = *(int32_t *)((v51 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x7b5
        int32_t v53 = *(int32_t *)(8 * v51 / 0x1000000 + v8); // 0x7bd
        int32_t v54 = *(int32_t *)((v51 / 32 & 2040) + v12); // 0x7c4
        int32_t v55 = *(int32_t *)((8 * v51 & 2040) + v14); // 0x7cf
        uint64_t v56 = *(int64_t *)(v6 + 64) ^ v46 ^ (int64_t)((v53 + v52 ^ v54) + v55); // 0x7db
        int32_t v57 = *(int32_t *)((v56 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x7f3
        int32_t v58 = *(int32_t *)(8 * v56 / 0x1000000 + v8); // 0x7fb
        int32_t v59 = *(int32_t *)((v56 / 32 & 2040) + v12); // 0x802
        int32_t v60 = *(int32_t *)((8 * v56 & 2040) + v14); // 0x80d
        uint64_t v61 = *(int64_t *)(v6 + 56) ^ v51 ^ (int64_t)((v58 + v57 ^ v59) + v60); // 0x819
        int32_t v62 = *(int32_t *)((v61 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x82f
        int32_t v63 = *(int32_t *)(8 * v61 / 0x1000000 + v8); // 0x837
        int32_t v64 = *(int32_t *)((v61 / 32 & 2040) + v12); // 0x83e
        int32_t v65 = *(int32_t *)((8 * v61 & 2040) + v14); // 0x849
        uint64_t v66 = *(int64_t *)(v6 + 48) ^ v56 ^ (int64_t)((v63 + v62 ^ v64) + v65); // 0x855
        int32_t v67 = *(int32_t *)((v66 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x86c
        int32_t v68 = *(int32_t *)(8 * v66 / 0x1000000 + v8); // 0x874
        int32_t v69 = *(int32_t *)((v66 / 32 & 2040) + v12); // 0x87b
        int32_t v70 = *(int32_t *)((8 * v66 & 2040) + v14); // 0x886
        uint64_t v71 = *(int64_t *)(v6 + 40) ^ v61 ^ (int64_t)((v68 + v67 ^ v69) + v70); // 0x892
        int32_t v72 = *(int32_t *)((v71 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x8aa
        int32_t v73 = *(int32_t *)(8 * v71 / 0x1000000 + v8); // 0x8b2
        int32_t v74 = *(int32_t *)((v71 / 32 & 2040) + v12); // 0x8b9
        int32_t v75 = *(int32_t *)((8 * v71 & 2040) + v14); // 0x8c4
        uint64_t v76 = *(int64_t *)(v6 + 32) ^ v66 ^ (int64_t)((v73 + v72 ^ v74) + v75); // 0x8d0
        int32_t v77 = *(int32_t *)((v76 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x8e6
        int32_t v78 = *(int32_t *)(8 * v76 / 0x1000000 + v8); // 0x8ee
        int32_t v79 = *(int32_t *)((v76 / 32 & 2040) + v12); // 0x8f5
        int32_t v80 = *(int32_t *)((8 * v76 & 2040) + v14); // 0x900
        uint64_t v81 = *(int64_t *)(v6 + 24) ^ v71 ^ (int64_t)((v78 + v77 ^ v79) + v80); // 0x90c
        int32_t v82 = *(int32_t *)((v81 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x923
        int32_t v83 = *(int32_t *)(8 * v81 / 0x1000000 + v8); // 0x92b
        int32_t v84 = *(int32_t *)((v81 / 32 & 2040) + v12); // 0x932
        int32_t v85 = *(int32_t *)((8 * v81 & 2040) + v14); // 0x93d
        uint64_t v86 = *(int64_t *)(v6 + 16) ^ v76 ^ (int64_t)((v83 + v82 ^ v84) + v85); // 0x949
        int32_t v87 = *(int32_t *)((v86 / 0x2000 & (int64_t)(int32_t)&g7) + v9); // 0x961
        int32_t v88 = *(int32_t *)(8 * v86 / 0x1000000 + v8); // 0x969
        int32_t v89 = *(int32_t *)((v86 / 32 & 2040) + v12); // 0x970
        int32_t v90 = *(int32_t *)((8 * v86 & 2040) + v14); // 0x97b
        int64_t v91 = *(int64_t *)(v6 + 8); // 0x983
        v4 = v91 ^ v81 ^ (int64_t)((v88 + v87 ^ v89) + v90);
        v5 = *(int64_t *)v6 ^ v86;
    } else {
        int64_t v92 = *(int64_t *)439; // 0x1b0
        uint64_t v93 = *(int64_t *)v92 ^ v1; // 0x1b7
        int64_t v94 = *(int64_t *)456; // 0x1c1
        int64_t v95 = v94 + 2048; // 0x1d6
        int32_t v96 = *(int32_t *)((v93 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x1d6
        int32_t v97 = *(int32_t *)(8 * v93 / 0x1000000 + v94); // 0x1de
        int64_t v98 = v94 + (int64_t)&g1; // 0x1e5
        int32_t v99 = *(int32_t *)((v93 / 32 & 2040) + v98); // 0x1e5
        int64_t v100 = v94 + (int64_t)&g5; // 0x1f0
        int32_t v101 = *(int32_t *)((8 * v93 & 2040) + v100); // 0x1f0
        uint64_t v102 = *(int64_t *)(v92 + 8) ^ v3 ^ (int64_t)((v97 + v96 ^ v99) + v101); // 0x1fc
        int32_t v103 = *(int32_t *)((v102 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x212
        int32_t v104 = *(int32_t *)(8 * v102 / 0x1000000 + v94); // 0x21a
        int32_t v105 = *(int32_t *)((v102 / 32 & 2040) + v98); // 0x221
        int32_t v106 = *(int32_t *)((8 * v102 & 2040) + v100); // 0x22c
        int64_t v107 = *(int64_t *)(v92 + 16); // 0x234
        uint64_t v108 = v107 ^ v93 ^ (int64_t)((v104 + v103 ^ v105) + v106); // 0x238
        int32_t v109 = *(int32_t *)((v108 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x24f
        int32_t v110 = *(int32_t *)(8 * v108 / 0x1000000 + v94); // 0x257
        int32_t v111 = *(int32_t *)((v108 / 32 & 2040) + v98); // 0x25e
        int32_t v112 = *(int32_t *)((8 * v108 & 2040) + v100); // 0x269
        int64_t v113 = *(int64_t *)(v92 + 24); // 0x271
        uint64_t v114 = v113 ^ v102 ^ (int64_t)((v110 + v109 ^ v111) + v112); // 0x275
        int32_t v115 = *(int32_t *)((v114 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x28d
        int32_t v116 = *(int32_t *)(8 * v114 / 0x1000000 + v94); // 0x295
        int32_t v117 = *(int32_t *)((v114 / 32 & 2040) + v98); // 0x29c
        int32_t v118 = *(int32_t *)((8 * v114 & 2040) + v100); // 0x2a7
        int64_t v119 = *(int64_t *)(v92 + 32); // 0x2af
        uint64_t v120 = v119 ^ v108 ^ (int64_t)((v116 + v115 ^ v117) + v118); // 0x2b3
        int32_t v121 = *(int32_t *)((v120 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x2c9
        int32_t v122 = *(int32_t *)(8 * v120 / 0x1000000 + v94); // 0x2d1
        int32_t v123 = *(int32_t *)((v120 / 32 & 2040) + v98); // 0x2d8
        int32_t v124 = *(int32_t *)((8 * v120 & 2040) + v100); // 0x2e3
        int64_t v125 = *(int64_t *)(v92 + 40); // 0x2eb
        uint64_t v126 = v125 ^ v114 ^ (int64_t)((v122 + v121 ^ v123) + v124); // 0x2ef
        int32_t v127 = *(int32_t *)((v126 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x306
        int32_t v128 = *(int32_t *)(8 * v126 / 0x1000000 + v94); // 0x30e
        int32_t v129 = *(int32_t *)((v126 / 32 & 2040) + v98); // 0x315
        int32_t v130 = *(int32_t *)((8 * v126 & 2040) + v100); // 0x320
        int64_t v131 = *(int64_t *)(v92 + 48); // 0x328
        uint64_t v132 = v131 ^ v120 ^ (int64_t)((v128 + v127 ^ v129) + v130); // 0x32c
        int32_t v133 = *(int32_t *)((v132 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x344
        int32_t v134 = *(int32_t *)(8 * v132 / 0x1000000 + v94); // 0x34c
        int32_t v135 = *(int32_t *)((v132 / 32 & 2040) + v98); // 0x353
        int32_t v136 = *(int32_t *)((8 * v132 & 2040) + v100); // 0x35e
        int64_t v137 = *(int64_t *)(v92 + 56); // 0x366
        uint64_t v138 = v137 ^ v126 ^ (int64_t)((v134 + v133 ^ v135) + v136); // 0x36a
        int32_t v139 = *(int32_t *)((v138 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x380
        int32_t v140 = *(int32_t *)(8 * v138 / 0x1000000 + v94); // 0x388
        int32_t v141 = *(int32_t *)((v138 / 32 & 2040) + v98); // 0x38f
        int32_t v142 = *(int32_t *)((8 * v138 & 2040) + v100); // 0x39a
        int64_t v143 = *(int64_t *)(v92 + 64); // 0x3a2
        uint64_t v144 = v143 ^ v132 ^ (int64_t)((v140 + v139 ^ v141) + v142); // 0x3a6
        int32_t v145 = *(int32_t *)((v144 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x3bd
        int32_t v146 = *(int32_t *)(8 * v144 / 0x1000000 + v94); // 0x3c5
        int32_t v147 = *(int32_t *)((v144 / 32 & 2040) + v98); // 0x3cc
        int32_t v148 = *(int32_t *)((8 * v144 & 2040) + v100); // 0x3d7
        int64_t v149 = *(int64_t *)(v92 + 72); // 0x3df
        uint64_t v150 = v149 ^ v138 ^ (int64_t)((v146 + v145 ^ v147) + v148); // 0x3e3
        int32_t v151 = *(int32_t *)((v150 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x3fb
        int32_t v152 = *(int32_t *)(8 * v150 / 0x1000000 + v94); // 0x403
        int32_t v153 = *(int32_t *)((v150 / 32 & 2040) + v98); // 0x40a
        int32_t v154 = *(int32_t *)((8 * v150 & 2040) + v100); // 0x415
        int64_t v155 = *(int64_t *)(v92 + 80); // 0x41d
        uint64_t v156 = v155 ^ v144 ^ (int64_t)((v152 + v151 ^ v153) + v154); // 0x421
        int32_t v157 = *(int32_t *)((v156 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x437
        int32_t v158 = *(int32_t *)(8 * v156 / 0x1000000 + v94); // 0x43f
        int32_t v159 = *(int32_t *)((v156 / 32 & 2040) + v98); // 0x446
        int32_t v160 = *(int32_t *)((8 * v156 & 2040) + v100); // 0x451
        int64_t v161 = *(int64_t *)(v92 + 88); // 0x459
        uint64_t v162 = v161 ^ v150 ^ (int64_t)((v158 + v157 ^ v159) + v160); // 0x45d
        int32_t v163 = *(int32_t *)((v162 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x474
        int32_t v164 = *(int32_t *)(8 * v162 / 0x1000000 + v94); // 0x47c
        int32_t v165 = *(int32_t *)((v162 / 32 & 2040) + v98); // 0x483
        int32_t v166 = *(int32_t *)((8 * v162 & 2040) + v100); // 0x48e
        int64_t v167 = *(int64_t *)(v92 + 96); // 0x496
        uint64_t v168 = v167 ^ v156 ^ (int64_t)((v164 + v163 ^ v165) + v166); // 0x49a
        int32_t v169 = *(int32_t *)((v168 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x4b2
        int32_t v170 = *(int32_t *)(8 * v168 / 0x1000000 + v94); // 0x4ba
        int32_t v171 = *(int32_t *)((v168 / 32 & 2040) + v98); // 0x4c1
        int32_t v172 = *(int32_t *)((8 * v168 & 2040) + v100); // 0x4cc
        int64_t v173 = *(int64_t *)(v92 + 104); // 0x4d4
        uint64_t v174 = v173 ^ v162 ^ (int64_t)((v170 + v169 ^ v171) + v172); // 0x4d8
        int32_t v175 = *(int32_t *)((v174 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x4ee
        int32_t v176 = *(int32_t *)(8 * v174 / 0x1000000 + v94); // 0x4f6
        int32_t v177 = *(int32_t *)((v174 / 32 & 2040) + v98); // 0x4fd
        int32_t v178 = *(int32_t *)((8 * v174 & 2040) + v100); // 0x508
        int64_t v179 = *(int64_t *)(v92 + 112); // 0x510
        uint64_t v180 = v179 ^ v168 ^ (int64_t)((v176 + v175 ^ v177) + v178); // 0x514
        int32_t v181 = *(int32_t *)((v180 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x52b
        int32_t v182 = *(int32_t *)(8 * v180 / 0x1000000 + v94); // 0x533
        int32_t v183 = *(int32_t *)((v180 / 32 & 2040) + v98); // 0x53a
        int32_t v184 = *(int32_t *)((8 * v180 & 2040) + v100); // 0x545
        int64_t v185 = *(int64_t *)(v92 + 120); // 0x54d
        uint64_t v186 = v185 ^ v174 ^ (int64_t)((v182 + v181 ^ v183) + v184); // 0x551
        int32_t v187 = *(int32_t *)((v186 / 0x2000 & (int64_t)(int32_t)&g7) + v95); // 0x569
        int32_t v188 = *(int32_t *)(8 * v186 / 0x1000000 + v94); // 0x571
        int32_t v189 = *(int32_t *)((v186 / 32 & 2040) + v98); // 0x578
        int32_t v190 = *(int32_t *)((8 * v186 & 2040) + v100); // 0x583
        int64_t v191 = *(int64_t *)(v92 + 128); // 0x58b
        v4 = v191 ^ v180 ^ (int64_t)((v188 + v187 ^ v189) + v190);
        v5 = *(int64_t *)(v92 + 136) ^ v186;
    }
    // 0x98d
    *v2 = v4 & 0xffffffff;
    *data = v5 & 0xffffffff;
}
void BF_cfb64_encrypt(char * in, char * out, int64_t length, char * ivec, int32_t * num, int32_t encrypt) {
    // 0x9a0
    int128_t v1; // 0x9a0
    int128_t v2 = v1;
    int64_t v3 = (int64_t)ivec;
    int64_t v4 = (int64_t)out;
    int64_t v5 = (int64_t)in;
    int64_t v6; // 0x9a0
    int64_t v7 = v6 & 0xffffffff; // 0x9bf
    int64_t v8; // 0x9a0
    int64_t v9; // 0x9a0
    int64_t v10; // bp-72, 0x9a0
    if (encrypt == 0) {
        // 0xa44
        if (length == 0) {
            // 0xab3
            __asm_movaps(__asm_xorps(v2, v2));
            *num = (int32_t)v7;
            return;
        }
        int32_t * v11 = (int32_t *)(v3 + 4);
        int64_t v12 = v7; // 0xa6f
        int64_t v13 = v4; // 0x9a0
        int64_t v14 = v5; // 0x9a0
        int64_t v15 = length; // 0xa77
        if (v12 == 0) {
            // 0xa7e
            v10 = llvm_bswap_i32(*(int32_t *)&v9);
            BF_encrypt(&v10, 1);
            *(int32_t *)ivec = llvm_bswap_i32((int32_t)v10);
        }
        // 0xa50
        v15--;
        char v16 = *(char *)v14; // 0xa50
        char * v17 = (char *)((0x100000000 * v12 >> 32) + v3); // 0xa5b
        *v17 = v16;
        *(char *)v13 = *v17 ^ v16;
        v12 = v12 + 1 & 7;
        v13++;
        v14++;
        v8 = v12;
        while (v15 != 0) {
            // 0xa77
            if (v12 == 0) {
                // 0xa7e
                v10 = llvm_bswap_i32(*(int32_t *)&v9);
                BF_encrypt(&v10, 1);
                *(int32_t *)ivec = llvm_bswap_i32((int32_t)v10);
            }
            // 0xa50
            v15--;
            v16 = *(char *)v14;
            v17 = (char *)((0x100000000 * v12 >> 32) + v3);
            *v17 = v16;
            *(char *)v13 = *v17 ^ v16;
            v12 = v12 + 1 & 7;
            v13++;
            v14++;
            v8 = v12;
        }
        // 0xab3
        __asm_movaps(__asm_xorps(v2, v2));
        *num = (int32_t)v8;
        return;
    }
    // 0x9c7
    if (length == 0) {
        // 0xab3
        __asm_movaps(__asm_xorps(v2, v2));
        *num = (int32_t)v7;
        return;
    }
    int32_t * v18 = (int32_t *)(v3 + 4);
    int64_t v19 = v7; // 0x9fc
    int64_t v20 = v4; // 0x9a0
    int64_t v21 = v5; // 0x9a0
    int64_t v22 = length; // 0xa08
    if (v19 == 0) {
        // 0xa0f
        v10 = llvm_bswap_i32(*(int32_t *)&v9);
        BF_encrypt(&v10, 1);
        *(int32_t *)ivec = llvm_bswap_i32((int32_t)v10);
    }
    // 0x9e0
    v22--;
    char * v23 = (char *)((0x100000000 * v19 >> 32) + v3); // 0x9e3
    char v24 = *(char *)v21 ^ *v23; // 0x9e8
    *(char *)v20 = v24;
    *v23 = v24;
    v19 = v19 + 1 & 7;
    v20++;
    v21++;
    v8 = v19;
    while (v22 != 0) {
        // 0xa08
        if (v19 == 0) {
            // 0xa0f
            v10 = llvm_bswap_i32(*(int32_t *)&v9);
            BF_encrypt(&v10, 1);
            *(int32_t *)ivec = llvm_bswap_i32((int32_t)v10);
        }
        // 0x9e0
        v22--;
        v23 = (char *)((0x100000000 * v19 >> 32) + v3);
        v24 = *(char *)v21 ^ *v23;
        *(char *)v20 = v24;
        *v23 = v24;
        v19 = v19 + 1 & 7;
        v20++;
        v21++;
        v8 = v19;
    }
    // 0xab3
    __asm_movaps(__asm_xorps(v2, v2));
    *num = (int32_t)v8;
}
