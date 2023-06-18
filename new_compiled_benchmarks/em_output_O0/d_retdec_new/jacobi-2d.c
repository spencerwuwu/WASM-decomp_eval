
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "jacobi-2d.h"
int64_t kernel_jacobi_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a1; // 0x1c
    if (v1 <= 0) {
        // 0x25e
        return 0;
    }
    uint64_t v2 = a2 + 0xffffffff & 0xffffffff; // 0x32
    int32_t v3 = 0; // 0x253
    while (true) {
      lab_0x2c:;
        int64_t v4 = 1; // 0x37
        int32_t v5 = 1; // 0x37
        if (v2 > 1) {
            while (true) {
                int64_t v6 = 0x28a0 * v4; // 0x5d
                int64_t v7 = v6 + a3; // 0x64
                int64_t v8 = 0x100000000 * v4;
                int32_t v9 = 1; // 0xa5
                int64_t v10 = 8 * (int64_t)v9; // 0x6b
                int128_t v11 = __asm_movsd(*(int64_t *)(v10 + v7)); // 0x6b
                int128_t v12 = __asm_addsd_2(v11, *(int64_t *)(8 * (int64_t)(v9 - 1) + v7)); // 0x8b
                v9++;
                int128_t v13 = __asm_addsd_2(v12, *(int64_t *)(8 * (int64_t)v9 + v7)); // 0xab
                int64_t v14 = v10 + a3;
                int128_t v15 = __asm_addsd_2(v13, *(int64_t *)(v14 + 0x28a0 * (v8 + 0x100000000 >> 32))); // 0xcb
                int128_t v16 = __asm_addsd_2(v15, *(int64_t *)(v14 + 0x28a0 * (v8 - 0x100000000 >> 32))); // 0xeb
                *(int64_t *)(v6 + a4 + v10) = __asm_movsd_1(__asm_mulsd(__asm_movsd(0x3fc999999999999a), v16));
                while (v2 > (int64_t)v9) {
                    // 0x55
                    v10 = 8 * (int64_t)v9;
                    v11 = __asm_movsd(*(int64_t *)(v10 + v7));
                    v12 = __asm_addsd_2(v11, *(int64_t *)(8 * (int64_t)(v9 - 1) + v7));
                    v9++;
                    v13 = __asm_addsd_2(v12, *(int64_t *)(8 * (int64_t)v9 + v7));
                    v14 = v10 + a3;
                    v15 = __asm_addsd_2(v13, *(int64_t *)(v14 + 0x28a0 * (v8 + 0x100000000 >> 32)));
                    v16 = __asm_addsd_2(v15, *(int64_t *)(v14 + 0x28a0 * (v8 - 0x100000000 >> 32)));
                    *(int64_t *)(v6 + a4 + v10) = __asm_movsd_1(__asm_mulsd(__asm_movsd(0x3fc999999999999a), v16));
                }
                int32_t v17 = v5 + 1; // 0x12d
                int64_t v18 = v17;
                v4 = v18;
                v5 = v17;
                if ((v18 & 0xffffffff) >= v2) {
                    goto lab_0x168_2;
                }
            }
        }
        goto lab_0x250;
    }
  lab_0x19:
    // 0x25e
    return a1 & 0xffffffff;
  lab_0x168:
    // 0x168
    goto lab_0x168_2;
  lab_0x250:
    // 0x250
    v3++;
    if (v3 == v1) {
        // break -> 0x19
        goto lab_0x19;
    }
    goto lab_0x2c;
  lab_0x168_2:;
    // 0x168
    int32_t v19; // 0x0
    int32_t v20 = v19;
    int64_t v21 = 8 * (int64_t)v20; // 0x17e
    int64_t v22; // 0x177
    int64_t v23 = *(int64_t *)(v21 + v22); // 0x17e
    int128_t v24 = __asm_movsd(v23); // 0x17e
    int64_t v25 = *(int64_t *)(8 * (int64_t)(v20 - 1) + v22); // 0x19e
    int128_t v26 = __asm_addsd_2(v24, v25); // 0x19e
    int32_t v27 = v20 + 1; // 0x1b8
    int64_t v28 = *(int64_t *)(8 * (int64_t)v27 + v22); // 0x1be
    int128_t v29 = __asm_addsd_2(v26, v28); // 0x1be
    int64_t v30 = v21 + a4;
    int64_t v31; // 0x0
    int64_t v32 = *(int64_t *)(v30 + v31); // 0x1de
    int128_t v33 = __asm_addsd_2(v29, v32); // 0x1de
    int64_t v34; // 0x0
    int64_t v35 = *(int64_t *)(v30 + v34); // 0x1fe
    int128_t v36 = __asm_addsd_2(v33, v35); // 0x1fe
    int128_t v37 = __asm_movsd(0x3fc999999999999a); // 0x203
    int64_t v38 = __asm_movsd_1(__asm_mulsd(v37, v36)); // 0x225
    int64_t v39; // 0x0
    *(int64_t *)(v39 + v21) = v38;
    v19 = v27;
    if (v2 > (int64_t)v27) {
        goto lab_0x168_2;
    } else {
        // 0x23d
        int32_t v40; // 0x0
        int32_t v41 = v40 + 1; // 0x240
        int64_t v42 = v41;
        if ((v42 & 0xffffffff) < v2) {
            goto lab_0x168;
        } else {
            goto lab_0x250;
        }
    }
}
