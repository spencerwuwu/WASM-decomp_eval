
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "lu.h"
int64_t kernel_lu(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if ((int32_t)a1 < 1) {
        // 0x119
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x8
    int64_t v1 = 0;
    int64_t v2 = 0x3e80 * v1;
    int64_t v3 = v2 + a2;
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t * v7; // 0x44
    int128_t v8; // 0x44
    int64_t v9; // 0x55
    int64_t * v10; // 0x70
    int128_t v11; // 0x80
    int128_t v12; // 0x96
    int64_t v13; // 0x9f
    int64_t v14; // 0x0
    if (v1 != 0) {
        v6 = 0;
        v4 = 8 * v6;
        if (v6 == 0) {
            // 0x5d
            v5 = v4 + a2;
        } else {
            // 0x62
            v10 = (int64_t *)(v4 + v3);
            v14 = v4 + a2;
            v12 = __asm_movsd(*v10);
            v13 = 0;
            v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
            v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
            *v10 = __asm_movsd_1(v12);
            v13++;
            v5 = v14;
            while (v13 != v6) {
                // 0x80
                v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                *v10 = __asm_movsd_1(v12);
                v13++;
                v5 = v14;
            }
        }
        // 0x30
        v7 = (int64_t *)(v5 + v2);
        v8 = __asm_movsd(*v7);
        *v7 = __asm_movsd_1(__asm_divsd_3(v8, *(int64_t *)(v5 + 0x3e80 * v6)));
        v9 = v6 + 1;
        while (v9 != v1) {
            // 0x5d
            v6 = v9;
            v4 = 8 * v6;
            if (v6 == 0) {
                // 0x5d
                v5 = v4 + a2;
            } else {
                // 0x62
                v10 = (int64_t *)(v4 + v3);
                v14 = v4 + a2;
                v12 = __asm_movsd(*v10);
                v13 = 0;
                v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                *v10 = __asm_movsd_1(v12);
                v13++;
                v5 = v14;
                while (v13 != v6) {
                    // 0x80
                    v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                    v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                    *v10 = __asm_movsd_1(v12);
                    v13++;
                    v5 = v14;
                }
            }
            // 0x30
            v7 = (int64_t *)(v5 + v2);
            v8 = __asm_movsd(*v7);
            *v7 = __asm_movsd_1(__asm_divsd_3(v8, *(int64_t *)(v5 + 0x3e80 * v6)));
            v9 = v6 + 1;
        }
    }
    int64_t v15 = v1;
    int128_t v16; // 0xf0
    int128_t v17; // 0x106
    int64_t v18; // 0x10f
    int64_t v19; // 0xdb
    int64_t * v20; // 0xdf
    if (v1 != 0) {
        // 0xd1
        v19 = 8 * v15;
        v20 = (int64_t *)(v19 + v3);
        v17 = __asm_movsd(*v20);
        v18 = 0;
        v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
        v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
        *v20 = __asm_movsd_1(v17);
        v18++;
        while (v18 != v1) {
            // 0xf0
            v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
            v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
            *v20 = __asm_movsd_1(v17);
            v18++;
        }
    }
    int64_t v21 = v15 + 1; // 0xc0
    while (v21 != result2) {
        // 0xcc
        v15 = v21;
        if (v1 != 0) {
            // 0xd1
            v19 = 8 * v15;
            v20 = (int64_t *)(v19 + v3);
            v17 = __asm_movsd(*v20);
            v18 = 0;
            v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
            v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
            *v20 = __asm_movsd_1(v17);
            v18++;
            while (v18 != v1) {
                // 0xf0
                v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
                v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
                *v20 = __asm_movsd_1(v17);
                v18++;
            }
        }
        // 0xc0
        v21 = v15 + 1;
    }
    int64_t v22 = v1 + 1; // 0x10
    while (v22 != result2) {
        // 0x1c
        v1 = v22;
        v2 = 0x3e80 * v1;
        v3 = v2 + a2;
        if (v1 != 0) {
            v6 = 0;
            v4 = 8 * v6;
            if (v6 == 0) {
                // 0x5d
                v5 = v4 + a2;
            } else {
                // 0x62
                v10 = (int64_t *)(v4 + v3);
                v14 = v4 + a2;
                v12 = __asm_movsd(*v10);
                v13 = 0;
                v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                *v10 = __asm_movsd_1(v12);
                v13++;
                v5 = v14;
                while (v13 != v6) {
                    // 0x80
                    v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                    v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                    *v10 = __asm_movsd_1(v12);
                    v13++;
                    v5 = v14;
                }
            }
            // 0x30
            v7 = (int64_t *)(v5 + v2);
            v8 = __asm_movsd(*v7);
            *v7 = __asm_movsd_1(__asm_divsd_3(v8, *(int64_t *)(v5 + 0x3e80 * v6)));
            v9 = v6 + 1;
            while (v9 != v1) {
                // 0x5d
                v6 = v9;
                v4 = 8 * v6;
                if (v6 == 0) {
                    // 0x5d
                    v5 = v4 + a2;
                } else {
                    // 0x62
                    v10 = (int64_t *)(v4 + v3);
                    v14 = v4 + a2;
                    v12 = __asm_movsd(*v10);
                    v13 = 0;
                    v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                    v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                    *v10 = __asm_movsd_1(v12);
                    v13++;
                    v5 = v14;
                    while (v13 != v6) {
                        // 0x80
                        v11 = __asm_movsd(*(int64_t *)(8 * v13 + v3));
                        v12 = __asm_subsd(v12, __asm_mulsd(v11, *(int64_t *)(0x3e80 * v13 + v14)));
                        *v10 = __asm_movsd_1(v12);
                        v13++;
                        v5 = v14;
                    }
                }
                // 0x30
                v7 = (int64_t *)(v5 + v2);
                v8 = __asm_movsd(*v7);
                *v7 = __asm_movsd_1(__asm_divsd_3(v8, *(int64_t *)(v5 + 0x3e80 * v6)));
                v9 = v6 + 1;
            }
        }
        // 0xcc
        v15 = v1;
        if (v1 != 0) {
            // 0xd1
            v19 = 8 * v15;
            v20 = (int64_t *)(v19 + v3);
            v17 = __asm_movsd(*v20);
            v18 = 0;
            v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
            v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
            *v20 = __asm_movsd_1(v17);
            v18++;
            while (v18 != v1) {
                // 0xf0
                v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
                v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
                *v20 = __asm_movsd_1(v17);
                v18++;
            }
        }
        // 0xc0
        v21 = v15 + 1;
        while (v21 != result2) {
            // 0xcc
            v15 = v21;
            if (v1 != 0) {
                // 0xd1
                v19 = 8 * v15;
                v20 = (int64_t *)(v19 + v3);
                v17 = __asm_movsd(*v20);
                v18 = 0;
                v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
                v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
                *v20 = __asm_movsd_1(v17);
                v18++;
                while (v18 != v1) {
                    // 0xf0
                    v16 = __asm_movsd(*(int64_t *)(8 * v18 + v3));
                    v17 = __asm_subsd(v17, __asm_mulsd(v16, *(int64_t *)(v19 + a2 + 0x3e80 * v18)));
                    *v20 = __asm_movsd_1(v17);
                    v18++;
                }
            }
            // 0xc0
            v21 = v15 + 1;
        }
        // 0x10
        v22 = v1 + 1;
    }
    // 0x119
    return result2;
}
