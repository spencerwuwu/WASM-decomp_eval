
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "durbin.h"
int64_t kernel_durbin(int64_t a1, int64_t a2, int64_t a3) {
    int128_t v1 = __asm_xorpd(__asm_movsd(a2), g1); // 0x15
    __asm_movlpd(a3, v1);
    int64_t result; // 0x0
    if ((int32_t)a1 < 2) {
        // 0x215
        return result;
    }
    // 0x2a
    int64_t v2; // bp-16088, 0x0
    int64_t v3 = &v2; // 0xa
    int128_t v4 = __asm_movsd(a2); // 0x33
    int64_t v5 = v3 + 32;
    int128_t v6 = v1; // 0x5c
    int128_t v7 = __asm_xorpd(v4, g1); // 0x5c
    int128_t v8 = __asm_movsd(0x3ff0000000000000); // 0x5c
    int64_t v9 = 1; // 0x5c
    int64_t v10 = 0; // 0x5c
    int64_t v11; // 0x0
    uint64_t v12; // 0x0
    int128_t v13; // 0x0
    int128_t v14; // 0x0
    int128_t v15; // 0x0
    while (true) {
      lab_0x9b:
        // 0x9b
        v12 = v9;
        v15 = v7;
        int128_t v16 = v6;
        if (v10 == 0) {
            int128_t v17 = __asm_xorpd(v16, v16); // 0x200
            v13 = v17;
            v11 = 0;
            v14 = v17;
            if ((v12 & 1) != 0) {
                goto lab_0x10d;
            } else {
                goto lab_0x125;
            }
        } else {
            int128_t v18 = __asm_xorpd(v16, v16); // 0xb3
            int64_t v19 = 0; // 0xb3
            int128_t v20 = __asm_movsd(*(int64_t *)(8 * ((v19 ^ 0x1fffffffffffffff) + v12) + a2)); // 0xc9
            int64_t v21 = 8 * v19; // 0xcf
            int128_t v22 = __asm_addsd(__asm_mulsd(v20, *(int64_t *)(v21 + a3)), v18); // 0xdc
            int128_t v23 = __asm_movsd(*(int64_t *)(a2 - 16 + 8 * (v12 - v19))); // 0xe6
            int128_t v24 = __asm_addsd(__asm_mulsd(v23, *(int64_t *)((v21 | 8) + a3)), v22); // 0xf6
            int64_t v25 = v19 + 2; // 0xfa
            v18 = v24;
            v19 = v25;
            while (v25 != (v12 & 0x7ffffffffffffffe)) {
                // 0xc0
                v20 = __asm_movsd(*(int64_t *)(8 * ((v19 ^ 0x1fffffffffffffff) + v12) + a2));
                v21 = 8 * v19;
                v22 = __asm_addsd(__asm_mulsd(v20, *(int64_t *)(v21 + a3)), v18);
                v23 = __asm_movsd(*(int64_t *)(a2 - 16 + 8 * (v12 - v19)));
                v24 = __asm_addsd(__asm_mulsd(v23, *(int64_t *)((v21 | 8) + a3)), v22);
                v25 = v19 + 2;
                v18 = v24;
                v19 = v25;
            }
            // 0x107
            v13 = v24;
            v11 = v25;
            v14 = v24;
            if ((v12 & 1) == 0) {
                goto lab_0x125;
            } else {
                goto lab_0x10d;
            }
        }
    }
  lab_0x215:
    // 0x215
    return result;
  lab_0x10d:;
    int128_t v26 = __asm_movsd(*(int64_t *)(8 * ((v11 ^ 0x1fffffffffffffff) + v12) + a2)); // 0x116
    v14 = __asm_addsd(v13, __asm_mulsd(v26, *(int64_t *)(8 * v11 + a3)));
    goto lab_0x125;
  lab_0x125:;
    int128_t v27 = __asm_mulsd_1(v15, v15); // 0x125
    int128_t v28 = __asm_mulsd_1(v8, __asm_subsd(__asm_movsd(0x3ff0000000000000), v27)); // 0x135
    int64_t v29 = 8 * v12; // 0x139
    int128_t v30 = __asm_xorpd(__asm_addsd_2(v14, *(int64_t *)(v29 + a2)), g1); // 0x13f
    int128_t v31 = __asm_divsd(__asm_movapd(v30), v28); // 0x14b
    int64_t v32 = __asm_movsd_3(v28); // 0x153
    int64_t v33 = 0; // 0x159
    if (v12 >= 4) {
        int64_t v34 = v12 & 0x7ffffffffffffffc; // 0x163
        int128_t v35 = __asm_unpcklpd(__asm_movapd(v31), v31); // 0x16a
        int64_t v36 = 0; // 0x16e
        int64_t v37 = 8 * v36; // 0x170
        int64_t v38 = v37 + a3;
        int128_t v39 = __asm_movupd(*(int128_t *)v38); // 0x170
        int128_t v40 = __asm_movupd(*(int128_t *)(v38 + 16)); // 0x175
        int64_t v41 = 8 * ((v36 ^ 0x1fffffffffffffff) + v12) + a3;
        int128_t v42 = __asm_movupd(*(int128_t *)(v41 - 24)); // 0x184
        int128_t v43 = __asm_movupd(*(int128_t *)(v41 - 8)); // 0x18a
        int128_t v44 = __asm_shufpd(v43, v43, 1); // 0x190
        int128_t v45 = __asm_shufpd(v42, v42, 1); // 0x195
        int128_t v46 = __asm_addpd(__asm_mulpd(v44, v35), v39); // 0x19e
        int128_t v47 = __asm_addpd(__asm_mulpd(v45, v35), v40); // 0x1a6
        *(int128_t *)(v37 + v5) = (int128_t)__asm_movapd_4(v46);
        *(int128_t *)(v3 + 48 + v37) = (int128_t)__asm_movapd_4(v47);
        v36 += 4;
        while (v36 != v34) {
            // 0x170
            v37 = 8 * v36;
            v38 = v37 + a3;
            v39 = __asm_movupd(*(int128_t *)v38);
            v40 = __asm_movupd(*(int128_t *)(v38 + 16));
            v41 = 8 * ((v36 ^ 0x1fffffffffffffff) + v12) + a3;
            v42 = __asm_movupd(*(int128_t *)(v41 - 24));
            v43 = __asm_movupd(*(int128_t *)(v41 - 8));
            v44 = __asm_shufpd(v43, v43, 1);
            v45 = __asm_shufpd(v42, v42, 1);
            v46 = __asm_addpd(__asm_mulpd(v44, v35), v39);
            v47 = __asm_addpd(__asm_mulpd(v45, v35), v40);
            *(int128_t *)(v37 + v5) = (int128_t)__asm_movapd_4(v46);
            *(int128_t *)(v3 + 48 + v37) = (int128_t)__asm_movapd_4(v47);
            v36 += 4;
        }
        // 0x1bf
        v6 = v35;
        v33 = v34;
        if (v12 == v34) {
            goto lab_0x60;
        } else {
            goto lab_0x1d0;
        }
    } else {
        goto lab_0x1d0;
    }
  lab_0x1d0:;
    int64_t v48 = *(int64_t *)(8 * ((v33 ^ 0x1fffffffffffffff) + v12) + a3); // 0x1d9
    int128_t v49 = __asm_mulsd_1(__asm_movsd(v48), v31); // 0x1de
    int64_t v50 = 8 * v33; // 0x1e2
    int128_t v51 = __asm_addsd_2(v49, *(int64_t *)(v50 + a3)); // 0x1e2
    *(int64_t *)(v50 + v5) = __asm_movsd_3(v51);
    int64_t v52 = v33 + 1; // 0x1ed
    v6 = v51;
    int64_t v53 = v52; // 0x1f3
    while (v52 != v12) {
        // 0x1d0
        v48 = *(int64_t *)(8 * ((v53 ^ 0x1fffffffffffffff) + v12) + a3);
        v49 = __asm_mulsd_1(__asm_movsd(v48), v31);
        v50 = 8 * v53;
        v51 = __asm_addsd_2(v49, *(int64_t *)(v50 + a3));
        *(int64_t *)(v50 + v5) = __asm_movsd_3(v51);
        v52 = v53 + 1;
        v6 = v51;
        v53 = v52;
    }
    goto lab_0x60;
  lab_0x60:;
    int64_t v54 = __asm_movapd_4(v31); // 0x70
    int64_t dest_mem = memcpy(); // 0x76
    v7 = __asm_movapd((int128_t)v54);
    *(int64_t *)(v29 + a3) = __asm_movsd_3(v7);
    v10++;
    v8 = __asm_movsd(v32);
    v9 = v12 + 1;
    result = dest_mem;
    if (v10 == (a1 + 0xffffffff & 0xffffffff)) {
        // break -> 0x215
        goto lab_0x215;
    }
    goto lab_0x9b;
}
