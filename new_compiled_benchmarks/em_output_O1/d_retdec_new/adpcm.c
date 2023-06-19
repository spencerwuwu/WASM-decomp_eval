
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "adpcm.h"
int64_t _abs(int64_t a1) {
    // 0x0
    return ((int32_t)a1 < 0 ? -a1 : a1) & 0xffffffff;
}
int32_t encode(int32_t xin1, int32_t xin2) {
    int64_t v1 = *(int64_t *)33; // 0x1a
    int32_t * v2 = (int32_t *)v1; // 0x21
    int32_t * v3 = (int32_t *)(v1 + 4); // 0x2c
    int64_t v4 = 12 * (int64_t)*v2; // 0x46
    int64_t v5 = -44 * (int64_t)*v3; // 0x46
    int64_t v6 = 0; // 0x46
    int64_t v7 = *(int64_t *)55;
    int64_t v8 = v1 + 8;
    int64_t v9 = v7 + 8;
    int32_t v10 = *(int32_t *)v9; // 0x53
    v4 += (int64_t)v10 * (int64_t)*(int32_t *)v8;
    int32_t v11 = *(int32_t *)(v7 + 12); // 0x65
    v5 += (int64_t)v11 * (int64_t)*(int32_t *)(v1 + 12);
    while ((int32_t)v6 != 10) {
        // 0x50
        v6 &= 0xffffffff;
        int64_t v12 = v8;
        v7 = v9;
        v8 = v12 + 8;
        v9 = v7 + 8;
        v10 = *(int32_t *)v9;
        v4 += (int64_t)v10 * (int64_t)*(int32_t *)v8;
        v11 = *(int32_t *)(v7 + 12);
        v5 += (int64_t)v11 * (int64_t)*(int32_t *)(v12 + 12);
    }
    int64_t v13 = v1 + 88; // 0x7d
    int128_t v14 = __asm_movaps(*(int128_t *)v1); // 0x85
    int128_t v15 = __asm_movaps(*(int128_t *)(v1 + 16)); // 0x88
    int128_t v16 = __asm_movaps(*(int128_t *)(v1 + 32)); // 0x8c
    int128_t v17 = __asm_movaps(*(int128_t *)(v1 + 48)); // 0x90
    __asm_movups(*(int128_t *)(v1 + 8), v14);
    __asm_movups(*(int128_t *)(v1 + 24), v15);
    __asm_movups(*(int128_t *)(v1 + 40), v16);
    int128_t v18 = __asm_movaps(*(int128_t *)(v1 + 64)); // 0xa0
    __asm_movups(*(int128_t *)(v1 + 56), v17);
    __asm_movups(*(int128_t *)(v1 + 72), v18);
    *(int64_t *)v13 = *(int64_t *)(v1 + 80);
    int64_t v19 = -44 * (int64_t)*(int32_t *)v13 + v4; // 0xbc
    int64_t v20 = 12 * (int64_t)*(int32_t *)(v1 + 92) + v5; // 0xbf
    *v3 = xin1;
    *v2 = xin2;
    uint64_t v21 = (v20 + v19) / 0x8000; // 0xcc
    *(int32_t *)*(int64_t *)215 = (int32_t)v21;
    uint64_t v22 = (v19 - v20) / 0x8000; // 0xdc
    int32_t result = v22; // 0xe7
    *(int32_t *)*(int64_t *)231 = result;
    int64_t v23 = *(int64_t *)240; // 0xe9
    int64_t v24 = *(int64_t *)250; // 0xf3
    int32_t v25 = *(int32_t *)v24; // 0xfa
    int64_t v26 = v23; // 0x107
    int64_t v27 = (int64_t)v25 * (int64_t)*(int32_t *)v23; // 0x107
    int64_t v28 = v24; // 0x107
    int64_t v29 = 1; // 0x107
    v26 += 4;
    v28 += 4;
    int32_t v30 = *(int32_t *)v28; // 0x118
    v27 += (int64_t)v30 * (int64_t)*(int32_t *)v26;
    while ((int32_t)v29 != 6) {
        // 0x110
        v29 &= 0xffffffff;
        v26 += 4;
        v28 += 4;
        v30 = *(int32_t *)v28;
        v27 += (int64_t)v30 * (int64_t)*(int32_t *)v26;
    }
    uint64_t v31 = v27 / 0x4000; // 0x130
    *(int32_t *)*(int64_t *)315 = (int32_t)v31;
    int32_t v32 = *(int32_t *)*(int64_t *)324; // 0x144
    int64_t v33 = (int64_t)*(int32_t *)*(int64_t *)334; // 0x14e
    int32_t v34 = *(int32_t *)*(int64_t *)344; // 0x158
    int64_t v35 = (int64_t)*(int32_t *)*(int64_t *)354; // 0x162
    uint64_t v36 = (v35 * (int64_t)v34 + v33 * (int64_t)v32) / 0x4000;
    *(int32_t *)*(int64_t *)386 = (int32_t)v36;
    int64_t v37 = v36 + v31; // 0x185
    *(int32_t *)*(int64_t *)399 = (int32_t)v37;
    int64_t v38 = v21 - v37; // 0x192
    int32_t v39 = v38; // 0x19c
    *(int32_t *)*(int64_t *)412 = v39;
    int32_t * v40 = (int32_t *)*(int64_t *)421; // 0x1a5
    int64_t v41 = (int64_t)*v40; // 0x1a5
    int64_t v42 = 0;
    int32_t v43 = *(int32_t *)(4 * v42 + *(int64_t *)443); // 0x1c0
    int64_t v44 = v42; // 0x1cf
    while ((int64_t)v43 * v41 >> 15 < ((v39 < 0 ? -v38 : v38) & 0xffffffff)) {
        // 0x1d1
        v44 = 30;
        if (v42 == 29) {
            // break -> 0x1df
            break;
        }
        v42++;
        v43 = *(int32_t *)(4 * v42 + *(int64_t *)443);
        v44 = v42;
    }
    // 0x1df
    if (v39 >= 0) {
        // 0x1ee
        return result;
    }
    int32_t v45 = *(int32_t *)(*(int64_t *)492 + (4 * v44 & 0x3fffffffc)); // 0x1f5
    *(int32_t *)*(int64_t *)511 = v45;
    int64_t v46 = 4 * (int64_t)(v45 >> 2); // 0x214
    uint64_t v47 = (int64_t)*(int32_t *)(*(int64_t *)532 + v46) * v41 / 0x8000; // 0x21c
    int32_t * v48 = (int32_t *)*(int64_t *)551; // 0x227
    int32_t v49 = *(int32_t *)(*(int64_t *)575 + v46); // 0x23f
    int32_t v50 = v49 + (int32_t)(127 * (int64_t)*v48 / 128); // 0x23f
    uint32_t v51 = v50 > 0 ? v50 : 0; // 0x249
    uint32_t v52 = v51 < 0x4800 ? v51 : 0x4800; // 0x259
    *v48 = v52;
    int32_t v53 = *(int32_t *)(*(int64_t *)625 + (int64_t)(v52 / 16 & 124)); // 0x271
    int32_t v54 = v47; // 0x281
    *(int32_t *)*(int64_t *)641 = v54;
    *v40 = 8 * (v53 >> (9 - v52 / 2048 & 31));
    int64_t v55 = v47 + v31; // 0x289
    int32_t v56 = v55; // 0x292
    *(int32_t *)*(int64_t *)658 = v56;
    if (v54 != 0) {
        // 0x1ee
        return result;
    }
    for (int64_t i = 0; i < 6; i++) {
        int32_t * v57 = (int32_t *)(4 * i + *(int64_t *)755); // 0x300
        *v57 = (int32_t)(255 * (int64_t)*v57 / 256);
    }
    int32_t * v58 = (int32_t *)*(int64_t *)806; // 0x326
    int32_t v59 = *v58; // 0x326
    int64_t v60 = 4 * v33; // 0x329
    int64_t v61 = 0x100000000 * v55 >> 32; // 0x33b
    uint64_t v62 = v61 * (int64_t)v59 < 0 ? v60 : -v60; // 0x360
    int32_t * v63 = (int32_t *)*(int64_t *)875; // 0x36b
    *v63 = v59;
    int64_t v64 = (v61 * (int64_t)v59 >= 0 ? 192 : 0xffffff40) + 255 * v33 / 256; // 0x371
    int64_t v65 = v61 * (int64_t)*v63 < 0 ? 0xffffff80 : 128; // 0x39a
    int64_t v66 = v62 / 128 + 127 * v35 / 128 + v65; // 0x3a1
    int32_t v67 = v66; // 0x3a4
    int64_t v68 = v67 < 0x3000 == (0x2fff - v67 & v67) < 0 ? 0x3000 : v66 & 0xffffffff; // 0x3b0
    int32_t v69 = v68; // 0x3b4
    int32_t v70 = v69 + 0x2fff; // 0x3b4
    int64_t v71 = v70 < 0 == ((v70 ^ v69) & (v69 ^ -0x80000000)) < 0 ? v68 : 0xffffd000; // 0x3c0
    *(int32_t *)*(int64_t *)971 = (int32_t)v71;
    int64_t v72 = 0x3c00 - v71; // 0x3d3
    int64_t v73 = v71 + 0xffffc400; // 0x3d6
    int32_t v74 = v64; // 0x3dd
    int32_t v75 = v74 - (int32_t)v72; // 0x3dd
    int64_t v76 = v75 < 0 == ((v75 ^ v74) & (int32_t)(v72 ^ v64)) < 0 ? v72 : v64;
    int32_t v77 = v76; // 0x3e4
    int32_t v78 = v77 - (int32_t)v73; // 0x3e4
    int64_t v79 = v78 == 0 | v78 < 0 != ((v78 ^ v77) & (int32_t)(v76 ^ v73)) < 0 ? v73 : v76;
    *(int32_t *)*(int64_t *)1010 = (int32_t)v79;
    *(int32_t *)*(int64_t *)1020 = v32;
    int64_t v80 = *(int64_t *)1030; // 0x3ff
    int64_t v81 = v80 + 4; // 0x406
    __asm_movups(*(int128_t *)(v80 + 8), __asm_movups_1(*(int128_t *)v81));
    *(int32_t *)v81 = v25;
    *(int32_t *)v80 = 0;
    int32_t v82 = v47 + v37; // 0x41d
    *(int32_t *)*(int64_t *)1053 = v82;
    *(int32_t *)*(int64_t *)1063 = v82;
    *v58 = v56;
    int64_t v83 = *(int64_t *)1075; // 0x42c
    int64_t v84 = *(int64_t *)1085; // 0x436
    int32_t v85 = *(int32_t *)v84; // 0x43d
    int64_t v86 = v83; // 0x44a
    int64_t v87 = v84; // 0x44a
    int64_t v88 = (int64_t)v85 * (int64_t)*(int32_t *)v83; // 0x44a
    int64_t v89 = 1; // 0x44a
    v86 += 4;
    v87 += 4;
    int32_t v90 = *(int32_t *)v87; // 0x458
    v88 += (int64_t)v90 * (int64_t)*(int32_t *)v86;
    while ((int32_t)v89 != 6) {
        // 0x450
        v89 &= 0xffffffff;
        v86 += 4;
        v87 += 4;
        v90 = *(int32_t *)v87;
        v88 += (int64_t)v90 * (int64_t)*(int32_t *)v86;
    }
    uint64_t v91 = v88 / 0x4000; // 0x470
    *(int32_t *)*(int64_t *)1147 = (int32_t)v91;
    int32_t v92 = *(int32_t *)*(int64_t *)1156; // 0x484
    int64_t v93 = (int64_t)*(int32_t *)*(int64_t *)1166; // 0x48e
    int32_t v94 = *(int32_t *)*(int64_t *)1176; // 0x498
    int64_t v95 = (int64_t)*(int32_t *)*(int64_t *)1186; // 0x4a2
    uint64_t v96 = (v95 * (int64_t)v94 + v93 * (int64_t)v92) / 0x4000;
    *(int32_t *)*(int64_t *)1218 = (int32_t)v96;
    int64_t v97 = v96 + v91; // 0x4c5
    int64_t v98 = v22 - v97; // 0x4c8
    int32_t v99 = v98; // 0x4d2
    *(int32_t *)*(int64_t *)1234 = v99;
    int32_t result3 = (v99 / 0x40000000 | 1) ^ 2; // 0x4db
    int32_t * v100 = (int32_t *)*(int64_t *)1253; // 0x4e5
    int64_t v101 = (int64_t)*v100; // 0x4e5
    *(int32_t *)*(int64_t *)1282 = (int32_t)v97;
    int64_t result2 = *(int64_t *)1292; // 0x505
    *(int32_t *)result2 = result3;
    if (564 * v101 / 0x1000 < ((v99 < 0 ? -v98 : v98) & 0xffffffff)) {
        // 0x513
        return result2;
    }
    int64_t v102 = 4 * result3; // 0x521
    uint64_t v103 = (int64_t)*(int32_t *)(*(int64_t *)1313 + v102) * v101 / 0x8000; // 0x529
    int32_t * v104 = (int32_t *)*(int64_t *)1332; // 0x534
    int32_t v105 = *(int32_t *)(*(int64_t *)1356 + v102); // 0x54c
    int32_t v106 = v105 + (int32_t)(127 * (int64_t)*v104 / 128); // 0x54c
    uint32_t v107 = v106 > 0 ? v106 : 0; // 0x555
    uint32_t v108 = v107 < 0x5800 ? v107 : 0x5800; // 0x565
    *v104 = v108;
    int32_t v109 = *(int32_t *)(*(int64_t *)1408 + (int64_t)(v108 / 16 & 124)); // 0x580
    int32_t v110 = v103; // 0x591
    *(int32_t *)*(int64_t *)1425 = v110;
    *v100 = 8 * (v109 >> (11 - v108 / 2048 & 31));
    int64_t v111 = v103 + v91; // 0x59a
    int32_t v112 = v111; // 0x5a3
    *(int32_t *)*(int64_t *)1443 = v112;
    if (v110 != 0) {
        // 0x1ee
        return result3;
    }
    for (int64_t i = 0; i < 6; i++) {
        int32_t * v113 = (int32_t *)(4 * i + *(int64_t *)1538); // 0x610
        *v113 = (int32_t)(255 * (int64_t)*v113 / 256);
    }
    int64_t v114 = 4 * v93; // 0x639
    int32_t * v115 = (int32_t *)*(int64_t *)1608; // 0x648
    int32_t v116 = *v115; // 0x648
    int64_t v117 = 0x100000000 * v111 >> 32; // 0x64b
    uint64_t v118 = v117 * (int64_t)v116 < 0 ? v114 : -v114; // 0x670
    int64_t v119 = (v117 * (int64_t)v116 >= 0 ? 192 : 0xffffff40) + 255 * v93 / 256; // 0x674
    int32_t * v120 = (int32_t *)*(int64_t *)1663; // 0x67f
    int64_t v121 = v117 * (int64_t)*v120 < 0 ? 0xffffff80 : 128; // 0x6a6
    int64_t v122 = v118 / 128 + 127 * v95 / 128 + v121; // 0x6ad
    int32_t v123 = v122; // 0x6b0
    int64_t v124 = v123 < 0x3000 == (0x2fff - v123 & v123) < 0 ? 0x3000 : v122 & 0xffffffff; // 0x6bc
    int32_t v125 = v124; // 0x6c0
    int32_t v126 = v125 + 0x2fff; // 0x6c0
    int64_t v127 = v126 < 0 == ((v126 ^ v125) & (v125 ^ -0x80000000)) < 0 ? v124 : 0xffffd000; // 0x6cc
    *(int32_t *)*(int64_t *)1751 = (int32_t)v127;
    int64_t v128 = 0x3c00 - v127; // 0x6e0
    int64_t v129 = v127 + 0xffffc400; // 0x6e3
    int32_t v130 = v119; // 0x6e9
    int32_t v131 = v130 - (int32_t)v128; // 0x6e9
    int64_t v132 = v131 < 0 == ((v131 ^ v130) & (int32_t)(v128 ^ v119)) < 0 ? v128 : v119;
    int32_t v133 = v132; // 0x6f0
    int32_t v134 = v133 - (int32_t)v129; // 0x6f0
    int64_t v135 = v134 == 0 | v134 < 0 != ((v134 ^ v133) & (int32_t)(v132 ^ v129)) < 0 ? v129 : v132;
    *v120 = v116;
    *(int32_t *)*(int64_t *)1793 = (int32_t)v135;
    *(int32_t *)*(int64_t *)1803 = v92;
    int64_t v136 = *(int64_t *)1813; // 0x70e
    int64_t v137 = v136 + 4; // 0x715
    __asm_movups(*(int128_t *)(v136 + 8), __asm_movups_1(*(int128_t *)v137));
    *(int32_t *)v137 = v85;
    *(int32_t *)v136 = 0;
    int32_t v138 = v103 + v97; // 0x72c
    *(int32_t *)*(int64_t *)1836 = v138;
    *(int32_t *)*(int64_t *)1846 = v138;
    *v115 = v112;
    return 64 * result3 | v45;
}
int64_t filtez(void) {
    // 0x750
    int64_t v1; // 0x750
    int64_t v2 = (0x100000000 * v1 >> 32) * (0x100000000 * v1 >> 32); // 0x75f
    int64_t v3 = 1; // 0x75f
    int64_t v4; // 0x750
    int64_t v5 = v4 + 4; // 0x760
    int64_t v6; // 0x750
    int64_t v7 = v6 + 4; // 0x768
    int32_t v8 = *(int32_t *)v7; // 0x768
    v2 += (int64_t)v8 * (int64_t)*(int32_t *)v5;
    while ((int32_t)v3 != 6) {
        // 0x760
        v3 &= 0xffffffff;
        v5 += 4;
        v7 += 4;
        v8 = *(int32_t *)v7;
        v2 += (int64_t)v8 * (int64_t)*(int32_t *)v5;
    }
    // 0x77e
    return v2 / 0x4000;
}
int64_t filtep(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x790
    return ((0x100000000 * a4 >> 32) * (0x200000000 * a3 >> 32) + (0x100000000 * a2 >> 32) * (0x200000000 * a1 >> 32)) / 0x8000;
}
int64_t quantl(int64_t a1, int64_t a2) {
    uint64_t v1 = ((int32_t)a1 < 0 ? -a1 : a1) & 0xffffffff; // 0x7b4
    int64_t v2 = 0;
    int32_t v3 = *(int32_t *)(4 * v2 + *(int64_t *)1987); // 0x7d0
    int64_t v4 = v2; // 0x7df
    while ((0x100000000 * a2 >> 32) * (int64_t)v3 / 0x8000 < v1) {
        // 0x7e1
        v4 = 30;
        if (v2 == 29) {
            // break -> 0x7ef
            break;
        }
        v2++;
        v3 = *(int32_t *)(4 * v2 + *(int64_t *)1987);
        v4 = v2;
    }
    int64_t result = v4 & 0xffffffff; // 0x7ef
    if ((int32_t)a1 >= 0) {
        // 0x800
        return result;
    }
    // 0x7f5
    return (int64_t)*(int32_t *)(*(int64_t *)2044 + 4 * result);
}
int64_t logscl(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)2094; // 0x827
    int32_t v2 = *(int32_t *)(v1 + 4 * (int64_t)((int32_t)a1 >> 2)); // 0x82e
    int32_t v3 = v2 + (int32_t)((128 * a2 - (0x100000000 * a2 >> 32)) / 128); // 0x82e
    int64_t v4 = v3 >= 0 == (v3 != 0) ? (int64_t)v3 : 0; // 0x835
    return (int32_t)v4 < 0x4800 ? v4 : 0x4800;
}
int64_t scalel(uint64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)2146 + (a1 / 16 & 124)); // 0x862
    return 8 * (int64_t)(v1 >> (1 - (int32_t)a1 / 2048 + (int32_t)a2 & 31)) & 0xfffffff8;
}
int64_t upzero(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x870
    int64_t v2 = 0; // 0x872
    if (v1 == 0) {
        int32_t * v3 = (int32_t *)(4 * v2 + a3); // 0x8d0
        *v3 = (int32_t)(255 * (int64_t)*v3 / 256);
        v2++;
        while (v2 != 6) {
            // 0x8d0
            v3 = (int32_t *)(4 * v2 + a3);
            *v3 = (int32_t)(255 * (int64_t)*v3 / 256);
            v2++;
        }
    } else {
        int64_t v4 = 0x100000000 * a1 >> 32; // 0x874
        for (int64_t i = 0; i < 6; i++) {
            int64_t v5 = 4 * i; // 0x880
            int32_t v6 = *(int32_t *)(v5 + result); // 0x880
            int32_t * v7 = (int32_t *)(v5 + a3); // 0x896
            int32_t v8 = *v7; // 0x896
            *v7 = (int32_t)(256 * (int64_t)(v4 * (int64_t)v6 >= 0) + 255 * (int64_t)v8 / 256) - 128;
        }
    }
    // 0x8ef
    *(int32_t *)(result + 20) = *(int32_t *)(result + 16);
    *(int64_t *)(result + 12) = *(int64_t *)(result + 8);
    *(int64_t *)(result + 4) = result;
    *(int32_t *)result = v1;
    return result;
}
int64_t uppol2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a1 >> 30; // 0x913
    int64_t v2 = 0x100000000 * a3 >> 32; // 0x917
    uint64_t v3 = (0x100000000 * a4 >> 32) * v2 < 0 ? v1 : -v1; // 0x92a
    int64_t v4 = (128 * a2 - (0x100000000 * a2 >> 32)) / 128 + 0xffffff80 + v3 / 128 + 256 * (int64_t)((0x100000000 * a5 >> 32) * v2 >= 0); // 0x95a
    int32_t v5 = v4; // 0x95d
    int64_t v6 = v5 < 0x3000 == (0x2fff - v5 & v5) < 0 ? 0x3000 : v4 & 0xffffffff; // 0x967
    int32_t v7 = v6; // 0x96a
    int32_t v8 = v7 + 0x2fff; // 0x96a
    return v8 < 0 == ((v8 ^ v7) & (v7 ^ -0x80000000)) < 0 ? v6 : 0xffffd000;
}
int64_t uppol1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = (0x100000000 * a4 >> 32) * (0x100000000 * a3 >> 32) >= 0 ? 192 : 0xffffff40;
    int64_t v3 = v2 + ((v1 >> 24) - (v1 >> 32)) / 256; // 0x9aa
    int64_t v4 = 0x3c00 - a2; // 0x9b2
    int64_t v5 = a2 + 0xffffc400; // 0x9b4
    int32_t v6 = v3; // 0x9ba
    int32_t v7 = v6 - (int32_t)v4; // 0x9ba
    int64_t v8 = v7 < 0 == ((v7 ^ v6) & (int32_t)(v3 ^ v4)) < 0 ? v4 : v3;
    int32_t v9 = v8; // 0x9bf
    int32_t v10 = v9 - (int32_t)v5; // 0x9bf
    int64_t v11 = v10 == 0 | v10 < 0 != ((v10 ^ v9) & (int32_t)(v8 ^ v5)) < 0 ? v5 : v8;
    return v11 & 0xffffffff;
}
int64_t logsch(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)2539 + (0x100000000 * a1 >> 30)); // 0x9eb
    int32_t v2 = v1 + (int32_t)((128 * a2 - (0x100000000 * a2 >> 32)) / 128); // 0x9eb
    int64_t v3 = v2 >= 0 == (v2 != 0) ? (int64_t)v2 : 0; // 0x9f2
    return (int32_t)v3 < 0x5800 ? v3 : 0x5800;
}
void decode(int32_t input) {
    // 0xa10
    *(int32_t *)*(int64_t *)2598 = input & 63;
    uint32_t v1 = input >> 6; // 0xa28
    *(int32_t *)*(int64_t *)2610 = v1;
    int64_t v2 = *(int64_t *)2619; // 0xa34
    int64_t v3 = *(int64_t *)2629; // 0xa3e
    int32_t v4 = *(int32_t *)v3; // 0xa45
    int64_t v5 = v2; // 0xa5a
    int64_t v6 = (int64_t)v4 * (int64_t)*(int32_t *)v2; // 0xa5a
    int64_t v7 = v3; // 0xa5a
    int64_t v8 = 1; // 0xa5a
    v5 += 4;
    int32_t v9 = *(int32_t *)v5; // 0xa60
    v7 += 4;
    v6 += (int64_t)*(int32_t *)v7 * (int64_t)v9;
    while ((int32_t)v8 != 6) {
        // 0xa60
        v8 &= 0xffffffff;
        v5 += 4;
        v9 = *(int32_t *)v5;
        v7 += 4;
        v6 += (int64_t)*(int32_t *)v7 * (int64_t)v9;
    }
    uint64_t v10 = v6 / 0x4000; // 0xa80
    int32_t v11 = *(int32_t *)*(int64_t *)2699; // 0xa8b
    int64_t v12 = (int64_t)*(int32_t *)*(int64_t *)2729; // 0xaa9
    uint64_t v13 = (0xc690 * v12 + 0xc698 * (int64_t)v11) / 0x8000; // 0xabe
    *(int32_t *)*(int64_t *)2761 = (int32_t)v13;
    int64_t v14 = v13 + v10; // 0xacc
    int32_t * v15 = (int32_t *)*(int64_t *)2774; // 0xad6
    int64_t v16 = input & 60; // 0xad9
    int64_t v17 = (int64_t)*v15; // 0xae7
    uint64_t v18 = (int64_t)*(int32_t *)(*(int64_t *)2787 + v16) * v17 / 0x8000; // 0xaeb
    uint64_t v19 = (int64_t)*(int32_t *)(*(int64_t *)2816 + 0x18d20) * v17 / 0x8000; // 0xb08
    *(int32_t *)*(int64_t *)2835 = (int32_t)v19;
    int64_t v20 = v19 + v14; // 0xb15
    int32_t * v21 = (int32_t *)*(int64_t *)2847; // 0xb1f
    int32_t v22 = *(int32_t *)(*(int64_t *)2871 + v16); // 0xb37
    int32_t v23 = v22 + (int32_t)(127 * (int64_t)*v21 / 128); // 0xb37
    uint32_t v24 = v23 > 0 ? v23 : 0; // 0xb40
    uint32_t v25 = v24 < 0x4800 ? v24 : 0x4800; // 0xb4f
    *v21 = v25;
    int32_t v26 = *(int32_t *)(*(int64_t *)2923 + (int64_t)(v25 / 16 & 124)); // 0xb6b
    *v15 = 8 * (v26 >> (9 - v25 / 2048 & 31));
    *(int32_t *)*(int64_t *)2941 = (int32_t)v10;
    *(int32_t *)*(int64_t *)2950 = (int32_t)v14;
    int32_t v27 = v18; // 0xb90
    *(int32_t *)*(int64_t *)2960 = v27;
    *(int32_t *)*(int64_t *)2970 = (int32_t)v20;
    int64_t v28 = v18 + v10; // 0xb9c
    int32_t v29 = v28; // 0xba6
    *(int32_t *)*(int64_t *)2982 = v29;
    if (v27 != 0) {
        // 0xbad
        return;
    }
    int64_t v30 = v20 & 0xffffffff; // 0xb15
    for (int64_t i = 0; i < 6; i++) {
        int32_t * v31 = (int32_t *)(4 * i + *(int64_t *)3077); // 0xc10
        *v31 = (int32_t)(255 * (int64_t)*v31 / 256);
    }
    int32_t * v32 = (int32_t *)*(int64_t *)3126; // 0xc36
    int32_t v33 = *v32; // 0xc36
    int64_t v34 = 0x100000000 * v28 >> 32; // 0xc4b
    int32_t * v35 = (int32_t *)*(int64_t *)3193; // 0xc79
    *v35 = v33;
    int64_t v36 = v34 * (int64_t)v33 >= 0 ? 0x63a8 : 0x100006228; // 0xc7f
    int64_t v37 = v34 * (int64_t)*v35 < 0 ? 0xffffff80 : 128; // 0xca7
    int64_t v38 = (v34 * (int64_t)v33 < 0 ? 794 : 0x1fffffffffffce5) + 127 * v12 / 128 + v37; // 0xcae
    int32_t v39 = v38; // 0xcb1
    int64_t v40 = v39 < 0x3000 == (0x2fff - v39 & v39) < 0 ? 0x3000 : v38 & 0xffffffff; // 0xcbd
    int32_t v41 = v40; // 0xcc1
    int32_t v42 = v41 + 0x2fff; // 0xcc1
    int64_t v43 = v42 < 0 == ((v42 ^ v41) & (v41 ^ -0x80000000)) < 0 ? v40 : 0xffffd000; // 0xccd
    *(int32_t *)*(int64_t *)3288 = (int32_t)v43;
    int64_t v44 = 0x3c00 - v43; // 0xce0
    int64_t v45 = v43 + 0xffffc400; // 0xce3
    int32_t v46 = v44; // 0xcea
    int32_t v47 = (int32_t)v36 - v46; // 0xcea
    int64_t v48 = v47 < 0 == (v47 & v46) < 0 ? v44 : v36;
    int32_t v49 = v48; // 0xcef
    int32_t v50 = v49 - (int32_t)v45; // 0xcef
    int64_t v51 = v50 == 0 | v50 < 0 != ((v50 ^ v49) & (int32_t)(v48 ^ v45)) < 0 ? v45 : v48;
    *(int32_t *)*(int64_t *)3325 = (int32_t)v51;
    *(int32_t *)*(int64_t *)3335 = v11;
    int64_t v52 = *(int64_t *)3345; // 0xd0a
    int64_t v53 = v52 + 4; // 0xd11
    __asm_movups(*(int128_t *)(v52 + 8), __asm_movups_1(*(int128_t *)v53));
    *(int32_t *)v53 = v4;
    *(int32_t *)v52 = 0;
    int32_t v54 = v18 + v14; // 0xd2f
    *(int32_t *)*(int64_t *)3375 = v54;
    *(int32_t *)*(int64_t *)3385 = v54;
    *v32 = v29;
    int64_t v55 = *(int64_t *)3397; // 0xd3e
    int64_t v56 = *(int64_t *)3407; // 0xd48
    int32_t v57 = *(int32_t *)v56; // 0xd4f
    int64_t v58 = v55; // 0xd5c
    int64_t v59 = v56; // 0xd5c
    int64_t v60 = (int64_t)v57 * (int64_t)*(int32_t *)v55; // 0xd5c
    int64_t v61 = 1; // 0xd5c
    v58 += 4;
    int32_t v62 = *(int32_t *)v58; // 0xd60
    v59 += 4;
    v60 += (int64_t)*(int32_t *)v59 * (int64_t)v62;
    while ((int32_t)v61 != 6) {
        // 0xd60
        v61 &= 0xffffffff;
        v58 += 4;
        v62 = *(int32_t *)v58;
        v59 += 4;
        v60 += (int64_t)*(int32_t *)v59 * (int64_t)v62;
    }
    uint64_t v63 = v60 / 0x4000; // 0xd80
    int32_t v64 = *(int32_t *)*(int64_t *)3467; // 0xd8b
    int64_t v65 = (int64_t)*(int32_t *)*(int64_t *)3477; // 0xd95
    int32_t v66 = *(int32_t *)*(int64_t *)3487; // 0xd9f
    int64_t v67 = (int64_t)*(int32_t *)*(int64_t *)3497; // 0xda9
    uint64_t v68 = (v67 * (int64_t)v66 + v65 * (int64_t)v64) / 0x4000;
    *(int32_t *)*(int64_t *)3529 = (int32_t)v68;
    int64_t v69 = v68 + v63; // 0xdcb
    int64_t v70 = 0x100000000 * (int64_t)v1 >> 30; // 0xde2
    uint64_t v71 = 0x4d6348 * (int64_t)*(int32_t *)(*(int64_t *)3554 + v70) / 0x8000; // 0xdea
    int32_t * v72 = (int32_t *)*(int64_t *)3573; // 0xdf5
    int32_t v73 = *(int32_t *)(*(int64_t *)3597 + v70); // 0xe0d
    int32_t v74 = v73 + (int32_t)(127 * (int64_t)*v72 / 128); // 0xe0d
    uint32_t v75 = v74 > 0 ? v74 : 0; // 0xe17
    uint32_t v76 = v75 < 0x5800 ? v75 : 0x5800; // 0xe27
    *v72 = v76;
    int32_t v77 = *(int32_t *)(*(int64_t *)3644 + (int64_t)(v76 / 16 & 124)); // 0xe3c
    *(int32_t *)0x4d6348 = 8 * (v77 >> (11 - v76 / 2048 & 31));
    *(int32_t *)*(int64_t *)3673 = (int32_t)v63;
    *(int32_t *)*(int64_t *)3682 = (int32_t)v69;
    int32_t v78 = v71; // 0xe6b
    *(int32_t *)*(int64_t *)3691 = v78;
    int64_t v79 = v71 + v63; // 0xe6d
    int32_t v80 = v79; // 0xe76
    *(int32_t *)*(int64_t *)3702 = v80;
    if (v78 != 0) {
        // 0xbad
        return;
    }
    for (int64_t i = 0; i < 6; i++) {
        int32_t * v81 = (int32_t *)(4 * i + *(int64_t *)3797); // 0xee0
        *v81 = (int32_t)(255 * (int64_t)*v81 / 256);
    }
    int32_t * v82 = (int32_t *)*(int64_t *)3846; // 0xf06
    int32_t v83 = *v82; // 0xf06
    int64_t v84 = 4 * v65; // 0xf13
    int64_t v85 = 0x100000000 * v79 >> 32; // 0xf1b
    uint64_t v86 = v85 * (int64_t)v83 < 0 ? v84 : -v84; // 0xf3f
    int64_t v87 = (v85 * (int64_t)v83 >= 0 ? 192 : 0xffffff40) + 255 * v65 / 256; // 0xf43
    int32_t * v88 = (int32_t *)*(int64_t *)3918; // 0xf4e
    int64_t v89 = v85 * (int64_t)*v88 < 0 ? 0xffffff80 : 128; // 0xf76
    int64_t v90 = v86 / 128 + 127 * v67 / 128 + v89; // 0xf7d
    int32_t v91 = v90; // 0xf80
    int64_t v92 = v91 < 0x3000 == (0x2fff - v91 & v91) < 0 ? 0x3000 : v90 & 0xffffffff; // 0xf8c
    int32_t v93 = v92; // 0xf90
    int32_t v94 = v93 + 0x2fff; // 0xf90
    int64_t v95 = v94 < 0 == ((v94 ^ v93) & (v93 ^ -0x80000000)) < 0 ? v92 : 0xffffd000; // 0xf9c
    *v88 = v83;
    *(int32_t *)*(int64_t *)4010 = (int32_t)v95;
    int64_t v96 = 0x3c00 - v95; // 0xfb3
    int64_t v97 = v95 + 0xffffc400; // 0xfb6
    int32_t v98 = v87; // 0xfbd
    int32_t v99 = v98 - (int32_t)v96; // 0xfbd
    int64_t v100 = v99 < 0 == ((v99 ^ v98) & (int32_t)(v96 ^ v87)) < 0 ? v96 : v87;
    int32_t v101 = v100; // 0xfc4
    int32_t v102 = v101 - (int32_t)v97; // 0xfc4
    int64_t v103 = v102 == 0 | v102 < 0 != ((v102 ^ v101) & (int32_t)(v100 ^ v97)) < 0 ? v97 : v100;
    *(int32_t *)*(int64_t *)4050 = (int32_t)v103;
    int64_t v104 = *(int64_t *)4060; // 0xfd5
    int64_t v105 = v104 + 4; // 0xfdc
    __asm_movups(*(int128_t *)(v104 + 8), __asm_movups_1(*(int128_t *)v105));
    *(int32_t *)v105 = v57;
    *(int32_t *)v104 = 0;
    int64_t v106 = v71 + (v69 & 0xffffffff); // 0xfed
    int32_t v107 = v106; // 0xff6
    *(int32_t *)*(int64_t *)4086 = v107;
    *(int32_t *)*(int64_t *)4095 = v64;
    *(int32_t *)*(int64_t *)0x1009 = v107;
    *v82 = v80;
    int64_t v108 = v30 - v106; // 0x100f
    int32_t v109 = v108; // 0x1018
    *(int32_t *)*(int64_t *)0x1018 = v109;
    int64_t v110 = v106 + v30; // 0x101a
    int32_t v111 = v110; // 0x1023
    *(int32_t *)*(int64_t *)0x1023 = v111;
    int64_t v112 = 0x100000000 * v108;
    int64_t v113 = -44 * (0x100000000 * v110 >> 32); // 0x1053
    int64_t v114 = (v112 >> 30) + (v112 >> 29); // 0x1053
    int64_t v115 = *(int64_t *)0x104c; // 0x1053
    int64_t v116 = *(int64_t *)0x1053; // 0x1053
    int64_t v117 = *(int64_t *)0x103e;
    int64_t v118 = v117 + 8;
    int32_t v119 = *(int32_t *)v118; // 0x1067
    v114 += (int64_t)v119 * (int64_t)*(int32_t *)v115;
    int32_t v120 = *(int32_t *)(v117 + 12); // 0x1078
    v113 += (int64_t)v120 * (int64_t)*(int32_t *)v116;
    int64_t v121 = 1; // 0x1087
    int64_t v122 = v121 & 0xffffffff; // 0x108e
    v115 += 4;
    v116 += 4;
    while ((int32_t)v121 != 10) {
        // 0x1060
        v117 = v118;
        v118 = v117 + 8;
        v119 = *(int32_t *)v118;
        v114 += (int64_t)v119 * (int64_t)*(int32_t *)v115;
        v120 = *(int32_t *)(v117 + 12);
        v113 += (int64_t)v120 * (int64_t)*(int32_t *)v116;
        v121 = v122 + 1;
        v122 = v121 & 0xffffffff;
        v115 += 4;
        v116 += 4;
    }
    int64_t v123 = *(int64_t *)0x1097; // 0x1090
    int32_t v124 = *(int32_t *)(v123 + 40); // 0x1097
    int64_t v125 = *(int64_t *)0x10b3; // 0x10ac
    int32_t v126 = *(int32_t *)(v125 + 40); // 0x10b3
    int64_t v127 = *(int64_t *)0x10ca; // 0x10c3
    *(int32_t *)v127 = (int32_t)((0x3fffffffffd4 * (int64_t)v124 + v114) / 0x4000);
    int64_t v128 = *(int64_t *)0x10d8; // 0x10d1
    *(int32_t *)v128 = (int32_t)((12 * (int64_t)v126 + v113) / 0x4000);
    int128_t v129 = __asm_movaps(*(int128_t *)v123); // 0x10db
    int128_t v130 = __asm_movaps(*(int128_t *)(v123 + 16)); // 0x10de
    __asm_movups(*(int128_t *)(v123 + 4), v129);
    __asm_movups(*(int128_t *)(v123 + 20), v130);
    *(int64_t *)(v123 + 36) = *(int64_t *)(v123 + 32);
    int128_t v131 = __asm_movaps(*(int128_t *)v125); // 0x10f2
    int128_t v132 = __asm_movaps(*(int128_t *)(v125 + 16)); // 0x10f5
    __asm_movups(*(int128_t *)(v125 + 4), v131);
    __asm_movups(*(int128_t *)(v125 + 20), v132);
    *(int64_t *)(v125 + 36) = *(int64_t *)(v125 + 32);
    *(int32_t *)v123 = v109;
    *(int32_t *)v125 = v111;
}
