
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "jacobi-1d.h"
int64_t kernel_jacobi_1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a1; // 0x1c
    if (v1 <= 0) {
        // 0x118
        return 0;
    }
    uint64_t v2 = a2 + 0xffffffff & 0xffffffff; // 0x32
    int32_t v3 = 0; // 0x10d
    int32_t v4; // 0x0
    while (true) {
      lab_0x2c:;
        int32_t v5 = 1; // 0x37
        if (v2 > 1) {
            while (true) {
                int128_t v6 = __asm_movsd(*(int64_t *)(8 * (int64_t)(v5 - 1) + a3)); // 0x4a
                int64_t v7 = 8 * (int64_t)v5; // 0x57
                int128_t v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + a3)); // 0x57
                int32_t v9 = v5 + 1; // 0x63
                int128_t v10 = __asm_addsd_2(v8, *(int64_t *)(8 * (int64_t)v9 + a3)); // 0x69
                *(int64_t *)(v7 + a4) = __asm_movsd_1(__asm_mulsd(__asm_movsd(0x3fd555475a31a4be), v10));
                v5 = v9;
                v4 = 1;
                if (v2 <= (int64_t)v9) {
                    goto lab_0xad;
                }
            }
        }
        goto lab_0x10a;
    }
    // 0x118
    return a1 & 0xffffffff;
  lab_0xad:;
    int128_t v11 = __asm_movsd(*(int64_t *)(8 * (int64_t)(v4 - 1) + a4)); // 0xba
    int64_t v12 = 8 * (int64_t)v4; // 0xc7
    int128_t v13 = __asm_addsd_2(v11, *(int64_t *)(v12 + a4)); // 0xc7
    int32_t v14 = v4 + 1; // 0xd3
    int128_t v15 = __asm_addsd_2(v13, *(int64_t *)(8 * (int64_t)v14 + a4)); // 0xd9
    *(int64_t *)(v12 + a3) = __asm_movsd_1(__asm_mulsd(__asm_movsd(0x3fd555475a31a4be), v15));
    v4 = v14;
    if (v2 > (int64_t)v14) {
        goto lab_0xad;
    } else {
        goto lab_0x10a;
    }
  lab_0x10a:
    // 0x10a
    v3++;
    if (v3 == v1) {
        return a1 & 0xffffffff;
    }
    goto lab_0x2c;
}
