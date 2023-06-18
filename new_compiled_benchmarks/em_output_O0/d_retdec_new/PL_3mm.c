
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "PL_3mm.h"
void kernel_3mm(uint32_t ni, uint32_t nj, uint32_t nk, uint32_t nl, uint32_t nm, float64_t (*E)[1], float64_t (*A)[1], float64_t (*B)[1], float64_t (*F)[1], float64_t (*C)[1], float64_t (*D)[1], float64_t (*G)[1]) {
    int64_t v1 = (int64_t)E;
    int128_t v2; // 0x380
    if (ni > 0) {
        int64_t v3 = 0;
        int128_t v4; // 0x380
        int128_t v5 = v4; // 0x3d0
        int64_t v6; // 0x380
        int64_t v7; // 0x380
        int128_t v8; // 0x3ec
        int64_t v9; // 0x3ef
        int64_t v10; // 0x3ef
        int64_t * v11; // 0x3ef
        int128_t v12; // 0x41d
        int128_t v13; // 0x438
        int128_t v14; // 0x45c
        int64_t v15; // 0x380
        int128_t v16; // 0x380
        int128_t v17; // 0x380
        int128_t v18; // 0x380
        if (nj > 0) {
            // 0x3d6
            v15 = 0x1f40 * v3 + (int64_t)A;
            v7 = 0;
            v16 = v4;
            v8 = __asm_xorps(v16, v16);
            v9 = __asm_movsd_1(v8);
            v10 = 8 * v7;
            v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
            *v11 = v9;
            v17 = v8;
            if (nk > 0) {
                // 0x407
                v6 = 0;
                v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                *v11 = __asm_movsd_1(v14);
                v6++;
                v17 = v14;
                while (v6 != (int64_t)nk) {
                    // 0x407
                    v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                    v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                    v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                    *v11 = __asm_movsd_1(v14);
                    v6++;
                    v17 = v14;
                }
            }
            // 0x478
            v18 = v17;
            v7++;
            v5 = v18;
            while (v7 != (int64_t)nj) {
                // 0x3d6
                v16 = v18;
                v8 = __asm_xorps(v16, v16);
                v9 = __asm_movsd_1(v8);
                v10 = 8 * v7;
                v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
                *v11 = v9;
                v17 = v8;
                if (nk > 0) {
                    // 0x407
                    v6 = 0;
                    v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                    v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                    v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                    *v11 = __asm_movsd_1(v14);
                    v6++;
                    v17 = v14;
                    while (v6 != (int64_t)nk) {
                        // 0x407
                        v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                        v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                        v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                        *v11 = __asm_movsd_1(v14);
                        v6++;
                        v17 = v14;
                    }
                }
                // 0x478
                v18 = v17;
                v7++;
                v5 = v18;
            }
        }
        int64_t v19 = v3 + 1;
        v2 = v5;
        while (v19 != (int64_t)ni) {
            int128_t v20 = v5;
            v3 = v19;
            v5 = v20;
            if (nj > 0) {
                // 0x3d6
                v15 = 0x1f40 * v3 + (int64_t)A;
                v7 = 0;
                v16 = v20;
                v8 = __asm_xorps(v16, v16);
                v9 = __asm_movsd_1(v8);
                v10 = 8 * v7;
                v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
                *v11 = v9;
                v17 = v8;
                if (nk > 0) {
                    // 0x407
                    v6 = 0;
                    v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                    v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                    v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                    *v11 = __asm_movsd_1(v14);
                    v6++;
                    v17 = v14;
                    while (v6 != (int64_t)nk) {
                        // 0x407
                        v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                        v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                        v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                        *v11 = __asm_movsd_1(v14);
                        v6++;
                        v17 = v14;
                    }
                }
                // 0x478
                v18 = v17;
                v7++;
                v5 = v18;
                while (v7 != (int64_t)nj) {
                    // 0x3d6
                    v16 = v18;
                    v8 = __asm_xorps(v16, v16);
                    v9 = __asm_movsd_1(v8);
                    v10 = 8 * v7;
                    v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
                    *v11 = v9;
                    v17 = v8;
                    if (nk > 0) {
                        // 0x407
                        v6 = 0;
                        v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                        v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                        v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                        *v11 = __asm_movsd_1(v14);
                        v6++;
                        v17 = v14;
                        while (v6 != (int64_t)nk) {
                            // 0x407
                            v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                            v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                            v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                            *v11 = __asm_movsd_1(v14);
                            v6++;
                            v17 = v14;
                        }
                    }
                    // 0x478
                    v18 = v17;
                    v7++;
                    v5 = v18;
                }
            }
            // 0x48b
            v19 = v3 + 1;
            v2 = v5;
        }
    }
    int128_t v21 = v2; // 0x4a6
    if (nj > 0) {
        int64_t v22 = 0;
        int128_t v23 = v2; // 0x4b9
        int64_t v24; // 0x380
        int64_t v25; // 0x380
        int64_t v26; // 0x380
        int128_t v27; // 0x4d5
        int64_t v28; // 0x4d8
        int64_t v29; // 0x4d8
        int64_t * v30; // 0x4d8
        int128_t v31; // 0x506
        int128_t v32; // 0x521
        int128_t v33; // 0x545
        int128_t v34; // 0x380
        int128_t v35; // 0x380
        int128_t v36; // 0x380
        if (nl > 0) {
            // 0x4bf
            v26 = 0x2580 * v22 + (int64_t)C;
            v25 = 0;
            v34 = v2;
            v27 = __asm_xorps(v34, v34);
            v28 = __asm_movsd_1(v27);
            v29 = 8 * v25;
            v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
            *v30 = v28;
            v35 = v27;
            if (nm > 0) {
                // 0x4f0
                v24 = 0;
                v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                *v30 = __asm_movsd_1(v33);
                v24++;
                v35 = v33;
                while (v24 != (int64_t)nm) {
                    // 0x4f0
                    v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                    v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                    *v30 = __asm_movsd_1(v33);
                    v24++;
                    v35 = v33;
                }
            }
            // 0x561
            v36 = v35;
            v25++;
            v23 = v36;
            while (v25 != (int64_t)nl) {
                // 0x4bf
                v34 = v36;
                v27 = __asm_xorps(v34, v34);
                v28 = __asm_movsd_1(v27);
                v29 = 8 * v25;
                v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
                *v30 = v28;
                v35 = v27;
                if (nm > 0) {
                    // 0x4f0
                    v24 = 0;
                    v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                    v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                    *v30 = __asm_movsd_1(v33);
                    v24++;
                    v35 = v33;
                    while (v24 != (int64_t)nm) {
                        // 0x4f0
                        v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                        v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                        *v30 = __asm_movsd_1(v33);
                        v24++;
                        v35 = v33;
                    }
                }
                // 0x561
                v36 = v35;
                v25++;
                v23 = v36;
            }
        }
        int128_t v37 = v23;
        int64_t v38 = v22 + 1;
        v21 = v37;
        while (v38 != (int64_t)nj) {
            int128_t v39 = v37;
            v22 = v38;
            v23 = v39;
            if (nl > 0) {
                // 0x4bf
                v26 = 0x2580 * v22 + (int64_t)C;
                v25 = 0;
                v34 = v39;
                v27 = __asm_xorps(v34, v34);
                v28 = __asm_movsd_1(v27);
                v29 = 8 * v25;
                v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
                *v30 = v28;
                v35 = v27;
                if (nm > 0) {
                    // 0x4f0
                    v24 = 0;
                    v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                    v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                    *v30 = __asm_movsd_1(v33);
                    v24++;
                    v35 = v33;
                    while (v24 != (int64_t)nm) {
                        // 0x4f0
                        v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                        v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                        *v30 = __asm_movsd_1(v33);
                        v24++;
                        v35 = v33;
                    }
                }
                // 0x561
                v36 = v35;
                v25++;
                v23 = v36;
                while (v25 != (int64_t)nl) {
                    // 0x4bf
                    v34 = v36;
                    v27 = __asm_xorps(v34, v34);
                    v28 = __asm_movsd_1(v27);
                    v29 = 8 * v25;
                    v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
                    *v30 = v28;
                    v35 = v27;
                    if (nm > 0) {
                        // 0x4f0
                        v24 = 0;
                        v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                        v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                        *v30 = __asm_movsd_1(v33);
                        v24++;
                        v35 = v33;
                        while (v24 != (int64_t)nm) {
                            // 0x4f0
                            v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                            v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                            v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                            *v30 = __asm_movsd_1(v33);
                            v24++;
                            v35 = v33;
                        }
                    }
                    // 0x561
                    v36 = v35;
                    v25++;
                    v23 = v36;
                }
            }
            // 0x574
            v37 = v23;
            v38 = v22 + 1;
            v21 = v37;
        }
    }
    if (ni <= 0) {
        // 0x66b
        return;
    }
    int64_t v40 = 0;
    int128_t v41 = v21; // 0x5a2
    int64_t v42; // 0x380
    int64_t v43; // 0x380
    int64_t v44; // 0x380
    int128_t v45; // 0x5be
    int64_t v46; // 0x5c1
    int64_t v47; // 0x5c1
    int64_t * v48; // 0x5c1
    int128_t v49; // 0x5ef
    int128_t v50; // 0x60a
    int128_t v51; // 0x62e
    int128_t v52; // 0x380
    int128_t v53; // 0x380
    int128_t v54; // 0x380
    if (nl > 0) {
        // 0x5a8
        v44 = 0x1c20 * v40 + (0x100000000 * v1 >> 32);
        v43 = 0;
        v52 = v21;
        v45 = __asm_xorps(v52, v52);
        v46 = __asm_movsd_1(v45);
        v47 = 8 * v43;
        v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
        *v48 = v46;
        v53 = v45;
        if (nj > 0) {
            // 0x5d9
            v42 = 0;
            v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
            v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
            v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
            *v48 = __asm_movsd_1(v51);
            v42++;
            v53 = v51;
            while (v42 != (int64_t)nj) {
                // 0x5d9
                v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                *v48 = __asm_movsd_1(v51);
                v42++;
                v53 = v51;
            }
        }
        // 0x64a
        v54 = v53;
        v43++;
        v41 = v54;
        while (v43 != (int64_t)nl) {
            // 0x5a8
            v52 = v54;
            v45 = __asm_xorps(v52, v52);
            v46 = __asm_movsd_1(v45);
            v47 = 8 * v43;
            v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
            *v48 = v46;
            v53 = v45;
            if (nj > 0) {
                // 0x5d9
                v42 = 0;
                v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                *v48 = __asm_movsd_1(v51);
                v42++;
                v53 = v51;
                while (v42 != (int64_t)nj) {
                    // 0x5d9
                    v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                    v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                    v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                    *v48 = __asm_movsd_1(v51);
                    v42++;
                    v53 = v51;
                }
            }
            // 0x64a
            v54 = v53;
            v43++;
            v41 = v54;
        }
    }
    int64_t v55 = v40 + 1;
    while (v55 != (int64_t)ni) {
        int128_t v56 = v41;
        v40 = v55;
        v41 = v56;
        if (nl > 0) {
            // 0x5a8
            v44 = 0x1c20 * v40 + (0x100000000 * v1 >> 32);
            v43 = 0;
            v52 = v56;
            v45 = __asm_xorps(v52, v52);
            v46 = __asm_movsd_1(v45);
            v47 = 8 * v43;
            v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
            *v48 = v46;
            v53 = v45;
            if (nj > 0) {
                // 0x5d9
                v42 = 0;
                v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                *v48 = __asm_movsd_1(v51);
                v42++;
                v53 = v51;
                while (v42 != (int64_t)nj) {
                    // 0x5d9
                    v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                    v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                    v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                    *v48 = __asm_movsd_1(v51);
                    v42++;
                    v53 = v51;
                }
            }
            // 0x64a
            v54 = v53;
            v43++;
            v41 = v54;
            while (v43 != (int64_t)nl) {
                // 0x5a8
                v52 = v54;
                v45 = __asm_xorps(v52, v52);
                v46 = __asm_movsd_1(v45);
                v47 = 8 * v43;
                v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
                *v48 = v46;
                v53 = v45;
                if (nj > 0) {
                    // 0x5d9
                    v42 = 0;
                    v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                    v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                    v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                    *v48 = __asm_movsd_1(v51);
                    v42++;
                    v53 = v51;
                    while (v42 != (int64_t)nj) {
                        // 0x5d9
                        v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                        v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                        v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                        *v48 = __asm_movsd_1(v51);
                        v42++;
                        v53 = v51;
                    }
                }
                // 0x64a
                v54 = v53;
                v43++;
                v41 = v54;
            }
        }
        // 0x65d
        v55 = v40 + 1;
    }
}
