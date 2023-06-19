
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "nussinov.h"
int64_t kernel_nussinov(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x8
    if (v1 < 1) {
        // 0x11b
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = 0x100000000 * a1 >> 32; // 0x10
    int64_t v2 = result2; // 0x16
    int64_t v3; // 0x0
    int32_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t v8; // 0x4f
    int32_t * v9; // 0x56
    while (true) {
        // 0x2a
        v7 = v2;
        v2 = v7 - 1;
        if (v7 < result2) {
            // 0x48
            v8 = 0x2710 * v2 + a3;
            int64_t v10 = 0x2710 * v7;
            int64_t v11 = v10 + a3;
            char * v12 = (char *)(v2 + a2);
            v5 = v7;
            while (true) {
              lab_0x48:
                // 0x48
                v6 = v5;
                int64_t v13 = 4 * v6; // 0x52
                v9 = (int32_t *)(v13 + v8);
                int32_t v14 = *v9; // 0x56
                if (v6 < 1) {
                    int64_t v15 = v13 + a3;
                    int32_t v16 = *(int32_t *)(v15 + v10); // 0xca
                    int32_t v17 = v14 - v16; // 0xce
                    int32_t v18 = v17 < 0 == ((v17 ^ v14) & (v16 ^ v14)) < 0 == (v17 != 0) ? v14 : v16; // 0xd0
                    *v9 = v18;
                    v3 = v15;
                    v4 = v18;
                    if (v7 < v6) {
                        goto lab_0xdf;
                    } else {
                        goto lab_0x40;
                    }
                } else {
                    int64_t v19 = v13 + 0x3fffffffc & 0x3fffffffc; // 0x63
                    int32_t v20 = *(int32_t *)(v19 + v8); // 0x63
                    int32_t v21 = v14 - v20; // 0x67
                    int32_t v22 = v21 < 0 == ((v21 ^ v14) & (v20 ^ v14)) < 0 == (v21 != 0) ? v14 : v20; // 0x69
                    *v9 = v22;
                    int32_t v23 = *(int32_t *)(v13 + v11); // 0x79
                    int32_t v24 = v22 - v23; // 0x7d
                    uint32_t v25 = v24 == 0 | v24 < 0 != ((v24 ^ v22) & (v22 ^ v23)) < 0 ? v23 : v22; // 0x7f
                    *v9 = v25;
                    int64_t v26 = (int64_t)*(int32_t *)(v19 + v11); // 0x86
                    int64_t v27 = v26; // 0x8d
                    if (v7 < v6) {
                        char v28 = *v12; // 0x8f
                        char v29 = *(char *)(v6 + a2); // 0x94
                        v27 = (int64_t)((int32_t)v29 + (int32_t)v28 == 3) + v26 & 0xffffffff;
                    }
                    int32_t v30 = v27; // 0xaa
                    int32_t v31 = v25 - v30; // 0xaa
                    int64_t v32 = v31 < 0 == ((v31 ^ v25) & (v25 ^ v30)) < 0 == (v31 != 0) ? (int64_t)v25 : v27;
                    int32_t v33 = v32; // 0xac
                    *v9 = v33;
                    if (v7 < v6) {
                        // 0xaa
                        v3 = v13 + a3;
                        v4 = v33;
                        goto lab_0xdf;
                    } else {
                        goto lab_0x40;
                    }
                }
            }
        }
      lab_0x20:
        // 0x20
        if (v7 < 2) {
            // break -> 0x11b
            break;
        }
    }
    // 0x11b
    return result2;
  lab_0xdf:;
    int32_t v34 = v4;
    int64_t v35 = v7 + 1; // 0xf0
    int32_t v36 = *(int32_t *)(0x2710 * v35 + v3); // 0xfe
    int32_t v37 = *(int32_t *)(4 * v7 + v8) + v36; // 0x102
    int32_t v38 = v34 - v37; // 0x106
    int32_t v39 = v38 == 0 | v38 < 0 != ((v38 ^ v34) & (v37 ^ v34)) < 0 ? v37 : v34; // 0x108
    *v9 = v39;
    int64_t v40 = v35; // 0x114
    while ((int32_t)v35 != (int32_t)v6) {
        // 0xf0
        v34 = v39;
        v35 = v40 + 1;
        v36 = *(int32_t *)(0x2710 * v35 + v3);
        v37 = *(int32_t *)(4 * v40 + v8) + v36;
        v38 = v34 - v37;
        v39 = v38 == 0 | v38 < 0 != ((v38 ^ v34) & (v37 ^ v34)) < 0 ? v37 : v34;
        *v9 = v39;
        v40 = v35;
    }
    goto lab_0x40;
  lab_0x40:;
    int64_t v41 = v6 + 1; // 0x40
    v5 = v41;
    if ((int32_t)v41 == v1) {
        // break -> 0x20
        goto lab_0x20;
    }
    goto lab_0x48;
}
