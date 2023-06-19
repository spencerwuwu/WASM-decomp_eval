
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfsin.h"
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
void shift64ExtraRightJamming(uint64_t a0, int64_t a1, int32_t count, int64_t * z0Ptr, int64_t * z1Ptr) {
    // 0x40
    if (count == 0) {
        // 0x8d
        *z1Ptr = a1;
        *z0Ptr = a0;
        return;
    }
    if (count <= 63) {
        int64_t v1 = count;
        // 0x8d
        *z1Ptr = a0 << (-v1 & 63) | (int64_t)(a1 != 0);
        *z0Ptr = a0 >> (v1 & 63);
        return;
    }
    int64_t v2; // 0x40
    if (count != 64) {
        // 0x82
        v2 = (a1 | a0) != 0;
    } else {
        // 0x77
        v2 = (int64_t)(a1 != 0) | a0;
    }
    // 0x8d
    *z1Ptr = v2;
    *z0Ptr = 0;
}
int64_t add128(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 + a2; // 0xa0
    *(int64_t *)a6 = v1;
    *(int64_t *)a5 = a3 + a1 + (int64_t)(v1 < a2);
    int64_t result; // 0xa0
    return result;
}
int64_t sub128(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0xb0
    *(int64_t *)a6 = a2 - a4;
    *(int64_t *)a5 = a1 - a3 + (int64_t)(a2 < a4);
    int64_t result; // 0xb0
    return result;
}
int64_t mul64To128(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a1 / 0x100000000; // 0xc3
    uint64_t v2 = a2 / 0x100000000; // 0xca
    uint64_t v3 = (a2 & 0xffffffff) * v1;
    uint64_t v4 = v3 + v2 * (a1 & 0xffffffff); // 0xe2
    int64_t result = 0x100000000 * (int64_t)(v4 < v3); // 0xe8
    uint64_t v5 = a2 * a1; // 0xfa
    *(int64_t *)a4 = v5;
    *(int64_t *)a3 = v4 / 0x100000000 + v2 * v1 + result + (int64_t)(v5 < 0x100000000 * v4);
    return result;
}
int64_t float_raise(int64_t a1) {
    int64_t result = *(int64_t *)279; // 0x110
    int32_t * v1 = (int32_t *)result; // 0x117
    *v1 = *v1 | (int32_t)a1;
    return result;
}
int64_t float64_is_nan(int64_t a1) {
    // 0x120
    return (bool)((uint64_t)(2 * a1) >= 0xffe0000000000001);
}
int64_t float64_is_signaling_nan(int64_t a1) {
    // 0x140
    return (bool)((a1 & 0x7ff8000000000000) == 0x7ff0000000000000 == ((a1 & 0x7ffffffffffff) != 0));
}
int64_t extractFloat64Frac(int64_t a1) {
    // 0x170
    return a1 & 0xfffffffffffff;
}
int64_t extractFloat64Exp(uint64_t a1) {
    // 0x180
    return a1 / 0x10000000000000 & 2047;
}
int64_t extractFloat64Sign(uint64_t a1) {
    // 0x190
    return a1 / 0x8000000000000000;
}
int64_t normalizeFloat64Subnormal(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 < 0x100000000 ? a1 : a1 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x1c2
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x1ca
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x1df
    int32_t v5 = (int32_t)v2 >= 0x1000000 ? v3 : v3 | 8; // 0x1e3
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g1); // 0x1f4
    int32_t v7 = v6 + (v5 | 32 * (int32_t)(a1 < 0x100000000)); // 0x1f4
    *(int64_t *)a3 = a1 << (int64_t)(v7 + 53 & 63);
    uint32_t result = 12 - v7; // 0x207
    *(int32_t *)a2 = result;
    return result;
}
int64_t packFloat64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x210
    return 0x8000000000000000 * a1 + a3 + 0x10000000000000 * a2;
}
int64_t roundAndPackFloat64(uint32_t zSign, int32_t zExp, uint64_t zSig) {
    int64_t result = zSign; // 0x220
    if (*(int32_t *)*(int64_t *)553 != 0) {
        // 0x22f
        return result;
    }
    int64_t v1 = zExp;
    char * v2; // 0x30c
    if ((v1 & 0xffff) >= 2045) {
        char * v3; // 0x29b
        if (zExp > 2045) {
            // 0x294
            v3 = (char *)*(int64_t *)667;
            *v3 = *v3 | 9;
            return 0x8000000000000000 * result | 0x7ff0000000000000;
        }
        if (zExp == 2045) {
            if (zSig < -512) {
                // 0x294
                v3 = (char *)*(int64_t *)667;
                *v3 = *v3 | 9;
                return 0x8000000000000000 * result | 0x7ff0000000000000;
            }
        }
        if (zExp < 0) {
            int64_t v4; // 0x220
            if (zExp < -63) {
                // 0x2d8
                v4 = zSig != 0;
            } else {
                // 0x2bc
                v4 = zSig >> (-v1 & 63) | (int64_t)(zSig << (v1 & 63) != 0);
            }
            // 0x2e0
            if ((v4 & 1023) == 0) {
                // 0x22f
                return result;
            }
            char * v5 = (char *)*(int64_t *)760; // 0x2f8
            *v5 = *v5 | 4;
            // 0x305
            v2 = (char *)*(int64_t *)780;
            *v2 = *v2 | 1;
            // 0x22f
            return result;
        }
    }
    if ((zSig & 1023) == 0) {
        // 0x22f
        return result;
    }
    // 0x305
    v2 = (char *)*(int64_t *)780;
    *v2 = *v2 | 1;
    // 0x22f
    return result;
}
int64_t normalizeRoundAndPackFloat64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 < 0x100000000 ? a3 : a3 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x372
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x376
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x38c
    int32_t v5 = a3 >= 0x100000000 ? -1 : 31; // 0x3a1
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g1); // 0x3a6
    int32_t v7 = ((int32_t)v2 >= 0x1000000 ? v3 : v3 | 8) + v5 + v6; // 0x3a6
    return roundAndPackFloat64((int32_t)a1, (int32_t)a2 - v7, a3 << (int64_t)(v7 & 63));
}
int64_t int32_to_float64(int64_t a1) {
    int32_t v1 = a1; // 0x3c0
    if (v1 == 0) {
        // 0x428
        return 0;
    }
    uint32_t v2 = v1 < 0 ? -v1 : v1; // 0x3cd
    uint32_t v3 = v2 >= 0x10000 ? v2 : 0x10000 * v2; // 0x3e1
    int32_t v4 = 16 * (int32_t)(v2 < 0x10000); // 0x3e4
    uint32_t v5 = v3 >= 0x1000000 ? v3 : 256 * v3; // 0x3f6
    int32_t v6 = *(int32_t *)((int64_t)(4 * v5 / 0x1000000) + (int64_t)&g1); // 0x408
    int32_t v7 = v6 + (v3 >= 0x1000000 ? v4 : v4 | 8); // 0x408
    return 0x10000000000000 * (int64_t)(1053 - v7) + 0x8000000000000000 * (int64_t)(a1 < 0) + ((int64_t)v2 << (int64_t)(v7 + 21 & 63));
}
int64_t addFloat64Sigs(int64_t a, uint64_t b, int32_t zSign) {
    int64_t v1 = (uint64_t)a / 0x10000000000000 & 2047; // 0x442
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x44e
    int64_t v3 = 512 * a & 0x1ffffffffffffe00; // 0x462
    int64_t v4 = 512 * b & 0x1ffffffffffffe00; // 0x46c
    int32_t v5 = v1;
    int32_t v6 = v5 - (int32_t)v2; // 0x472
    int64_t v7; // 0x430
    int64_t v8; // 0x430
    int64_t v9; // 0x430
    if (v1 > v2) {
        if (v1 != 2047) {
            int64_t v10 = v2 != 0 ? v4 | 0x2000000000000000 : v4; // 0x559
            int32_t v11 = v6 - (int32_t)(v2 == 0); // 0x55d
            v9 = v1;
            v8 = v3;
            v7 = v10;
            if (v11 != 0) {
                if (v11 > 63) {
                    // 0x5ab
                    v9 = v1;
                    v8 = v3;
                    v7 = v10 != 0;
                } else {
                    // 0x568
                    v9 = v1;
                    v8 = v3;
                    v7 = v10 >> (int64_t)(v11 & 63) | (int64_t)(v10 << (int64_t)(-v11 & 63) != 0);
                }
            }
            goto lab_0x5b6;
        } else {
            // 0x486
            if (v3 == 0) {
                // 0x4f1
                return a;
            }
            goto lab_0x48f;
        }
    } else {
        int64_t v12 = zSign;
        if (v6 < 0) {
            if (v2 != 2047) {
                int64_t v13 = v1 != 0 ? v3 | 0x2000000000000000 : v3; // 0x611
                int32_t v14 = v6 + (int32_t)(v1 == 0); // 0x615
                v9 = v2;
                v8 = v13;
                v7 = v4;
                if (v14 != 0) {
                    if (v14 < -63) {
                        // 0x646
                        v9 = v2;
                        v8 = v13 != 0;
                        v7 = v4;
                    } else {
                        // 0x620
                        v9 = v2;
                        v8 = v13 >> (int64_t)(-v14 & 63) | (int64_t)(v13 << (int64_t)(v14 & 63) != 0);
                        v7 = v4;
                    }
                }
                goto lab_0x5b6;
            } else {
                if (v4 == 0) {
                    // 0x4f1
                    return 0x8000000000000000 * v12 | 0x7ff0000000000000;
                }
                goto lab_0x48f;
            }
        } else {
            if (v5 == 0) {
                // 0x4f1
                return (v4 + v3) / 512 | 0x8000000000000000 * v12;
            }
            if (v5 != 2047) {
                // 0x5ce
                return roundAndPackFloat64(zSign, v5, v4 + v3 | 0x4000000000000000);
            }
            // 0x53d
            if ((v4 || v3) == 0) {
                // 0x4f1
                return a;
            }
            goto lab_0x48f;
        }
    }
  lab_0x5b6:;
    int64_t v15 = (v8 | 0x2000000000000000) + v7; // 0x5b9
    int64_t v16 = 2 * v15; // 0x5c1
    int32_t v17 = v9 - (int64_t)(v16 >= 0);
    return roundAndPackFloat64(zSign, v17, v16 < 0 ? v15 : v16);
  lab_0x48f:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x4e2
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x4f1
            return 0x7ffffffffffff;
        }
    }
    char * v18 = (char *)*(int64_t *)1261; // 0x4ed
    *v18 = *v18 | 16;
    // 0x4f1
    return 0x7ffffffffffff;
}
int64_t subFloat64Sigs(uint64_t a, uint64_t b, uint32_t zSign) {
    int64_t v1 = a / 0x10000000000000 & 2047; // 0x672
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x67f
    uint64_t v3 = 1024 * a & 0x3ffffffffffffc00; // 0x694
    int64_t result = 1024 * b & 0x3ffffffffffffc00; // 0x69e
    int64_t v4; // 0x660
    int64_t v5; // 0x660
    int64_t v6; // 0x660
    int64_t v7; // 0x660
    int64_t v8; // 0x660
    if (v1 > v2) {
        // 0x6ad
        if (v1 != 2047) {
            // 0x724
            return result;
        }
        // 0x6b9
        if (v3 == 0) {
            // 0x724
            return a;
        }
        goto lab_0x6c2;
    } else {
        int32_t v9 = v1; // 0x6a4
        int32_t v10 = v9 - (int32_t)v2; // 0x6a4
        if (v10 < 0) {
            if (v2 != 2047) {
                int64_t v11 = (v1 == 0 ? 0 : 0x4000000000000000) | v3; // 0x858
                int32_t v12 = v10 + (int32_t)(v1 == 0); // 0x85c
                int64_t v13 = v11; // 0x85f
                if (v12 != 0) {
                    if (v12 < -63) {
                        // 0x885
                        v13 = v11 != 0;
                    } else {
                        // 0x867
                        v13 = v11 >> (int64_t)(-v12 & 63) | (int64_t)(v11 << (int64_t)(v12 & 63) != 0);
                    }
                }
                // 0x890
                v7 = result | 0x4000000000000000;
                v6 = v2;
                v4 = v13;
                goto lab_0x896;
            } else {
                if (result == 0) {
                    // 0x724
                    return 0x8000000000000000 * (int64_t)zSign ^ -0x10000000000000;
                }
                goto lab_0x6c2;
            }
        } else {
            // 0x75d
            v8 = 1;
            v5 = 1;
            if (v9 == 0) {
                goto lab_0x817;
            } else {
                // 0x765
                v8 = v1;
                v5 = v2;
                if (v9 != 2047) {
                    goto lab_0x817;
                } else {
                    if ((result || v3) == 0) {
                        char * v14 = (char *)*(int64_t *)1931; // 0x78b
                        *v14 = *v14 | 16;
                        // 0x724
                        return 0x7fffffffffffffff;
                    }
                    goto lab_0x6c2;
                }
            }
        }
    }
  lab_0x6c2:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x715
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x724
            return 0x7ffffffffffff;
        }
    }
    char * v15 = (char *)*(int64_t *)1824; // 0x720
    *v15 = *v15 | 16;
    // 0x724
    return 0x7ffffffffffff;
  lab_0x817:;
    int64_t v16; // 0x660
    int64_t v17; // 0x660
    int32_t v18; // 0x660
    if (v3 <= result) {
        // 0x827
        v7 = result;
        v6 = v5;
        v4 = v3;
        if (v3 >= result) {
            // 0x724
            return *(int32_t *)*(int64_t *)2096 == 3 ? -0x8000000000000000 : 0;
        }
        goto lab_0x896;
    } else {
        // 0x81c
        v17 = v3 - result;
        v18 = zSign;
        v16 = v8;
        goto lab_0x89c;
    }
  lab_0x896:
    // 0x896
    v17 = v7 - v4;
    v18 = zSign ^ 1;
    v16 = v6;
    goto lab_0x89c;
  lab_0x89c:;
    uint64_t v19 = v17;
    int64_t v20 = v19 < 0x100000000 ? v19 : v19 / 0x100000000;
    int64_t v21 = (int32_t)v20 >= 0x10000 ? v20 : 0x10000 * v20; // 0x8b9
    int32_t v22 = 16 * (int32_t)((int32_t)v20 < 0x10000); // 0x8c0
    uint64_t v23 = (int32_t)v21 >= 0x1000000 ? v21 : 256 * v21; // 0x8d5
    int32_t v24 = v19 >= 0x100000000 ? -1 : 31; // 0x8ea
    int32_t v25 = *(int32_t *)((v23 / 0x400000 & 1020) + (int64_t)&g1); // 0x8ed
    int32_t v26 = v24 + v25 + ((int32_t)v21 >= 0x1000000 ? v22 : v22 | 8); // 0x8f1
    return roundAndPackFloat64(v18, -1 - v26 + (int32_t)v16, v19 << (int64_t)(v26 & 63));
}
int64_t float64_add(uint64_t a1, uint64_t a2) {
    int32_t v1 = a1 / 0x8000000000000000; // 0x91e
    if (v1 != (int32_t)(a2 / 0x8000000000000000)) {
        // 0x927
        return subFloat64Sigs(a1, a2, v1);
    }
    // 0x922
    return addFloat64Sigs(a1, a2, v1);
}
int64_t float64_mul(uint64_t a, uint64_t b) {
    uint64_t v1 = a & 0xfffffffffffff; // 0x941
    int64_t v2 = a / 0x10000000000000 & 2047; // 0x94e
    uint64_t v3 = b & 0xfffffffffffff; // 0x955
    int64_t v4 = b / 0x10000000000000 & 2047; // 0x962
    uint64_t v5 = b ^ a; // 0x96a
    char * v6; // 0x9a8
    if (v2 != 2047) {
        if (v4 != 2047) {
            int64_t v7 = v1; // 0xa5d
            int64_t v8 = v2; // 0xa5d
            if (v2 == 0) {
                if (v1 == 0) {
                    // 0xc13
                    return v5 & -0x8000000000000000;
                }
                int64_t v9 = v1 < 0x100000000 ? a : v1 / 0x100000000;
                int64_t v10 = (int32_t)v9 >= 0x10000 ? v9 : 0x10000 * v9; // 0xa8e
                int32_t v11 = 16 * (int32_t)((int32_t)v9 < 0x10000); // 0xa96
                uint64_t v12 = (int32_t)v10 >= 0x1000000 ? v10 : 256 * v10; // 0xaab
                int32_t v13 = (int32_t)v10 >= 0x1000000 ? v11 : v11 | 8; // 0xaaf
                int32_t v14 = *(int32_t *)((v12 / 0x400000 & 1020) + (int64_t)&g1); // 0xac1
                int32_t v15 = v14 + (v13 | 32 * (int32_t)(v1 < 0x100000000)); // 0xac1
                v7 = v1 << (int64_t)(v15 + 53 & 63);
                v8 = 12 - v15;
            }
            int64_t v16 = v4; // 0xae0
            int64_t v17 = v3; // 0xae0
            if (v4 == 0) {
                if (v3 == 0) {
                    // 0xc13
                    return v5 & -0x8000000000000000;
                }
                int64_t v18 = v3 < 0x100000000 ? b : v3 / 0x100000000;
                int64_t v19 = (int32_t)v18 >= 0x10000 ? v18 : 0x10000 * v18; // 0xb0b
                int32_t v20 = 16 * (int32_t)((int32_t)v18 < 0x10000); // 0xb12
                uint64_t v21 = (int32_t)v19 >= 0x1000000 ? v19 : 256 * v19; // 0xb25
                int32_t v22 = (int32_t)v19 >= 0x1000000 ? v20 : v20 | 8; // 0xb28
                int32_t v23 = *(int32_t *)((v21 / 0x400000 & 1020) + (int64_t)&g1); // 0xb38
                int32_t v24 = v23 + (v22 | 32 * (int32_t)(v3 < 0x100000000)); // 0xb38
                v16 = 12 - v24;
                v17 = v3 << (int64_t)(v24 + 53 & 63);
            }
            int64_t v25 = 1024 * v7; // 0xb4f
            uint64_t v26 = v25 | 0x4000000000000000; // 0xb5d
            int64_t v27 = 2048 * v17; // 0xb60
            uint64_t v28 = v27 | -0x8000000000000000; // 0xb64
            uint64_t v29 = v26 / 0x100000000; // 0xb6a
            uint64_t v30 = v28 / 0x100000000; // 0xb71
            uint64_t v31 = (v27 & 0xfffff800) * v29;
            uint64_t v32 = v30 * (v25 & 0xfffffc00) + v31; // 0xb88
            uint64_t v33 = v28 * v26; // 0xba1
            int64_t v34 = v32 / 0x100000000 + v30 * v29 + 0x100000000 * (int64_t)(v32 < v31) + (int64_t)(v33 < 0x100000000 * v32) | (int64_t)(v33 != 0); // 0xbb3
            int64_t v35 = 2 * v34; // 0xbbb
            int64_t v36 = v35 < 0 ? v34 : v35; // 0xbc2
            return roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)v8 - 1023 + (int32_t)v16 + (int32_t)(v35 >= 0), v36);
        }
        if (v3 == 0) {
            if ((v2 || v1) != 0) {
                // 0xbef
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            // 0x9a1
            v6 = (char *)*(int64_t *)2472;
            *v6 = *v6 | 16;
            return 0x7fffffffffffffff;
        }
    } else {
        if (v1 == 0) {
            if (v3 != 0 != (v4 == 2047)) {
                if ((v4 || v3) != 0) {
                    // 0xbef
                    return v5 & -0x8000000000000000 | 0x7ff0000000000000;
                }
                // 0x9a1
                v6 = (char *)*(int64_t *)2472;
                *v6 = *v6 | 16;
                return 0x7fffffffffffffff;
            }
        }
    }
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0xa28
            return 0x7ffffffffffff;
        }
    }
    char * v37 = (char *)*(int64_t *)2596; // 0xa24
    *v37 = *v37 | 16;
    // 0xa28
    return 0x7ffffffffffff;
}
int64_t float64_div(uint64_t a, uint64_t b) {
    uint64_t v1 = a & 0xfffffffffffff; // 0xc3a
    int64_t v2 = a / 0x10000000000000 & 2047; // 0xc47
    uint64_t v3 = b & 0xfffffffffffff; // 0xc4e
    int64_t v4 = b / 0x10000000000000 & 2047; // 0xc58
    uint64_t v5 = b ^ a; // 0xc60
    int64_t v6; // 0xc20
    int64_t v7; // 0xc20
    if (v2 != 2047) {
        int32_t v8 = v4; // 0xc9d
        if (v8 == 0) {
            if (v3 == 0) {
                int32_t * v9 = (int32_t *)*(int64_t *)3882; // 0xf2a
                int32_t v10 = *v9; // 0xf2a
                if ((v2 || v1) == 0) {
                    // 0x1036
                    *v9 = v10 | 16;
                    // 0xd1d
                    return 0x7fffffffffffffff;
                }
                // 0xf32
                *v9 = v10 | 2;
                // 0xd1d
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            int64_t v11 = v3 < 0x100000000 ? b : v3 / 0x100000000;
            int64_t v12 = (int32_t)v11 >= 0x10000 ? v11 : 0x10000 * v11; // 0xd7b
            int32_t v13 = 16 * (int32_t)((int32_t)v11 < 0x10000); // 0xd82
            uint64_t v14 = (int32_t)v12 >= 0x1000000 ? v12 : 256 * v12; // 0xd95
            int32_t v15 = (int32_t)v12 >= 0x1000000 ? v13 : v13 | 8; // 0xd98
            int32_t v16 = *(int32_t *)((v14 / 0x400000 & 1020) + (int64_t)&g1); // 0xda8
            int32_t v17 = v16 + (v15 | 32 * (int32_t)(v3 < 0x100000000)); // 0xda8
            v7 = 12 - v17;
            v6 = v3 << (int64_t)(v17 + 53 & 63);
            goto lab_0xdb8;
        } else {
            // 0xca5
            v7 = v4;
            v6 = v3;
            if (v8 != 2047) {
                goto lab_0xdb8;
            } else {
                if (v3 == 0) {
                    // 0xd1d
                    return v5 & -0x8000000000000000;
                }
                goto lab_0xcb9;
            }
        }
    } else {
        if (v1 == 0) {
            if (v4 != 2047) {
                // 0xd1d
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            if (v3 == 0) {
                char * v18 = (char *)*(int64_t *)3208; // 0xc88
                *v18 = *v18 | 16;
                // 0xd1d
                return 0x7fffffffffffffff;
            }
        }
        goto lab_0xcb9;
    }
  lab_0xcb9:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0xd0d
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0xd1d
            return 0x7ffffffffffff;
        }
    }
    char * v19 = (char *)*(int64_t *)3353; // 0xd19
    *v19 = *v19 | 16;
    // 0xd1d
    return 0x7ffffffffffff;
  lab_0xdb8:;
    int64_t v20 = v2; // 0xdbb
    int64_t v21 = v1; // 0xdbb
    if (v2 == 0) {
        if (v1 == 0) {
            // 0xd1d
            return v5 & -0x8000000000000000;
        }
        int64_t v22 = v1 < 0x100000000 ? a : v1 / 0x100000000;
        int64_t v23 = (int32_t)v22 >= 0x10000 ? v22 : 0x10000 * v22; // 0xde6
        int32_t v24 = 16 * (int32_t)((int32_t)v22 < 0x10000); // 0xded
        uint64_t v25 = (int32_t)v23 >= 0x1000000 ? v23 : 256 * v23; // 0xe02
        int32_t v26 = (int32_t)v23 >= 0x1000000 ? v24 : v24 | 8; // 0xe06
        int32_t v27 = *(int32_t *)((v25 / 0x400000 & 1020) + (int64_t)&g1); // 0xe17
        int32_t v28 = v27 + (v26 | 32 * (int32_t)(v1 < 0x100000000)); // 0xe17
        v20 = 12 - v28;
        v21 = v1 << (int64_t)(v28 + 53 & 63);
    }
    int64_t v29 = v20 - v7; // 0xe2a
    uint64_t v30 = 1024 * v21 | 0x4000000000000000; // 0xe3f
    int64_t v31 = 2048 * v6; // 0xe45
    uint64_t v32 = v31 | -0x8000000000000000; // 0xe53
    uint64_t v33 = (int64_t)(v32 <= 2 * v30); // 0xe5f
    uint64_t v34 = v30 >> v33;
    if (v32 <= v34) {
        // 0x1027
        return roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v29 + v33) + 1021, -1);
    }
    uint64_t v35 = v32 / 0x100000000;
    uint64_t v36 = v32 & -0x100000000; // 0xe89
    int64_t v37 = -0x100000000; // 0xe97
    if (v36 > v34) {
        // 0xe99
        v37 = 0x100000000 * v34 / v35;
    }
    uint64_t v38 = v37 / 0x100000000; // 0xeab
    int64_t v39 = v31 & 0xfffff800;
    uint64_t v40 = v38 * v39;
    uint64_t v41 = v37 * v32; // 0xed2
    int64_t v42 = -v41; // 0xed9
    int64_t v43 = -1 * v35;
    int64_t v44 = v43 * v38 + v34 - v40 / 0x100000000 + (int64_t)(v41 != 0) + (int64_t)(v41 < 0x100000000 * v40); // 0xee5
    int64_t v45 = v42; // 0xee9
    int64_t v46 = v44; // 0xee9
    int64_t v47 = v37; // 0xee9
    if (v44 < 0) {
        int64_t v48 = v44; // 0xf5b
        int64_t v49 = v37; // 0xf5b
        v49 -= 0x100000000;
        int64_t v50 = v42 + 0x80000000000 * v6; // 0xf63
        v48 = v48 + v35 + (int64_t)(v50 < v42);
        v45 = v50;
        v46 = v48;
        v47 = v49;
        while (v48 < 0) {
            uint64_t v51 = v50;
            v49 -= 0x100000000;
            v50 = v51 + 0x80000000000 * v6;
            v48 = v48 + v35 + (int64_t)(v50 < v51);
            v45 = v50;
            v46 = v48;
            v47 = v49;
        }
    }
    uint64_t v52 = 0x100000000 * v46 | v45 / 0x100000000; // 0xf6b
    int64_t v53 = 0xffffffff; // 0xf78
    if (v36 > v52) {
        // 0xf7a
        v53 = v52 / v35;
    }
    int64_t v54 = v53 | v47; // 0xf82
    int64_t v55 = v29 + v33; // 0xf85
    if ((v54 & 511) >= 3) {
        // 0x1027
        return roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)v55 + 1021, v54);
    }
    uint64_t v56 = v54 / 0x100000000; // 0xfa9
    uint64_t v57 = (v54 & 0xffffffff) * v35;
    uint64_t v58 = v57 + v56 * v39; // 0xfc4
    uint64_t v59 = v54 * v32; // 0xfd9
    int64_t v60 = -v59; // 0xfe0
    int64_t v61 = v34 - 0x100000000 + v43 * v56 + (int64_t)(v59 != 0) - v58 / 0x100000000 + (int64_t)(v59 < 0x100000000 * v58) + 0x100000000 * (int64_t)(v58 >= v57); // 0x1004
    int64_t v62 = v60; // 0x1008
    int64_t v63 = v54; // 0x1008
    if (v61 < 0) {
        int64_t v64 = v54 - 1; // 0x1010
        int64_t v65 = v60 + v32; // 0x1013
        int64_t v66 = v61 + (int64_t)(v65 < v60); // 0x1016
        int64_t v67 = v65; // 0x101a
        int64_t v68 = v64; // 0x101a
        int64_t v69 = v66; // 0x101a
        v62 = v65;
        v63 = v64;
        while (v66 < 0) {
            // 0x1010
            v64 = v68 - 1;
            v65 = v67 + v32;
            v66 = v69 + (int64_t)(v65 < v67);
            v67 = v65;
            v68 = v64;
            v69 = v66;
            v62 = v65;
            v63 = v64;
        }
    }
    int64_t v70 = v63 | (int64_t)(v62 != 0); // 0x1024
    // 0x1027
    return roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)v55 + 1021, v70);
}
int64_t float64_le(uint64_t a1, uint64_t a2) {
    char * v1; // 0x108e
    if ((a1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        if ((a1 & 0xfffffffffffff) != 0) {
            // 0x1087
            v1 = (char *)*(int64_t *)0x108e;
            *v1 = *v1 | 16;
            return 0;
        }
    }
    if ((a2 & 0xfffffffffffff) != 0 && (a2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        // 0x1087
        v1 = (char *)*(int64_t *)0x108e;
        *v1 = *v1 | 16;
        return 0;
    }
    int32_t v2 = a1 / 0x8000000000000000; // 0x10a5
    bool v3; // 0x1050
    bool v4; // 0x1050
    if (v2 != (int32_t)(a2 / 0x8000000000000000)) {
        // 0x10b7
        v3 = a1 < 0;
        v4 = ((a2 | a1) & 0x7fffffffffffffff) == 0;
    } else {
        // 0x10a9
        v3 = a1 == a2;
        v4 = v2 != (int32_t)(a1 < a2);
    }
    // 0x10ca
    return v3 | v4;
}
int64_t float64_ge(uint64_t a1, uint64_t a2) {
    char * v1; // 0x110e
    if ((a2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        if ((a2 & 0xfffffffffffff) != 0) {
            // 0x1107
            v1 = (char *)*(int64_t *)0x110e;
            *v1 = *v1 | 16;
            return 0;
        }
    }
    if ((a1 & 0xfffffffffffff) != 0 && (a1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        // 0x1107
        v1 = (char *)*(int64_t *)0x110e;
        *v1 = *v1 | 16;
        return 0;
    }
    int32_t v2 = a2 / 0x8000000000000000; // 0x1125
    bool v3; // 0x10d0
    bool v4; // 0x10d0
    if (v2 != (int32_t)(a1 / 0x8000000000000000)) {
        // 0x1137
        v3 = a2 < 0;
        v4 = ((a2 | a1) & 0x7fffffffffffffff) == 0;
    } else {
        // 0x1129
        v3 = a2 == a1;
        v4 = v2 != (int32_t)(a2 < a1);
    }
    // 0x114a
    return v3 | v4;
}
int64_t float64_neg(int64_t a1) {
    // 0x1150
    return a1 ^ -0x8000000000000000;
}
int64_t local_sin(int64_t rad) {
    int64_t v1 = float64_mul(rad, rad) ^ -0x8000000000000000; // 0x1193
    int64_t v2 = 1; // 0x11af
    int64_t v3 = float64_mul(rad, v1); // 0x11e2
    int64_t v4 = 2 * v2; // 0x11e7
    int64_t v5 = (v4 | 1) * v4; // 0x11f7
    int64_t v6 = (v5 & 0xffff0000) != 0 ? v5 : 0x10000 * v5; // 0x1210
    int32_t v7 = 16 * (int32_t)((v5 & 0xffff0000) == 0); // 0x1213
    uint64_t v8 = (int32_t)v6 >= 0x1000000 ? v6 : 256 * v6; // 0x1226
    int32_t v9 = (int32_t)v6 >= 0x1000000 ? v7 : v7 | 8; // 0x122a
    int32_t v10 = v9 + *(int32_t *)((v8 / 0x400000 & 1020) + (int64_t)&g1); // 0x1231
    int64_t v11 = float64_div(v3, ((v5 & 0xfffffffe) << (int64_t)(v10 + 21 & 63)) + 0x10000000000000 * (int64_t)(1053 - v10)); // 0x124f
    int32_t v12 = rad / 0x8000000000000000; // 0x1268
    int64_t v13; // 0x1170
    if (v12 != (int32_t)(v11 >> 63)) {
        // 0x1280
        v13 = subFloat64Sigs(rad, v11, v12);
    } else {
        // 0x126c
        v13 = addFloat64Sigs(rad, v11, v12);
    }
    int64_t result = v13;
    while ((v11 & 0xfffffffffffff) == 0 || (v11 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        // 0x11c0
        v2++;
        if ((v11 & 0x7fffffffffffffff) <= 0x3ee4f8b588e368f0) {
            // 0x12c1
            return result;
        }
        uint64_t v14 = result;
        v3 = float64_mul(v11, v1);
        v4 = 2 * v2;
        v5 = (v4 | 1) * v4;
        v6 = (v5 & 0xffff0000) != 0 ? v5 : 0x10000 * v5;
        v7 = 16 * (int32_t)((v5 & 0xffff0000) == 0);
        v8 = (int32_t)v6 >= 0x1000000 ? v6 : 256 * v6;
        v9 = (int32_t)v6 >= 0x1000000 ? v7 : v7 | 8;
        v10 = v9 + *(int32_t *)((v8 / 0x400000 & 1020) + (int64_t)&g1);
        v11 = float64_div(v3, ((v5 & 0xfffffffe) << (int64_t)(v10 + 21 & 63)) + 0x10000000000000 * (int64_t)(1053 - v10));
        v12 = v14 / 0x8000000000000000;
        if (v12 != (int32_t)(v11 >> 63)) {
            // 0x1280
            v13 = subFloat64Sigs(v14, v11, v12);
        } else {
            // 0x126c
            v13 = addFloat64Sigs(v14, v11, v12);
        }
        // 0x1285
        result = v13;
    }
    char * v15 = (char *)*(int64_t *)0x12be; // 0x12be
    *v15 = *v15 | 16;
    // 0x12c1
    return result;
}
float64_t ullong_to_double(int64_t x) {
    // 0x12e0
    int128_t v1; // 0x12e0
    return (int64_t)v1;
}
