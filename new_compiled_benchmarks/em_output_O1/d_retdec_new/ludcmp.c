
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "ludcmp.h"
int64_t kernel_ludcmp(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = a1 & 0xffffffff; // 0x3
    int32_t v1 = a1; // 0x5
    if (v1 < 1) {
        // 0x1d4
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = 0x3e80 * v2 + a2;
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x59
    int128_t v8; // 0x80
    int128_t v9; // 0x96
    int64_t v10; // 0x9a
    int64_t v11; // 0x6b
    int64_t * v12; // 0x6b
    int128_t v13; // 0x6b
    int128_t v14; // 0x0
    int128_t v15; // 0x0
    if (v2 != 0) {
        v5 = 0;
        v11 = 8 * v5;
        v12 = (int64_t *)(v11 + v3);
        v13 = __asm_movsd(*v12);
        v4 = v11 + a2;
        v14 = v13;
        v15 = v13;
        v6 = 0;
        if (v5 != 0) {
            v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
            v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
            v10 = v6 + 1;
            v14 = v9;
            v15 = v9;
            v6 = v10;
            while (v10 != v5) {
                // 0x80
                v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                v10 = v6 + 1;
                v14 = v9;
                v15 = v9;
                v6 = v10;
            }
        }
        // 0x40
        *v12 = __asm_movsd_1(__asm_divsd_4(v14, *(int64_t *)(v4 + 0x3e80 * v5)));
        v7 = v5 + 1;
        while (v7 != v2) {
            // 0x61
            v5 = v7;
            v11 = 8 * v5;
            v12 = (int64_t *)(v11 + v3);
            v13 = __asm_movsd(*v12);
            v4 = v11 + a2;
            v14 = v13;
            v15 = v13;
            v6 = 0;
            if (v5 != 0) {
                v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                v10 = v6 + 1;
                v14 = v9;
                v15 = v9;
                v6 = v10;
                while (v10 != v5) {
                    // 0x80
                    v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                    v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                    v10 = v6 + 1;
                    v14 = v9;
                    v15 = v9;
                    v6 = v10;
                }
            }
            // 0x40
            *v12 = __asm_movsd_1(__asm_divsd_4(v14, *(int64_t *)(v4 + 0x3e80 * v5)));
            v7 = v5 + 1;
        }
    }
    int64_t v16 = v2; // 0xc9
    int64_t v17 = 8 * v16; // 0xdf
    int64_t * v18 = (int64_t *)(v17 + v3); // 0xdf
    int128_t v19 = __asm_movsd(*v18); // 0xdf
    int128_t v20 = v19; // 0xe8
    int128_t v21; // 0xf0
    int128_t v22; // 0x106
    int64_t v23; // 0x10a
    if (v2 != 0) {
        // 0xf0
        v22 = v19;
        v23 = 0;
        v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
        v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
        v23++;
        v20 = v22;
        while (v23 != v2) {
            // 0xf0
            v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
            v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
            v23++;
            v20 = v22;
        }
    }
    // 0xc0
    *v18 = __asm_movsd_1(v20);
    v16++;
    while (v16 != result) {
        // 0xd5
        v17 = 8 * v16;
        v18 = (int64_t *)(v17 + v3);
        v19 = __asm_movsd(*v18);
        v20 = v19;
        if (v2 != 0) {
            // 0xf0
            v22 = v19;
            v23 = 0;
            v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
            v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
            v23++;
            v20 = v22;
            while (v23 != v2) {
                // 0xf0
                v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
                v23++;
                v20 = v22;
            }
        }
        // 0xc0
        *v18 = __asm_movsd_1(v20);
        v16++;
    }
    int64_t v24 = v2 + 1; // 0x20
    while (v24 != result) {
        // 0x2c
        v2 = v24;
        v3 = 0x3e80 * v2 + a2;
        if (v2 != 0) {
            v5 = 0;
            v11 = 8 * v5;
            v12 = (int64_t *)(v11 + v3);
            v13 = __asm_movsd(*v12);
            v4 = v11 + a2;
            v14 = v13;
            v15 = v13;
            v6 = 0;
            if (v5 != 0) {
                v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                v10 = v6 + 1;
                v14 = v9;
                v15 = v9;
                v6 = v10;
                while (v10 != v5) {
                    // 0x80
                    v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                    v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                    v10 = v6 + 1;
                    v14 = v9;
                    v15 = v9;
                    v6 = v10;
                }
            }
            // 0x40
            *v12 = __asm_movsd_1(__asm_divsd_4(v14, *(int64_t *)(v4 + 0x3e80 * v5)));
            v7 = v5 + 1;
            while (v7 != v2) {
                // 0x61
                v5 = v7;
                v11 = 8 * v5;
                v12 = (int64_t *)(v11 + v3);
                v13 = __asm_movsd(*v12);
                v4 = v11 + a2;
                v14 = v13;
                v15 = v13;
                v6 = 0;
                if (v5 != 0) {
                    v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                    v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                    v10 = v6 + 1;
                    v14 = v9;
                    v15 = v9;
                    v6 = v10;
                    while (v10 != v5) {
                        // 0x80
                        v8 = __asm_movsd(*(int64_t *)(8 * v6 + v3));
                        v9 = __asm_subsd(v15, __asm_mulsd_2(v8, *(int64_t *)(0x3e80 * v6 + v4)));
                        v10 = v6 + 1;
                        v14 = v9;
                        v15 = v9;
                        v6 = v10;
                    }
                }
                // 0x40
                *v12 = __asm_movsd_1(__asm_divsd_4(v14, *(int64_t *)(v4 + 0x3e80 * v5)));
                v7 = v5 + 1;
            }
        }
        // 0xd5
        v16 = v2;
        v17 = 8 * v16;
        v18 = (int64_t *)(v17 + v3);
        v19 = __asm_movsd(*v18);
        v20 = v19;
        if (v2 != 0) {
            // 0xf0
            v22 = v19;
            v23 = 0;
            v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
            v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
            v23++;
            v20 = v22;
            while (v23 != v2) {
                // 0xf0
                v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
                v23++;
                v20 = v22;
            }
        }
        // 0xc0
        *v18 = __asm_movsd_1(v20);
        v16++;
        while (v16 != result) {
            // 0xd5
            v17 = 8 * v16;
            v18 = (int64_t *)(v17 + v3);
            v19 = __asm_movsd(*v18);
            v20 = v19;
            if (v2 != 0) {
                // 0xf0
                v22 = v19;
                v23 = 0;
                v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
                v23++;
                v20 = v22;
                while (v23 != v2) {
                    // 0xf0
                    v21 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                    v22 = __asm_subsd(v22, __asm_mulsd_2(v21, *(int64_t *)(v17 + a2 + 0x3e80 * v23)));
                    v23++;
                    v20 = v22;
                }
            }
            // 0xc0
            *v18 = __asm_movsd_1(v20);
            v16++;
        }
        // 0x20
        v24 = v2 + 1;
    }
    int64_t v25 = 0;
    int64_t v26 = 8 * v25; // 0x12e
    int128_t v27 = __asm_movsd(*(int64_t *)(v26 + a3)); // 0x12e
    int128_t v28 = v27; // 0x137
    int64_t v29; // 0x14a
    int128_t v30; // 0x14a
    int128_t v31; // 0x156
    int64_t v32; // 0x15a
    if (v25 != 0) {
        // 0x140
        v31 = v27;
        v32 = 0;
        v29 = 8 * v32;
        v30 = __asm_movsd(*(int64_t *)(0x3e80 * v25 + a2 + v29));
        v31 = __asm_subsd(v31, __asm_mulsd_2(v30, *(int64_t *)(v29 + a5)));
        v32++;
        v28 = v31;
        while (v32 != v25) {
            // 0x140
            v29 = 8 * v32;
            v30 = __asm_movsd(*(int64_t *)(0x3e80 * v25 + a2 + v29));
            v31 = __asm_subsd(v31, __asm_mulsd_2(v30, *(int64_t *)(v29 + a5)));
            v32++;
            v28 = v31;
        }
    }
    // 0x120
    *(int64_t *)(v26 + a5) = __asm_movsd_1(v28);
    int64_t v33 = v25 + 1; // 0x126
    while (v33 != result) {
        // 0x12e
        v25 = v33;
        v26 = 8 * v25;
        v27 = __asm_movsd(*(int64_t *)(v26 + a3));
        v28 = v27;
        if (v25 != 0) {
            // 0x140
            v31 = v27;
            v32 = 0;
            v29 = 8 * v32;
            v30 = __asm_movsd(*(int64_t *)(0x3e80 * v25 + a2 + v29));
            v31 = __asm_subsd(v31, __asm_mulsd_2(v30, *(int64_t *)(v29 + a5)));
            v32++;
            v28 = v31;
            while (v32 != v25) {
                // 0x140
                v29 = 8 * v32;
                v30 = __asm_movsd(*(int64_t *)(0x3e80 * v25 + a2 + v29));
                v31 = __asm_subsd(v31, __asm_mulsd_2(v30, *(int64_t *)(v29 + a5)));
                v32++;
                v28 = v31;
            }
        }
        // 0x120
        *(int64_t *)(v26 + a5) = __asm_movsd_1(v28);
        v33 = v25 + 1;
    }
    int64_t v34 = 0x100000000 * a1 >> 32; // 0x168
    int64_t v35 = result;
    int64_t v36 = v34 - 1; // 0x196
    int64_t v37 = v36 & 0xffffffff; // 0x199
    int64_t v38 = 8 * v37; // 0x19c
    int128_t v39 = __asm_movsd(*(int64_t *)(v38 + a5)); // 0x19c
    int64_t v40 = 0x3e80 * v37 + a2;
    int128_t v41 = v39; // 0x1a5
    int128_t v42 = v39; // 0x1a5
    int64_t v43; // 0x0
    int64_t v44; // 0x1ba
    int128_t v45; // 0x1ba
    int128_t v46; // 0x1c6
    int64_t v47; // 0x1ca
    if (v35 < v34) {
        v44 = 8 * v34;
        v45 = __asm_movsd(*(int64_t *)(v44 + v40));
        v46 = __asm_subsd(v42, __asm_mulsd_2(v45, *(int64_t *)(v44 + a4)));
        v47 = v34 + 1;
        v41 = v46;
        v42 = v46;
        v43 = v47;
        while ((int32_t)v47 != v1) {
            // 0x1b0
            v44 = 8 * v43;
            v45 = __asm_movsd(*(int64_t *)(v44 + v40));
            v46 = __asm_subsd(v42, __asm_mulsd_2(v45, *(int64_t *)(v44 + a4)));
            v47 = v43 + 1;
            v41 = v46;
            v42 = v46;
            v43 = v47;
        }
    }
    int64_t v48 = __asm_movsd_1(__asm_divsd_4(v41, *(int64_t *)(v40 + v38))); // 0x180
    *(int64_t *)(v38 + a4) = v48;
    int64_t result2 = v35 - 1; // 0x186
    while (v35 >= 2) {
        int64_t v49 = v36;
        v35 = result2;
        v36 = v49 - 1;
        v37 = v36 & 0xffffffff;
        v38 = 8 * v37;
        v39 = __asm_movsd(*(int64_t *)(v38 + a5));
        v40 = 0x3e80 * v37 + a2;
        v41 = v39;
        v42 = v39;
        v43 = v49;
        if (v35 < v34) {
            v44 = 8 * v43;
            v45 = __asm_movsd(*(int64_t *)(v44 + v40));
            v46 = __asm_subsd(v42, __asm_mulsd_2(v45, *(int64_t *)(v44 + a4)));
            v47 = v43 + 1;
            v41 = v46;
            v42 = v46;
            v43 = v47;
            while ((int32_t)v47 != v1) {
                // 0x1b0
                v44 = 8 * v43;
                v45 = __asm_movsd(*(int64_t *)(v44 + v40));
                v46 = __asm_subsd(v42, __asm_mulsd_2(v45, *(int64_t *)(v44 + a4)));
                v47 = v43 + 1;
                v41 = v46;
                v42 = v46;
                v43 = v47;
            }
        }
        // 0x170
        v48 = __asm_movsd_1(__asm_divsd_4(v41, *(int64_t *)(v40 + v38)));
        *(int64_t *)(v38 + a4) = v48;
        result2 = v35 - 1;
    }
    // 0x1d4
    return result2;
}
