
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
    if ((v1 & 0xffff) >= 2045) {
        char * v2; // 0x291
        if (zExp > 2045) {
            // 0x28a
            v2 = (char *)*(int64_t *)657;
            *v2 = *v2 | 9;
            return 0x8000000000000000 * result | 0x7ff0000000000000;
        }
        if (zExp == 2045) {
            if (zSig < -512) {
                // 0x28a
                v2 = (char *)*(int64_t *)657;
                *v2 = *v2 | 9;
                return 0x8000000000000000 * result | 0x7ff0000000000000;
            }
        }
        if (zExp < 0) {
            int64_t v3 = -v1; // 0x307
            int64_t v4; // 0x220
            if ((int32_t)v3 < 64) {
                // 0x30e
                v4 = zSig >> (v3 & 63) | (int64_t)(zSig << (v1 & 63) != 0);
            } else {
                // 0x326
                v4 = zSig != 0;
            }
            // 0x32e
            if ((v4 & 1023) == 0) {
                // 0x22f
                return result;
            }
            int32_t v5 = *(int32_t *)*(int64_t *)832; // 0x340
            // 0x2c1
            *(int32_t *)*(int64_t *)716 = v5 | 4 | 1;
            // 0x22f
            return result;
        }
    }
    if ((zSig & 1023) == 0) {
        // 0x22f
        return result;
    }
    // 0x2c1
    *(int32_t *)*(int64_t *)716 = *(int32_t *)*(int64_t *)702 | 1;
    // 0x22f
    return result;
}
int64_t normalizeRoundAndPackFloat64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 < 0x100000000 ? a3 : a3 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x382
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x386
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x39c
    int32_t v5 = a3 >= 0x100000000 ? -1 : 31; // 0x3b1
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g1); // 0x3b6
    int32_t v7 = ((int32_t)v2 >= 0x1000000 ? v3 : v3 | 8) + v5 + v6; // 0x3b6
    return roundAndPackFloat64((int32_t)a1, (int32_t)a2 - v7, a3 << (int64_t)(v7 & 63));
}
int64_t int32_to_float64(int64_t a1) {
    int32_t v1 = a1; // 0x3d0
    if (v1 == 0) {
        // 0x438
        return 0;
    }
    uint32_t v2 = v1 < 0 ? -v1 : v1; // 0x3dd
    uint32_t v3 = v2 >= 0x10000 ? v2 : 0x10000 * v2; // 0x3f1
    int32_t v4 = 16 * (int32_t)(v2 < 0x10000); // 0x3f4
    uint32_t v5 = v3 >= 0x1000000 ? v3 : 256 * v3; // 0x406
    int32_t v6 = *(int32_t *)((int64_t)(4 * v5 / 0x1000000) + (int64_t)&g1); // 0x418
    int32_t v7 = v6 + (v3 >= 0x1000000 ? v4 : v4 | 8); // 0x418
    return 0x10000000000000 * (int64_t)(1053 - v7) + 0x8000000000000000 * (int64_t)(a1 < 0) + ((int64_t)v2 << (int64_t)(v7 + 21 & 63));
}
int64_t addFloat64Sigs(int64_t a, uint64_t b, int32_t zSign) {
    int64_t v1 = (uint64_t)a / 0x10000000000000 & 2047; // 0x452
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x45e
    int64_t v3 = 512 * a & 0x1ffffffffffffe00; // 0x472
    int64_t v4 = 512 * b & 0x1ffffffffffffe00; // 0x47c
    int32_t v5 = v1;
    int32_t v6 = v5 - (int32_t)v2; // 0x482
    int64_t v7; // 0x440
    int64_t v8; // 0x440
    int32_t v9; // 0x440
    int64_t v10; // 0x440
    int64_t v11; // 0x440
    if (v1 > v2) {
        if (v1 != 2047) {
            if (v2 == 0) {
                int32_t v12 = v6 - 1; // 0x58c
                v9 = v12;
                v7 = v4;
                v11 = v1;
                v10 = v3;
                v8 = v4;
                if (v12 == 0) {
                    goto lab_0x5c1;
                } else {
                    goto lab_0x591;
                }
            } else {
                // 0x55f
                v9 = v6;
                v7 = v4 | 0x2000000000000000;
                goto lab_0x591;
            }
        } else {
            // 0x496
            if (v3 == 0) {
                // 0x501
                return a;
            }
            goto lab_0x49f;
        }
    } else {
        // 0x538
        if (v6 < 0) {
            if (v2 != 2047) {
                int64_t v13 = v1 != 0 ? v3 | 0x2000000000000000 : v3; // 0x61c
                int32_t v14 = v6 + (int32_t)(v1 == 0); // 0x620
                v11 = v2;
                v10 = v13;
                v8 = v4;
                if (v14 != 0) {
                    uint32_t v15 = -v14; // 0x628
                    if (v15 < 64) {
                        // 0x62f
                        v11 = v2;
                        v10 = v13 >> (int64_t)(v15 & 63) | (int64_t)(v13 << (int64_t)(v14 & 63) != 0);
                        v8 = v4;
                    } else {
                        // 0x650
                        v11 = v2;
                        v10 = v13 != 0;
                        v8 = v4;
                    }
                }
                goto lab_0x5c1;
            } else {
                if (v4 == 0) {
                    // 0x579
                }
                goto lab_0x49f;
            }
        } else {
            if (v5 == 0) {
                // 0x501
                return (v4 + v3) / 512 | 0x8000000000000000 * (int64_t)zSign;
            }
            if (v5 != 2047) {
                // 0x5d9
                return roundAndPackFloat64(zSign, v5, v4 + v3 | 0x4000000000000000);
            }
            // 0x54d
            if ((v4 || v3) == 0) {
                // 0x501
                return a;
            }
            goto lab_0x49f;
        }
    }
  lab_0x49f:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x4f2
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x501
            return 0x7ffffffffffff;
        }
    }
    char * v16 = (char *)*(int64_t *)1277; // 0x4fd
    *v16 = *v16 | 16;
    // 0x501
    return 0x7ffffffffffff;
  lab_0x5c1:;
    int64_t v17 = (v10 | 0x2000000000000000) + v8; // 0x5c4
    int64_t v18 = 2 * v17; // 0x5cc
    int32_t v19 = v11 - (int64_t)(v18 >= 0);
    return roundAndPackFloat64(zSign, v19, v18 < 0 ? v17 : v18);
  lab_0x591:;
    uint64_t v20 = v7;
    uint32_t v21 = v9;
    if (v21 < 64) {
        // 0x597
        v11 = v1;
        v10 = v3;
        v8 = v20 >> (int64_t)(v21 & 63) | (int64_t)(v20 << (int64_t)(-v21 & 63) != 0);
    } else {
        // 0x5b6
        v11 = v1;
        v10 = v3;
        v8 = v20 != 0;
    }
    goto lab_0x5c1;
}
int64_t subFloat64Sigs(uint64_t a, uint64_t b, uint32_t zSign) {
    int64_t v1 = a / 0x10000000000000 & 2047; // 0x682
    int64_t v2 = b / 0x10000000000000 & 2047; // 0x68f
    uint64_t v3 = 1024 * a & 0x3ffffffffffffc00; // 0x6a4
    int64_t result = 1024 * b & 0x3ffffffffffffc00; // 0x6ae
    int64_t v4; // 0x670
    int64_t v5; // 0x670
    int64_t v6; // 0x670
    int64_t v7; // 0x670
    int64_t v8; // 0x670
    if (v1 > v2) {
        // 0x6bd
        if (v1 != 2047) {
            // 0x734
            return result;
        }
        // 0x6c9
        if (v3 == 0) {
            // 0x734
            return a;
        }
        goto lab_0x6d2;
    } else {
        int32_t v9 = v1; // 0x6b4
        int32_t v10 = v9 - (int32_t)v2; // 0x6b4
        if (v10 < 0) {
            if (v2 != 2047) {
                int64_t v11 = v1 == 0 ? v3 : v3 | 0x4000000000000000; // 0x85b
                int32_t v12 = v10 + (int32_t)(v1 == 0); // 0x85f
                int64_t v13 = v11; // 0x862
                if (v12 != 0) {
                    uint32_t v14 = -v12; // 0x867
                    if (v14 < 64) {
                        // 0x86e
                        v13 = v11 >> (int64_t)(v14 & 63) | (int64_t)(v11 << (int64_t)(v12 & 63) != 0);
                    } else {
                        // 0x887
                        v13 = v11 != 0;
                    }
                }
                // 0x892
                v7 = result | 0x4000000000000000;
                v6 = v2;
                v4 = v13;
                goto lab_0x898;
            } else {
                if (result == 0) {
                    // 0x734
                    return 0x8000000000000000 * (int64_t)zSign ^ -0x10000000000000;
                }
                goto lab_0x6d2;
            }
        } else {
            // 0x76d
            v8 = 1;
            v5 = 1;
            if (v9 == 0) {
                goto lab_0x81a;
            } else {
                // 0x775
                v8 = v1;
                v5 = v2;
                if (v9 != 2047) {
                    goto lab_0x81a;
                } else {
                    if ((result || v3) == 0) {
                        char * v15 = (char *)*(int64_t *)1947; // 0x79b
                        *v15 = *v15 | 16;
                        // 0x734
                        return 0x7fffffffffffffff;
                    }
                    goto lab_0x6d2;
                }
            }
        }
    }
  lab_0x6d2:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x725
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x734
            return 0x7ffffffffffff;
        }
    }
    char * v16 = (char *)*(int64_t *)1840; // 0x730
    *v16 = *v16 | 16;
    // 0x734
    return 0x7ffffffffffff;
  lab_0x81a:;
    int64_t v17; // 0x670
    int64_t v18; // 0x670
    int32_t v19; // 0x670
    if (v3 <= result) {
        // 0x82a
        v7 = result;
        v6 = v5;
        v4 = v3;
        if (v3 >= result) {
            // 0x734
            return *(int32_t *)*(int64_t *)2099 == 3 ? -0x8000000000000000 : 0;
        }
        goto lab_0x898;
    } else {
        // 0x81f
        v18 = v3 - result;
        v19 = zSign;
        v17 = v8;
        goto lab_0x89e;
    }
  lab_0x898:
    // 0x898
    v18 = v7 - v4;
    v19 = zSign ^ 1;
    v17 = v6;
    goto lab_0x89e;
  lab_0x89e:;
    uint64_t v20 = v18;
    int64_t v21 = v20 < 0x100000000 ? v20 : v20 / 0x100000000;
    int64_t v22 = (int32_t)v21 >= 0x10000 ? v21 : 0x10000 * v21; // 0x8bb
    int32_t v23 = 16 * (int32_t)((int32_t)v21 < 0x10000); // 0x8c2
    uint64_t v24 = (int32_t)v22 >= 0x1000000 ? v22 : 256 * v22; // 0x8d7
    int32_t v25 = v20 >= 0x100000000 ? -1 : 31; // 0x8ec
    int32_t v26 = *(int32_t *)((v24 / 0x400000 & 1020) + (int64_t)&g1); // 0x8ef
    int32_t v27 = v25 + v26 + ((int32_t)v22 >= 0x1000000 ? v23 : v23 | 8); // 0x8f3
    return roundAndPackFloat64(v19, -1 - v27 + (int32_t)v17, v20 << (int64_t)(v27 & 63));
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
    int64_t v2 = a / 0x10000000000000 & 2047; // 0xc46
    uint64_t v3 = b & 0xfffffffffffff; // 0xc4b
    int64_t v4 = b / 0x10000000000000 & 2047; // 0xc55
    uint64_t v5 = b ^ a; // 0xc5f
    int64_t v6; // 0xc20
    int64_t v7; // 0xc20
    if (v2 != 2047) {
        int32_t v8 = v4; // 0xc9c
        if (v8 == 0) {
            if (v3 == 0) {
                int32_t * v9 = (int32_t *)*(int64_t *)3830; // 0xef6
                int32_t v10 = *v9; // 0xef6
                if ((v2 || v1) == 0) {
                    // 0xfad
                    *v9 = v10 | 16;
                    // 0xd1f
                    return 0x7fffffffffffffff;
                }
                // 0xefe
                *v9 = v10 | 2;
                // 0xd1f
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            int64_t v11 = v3 < 0x100000000 ? b : v3 / 0x100000000;
            int64_t v12 = (int32_t)v11 >= 0x10000 ? v11 : 0x10000 * v11; // 0xd80
            int32_t v13 = 16 * (int32_t)((int32_t)v11 < 0x10000); // 0xd88
            uint64_t v14 = (int32_t)v12 >= 0x1000000 ? v12 : 256 * v12; // 0xd9d
            int32_t v15 = (int32_t)v12 >= 0x1000000 ? v13 : v13 | 8; // 0xda1
            int32_t v16 = *(int32_t *)((v14 / 0x400000 & 1020) + (int64_t)&g1); // 0xdb2
            int32_t v17 = v16 + (v15 | 32 * (int32_t)(v3 < 0x100000000)); // 0xdb2
            v6 = 12 - v17;
            v7 = v3 << (int64_t)(v17 + 53 & 63);
            goto lab_0xdc5;
        } else {
            // 0xca5
            v6 = v4;
            v7 = v3;
            if (v8 != 2047) {
                goto lab_0xdc5;
            } else {
                if (v3 == 0) {
                    // 0xd1f
                    return v5 & -0x8000000000000000;
                }
                goto lab_0xcbb;
            }
        }
    } else {
        if (v1 == 0) {
            if (v4 != 2047) {
                // 0xd1f
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            if (v3 == 0) {
                char * v18 = (char *)*(int64_t *)3207; // 0xc87
                *v18 = *v18 | 16;
                // 0xd1f
                return 0x7fffffffffffffff;
            }
        }
        goto lab_0xcbb;
    }
  lab_0xcbb:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0xd0f
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0xd1f
            return 0x7ffffffffffff;
        }
    }
    char * v19 = (char *)*(int64_t *)3355; // 0xd1b
    *v19 = *v19 | 16;
    // 0xd1f
    return 0x7ffffffffffff;
  lab_0xdc5:;
    int64_t v20 = v2; // 0xdc7
    int64_t v21 = v1; // 0xdc7
    if (v2 == 0) {
        if (v1 == 0) {
            // 0xd1f
            return v5 & -0x8000000000000000;
        }
        int64_t v22 = v1 < 0x100000000 ? a : v1 / 0x100000000;
        int64_t v23 = (int32_t)v22 >= 0x10000 ? v22 : 0x10000 * v22; // 0xdf1
        int32_t v24 = 16 * (int32_t)((int32_t)v22 < 0x10000); // 0xdf8
        uint64_t v25 = (int32_t)v23 >= 0x1000000 ? v23 : 256 * v23; // 0xe0a
        int32_t v26 = (int32_t)v23 >= 0x1000000 ? v24 : v24 | 8; // 0xe0d
        int32_t v27 = *(int32_t *)((v25 / 0x400000 & 1020) + (int64_t)&g1); // 0xe1e
        int32_t v28 = v27 + (v26 | 32 * (int32_t)(v1 < 0x100000000)); // 0xe1e
        v20 = 12 - v28;
        v21 = v1 << (int64_t)(v28 + 53 & 63);
    }
    uint64_t v29 = 1024 * v21 | 0x4000000000000000; // 0xe46
    int64_t v30 = 2048 * v7; // 0xe4c
    uint64_t v31 = v30 | -0x8000000000000000; // 0xe5a
    uint64_t v32 = (int64_t)(v31 <= 2 * v29); // 0xe66
    uint64_t v33 = v29 >> v32;
    int64_t result; // 0x1041
    if (v31 <= v33) {
        // 0x1037
        result = roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v20 - v6 + v32) + 1021, -1);
        return result;
    }
    uint64_t v34 = v31 / 0x100000000; // 0xe92
    uint64_t v35 = v31 & -0x100000000; // 0xe99
    int64_t v36 = -0x100000000; // 0xea2
    if (v35 > v33) {
        // 0xea8
        v36 = 0x100000000 * v33 / v34;
    }
    uint64_t v37 = v36 / 0x100000000; // 0xf2f
    int64_t v38 = v30 & 0xfffff800; // 0xf33
    uint64_t v39 = v37 * v38;
    uint64_t v40 = v36 * v31; // 0xf56
    int64_t v41 = -v40; // 0xf5d
    int64_t v42 = -1 * v34;
    int64_t v43 = v42 * v37 + v33 - v39 / 0x100000000 + (int64_t)(v40 != 0) + (int64_t)(v40 < 0x100000000 * v39); // 0xf69
    int64_t v44 = v41; // 0xf6d
    int64_t v45 = v36; // 0xf6d
    int64_t v46 = v43; // 0xf6d
    if (v43 < 0) {
        int64_t v47 = v36; // 0xf73
        int64_t v48 = v43; // 0xf73
        v47 -= 0x100000000;
        int64_t v49 = v41 + 0x80000000000 * v7; // 0xf83
        v48 = v48 + v34 + (int64_t)(v49 < v41);
        v44 = v49;
        v45 = v47;
        v46 = v48;
        while (v48 < 0) {
            uint64_t v50 = v49;
            v47 -= 0x100000000;
            v49 = v50 + 0x80000000000 * v7;
            v48 = v48 + v34 + (int64_t)(v49 < v50);
            v44 = v49;
            v45 = v47;
            v46 = v48;
        }
    }
    uint64_t v51 = v44 / 0x100000000; // 0xf8b
    uint64_t v52 = 0x100000000 * v46 | v51; // 0xf8b
    int64_t v53 = 0xffffffff; // 0xf98
    if (v35 > v52) {
        if ((v46 & 0xffffffff) == 0) {
            // 0xfba
            v53 = v51 / v34;
        } else {
            // 0xfa3
            v53 = v52 / v34;
        }
    }
    int64_t v54 = v53 | v45; // 0xfc1
    if ((v54 & 511) >= 3) {
        // 0x1037
        result = roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v20 - v6 + v32) + 1021, v54);
        return result;
    }
    uint64_t v55 = v54 / 0x100000000; // 0xfd3
    uint64_t v56 = (v54 & 0xffffffff) * v34; // 0xfde
    uint64_t v57 = v56 + v55 * v38; // 0xfe9
    int64_t v58 = v57 < v56 ? -0x100000000 : 0; // 0xfec
    uint64_t v59 = v54 * v31; // 0xffe
    int64_t v60 = -v59; // 0x1005
    int64_t v61 = v42 * v55 + v33 + (int64_t)(v59 != 0) - v57 / 0x100000000 + v58 + (int64_t)(v59 < 0x100000000 * v57); // 0x1018
    int64_t v62 = v60; // 0x101c
    int64_t v63 = v54; // 0x101c
    if (v61 < 0) {
        int64_t v64 = v54 - 1; // 0x1020
        int64_t v65 = v60 + v31; // 0x1023
        int64_t v66 = v61 + (int64_t)(v65 < v60); // 0x1026
        int64_t v67 = v65; // 0x102a
        int64_t v68 = v64; // 0x102a
        int64_t v69 = v66; // 0x102a
        v62 = v65;
        v63 = v64;
        while (v66 < 0) {
            // 0x1020
            v64 = v68 - 1;
            v65 = v67 + v31;
            v66 = v69 + (int64_t)(v65 < v67);
            v67 = v65;
            v68 = v64;
            v69 = v66;
            v62 = v65;
            v63 = v64;
        }
    }
    int64_t v70 = v63 | (int64_t)(v62 != 0); // 0x1034
    // 0x1037
    result = roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v20 - v6 + v32) + 1021, v70);
    return result;
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
    int64_t v6 = (int32_t)v5 >= 0x10000 ? v5 : 0x10000 * v5; // 0x120c
    int32_t v7 = 16 * (int32_t)((int32_t)v5 < 0x10000); // 0x120f
    uint64_t v8 = (int32_t)v6 >= 0x1000000 ? v6 : 256 * v6; // 0x1222
    int32_t v9 = (int32_t)v6 >= 0x1000000 ? v7 : v7 | 8; // 0x1226
    int32_t v10 = v9 + *(int32_t *)((v8 / 0x400000 & 1020) + (int64_t)&g1); // 0x122d
    int64_t v11 = float64_div(v3, ((v5 & 0xfffffffe) << (int64_t)(v10 + 21 & 63)) + 0x10000000000000 * (int64_t)(1053 - v10)); // 0x124b
    int32_t v12 = rad / 0x8000000000000000; // 0x1264
    int64_t v13; // 0x1170
    if (v12 != (int32_t)(v11 >> 63)) {
        // 0x1270
        v13 = subFloat64Sigs(rad, v11, v12);
    } else {
        // 0x1268
        v13 = addFloat64Sigs(rad, v11, v12);
    }
    int64_t result = v13;
    while ((v11 & 0xfffffffffffff) == 0 || (v11 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        // 0x11c0
        v2++;
        if ((v11 & 0x7fffffffffffffff) <= 0x3ee4f8b588e368f0) {
            // 0x12b1
            return result;
        }
        uint64_t v14 = result;
        v3 = float64_mul(v11, v1);
        v4 = 2 * v2;
        v5 = (v4 | 1) * v4;
        v6 = (int32_t)v5 >= 0x10000 ? v5 : 0x10000 * v5;
        v7 = 16 * (int32_t)((int32_t)v5 < 0x10000);
        v8 = (int32_t)v6 >= 0x1000000 ? v6 : 256 * v6;
        v9 = (int32_t)v6 >= 0x1000000 ? v7 : v7 | 8;
        v10 = v9 + *(int32_t *)((v8 / 0x400000 & 1020) + (int64_t)&g1);
        v11 = float64_div(v3, ((v5 & 0xfffffffe) << (int64_t)(v10 + 21 & 63)) + 0x10000000000000 * (int64_t)(1053 - v10));
        v12 = v14 / 0x8000000000000000;
        if (v12 != (int32_t)(v11 >> 63)) {
            // 0x1270
            v13 = subFloat64Sigs(v14, v11, v12);
        } else {
            // 0x1268
            v13 = addFloat64Sigs(v14, v11, v12);
        }
        // 0x1275
        result = v13;
    }
    char * v15 = (char *)*(int64_t *)0x12ae; // 0x12ae
    *v15 = *v15 | 16;
    // 0x12b1
    return result;
}
float64_t ullong_to_double(int64_t x) {
    // 0x12d0
    int128_t v1; // 0x12d0
    return (int64_t)v1;
}
