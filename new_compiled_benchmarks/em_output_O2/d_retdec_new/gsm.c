
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gsm.h"
int64_t gsm_add(int64_t a1, int64_t a2) {
    int16_t v1 = a1; // 0xc
    int16_t v2 = a2; // 0xc
    uint16_t v3 = v2 + v1; // 0xc
    uint32_t result = ((v3 ^ v1) & (v3 ^ v2)) >= 0 ? (int32_t)(a1 & 0xffff0000 | (int64_t)v3) : 0x10000 * (int32_t)(a2 + a1) >> 31 ^ -0x8000; // 0xf
    return result;
}
int64_t gsm_mult(int64_t a1, int64_t a2) {
    int64_t result = (int16_t)a1 == -0x8000 != ((int16_t)a2 == -0x8000) ? (0x100000000 * a2 >> 32) * (0x100000000 * a1 >> 32) / 0x8000 & 0x1ffff : 0x7fff; // 0x3b
    return result;
}
int64_t gsm_mult_r(int64_t a1, int64_t a2) {
    // 0x40
    if ((int32_t)a1 != -0x8000) {
        // 0x58
        return ((0x1000000000000 * a2 >> 48) * (0x1000000000000 * a1 >> 48) + 0x4000) / 0x8000 & 0x1ffff;
    }
    if ((a2 & 0xffff) != 0x8000) {
        // 0x58
        return ((0x1000000000000 * a2 >> 48) * (0x1000000000000 * a1 >> 48) + 0x4000) / 0x8000 & 0x1ffff;
    }
    // 0x57
    int64_t v1; // 0x40
    return v1 & -0x10000 | 0x7fff;
}
int64_t gsm_norm(int64_t a1) {
    int64_t v1 = a1; // 0x93
    if (a1 < 0) {
        if (a1 < 0xffffffffc0000001) {
            // 0x9e
            return 0;
        }
        // 0xa1
        v1 = -1 - a1;
    }
    uint64_t v2 = v1;
    uint64_t v3 = v2 / 0x10000; // 0xa7
    int32_t v4; // 0x90
    int64_t v5; // 0x90
    if ((int16_t)v3 == 0) {
        // 0xbf
        v4 = 8 * (int32_t)((v2 & 0xff00) == 0) + 15;
        v5 = (v2 & 0xff00) != 0 ? v2 / 256 : v2;
    } else {
        uint64_t v6 = v2 / 0x1000000; // 0xb0
        v4 = (char)v6 == 0 ? (int32_t)&g11 : 0xffff;
        v5 = (char)v6 == 0 ? v3 : v6;
    }
    unsigned char v7 = *(char *)(*(int64_t *)240 + (v5 & 255)); // 0xf0
    return (0x10000 * v4 >> 16) + (int32_t)v7;
}
int16_t gsm_div(uint16_t num, int16_t denum) {
    if (num == 0) {
        // 0x283
        return 0;
    }
    int64_t v1 = denum; // 0x109
    int64_t v2 = 0x1000000000000 * (int64_t)num >> 47; // 0x111
    int64_t v3 = v2 - v1; // 0x118
    int64_t v4 = 2 * (v2 - (v3 < 0 == ((v3 ^ v2) & (v2 ^ v1)) < 0 ? v1 : 0)); // 0x129
    int64_t v5 = v4 - v1; // 0x12e
    int64_t v6 = 2 * (v4 - (v5 < 0 == ((v5 ^ v4) & (v4 ^ v1)) < 0 ? v1 : 0)); // 0x13f
    int64_t v7 = v6 - v1; // 0x145
    int64_t v8 = 2 * (v6 - (v7 < 0 == ((v7 ^ v6) & (v6 ^ v1)) < 0 ? v1 : 0)); // 0x160
    int64_t v9 = v8 - v1; // 0x165
    int64_t v10 = 2 * (v8 - (v9 < 0 == ((v9 ^ v8) & (v8 ^ v1)) < 0 ? v1 : 0)); // 0x178
    int64_t v11 = v10 - v1; // 0x17d
    int64_t v12 = 2 * (v10 - (v11 < 0 == ((v11 ^ v10) & (v10 ^ v1)) < 0 ? v1 : 0)); // 0x193
    int64_t v13 = v12 - v1; // 0x198
    int64_t v14 = 2 * (v12 - (v13 < 0 == ((v13 ^ v12) & (v12 ^ v1)) < 0 ? v1 : 0)); // 0x1ab
    int64_t v15 = v14 - v1; // 0x1b0
    int64_t v16 = 2 * (v14 - (v15 < 0 == ((v15 ^ v14) & (v14 ^ v1)) < 0 ? v1 : 0)); // 0x1c6
    int64_t v17 = v16 - v1; // 0x1cb
    int64_t v18 = 2 * (v16 - (v17 < 0 == ((v17 ^ v16) & (v16 ^ v1)) < 0 ? v1 : 0)); // 0x1de
    int64_t v19 = v18 - v1; // 0x1e3
    int64_t v20 = 2 * (v18 - (v19 < 0 == ((v19 ^ v18) & (v18 ^ v1)) < 0 ? v1 : 0)); // 0x1f9
    int64_t v21 = v20 - v1; // 0x1fe
    int64_t v22 = 2 * (v20 - (v21 < 0 == ((v21 ^ v20) & (v20 ^ v1)) < 0 ? v1 : 0)); // 0x211
    int64_t v23 = v22 - v1; // 0x216
    int64_t v24 = 2 * (v22 - (v23 < 0 == ((v23 ^ v22) & (v22 ^ v1)) < 0 ? v1 : 0)); // 0x22c
    int64_t v25 = v24 - v1; // 0x231
    int64_t v26 = 2 * (v24 - (v25 < 0 == ((v25 ^ v24) & (v24 ^ v1)) < 0 ? v1 : 0)); // 0x244
    int64_t v27 = v26 - v1; // 0x249
    int64_t v28 = 2 * (v26 - (v27 < 0 == ((v27 ^ v26) & (v26 ^ v1)) < 0 ? v1 : 0)); // 0x25f
    int64_t v29 = v28 - v1; // 0x264
    int64_t v30 = 2 * (v28 - (v29 < 0 == ((v29 ^ v28) & (v28 ^ v1)) < 0 ? v1 : 0)); // 0x274
    int64_t v31 = v30 - v1; // 0x279
    return 2 * (2 * (int16_t)(v27 < 0 == ((v27 ^ v26) & (v26 ^ v1)) < 0) | 4 * (2 * (int16_t)(v23 < 0 == ((v23 ^ v22) & (v22 ^ v1)) < 0) | 4 * (2 * (int16_t)(v19 < 0 == ((v19 ^ v18) & (v18 ^ v1)) < 0) | 4 * (2 * (int16_t)(v15 < 0 == ((v15 ^ v14) & (v14 ^ v1)) < 0) | 4 * (2 * (int16_t)(v11 < 0 == ((v11 ^ v10) & (v10 ^ v1)) < 0) | 4 * (4 * (int16_t)(v5 < 0 == ((v5 ^ v4) & (v4 ^ v1)) < 0) | 8 * (int16_t)(v3 < 0 == ((v3 ^ v2) & (v2 ^ v1)) < 0) | 2 * (int16_t)(v7 < 0 == ((v7 ^ v6) & (v6 ^ v1)) < 0) | (int16_t)(v9 < 0 == ((v9 ^ v8) & (v8 ^ v1)) < 0)) | (int16_t)(v13 < 0 == ((v13 ^ v12) & (v12 ^ v1)) < 0)) | (int16_t)(v17 < 0 == ((v17 ^ v16) & (v16 ^ v1)) < 0)) | (int16_t)(v21 < 0 == ((v21 ^ v20) & (v20 ^ v1)) < 0)) | (int16_t)(v25 < 0 == ((v25 ^ v24) & (v24 ^ v1)) < 0)) | (int16_t)(v29 < 0 == ((v29 ^ v28) & (v28 ^ v1)) < 0)) | (int16_t)(v31 < 0 == ((v31 ^ v30) & (v30 ^ v1)) < 0);
}
void Autocorrelation(int16_t * s, int64_t * L_ACF) {
    // 0x290
    int128_t v1; // 0x290
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4 = (int64_t)s;
    int64_t v5 = v4;
    int128_t v6 = __asm_pxor(v3, v3); // 0x29a
    int128_t v7 = __asm_movdqa(g1); // 0x2a0
    int128_t v8 = v6; // 0x2ac
    int128_t v9 = __asm_pxor(v2, v2); // 0x2ac
    for (int64_t i = 0; i < 145; i += 16) {
        // 0x2b0
        int128_t v10; // 0x290
        int128_t v11 = v10;
        int128_t v12; // 0x290
        int128_t v13 = v12;
        int128_t v14; // 0x290
        int128_t v15 = v14;
        int128_t v16; // 0x290
        int128_t v17 = v16;
        int64_t v18 = 2 * i + v4;
        int128_t v19 = __asm_movdqu(*(int128_t *)v18); // 0x2b0
        int128_t v20 = __asm_movdqu(*(int128_t *)(v18 + 16)); // 0x2b5
        int128_t v21 = __asm_pcmpgtw(__asm_pxor(v15, v15), v19); // 0x2bf
        int128_t v22 = __asm_pcmpgtw(__asm_pxor(v17, v17), v20); // 0x2c7
        int128_t v23 = __asm_pcmpeqw(__asm_movdqa(v19), v7); // 0x2cf
        int128_t v24 = __asm_pcmpeqw(__asm_movdqa(v20), v7); // 0x2d8
        int128_t v25 = __asm_psubw(__asm_pxor(v13, v13), v19); // 0x2e2
        int128_t v26 = __asm_psubw(__asm_pxor(v11, v11), v20); // 0x2ec
        int128_t v27 = __asm_por(__asm_psrlw(v23, 1), __asm_pandn(__asm_movdqa(v23), v25)); // 0x300
        int128_t v28 = __asm_pandn(__asm_movdqa(v24), v26); // 0x30a
        int128_t v29 = __asm_por(__asm_psrlw(v24, 1), v28); // 0x315
        int128_t v30 = __asm_por(__asm_pandn(v21, v19), __asm_pand(v27, v21)); // 0x322
        v8 = __asm_pmaxsw(v8, v30);
        int128_t v31 = __asm_por(__asm_pandn(v22, v20), __asm_pand(v29, v22)); // 0x333
        v9 = __asm_pmaxsw(v9, v31);
        v16 = v31;
        v14 = v30;
        v12 = v28;
        v10 = v26;
    }
    int16_t v32 = v4;
    int128_t v33 = __asm_pmaxsw(v8, v9); // 0x34c
    int128_t v34 = __asm_pmaxsw(__asm_pshufd(v33, -18), v33); // 0x355
    int128_t v35 = __asm_pmaxsw(__asm_pshufd(v34, 85), v34); // 0x35e
    int32_t v36 = __asm_movd(__asm_pmaxsw(__asm_psrld(__asm_movdqa(v35), 16), v35)); // 0x36f
    int16_t v37 = v32; // 0x376
    int32_t v38 = 0; // 0x376
    int32_t v39 = 0; // 0x376
    if ((int16_t)v36 != 0) {
        uint64_t v40 = (int64_t)v36; // 0x36f
        int64_t v41 = *(int64_t *)929; // 0x39a
        unsigned char v42 = *(char *)(v41 + (((v40 & 0xff00) == 0 ? v40 : v40 / 256) & 255)); // 0x3a1
        int32_t v43 = 8 * (int32_t)((v40 & 0xff00) != 0) - (int32_t)v42; // 0x3a5
        int32_t v44 = v43 - 3; // 0x3aa
        int32_t v45 = v44 >= 0 == (v44 != 0); // 0x3b3
        uint32_t v46 = v43 - 4; // 0x3ba
        v37 = v32;
        v38 = v44;
        v39 = v45;
        if (v46 < 4) {
            int32_t v47 = 0x4000 >> (v46 & 31);
            int64_t v48 = 0; // 0x3c8
            int64_t v49 = 2 * v48; // 0x3d0
            int16_t * v50 = (int16_t *)(v49 + v4); // 0x3d4
            *v50 = (int16_t)((v47 * (int32_t)*v50 + 0x4000) / 0x8000);
            int16_t * v51 = (int16_t *)(v5 + (v49 | 2)); // 0x3f1
            *v51 = (int16_t)((v47 * (int32_t)*v51 + 0x4000) / 0x8000);
            while (v48 != 158) {
                // 0x3d0
                v48 += 2;
                v49 = 2 * v48;
                v50 = (int16_t *)(v49 + v5);
                *v50 = (int16_t)((v47 * (int32_t)*v50 + 0x4000) / 0x8000);
                v51 = (int16_t *)(v5 + (v49 | 2));
                *v51 = (int16_t)((v47 * (int32_t)*v51 + 0x4000) / 0x8000);
            }
            // 0x429
            v37 = *(int16_t *)&v5;
            v38 = v44;
            v39 = v45;
        }
    }
    int64_t v52 = (int64_t)L_ACF;
    int64_t v53 = v37; // 0x429
    int128_t v54 = __asm_pxor(v35, v35); // 0x42d
    int64_t v55 = __asm_movdqu_1(v54); // 0x436
    int64_t v56 = v52 + 48; // 0x436
    *(int128_t *)v56 = (int128_t)v55;
    int64_t v57 = __asm_movdqu_1(v54); // 0x43b
    int64_t v58 = v52 + 32; // 0x43b
    *(int128_t *)v58 = (int128_t)v57;
    int64_t v59 = __asm_movdqu_1(v54); // 0x440
    int64_t v60 = v52 + 16; // 0x440
    *(int128_t *)v60 = (int128_t)v59;
    *(int128_t *)L_ACF = (int128_t)__asm_movdqu_1(v54);
    int64_t * v61 = (int64_t *)(v52 + 64); // 0x449
    *v61 = 0;
    int64_t v62 = v5; // 0x451
    int64_t v63 = (int64_t)*(int16_t *)(v62 + 4); // 0x451
    int64_t v64 = (int64_t)*(int16_t *)(v62 + 6); // 0x465
    int64_t v65 = (int64_t)*(int16_t *)(v62 + 8); // 0x476
    int64_t v66 = (int64_t)*(int16_t *)(v62 + 10); // 0x487
    int64_t v67 = (int64_t)*(int16_t *)(v62 + 12); // 0x498
    int64_t v68 = (int64_t)*(int16_t *)(v62 + 2); // 0x4b0
    int64_t v69 = v62 + 14; // 0x4ec
    int64_t v70 = (int64_t)*(int16_t *)v69; // 0x4ec
    int64_t * v71 = (int64_t *)v56; // 0x60c
    int64_t * v72 = (int64_t *)(v52 + 56); // 0x632
    int64_t v73 = v70 * v53 + *v72; // 0x632
    v5 = v73;
    int64_t v74 = v73; // 0x63d
    int64_t v75 = (v63 + v53) * v68 + (v65 + v63) * v64 + (v67 + v65) * v66 + v70 * v67; // 0x63d
    int64_t v76 = v63 * v63 + v53 * v53 + v64 * v64 + v65 * v65 + v66 * v66 + v67 * v67 + v68 * v68 + v70 * v70; // 0x63d
    int64_t v77 = (v67 + v63) * v65 + v63 * v53 + v70 * v66 + (v68 + v66) * v64; // 0x63d
    int64_t v78 = v68 * v67 + v66 * v53 + v70 * v63; // 0x63d
    int64_t v79 = 0; // 0x63d
    int64_t v80 = *v71 + v67 * v53 + v70 * v68; // 0x63d
    int64_t v81 = v67 * v63 + v65 * v53 + v68 * v66 + v70 * v64; // 0x63d
    int64_t v82 = (v67 + v53) * v64 + v66 * v63 + (v70 + v68) * v65; // 0x63d
    int64_t v83 = v69 + 2; // 0x64f
    int64_t v84 = (int64_t)*(int16_t *)v83; // 0x659
    v76 += v84 * v84;
    v75 += (0x1000000000000 * v70 >> 48) * v84;
    v77 += (int64_t)*(int16_t *)(v69 - 2) * v84;
    v82 += (int64_t)*(int16_t *)(v69 - 4) * v84;
    v81 += (int64_t)*(int16_t *)(v69 - 6) * v84;
    v78 += (int64_t)*(int16_t *)(v69 - 8) * v84;
    v80 += (int64_t)*(int16_t *)(v69 - 10) * v84;
    v74 += (int64_t)*(int16_t *)(v69 - 12) * v84;
    v5 = v74;
    v79 += (int64_t)*(int16_t *)(v69 - 14) * v84;
    int64_t v85 = 9; // 0x6e4
    int64_t v86 = v85 & 0xffffffff; // 0x6ec
    int64_t v87 = v84 & 0xffffffff; // 0x6ec
    while ((int32_t)v85 != 160) {
        int64_t v88 = v83;
        v83 = v88 + 2;
        v84 = (int64_t)*(int16_t *)v83;
        v76 += v84 * v84;
        v75 += (0x1000000000000 * v87 >> 48) * v84;
        v77 += (int64_t)*(int16_t *)(v88 - 2) * v84;
        v82 += (int64_t)*(int16_t *)(v88 - 4) * v84;
        v81 += (int64_t)*(int16_t *)(v88 - 6) * v84;
        v78 += (int64_t)*(int16_t *)(v88 - 8) * v84;
        v80 += (int64_t)*(int16_t *)(v88 - 10) * v84;
        v74 += (int64_t)*(int16_t *)(v88 - 12) * v84;
        v5 = v74;
        v79 += (int64_t)*(int16_t *)(v88 - 14) * v84;
        v85 = v86 + 1;
        v86 = v85 & 0xffffffff;
        v87 = v84 & 0xffffffff;
    }
    // 0x6f2
    *v61 = 2 * v79;
    *v72 = 2 * v5;
    *v71 = 2 * v80;
    *(int64_t *)(v52 + 40) = 2 * v78;
    *(int64_t *)v58 = 2 * v81;
    *(int64_t *)(v52 + 24) = 2 * v82;
    *(int64_t *)v60 = 2 * v77;
    *(int64_t *)(v52 + 8) = 2 * v75;
    *L_ACF = 2 * v76;
    if (v39 != 0) {
        int128_t v89 = __asm_movdqu(*(int128_t *)&v5); // 0x754
        int128_t * v90 = (int128_t *)(v62 + 16); // 0x758
        int128_t v91 = __asm_movdqu(*v90); // 0x758
        int128_t * v92 = (int128_t *)(v62 + 32); // 0x75d
        int128_t v93 = __asm_movdqu(*v92); // 0x75d
        int128_t * v94 = (int128_t *)(v62 + 48); // 0x762
        int128_t v95 = __asm_movdqu(*v94); // 0x762
        int128_t v96 = __asm_movdqa(v89); // 0x767
        int128_t v97 = __asm_punpckhwd(v96, v96); // 0x76b
        int128_t v98 = __asm_punpcklwd(v89, v89); // 0x76f
        int128_t v99 = __asm_movdqa(v91); // 0x773
        int128_t v100 = __asm_punpckhwd(v99, v99); // 0x777
        int128_t v101 = __asm_punpcklwd(v91, v91); // 0x77b
        int128_t v102 = __asm_movd_2(v38); // 0x77f
        int128_t v103 = __asm_pslld(v98, v102); // 0x785
        int128_t v104 = __asm_pslld(v97, v102); // 0x789
        int128_t v105 = __asm_pslld(v101, v102); // 0x78d
        int128_t v106 = __asm_pslld(v100, v102); // 0x791
        int128_t v107 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v103, 16), 16), __asm_psrad(__asm_pslld_3(v104, 16), 16)); // 0x7a9
        int128_t v108 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v105, 16), 16), __asm_psrad(__asm_pslld_3(v106, 16), 16)); // 0x7c1
        *(int128_t *)v62 = (int128_t)__asm_movdqu_1(v107);
        *v90 = (int128_t)__asm_movdqu_1(v108);
        int128_t v109 = __asm_movdqa(v93); // 0x7ce
        int128_t v110 = __asm_punpckhwd(v109, v109); // 0x7d2
        int128_t v111 = __asm_punpcklwd(v93, v93); // 0x7d6
        int128_t v112 = __asm_movdqa(v95); // 0x7da
        int128_t v113 = __asm_punpckhwd(v112, v112); // 0x7de
        int128_t v114 = __asm_punpcklwd(v95, v95); // 0x7e2
        int128_t v115 = __asm_pslld(v111, v102); // 0x7e6
        int128_t v116 = __asm_pslld(v110, v102); // 0x7ea
        int128_t v117 = __asm_pslld(v114, v102); // 0x7ee
        int128_t v118 = __asm_pslld(v113, v102); // 0x7f2
        int128_t v119 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v115, 16), 16), __asm_psrad(__asm_pslld_3(v116, 16), 16)); // 0x80a
        int128_t v120 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v117, 16), 16), __asm_psrad(__asm_pslld_3(v118, 16), 16)); // 0x822
        *v92 = (int128_t)__asm_movdqu_1(v119);
        *v94 = (int128_t)__asm_movdqu_1(v120);
        int128_t * v121 = (int128_t *)(v62 + 64); // 0x830
        int128_t v122 = __asm_movdqu(*v121); // 0x830
        int128_t * v123 = (int128_t *)(v62 + 80); // 0x835
        int128_t v124 = __asm_movdqu(*v123); // 0x835
        int128_t v125 = __asm_movdqa(v122); // 0x83a
        int128_t v126 = __asm_punpckhwd(v125, v125); // 0x83e
        int128_t v127 = __asm_punpcklwd(v122, v122); // 0x842
        int128_t v128 = __asm_movdqa(v124); // 0x846
        int128_t v129 = __asm_punpckhwd(v128, v128); // 0x84a
        int128_t v130 = __asm_punpcklwd(v124, v124); // 0x84e
        int128_t v131 = __asm_pslld(v127, v102); // 0x852
        int128_t v132 = __asm_pslld(v126, v102); // 0x856
        int128_t v133 = __asm_pslld(v130, v102); // 0x85a
        int128_t v134 = __asm_pslld(v129, v102); // 0x85e
        int128_t v135 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v131, 16), 16), __asm_psrad(__asm_pslld_3(v132, 16), 16)); // 0x876
        int128_t v136 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v133, 16), 16), __asm_psrad(__asm_pslld_3(v134, 16), 16)); // 0x88e
        *v121 = (int128_t)__asm_movdqu_1(v135);
        *v123 = (int128_t)__asm_movdqu_1(v136);
        int128_t * v137 = (int128_t *)(v62 + 96); // 0x89c
        int128_t v138 = __asm_movdqu(*v137); // 0x89c
        int128_t * v139 = (int128_t *)(v62 + 112); // 0x8a1
        int128_t v140 = __asm_movdqu(*v139); // 0x8a1
        int128_t v141 = __asm_movdqa(v138); // 0x8a6
        int128_t v142 = __asm_punpckhwd(v141, v141); // 0x8aa
        int128_t v143 = __asm_punpcklwd(v138, v138); // 0x8ae
        int128_t v144 = __asm_movdqa(v140); // 0x8b2
        int128_t v145 = __asm_punpckhwd(v144, v144); // 0x8b6
        int128_t v146 = __asm_punpcklwd(v140, v140); // 0x8ba
        int128_t v147 = __asm_pslld(v143, v102); // 0x8be
        int128_t v148 = __asm_pslld(v142, v102); // 0x8c2
        int128_t v149 = __asm_pslld(v146, v102); // 0x8c6
        int128_t v150 = __asm_pslld(v145, v102); // 0x8ca
        int128_t v151 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v147, 16), 16), __asm_psrad(__asm_pslld_3(v148, 16), 16)); // 0x8e2
        int128_t v152 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v149, 16), 16), __asm_psrad(__asm_pslld_3(v150, 16), 16)); // 0x8fa
        *v137 = (int128_t)__asm_movdqu_1(v151);
        *v139 = (int128_t)__asm_movdqu_1(v152);
        int128_t * v153 = (int128_t *)(v62 + 128); // 0x908
        int128_t v154 = __asm_movdqu(*v153); // 0x908
        int128_t * v155 = (int128_t *)(v62 + 144); // 0x910
        int128_t v156 = __asm_movdqu(*v155); // 0x910
        int128_t v157 = __asm_movdqa(v154); // 0x918
        int128_t v158 = __asm_punpckhwd(v157, v157); // 0x91c
        int128_t v159 = __asm_punpcklwd(v154, v154); // 0x920
        int128_t v160 = __asm_movdqa(v156); // 0x924
        int128_t v161 = __asm_punpckhwd(v160, v160); // 0x928
        int128_t v162 = __asm_punpcklwd(v156, v156); // 0x92c
        int128_t v163 = __asm_pslld(v159, v102); // 0x930
        int128_t v164 = __asm_pslld(v158, v102); // 0x934
        int128_t v165 = __asm_pslld(v162, v102); // 0x938
        int128_t v166 = __asm_pslld(v161, v102); // 0x93c
        int128_t v167 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v163, 16), 16), __asm_psrad(__asm_pslld_3(v164, 16), 16)); // 0x954
        int128_t v168 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v165, 16), 16), __asm_psrad(__asm_pslld_3(v166, 16), 16)); // 0x96c
        *v153 = (int128_t)__asm_movdqu_1(v167);
        *v155 = (int128_t)__asm_movdqu_1(v168);
        int128_t * v169 = (int128_t *)(v62 + 160); // 0x980
        int128_t v170 = __asm_movdqu(*v169); // 0x980
        int128_t * v171 = (int128_t *)(v62 + 176); // 0x988
        int128_t v172 = __asm_movdqu(*v171); // 0x988
        int128_t v173 = __asm_movdqa(v170); // 0x990
        int128_t v174 = __asm_punpckhwd(v173, v173); // 0x994
        int128_t v175 = __asm_punpcklwd(v170, v170); // 0x998
        int128_t v176 = __asm_movdqa(v172); // 0x99c
        int128_t v177 = __asm_punpckhwd(v176, v176); // 0x9a0
        int128_t v178 = __asm_punpcklwd(v172, v172); // 0x9a4
        int128_t v179 = __asm_pslld(v175, v102); // 0x9a8
        int128_t v180 = __asm_pslld(v174, v102); // 0x9ac
        int128_t v181 = __asm_pslld(v178, v102); // 0x9b0
        int128_t v182 = __asm_pslld(v177, v102); // 0x9b4
        int128_t v183 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v179, 16), 16), __asm_psrad(__asm_pslld_3(v180, 16), 16)); // 0x9cc
        int128_t v184 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v181, 16), 16), __asm_psrad(__asm_pslld_3(v182, 16), 16)); // 0x9e4
        *v169 = (int128_t)__asm_movdqu_1(v183);
        *v171 = (int128_t)__asm_movdqu_1(v184);
        int128_t * v185 = (int128_t *)(v62 + 192); // 0x9f8
        int128_t v186 = __asm_movdqu(*v185); // 0x9f8
        int128_t * v187 = (int128_t *)(v62 + 208); // 0xa00
        int128_t v188 = __asm_movdqu(*v187); // 0xa00
        int128_t v189 = __asm_movdqa(v186); // 0xa08
        int128_t v190 = __asm_punpckhwd(v189, v189); // 0xa0c
        int128_t v191 = __asm_punpcklwd(v186, v186); // 0xa10
        int128_t v192 = __asm_movdqa(v188); // 0xa14
        int128_t v193 = __asm_punpckhwd(v192, v192); // 0xa18
        int128_t v194 = __asm_punpcklwd(v188, v188); // 0xa1c
        int128_t v195 = __asm_pslld(v191, v102); // 0xa20
        int128_t v196 = __asm_pslld(v190, v102); // 0xa24
        int128_t v197 = __asm_pslld(v194, v102); // 0xa28
        int128_t v198 = __asm_pslld(v193, v102); // 0xa2c
        int128_t v199 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v195, 16), 16), __asm_psrad(__asm_pslld_3(v196, 16), 16)); // 0xa44
        int128_t v200 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v197, 16), 16), __asm_psrad(__asm_pslld_3(v198, 16), 16)); // 0xa5c
        *v185 = (int128_t)__asm_movdqu_1(v199);
        *v187 = (int128_t)__asm_movdqu_1(v200);
        int128_t * v201 = (int128_t *)(v62 + 224); // 0xa70
        int128_t v202 = __asm_movdqu(*v201); // 0xa70
        int128_t * v203 = (int128_t *)(v62 + 240); // 0xa78
        int128_t v204 = __asm_movdqu(*v203); // 0xa78
        int128_t v205 = __asm_movdqa(v202); // 0xa80
        int128_t v206 = __asm_punpckhwd(v205, v205); // 0xa84
        int128_t v207 = __asm_punpcklwd(v202, v202); // 0xa88
        int128_t v208 = __asm_movdqa(v204); // 0xa8c
        int128_t v209 = __asm_punpckhwd(v208, v208); // 0xa90
        int128_t v210 = __asm_punpcklwd(v204, v204); // 0xa94
        int128_t v211 = __asm_pslld(v207, v102); // 0xa98
        int128_t v212 = __asm_pslld(v206, v102); // 0xa9c
        int128_t v213 = __asm_pslld(v210, v102); // 0xaa0
        int128_t v214 = __asm_pslld(v209, v102); // 0xaa4
        int128_t v215 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v211, 16), 16), __asm_psrad(__asm_pslld_3(v212, 16), 16)); // 0xabc
        int128_t v216 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v213, 16), 16), __asm_psrad(__asm_pslld_3(v214, 16), 16)); // 0xad4
        *v201 = (int128_t)__asm_movdqu_1(v215);
        *v203 = (int128_t)__asm_movdqu_1(v216);
        int128_t * v217 = (int128_t *)(v62 + 256); // 0xae8
        int128_t v218 = __asm_movdqu(*v217); // 0xae8
        int128_t * v219 = (int128_t *)(v62 + 272); // 0xaf0
        int128_t v220 = __asm_movdqu(*v219); // 0xaf0
        int128_t v221 = __asm_movdqa(v218); // 0xaf8
        int128_t v222 = __asm_punpckhwd(v221, v221); // 0xafc
        int128_t v223 = __asm_punpcklwd(v218, v218); // 0xb00
        int128_t v224 = __asm_movdqa(v220); // 0xb04
        int128_t v225 = __asm_punpckhwd(v224, v224); // 0xb08
        int128_t v226 = __asm_punpcklwd(v220, v220); // 0xb0c
        int128_t v227 = __asm_pslld(v223, v102); // 0xb10
        int128_t v228 = __asm_pslld(v222, v102); // 0xb14
        int128_t v229 = __asm_pslld(v226, v102); // 0xb18
        int128_t v230 = __asm_pslld(v225, v102); // 0xb1c
        int128_t v231 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v227, 16), 16), __asm_psrad(__asm_pslld_3(v228, 16), 16)); // 0xb34
        int128_t v232 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v229, 16), 16), __asm_psrad(__asm_pslld_3(v230, 16), 16)); // 0xb4c
        *v217 = (int128_t)__asm_movdqu_1(v231);
        *v219 = (int128_t)__asm_movdqu_1(v232);
        int128_t * v233 = (int128_t *)(v62 + 288); // 0xb60
        int128_t v234 = __asm_movdqu(*v233); // 0xb60
        int128_t * v235 = (int128_t *)(v62 + 304); // 0xb68
        int128_t v236 = __asm_movdqu(*v235); // 0xb68
        int128_t v237 = __asm_movdqa(v234); // 0xb70
        int128_t v238 = __asm_punpckhwd(v237, v237); // 0xb74
        int128_t v239 = __asm_punpcklwd(v234, v234); // 0xb78
        int128_t v240 = __asm_movdqa(v236); // 0xb7c
        int128_t v241 = __asm_punpckhwd(v240, v240); // 0xb80
        int128_t v242 = __asm_punpcklwd(v236, v236); // 0xb84
        int128_t v243 = __asm_pslld(v239, v102); // 0xb88
        int128_t v244 = __asm_pslld(v238, v102); // 0xb8c
        int128_t v245 = __asm_pslld(v242, v102); // 0xb90
        int128_t v246 = __asm_pslld(v241, v102); // 0xb94
        int128_t v247 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v243, 16), 16), __asm_psrad(__asm_pslld_3(v244, 16), 16)); // 0xbac
        int128_t v248 = __asm_packssdw(__asm_psrad(__asm_pslld_3(v245, 16), 16), __asm_psrad(__asm_pslld_3(v246, 16), 16)); // 0xbc4
        *v233 = (int128_t)__asm_movdqu_1(v247);
        *v235 = (int128_t)__asm_movdqu_1(v248);
    }
}
void Reflection_coefficients(int64_t * L_ACF, int16_t * r) {
    // 0xbf0
    int128_t v1; // 0xbf0
    int128_t v2 = v1;
    if (L_ACF != NULL) {
        // 0xc09
        return;
    }
    // 0xc1b
    int64_t v3; // 0xbf0
    __asm_movups(*(int128_t *)&v3, __asm_xorps(v2, v2));
}
void Transformation_to_Log_Area_Ratios(int16_t * r) {
    int64_t v1 = (int64_t)r;
    int16_t v2 = v1;
    int64_t v3 = v1 & 0xffff; // 0xf40
    int64_t v4 = v2 >= 0 ? v3 : v2 != -0x8000 ? -v3 : 0x7fff; // 0xf57
    uint64_t v5 = 0x1000000000000 * v4 >> 48; // 0xf5a
    int64_t v6; // 0xf40
    if ((int32_t)v5 > 0x5665) {
        if ((v4 & 0xfffe) < 0x799a) {
            // 0xf74
            v6 = v4 + 0xffffd4cd & 0xffffffff;
        } else {
            // 0xf7e
            v6 = 4 * v4 + 0x6800 & 0xfffffffc;
        }
    } else {
        // 0xf65
        v6 = v5 / 2 & 0x7fffffff;
    }
    int16_t v7 = v6; // 0xf85
    *r = v2 >= 0 ? v7 : -v7;
    int16_t * v8 = (int16_t *)(v1 + 2);
    int16_t v9 = *v8; // 0xf92
    int64_t v10 = v9; // 0xf92
    int64_t v11 = v9 >= 0 ? v10 : v9 != -0x8000 ? -v10 : 0x7fff; // 0xfaa
    uint64_t v12 = 0x1000000000000 * v11 >> 48; // 0xfad
    int64_t v13; // 0xf40
    if ((int32_t)v12 > 0x5665) {
        if ((v11 & 0xfffe) >= 0x799a) {
            // 0xfd1
            v13 = 4 * v11 + 0x6800 & 0xfffffffc;
        } else {
            // 0xfc9
            v13 = v11 + 0xffffd4cd & 0xffffffff;
        }
    } else {
        // 0xfb8
        v13 = v12 / 2 & 0x7fffffff;
    }
    int16_t v14 = v13; // 0xfd8
    *v8 = v9 >= 0 ? v14 : -v14;
    int16_t * v15 = (int16_t *)(v1 + 4);
    int16_t v16 = *v15; // 0xfe6
    int64_t v17 = v16; // 0xfe6
    int64_t v18 = v16 >= 0 ? v17 : v16 != -0x8000 ? -v17 : 0x7fff; // 0xffe
    uint64_t v19 = 0x1000000000000 * v18 >> 48; // 0x1001
    int64_t v20; // 0xf40
    if ((int32_t)v19 > 0x5665) {
        if ((v18 & 0xfffe) >= 0x799a) {
            // 0x1025
            v20 = 4 * v18 + 0x6800 & 0xfffffffc;
        } else {
            // 0x101d
            v20 = v18 + 0xffffd4cd & 0xffffffff;
        }
    } else {
        // 0x100c
        v20 = v19 / 2 & 0x7fffffff;
    }
    int16_t v21 = v20; // 0x102c
    *v15 = v16 >= 0 ? v21 : -v21;
    int16_t * v22 = (int16_t *)(v1 + 6);
    int16_t v23 = *v22; // 0x103a
    int64_t v24 = v23; // 0x103a
    int64_t v25 = v23 >= 0 ? v24 : v23 != -0x8000 ? -v24 : 0x7fff; // 0x1052
    uint64_t v26 = 0x1000000000000 * v25 >> 48; // 0x1055
    int64_t v27; // 0xf40
    if ((int32_t)v26 > 0x5665) {
        if ((v25 & 0xfffe) >= 0x799a) {
            // 0x1079
            v27 = 4 * v25 + 0x6800 & 0xfffffffc;
        } else {
            // 0x1071
            v27 = v25 + 0xffffd4cd & 0xffffffff;
        }
    } else {
        // 0x1060
        v27 = v26 / 2 & 0x7fffffff;
    }
    int16_t v28 = v27; // 0x1080
    *v22 = v23 >= 0 ? v28 : -v28;
    int16_t * v29 = (int16_t *)(v1 + 8);
    int16_t v30 = *v29; // 0x108e
    int64_t v31 = v30; // 0x108e
    int64_t v32 = v30 >= 0 ? v31 : v30 != -0x8000 ? -v31 : 0x7fff; // 0x10a6
    uint64_t v33 = 0x1000000000000 * v32 >> 48; // 0x10a9
    int64_t v34; // 0xf40
    if ((int32_t)v33 > 0x5665) {
        if ((v32 & 0xfffe) >= 0x799a) {
            // 0x10cd
            v34 = 4 * v32 + 0x6800 & 0xfffffffc;
        } else {
            // 0x10c5
            v34 = v32 + 0xffffd4cd & 0xffffffff;
        }
    } else {
        // 0x10b4
        v34 = v33 / 2 & 0x7fffffff;
    }
    int16_t v35 = v34; // 0x10d4
    *v29 = v30 >= 0 ? v35 : -v35;
    int16_t * v36 = (int16_t *)(v1 + 10);
    int16_t v37 = *v36; // 0x10e2
    int64_t v38 = v37; // 0x10e2
    int64_t v39 = v37 >= 0 ? v38 : v37 != -0x8000 ? -v38 : 0x7fff; // 0x10fa
    uint64_t v40 = 0x1000000000000 * v39 >> 48; // 0x10fd
    int64_t v41; // 0xf40
    if ((int32_t)v40 > 0x5665) {
        if ((v39 & 0xfffe) >= 0x799a) {
            // 0x1121
            v41 = 4 * v39 + 0x6800 & 0xfffffffc;
        } else {
            // 0x1119
            v41 = v39 + 0xffffd4cd & 0xffffffff;
        }
    } else {
        // 0x1108
        v41 = v40 / 2 & 0x7fffffff;
    }
    int16_t v42 = v41; // 0x1128
    *v36 = v37 >= 0 ? v42 : -v42;
    int16_t * v43 = (int16_t *)(v1 + 12);
    int16_t v44 = *v43; // 0x1136
    int64_t v45 = v44; // 0x1136
    int64_t v46 = v44 >= 0 ? v45 : v44 != -0x8000 ? -v45 : 0x7fff; // 0x114e
    uint64_t v47 = 0x1000000000000 * v46 >> 48; // 0x1151
    int64_t v48; // 0xf40
    if ((int32_t)v47 > 0x5665) {
        if ((v46 & 0xfffe) >= 0x799a) {
            // 0x1175
            v48 = 4 * v46 + 0x6800 & 0xfffffffc;
        } else {
            // 0x116d
            v48 = v46 + 0xffffd4cd & 0xffffffff;
        }
    } else {
        // 0x115c
        v48 = v47 / 2 & 0x7fffffff;
    }
    int16_t v49 = v48; // 0x117c
    *v43 = v44 >= 0 ? v49 : -v49;
    int16_t * v50 = (int16_t *)(v1 + 14);
    uint16_t v51 = *v50; // 0x118a
    int64_t v52 = v51; // 0x118a
    int64_t v53 = v51 >= 0 ? v52 : v51 != -0x8000 ? -v52 : 0x7fff; // 0x11a2
    uint64_t v54 = 0x1000000000000 * v53 >> 48; // 0x11a5
    int16_t v55; // 0x11d0
    if ((int32_t)v54 <= 0x5665) {
        // 0x11d0
        v55 = v54 / 2 & 0x7fffffff;
        *v50 = v51 >= 0 ? v55 : -v55;
        return;
    }
    int64_t v56; // 0xf40
    if ((v53 & 0xfffe) >= 0x799a) {
        // 0x11c9
        v56 = 4 * v53 + 0x6800 & 0xfffffffc;
    } else {
        // 0x11c1
        v56 = v53 + 0xffffd4cd & 0xffffffff;
    }
    // 0x11d0
    v55 = v56;
    *v50 = v51 >= 0 ? v55 : -v55;
}
void Quantization_and_coding(int16_t * LAR) {
    // 0x11e0
    int64_t v1; // 0x11e0
    int128_t v2 = __asm_movdqu(*(int128_t *)&v1); // 0x11e0
    int128_t v3 = __asm_movdqa(v2); // 0x11e4
    int128_t v4 = __asm_pmaddwd(__asm_punpcklwd(v2, v2), g2); // 0x11ec
    int128_t v5 = __asm_psrad(__asm_pslld_3(__asm_pmaddwd(__asm_punpckhwd(v3, v3), g3), 1), 16); // 0x1205
    int128_t v6 = __asm_paddsw(__asm_packssdw(__asm_psrad(__asm_pslld_3(v4, 1), 16), v5), g4); // 0x1218
    int32_t v7 = __asm_pextrw(v6, 3); // 0x1220
    int32_t v8 = __asm_pextrw(v6, 5); // 0x122a
    int32_t v9 = __asm_pextrw(v6, 6); // 0x122f
    int32_t v10 = __asm_pextrw(v6, 7); // 0x1234
    int128_t v11 = __asm_pcmpgtw(__asm_movdqa(v6), g5); // 0x1243
    int128_t v12 = __asm_pinsrw(__asm_pinsrw(__asm_movdqa(v6), v7 + 256, 3), v8 + 256, 5); // 0x125a
    int128_t v13 = __asm_pinsrw(__asm_pinsrw(v12, v9 + 256, 6), v10 + 256, 7); // 0x126a
    int128_t v14 = __asm_pand(__asm_pcmpgtw(v6, g7), __asm_paddw(__asm_psraw(v13, 9), g6)); // 0x1284
    int128_t v15 = __asm_pandn(__asm_movdqa(v11), v14); // 0x128c
    *(int128_t *)LAR = (int128_t)__asm_movdqu_1(__asm_por(__asm_pand(v11, g8), v15));
}
int64_t Gsm_LPC_Analysis(int64_t a1, int64_t a2) {
    // 0x12b0
    int64_t v1; // bp-88, 0x12b0
    Autocorrelation((int16_t *)a1, &v1);
    int16_t * v2 = (int16_t *)a2; // 0x12cb
    Reflection_coefficients(&v1, v2);
    Transformation_to_Log_Area_Ratios(v2);
    Quantization_and_coding(v2);
    return &g12;
}
