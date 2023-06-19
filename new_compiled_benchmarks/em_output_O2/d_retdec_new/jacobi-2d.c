
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "jacobi-2d.h"
int64_t kernel_jacobi_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x13
    if (v1 < 1) {
        // 0x423
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2 + 0xffffffff & 0xffffffff; // 0x20
    int64_t v2 = 8 * result2; // 0x22
    int64_t v3 = v2 + 0x28a0; // 0x22
    int64_t v4 = v2 + 0x5140; // 0x2a
    uint64_t v5 = result2 - 1; // 0x32
    int64_t v6 = v5 & -4; // 0x39
    int64_t v7 = v6 | 1; // 0x3d
    int128_t v8 = __asm_movsd(0x3fc999999999999a); // 0x48
    int128_t v9 = __asm_movapd(g2); // 0x66
    int32_t v10 = 0; // 0x6e
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int64_t v15; // 0x0
    int64_t v16; // 0xaf
    int64_t v17; // 0xb3
    while (true) {
      lab_0x81:
        // 0x81
        v14 = 1;
        v11 = 0;
        if ((int32_t)a2 >= 3) {
            while (true) {
              lab_0xaf:
                // 0xaf
                v12 = v11;
                v15 = v14;
                v16 = v15 + 1;
                v17 = v15 - 1;
                v13 = 1;
                if (v5 < 4) {
                    goto lab_0x1f0;
                } else {
                    int64_t v18 = 0x28a0 * v12; // 0xc7
                    int64_t v19 = v18 + a3;
                    int64_t v20 = v18 + a4;
                    if (v20 + 0x28a8 >= v19 + v4) {
                        goto lab_0x120;
                    } else {
                        // 0xe5
                        v13 = 1;
                        if (v19 + 8 < v20 + v3) {
                            goto lab_0x1f0;
                        } else {
                            goto lab_0x120;
                        }
                    }
                }
            }
        }
        goto lab_0x70;
    }
  lab_0x423:
    // 0x423
    return result2;
  lab_0x28f:;
    // 0x28f
    int64_t v21; // 0x0
    int64_t v22 = v21;
    int64_t v23; // 0x0
    int64_t v24 = v23;
    int64_t v25 = v24 + 1; // 0x28f
    int64_t v26 = v24 - 1; // 0x293
    int64_t v27 = 1; // 0x2a1
    if (v5 < 4) {
        goto lab_0x3c0;
    } else {
        int64_t v28 = 0x28a0 * v22; // 0x2a7
        int64_t v29 = v28 + a4;
        int64_t v30 = v28 + a3;
        if (v30 + 0x28a8 >= v29 + v4) {
            goto lab_0x2f0;
        } else {
            // 0x2c6
            v27 = 1;
            if (v29 + 8 < v30 + v3) {
                goto lab_0x3c0;
            } else {
                goto lab_0x2f0;
            }
        }
    }
  lab_0x1f0:;
    int64_t v31 = 8 * v13; // 0x1fb
    int64_t v32 = v31 + 0x28a0 * v15;
    int64_t v33 = v32 + a3;
    int128_t v34 = __asm_movupd_2(*(int128_t *)(v33 - 8)); // 0x1fb
    int128_t v35 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v34), v34), v34); // 0x20a
    int128_t v36 = __asm_addsd_3(v35, *(int64_t *)(v33 + 8)); // 0x20e
    int64_t v37 = v31 + a3;
    int128_t v38 = __asm_addsd_3(v36, *(int64_t *)(v37 + 0x28a0 * v16)); // 0x21f
    int64_t v39 = __asm_movsd_1(__asm_mulsd(__asm_addsd_3(v38, *(int64_t *)(v37 + 0x28a0 * v17)), v8)); // 0x23c
    *(int64_t *)(v32 + a4) = v39;
    int64_t v40 = v13 + 1; // 0x242
    int64_t v41 = v40; // 0x24c
    while (v40 != result2) {
        // 0x1f0
        v31 = 8 * v41;
        v32 = v31 + 0x28a0 * v15;
        v33 = v32 + a3;
        v34 = __asm_movupd_2(*(int128_t *)(v33 - 8));
        v35 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v34), v34), v34);
        v36 = __asm_addsd_3(v35, *(int64_t *)(v33 + 8));
        v37 = v31 + a3;
        v38 = __asm_addsd_3(v36, *(int64_t *)(v37 + 0x28a0 * v16));
        v39 = __asm_movsd_1(__asm_mulsd(__asm_addsd_3(v38, *(int64_t *)(v37 + 0x28a0 * v17)), v8));
        *(int64_t *)(v32 + a4) = v39;
        v40 = v41 + 1;
        v41 = v40;
    }
    goto lab_0xa0;
  lab_0xa0:
    // 0xa0
    v14 = v16;
    v11 = v12 + 1;
    v23 = 1;
    v21 = 0;
    if (v16 == result2) {
        goto lab_0x28f;
    }
    goto lab_0xaf;
  lab_0x120:;
    int64_t v42 = 0x28a0 * v15; // 0x120
    int64_t v43 = v42 + a3; // 0x127
    int64_t v44 = v43 + 16;
    int64_t v45 = 0x28a0 * v16 + a3;
    int64_t v46 = 0x28a0 * v17 + a3;
    int64_t v47 = v42 + a4;
    int64_t v48 = 0; // 0x0
    int64_t v49 = 8 * v48; // 0x12b
    int64_t v50 = v49 | 8; // 0x136
    int128_t v51 = __asm_movupd_2(*(int128_t *)(v50 + v43)); // 0x13a
    int64_t v52 = v49 | 24; // 0x140
    int128_t v53 = __asm_movupd_2(*(int128_t *)(v52 + v43)); // 0x140
    int128_t v54 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v49 + v43)), v51); // 0x14c
    int128_t v55 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v49 + v44)), v53); // 0x156
    int64_t v56 = v49 | 16; // 0x15a
    int128_t v57 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v56 + v43)), v54); // 0x164
    int128_t v58 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v56 + v44)), v55); // 0x16f
    int128_t v59 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v50 + v45)), v57); // 0x183
    int128_t v60 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + v45)), v58); // 0x18e
    int128_t v61 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v50 + v46)), v59); // 0x1a2
    int128_t v62 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + v46)), v60); // 0x1ad
    int128_t v63 = __asm_mulpd(v61, v9); // 0x1b1
    int128_t v64 = __asm_mulpd(v62, v9); // 0x1b5
    __asm_movupd(*(int128_t *)(v50 + v47), v63);
    __asm_movupd(*(int128_t *)(v52 + v47), v64);
    int64_t v65 = v48 + 4; // 0x1c9
    v48 = v65;
    while (v65 != v6) {
        // 0x120
        v49 = 8 * v48;
        v50 = v49 | 8;
        v51 = __asm_movupd_2(*(int128_t *)(v50 + v43));
        v52 = v49 | 24;
        v53 = __asm_movupd_2(*(int128_t *)(v52 + v43));
        v54 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v49 + v43)), v51);
        v55 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v49 + v44)), v53);
        v56 = v49 | 16;
        v57 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v56 + v43)), v54);
        v58 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v56 + v44)), v55);
        v59 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v50 + v45)), v57);
        v60 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + v45)), v58);
        v61 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v50 + v46)), v59);
        v62 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + v46)), v60);
        v63 = __asm_mulpd(v61, v9);
        v64 = __asm_mulpd(v62, v9);
        __asm_movupd(*(int128_t *)(v50 + v47), v63);
        __asm_movupd(*(int128_t *)(v52 + v47), v64);
        v65 = v48 + 4;
        v48 = v65;
    }
    // 0x1d6
    v13 = v7;
    if (v5 == v6) {
        goto lab_0xa0;
    } else {
        goto lab_0x1f0;
    }
  lab_0x70:
    // 0x70
    v10++;
    if (v10 == v1) {
        // break -> 0x423
        goto lab_0x423;
    }
    goto lab_0x81;
  lab_0x3c0:;
    int64_t v66 = v27; // 0x0
    goto lab_0x3c0_2;
  lab_0x3c0_2:;
    int64_t v67 = 8 * v66; // 0x3cb
    int64_t v68 = v67 + 0x28a0 * v24;
    int64_t v69 = v68 + a4;
    int128_t v70 = __asm_movupd_2(*(int128_t *)(v69 - 8)); // 0x3cb
    int128_t v71 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v70), v70), v70); // 0x3da
    int128_t v72 = __asm_addsd_3(v71, *(int64_t *)(v69 + 8)); // 0x3de
    int64_t v73 = v67 + a4;
    int128_t v74 = __asm_addsd_3(v72, *(int64_t *)(v73 + 0x28a0 * v25)); // 0x3ef
    int128_t v75 = __asm_addsd_3(v74, *(int64_t *)(v73 + 0x28a0 * v26)); // 0x3ff
    *(int64_t *)(v68 + a3) = __asm_movsd_1(__asm_mulsd(v75, v8));
    int64_t v76 = v66 + 1; // 0x412
    v66 = v76;
    if (v76 != result2) {
        goto lab_0x3c0_2;
    } else {
        goto lab_0x280;
    }
  lab_0x2f0:;
    int64_t v77 = 0x28a0 * v24; // 0x2f0
    int64_t v78 = v77 + a4; // 0x2f7
    int64_t v79 = v78 + 16;
    int64_t v80 = 0x28a0 * v25 + a4;
    int64_t v81 = 0x28a0 * v26 + a4;
    int64_t v82 = v77 + a3;
    int64_t v83 = 0; // 0x0
    goto lab_0x2f0_2;
  lab_0x280:
    // 0x280
    v23 = v25;
    v21 = v22 + 1;
    if (v25 == result2) {
        goto lab_0x70;
    } else {
        goto lab_0x28f;
    }
  lab_0x2f0_2:;
    int64_t v84 = 8 * v83; // 0x2fb
    int64_t v85 = v84 | 8; // 0x306
    int128_t v86 = __asm_movupd_2(*(int128_t *)(v85 + v78)); // 0x30a
    int64_t v87 = v84 | 24; // 0x310
    int128_t v88 = __asm_movupd_2(*(int128_t *)(v87 + v78)); // 0x310
    int128_t v89 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v84 + v78)), v86); // 0x31c
    int128_t v90 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v84 + v79)), v88); // 0x326
    int64_t v91 = v84 | 16; // 0x32a
    int128_t v92 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v91 + v78)), v89); // 0x334
    int128_t v93 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v91 + v79)), v90); // 0x33f
    int128_t v94 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v85 + v80)), v92); // 0x353
    int128_t v95 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v87 + v80)), v93); // 0x35e
    int128_t v96 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v85 + v81)), v94); // 0x372
    int128_t v97 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v87 + v81)), v95); // 0x37d
    int128_t v98 = __asm_mulpd(v96, v9); // 0x381
    int128_t v99 = __asm_mulpd(v97, v9); // 0x385
    __asm_movupd(*(int128_t *)(v85 + v82), v98);
    __asm_movupd(*(int128_t *)(v87 + v82), v99);
    int64_t v100 = v83 + 4; // 0x399
    v83 = v100;
    if (v100 != v6) {
        goto lab_0x2f0_2;
    } else {
        // 0x3a6
        v27 = v7;
        if (v5 == v6) {
            goto lab_0x280;
        } else {
            goto lab_0x3c0;
        }
    }
}
