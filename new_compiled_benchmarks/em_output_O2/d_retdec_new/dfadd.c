
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
    if ((v1 & 0xffff) >= 2045) {
        char * v2; // 0x151
        if (zExp > 2045) {
            // 0x14a
            v2 = (char *)*(int64_t *)337;
            *v2 = *v2 | 9;
            return 0x8000000000000000 * result | 0x7ff0000000000000;
        }
        if (zExp == 2045) {
            if (zSig < -512) {
                // 0x14a
                v2 = (char *)*(int64_t *)337;
                *v2 = *v2 | 9;
                return 0x8000000000000000 * result | 0x7ff0000000000000;
            }
        }
        if (zExp < 0) {
            int64_t v3 = -v1; // 0x1c7
            int64_t v4; // 0xe0
            if ((int32_t)v3 < 64) {
                // 0x1ce
                v4 = zSig >> (v3 & 63) | (int64_t)(zSig << (v1 & 63) != 0);
            } else {
                // 0x1e6
                v4 = zSig != 0;
            }
            // 0x1ee
            if ((v4 & 1023) == 0) {
                // 0xef
                return result;
            }
            int32_t v5 = *(int32_t *)*(int64_t *)512; // 0x200
            // 0x181
            *(int32_t *)*(int64_t *)396 = v5 | 4 | 1;
            // 0xef
            return result;
        }
    }
    if ((zSig & 1023) == 0) {
        // 0xef
        return result;
    }
    // 0x181
    *(int32_t *)*(int64_t *)396 = *(int32_t *)*(int64_t *)382 | 1;
    // 0xef
    return result;
}
int64_t normalizeRoundAndPackFloat64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 < 0x100000000 ? a3 : a3 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x242
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x246
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x25c
    int32_t v5 = a3 >= 0x100000000 ? -1 : 31; // 0x271
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g1); // 0x276
    int32_t v7 = ((int32_t)v2 >= 0x1000000 ? v3 : v3 | 8) + v5 + v6; // 0x276
    return roundAndPackFloat64((int32_t)a1, (int32_t)a2 - v7, a3 << (int64_t)(v7 & 63));
}
int64_t addFloat64Sigs(int64_t a, uint64_t b, int32_t zSign) {
    int64_t v1 = (uint64_t)a / 0x10000000000000 & 2047; // 0x2a2
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x2ae
    int64_t v3 = 512 * a & 0x1ffffffffffffe00; // 0x2c2
    int64_t v4 = 512 * b & 0x1ffffffffffffe00; // 0x2cc
    int32_t v5 = v1;
    int32_t v6 = v5 - (int32_t)v2; // 0x2d2
    int64_t v7; // 0x290
    int64_t v8; // 0x290
    int32_t v9; // 0x290
    int64_t v10; // 0x290
    int64_t v11; // 0x290
    if (v1 > v2) {
        if (v1 != 2047) {
            if (v2 == 0) {
                int32_t v12 = v6 - 1; // 0x3dc
                v9 = v12;
                v7 = v4;
                v11 = v1;
                v10 = v3;
                v8 = v4;
                if (v12 == 0) {
                    goto lab_0x411;
                } else {
                    goto lab_0x3e1;
                }
            } else {
                // 0x3af
                v9 = v6;
                v7 = v4 | 0x2000000000000000;
                goto lab_0x3e1;
            }
        } else {
            // 0x2e6
            if (v3 == 0) {
                // 0x351
                return a;
            }
            goto lab_0x2ef;
        }
    } else {
        // 0x388
        if (v6 < 0) {
            if (v2 != 2047) {
                int64_t v13 = v1 != 0 ? v3 | 0x2000000000000000 : v3; // 0x46c
                int32_t v14 = v6 + (int32_t)(v1 == 0); // 0x470
                v11 = v2;
                v10 = v13;
                v8 = v4;
                if (v14 != 0) {
                    uint32_t v15 = -v14; // 0x478
                    if (v15 < 64) {
                        // 0x47f
                        v11 = v2;
                        v10 = v13 >> (int64_t)(v15 & 63) | (int64_t)(v13 << (int64_t)(v14 & 63) != 0);
                        v8 = v4;
                    } else {
                        // 0x4a0
                        v11 = v2;
                        v10 = v13 != 0;
                        v8 = v4;
                    }
                }
                goto lab_0x411;
            } else {
                if (v4 == 0) {
                    // 0x3c9
                }
                goto lab_0x2ef;
            }
        } else {
            if (v5 == 0) {
                // 0x351
                return (v4 + v3) / 512 | 0x8000000000000000 * (int64_t)zSign;
            }
            if (v5 != 2047) {
                // 0x429
                return roundAndPackFloat64(zSign, v5, v4 + v3 | 0x4000000000000000);
            }
            // 0x39d
            if ((v4 || v3) == 0) {
                // 0x351
                return a;
            }
            goto lab_0x2ef;
        }
    }
  lab_0x2ef:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x342
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x351
            return 0x7ffffffffffff;
        }
    }
    char * v16 = (char *)*(int64_t *)845; // 0x34d
    *v16 = *v16 | 16;
    // 0x351
    return 0x7ffffffffffff;
  lab_0x411:;
    int64_t v17 = (v10 | 0x2000000000000000) + v8; // 0x414
    int64_t v18 = 2 * v17; // 0x41c
    int32_t v19 = v11 - (int64_t)(v18 >= 0);
    return roundAndPackFloat64(zSign, v19, v18 < 0 ? v17 : v18);
  lab_0x3e1:;
    uint64_t v20 = v7;
    uint32_t v21 = v9;
    if (v21 < 64) {
        // 0x3e7
        v11 = v1;
        v10 = v3;
        v8 = v20 >> (int64_t)(v21 & 63) | (int64_t)(v20 << (int64_t)(-v21 & 63) != 0);
    } else {
        // 0x406
        v11 = v1;
        v10 = v3;
        v8 = v20 != 0;
    }
    goto lab_0x411;
}
int64_t subFloat64Sigs(uint64_t a, uint64_t b, uint32_t zSign) {
    int64_t v1 = a / 0x10000000000000 & 2047; // 0x4d2
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x4df
    uint64_t v3 = 1024 * a & 0x3ffffffffffffc00; // 0x4f4
    int64_t result = 1024 * b & 0x3ffffffffffffc00; // 0x4fe
    int64_t v4; // 0x4c0
    int64_t v5; // 0x4c0
    int64_t v6; // 0x4c0
    int64_t v7; // 0x4c0
    int64_t v8; // 0x4c0
    if (v1 > v2) {
        // 0x50d
        if (v1 != 2047) {
            // 0x584
            return result;
        }
        // 0x519
        if (v3 == 0) {
            // 0x584
            return a;
        }
        goto lab_0x522;
    } else {
        int32_t v9 = v1; // 0x504
        int32_t v10 = v9 - (int32_t)v2; // 0x504
        if (v10 < 0) {
            if (v2 != 2047) {
                int64_t v11 = v1 == 0 ? v3 : v3 | 0x4000000000000000; // 0x6ab
                int32_t v12 = v10 + (int32_t)(v1 == 0); // 0x6af
                int64_t v13 = v11; // 0x6b2
                if (v12 != 0) {
                    uint32_t v14 = -v12; // 0x6b7
                    if (v14 < 64) {
                        // 0x6be
                        v13 = v11 >> (int64_t)(v14 & 63) | (int64_t)(v11 << (int64_t)(v12 & 63) != 0);
                    } else {
                        // 0x6d7
                        v13 = v11 != 0;
                    }
                }
                // 0x6e2
                v7 = result | 0x4000000000000000;
                v6 = v2;
                v4 = v13;
                goto lab_0x6e8;
            } else {
                if (result == 0) {
                    // 0x584
                    return 0x8000000000000000 * (int64_t)zSign ^ -0x10000000000000;
                }
                goto lab_0x522;
            }
        } else {
            // 0x5bd
            v8 = 1;
            v5 = 1;
            if (v9 == 0) {
                goto lab_0x66a;
            } else {
                // 0x5c5
                v8 = v1;
                v5 = v2;
                if (v9 != 2047) {
                    goto lab_0x66a;
                } else {
                    if ((result || v3) == 0) {
                        char * v15 = (char *)*(int64_t *)1515; // 0x5eb
                        *v15 = *v15 | 16;
                        // 0x584
                        return 0x7fffffffffffffff;
                    }
                    goto lab_0x522;
                }
            }
        }
    }
  lab_0x522:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x575
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x584
            return 0x7ffffffffffff;
        }
    }
    char * v16 = (char *)*(int64_t *)1408; // 0x580
    *v16 = *v16 | 16;
    // 0x584
    return 0x7ffffffffffff;
  lab_0x66a:;
    int64_t v17; // 0x4c0
    int64_t v18; // 0x4c0
    int32_t v19; // 0x4c0
    if (v3 <= result) {
        // 0x67a
        v7 = result;
        v6 = v5;
        v4 = v3;
        if (v3 >= result) {
            // 0x584
            return *(int32_t *)*(int64_t *)1667 == 3 ? -0x8000000000000000 : 0;
        }
        goto lab_0x6e8;
    } else {
        // 0x66f
        v18 = v3 - result;
        v19 = zSign;
        v17 = v8;
        goto lab_0x6ee;
    }
  lab_0x6e8:
    // 0x6e8
    v18 = v7 - v4;
    v19 = zSign ^ 1;
    v17 = v6;
    goto lab_0x6ee;
  lab_0x6ee:;
    uint64_t v20 = v18;
    int64_t v21 = v20 < 0x100000000 ? v20 : v20 / 0x100000000;
    int64_t v22 = (int32_t)v21 >= 0x10000 ? v21 : 0x10000 * v21; // 0x70b
    int32_t v23 = 16 * (int32_t)((int32_t)v21 < 0x10000); // 0x712
    uint64_t v24 = (int32_t)v22 >= 0x1000000 ? v22 : 256 * v22; // 0x727
    int32_t v25 = v20 >= 0x100000000 ? -1 : 31; // 0x73c
    int32_t v26 = *(int32_t *)((v24 / 0x400000 & 1020) + (int64_t)&g1); // 0x73f
    int32_t v27 = v25 + v26 + ((int32_t)v22 >= 0x1000000 ? v23 : v23 | 8); // 0x743
    return roundAndPackFloat64(v19, -1 - v27 + (int32_t)v17, v20 << (int64_t)(v27 & 63));
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
