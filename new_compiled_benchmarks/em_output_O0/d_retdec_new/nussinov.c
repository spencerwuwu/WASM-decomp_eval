
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "nussinov.h"
int64_t kernel_nussinov(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 0xffffffff;
    int32_t v2 = v1;
    int64_t result = v1 & 0xffffffff;
    if (v2 < 0) {
        // 0x47a
        return result;
    }
    int32_t v3 = v2 + 1;
    int32_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int32_t v7; // 0x0
    uint32_t v8; // 0x38d
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int32_t v15; // 0x0
    int32_t v16; // 0x0
    int32_t v17; // 0x0
    uint32_t v18; // 0x0
    int32_t v19; // 0x0
    int64_t v20; // 0x124
    int32_t v21; // 0x124
    int64_t v22; // 0x5c
    int32_t * v23; // 0x5c
    int64_t v24; // 0x7a
    int64_t v25; // 0x0
    int32_t * v26; // 0x0
    int64_t v27; // 0x0
    uint32_t v28; // 0x0
    int64_t v29; // 0x0
    int32_t v30; // 0x0
    int32_t * v31; // 0x38d
    int32_t v32; // 0x0
    char v33; // 0x20a
    uint32_t v34; // 0x21d
    int32_t v35; // 0x3c4
    int64_t v36; // 0x0
    uint32_t v37; // 0x3c4
    int64_t v38; // 0x0
    int64_t v39; // 0x0
    char * v40; // 0x0
    int64_t v41; // 0x0
    int64_t v42; // 0x0
    int64_t v43; // 0x106
    if (v3 < (int32_t)a1) {
        // 0x37
        v14 = 0x100000000 * v1;
        v27 = v14 >> 32;
        v36 = 0x2710 * v27;
        v38 = v36 + a3;
        v13 = 0x2710 * (v14 + 0x100000000 >> 32);
        v39 = v13 + a3;
        v40 = (char *)(v27 + a2);
        v41 = v3;
        v17 = v3;
        v10 = v41;
        v5 = 4 * v10;
        if (v2 >= 0) {
            // 0x46
            v22 = v5 + v38;
            v23 = (int32_t *)v22;
            v24 = 4 * (int64_t)v2 + v38;
            *v23 = *(int32_t *)(*v23 < *(int32_t *)v24 ? v24 : v22);
        }
        // 0x18b
        v42 = v5 + a3;
        v43 = v42 + v36;
        v20 = v42 + v13;
        v21 = *(int32_t *)v20;
        *(int32_t *)v42 = *(int32_t *)(*(int32_t *)v43 < v21 ? v20 : v43);
        if (v2 >= 0) {
            // 0x1a9
            v25 = v5 + v38;
            v26 = (int32_t *)v25;
            v28 = *v26;
            v29 = v39 + 4 * (int64_t)v2;
            v30 = *(int32_t *)v29;
            if (result < (int64_t)v2) {
                // 0x1ba
                v33 = *(char *)(v10 + a2);
                v34 = v30 + (int32_t)((int32_t)v33 + (int32_t)*v40 == 3);
                *v26 = v28 < v34 ? v34 : v28;
            } else {
                // 0x2b8
                *v26 = *(int32_t *)(v28 < v30 ? v29 : v25);
            }
        }
        if (v10 > v41) {
            // 0x377
            v31 = (int32_t *)(v5 + v38);
            v32 = v10;
            v15 = v3;
            v8 = *v31;
            v35 = *(int32_t *)(0x2710 * (int64_t)(v2 + 2) + v42);
            v37 = v35 + *(int32_t *)(4 * v41 + v38);
            v4 = v8 < v37 ? v37 : v8;
            *v31 = v4;
            v15++;
            v7 = v32;
            v11 = v41 + 1;
            v19 = v41;
            while (v15 != v32) {
                // 0x377
                v12 = v11;
                v8 = v4;
                v35 = *(int32_t *)(0x2710 * (int64_t)(v19 + 2) + v42);
                v37 = v35 + *(int32_t *)(4 * v12 + v38);
                v4 = v8 < v37 ? v37 : v8;
                *v31 = v4;
                v15++;
                v7 = v32;
                v11 = v12 + 1;
                v19 = v12;
            }
        } else {
            // 0x362
            v7 = v10;
        }
        // 0x2b
        v9 = v10 + 1;
        v16 = v17 + 1;
        v6 = v27;
        while (v17 != v2) {
            // 0x37
            v18 = v7;
            v17 = v16;
            v10 = v9;
            v5 = 4 * v10;
            if (v18 >= 0) {
                // 0x46
                v22 = v5 + v38;
                v23 = (int32_t *)v22;
                v24 = 4 * (int64_t)v18 + v38;
                *v23 = *(int32_t *)(*v23 < *(int32_t *)v24 ? v24 : v22);
            }
            // 0x18b
            v42 = v5 + a3;
            v43 = v42 + v36;
            v20 = v42 + v13;
            v21 = *(int32_t *)v20;
            *(int32_t *)v42 = *(int32_t *)(*(int32_t *)v43 < v21 ? v20 : v43);
            if (v18 >= 0) {
                // 0x1a9
                v25 = v5 + v38;
                v26 = (int32_t *)v25;
                v28 = *v26;
                v29 = v39 + 4 * (int64_t)v18;
                v30 = *(int32_t *)v29;
                if (result < (int64_t)v18) {
                    // 0x1ba
                    v33 = *(char *)(v10 + a2);
                    v34 = v30 + (int32_t)((int32_t)v33 + (int32_t)*v40 == 3);
                    *v26 = v28 < v34 ? v34 : v28;
                } else {
                    // 0x2b8
                    *v26 = *(int32_t *)(v28 < v30 ? v29 : v25);
                }
            }
            if (v10 > v41) {
                // 0x377
                v31 = (int32_t *)(v5 + v38);
                v32 = v10;
                v15 = v3;
                v8 = *v31;
                v35 = *(int32_t *)(0x2710 * (int64_t)(v2 + 2) + v42);
                v37 = v35 + *(int32_t *)(4 * v41 + v38);
                v4 = v8 < v37 ? v37 : v8;
                *v31 = v4;
                v15++;
                v7 = v32;
                v11 = v41 + 1;
                v19 = v41;
                while (v15 != v32) {
                    // 0x377
                    v12 = v11;
                    v8 = v4;
                    v35 = *(int32_t *)(0x2710 * (int64_t)(v19 + 2) + v42);
                    v37 = v35 + *(int32_t *)(4 * v12 + v38);
                    v4 = v8 < v37 ? v37 : v8;
                    *v31 = v4;
                    v15++;
                    v7 = v32;
                    v11 = v12 + 1;
                    v19 = v12;
                }
            } else {
                // 0x362
                v7 = v10;
            }
            // 0x2b
            v9 = v10 + 1;
            v16 = v17 + 1;
            v6 = v27;
        }
    } else {
        // 0x2b
        v6 = 0x100000000 * v1 >> 32;
    }
    int64_t v44 = v6 + 0xffffffff;
    int32_t v45 = v44;
    int64_t result2 = v44 & 0xffffffff;
    while (v45 >= 0) {
        int64_t v46 = v44;
        int32_t v47 = v45;
        v3 = v47 + 1;
        if (v3 < (int32_t)a1) {
            uint64_t v48 = result2;
            v14 = 0x100000000 * v46;
            v27 = v14 >> 32;
            v36 = 0x2710 * v27;
            v38 = v36 + a3;
            v13 = 0x2710 * (v14 + 0x100000000 >> 32);
            v39 = v13 + a3;
            v40 = (char *)(v27 + a2);
            v41 = v3;
            v18 = v47;
            v17 = v3;
            v10 = v41;
            v5 = 4 * v10;
            if (v18 >= 0) {
                // 0x46
                v22 = v5 + v38;
                v23 = (int32_t *)v22;
                v24 = 4 * (int64_t)v18 + v38;
                *v23 = *(int32_t *)(*v23 < *(int32_t *)v24 ? v24 : v22);
            }
            // 0x18b
            v42 = v5 + a3;
            v43 = v42 + v36;
            v20 = v42 + v13;
            v21 = *(int32_t *)v20;
            *(int32_t *)v42 = *(int32_t *)(*(int32_t *)v43 < v21 ? v20 : v43);
            if (v18 >= 0) {
                // 0x1a9
                v25 = v5 + v38;
                v26 = (int32_t *)v25;
                v28 = *v26;
                v29 = v39 + 4 * (int64_t)v18;
                v30 = *(int32_t *)v29;
                if (v48 < (int64_t)v18) {
                    // 0x1ba
                    v33 = *(char *)(v10 + a2);
                    v34 = v30 + (int32_t)((int32_t)v33 + (int32_t)*v40 == 3);
                    *v26 = v28 < v34 ? v34 : v28;
                } else {
                    // 0x2b8
                    *v26 = *(int32_t *)(v28 < v30 ? v29 : v25);
                }
            }
            if (v10 > v41) {
                // 0x377
                v31 = (int32_t *)(v5 + v38);
                v32 = v10;
                v15 = v3;
                v8 = *v31;
                v35 = *(int32_t *)(0x2710 * (int64_t)(v47 + 2) + v42);
                v37 = v35 + *(int32_t *)(4 * v41 + v38);
                v4 = v8 < v37 ? v37 : v8;
                *v31 = v4;
                v15++;
                v7 = v32;
                v11 = v41 + 1;
                v19 = v41;
                while (v15 != v32) {
                    // 0x377
                    v12 = v11;
                    v8 = v4;
                    v35 = *(int32_t *)(0x2710 * (int64_t)(v19 + 2) + v42);
                    v37 = v35 + *(int32_t *)(4 * v12 + v38);
                    v4 = v8 < v37 ? v37 : v8;
                    *v31 = v4;
                    v15++;
                    v7 = v32;
                    v11 = v12 + 1;
                    v19 = v12;
                }
            } else {
                // 0x362
                v7 = v10;
            }
            // 0x2b
            v9 = v10 + 1;
            v16 = v17 + 1;
            v6 = v27;
            while (v17 != v2) {
                // 0x37
                v18 = v7;
                v17 = v16;
                v10 = v9;
                v5 = 4 * v10;
                if (v18 >= 0) {
                    // 0x46
                    v22 = v5 + v38;
                    v23 = (int32_t *)v22;
                    v24 = 4 * (int64_t)v18 + v38;
                    *v23 = *(int32_t *)(*v23 < *(int32_t *)v24 ? v24 : v22);
                }
                // 0x18b
                v42 = v5 + a3;
                v43 = v42 + v36;
                v20 = v42 + v13;
                v21 = *(int32_t *)v20;
                *(int32_t *)v42 = *(int32_t *)(*(int32_t *)v43 < v21 ? v20 : v43);
                if (v18 >= 0) {
                    // 0x1a9
                    v25 = v5 + v38;
                    v26 = (int32_t *)v25;
                    v28 = *v26;
                    v29 = v39 + 4 * (int64_t)v18;
                    v30 = *(int32_t *)v29;
                    if (v48 < (int64_t)v18) {
                        // 0x1ba
                        v33 = *(char *)(v10 + a2);
                        v34 = v30 + (int32_t)((int32_t)v33 + (int32_t)*v40 == 3);
                        *v26 = v28 < v34 ? v34 : v28;
                    } else {
                        // 0x2b8
                        *v26 = *(int32_t *)(v28 < v30 ? v29 : v25);
                    }
                }
                if (v10 > v41) {
                    // 0x377
                    v31 = (int32_t *)(v5 + v38);
                    v32 = v10;
                    v15 = v3;
                    v8 = *v31;
                    v35 = *(int32_t *)(0x2710 * (int64_t)(v47 + 2) + v42);
                    v37 = v35 + *(int32_t *)(4 * v41 + v38);
                    v4 = v8 < v37 ? v37 : v8;
                    *v31 = v4;
                    v15++;
                    v7 = v32;
                    v11 = v41 + 1;
                    v19 = v41;
                    while (v15 != v32) {
                        // 0x377
                        v12 = v11;
                        v8 = v4;
                        v35 = *(int32_t *)(0x2710 * (int64_t)(v19 + 2) + v42);
                        v37 = v35 + *(int32_t *)(4 * v12 + v38);
                        v4 = v8 < v37 ? v37 : v8;
                        *v31 = v4;
                        v15++;
                        v7 = v32;
                        v11 = v12 + 1;
                        v19 = v12;
                    }
                } else {
                    // 0x362
                    v7 = v10;
                }
                // 0x2b
                v9 = v10 + 1;
                v16 = v17 + 1;
                v6 = v27;
            }
        } else {
            // 0x2b
            v6 = 0x100000000 * v46 >> 32;
        }
        // 0x46c
        v44 = v6 + 0xffffffff;
        v45 = v44;
        result2 = v44 & 0xffffffff;
    }
    // 0x47a
    return result2;
}
