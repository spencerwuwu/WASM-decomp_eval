
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "bf.h"
int64_t local_memcpy(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x0
    if (v1 < 1) {
        // 0x78
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2; // 0x7
    int64_t v2 = a1; // 0x7
    int64_t v3 = a3; // 0x7
    if (a1 - a2 >= 32 && v1 >= 6) {
        int64_t v4 = a3 & 0xfffffffc; // 0x1b
        int64_t v5 = 8 * v4; // 0x1f
        result2 = v5 + a2;
        int64_t v6 = 0; // 0x2d
        int64_t v7 = 8 * v6; // 0x30
        int64_t v8 = v7 + a2;
        int128_t v9 = __asm_movups(*(int128_t *)v8); // 0x30
        int128_t v10 = __asm_movups(*(int128_t *)(v8 + 16)); // 0x35
        int64_t v11 = v7 + a1;
        __asm_movups_4(*(int128_t *)v11, v9);
        __asm_movups_4(*(int128_t *)(v11 + 16), v10);
        v6 += 4;
        while (v6 != v4) {
            // 0x30
            v7 = 8 * v6;
            v8 = v7 + a2;
            v9 = __asm_movups(*(int128_t *)v8);
            v10 = __asm_movups(*(int128_t *)(v8 + 16));
            v11 = v7 + a1;
            __asm_movups_4(*(int128_t *)v11, v9);
            __asm_movups_4(*(int128_t *)(v11 + 16), v10);
            v6 += 4;
        }
        // 0x4f
        v2 = v5 + a1;
        v3 = a3 - v4 & 0xffffffff;
        if (v4 == (a3 & 0xffffffff)) {
            // 0x78
            return result2;
        }
    }
    int64_t result3 = result2; // 0x6d
    int64_t v12 = v2; // 0x0
    int64_t v13 = v3;
    *(int64_t *)v12 = *(int64_t *)result3;
    result3 += 8;
    v12 += 8;
    int64_t v14 = v13 + 0xffffffff & 0xffffffff; // 0x76
    while ((int32_t)v13 >= 2) {
        // 0x60
        v13 = v14;
        *(int64_t *)v12 = *(int64_t *)result3;
        result3 += 8;
        v12 += 8;
        v14 = v13 + 0xffffffff & 0xffffffff;
    }
    // 0x78
    return result3;
}
void BF_set_key(int32_t len, char * data) {
    // 0x80
    int128_t v1; // 0x80
    int128_t v2 = v1;
    int64_t v3 = (int64_t)data;
    int64_t v4 = *(int64_t *)150; // 0x8f
    memcpy(v4, *(int64_t *)157, 144);
    int64_t v5 = *(int64_t *)177; // 0xaa
    memcpy(v5, *(int64_t *)184, (int64_t)&g6);
    uint64_t v6 = (len < 72 == (71 - len & len) < 0 ? 72 : (int64_t)len) + v3; // 0xd2
    int64_t v7 = 0;
    uint64_t v8 = v3 + 1; // 0xf0
    int64_t v9 = v8 < v6 ? v8 : v3;
    uint64_t v10 = v9 + 1; // 0xfc
    int64_t v11 = v10 < v6 ? v10 : v3;
    unsigned char v12 = *(char *)v3; // 0x108
    unsigned char v13 = *(char *)v9; // 0x10b
    unsigned char v14 = *(char *)v11; // 0x119
    uint64_t v15 = v11 + 1; // 0x11c
    int64_t v16 = v15 < v6 ? v15 : v3;
    unsigned char v17 = *(char *)v16; // 0x12e
    uint64_t v18 = v16 + 1; // 0x131
    int64_t * v19 = (int64_t *)(8 * v7 + v4); // 0xe0
    int64_t v20 = *v19; // 0xe0
    *v19 = (256 * (256 * (int64_t)v13 | 0x10000 * (int64_t)v12 | (int64_t)v14) | (int64_t)v17) ^ v20;
    int64_t v21 = v7 + 1; // 0xee
    int64_t v22 = v18 < v6 ? v18 : v3; // 0xee
    while (v7 != 17) {
        // 0xf0
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
    int64_t v23 = __asm_movaps(__asm_xorps(v2, v2)); // bp-56, 0x144
    BF_encrypt(&v23, 1);
    int64_t v24 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x15c
    *(int128_t *)v4 = (int128_t)v24;
    BF_encrypt(&v23, 1);
    int64_t v25 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x171
    *(int128_t *)(v4 + 16) = (int128_t)v25;
    BF_encrypt(&v23, 1);
    int64_t v26 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x187
    *(int128_t *)(v4 + 32) = (int128_t)v26;
    BF_encrypt(&v23, 1);
    int64_t v27 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x19d
    *(int128_t *)(v4 + 48) = (int128_t)v27;
    BF_encrypt(&v23, 1);
    int64_t v28 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x1b3
    *(int128_t *)(v4 + 64) = (int128_t)v28;
    BF_encrypt(&v23, 1);
    int64_t v29 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x1c9
    *(int128_t *)(v4 + 80) = (int128_t)v29;
    BF_encrypt(&v23, 1);
    int64_t v30 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x1df
    *(int128_t *)(v4 + 96) = (int128_t)v30;
    BF_encrypt(&v23, 1);
    int64_t v31 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x1f5
    *(int128_t *)(v4 + 112) = (int128_t)v31;
    BF_encrypt(&v23, 1);
    int64_t v32 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x20b
    *(int128_t *)(v4 + 128) = (int128_t)v32;
    for (uint64_t i = 0; i < 1023; i += 2) {
        // 0x220
        BF_encrypt(&v23, 1);
        int64_t v33 = __asm_movaps(__asm_movaps_1((int128_t)v23)); // 0x231
        *(int128_t *)(8 * i + v5) = (int128_t)v33;
    }
}
void BF_encrypt(int64_t * data, int32_t encrypt) {
    int64_t v1 = (int64_t)data;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x264
    int64_t v3 = *v2; // 0x264
    int64_t v4; // 0x260
    int64_t v5; // 0x260
    if (encrypt == 0) {
        int64_t v6 = *(int64_t *)1640; // 0x661
        uint64_t v7 = *(int64_t *)(v6 + 136) ^ v1; // 0x668
        int64_t v8 = *(int64_t *)1661; // 0x676
        int64_t v9 = v8 + 2048; // 0x68b
        int32_t v10 = *(int32_t *)((v7 / 0x2000 & 2040) + v9); // 0x68b
        int32_t v11 = *(int32_t *)(8 * v7 / 0x1000000 + v8); // 0x693
        int64_t v12 = v8 + (int64_t)&g1; // 0x69a
        int32_t v13 = *(int32_t *)((v7 / 32 & 2040) + v12); // 0x69a
        int64_t v14 = v8 + (int64_t)&g5; // 0x6a5
        int32_t v15 = *(int32_t *)((8 * v7 & 2040) + v14); // 0x6a5
        uint64_t v16 = *(int64_t *)(v6 + 128) ^ v3 ^ (int64_t)((v11 + v10 ^ v13) + v15); // 0x6b4
        int32_t v17 = *(int32_t *)((v16 / 0x2000 & 2040) + v9); // 0x6ca
        int32_t v18 = *(int32_t *)(8 * v16 / 0x1000000 + v8); // 0x6d2
        int32_t v19 = *(int32_t *)((v16 / 32 & 2040) + v12); // 0x6d9
        int32_t v20 = *(int32_t *)((8 * v16 & 2040) + v14); // 0x6e4
        uint64_t v21 = *(int64_t *)(v6 + 120) ^ v7 ^ (int64_t)((v18 + v17 ^ v19) + v20); // 0x6f0
        int32_t v22 = *(int32_t *)((v21 / 0x2000 & 2040) + v9); // 0x707
        int32_t v23 = *(int32_t *)(8 * v21 / 0x1000000 + v8); // 0x70f
        int32_t v24 = *(int32_t *)((v21 / 32 & 2040) + v12); // 0x716
        int32_t v25 = *(int32_t *)((8 * v21 & 2040) + v14); // 0x721
        uint64_t v26 = *(int64_t *)(v6 + 112) ^ v16 ^ (int64_t)((v23 + v22 ^ v24) + v25); // 0x72d
        int32_t v27 = *(int32_t *)((v26 / 0x2000 & 2040) + v9); // 0x745
        int32_t v28 = *(int32_t *)(8 * v26 / 0x1000000 + v8); // 0x74d
        int32_t v29 = *(int32_t *)((v26 / 32 & 2040) + v12); // 0x754
        int32_t v30 = *(int32_t *)((8 * v26 & 2040) + v14); // 0x75f
        uint64_t v31 = *(int64_t *)(v6 + 104) ^ v21 ^ (int64_t)((v28 + v27 ^ v29) + v30); // 0x76b
        int32_t v32 = *(int32_t *)((v31 / 0x2000 & 2040) + v9); // 0x781
        int32_t v33 = *(int32_t *)(8 * v31 / 0x1000000 + v8); // 0x789
        int32_t v34 = *(int32_t *)((v31 / 32 & 2040) + v12); // 0x790
        int32_t v35 = *(int32_t *)((8 * v31 & 2040) + v14); // 0x79b
        uint64_t v36 = *(int64_t *)(v6 + 96) ^ v26 ^ (int64_t)((v33 + v32 ^ v34) + v35); // 0x7a7
        int32_t v37 = *(int32_t *)((v36 / 0x2000 & 2040) + v9); // 0x7be
        int32_t v38 = *(int32_t *)(8 * v36 / 0x1000000 + v8); // 0x7c6
        int32_t v39 = *(int32_t *)((v36 / 32 & 2040) + v12); // 0x7cd
        int32_t v40 = *(int32_t *)((8 * v36 & 2040) + v14); // 0x7d8
        uint64_t v41 = *(int64_t *)(v6 + 88) ^ v31 ^ (int64_t)((v38 + v37 ^ v39) + v40); // 0x7e4
        int32_t v42 = *(int32_t *)((v41 / 0x2000 & 2040) + v9); // 0x7fc
        int32_t v43 = *(int32_t *)(8 * v41 / 0x1000000 + v8); // 0x804
        int32_t v44 = *(int32_t *)((v41 / 32 & 2040) + v12); // 0x80b
        int32_t v45 = *(int32_t *)((8 * v41 & 2040) + v14); // 0x816
        uint64_t v46 = *(int64_t *)(v6 + 80) ^ v36 ^ (int64_t)((v43 + v42 ^ v44) + v45); // 0x822
        int32_t v47 = *(int32_t *)((v46 / 0x2000 & 2040) + v9); // 0x838
        int32_t v48 = *(int32_t *)(8 * v46 / 0x1000000 + v8); // 0x840
        int32_t v49 = *(int32_t *)((v46 / 32 & 2040) + v12); // 0x847
        int32_t v50 = *(int32_t *)((8 * v46 & 2040) + v14); // 0x852
        uint64_t v51 = *(int64_t *)(v6 + 72) ^ v41 ^ (int64_t)((v48 + v47 ^ v49) + v50); // 0x85e
        int32_t v52 = *(int32_t *)((v51 / 0x2000 & 2040) + v9); // 0x875
        int32_t v53 = *(int32_t *)(8 * v51 / 0x1000000 + v8); // 0x87d
        int32_t v54 = *(int32_t *)((v51 / 32 & 2040) + v12); // 0x884
        int32_t v55 = *(int32_t *)((8 * v51 & 2040) + v14); // 0x88f
        uint64_t v56 = *(int64_t *)(v6 + 64) ^ v46 ^ (int64_t)((v53 + v52 ^ v54) + v55); // 0x89b
        int32_t v57 = *(int32_t *)((v56 / 0x2000 & 2040) + v9); // 0x8b3
        int32_t v58 = *(int32_t *)(8 * v56 / 0x1000000 + v8); // 0x8bb
        int32_t v59 = *(int32_t *)((v56 / 32 & 2040) + v12); // 0x8c2
        int32_t v60 = *(int32_t *)((8 * v56 & 2040) + v14); // 0x8cd
        uint64_t v61 = *(int64_t *)(v6 + 56) ^ v51 ^ (int64_t)((v58 + v57 ^ v59) + v60); // 0x8d9
        int32_t v62 = *(int32_t *)((v61 / 0x2000 & 2040) + v9); // 0x8ef
        int32_t v63 = *(int32_t *)(8 * v61 / 0x1000000 + v8); // 0x8f7
        int32_t v64 = *(int32_t *)((v61 / 32 & 2040) + v12); // 0x8fe
        int32_t v65 = *(int32_t *)((8 * v61 & 2040) + v14); // 0x909
        uint64_t v66 = *(int64_t *)(v6 + 48) ^ v56 ^ (int64_t)((v63 + v62 ^ v64) + v65); // 0x915
        int32_t v67 = *(int32_t *)((v66 / 0x2000 & 2040) + v9); // 0x92c
        int32_t v68 = *(int32_t *)(8 * v66 / 0x1000000 + v8); // 0x934
        int32_t v69 = *(int32_t *)((v66 / 32 & 2040) + v12); // 0x93b
        int32_t v70 = *(int32_t *)((8 * v66 & 2040) + v14); // 0x946
        uint64_t v71 = *(int64_t *)(v6 + 40) ^ v61 ^ (int64_t)((v68 + v67 ^ v69) + v70); // 0x952
        int32_t v72 = *(int32_t *)((v71 / 0x2000 & 2040) + v9); // 0x96a
        int32_t v73 = *(int32_t *)(8 * v71 / 0x1000000 + v8); // 0x972
        int32_t v74 = *(int32_t *)((v71 / 32 & 2040) + v12); // 0x979
        int32_t v75 = *(int32_t *)((8 * v71 & 2040) + v14); // 0x984
        uint64_t v76 = *(int64_t *)(v6 + 32) ^ v66 ^ (int64_t)((v73 + v72 ^ v74) + v75); // 0x990
        int32_t v77 = *(int32_t *)((v76 / 0x2000 & 2040) + v9); // 0x9a6
        int32_t v78 = *(int32_t *)(8 * v76 / 0x1000000 + v8); // 0x9ae
        int32_t v79 = *(int32_t *)((v76 / 32 & 2040) + v12); // 0x9b5
        int32_t v80 = *(int32_t *)((8 * v76 & 2040) + v14); // 0x9c0
        uint64_t v81 = *(int64_t *)(v6 + 24) ^ v71 ^ (int64_t)((v78 + v77 ^ v79) + v80); // 0x9cc
        int32_t v82 = *(int32_t *)((v81 / 0x2000 & 2040) + v9); // 0x9e3
        int32_t v83 = *(int32_t *)(8 * v81 / 0x1000000 + v8); // 0x9eb
        int32_t v84 = *(int32_t *)((v81 / 32 & 2040) + v12); // 0x9f2
        int32_t v85 = *(int32_t *)((8 * v81 & 2040) + v14); // 0x9fd
        uint64_t v86 = *(int64_t *)(v6 + 16) ^ v76 ^ (int64_t)((v83 + v82 ^ v84) + v85); // 0xa09
        int32_t v87 = *(int32_t *)((v86 / 0x2000 & 2040) + v9); // 0xa21
        int32_t v88 = *(int32_t *)(8 * v86 / 0x1000000 + v8); // 0xa29
        int32_t v89 = *(int32_t *)((v86 / 32 & 2040) + v12); // 0xa30
        int32_t v90 = *(int32_t *)((8 * v86 & 2040) + v14); // 0xa3b
        int64_t v91 = *(int64_t *)(v6 + 8); // 0xa43
        v4 = v91 ^ v81 ^ (int64_t)((v88 + v87 ^ v89) + v90);
        v5 = *(int64_t *)v6 ^ v86;
    } else {
        int64_t v92 = *(int64_t *)631; // 0x270
        uint64_t v93 = *(int64_t *)v92 ^ v1; // 0x277
        int64_t v94 = *(int64_t *)648; // 0x281
        int64_t v95 = v94 + 2048; // 0x296
        int32_t v96 = *(int32_t *)((v93 / 0x2000 & 2040) + v95); // 0x296
        int32_t v97 = *(int32_t *)(8 * v93 / 0x1000000 + v94); // 0x29e
        int64_t v98 = v94 + (int64_t)&g1; // 0x2a5
        int32_t v99 = *(int32_t *)((v93 / 32 & 2040) + v98); // 0x2a5
        int64_t v100 = v94 + (int64_t)&g5; // 0x2b0
        int32_t v101 = *(int32_t *)((8 * v93 & 2040) + v100); // 0x2b0
        uint64_t v102 = *(int64_t *)(v92 + 8) ^ v3 ^ (int64_t)((v97 + v96 ^ v99) + v101); // 0x2bc
        int32_t v103 = *(int32_t *)((v102 / 0x2000 & 2040) + v95); // 0x2d2
        int32_t v104 = *(int32_t *)(8 * v102 / 0x1000000 + v94); // 0x2da
        int32_t v105 = *(int32_t *)((v102 / 32 & 2040) + v98); // 0x2e1
        int32_t v106 = *(int32_t *)((8 * v102 & 2040) + v100); // 0x2ec
        int64_t v107 = *(int64_t *)(v92 + 16); // 0x2f4
        uint64_t v108 = v107 ^ v93 ^ (int64_t)((v104 + v103 ^ v105) + v106); // 0x2f8
        int32_t v109 = *(int32_t *)((v108 / 0x2000 & 2040) + v95); // 0x30f
        int32_t v110 = *(int32_t *)(8 * v108 / 0x1000000 + v94); // 0x317
        int32_t v111 = *(int32_t *)((v108 / 32 & 2040) + v98); // 0x31e
        int32_t v112 = *(int32_t *)((8 * v108 & 2040) + v100); // 0x329
        int64_t v113 = *(int64_t *)(v92 + 24); // 0x331
        uint64_t v114 = v113 ^ v102 ^ (int64_t)((v110 + v109 ^ v111) + v112); // 0x335
        int32_t v115 = *(int32_t *)((v114 / 0x2000 & 2040) + v95); // 0x34d
        int32_t v116 = *(int32_t *)(8 * v114 / 0x1000000 + v94); // 0x355
        int32_t v117 = *(int32_t *)((v114 / 32 & 2040) + v98); // 0x35c
        int32_t v118 = *(int32_t *)((8 * v114 & 2040) + v100); // 0x367
        int64_t v119 = *(int64_t *)(v92 + 32); // 0x36f
        uint64_t v120 = v119 ^ v108 ^ (int64_t)((v116 + v115 ^ v117) + v118); // 0x373
        int32_t v121 = *(int32_t *)((v120 / 0x2000 & 2040) + v95); // 0x389
        int32_t v122 = *(int32_t *)(8 * v120 / 0x1000000 + v94); // 0x391
        int32_t v123 = *(int32_t *)((v120 / 32 & 2040) + v98); // 0x398
        int32_t v124 = *(int32_t *)((8 * v120 & 2040) + v100); // 0x3a3
        int64_t v125 = *(int64_t *)(v92 + 40); // 0x3ab
        uint64_t v126 = v125 ^ v114 ^ (int64_t)((v122 + v121 ^ v123) + v124); // 0x3af
        int32_t v127 = *(int32_t *)((v126 / 0x2000 & 2040) + v95); // 0x3c6
        int32_t v128 = *(int32_t *)(8 * v126 / 0x1000000 + v94); // 0x3ce
        int32_t v129 = *(int32_t *)((v126 / 32 & 2040) + v98); // 0x3d5
        int32_t v130 = *(int32_t *)((8 * v126 & 2040) + v100); // 0x3e0
        int64_t v131 = *(int64_t *)(v92 + 48); // 0x3e8
        uint64_t v132 = v131 ^ v120 ^ (int64_t)((v128 + v127 ^ v129) + v130); // 0x3ec
        int32_t v133 = *(int32_t *)((v132 / 0x2000 & 2040) + v95); // 0x404
        int32_t v134 = *(int32_t *)(8 * v132 / 0x1000000 + v94); // 0x40c
        int32_t v135 = *(int32_t *)((v132 / 32 & 2040) + v98); // 0x413
        int32_t v136 = *(int32_t *)((8 * v132 & 2040) + v100); // 0x41e
        int64_t v137 = *(int64_t *)(v92 + 56); // 0x426
        uint64_t v138 = v137 ^ v126 ^ (int64_t)((v134 + v133 ^ v135) + v136); // 0x42a
        int32_t v139 = *(int32_t *)((v138 / 0x2000 & 2040) + v95); // 0x440
        int32_t v140 = *(int32_t *)(8 * v138 / 0x1000000 + v94); // 0x448
        int32_t v141 = *(int32_t *)((v138 / 32 & 2040) + v98); // 0x44f
        int32_t v142 = *(int32_t *)((8 * v138 & 2040) + v100); // 0x45a
        int64_t v143 = *(int64_t *)(v92 + 64); // 0x462
        uint64_t v144 = v143 ^ v132 ^ (int64_t)((v140 + v139 ^ v141) + v142); // 0x466
        int32_t v145 = *(int32_t *)((v144 / 0x2000 & 2040) + v95); // 0x47d
        int32_t v146 = *(int32_t *)(8 * v144 / 0x1000000 + v94); // 0x485
        int32_t v147 = *(int32_t *)((v144 / 32 & 2040) + v98); // 0x48c
        int32_t v148 = *(int32_t *)((8 * v144 & 2040) + v100); // 0x497
        int64_t v149 = *(int64_t *)(v92 + 72); // 0x49f
        uint64_t v150 = v149 ^ v138 ^ (int64_t)((v146 + v145 ^ v147) + v148); // 0x4a3
        int32_t v151 = *(int32_t *)((v150 / 0x2000 & 2040) + v95); // 0x4bb
        int32_t v152 = *(int32_t *)(8 * v150 / 0x1000000 + v94); // 0x4c3
        int32_t v153 = *(int32_t *)((v150 / 32 & 2040) + v98); // 0x4ca
        int32_t v154 = *(int32_t *)((8 * v150 & 2040) + v100); // 0x4d5
        int64_t v155 = *(int64_t *)(v92 + 80); // 0x4dd
        uint64_t v156 = v155 ^ v144 ^ (int64_t)((v152 + v151 ^ v153) + v154); // 0x4e1
        int32_t v157 = *(int32_t *)((v156 / 0x2000 & 2040) + v95); // 0x4f7
        int32_t v158 = *(int32_t *)(8 * v156 / 0x1000000 + v94); // 0x4ff
        int32_t v159 = *(int32_t *)((v156 / 32 & 2040) + v98); // 0x506
        int32_t v160 = *(int32_t *)((8 * v156 & 2040) + v100); // 0x511
        int64_t v161 = *(int64_t *)(v92 + 88); // 0x519
        uint64_t v162 = v161 ^ v150 ^ (int64_t)((v158 + v157 ^ v159) + v160); // 0x51d
        int32_t v163 = *(int32_t *)((v162 / 0x2000 & 2040) + v95); // 0x534
        int32_t v164 = *(int32_t *)(8 * v162 / 0x1000000 + v94); // 0x53c
        int32_t v165 = *(int32_t *)((v162 / 32 & 2040) + v98); // 0x543
        int32_t v166 = *(int32_t *)((8 * v162 & 2040) + v100); // 0x54e
        int64_t v167 = *(int64_t *)(v92 + 96); // 0x556
        uint64_t v168 = v167 ^ v156 ^ (int64_t)((v164 + v163 ^ v165) + v166); // 0x55a
        int32_t v169 = *(int32_t *)((v168 / 0x2000 & 2040) + v95); // 0x572
        int32_t v170 = *(int32_t *)(8 * v168 / 0x1000000 + v94); // 0x57a
        int32_t v171 = *(int32_t *)((v168 / 32 & 2040) + v98); // 0x581
        int32_t v172 = *(int32_t *)((8 * v168 & 2040) + v100); // 0x58c
        int64_t v173 = *(int64_t *)(v92 + 104); // 0x594
        uint64_t v174 = v173 ^ v162 ^ (int64_t)((v170 + v169 ^ v171) + v172); // 0x598
        int32_t v175 = *(int32_t *)((v174 / 0x2000 & 2040) + v95); // 0x5ae
        int32_t v176 = *(int32_t *)(8 * v174 / 0x1000000 + v94); // 0x5b6
        int32_t v177 = *(int32_t *)((v174 / 32 & 2040) + v98); // 0x5bd
        int32_t v178 = *(int32_t *)((8 * v174 & 2040) + v100); // 0x5c8
        int64_t v179 = *(int64_t *)(v92 + 112); // 0x5d0
        uint64_t v180 = v179 ^ v168 ^ (int64_t)((v176 + v175 ^ v177) + v178); // 0x5d4
        int32_t v181 = *(int32_t *)((v180 / 0x2000 & 2040) + v95); // 0x5eb
        int32_t v182 = *(int32_t *)(8 * v180 / 0x1000000 + v94); // 0x5f3
        int32_t v183 = *(int32_t *)((v180 / 32 & 2040) + v98); // 0x5fa
        int32_t v184 = *(int32_t *)((8 * v180 & 2040) + v100); // 0x605
        int64_t v185 = *(int64_t *)(v92 + 120); // 0x60d
        uint64_t v186 = v185 ^ v174 ^ (int64_t)((v182 + v181 ^ v183) + v184); // 0x611
        int32_t v187 = *(int32_t *)((v186 / 0x2000 & 2040) + v95); // 0x629
        int32_t v188 = *(int32_t *)(8 * v186 / 0x1000000 + v94); // 0x631
        int32_t v189 = *(int32_t *)((v186 / 32 & 2040) + v98); // 0x638
        int32_t v190 = *(int32_t *)((8 * v186 & 2040) + v100); // 0x643
        int64_t v191 = *(int64_t *)(v92 + 128); // 0x64b
        v4 = v191 ^ v180 ^ (int64_t)((v188 + v187 ^ v189) + v190);
        v5 = *(int64_t *)(v92 + 136) ^ v186;
    }
    // 0xa4d
    *v2 = v4 & 0xffffffff;
    *data = v5 & 0xffffffff;
}
void BF_cfb64_encrypt(char * in, char * out, int64_t length, char * ivec, int32_t * num, int32_t encrypt) {
    int64_t v1 = (int64_t)ivec;
    int64_t v2 = (int64_t)out;
    int64_t v3 = (int64_t)in;
    int64_t v4; // 0xa60
    int64_t v5 = v4 & 0xffffffff; // 0xa7f
    int64_t v6; // 0xa60
    int64_t v7; // bp-72, 0xa60
    if (encrypt == 0) {
        // 0xb04
        if (length == 0) {
            // 0xb73
            *num = (int32_t)v5;
            return;
        }
        int32_t * v8 = (int32_t *)(v1 + 4);
        int64_t v9 = v5; // 0xb2f
        int64_t v10 = v2; // 0xa60
        int64_t v11 = v3; // 0xa60
        int64_t v12 = length; // 0xb37
        if (v9 == 0) {
            // 0xb3e
            v7 = llvm_bswap_i32(*(int32_t *)&v6);
            BF_encrypt(&v7, 1);
            *(int32_t *)ivec = llvm_bswap_i32((int32_t)v7);
        }
        // 0xb10
        v12--;
        char v13 = *(char *)v11; // 0xb10
        char * v14 = (char *)((0x100000000 * v9 >> 32) + v1); // 0xb1b
        *v14 = v13;
        *(char *)v10 = *v14 ^ v13;
        v9 = v9 + 1 & 7;
        v10++;
        v11++;
        while (v12 != 0) {
            // 0xb37
            if (v9 == 0) {
                // 0xb3e
                v7 = llvm_bswap_i32(*(int32_t *)&v6);
                BF_encrypt(&v7, 1);
                *(int32_t *)ivec = llvm_bswap_i32((int32_t)v7);
            }
            // 0xb10
            v12--;
            v13 = *(char *)v11;
            v14 = (char *)((0x100000000 * v9 >> 32) + v1);
            *v14 = v13;
            *(char *)v10 = *v14 ^ v13;
            v9 = v9 + 1 & 7;
            v10++;
            v11++;
        }
        // 0xb73
        *num = (int32_t)v9;
        return;
    }
    // 0xa87
    if (length == 0) {
        // 0xb73
        *num = (int32_t)v5;
        return;
    }
    int32_t * v15 = (int32_t *)(v1 + 4);
    int64_t v16 = v5; // 0xabc
    int64_t v17 = v2; // 0xa60
    int64_t v18 = v3; // 0xa60
    int64_t v19 = length; // 0xac8
    if (v16 == 0) {
        // 0xacf
        v7 = llvm_bswap_i32(*(int32_t *)&v6);
        BF_encrypt(&v7, 1);
        *(int32_t *)ivec = llvm_bswap_i32((int32_t)v7);
    }
    // 0xaa0
    v19--;
    char * v20 = (char *)((0x100000000 * v16 >> 32) + v1); // 0xaa3
    char v21 = *(char *)v18 ^ *v20; // 0xaa8
    *(char *)v17 = v21;
    *v20 = v21;
    v16 = v16 + 1 & 7;
    v17++;
    v18++;
    while (v19 != 0) {
        // 0xac8
        if (v16 == 0) {
            // 0xacf
            v7 = llvm_bswap_i32(*(int32_t *)&v6);
            BF_encrypt(&v7, 1);
            *(int32_t *)ivec = llvm_bswap_i32((int32_t)v7);
        }
        // 0xaa0
        v19--;
        v20 = (char *)((0x100000000 * v16 >> 32) + v1);
        v21 = *(char *)v18 ^ *v20;
        *(char *)v17 = v21;
        *v20 = v21;
        v16 = v16 + 1 & 7;
        v17++;
        v18++;
    }
    // 0xb73
    *num = (int32_t)v16;
}
