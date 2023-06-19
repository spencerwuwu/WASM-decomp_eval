
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "jacobi-2d.h"
int64_t kernel_jacobi_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a1; // 0x5
    if (v1 < 1) {
        // 0x135
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2 + 0xffffffff & 0xffffffff; // 0xd
    int128_t v2 = __asm_movsd(0x3fc999999999999a); // 0x13
    int64_t v3 = 0; // 0x1b
    while (true) {
      lab_0x2c:;
        int64_t v4 = 1; // 0x35
        if ((int32_t)a2 >= 3) {
            while (true) {
                int64_t v5 = v4 + 1; // 0x40
                int64_t v6 = 0x28a0 * v4; // 0x50
                int64_t v7 = 1; // 0x4d
                int64_t v8 = 8 * v7; // 0x5b
                int64_t v9 = v8 + v6 + a3;
                int128_t v10 = __asm_addsd_2(__asm_movsd(*(int64_t *)v9), *(int64_t *)(v9 - 8)); // 0x61
                int128_t v11 = __asm_addsd_2(v10, *(int64_t *)(v9 + 8)); // 0x68
                int128_t v12 = __asm_addsd_2(v11, *(int64_t *)(0x28a0 * v5 + a3 + v8)); // 0x79
                int128_t v13 = __asm_addsd_2(v12, *(int64_t *)(v9 - 0x28a0)); // 0x89
                *(int64_t *)(v6 + a4 + v8) = __asm_movsd_1(__asm_mulsd(v13, v2));
                v7++;
                while (v7 != result2) {
                    // 0x50
                    v8 = 8 * v7;
                    v9 = v8 + v6 + a3;
                    v10 = __asm_addsd_2(__asm_movsd(*(int64_t *)v9), *(int64_t *)(v9 - 8));
                    v11 = __asm_addsd_2(v10, *(int64_t *)(v9 + 8));
                    v12 = __asm_addsd_2(v11, *(int64_t *)(0x28a0 * v5 + a3 + v8));
                    v13 = __asm_addsd_2(v12, *(int64_t *)(v9 - 0x28a0));
                    *(int64_t *)(v6 + a4 + v8) = __asm_movsd_1(__asm_mulsd(v13, v2));
                    v7++;
                }
                // 0xa8
                v4 = v5;
                if (v5 == result2) {
                    goto lab_0xd0;
                }
            }
        }
        goto lab_0x20;
    }
  lab_0x135:
    // 0x135
    return result2;
  lab_0xc0:
    // 0xc0
    goto lab_0xd0;
  lab_0x20:;
    int64_t v34 = v3 + 1; // 0x20
    v3 = v34 & 0xffffffff;
    if ((int32_t)v34 == v1) {
        // break -> 0x135
        goto lab_0x135;
    }
    goto lab_0x2c;
  lab_0xd0:;
    // 0xd0
    int64_t v14; // 0x0
    int64_t v15 = v14;
    int64_t v16 = 8 * v15; // 0xdb
    int64_t v17; // 0x0
    int64_t v18 = v16 + v17;
    int64_t v19 = *(int64_t *)v18; // 0xdb
    int128_t v20 = __asm_movsd(v19); // 0xdb
    int64_t v21 = *(int64_t *)(v18 - 8); // 0xe1
    int128_t v22 = __asm_addsd_2(v20, v21); // 0xe1
    int64_t v23 = *(int64_t *)(v18 + 8); // 0xe8
    int128_t v24 = __asm_addsd_2(v22, v23); // 0xe8
    int64_t v25; // 0x0
    int64_t v26 = *(int64_t *)(v25 + v16); // 0xf9
    int128_t v27 = __asm_addsd_2(v24, v26); // 0xf9
    int64_t v28 = *(int64_t *)(v18 - 0x28a0); // 0x109
    int128_t v29 = __asm_addsd_2(v27, v28); // 0x109
    int64_t v30 = __asm_movsd_1(__asm_mulsd(v29, v2)); // 0x116
    int64_t v31; // 0x0
    *(int64_t *)(v31 + v16) = v30;
    int64_t v32 = v15 + 1; // 0x11c
    v14 = v32;
    if (v32 != result2) {
        goto lab_0xd0;
    } else {
        // 0x128
        int64_t v33; // 0xc0
        if (v33 != result2) {
            goto lab_0xc0;
        } else {
            goto lab_0x20;
        }
    }
}
