
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "floyd-warshall.h"
int64_t kernel_floyd_warshall(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = a1; // 0xa
    if (v1 < 1) {
        // 0x1e1
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x12
    int64_t v2 = a1 & 0xfffffff8; // 0x1e
    int64_t v3 = 4 * result2 + a2; // 0x2a
    int64_t v4 = 0; // 0x32
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    uint64_t v7; // 0x0
    uint64_t v8; // 0x0
    uint64_t v9; // 0x6d
    while (true) {
        int64_t v10 = 0x2bc0 * v4; // 0x66
        v9 = v10 + a2;
        uint64_t v11 = v10 + v3; // 0x71
        v5 = 0;
        while (true) {
          lab_0x88:;
            int64_t v12 = 0x2bc0 * v5; // 0x88
            v7 = v12 + a2;
            v8 = v7 + 4 * v4;
            v6 = 0;
            if (v1 >= 12) {
                uint64_t v13 = v12 + v3; // 0x127
                v6 = 0;
                if (v8 < v13 == v7 < v8 + 4) {
                    goto lab_0x9e;
                } else {
                    // 0x152
                    v6 = 0;
                    if (v7 < v11 == v9 < v13) {
                        goto lab_0x9e;
                    } else {
                        int128_t v14 = __asm_pshufd(__asm_movd(*(int32_t *)v8), 0); // 0x166
                        int64_t v15 = 0; // 0x16d
                        int64_t v16 = 4 * v15; // 0x170
                        int64_t v17 = v16 + v7;
                        int128_t * v18 = (int128_t *)v17; // 0x170
                        int128_t v19 = __asm_movdqu_1(*v18); // 0x170
                        int128_t * v20 = (int128_t *)(v17 + 16); // 0x176
                        int128_t v21 = __asm_movdqu_1(*v20); // 0x176
                        int64_t v22 = v16 + v9;
                        int128_t v23 = __asm_movdqu_1(*(int128_t *)v22); // 0x17d
                        int128_t v24 = __asm_movdqu_1(*(int128_t *)(v22 + 16)); // 0x183
                        int128_t v25 = __asm_paddd(v23, v14); // 0x18a
                        int128_t v26 = __asm_paddd(v24, v14); // 0x18e
                        int128_t v27 = __asm_pcmpgtd(__asm_movdqa(v25), v19); // 0x196
                        int128_t v28 = __asm_por(__asm_pandn(v27, v25), __asm_pand(v19, v27)); // 0x1a2
                        int128_t v29 = __asm_pcmpgtd(__asm_movdqa(v26), v21); // 0x1aa
                        int128_t v30 = __asm_por(__asm_pandn(v29, v26), __asm_pand(v21, v29)); // 0x1b6
                        *v18 = (int128_t)__asm_movdqu(v28);
                        *v20 = (int128_t)__asm_movdqu(v30);
                        v15 += 8;
                        while (v15 != v2) {
                            // 0x170
                            v16 = 4 * v15;
                            v17 = v16 + v7;
                            v18 = (int128_t *)v17;
                            v19 = __asm_movdqu_1(*v18);
                            v20 = (int128_t *)(v17 + 16);
                            v21 = __asm_movdqu_1(*v20);
                            v22 = v16 + v9;
                            v23 = __asm_movdqu_1(*(int128_t *)v22);
                            v24 = __asm_movdqu_1(*(int128_t *)(v22 + 16));
                            v25 = __asm_paddd(v23, v14);
                            v26 = __asm_paddd(v24, v14);
                            v27 = __asm_pcmpgtd(__asm_movdqa(v25), v19);
                            v28 = __asm_por(__asm_pandn(v27, v25), __asm_pand(v19, v27));
                            v29 = __asm_pcmpgtd(__asm_movdqa(v26), v21);
                            v30 = __asm_por(__asm_pandn(v29, v26), __asm_pand(v21, v29));
                            *v18 = (int128_t)__asm_movdqu(v28);
                            *v20 = (int128_t)__asm_movdqu(v30);
                            v15 += 8;
                        }
                        // 0x1d0
                        v6 = v2;
                        if (v2 == result2) {
                            goto lab_0x80;
                        } else {
                            goto lab_0x9e;
                        }
                    }
                }
            } else {
                goto lab_0x9e;
            }
        }
      lab_0x40:
        // 0x40
        v4++;
        if (v4 == result2) {
            // break -> 0x1e1
            break;
        }
    }
    // 0x1e1
    return result2;
  lab_0x9e:;
    int64_t v31 = v6;
    int64_t v32 = v31; // 0xa3
    if ((a1 & 1) != 0) {
        int64_t v33 = 4 * v31; // 0xa5
        int32_t v34 = *(int32_t *)v8 + *(int32_t *)(v33 + v9); // 0xa9
        int32_t * v35 = (int32_t *)(v33 + v7); // 0xad
        int32_t v36 = *v35; // 0xad
        int32_t v37 = v36 - v34; // 0xb1
        *v35 = v37 < 0 == ((v37 ^ v36) & (v36 ^ v34)) < 0 ? v34 : v36;
        v32 = v31 | 1;
    }
    if (-result2 != -1 - v31) {
        int32_t * v38 = (int32_t *)v8; // 0xd4
        int64_t v39 = v32; // 0x101
        int64_t v40 = 4 * v39; // 0xd0
        int64_t v41 = v40 + v9;
        int32_t v42 = *v38 + *(int32_t *)v41; // 0xd4
        int64_t v43 = v40 + v7;
        int32_t * v44 = (int32_t *)v43; // 0xd8
        int32_t v45 = *v44; // 0xd8
        int32_t * v46 = (int32_t *)(v43 + 4); // 0xdc
        int32_t v47 = *v46; // 0xdc
        int32_t v48 = v45 - v42; // 0xe1
        *v44 = v48 < 0 == ((v48 ^ v45) & (v45 ^ v42)) < 0 ? v42 : v45;
        int32_t v49 = *v38 + *(int32_t *)(v41 + 4); // 0xf1
        int32_t v50 = v47 - v49; // 0xf5
        *v46 = v50 < 0 == ((v50 ^ v47) & (v49 ^ v47)) < 0 ? v49 : v47;
        v39 += 2;
        while (v39 != result2) {
            // 0xd0
            v40 = 4 * v39;
            v41 = v40 + v9;
            v42 = *v38 + *(int32_t *)v41;
            v43 = v40 + v7;
            v44 = (int32_t *)v43;
            v45 = *v44;
            v46 = (int32_t *)(v43 + 4);
            v47 = *v46;
            v48 = v45 - v42;
            *v44 = v48 < 0 == ((v48 ^ v45) & (v45 ^ v42)) < 0 ? v42 : v45;
            v49 = *v38 + *(int32_t *)(v41 + 4);
            v50 = v47 - v49;
            *v46 = v50 < 0 == ((v50 ^ v47) & (v49 ^ v47)) < 0 ? v49 : v47;
            v39 += 2;
        }
    }
    goto lab_0x80;
  lab_0x80:;
    int64_t v51 = v5 + 1; // 0x80
    v5 = v51;
    if (v51 == result2) {
        // break -> 0x40
        goto lab_0x40;
    }
    goto lab_0x88;
}
