
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "ludcmp.h"
int64_t kernel_ludcmp(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a1 >> 32; // 0x4
    int32_t v2 = v1; // 0x21
    if (v2 > 0) {
        int64_t v3 = v1 & 0xffffffff;
        int64_t v4 = 0;
        int64_t v5 = 0x3e80 * v4 + a2;
        int64_t v6; // 0x0
        int64_t v7; // 0x0
        int64_t v8; // 0x0
        int64_t v9; // 0x0
        int64_t v10; // 0x0
        int64_t v11; // 0x0
        int64_t v12; // 0x0
        int64_t v13; // 0x58
        int128_t v14; // 0xdd
        int128_t v15; // 0x86
        int128_t v16; // 0xa1
        int128_t v17; // 0xa6
        int64_t v18; // 0xca
        int64_t v19; // 0x53
        int64_t * v20; // 0x53
        if (v4 != 0) {
            v8 = 0;
            v19 = 8 * v8;
            v20 = (int64_t *)(v19 + v5);
            v13 = __asm_movsd(__asm_movsd_1(*v20));
            v6 = v19 + a2;
            v7 = 0;
            v11 = v13;
            v12 = v13;
            if (v8 != 0) {
                v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                v17 = __asm_movsd_1(v11);
                v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                v9 = v7 + 1;
                v7 = v9;
                v11 = v18;
                v12 = v18;
                while (v9 != v8) {
                    // 0x70
                    v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                    v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                    v17 = __asm_movsd_1(v11);
                    v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                    v9 = v7 + 1;
                    v7 = v9;
                    v11 = v18;
                    v12 = v18;
                }
            }
            // 0xdd
            v14 = __asm_movsd_1(v12);
            *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
            v10 = v8 + 1;
            while (v10 != v4) {
                // 0x3d
                v8 = v10;
                v19 = 8 * v8;
                v20 = (int64_t *)(v19 + v5);
                v13 = __asm_movsd(__asm_movsd_1(*v20));
                v6 = v19 + a2;
                v7 = 0;
                v11 = v13;
                v12 = v13;
                if (v8 != 0) {
                    v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                    v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                    v17 = __asm_movsd_1(v11);
                    v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                    v9 = v7 + 1;
                    v7 = v9;
                    v11 = v18;
                    v12 = v18;
                    while (v9 != v8) {
                        // 0x70
                        v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                        v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                        v17 = __asm_movsd_1(v11);
                        v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                        v9 = v7 + 1;
                        v7 = v9;
                        v11 = v18;
                        v12 = v18;
                    }
                }
                // 0xdd
                v14 = __asm_movsd_1(v12);
                *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
                v10 = v8 + 1;
            }
        }
        int64_t v21 = v4;
        int64_t v22 = 8 * v21; // 0x14e
        int64_t * v23 = (int64_t *)(v22 + v5); // 0x14e
        int64_t v24 = __asm_movsd(__asm_movsd_1(*v23)); // 0x153
        int64_t v25 = v24; // 0x165
        int64_t v26; // 0x0
        int128_t v27; // 0x181
        int128_t v28; // 0x19c
        int128_t v29; // 0x1a1
        int64_t v30; // 0x1c5
        if (v4 != 0) {
            // 0x16b
            v26 = 0;
            v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
            v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
            v29 = __asm_movsd_1(v24);
            v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
            v26++;
            v25 = v30;
            while (v26 != v4) {
                // 0x16b
                v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                v29 = __asm_movsd_1(v30);
                v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                v26++;
                v25 = v30;
            }
        }
        // 0x1d8
        *v23 = __asm_movsd(__asm_movsd_1(v25));
        v21++;
        while (v21 != v3) {
            // 0x138
            v22 = 8 * v21;
            v23 = (int64_t *)(v22 + v5);
            v24 = __asm_movsd(__asm_movsd_1(*v23));
            v25 = v24;
            if (v4 != 0) {
                // 0x16b
                v26 = 0;
                v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                v29 = __asm_movsd_1(v24);
                v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                v26++;
                v25 = v30;
                while (v26 != v4) {
                    // 0x16b
                    v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                    v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                    v29 = __asm_movsd_1(v30);
                    v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                    v26++;
                    v25 = v30;
                }
            }
            // 0x1d8
            *v23 = __asm_movsd(__asm_movsd_1(v25));
            v21++;
        }
        int64_t v31 = v4 + 1;
        while (v31 != v3) {
            // 0x31
            v4 = v31;
            v5 = 0x3e80 * v4 + a2;
            if (v4 != 0) {
                v8 = 0;
                v19 = 8 * v8;
                v20 = (int64_t *)(v19 + v5);
                v13 = __asm_movsd(__asm_movsd_1(*v20));
                v6 = v19 + a2;
                v7 = 0;
                v11 = v13;
                v12 = v13;
                if (v8 != 0) {
                    v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                    v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                    v17 = __asm_movsd_1(v11);
                    v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                    v9 = v7 + 1;
                    v7 = v9;
                    v11 = v18;
                    v12 = v18;
                    while (v9 != v8) {
                        // 0x70
                        v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                        v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                        v17 = __asm_movsd_1(v11);
                        v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                        v9 = v7 + 1;
                        v7 = v9;
                        v11 = v18;
                        v12 = v18;
                    }
                }
                // 0xdd
                v14 = __asm_movsd_1(v12);
                *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
                v10 = v8 + 1;
                while (v10 != v4) {
                    // 0x3d
                    v8 = v10;
                    v19 = 8 * v8;
                    v20 = (int64_t *)(v19 + v5);
                    v13 = __asm_movsd(__asm_movsd_1(*v20));
                    v6 = v19 + a2;
                    v7 = 0;
                    v11 = v13;
                    v12 = v13;
                    if (v8 != 0) {
                        v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                        v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                        v17 = __asm_movsd_1(v11);
                        v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                        v9 = v7 + 1;
                        v7 = v9;
                        v11 = v18;
                        v12 = v18;
                        while (v9 != v8) {
                            // 0x70
                            v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                            v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                            v17 = __asm_movsd_1(v11);
                            v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                            v9 = v7 + 1;
                            v7 = v9;
                            v11 = v18;
                            v12 = v18;
                        }
                    }
                    // 0xdd
                    v14 = __asm_movsd_1(v12);
                    *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
                    v10 = v8 + 1;
                }
            }
            // 0x138
            v21 = v4;
            v22 = 8 * v21;
            v23 = (int64_t *)(v22 + v5);
            v24 = __asm_movsd(__asm_movsd_1(*v23));
            v25 = v24;
            if (v4 != 0) {
                // 0x16b
                v26 = 0;
                v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                v29 = __asm_movsd_1(v24);
                v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                v26++;
                v25 = v30;
                while (v26 != v4) {
                    // 0x16b
                    v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                    v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                    v29 = __asm_movsd_1(v30);
                    v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                    v26++;
                    v25 = v30;
                }
            }
            // 0x1d8
            *v23 = __asm_movsd(__asm_movsd_1(v25));
            v21++;
            while (v21 != v3) {
                // 0x138
                v22 = 8 * v21;
                v23 = (int64_t *)(v22 + v5);
                v24 = __asm_movsd(__asm_movsd_1(*v23));
                v25 = v24;
                if (v4 != 0) {
                    // 0x16b
                    v26 = 0;
                    v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                    v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                    v29 = __asm_movsd_1(v24);
                    v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                    v26++;
                    v25 = v30;
                    while (v26 != v4) {
                        // 0x16b
                        v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                        v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                        v29 = __asm_movsd_1(v30);
                        v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                        v26++;
                        v25 = v30;
                    }
                }
                // 0x1d8
                *v23 = __asm_movsd(__asm_movsd_1(v25));
                v21++;
            }
            // 0x20b
            v31 = v4 + 1;
        }
        int64_t v32 = 0;
        int64_t v33 = 8 * v32; // 0x234
        int64_t v34 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v33 + a3))); // 0x239
        int64_t v35 = v34; // 0x24b
        int64_t v36; // 0x0
        int64_t v37; // 0x267
        int128_t v38; // 0x267
        int128_t v39; // 0x274
        int128_t v40; // 0x279
        int64_t v41; // 0x29d
        if (v32 != 0) {
            // 0x251
            v36 = 0;
            v37 = 8 * v36;
            v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
            v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
            v40 = __asm_movsd_1(v34);
            v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
            v36++;
            v35 = v41;
            while (v36 != v32) {
                // 0x251
                v37 = 8 * v36;
                v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
                v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
                v40 = __asm_movsd_1(v41);
                v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
                v36++;
                v35 = v41;
            }
        }
        // 0x2b0
        *(int64_t *)(v33 + a5) = __asm_movsd(__asm_movsd_1(v35));
        int64_t v42 = v32 + 1;
        while (v42 != v3) {
            // 0x22c
            v32 = v42;
            v33 = 8 * v32;
            v34 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v33 + a3)));
            v35 = v34;
            if (v32 != 0) {
                // 0x251
                v36 = 0;
                v37 = 8 * v36;
                v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
                v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
                v40 = __asm_movsd_1(v34);
                v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
                v36++;
                v35 = v41;
                while (v36 != v32) {
                    // 0x251
                    v37 = 8 * v36;
                    v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
                    v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
                    v40 = __asm_movsd_1(v41);
                    v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
                    v36++;
                    v35 = v41;
                }
            }
            // 0x2b0
            *(int64_t *)(v33 + a5) = __asm_movsd(__asm_movsd_1(v35));
            v42 = v32 + 1;
        }
    }
    int64_t v43 = v1 + 0xffffffff;
    int32_t v44 = v43;
    if (v44 < 0) {
        // 0x3a4
        return v43 & 0xffffffff;
    }
    int64_t v45 = 0x100000000 * v43;
    int64_t v46 = v45 >> 29; // 0x2eb
    int64_t v47 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v46 + a5))); // 0x2f0
    int32_t v48 = v44 + 1;
    int64_t v49 = v47; // 0x304
    int32_t v50; // 0x0
    uint32_t v51; // 0x0
    int64_t v52; // 0x320
    int128_t v53; // 0x320
    int128_t v54; // 0x32d
    int128_t v55; // 0x332
    int64_t v56; // 0x356
    if (v48 < v2) {
        // 0x30a
        v51 = v48;
        v52 = 0x100000000 * (int64_t)v51 >> 29;
        v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
        v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
        v55 = __asm_movsd_1(v47);
        v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
        v50 = v51 + 1;
        v49 = v56;
        while (v51 != v44) {
            // 0x30a
            v51 = v50;
            v52 = 0x100000000 * (int64_t)v51 >> 29;
            v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
            v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
            v55 = __asm_movsd_1(v56);
            v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
            v50 = v51 + 1;
            v49 = v56;
        }
    }
    int128_t v57 = __asm_movsd_1(v49); // 0x369
    int64_t v58 = v45 >> 32;
    int64_t v59 = __asm_movsd(__asm_divsd(v57, *(int64_t *)(v46 + a2 + 0x3e80 * v58))); // 0x391
    *(int64_t *)(v46 + a4) = v59;
    int64_t v60 = v58 + 0xffffffff;
    int32_t v61 = v60;
    while (v61 >= 0) {
        // 0x2e3
        v45 = 0x100000000 * v60;
        v46 = v45 >> 29;
        v47 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v46 + a5)));
        v48 = v61 + 1;
        v49 = v47;
        if (v48 < v2) {
            // 0x30a
            v51 = v48;
            v52 = 0x100000000 * (int64_t)v51 >> 29;
            v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
            v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
            v55 = __asm_movsd_1(v47);
            v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
            v50 = v51 + 1;
            v49 = v56;
            while (v51 != v44) {
                // 0x30a
                v51 = v50;
                v52 = 0x100000000 * (int64_t)v51 >> 29;
                v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
                v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
                v55 = __asm_movsd_1(v56);
                v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
                v50 = v51 + 1;
                v49 = v56;
            }
        }
        // 0x369
        v57 = __asm_movsd_1(v49);
        v58 = v45 >> 32;
        v59 = __asm_movsd(__asm_divsd(v57, *(int64_t *)(v46 + a2 + 0x3e80 * v58)));
        *(int64_t *)(v46 + a4) = v59;
        v60 = v58 + 0xffffffff;
        v61 = v60;
    }
    // 0x3a4
    return v60 & 0xffffffff;
}
