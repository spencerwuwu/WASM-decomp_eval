
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "nussinov.h"
int64_t kernel_nussinov(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0xa
    int64_t result; // 0x0
    if (v1 < 1) {
        // 0x195
        return result;
    }
    int64_t v2 = a1 & 0xffffffff; // 0x12
    int64_t v3 = v2; // 0x19
    int32_t * v4; // 0x0
    int64_t v5; // 0x0
    int32_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int64_t v15; // 0x3e
    int32_t * v16; // 0x45
    int64_t v17; // 0x4a
    int64_t v18; // 0x0
    while (true) {
        // 0x2a
        v14 = v3;
        v3 = v14 - 1;
        int64_t v19; // 0x0
        v9 = v19;
        if (v14 < v2) {
            // 0x37
            v15 = 0x2710 * v3 + a3;
            v16 = (int32_t *)(v15 + 4 * v14);
            v17 = v14 + 1;
            int64_t v20 = 0x2710 * v14 + a3;
            char * v21 = (char *)(v3 + a2);
            v18 = 0x2710 * v17 + a3;
            v12 = 0;
            v7 = v14;
            while (true) {
              lab_0x6a:
                // 0x6a
                v8 = v7;
                v13 = v12;
                if (v8 < 1) {
                    int64_t v22 = 4 * v8;
                    int32_t * v23 = (int32_t *)(v22 + v15);
                    uint32_t v24 = *v23; // 0xe0
                    int64_t v25 = v24; // 0xe0
                    int32_t v26 = *(int32_t *)(v22 + v20); // 0xee
                    int32_t v27 = v24 - v26; // 0xf2
                    int32_t v28 = v27 < 0 == ((v27 ^ v24) & (v26 ^ v24)) < 0 == (v27 != 0) ? v24 : v26; // 0xf5
                    *v23 = v28;
                    v10 = v25;
                    v6 = v28;
                    v4 = v23;
                    v5 = v22;
                    v11 = v25;
                    if (v14 < v8) {
                        goto lab_0x106;
                    } else {
                        goto lab_0x60;
                    }
                } else {
                    int64_t v29 = v8 & 0xffffffff; // 0x6f
                    int32_t * v30 = (int32_t *)(4 * v29 + v15); // 0x76
                    int32_t v31 = *v30; // 0x76
                    int64_t v32 = v8 + 0xffffffff & 0xffffffff; // 0x7a
                    int64_t v33 = 4 * v32; // 0x7e
                    int32_t v34 = *(int32_t *)(v33 + v15); // 0x7e
                    int32_t v35 = v31 - v34; // 0x82
                    *v30 = v35 < 0 == ((v35 ^ v31) & (v34 ^ v31)) < 0 == (v35 != 0) ? v31 : v34;
                    int64_t v36 = 4 * v8;
                    int32_t * v37 = (int32_t *)(v36 + v15);
                    int32_t v38 = *v37; // 0x8d
                    int32_t v39 = *(int32_t *)(v36 + v20); // 0x9b
                    int32_t v40 = v38 - v39; // 0x9f
                    *v37 = v40 < 0 == ((v40 ^ v38) & (v39 ^ v38)) < 0 == (v40 != 0) ? v38 : v39;
                    uint32_t v41 = *v30; // 0xaa
                    int64_t v42 = (int64_t)*(int32_t *)(v33 + v20); // 0xae
                    int64_t v43 = v32; // 0xb5
                    int64_t v44 = v42; // 0xb5
                    if (v14 < v8) {
                        char v45 = *(char *)(v29 + a2); // 0xbb
                        v43 = (int32_t)v45 + (int32_t)*v21 == 3;
                        v44 = v43 + v42 & 0xffffffff;
                    }
                    int64_t v46 = v43;
                    int32_t v47 = v44; // 0xce
                    int32_t v48 = v41 - v47; // 0xce
                    int64_t v49 = v48 < 0 == ((v48 ^ v41) & (v41 ^ v47)) < 0 == (v48 != 0) ? (int64_t)v41 : v44;
                    *v30 = (int32_t)v49;
                    v10 = v46;
                    if (v14 < v8) {
                        // 0xce
                        v6 = *v37;
                        v4 = v37;
                        v5 = v36;
                        v11 = v46;
                        goto lab_0x106;
                    } else {
                        goto lab_0x60;
                    }
                }
            }
        }
      lab_0x20:
        // 0x20
        v19 = v9;
        result = v9;
        if (v14 < 2) {
            // break -> 0x195
            break;
        }
    }
    // 0x195
    return result;
  lab_0x106:;
    int64_t v50 = v5;
    int32_t * v51 = v4;
    int32_t v52 = v6; // 0x10a
    int64_t v53; // 0x0
    int32_t v54; // 0x0
    if ((v13 & 1) != 0) {
        uint32_t v55 = *v16 + *(int32_t *)(v18 + v50); // 0x133
        int32_t v56 = v52 - v55; // 0x136
        int32_t v57 = v56 == 0 | v56 < 0 != ((v56 ^ v52) & (v55 ^ v52)) < 0 ? v55 : v52; // 0x138
        *v51 = v57;
        v10 = v55;
        v54 = v57;
        v53 = v17;
        if (v13 == 1) {
            goto lab_0x60;
        } else {
            goto lab_0x150;
        }
    } else {
        // 0x113
        v10 = v11;
        v54 = v52;
        v53 = v14;
        if (v13 != 1) {
            goto lab_0x150;
        } else {
            goto lab_0x60;
        }
    }
  lab_0x60:;
    int64_t v58 = v8 + 1; // 0x60
    v9 = v10;
    v12 = v13 + 1 & 0xffffffff;
    v7 = v58;
    if ((int32_t)v58 == v1) {
        // break -> 0x20
        goto lab_0x20;
    }
    goto lab_0x6a;
  lab_0x150:;
    int32_t v59 = v54;
    int64_t v60 = 0x2710 * v53 + a3; // 0x157
    int64_t v61 = v60 + v50;
    int64_t v62 = 4 * v53 + v15;
    int32_t v63 = *(int32_t *)v62 + *(int32_t *)(v61 + 0x2710); // 0x162
    int32_t v64 = v59 - v63; // 0x166
    int32_t v65 = v64 < 0 == ((v64 ^ v59) & (v63 ^ v59)) < 0 == (v64 != 0) ? v59 : v63; // 0x169
    *v51 = v65;
    int32_t v66 = *(int32_t *)(v62 + 4) + *(int32_t *)(v61 + 0x4e20); // 0x178
    int64_t v67 = v53 + 2; // 0x17d
    int32_t v68 = v65 - v66; // 0x181
    int32_t v69 = v68 < 0 == ((v68 ^ v65) & (v65 ^ v66)) < 0 == (v68 != 0) ? v65 : v66; // 0x184
    *v51 = v69;
    v10 = v60;
    int64_t v70 = v67; // 0x18e
    while ((int32_t)v67 != (int32_t)v8) {
        // 0x150
        v59 = v69;
        v60 = 0x2710 * v70 + a3;
        v61 = v60 + v50;
        v62 = 4 * v70 + v15;
        v63 = *(int32_t *)v62 + *(int32_t *)(v61 + 0x2710);
        v64 = v59 - v63;
        v65 = v64 < 0 == ((v64 ^ v59) & (v63 ^ v59)) < 0 == (v64 != 0) ? v59 : v63;
        *v51 = v65;
        v66 = *(int32_t *)(v62 + 4) + *(int32_t *)(v61 + 0x4e20);
        v67 = v70 + 2;
        v68 = v65 - v66;
        v69 = v68 < 0 == ((v68 ^ v65) & (v65 ^ v66)) < 0 == (v68 != 0) ? v65 : v66;
        *v51 = v69;
        v10 = v60;
        v70 = v67;
    }
    goto lab_0x60;
}
