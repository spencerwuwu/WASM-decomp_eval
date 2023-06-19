
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfadd.h"
int64_t shift64RightJamming(uint64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x0
    if (v1 == 0) {
        // 0x33
        *(int64_t *)a3 = a1;
        int64_t result; // 0x0
        return result;
    }
    if (v1 <= 63) {
        int64_t result2 = a1 >> (a2 & 63);
        *(int64_t *)a3 = result2 | (int64_t)(a1 << (-a2 & 63) != 0);
        return result2;
    }
    int64_t result3 = a1 != 0; // 0x2d
    // 0x33
    *(int64_t *)a3 = result3;
    return result3;
}
int64_t float_raise(int64_t a1) {
    int64_t result = *(int64_t *)71; // 0x40
    int32_t * v1 = (int32_t *)result; // 0x47
    *v1 = *v1 | (int32_t)a1;
    return result;
}
int64_t float64_is_nan(int64_t a1) {
    // 0x50
    return (bool)((uint64_t)(2 * a1) >= 0xffe0000000000001);
}
int64_t float64_is_signaling_nan(int64_t a1) {
    // 0x70
    return (bool)((a1 & 0x7ff8000000000000) == 0x7ff0000000000000 == ((a1 & 0x7ffffffffffff) != 0));
}
int64_t extractFloat64Frac(int64_t a) {
    // 0xa0
    return a & 0xfffffffffffff;
}
int64_t extractFloat64Exp(uint64_t a1) {
    // 0xb0
    return a1 / 0x10000000000000 & 2047;
}
int64_t extractFloat64Sign(uint64_t a1) {
    // 0xc0
    return a1 / 0x8000000000000000;
}
int64_t packFloat64(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd0
    return 0x8000000000000000 * a1 + a3 + 0x10000000000000 * a2;
}
int64_t roundAndPackFloat64(uint32_t zSign, int32_t zExp, uint64_t zSig) {
    int64_t result = zSign; // 0xe0
    if (*(int32_t *)*(int64_t *)233 != 0) {
        // 0xef
        return result;
    }
    int64_t v1 = zExp;
    char * v2; // 0x1cc
    if ((v1 & 0xffff) >= 2045) {
        char * v3; // 0x15b
        if (zExp > 2045) {
            // 0x154
            v3 = (char *)*(int64_t *)347;
            *v3 = *v3 | 9;
            return 0x8000000000000000 * result | 0x7ff0000000000000;
        }
        if (zExp == 2045) {
            if (zSig < -512) {
                // 0x154
                v3 = (char *)*(int64_t *)347;
                *v3 = *v3 | 9;
                return 0x8000000000000000 * result | 0x7ff0000000000000;
            }
        }
        if (zExp < 0) {
            int64_t v4; // 0xe0
            if (zExp < -63) {
                // 0x198
                v4 = zSig != 0;
            } else {
                // 0x17c
                v4 = zSig >> (-v1 & 63) | (int64_t)(zSig << (v1 & 63) != 0);
            }
            // 0x1a0
            if ((v4 & 1023) == 0) {
                // 0xef
                return result;
            }
            char * v5 = (char *)*(int64_t *)440; // 0x1b8
            *v5 = *v5 | 4;
            // 0x1c5
            v2 = (char *)*(int64_t *)460;
            *v2 = *v2 | 1;
            // 0xef
            return result;
        }
    }
    if ((zSig & 1023) == 0) {
        // 0xef
        return result;
    }
    // 0x1c5
    v2 = (char *)*(int64_t *)460;
    *v2 = *v2 | 1;
    // 0xef
    return result;
}
int64_t normalizeRoundAndPackFloat64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 < 0x100000000 ? a3 : a3 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x232
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x236
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x24c
    int32_t v5 = a3 >= 0x100000000 ? -1 : 31; // 0x261
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g1); // 0x266
    int32_t v7 = ((int32_t)v2 >= 0x1000000 ? v3 : v3 | 8) + v5 + v6; // 0x266
    return roundAndPackFloat64((int32_t)a1, (int32_t)a2 - v7, a3 << (int64_t)(v7 & 63));
}
int64_t addFloat64Sigs(int64_t a, uint64_t b, int32_t zSign) {
    int64_t v1 = (uint64_t)a / 0x10000000000000 & 2047; // 0x292
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x29e
    int64_t v3 = 512 * a & 0x1ffffffffffffe00; // 0x2b2
    int64_t v4 = 512 * b & 0x1ffffffffffffe00; // 0x2bc
    int32_t v5 = v1;
    int32_t v6 = v5 - (int32_t)v2; // 0x2c2
    int64_t v7; // 0x280
    int64_t v8; // 0x280
    int64_t v9; // 0x280
    if (v1 > v2) {
        if (v1 != 2047) {
            int64_t v10 = v2 != 0 ? v4 | 0x2000000000000000 : v4; // 0x3a9
            int32_t v11 = v6 - (int32_t)(v2 == 0); // 0x3ad
            v9 = v1;
            v8 = v3;
            v7 = v10;
            if (v11 != 0) {
                if (v11 > 63) {
                    // 0x3fb
                    v9 = v1;
                    v8 = v3;
                    v7 = v10 != 0;
                } else {
                    // 0x3b8
                    v9 = v1;
                    v8 = v3;
                    v7 = v10 >> (int64_t)(v11 & 63) | (int64_t)(v10 << (int64_t)(-v11 & 63) != 0);
                }
            }
            goto lab_0x406;
        } else {
            // 0x2d6
            if (v3 == 0) {
                // 0x341
                return a;
            }
            goto lab_0x2df;
        }
    } else {
        int64_t v12 = zSign;
        if (v6 < 0) {
            if (v2 != 2047) {
                int64_t v13 = v1 != 0 ? v3 | 0x2000000000000000 : v3; // 0x461
                int32_t v14 = v6 + (int32_t)(v1 == 0); // 0x465
                v9 = v2;
                v8 = v13;
                v7 = v4;
                if (v14 != 0) {
                    if (v14 < -63) {
                        // 0x496
                        v9 = v2;
                        v8 = v13 != 0;
                        v7 = v4;
                    } else {
                        // 0x470
                        v9 = v2;
                        v8 = v13 >> (int64_t)(-v14 & 63) | (int64_t)(v13 << (int64_t)(v14 & 63) != 0);
                        v7 = v4;
                    }
                }
                goto lab_0x406;
            } else {
                if (v4 == 0) {
                    // 0x341
                    return 0x8000000000000000 * v12 | 0x7ff0000000000000;
                }
                goto lab_0x2df;
            }
        } else {
            if (v5 == 0) {
                // 0x341
                return (v4 + v3) / 512 | 0x8000000000000000 * v12;
            }
            if (v5 != 2047) {
                // 0x41e
                return roundAndPackFloat64(zSign, v5, v4 + v3 | 0x4000000000000000);
            }
            // 0x38d
            if ((v4 || v3) == 0) {
                // 0x341
                return a;
            }
            goto lab_0x2df;
        }
    }
  lab_0x406:;
    int64_t v15 = (v8 | 0x2000000000000000) + v7; // 0x409
    int64_t v16 = 2 * v15; // 0x411
    int32_t v17 = v9 - (int64_t)(v16 >= 0);
    return roundAndPackFloat64(zSign, v17, v16 < 0 ? v15 : v16);
  lab_0x2df:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x332
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x341
            return 0x7ffffffffffff;
        }
    }
    char * v18 = (char *)*(int64_t *)829; // 0x33d
    *v18 = *v18 | 16;
    // 0x341
    return 0x7ffffffffffff;
}
int64_t subFloat64Sigs(uint64_t a, uint64_t b, uint32_t zSign) {
    int64_t v1 = a / 0x10000000000000 & 2047; // 0x4c2
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x4cf
    uint64_t v3 = 1024 * a & 0x3ffffffffffffc00; // 0x4e4
    int64_t result = 1024 * b & 0x3ffffffffffffc00; // 0x4ee
    int64_t v4; // 0x4b0
    int64_t v5; // 0x4b0
    int64_t v6; // 0x4b0
    int64_t v7; // 0x4b0
    int64_t v8; // 0x4b0
    if (v1 > v2) {
        // 0x4fd
        if (v1 != 2047) {
            // 0x574
            return result;
        }
        // 0x509
        if (v3 == 0) {
            // 0x574
            return a;
        }
        goto lab_0x512;
    } else {
        int32_t v9 = v1; // 0x4f4
        int32_t v10 = v9 - (int32_t)v2; // 0x4f4
        if (v10 < 0) {
            if (v2 != 2047) {
                int64_t v11 = (v1 == 0 ? 0 : 0x4000000000000000) | v3; // 0x6a8
                int32_t v12 = v10 + (int32_t)(v1 == 0); // 0x6ac
                int64_t v13 = v11; // 0x6af
                if (v12 != 0) {
                    if (v12 < -63) {
                        // 0x6d5
                        v13 = v11 != 0;
                    } else {
                        // 0x6b7
                        v13 = v11 >> (int64_t)(-v12 & 63) | (int64_t)(v11 << (int64_t)(v12 & 63) != 0);
                    }
                }
                // 0x6e0
                v7 = result | 0x4000000000000000;
                v6 = v2;
                v4 = v13;
                goto lab_0x6e6;
            } else {
                if (result == 0) {
                    // 0x574
                    return 0x8000000000000000 * (int64_t)zSign ^ -0x10000000000000;
                }
                goto lab_0x512;
            }
        } else {
            // 0x5ad
            v8 = 1;
            v5 = 1;
            if (v9 == 0) {
                goto lab_0x667;
            } else {
                // 0x5b5
                v8 = v1;
                v5 = v2;
                if (v9 != 2047) {
                    goto lab_0x667;
                } else {
                    if ((result || v3) == 0) {
                        char * v14 = (char *)*(int64_t *)1499; // 0x5db
                        *v14 = *v14 | 16;
                        // 0x574
                        return 0x7fffffffffffffff;
                    }
                    goto lab_0x512;
                }
            }
        }
    }
  lab_0x512:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x565
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x574
            return 0x7ffffffffffff;
        }
    }
    char * v15 = (char *)*(int64_t *)1392; // 0x570
    *v15 = *v15 | 16;
    // 0x574
    return 0x7ffffffffffff;
  lab_0x667:;
    int64_t v16; // 0x4b0
    int64_t v17; // 0x4b0
    int32_t v18; // 0x4b0
    if (v3 <= result) {
        // 0x677
        v7 = result;
        v6 = v5;
        v4 = v3;
        if (v3 >= result) {
            // 0x574
            return *(int32_t *)*(int64_t *)1664 == 3 ? -0x8000000000000000 : 0;
        }
        goto lab_0x6e6;
    } else {
        // 0x66c
        v17 = v3 - result;
        v18 = zSign;
        v16 = v8;
        goto lab_0x6ec;
    }
  lab_0x6e6:
    // 0x6e6
    v17 = v7 - v4;
    v18 = zSign ^ 1;
    v16 = v6;
    goto lab_0x6ec;
  lab_0x6ec:;
    uint64_t v19 = v17;
    int64_t v20 = v19 < 0x100000000 ? v19 : v19 / 0x100000000;
    int64_t v21 = (int32_t)v20 >= 0x10000 ? v20 : 0x10000 * v20; // 0x709
    int32_t v22 = 16 * (int32_t)((int32_t)v20 < 0x10000); // 0x710
    uint64_t v23 = (int32_t)v21 >= 0x1000000 ? v21 : 256 * v21; // 0x725
    int32_t v24 = v19 >= 0x100000000 ? -1 : 31; // 0x73a
    int32_t v25 = *(int32_t *)((v23 / 0x400000 & 1020) + (int64_t)&g1); // 0x73d
    int32_t v26 = v24 + v25 + ((int32_t)v21 >= 0x1000000 ? v22 : v22 | 8); // 0x741
    return roundAndPackFloat64(v18, -1 - v26 + (int32_t)v16, v19 << (int64_t)(v26 & 63));
}
int64_t float64_add(uint64_t a1, uint64_t a2) {
    int32_t v1 = a1 / 0x8000000000000000; // 0x76e
    if (v1 != (int32_t)(a2 / 0x8000000000000000)) {
        // 0x777
        return subFloat64Sigs(a1, a2, v1);
    }
    // 0x772
    return addFloat64Sigs(a1, a2, v1);
}
float64_t ullong_to_double(int64_t x) {
    // 0x780
    int128_t v1; // 0x780
    return (int64_t)v1;
}
