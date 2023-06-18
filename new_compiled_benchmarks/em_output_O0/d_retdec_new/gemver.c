
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gemver.h"
int64_t kernel_gemver(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x0
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0x17
    int64_t v3 = __asm_movsd_1(v1); // 0x1c
    if ((int32_t)a1 <= 0) {
        // 0x26a
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v4 = 0;
    int64_t v5 = 8 * v4;
    int64_t * v6 = (int64_t *)(v5 + a5);
    int64_t v7 = 0;
    int64_t v8 = 8 * v7; // 0x71
    int64_t * v9 = (int64_t *)(0x3e80 * v4 + a2 + v8); // 0x71
    int128_t v10 = __asm_movsd(*v9); // 0x71
    int128_t v11 = __asm_movsd(*(int64_t *)(v5 + a3)); // 0x7e
    int128_t v12 = __asm_addsd(__asm_mulsd(v11, __asm_movsd(*(int64_t *)(v8 + a4))), v10); // 0x94
    int128_t v13 = __asm_mulsd(__asm_movsd(*v6), __asm_movsd(*(int64_t *)(v8 + a6))); // 0xb2
    *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
    v7++;
    while (v7 != result) {
        // 0x5b
        v8 = 8 * v7;
        v9 = (int64_t *)(0x3e80 * v4 + a2 + v8);
        v10 = __asm_movsd(*v9);
        v11 = __asm_movsd(*(int64_t *)(v5 + a3));
        v12 = __asm_addsd(__asm_mulsd(v11, __asm_movsd(*(int64_t *)(v8 + a4))), v10);
        v13 = __asm_mulsd(__asm_movsd(*v6), __asm_movsd(*(int64_t *)(v8 + a6)));
        *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
        v7++;
    }
    // 0xe8
    v4++;
    int64_t v14 = 0; // 0x42
    while (v4 != result) {
        // 0x5b
        v5 = 8 * v4;
        v6 = (int64_t *)(v5 + a5);
        v7 = 0;
        v8 = 8 * v7;
        v9 = (int64_t *)(0x3e80 * v4 + a2 + v8);
        v10 = __asm_movsd(*v9);
        v11 = __asm_movsd(*(int64_t *)(v5 + a3));
        v12 = __asm_addsd(__asm_mulsd(v11, __asm_movsd(*(int64_t *)(v8 + a4))), v10);
        v13 = __asm_mulsd(__asm_movsd(*v6), __asm_movsd(*(int64_t *)(v8 + a6)));
        *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
        v7++;
        while (v7 != result) {
            // 0x5b
            v8 = 8 * v7;
            v9 = (int64_t *)(0x3e80 * v4 + a2 + v8);
            v10 = __asm_movsd(*v9);
            v11 = __asm_movsd(*(int64_t *)(v5 + a3));
            v12 = __asm_addsd(__asm_mulsd(v11, __asm_movsd(*(int64_t *)(v8 + a4))), v10);
            v13 = __asm_mulsd(__asm_movsd(*v6), __asm_movsd(*(int64_t *)(v8 + a6)));
            *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
            v7++;
        }
        // 0xe8
        v4++;
        v14 = 0;
    }
    int64_t v15 = 8 * v14; // 0x124
    int64_t * v16 = (int64_t *)(v15 + a8); // 0x124
    int64_t v17 = 0;
    int128_t v18 = __asm_movsd(*v16); // 0x124
    int128_t v19 = __asm_mulsd_3(__asm_movsd(v3), *(int64_t *)(v15 + a2 + 0x3e80 * v17)); // 0x144
    int128_t v20 = __asm_mulsd(v19, __asm_movsd(*(int64_t *)(8 * v17 + a9))); // 0x156
    int64_t v21 = __asm_movsd_1(__asm_addsd(v20, v18)); // 0x166
    *v16 = v21;
    v17++;
    while (v17 != result) {
        // 0x11c
        v18 = __asm_movsd(v21);
        v19 = __asm_mulsd_3(__asm_movsd(v3), *(int64_t *)(v15 + a2 + 0x3e80 * v17));
        v20 = __asm_mulsd(v19, __asm_movsd(*(int64_t *)(8 * v17 + a9)));
        v21 = __asm_movsd_1(__asm_addsd(v20, v18));
        *v16 = v21;
        v17++;
    }
    int64_t v22 = v14 + 1;
    v14 = v22;
    int64_t v23 = 0; // 0x103
    while (v22 != result) {
        // 0x11c
        v15 = 8 * v14;
        v16 = (int64_t *)(v15 + a8);
        v17 = 0;
        v18 = __asm_movsd(*v16);
        v19 = __asm_mulsd_3(__asm_movsd(v3), *(int64_t *)(v15 + a2 + 0x3e80 * v17));
        v20 = __asm_mulsd(v19, __asm_movsd(*(int64_t *)(8 * v17 + a9)));
        v21 = __asm_movsd_1(__asm_addsd(v20, v18));
        *v16 = v21;
        v17++;
        while (v17 != result) {
            // 0x11c
            v18 = __asm_movsd(v21);
            v19 = __asm_mulsd_3(__asm_movsd(v3), *(int64_t *)(v15 + a2 + 0x3e80 * v17));
            v20 = __asm_mulsd(v19, __asm_movsd(*(int64_t *)(8 * v17 + a9)));
            v21 = __asm_movsd_1(__asm_addsd(v20, v18));
            *v16 = v21;
            v17++;
        }
        // 0x17e
        v22 = v14 + 1;
        v14 = v22;
        v23 = 0;
    }
    int64_t v24 = 8 * v23; // 0x1a7
    int64_t * v25 = (int64_t *)(v24 + a8); // 0x1a7
    *v25 = __asm_movsd_1(__asm_addsd_4(__asm_movsd(*v25), *(int64_t *)(v24 + a10)));
    int64_t v26 = v23 + 1;
    v23 = v26;
    int64_t v27 = 0; // 0x199
    while (v26 != result) {
        // 0x19f
        v24 = 8 * v23;
        v25 = (int64_t *)(v24 + a8);
        *v25 = __asm_movsd_1(__asm_addsd_4(__asm_movsd(*v25), *(int64_t *)(v24 + a10)));
        v26 = v23 + 1;
        v23 = v26;
        v27 = 0;
    }
    int64_t * v28 = (int64_t *)(8 * v27 + a7); // 0x202
    int64_t v29 = 0;
    int128_t v30 = __asm_movsd(*v28); // 0x202
    int128_t v31 = __asm_movsd(v2); // 0x207
    int64_t v32 = 8 * v29; // 0x222
    int128_t v33 = __asm_mulsd_3(v31, *(int64_t *)(0x3e80 * v27 + a2 + v32)); // 0x222
    int64_t v34 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v33, __asm_movsd(*(int64_t *)(v32 + a8))), v30)); // 0x244
    *v28 = v34;
    v29++;
    while (v29 != result) {
        // 0x1fa
        v30 = __asm_movsd(v34);
        v31 = __asm_movsd(v2);
        v32 = 8 * v29;
        v33 = __asm_mulsd_3(v31, *(int64_t *)(0x3e80 * v27 + a2 + v32));
        v34 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v33, __asm_movsd(*(int64_t *)(v32 + a8))), v30));
        *v28 = v34;
        v29++;
    }
    int64_t v35 = v27 + 1;
    v27 = v35;
    while (v35 != result) {
        // 0x1fa
        v28 = (int64_t *)(8 * v27 + a7);
        v29 = 0;
        v30 = __asm_movsd(*v28);
        v31 = __asm_movsd(v2);
        v32 = 8 * v29;
        v33 = __asm_mulsd_3(v31, *(int64_t *)(0x3e80 * v27 + a2 + v32));
        v34 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v33, __asm_movsd(*(int64_t *)(v32 + a8))), v30));
        *v28 = v34;
        v29++;
        while (v29 != result) {
            // 0x1fa
            v30 = __asm_movsd(v34);
            v31 = __asm_movsd(v2);
            v32 = 8 * v29;
            v33 = __asm_mulsd_3(v31, *(int64_t *)(0x3e80 * v27 + a2 + v32));
            v34 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v33, __asm_movsd(*(int64_t *)(v32 + a8))), v30));
            *v28 = v34;
            v29++;
        }
        // 0x25c
        v35 = v27 + 1;
        v27 = v35;
    }
    // 0x26a
    return result;
}
