
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "jacobi-1d.h"
int64_t kernel_jacobi_1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a1; // 0x0
    if (v1 < 1) {
        // 0xaf
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2 + 0xffffffff & 0xffffffff; // 0x8
    int128_t v2 = __asm_movsd(0x3fd555475a31a4be); // 0xe
    int64_t v3 = 0; // 0x16
    int64_t v4; // 0x0
    while (true) {
      lab_0x2c:;
        int64_t v5 = 1; // 0x35
        if ((int32_t)a2 >= 3) {
            while (true) {
                int64_t v6 = 8 * v5; // 0x40
                int64_t v7 = v6 + a3;
                int128_t v8 = __asm_movsd(*(int64_t *)(v7 - 8)); // 0x40
                int128_t v9 = __asm_addsd_2(__asm_addsd_2(v8, *(int64_t *)v7), *(int64_t *)(v7 + 8)); // 0x4d
                *(int64_t *)(v6 + a4) = __asm_movsd_1(__asm_mulsd(v9, v2));
                int64_t v10 = v5 + 1; // 0x5e
                v5 = v10;
                v4 = 1;
                if (v10 == result2) {
                    goto lab_0x80;
                }
            }
        }
        goto lab_0x20;
    }
    // 0xaf
    return result2;
  lab_0x80:;
    int64_t v11 = 8 * v4; // 0x80
    int64_t v12 = v11 + a4;
    int128_t v13 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v12 - 8)), *(int64_t *)v12); // 0x87
    int128_t v14 = __asm_addsd_2(v13, *(int64_t *)(v12 + 8)); // 0x8d
    *(int64_t *)(v11 + a3) = __asm_movsd_1(__asm_mulsd(v14, v2));
    int64_t v15 = v4 + 1; // 0x9e
    v4 = v15;
    if (v15 != result2) {
        goto lab_0x80;
    } else {
        goto lab_0x20;
    }
  lab_0x20:;
    int64_t v16 = v3 + 1; // 0x20
    v3 = v16 & 0xffffffff;
    if ((int32_t)v16 == v1) {
        return result2;
    }
    goto lab_0x2c;
}
