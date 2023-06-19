
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "ludcmp.h"
int64_t kernel_ludcmp(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a1; // 0x9
    if (v1 < 1) {
        // 0x357
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x1b
    int64_t v2 = 0; // 0x20
    int64_t v3; // 0x0
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t * v7; // 0x15f
    int128_t v8; // 0x0
    int128_t v9; // 0x0
    while (true) {
        int64_t v10 = v2;
        v3 = 0x3e80 * v10 + a2;
        if (v10 != 0) {
            int64_t v11 = 0;
            int64_t v12 = 8 * v11; // 0x7e
            int64_t * v13 = (int64_t *)(v12 + v3); // 0x7e
            int128_t v14 = __asm_movsd(*v13); // 0x7e
            int128_t v15 = v14; // 0x87
            int64_t v16; // 0x0
            int64_t v17; // 0x0
            int128_t v18; // 0xb0
            int128_t v19; // 0xc7
            int64_t v20; // 0xce
            int128_t v21; // 0xd2
            int128_t v22; // 0xe9
            int64_t v23; // 0xf1
            int128_t v24; // 0x104
            int128_t v25; // 0x114
            int128_t v26; // 0x0
            int128_t v27; // 0x0
            if (v11 != 0) {
                // 0x89
                v26 = v14;
                v16 = 0;
                if (v11 != 1) {
                    // 0xa0
                    v17 = v12 + a2;
                    v23 = 0;
                    v18 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                    v19 = __asm_subsd(v14, __asm_mulsd_3(v18, *(int64_t *)(0x3e80 * v23 + v17)));
                    v20 = v23 | 1;
                    v21 = __asm_movsd(*(int64_t *)(8 * v20 + v3));
                    v22 = __asm_subsd(v19, __asm_mulsd_3(v21, *(int64_t *)(0x3e80 * v20 + v17)));
                    v23 += 2;
                    v26 = v22;
                    v16 = v23;
                    while (v23 != (v11 & 0x7ffffffffffffffe)) {
                        // 0xb0
                        v18 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                        v19 = __asm_subsd(v22, __asm_mulsd_3(v18, *(int64_t *)(0x3e80 * v23 + v17)));
                        v20 = v23 | 1;
                        v21 = __asm_movsd(*(int64_t *)(8 * v20 + v3));
                        v22 = __asm_subsd(v19, __asm_mulsd_3(v21, *(int64_t *)(0x3e80 * v20 + v17)));
                        v23 += 2;
                        v26 = v22;
                        v16 = v23;
                    }
                }
                // 0xfa
                v27 = v26;
                v15 = v27;
                if ((v11 & 1) != 0) {
                    // 0x104
                    v24 = __asm_movsd(*(int64_t *)(8 * v16 + v3));
                    v25 = __asm_mulsd_3(v24, *(int64_t *)(v12 + a2 + 0x3e80 * v16));
                    v15 = __asm_subsd(v27, v25);
                }
            }
            int64_t v28 = __asm_movsd_1(__asm_divsd_8(v15, *(int64_t *)(v12 + a2 + 0x3e80 * v11))); // 0x64
            *v13 = v28;
            int64_t v29 = v11 + 1; // 0x68
            while (v29 != v10) {
                // 0x74
                v11 = v29;
                v12 = 8 * v11;
                v13 = (int64_t *)(v12 + v3);
                v14 = __asm_movsd(*v13);
                v15 = v14;
                if (v11 != 0) {
                    // 0x89
                    v26 = v14;
                    v16 = 0;
                    if (v11 != 1) {
                        // 0xa0
                        v17 = v12 + a2;
                        v23 = 0;
                        v18 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                        v19 = __asm_subsd(v14, __asm_mulsd_3(v18, *(int64_t *)(0x3e80 * v23 + v17)));
                        v20 = v23 | 1;
                        v21 = __asm_movsd(*(int64_t *)(8 * v20 + v3));
                        v22 = __asm_subsd(v19, __asm_mulsd_3(v21, *(int64_t *)(0x3e80 * v20 + v17)));
                        v23 += 2;
                        v26 = v22;
                        v16 = v23;
                        while (v23 != (v11 & 0x7ffffffffffffffe)) {
                            // 0xb0
                            v18 = __asm_movsd(*(int64_t *)(8 * v23 + v3));
                            v19 = __asm_subsd(v22, __asm_mulsd_3(v18, *(int64_t *)(0x3e80 * v23 + v17)));
                            v20 = v23 | 1;
                            v21 = __asm_movsd(*(int64_t *)(8 * v20 + v3));
                            v22 = __asm_subsd(v19, __asm_mulsd_3(v21, *(int64_t *)(0x3e80 * v20 + v17)));
                            v23 += 2;
                            v26 = v22;
                            v16 = v23;
                        }
                    }
                    // 0xfa
                    v27 = v26;
                    v15 = v27;
                    if ((v11 & 1) != 0) {
                        // 0x104
                        v24 = __asm_movsd(*(int64_t *)(8 * v16 + v3));
                        v25 = __asm_mulsd_3(v24, *(int64_t *)(v12 + a2 + 0x3e80 * v16));
                        v15 = __asm_subsd(v27, v25);
                    }
                }
                // 0x50
                v28 = __asm_movsd_1(__asm_divsd_8(v15, *(int64_t *)(v12 + a2 + 0x3e80 * v11)));
                *v13 = v28;
                v29 = v11 + 1;
            }
        }
        int64_t v30 = v10 & 0x7ffffffffffffffe; // 0x133
        v6 = v10;
        while (true) {
          lab_0x155_2:;
            int64_t v31 = 8 * v6; // 0x15f
            v7 = (int64_t *)(v31 + v3);
            int128_t v32 = __asm_movsd(*v7); // 0x15f
            v8 = v32;
            switch (v10) {
                case 0: {
                    goto lab_0x140;
                }
                case 1: {
                    // 0x155
                    v4 = v31 + a2;
                    v5 = 0;
                    v9 = v32;
                    goto lab_0x1d4;
                }
                default: {
                    int64_t v33 = v31 + a2;
                    int64_t v34 = 0; // 0x0
                    int128_t v35 = __asm_movsd(*(int64_t *)(8 * v34 + v3)); // 0x180
                    int128_t v36 = __asm_subsd(v32, __asm_mulsd_3(v35, *(int64_t *)(0x3e80 * v34 + v33))); // 0x197
                    int64_t v37 = v34 | 1; // 0x19e
                    int128_t v38 = __asm_movsd(*(int64_t *)(8 * v37 + v3)); // 0x1a2
                    int128_t v39 = __asm_subsd(v36, __asm_mulsd_3(v38, *(int64_t *)(0x3e80 * v37 + v33))); // 0x1b9
                    int64_t v40 = v34 + 2; // 0x1c1
                    int128_t v41 = v39; // 0x1c8
                    v34 = v40;
                    while (v40 != v30) {
                        // 0x180
                        v35 = __asm_movsd(*(int64_t *)(8 * v34 + v3));
                        v36 = __asm_subsd(v41, __asm_mulsd_3(v35, *(int64_t *)(0x3e80 * v34 + v33)));
                        v37 = v34 | 1;
                        v38 = __asm_movsd(*(int64_t *)(8 * v37 + v3));
                        v39 = __asm_subsd(v36, __asm_mulsd_3(v38, *(int64_t *)(0x3e80 * v37 + v33)));
                        v40 = v34 + 2;
                        v41 = v39;
                        v34 = v40;
                    }
                    // 0x1ca
                    v8 = v39;
                    v4 = v33;
                    v5 = v40;
                    v9 = v39;
                    if ((v10 & 1) == 0) {
                        goto lab_0x140;
                    } else {
                        goto lab_0x1d4;
                    }
                }
            }
        }
      lab_0x30:
        // 0x30
        v2 = v10 + 1;
        if (v2 == result2) {
            // break -> 0x212
            break;
        }
    }
    int64_t v42 = 0;
    int64_t v43 = 8 * v42; // 0x212
    int128_t v44 = __asm_movsd(*(int64_t *)(v43 + a3)); // 0x212
    int128_t v45 = v44; // 0x21b
    int64_t v46; // 0x0
    int64_t v47; // 0x247
    int64_t v48; // 0x24a
    int128_t v49; // 0x252
    int128_t v50; // 0x25e
    int64_t v51; // 0x262
    int128_t v52; // 0x266
    int128_t v53; // 0x272
    int64_t v54; // 0x276
    int64_t v55; // 0x297
    int128_t v56; // 0x297
    int128_t v57; // 0x0
    int128_t v58; // 0x0
    if (v42 != 0) {
        // 0x21d
        v57 = v44;
        v46 = 0;
        if (v42 != 1) {
            // 0x230
            v47 = 0x3e80 * v42 + a2;
            v54 = 0;
            v48 = 8 * v54;
            v49 = __asm_movsd(*(int64_t *)(v48 + v47));
            v50 = __asm_subsd(v44, __asm_mulsd_3(v49, *(int64_t *)(v48 + a5)));
            v51 = v48 | 8;
            v52 = __asm_movsd(*(int64_t *)(v51 + v47));
            v53 = __asm_subsd(v50, __asm_mulsd_3(v52, *(int64_t *)(v51 + a5)));
            v54 += 2;
            v57 = v53;
            v46 = v54;
            while (v54 != (v42 & 0x7ffffffffffffffe)) {
                // 0x240
                v48 = 8 * v54;
                v49 = __asm_movsd(*(int64_t *)(v48 + v47));
                v50 = __asm_subsd(v53, __asm_mulsd_3(v49, *(int64_t *)(v48 + a5)));
                v51 = v48 | 8;
                v52 = __asm_movsd(*(int64_t *)(v51 + v47));
                v53 = __asm_subsd(v50, __asm_mulsd_3(v52, *(int64_t *)(v51 + a5)));
                v54 += 2;
                v57 = v53;
                v46 = v54;
            }
        }
        // 0x283
        v58 = v57;
        v45 = v58;
        if ((v42 & 1) != 0) {
            // 0x28d
            v55 = 8 * v46;
            v56 = __asm_movsd(*(int64_t *)(0x3e80 * v42 + a2 + v55));
            v45 = __asm_subsd(v58, __asm_mulsd_3(v56, *(int64_t *)(v55 + a5)));
        }
    }
    // 0x200
    *(int64_t *)(v43 + a5) = __asm_movsd_1(v45);
    int64_t v59 = v42 + 1; // 0x206
    while (v59 != result2) {
        // 0x212
        v42 = v59;
        v43 = 8 * v42;
        v44 = __asm_movsd(*(int64_t *)(v43 + a3));
        v45 = v44;
        if (v42 != 0) {
            // 0x21d
            v57 = v44;
            v46 = 0;
            if (v42 != 1) {
                // 0x230
                v47 = 0x3e80 * v42 + a2;
                v54 = 0;
                v48 = 8 * v54;
                v49 = __asm_movsd(*(int64_t *)(v48 + v47));
                v50 = __asm_subsd(v44, __asm_mulsd_3(v49, *(int64_t *)(v48 + a5)));
                v51 = v48 | 8;
                v52 = __asm_movsd(*(int64_t *)(v51 + v47));
                v53 = __asm_subsd(v50, __asm_mulsd_3(v52, *(int64_t *)(v51 + a5)));
                v54 += 2;
                v57 = v53;
                v46 = v54;
                while (v54 != (v42 & 0x7ffffffffffffffe)) {
                    // 0x240
                    v48 = 8 * v54;
                    v49 = __asm_movsd(*(int64_t *)(v48 + v47));
                    v50 = __asm_subsd(v53, __asm_mulsd_3(v49, *(int64_t *)(v48 + a5)));
                    v51 = v48 | 8;
                    v52 = __asm_movsd(*(int64_t *)(v51 + v47));
                    v53 = __asm_subsd(v50, __asm_mulsd_3(v52, *(int64_t *)(v51 + a5)));
                    v54 += 2;
                    v57 = v53;
                    v46 = v54;
                }
            }
            // 0x283
            v58 = v57;
            v45 = v58;
            if ((v42 & 1) != 0) {
                // 0x28d
                v55 = 8 * v46;
                v56 = __asm_movsd(*(int64_t *)(0x3e80 * v42 + a2 + v55));
                v45 = __asm_subsd(v58, __asm_mulsd_3(v56, *(int64_t *)(v55 + a5)));
            }
        }
        // 0x200
        *(int64_t *)(v43 + a5) = __asm_movsd_1(v45);
        v59 = v42 + 1;
    }
    int64_t v60 = result2;
    int64_t v61 = 0;
    int64_t v62 = v60 - 1; // 0x2d6
    int64_t v63 = v62 & 0xffffffff; // 0x2eb
    int64_t v64 = 8 * v63; // 0x2ee
    int128_t v65 = __asm_movsd(*(int64_t *)(v64 + a5)); // 0x2ee
    int128_t v66 = v65; // 0x2f7
    int64_t v67; // 0x0
    int128_t v68; // 0x32a
    int128_t v69; // 0x330
    int64_t v70; // 0x0
    int128_t v71; // 0x337
    int128_t v72; // 0x346
    int64_t v73; // 0x34a
    int64_t v74; // 0x308
    int128_t v75; // 0x308
    int64_t v76; // 0x32a
    int64_t v77; // 0x0
    int128_t v78; // 0x0
    int128_t v79; // 0x0
    if (v60 < result2) {
        // 0x2f9
        v78 = v65;
        v67 = v60;
        if ((v61 & 1) != 0) {
            // 0x2fe
            v74 = 8 * v60;
            v75 = __asm_movsd(*(int64_t *)(v74 + a2 + 0x3e80 * v63));
            v78 = __asm_subsd(v65, __asm_mulsd_3(v75, *(int64_t *)(v74 + a4)));
            v67 = v60 + 1;
        }
        // 0x31a
        v79 = v78;
        v66 = v79;
        if (v61 != 1) {
            // 0x320
            v72 = v79;
            v73 = v67;
            v76 = 8 * v73;
            v77 = 0x3e80 * v63 + a2 + v76;
            v68 = __asm_movsd(*(int64_t *)v77);
            v69 = __asm_movsd(*(int64_t *)(v77 + 8));
            v70 = v76 + a4;
            v71 = __asm_mulsd_3(v68, *(int64_t *)v70);
            v72 = __asm_subsd(__asm_subsd(v72, v71), __asm_mulsd_3(v69, *(int64_t *)(v70 + 8)));
            v73 += 2;
            v66 = v72;
            while ((int32_t)v73 != v1) {
                // 0x320
                v76 = 8 * v73;
                v77 = 0x3e80 * v63 + a2 + v76;
                v68 = __asm_movsd(*(int64_t *)v77);
                v69 = __asm_movsd(*(int64_t *)(v77 + 8));
                v70 = v76 + a4;
                v71 = __asm_mulsd_3(v68, *(int64_t *)v70);
                v72 = __asm_subsd(__asm_subsd(v72, v71), __asm_mulsd_3(v69, *(int64_t *)(v70 + 8)));
                v73 += 2;
                v66 = v72;
            }
        }
    }
    int64_t v80 = __asm_movsd_1(__asm_divsd_8(v66, *(int64_t *)(0x3e80 * v63 + a2 + v64))); // 0x2d0
    *(int64_t *)(v64 + a4) = v80;
    int64_t v81 = v61 + 1 & 0xffffffff; // 0x2e3
    while (v60 >= 2) {
        // 0x2e5
        v60 = v62;
        v61 = v81;
        v62 = v60 - 1;
        v63 = v62 & 0xffffffff;
        v64 = 8 * v63;
        v65 = __asm_movsd(*(int64_t *)(v64 + a5));
        v66 = v65;
        if (v60 < result2) {
            // 0x2f9
            v78 = v65;
            v67 = v60;
            if ((v61 & 1) != 0) {
                // 0x2fe
                v74 = 8 * v60;
                v75 = __asm_movsd(*(int64_t *)(v74 + a2 + 0x3e80 * v63));
                v78 = __asm_subsd(v65, __asm_mulsd_3(v75, *(int64_t *)(v74 + a4)));
                v67 = v60 + 1;
            }
            // 0x31a
            v79 = v78;
            v66 = v79;
            if (v61 != 1) {
                // 0x320
                v72 = v79;
                v73 = v67;
                v76 = 8 * v73;
                v77 = 0x3e80 * v63 + a2 + v76;
                v68 = __asm_movsd(*(int64_t *)v77);
                v69 = __asm_movsd(*(int64_t *)(v77 + 8));
                v70 = v76 + a4;
                v71 = __asm_mulsd_3(v68, *(int64_t *)v70);
                v72 = __asm_subsd(__asm_subsd(v72, v71), __asm_mulsd_3(v69, *(int64_t *)(v70 + 8)));
                v73 += 2;
                v66 = v72;
                while ((int32_t)v73 != v1) {
                    // 0x320
                    v76 = 8 * v73;
                    v77 = 0x3e80 * v63 + a2 + v76;
                    v68 = __asm_movsd(*(int64_t *)v77);
                    v69 = __asm_movsd(*(int64_t *)(v77 + 8));
                    v70 = v76 + a4;
                    v71 = __asm_mulsd_3(v68, *(int64_t *)v70);
                    v72 = __asm_subsd(__asm_subsd(v72, v71), __asm_mulsd_3(v69, *(int64_t *)(v70 + 8)));
                    v73 += 2;
                    v66 = v72;
                }
            }
        }
        // 0x2c0
        v80 = __asm_movsd_1(__asm_divsd_8(v66, *(int64_t *)(0x3e80 * v63 + a2 + v64)));
        *(int64_t *)(v64 + a4) = v80;
        v81 = v61 + 1 & 0xffffffff;
    }
    // 0x357
    return result2;
  lab_0x140:
    // 0x140
    *v7 = __asm_movsd_1(v8);
    int64_t v82 = v6 + 1; // 0x149
    v6 = v82;
    if (v82 == result2) {
        // break -> 0x30
        goto lab_0x30;
    }
    goto lab_0x155_2;
  lab_0x1d4:;
    int128_t v83 = __asm_movsd(*(int64_t *)(8 * v5 + v3)); // 0x1d4
    int64_t v84 = *(int64_t *)(0x3e80 * v5 + v4); // 0x1e4
    v8 = __asm_subsd(v9, __asm_mulsd_3(v83, v84));
    goto lab_0x140;
}
