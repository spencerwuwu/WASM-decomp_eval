
uint64_t fun_5fc(uint64_t rdi);

int32_t fun_609(uint64_t rdi);

uint64_t fun_615(uint64_t rdi);

int32_t fun_622(uint64_t rdi);

void gettimeofday(int64_t rdi);

uint64_t fun_7cc(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi);

void fun_75f(uint64_t rdi);

uint64_t fun_71a(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_6c6(uint64_t rdi, int64_t rsi, void* rdx);

uint64_t roundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx, ...);

uint64_t addFloat64Sigs(uint64_t rdi, uint64_t rsi, uint32_t edx) {
    uint64_t rax4;
    int32_t eax5;
    uint64_t rax6;
    int32_t eax7;
    int32_t v8;
    uint64_t v9;
    uint64_t v10;
    uint64_t v11;
    int32_t v12;
    int64_t rdi13;
    uint64_t rax14;
    uint64_t v15;
    uint64_t rax16;
    int32_t v17;
    int64_t rdi18;
    uint64_t rax19;
    uint64_t rax20;
    int64_t rsi21;
    uint64_t rax22;
    uint64_t rax23;
    uint64_t v24;

    rax4 = fun_5fc(rdi);
    eax5 = fun_609(rdi);
    rax6 = fun_615(rsi);
    eax7 = fun_622(rsi);
    v8 = eax5 - eax7;
    v9 = rax4 << 9;
    v10 = rax6 << 9;
    if (reinterpret_cast<int32_t>(gettimeofday) >= v8) {
        if (v8 >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (eax5 != 0x7ff) {
                if (!reinterpret_cast<int1_t>(eax5 == gettimeofday)) {
                    v11 = 0x4000000000000000 + v9 + v10;
                    v12 = eax5;
                } else {
                    *reinterpret_cast<uint32_t*>(&rdi13) = edx;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax14 = fun_7cc(rdi13);
                    v15 = rax14;
                    goto addr_85e_12;
                }
            } else {
                if ((v9 | v10) == gettimeofday) {
                    v15 = rdi;
                    goto addr_85e_12;
                } else {
                    rax16 = propagateFloat64NaN(rdi, rsi);
                    v15 = rax16;
                    goto addr_85e_12;
                }
            }
        } else {
            if (eax7 != 0x7ff) {
                if (!reinterpret_cast<int1_t>(eax5 == gettimeofday)) {
                    v9 = 0x2000000000000000 | v9;
                }
                fun_75f(v9);
                v17 = eax7;
                goto addr_7fb_23;
            } else {
                if (v10 == gettimeofday) {
                    *reinterpret_cast<uint32_t*>(&rdi18) = edx;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax19 = fun_71a(rdi18, 0x7ff, gettimeofday);
                    v15 = rax19;
                    goto addr_85e_12;
                } else {
                    rax20 = propagateFloat64NaN(rdi, rsi);
                    v15 = rax20;
                    goto addr_85e_12;
                }
            }
        }
    } else {
        if (eax5 != 0x7ff) {
            if (!reinterpret_cast<int1_t>(eax7 == gettimeofday)) {
                v10 = 0x2000000000000000 | v10;
            } else {
                --v8;
            }
            *reinterpret_cast<int32_t*>(&rsi21) = v8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_6c6(v10, rsi21, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 56);
            v17 = eax5;
            goto addr_7fb_23;
        } else {
            if (v9 == gettimeofday) {
                v15 = rdi;
                goto addr_85e_12;
            } else {
                rax22 = propagateFloat64NaN(rdi, rsi);
                v15 = rax22;
                goto addr_85e_12;
            }
        }
    }
    addr_84b_37:
    rax23 = roundAndPackFloat64(edx, v12, v11);
    v15 = rax23;
    addr_85e_12:
    return v15;
    addr_7fb_23:
    v24 = 0x2000000000000000 | v9;
    v11 = v24 + v10 << 1;
    v12 = v17 - 1;
    if (reinterpret_cast<int64_t>(v11) < reinterpret_cast<int64_t>(gettimeofday)) {
        v11 = v24 + v10;
        ++v12;
    }
    goto addr_84b_37;
}

int32_t fun_dd9(uint64_t rdi);

uint32_t fun_de5(uint64_t rdi);

int32_t fun_df1(uint64_t rdi);

uint32_t fun_dfd(uint64_t rdi);

void fun_e3d(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi) {
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;

    fun_dd9(rdi);
    eax3 = fun_de5(rdi);
    eax4 = fun_df1(rsi);
    eax5 = fun_dfd(rsi);
    v6 = 0x8000000000000 | rdi;
    v7 = 0x8000000000000 | rsi;
    if ((eax3 | eax5) != gettimeofday) {
        fun_e3d(16);
    }
    if (eax5 == gettimeofday) {
        if (eax3 == gettimeofday) {
            if (eax4 == gettimeofday) {
                v8 = v6;
            } else {
                v8 = v7;
            }
            v9 = v8;
        } else {
            v9 = v6;
        }
        v10 = v9;
    } else {
        v10 = v7;
    }
    return v10;
}

uint64_t fun_7cc(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_bf5(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

void fun_c6c(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_cbc(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_cf9(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int32_t* gf19 = reinterpret_cast<int32_t*>(0xe47d83e44589008b);

uint32_t* g1092 = reinterpret_cast<uint32_t*>(0x58b4801c983088b);

uint32_t* g109e = reinterpret_cast<uint32_t*>(0x6348e8458b480889);

void fun_ff5(int64_t rdi);

int64_t fun_1006(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1045(uint64_t rdi);

uint64_t fun_10f7(int64_t rdi, int64_t rsi, uint64_t rdx);

void fun_1077(int64_t rdi);

uint64_t roundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx, ...) {
    int32_t v4;
    int32_t* rax5;
    int32_t v6;
    uint32_t v7;
    int32_t v8;
    uint64_t rax9;
    uint32_t v10;
    int32_t eax11;
    uint32_t* rax12;
    uint32_t* rax13;
    int64_t rdi14;
    int64_t rax15;
    uint64_t v16;
    uint64_t rax17;
    uint64_t v18;
    int64_t rdi19;
    int64_t rsi20;
    uint64_t rax21;

    v4 = esi;
    rax5 = gf19;
    v6 = *rax5;
    v7 = static_cast<unsigned char>(reinterpret_cast<uint1_t>(v6 == gettimeofday)) & 1;
    v8 = 0x200;
    if (reinterpret_cast<int1_t>(v7 == gettimeofday)) {
        if (v6 != 1) {
            v8 = 0x3ff;
            if (edi == gettimeofday) {
                if (v6 == 3) {
                    v8 = reinterpret_cast<int32_t>(gettimeofday);
                }
            } else {
                if (v6 == 2) {
                    v8 = reinterpret_cast<int32_t>(gettimeofday);
                }
            }
        } else {
            v8 = reinterpret_cast<int32_t>(gettimeofday);
        }
    }
    rax9 = rdx & 0x3ff;
    v10 = *reinterpret_cast<uint32_t*>(&rax9);
    eax11 = v4;
    if (reinterpret_cast<int32_t>(0x7fd) > reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax11)))) {
        addr_1081_14:
        if (v10 != gettimeofday) {
            rax12 = g1092;
            rax13 = g109e;
            *rax13 = *rax12 | 1;
        }
    } else {
        if (0x7fd < v4 || v4 == 0x7fd && reinterpret_cast<int64_t>(rdx + static_cast<int64_t>(v8)) < reinterpret_cast<int64_t>(gettimeofday)) {
            fun_ff5(9);
            *reinterpret_cast<uint32_t*>(&rdi14) = edi;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            rax15 = fun_1006(rdi14, 0x7ff, gettimeofday);
            v16 = rax15 - reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v8 == gettimeofday)) & 1)))));
            goto addr_10fb_20;
        } else {
            if (v4 >= reinterpret_cast<int32_t>(gettimeofday)) {
                addr_107c_22:
                goto addr_1081_14;
            } else {
                fun_1045(rdx);
                v4 = reinterpret_cast<int32_t>(gettimeofday);
                rax17 = rdx & 0x3ff;
                v10 = *reinterpret_cast<uint32_t*>(&rax17);
                if (gettimeofday) 
                    goto addr_1077_25;
                if (v10 == gettimeofday) 
                    goto addr_1077_25; else 
                    goto addr_106d_27;
            }
        }
    }
    v18 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((v10 ^ 0x200) == gettimeofday)) & 1)) & v7 ^ 0xffffffff))) & rdx + static_cast<int64_t>(v8) >> 10;
    if (reinterpret_cast<int1_t>(v18 == gettimeofday)) {
        v4 = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<uint32_t*>(&rdi19) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi20) = v4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax21 = fun_10f7(rdi19, rsi20, v18);
    v16 = rax21;
    addr_10fb_20:
    return v16;
    addr_1077_25:
    goto addr_107c_22;
    addr_106d_27:
    fun_1077(4);
    goto addr_1077_25;
}

void fun_e3d(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t v17;

    if (*reinterpret_cast<int32_t*>(rbp2 - 32) == gettimeofday) {
        if (*reinterpret_cast<int32_t*>(rbp3 - 24) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp4 - 28) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp5 - 56) = *reinterpret_cast<int64_t*>(rbp6 - 8);
            } else {
                *reinterpret_cast<int64_t*>(rbp7 - 56) = *reinterpret_cast<int64_t*>(rbp8 - 16);
            }
            *reinterpret_cast<int64_t*>(rbp9 - 48) = *reinterpret_cast<int64_t*>(rbp10 - 56);
        } else {
            *reinterpret_cast<int64_t*>(rbp11 - 48) = *reinterpret_cast<int64_t*>(rbp12 - 8);
        }
        *reinterpret_cast<int64_t*>(rbp13 - 40) = *reinterpret_cast<int64_t*>(rbp14 - 48);
    } else {
        *reinterpret_cast<int64_t*>(rbp15 - 40) = *reinterpret_cast<int64_t*>(rbp16 - 16);
    }
    goto v17;
}

void fun_ff5(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_1006(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

void fun_1045(uint64_t rdi) {
    int64_t rbp2;
    uint64_t rax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    uint32_t* rax9;
    uint32_t* rax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rsi22;
    int64_t rbp23;
    uint64_t rdx24;
    int64_t rbp25;
    uint64_t rax26;
    int64_t rbp27;
    int64_t v28;

    *reinterpret_cast<int32_t*>(rbp2 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    rax3 = *reinterpret_cast<uint64_t*>(rbp4 - 24) & 0x3ff;
    *reinterpret_cast<int32_t*>(rbp5 - 44) = *reinterpret_cast<int32_t*>(&rax3);
    if (*reinterpret_cast<int32_t*>(rbp6 - 36) != gettimeofday && *reinterpret_cast<int32_t*>(rbp7 - 44) != gettimeofday) {
        fun_1077(4);
    }
    if (*reinterpret_cast<int32_t*>(rbp8 - 44) != gettimeofday) {
        rax9 = g1092;
        rax10 = g109e;
        *rax10 = *rax9 | 1;
    }
    *reinterpret_cast<uint64_t*>(rbp11 - 24) = *reinterpret_cast<int64_t*>(rbp12 - 24) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp13 - 40))) >> 10;
    *reinterpret_cast<uint64_t*>(rbp14 - 24) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(rbp15 - 44) ^ 0x200) == gettimeofday)) & 1)) & *reinterpret_cast<uint32_t*>(rbp16 - 32) ^ 0xffffffff))) & *reinterpret_cast<uint64_t*>(rbp17 - 24);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp18 - 24) == gettimeofday)) {
        *reinterpret_cast<int32_t*>(rbp19 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(rbp21 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi22) = *reinterpret_cast<int32_t*>(rbp23 - 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx24 = *reinterpret_cast<uint64_t*>(rbp25 - 24);
    rax26 = fun_10f7(rdi20, rsi22, rdx24);
    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
    goto v28;
}

void fun_1077(int64_t rdi) {
    int64_t rbp2;
    uint32_t* rax3;
    uint32_t* rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rsi16;
    int64_t rbp17;
    uint64_t rdx18;
    int64_t rbp19;
    uint64_t rax20;
    int64_t rbp21;
    int64_t v22;

    if (*reinterpret_cast<int32_t*>(rbp2 - 44) != gettimeofday) {
        rax3 = g1092;
        rax4 = g109e;
        *rax4 = *rax3 | 1;
    }
    *reinterpret_cast<uint64_t*>(rbp5 - 24) = *reinterpret_cast<int64_t*>(rbp6 - 24) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp7 - 40))) >> 10;
    *reinterpret_cast<uint64_t*>(rbp8 - 24) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(rbp9 - 44) ^ 0x200) == gettimeofday)) & 1)) & *reinterpret_cast<uint32_t*>(rbp10 - 32) ^ 0xffffffff))) & *reinterpret_cast<uint64_t*>(rbp11 - 24);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp12 - 24) == gettimeofday)) {
        *reinterpret_cast<int32_t*>(rbp13 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp17 - 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx18 = *reinterpret_cast<uint64_t*>(rbp19 - 24);
    rax20 = fun_10f7(rdi14, rsi16, rdx18);
    *reinterpret_cast<uint64_t*>(rbp21 - 8) = rax20;
    goto v22;
}

void fun_127c(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_12e7(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_14c1(uint64_t rdi, uint64_t rsi, void* rdx, void* rcx);

void fun_14de(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8, void* r9, int64_t a7);

void fun_1527(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, void* r8, void* r9, int64_t a7);

uint64_t estimateDiv128To64(uint64_t rdi, int64_t rsi, uint64_t rdx) {
    void* rbp4;
    uint64_t v5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    int64_t v9;
    int64_t v10;
    int64_t v11;
    int64_t v12;
    int64_t v13;
    int64_t v14;
    int64_t v15;
    uint64_t v16;
    uint64_t v17;
    uint64_t v18;
    uint64_t v19;
    uint64_t v20;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdx;
    if (v5 > rdi) {
        v6 = v5 >> 32;
        if (v6 << 32 > rdi) {
            v7 = rdi / v6 << 32;
        } else {
            v7 = 0xffffffff00000000;
        }
        v8 = v7;
        fun_14c1(v5, v8, reinterpret_cast<int64_t>(rbp4) - 72, reinterpret_cast<int64_t>(rbp4) - 80);
        fun_14de(rdi, rsi, v9, v10, reinterpret_cast<int64_t>(rbp4) - 56, reinterpret_cast<int64_t>(rbp4) - 64, v11);
        while (v12 < reinterpret_cast<int64_t>(gettimeofday)) {
            v8 = v8 - 0x100000000;
            fun_1527(v13, v14, v6, v5 << 32, reinterpret_cast<int64_t>(rbp4) - 56, reinterpret_cast<int64_t>(rbp4) - 64, v15);
        }
        v16 = v17 << 32 | v18 >> 32;
        if (v6 << 32 > v16) {
            v19 = v16 / v6;
        } else {
            v19 = 0xffffffff;
        }
        v20 = v19 | v8;
    } else {
        v20 = 0xffffffffffffffff;
    }
    return v20;
}

void fun_13c0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_13f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_13a3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdx8;
    int64_t rbp9;
    int64_t rcx10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rcx21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    uint32_t edi28;
    int64_t rbp29;
    int32_t esi30;
    int64_t rbp31;
    uint64_t rdx32;
    int64_t rbp33;
    uint64_t rax34;
    int64_t rbp35;
    int64_t v36;

    v5 = reinterpret_cast<int64_t>(__return_address());
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    rdx8 = *reinterpret_cast<int64_t*>(rbp9 - 96);
    rcx10 = *reinterpret_cast<int64_t*>(rbp11 - 0x68);
    fun_13c0(rdi6, gettimeofday, rdx8, rcx10, rbp12 - 80, rbp13 - 88, v5);
    while (*reinterpret_cast<int64_t*>(rbp14 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp15 - 72) = *reinterpret_cast<int64_t*>(rbp16 - 72) - 1;
        rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 80);
        rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 88);
        rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
        fun_13f4(rdi17, rsi19, gettimeofday, rcx21, rbp23 - 80, rbp24 - 88, v5);
    }
    *reinterpret_cast<uint64_t*>(rbp25 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp26 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp27 - 72);
    edi28 = *reinterpret_cast<uint32_t*>(rbp29 - 36);
    esi30 = *reinterpret_cast<int32_t*>(rbp31 - 48);
    rdx32 = *reinterpret_cast<uint64_t*>(rbp33 - 72);
    rax34 = roundAndPackFloat64(edi28, esi30, rdx32, edi28, esi30, rdx32);
    *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
    goto v36;
}

void fun_13f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    uint32_t edi22;
    int64_t rbp23;
    int32_t esi24;
    int64_t rbp25;
    uint64_t rdx26;
    int64_t rbp27;
    uint64_t rax28;
    int64_t rbp29;
    int64_t v30;

    while (1) {
        if (*reinterpret_cast<int64_t*>(rbp8 - 80) >= reinterpret_cast<int64_t>(gettimeofday)) 
            break;
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) - 1;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
        rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
        fun_13f4(rdi11, rsi13, gettimeofday, rcx15, rbp17 - 80, rbp18 - 88, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp19 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp20 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp21 - 72);
    edi22 = *reinterpret_cast<uint32_t*>(rbp23 - 36);
    esi24 = *reinterpret_cast<int32_t*>(rbp25 - 48);
    rdx26 = *reinterpret_cast<uint64_t*>(rbp27 - 72);
    rax28 = roundAndPackFloat64(edi22, esi24, rdx26, edi22, esi24, rdx26);
    *reinterpret_cast<uint64_t*>(rbp29 - 8) = rax28;
    goto v30;
}

void fun_1527(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, void* r8, void* r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    uint64_t rdx17;
    int64_t rbp18;
    uint64_t rcx19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t v37;

    while (1) {
        if (*reinterpret_cast<int64_t*>(rbp8 - 56) >= reinterpret_cast<int64_t>(gettimeofday)) 
            break;
        *reinterpret_cast<int64_t*>(rbp9 - 88) = *reinterpret_cast<int64_t*>(rbp10 - 88) - 0x100000000;
        *reinterpret_cast<int64_t*>(rbp11 - 48) = *reinterpret_cast<int64_t*>(rbp12 - 32) << 32;
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
        rsi15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
        rdx17 = *reinterpret_cast<uint64_t*>(rbp18 - 40);
        rcx19 = *reinterpret_cast<uint64_t*>(rbp20 - 48);
        fun_1527(rdi13, rsi15, rdx17, rcx19, rbp21 - 56, rbp22 - 64, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp23 - 56) = *reinterpret_cast<uint64_t*>(rbp24 - 56) << 32 | *reinterpret_cast<uint64_t*>(rbp25 - 64) >> 32;
    if (*reinterpret_cast<uint64_t*>(rbp26 - 40) << 32 > *reinterpret_cast<uint64_t*>(rbp27 - 56)) {
        *reinterpret_cast<uint64_t*>(rbp28 - 0x68) = *reinterpret_cast<uint64_t*>(rbp29 - 56) / *reinterpret_cast<uint64_t*>(rbp30 - 40);
    } else {
        *reinterpret_cast<int64_t*>(rbp31 - 0x68) = 0xffffffff;
    }
    *reinterpret_cast<uint64_t*>(rbp32 - 88) = *reinterpret_cast<uint64_t*>(rbp33 - 0x68) | *reinterpret_cast<uint64_t*>(rbp34 - 88);
    *reinterpret_cast<int64_t*>(rbp35 - 8) = *reinterpret_cast<int64_t*>(rbp36 - 88);
    goto v37;
}

void fun_1608(int64_t rdi);

int32_t fun_15e0(int64_t rdi);

int32_t fun_161d(int64_t rdi);

int32_t fun_1629(int64_t rdi);

int64_t fun_15f4(int64_t rdi);

int64_t fun_15cd(int64_t rdi) {
    int64_t rax2;
    int64_t rdi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbp6;
    int64_t v7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int32_t eax14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int1_t zf18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int1_t zf28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rax38;

    if (!reinterpret_cast<int1_t>(rax2 == gettimeofday)) {
        addr_15fe_2:
        fun_1608(16);
    } else {
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 24);
        eax5 = fun_15e0(rdi3);
        if (eax5 != 0x7ff) 
            goto addr_1614_5; else 
            goto addr_15eb_6;
    }
    *reinterpret_cast<int32_t*>(rbp6 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    addr_16aa_8:
    goto v7;
    addr_1614_5:
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
    eax10 = fun_161d(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_1629(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 32) = eax14;
    if (*reinterpret_cast<int32_t*>(rbp16 - 28) == *reinterpret_cast<int32_t*>(rbp17 - 32)) {
        zf18 = *reinterpret_cast<int64_t*>(rbp19 - 16) == *reinterpret_cast<int64_t*>(rbp20 - 24);
        *reinterpret_cast<signed char*>(rbp21 - 34) = 1;
        if (!zf18) {
            *reinterpret_cast<unsigned char*>(rbp22 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp23 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp24 - 16) < *reinterpret_cast<uint64_t*>(rbp25 - 24))) & 1))) == gettimeofday));
        }
        *reinterpret_cast<uint32_t*>(rbp26 - 4) = *reinterpret_cast<unsigned char*>(rbp27 - 34) & 1;
        goto addr_16aa_8;
    } else {
        zf28 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp29 - 28) == gettimeofday);
        *reinterpret_cast<signed char*>(rbp30 - 33) = 1;
        if (zf28) {
            *reinterpret_cast<unsigned char*>(rbp31 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp32 - 16) | *reinterpret_cast<uint64_t*>(rbp33 - 24)) << 1 == gettimeofday);
        }
        *reinterpret_cast<uint32_t*>(rbp34 - 4) = *reinterpret_cast<unsigned char*>(rbp35 - 33) & 1;
        goto addr_16aa_8;
    }
    addr_15eb_6:
    rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 24);
    rax38 = fun_15f4(rdi36);
    if (rax38 == gettimeofday) 
        goto addr_1614_5; else 
        goto addr_15fe_2;
}

int32_t fun_15e0(int64_t rdi) {
    int32_t eax2;
    int64_t rdi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rax8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int32_t eax12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int1_t zf16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int1_t zf26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t v34;
    int64_t rbp35;

    if (eax2 != 0x7ff) {
        addr_1614_2:
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 16);
        eax5 = fun_161d(rdi3);
    } else {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 24);
        rax8 = fun_15f4(rdi6);
        if (rax8 == gettimeofday) 
            goto addr_1614_2; else 
            goto addr_15fe_5;
    }
    *reinterpret_cast<int32_t*>(rbp9 - 28) = eax5;
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 24);
    eax12 = fun_1629(rdi10);
    *reinterpret_cast<int32_t*>(rbp13 - 32) = eax12;
    if (*reinterpret_cast<int32_t*>(rbp14 - 28) == *reinterpret_cast<int32_t*>(rbp15 - 32)) {
        zf16 = *reinterpret_cast<int64_t*>(rbp17 - 16) == *reinterpret_cast<int64_t*>(rbp18 - 24);
        *reinterpret_cast<signed char*>(rbp19 - 34) = 1;
        if (!zf16) {
            *reinterpret_cast<unsigned char*>(rbp20 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp21 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp22 - 16) < *reinterpret_cast<uint64_t*>(rbp23 - 24))) & 1))) == gettimeofday));
        }
        *reinterpret_cast<uint32_t*>(rbp24 - 4) = *reinterpret_cast<unsigned char*>(rbp25 - 34) & 1;
    } else {
        zf26 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp27 - 28) == gettimeofday);
        *reinterpret_cast<signed char*>(rbp28 - 33) = 1;
        if (zf26) {
            *reinterpret_cast<unsigned char*>(rbp29 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp30 - 16) | *reinterpret_cast<uint64_t*>(rbp31 - 24)) << 1 == gettimeofday);
        }
        *reinterpret_cast<uint32_t*>(rbp32 - 4) = *reinterpret_cast<unsigned char*>(rbp33 - 33) & 1;
    }
    addr_16aa_14:
    goto v34;
    addr_15fe_5:
    fun_1608(16);
    *reinterpret_cast<int32_t*>(rbp35 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto addr_16aa_14;
}

int64_t fun_15f4(int64_t rdi) {
    int64_t rax2;
    int64_t rdi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int32_t eax9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int1_t zf14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t v24;
    int1_t zf25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;

    if (rax2 == gettimeofday) {
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 16);
        eax5 = fun_161d(rdi3);
        *reinterpret_cast<int32_t*>(rbp6 - 28) = eax5;
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 24);
        eax9 = fun_1629(rdi7);
        *reinterpret_cast<int32_t*>(rbp10 - 32) = eax9;
        if (*reinterpret_cast<int32_t*>(rbp11 - 28) != *reinterpret_cast<int32_t*>(rbp12 - 32)) 
            goto addr_1638_5;
    } else {
        fun_1608(16);
        *reinterpret_cast<int32_t*>(rbp13 - 4) = reinterpret_cast<int32_t>(gettimeofday);
        goto addr_16aa_8;
    }
    zf14 = *reinterpret_cast<int64_t*>(rbp15 - 16) == *reinterpret_cast<int64_t*>(rbp16 - 24);
    *reinterpret_cast<signed char*>(rbp17 - 34) = 1;
    if (!zf14) {
        *reinterpret_cast<unsigned char*>(rbp18 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp19 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp20 - 16) < *reinterpret_cast<uint64_t*>(rbp21 - 24))) & 1))) == gettimeofday));
    }
    *reinterpret_cast<uint32_t*>(rbp22 - 4) = *reinterpret_cast<unsigned char*>(rbp23 - 34) & 1;
    addr_16aa_8:
    goto v24;
    addr_1638_5:
    zf25 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 28) == gettimeofday);
    *reinterpret_cast<signed char*>(rbp27 - 33) = 1;
    if (zf25) {
        *reinterpret_cast<unsigned char*>(rbp28 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp29 - 16) | *reinterpret_cast<uint64_t*>(rbp30 - 24)) << 1 == gettimeofday);
    }
    *reinterpret_cast<uint32_t*>(rbp31 - 4) = *reinterpret_cast<unsigned char*>(rbp32 - 33) & 1;
    goto addr_16aa_8;
}

void fun_1608(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int32_t*>(rbp2 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v3;
}

int64_t* g1877 = reinterpret_cast<int64_t*>(0x24c0950fd1043b48);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0** g185b = reinterpret_cast<struct s0**>(0xe8c83c8b48);

void rtclock();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_18cb(int64_t rdi, int64_t rsi);

int64_t fun_1864() {
    int64_t rbp1;
    int64_t rax2;
    int64_t* rcx3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    struct s0** rax11;
    struct s0* rdi12;
    int64_t rbp13;
    int32_t* rsi14;
    int32_t* rsi15;
    struct s1* rsi16;
    int64_t v17;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp1 - 16) = rax2;
        rcx3 = g1877;
        *reinterpret_cast<uint32_t*>(rbp4 - 4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp5 - 16) != rcx3[*reinterpret_cast<int32_t*>(rbp6 - 8)])) & 1) + *reinterpret_cast<int32_t*>(rbp7 - 4);
        *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 8) >= 36) 
            break;
        rax11 = g185b;
        rdi12 = rax11[*reinterpret_cast<int32_t*>(rbp13 - 8)];
        rax2 = fun_1864();
    }
    rtclock();
    rdi12->f0 = *rsi14;
    rsi15 = &rsi16->f4;
    rdi12->f4 = *rsi15;
    __asm__("subsd xmm0, [rax]");
    fun_18cb(0x18c4, rsi15 + 1);
    goto v17;
}

void fun_18cb(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_19c3(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

int32_t countLeadingZeros32(uint32_t edi) {
    uint32_t v2;
    int32_t v3;
    int64_t rcx4;
    int32_t v5;

    v2 = edi;
    v3 = reinterpret_cast<int32_t>(gettimeofday);
    if (v2 < 0x10000) {
        v3 = 16;
        v2 = v2 << 16;
    }
    if (v2 < 0x1000000) {
        v3 = v3 + 8;
        v2 = v2 << 8;
    }
    *reinterpret_cast<uint32_t*>(&rcx4) = v2 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    v5 = *reinterpret_cast<int32_t*>(0x55d + rcx4 * 4) + v3;
    return v5;
}

void fun_4e5(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

uint64_t fun_5fc(uint64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    uint64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    uint64_t rdi8;
    int64_t rbp9;
    uint64_t rax10;
    int64_t rbp11;
    uint64_t rdi12;
    int64_t rbp13;
    int32_t eax14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    uint64_t rax34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    uint64_t rdi40;
    int64_t rbp41;
    uint64_t rsi42;
    int64_t rbp43;
    uint64_t rax44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    uint64_t rdi52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    uint64_t rax59;
    int64_t rbp60;
    uint64_t rdi61;
    int64_t rbp62;
    uint64_t rsi63;
    int64_t rbp64;
    uint64_t rax65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    uint64_t rdi73;
    int64_t rbp74;
    int64_t rsi75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    uint64_t rdi83;
    int64_t rbp84;
    uint64_t rsi85;
    int64_t rbp86;
    uint64_t rax87;
    int64_t rbp88;
    uint32_t edi89;
    int64_t rbp90;
    int32_t esi91;
    int64_t rbp92;
    uint64_t rdx93;
    int64_t rbp94;
    uint64_t rax95;
    int64_t rbp96;
    int64_t v97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rbp106;
    int64_t rbp107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rbp110;

    *reinterpret_cast<int64_t*>(rbp2 - 48) = rax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 16);
    eax6 = fun_609(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
    rax10 = fun_615(rdi8);
    *reinterpret_cast<uint64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 24);
    eax14 = fun_622(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 36) = eax14;
    *reinterpret_cast<int32_t*>(rbp16 - 68) = *reinterpret_cast<int32_t*>(rbp17 - 32) - *reinterpret_cast<int32_t*>(rbp18 - 36);
    *reinterpret_cast<int64_t*>(rbp19 - 48) = *reinterpret_cast<int64_t*>(rbp20 - 48) << 9;
    *reinterpret_cast<int64_t*>(rbp21 - 56) = *reinterpret_cast<int64_t*>(rbp22 - 56) << 9;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp23 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp24 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp25 - 32) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 32) == gettimeofday)) {
                    *reinterpret_cast<int64_t*>(rbp27 - 64) = 0x4000000000000000 + *reinterpret_cast<int64_t*>(rbp28 - 48) + *reinterpret_cast<int64_t*>(rbp29 - 56);
                    *reinterpret_cast<int32_t*>(rbp30 - 40) = *reinterpret_cast<int32_t*>(rbp31 - 32);
                } else {
                    *reinterpret_cast<int32_t*>(&rdi32) = *reinterpret_cast<int32_t*>(rbp33 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax34 = fun_7cc(rdi32);
                    *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
                    goto addr_85e_11;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp36 - 48) | *reinterpret_cast<uint64_t*>(rbp37 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp38 - 8) = *reinterpret_cast<int64_t*>(rbp39 - 16);
                    goto addr_85e_11;
                } else {
                    rdi40 = *reinterpret_cast<uint64_t*>(rbp41 - 16);
                    rsi42 = *reinterpret_cast<uint64_t*>(rbp43 - 24);
                    rax44 = propagateFloat64NaN(rdi40, rsi42);
                    *reinterpret_cast<uint64_t*>(rbp45 - 8) = rax44;
                    goto addr_85e_11;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp46 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp47 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp48 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp49 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp50 - 68) = *reinterpret_cast<int32_t*>(rbp51 - 68) + 1;
                }
                rdi52 = *reinterpret_cast<uint64_t*>(rbp53 - 48);
                fun_75f(rdi52);
                *reinterpret_cast<int32_t*>(rbp54 - 40) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                goto addr_7fb_22;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp56 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax59 = fun_71a(rdi57, 0x7ff, gettimeofday);
                    *reinterpret_cast<uint64_t*>(rbp60 - 8) = rax59;
                    goto addr_85e_11;
                } else {
                    rdi61 = *reinterpret_cast<uint64_t*>(rbp62 - 16);
                    rsi63 = *reinterpret_cast<uint64_t*>(rbp64 - 24);
                    rax65 = propagateFloat64NaN(rdi61, rsi63);
                    *reinterpret_cast<uint64_t*>(rbp66 - 8) = rax65;
                    goto addr_85e_11;
                }
            }
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp67 - 32) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp68 - 36) == gettimeofday)) {
                *reinterpret_cast<uint64_t*>(rbp69 - 56) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp70 - 56);
            } else {
                *reinterpret_cast<int32_t*>(rbp71 - 68) = *reinterpret_cast<int32_t*>(rbp72 - 68) - 1;
            }
            rdi73 = *reinterpret_cast<uint64_t*>(rbp74 - 56);
            *reinterpret_cast<int32_t*>(&rsi75) = *reinterpret_cast<int32_t*>(rbp76 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi75) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_6c6(rdi73, rsi75, rbp77 - 56);
            *reinterpret_cast<int32_t*>(rbp78 - 40) = *reinterpret_cast<int32_t*>(rbp79 - 32);
            goto addr_7fb_22;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp80 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp81 - 8) = *reinterpret_cast<int64_t*>(rbp82 - 16);
                goto addr_85e_11;
            } else {
                rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
                rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
                rax87 = propagateFloat64NaN(rdi83, rsi85);
                *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
                goto addr_85e_11;
            }
        }
    }
    addr_84b_36:
    edi89 = *reinterpret_cast<uint32_t*>(rbp90 - 28);
    esi91 = *reinterpret_cast<int32_t*>(rbp92 - 40);
    rdx93 = *reinterpret_cast<uint64_t*>(rbp94 - 64);
    rax95 = roundAndPackFloat64(edi89, esi91, rdx93);
    *reinterpret_cast<uint64_t*>(rbp96 - 8) = rax95;
    addr_85e_11:
    goto v97;
    addr_7fb_22:
    *reinterpret_cast<uint64_t*>(rbp98 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp99 - 48);
    *reinterpret_cast<int64_t*>(rbp100 - 64) = *reinterpret_cast<int64_t*>(rbp101 - 48) + *reinterpret_cast<int64_t*>(rbp102 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp103 - 40) = *reinterpret_cast<int32_t*>(rbp104 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp105 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp106 - 64) = *reinterpret_cast<int64_t*>(rbp107 - 48) + *reinterpret_cast<int64_t*>(rbp108 - 56);
        *reinterpret_cast<int32_t*>(rbp109 - 40) = *reinterpret_cast<int32_t*>(rbp110 - 40) + 1;
    }
    goto addr_84b_36;
}

uint64_t fun_88c(uint64_t rdi);

int32_t fun_899(uint64_t rdi);

uint64_t fun_8a5(uint64_t rdi);

int32_t fun_8b2(uint64_t rdi);

void fun_934(int64_t rdi);

int32_t* g98c = reinterpret_cast<int32_t*>(0x124c0940f033883);

uint64_t fun_9a2(int64_t rdi);

uint64_t normalizeRoundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx);

void fun_a32(uint64_t rdi);

uint64_t fun_9ed();

void fun_ad9(uint64_t rdi, int64_t rsi, void* rdx);

uint64_t subFloat64Sigs(uint64_t rdi, uint64_t rsi, uint32_t edx) {
    uint32_t v4;
    uint64_t rax5;
    int32_t eax6;
    int32_t v7;
    uint64_t rax8;
    int32_t eax9;
    int32_t v10;
    int32_t v11;
    uint64_t v12;
    uint64_t v13;
    uint64_t v14;
    uint64_t rax15;
    int32_t* rax16;
    int64_t rdi17;
    uint64_t rax18;
    uint64_t v19;
    int32_t v20;
    uint64_t rax21;
    uint64_t rax22;
    uint64_t rax23;
    int64_t rsi24;
    uint64_t rax25;

    v4 = edx;
    rax5 = fun_88c(rdi);
    eax6 = fun_899(rdi);
    v7 = eax6;
    rax8 = fun_8a5(rsi);
    eax9 = fun_8b2(rsi);
    v10 = eax9;
    v11 = v7 - v10;
    v12 = rax5 << 10;
    v13 = rax8 << 10;
    if (reinterpret_cast<int32_t>(gettimeofday) >= v11) {
        if (v11 >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (v7 != 0x7ff) {
                if (reinterpret_cast<int1_t>(v7 == gettimeofday)) {
                    v7 = 1;
                    v10 = 1;
                }
                if (v13 < v12) 
                    goto addr_96d_11;
            } else {
                if ((v12 | v13) == gettimeofday) {
                    fun_934(16);
                    v14 = 0x7fffffffffffffff;
                    goto addr_b19_15;
                } else {
                    rax15 = propagateFloat64NaN(rdi, rsi);
                    v14 = rax15;
                    goto addr_b19_15;
                }
            }
        } else {
            if (v10 != 0x7ff) 
                goto addr_9f6_19; else 
                goto addr_9b8_20;
        }
    } else {
        if (v7 != 0x7ff) 
            goto addr_a9f_23; else 
            goto addr_a71_24;
    }
    if (v12 >= v13) {
        rax16 = g98c;
        *reinterpret_cast<uint32_t*>(&rdi17) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax16 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax18 = fun_9a2(rdi17);
        v14 = rax18;
    } else {
        goto addr_a44_29;
    }
    addr_b19_15:
    return v14;
    addr_a44_29:
    v19 = v13 - v12;
    v20 = v10;
    v4 = v4 ^ 1;
    addr_afd_30:
    rax21 = normalizeRoundAndPackFloat64(v4, v20 - 1, v19);
    v14 = rax21;
    goto addr_b19_15;
    addr_96d_11:
    addr_aeb_31:
    v19 = v12 - v13;
    v20 = v7;
    goto addr_afd_30;
    addr_9f6_19:
    if (!reinterpret_cast<int1_t>(v7 == gettimeofday)) {
        v12 = 0x4000000000000000 | v12;
    }
    fun_a32(v12);
    v13 = 0x4000000000000000 | v13;
    goto addr_a44_29;
    addr_9b8_20:
    if (v13 == gettimeofday) {
        rax22 = fun_9ed();
        v14 = rax22;
        goto addr_b19_15;
    } else {
        rax23 = propagateFloat64NaN(rdi, rsi);
        v14 = rax23;
        goto addr_b19_15;
    }
    addr_a9f_23:
    if (!reinterpret_cast<int1_t>(v10 == gettimeofday)) {
        v13 = 0x4000000000000000 | v13;
    } else {
        --v11;
    }
    *reinterpret_cast<int32_t*>(&rsi24) = v11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_ad9(v13, rsi24, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 56);
    v12 = 0x4000000000000000 | v12;
    goto addr_aeb_31;
    addr_a71_24:
    if (v12 == gettimeofday) {
        v14 = rdi;
        goto addr_b19_15;
    } else {
        rax25 = propagateFloat64NaN(rdi, rsi);
        v14 = rax25;
        goto addr_b19_15;
    }
}

int32_t fun_dd9(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    uint64_t rdi4;
    int64_t rbp5;
    uint32_t eax6;
    int64_t rbp7;
    uint64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    uint64_t rdi12;
    int64_t rbp13;
    uint32_t eax14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t v37;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = eax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 8);
    eax6 = fun_de5(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 24) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_df1(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 16);
    eax14 = fun_dfd(rdi12);
    *reinterpret_cast<uint32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint64_t*>(rbp16 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 8);
    *reinterpret_cast<uint64_t*>(rbp18 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp20 - 24) | *reinterpret_cast<uint32_t*>(rbp21 - 32)) != gettimeofday) {
        fun_e3d(16);
    }
    if (*reinterpret_cast<int32_t*>(rbp22 - 32) == gettimeofday) {
        if (*reinterpret_cast<int32_t*>(rbp23 - 24) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp24 - 28) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp25 - 56) = *reinterpret_cast<int64_t*>(rbp26 - 8);
            } else {
                *reinterpret_cast<int64_t*>(rbp27 - 56) = *reinterpret_cast<int64_t*>(rbp28 - 16);
            }
            *reinterpret_cast<int64_t*>(rbp29 - 48) = *reinterpret_cast<int64_t*>(rbp30 - 56);
        } else {
            *reinterpret_cast<int64_t*>(rbp31 - 48) = *reinterpret_cast<int64_t*>(rbp32 - 8);
        }
        *reinterpret_cast<int64_t*>(rbp33 - 40) = *reinterpret_cast<int64_t*>(rbp34 - 48);
    } else {
        *reinterpret_cast<int64_t*>(rbp35 - 40) = *reinterpret_cast<int64_t*>(rbp36 - 16);
    }
    goto v37;
}

void fun_6c6(uint64_t rdi, int64_t rsi, void* rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    uint32_t edi19;
    int64_t rbp20;
    int32_t esi21;
    int64_t rbp22;
    uint64_t rdx23;
    int64_t rbp24;
    uint64_t rax25;
    int64_t rbp26;
    int64_t v27;

    *reinterpret_cast<int32_t*>(rbp4 - 40) = *reinterpret_cast<int32_t*>(rbp5 - 32);
    *reinterpret_cast<uint64_t*>(rbp6 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp7 - 48);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = *reinterpret_cast<int64_t*>(rbp9 - 48) + *reinterpret_cast<int64_t*>(rbp10 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp11 - 40) = *reinterpret_cast<int32_t*>(rbp12 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp13 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp14 - 64) = *reinterpret_cast<int64_t*>(rbp15 - 48) + *reinterpret_cast<int64_t*>(rbp16 - 56);
        *reinterpret_cast<int32_t*>(rbp17 - 40) = *reinterpret_cast<int32_t*>(rbp18 - 40) + 1;
    }
    edi19 = *reinterpret_cast<uint32_t*>(rbp20 - 28);
    esi21 = *reinterpret_cast<int32_t*>(rbp22 - 40);
    rdx23 = *reinterpret_cast<uint64_t*>(rbp24 - 64);
    rax25 = roundAndPackFloat64(edi19, esi21, rdx23);
    *reinterpret_cast<uint64_t*>(rbp26 - 8) = rax25;
    goto v27;
}

uint64_t fun_71a(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_75f(uint64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    uint32_t edi17;
    int64_t rbp18;
    int32_t esi19;
    int64_t rbp20;
    uint64_t rdx21;
    int64_t rbp22;
    uint64_t rax23;
    int64_t rbp24;
    int64_t v25;

    *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 36);
    *reinterpret_cast<uint64_t*>(rbp4 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp5 - 48);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = *reinterpret_cast<int64_t*>(rbp7 - 48) + *reinterpret_cast<int64_t*>(rbp8 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp9 - 40) = *reinterpret_cast<int32_t*>(rbp10 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp11 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp12 - 64) = *reinterpret_cast<int64_t*>(rbp13 - 48) + *reinterpret_cast<int64_t*>(rbp14 - 56);
        *reinterpret_cast<int32_t*>(rbp15 - 40) = *reinterpret_cast<int32_t*>(rbp16 - 40) + 1;
    }
    edi17 = *reinterpret_cast<uint32_t*>(rbp18 - 28);
    esi19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
    rdx21 = *reinterpret_cast<uint64_t*>(rbp22 - 64);
    rax23 = roundAndPackFloat64(edi17, esi19, rdx21);
    *reinterpret_cast<uint64_t*>(rbp24 - 8) = rax23;
    goto v25;
}

void fun_934(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int32_t countLeadingZeros64(uint64_t rdi);

uint64_t normalizeRoundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx) {
    int32_t eax4;
    int32_t v5;
    int32_t ecx6;
    uint64_t rax7;

    eax4 = countLeadingZeros64(rdx);
    v5 = eax4 - 1;
    ecx6 = v5;
    rax7 = roundAndPackFloat64(edi, esi - v5, rdx << *reinterpret_cast<unsigned char*>(&ecx6));
    return rax7;
}

uint64_t fun_9a2(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

uint64_t fun_9ed() {
    int64_t rbp1;
    int64_t rax2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp1 - 8) = rax2;
    goto v3;
}

void fun_a32(uint64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    uint32_t edi13;
    int64_t rbp14;
    int32_t esi15;
    int64_t rbp16;
    uint64_t rdx17;
    int64_t rbp18;
    uint64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp2 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp3 - 56);
    *reinterpret_cast<int64_t*>(rbp4 - 64) = *reinterpret_cast<int64_t*>(rbp5 - 56) - *reinterpret_cast<int64_t*>(rbp6 - 48);
    *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 36);
    *reinterpret_cast<uint32_t*>(rbp9 - 28) = *reinterpret_cast<uint32_t*>(rbp10 - 28) ^ 1;
    *reinterpret_cast<int32_t*>(rbp11 - 40) = *reinterpret_cast<int32_t*>(rbp12 - 40) - 1;
    edi13 = *reinterpret_cast<uint32_t*>(rbp14 - 28);
    esi15 = *reinterpret_cast<int32_t*>(rbp16 - 40);
    rdx17 = *reinterpret_cast<uint64_t*>(rbp18 - 64);
    rax19 = normalizeRoundAndPackFloat64(edi13, esi15, rdx17);
    *reinterpret_cast<uint64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

void fun_ad9(uint64_t rdi, int64_t rsi, void* rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    uint32_t edi13;
    int64_t rbp14;
    int32_t esi15;
    int64_t rbp16;
    uint64_t rdx17;
    int64_t rbp18;
    uint64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp4 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp5 - 48);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = *reinterpret_cast<int64_t*>(rbp7 - 48) - *reinterpret_cast<int64_t*>(rbp8 - 56);
    *reinterpret_cast<int32_t*>(rbp9 - 40) = *reinterpret_cast<int32_t*>(rbp10 - 32);
    *reinterpret_cast<int32_t*>(rbp11 - 40) = *reinterpret_cast<int32_t*>(rbp12 - 40) - 1;
    edi13 = *reinterpret_cast<uint32_t*>(rbp14 - 28);
    esi15 = *reinterpret_cast<int32_t*>(rbp16 - 40);
    rdx17 = *reinterpret_cast<uint64_t*>(rbp18 - 64);
    rax19 = normalizeRoundAndPackFloat64(edi13, esi15, rdx17);
    *reinterpret_cast<uint64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

void normalizeFloat64Subnormal(uint64_t rdi, int32_t* rsi, uint64_t* rdx) {
    int32_t eax4;
    int32_t v5;
    int32_t ecx6;

    eax4 = countLeadingZeros64(rdi);
    v5 = eax4 - 11;
    ecx6 = v5;
    *rdx = rdi << *reinterpret_cast<unsigned char*>(&ecx6);
    *rsi = 1 - v5;
    return;
}

int64_t fun_1006(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

uint64_t fun_10f7(int64_t rdi, int64_t rsi, uint64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_11d9(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_1242(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_12aa(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1299(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_12aa(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4;
    goto v6;
}

void fun_13c0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    uint32_t edi22;
    int64_t rbp23;
    int32_t esi24;
    int64_t rbp25;
    uint64_t rdx26;
    int64_t rbp27;
    uint64_t rax28;
    int64_t rbp29;
    int64_t v30;

    while (*reinterpret_cast<int64_t*>(rbp8 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) - 1;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
        rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
        fun_13f4(rdi11, rsi13, gettimeofday, rcx15, rbp17 - 80, rbp18 - 88, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp19 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp20 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp21 - 72);
    edi22 = *reinterpret_cast<uint32_t*>(rbp23 - 36);
    esi24 = *reinterpret_cast<int32_t*>(rbp25 - 48);
    rdx26 = *reinterpret_cast<uint64_t*>(rbp27 - 72);
    rax28 = roundAndPackFloat64(edi22, esi24, rdx26, edi22, esi24, rdx26);
    *reinterpret_cast<uint64_t*>(rbp29 - 8) = rax28;
    goto v30;
}

void fun_14c1(uint64_t rdi, uint64_t rsi, void* rdx, void* rcx) {
    int64_t v5;
    uint64_t rdi6;
    int64_t rbp7;
    int64_t rsi8;
    int64_t rbp9;
    int64_t rdx10;
    int64_t rbp11;
    int64_t rcx12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rsi23;
    int64_t rbp24;
    uint64_t rdx25;
    int64_t rbp26;
    uint64_t rcx27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t v45;

    v5 = reinterpret_cast<int64_t>(__return_address());
    rdi6 = *reinterpret_cast<uint64_t*>(rbp7 - 16);
    rsi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rdx10 = *reinterpret_cast<int64_t*>(rbp11 - 72);
    rcx12 = *reinterpret_cast<int64_t*>(rbp13 - 80);
    fun_14de(rdi6, rsi8, rdx10, rcx12, rbp14 - 56, rbp15 - 64, v5);
    while (*reinterpret_cast<int64_t*>(rbp16 - 56) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp17 - 88) = *reinterpret_cast<int64_t*>(rbp18 - 88) - 0x100000000;
        *reinterpret_cast<int64_t*>(rbp19 - 48) = *reinterpret_cast<int64_t*>(rbp20 - 32) << 32;
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
        rsi23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
        rdx25 = *reinterpret_cast<uint64_t*>(rbp26 - 40);
        rcx27 = *reinterpret_cast<uint64_t*>(rbp28 - 48);
        fun_1527(rdi21, rsi23, rdx25, rcx27, rbp29 - 56, rbp30 - 64, v5);
    }
    *reinterpret_cast<uint64_t*>(rbp31 - 56) = *reinterpret_cast<uint64_t*>(rbp32 - 56) << 32 | *reinterpret_cast<uint64_t*>(rbp33 - 64) >> 32;
    if (*reinterpret_cast<uint64_t*>(rbp34 - 40) << 32 > *reinterpret_cast<uint64_t*>(rbp35 - 56)) {
        *reinterpret_cast<uint64_t*>(rbp36 - 0x68) = *reinterpret_cast<uint64_t*>(rbp37 - 56) / *reinterpret_cast<uint64_t*>(rbp38 - 40);
    } else {
        *reinterpret_cast<int64_t*>(rbp39 - 0x68) = 0xffffffff;
    }
    *reinterpret_cast<uint64_t*>(rbp40 - 88) = *reinterpret_cast<uint64_t*>(rbp41 - 0x68) | *reinterpret_cast<uint64_t*>(rbp42 - 88);
    *reinterpret_cast<int64_t*>(rbp43 - 8) = *reinterpret_cast<int64_t*>(rbp44 - 88);
    goto v45;
}

void fun_14de(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8, void* r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    uint64_t rdx17;
    int64_t rbp18;
    uint64_t rcx19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t v37;

    while (*reinterpret_cast<int64_t*>(rbp8 - 56) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp9 - 88) = *reinterpret_cast<int64_t*>(rbp10 - 88) - 0x100000000;
        *reinterpret_cast<int64_t*>(rbp11 - 48) = *reinterpret_cast<int64_t*>(rbp12 - 32) << 32;
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
        rsi15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
        rdx17 = *reinterpret_cast<uint64_t*>(rbp18 - 40);
        rcx19 = *reinterpret_cast<uint64_t*>(rbp20 - 48);
        fun_1527(rdi13, rsi15, rdx17, rcx19, rbp21 - 56, rbp22 - 64, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp23 - 56) = *reinterpret_cast<uint64_t*>(rbp24 - 56) << 32 | *reinterpret_cast<uint64_t*>(rbp25 - 64) >> 32;
    if (*reinterpret_cast<uint64_t*>(rbp26 - 40) << 32 > *reinterpret_cast<uint64_t*>(rbp27 - 56)) {
        *reinterpret_cast<uint64_t*>(rbp28 - 0x68) = *reinterpret_cast<uint64_t*>(rbp29 - 56) / *reinterpret_cast<uint64_t*>(rbp30 - 40);
    } else {
        *reinterpret_cast<int64_t*>(rbp31 - 0x68) = 0xffffffff;
    }
    *reinterpret_cast<uint64_t*>(rbp32 - 88) = *reinterpret_cast<uint64_t*>(rbp33 - 0x68) | *reinterpret_cast<uint64_t*>(rbp34 - 88);
    *reinterpret_cast<int64_t*>(rbp35 - 8) = *reinterpret_cast<int64_t*>(rbp36 - 88);
    goto v37;
}

void fun_16dd(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

int32_t fun_19a5();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_19a5();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0x19bc);
        fun_19c3(0x19bc, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

int32_t fun_595(int64_t rdi);

void fun_589(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdi10;
    int64_t rbp11;
    uint64_t rsi12;
    int64_t rbp13;
    uint32_t edx14;
    int64_t rbp15;
    uint64_t rax16;
    int64_t rbp17;
    uint64_t rdi18;
    int64_t rbp19;
    uint64_t rsi20;
    int64_t rbp21;
    uint32_t edx22;
    int64_t rbp23;
    uint64_t rax24;
    int64_t rbp25;
    int64_t v26;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_595(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    if (*reinterpret_cast<int32_t*>(rbp8 - 28) != *reinterpret_cast<int32_t*>(rbp9 - 32)) {
        rdi10 = *reinterpret_cast<uint64_t*>(rbp11 - 16);
        rsi12 = *reinterpret_cast<uint64_t*>(rbp13 - 24);
        edx14 = *reinterpret_cast<uint32_t*>(rbp15 - 28);
        rax16 = subFloat64Sigs(rdi10, rsi12, edx14);
        *reinterpret_cast<uint64_t*>(rbp17 - 8) = rax16;
    } else {
        rdi18 = *reinterpret_cast<uint64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<uint64_t*>(rbp21 - 24);
        edx22 = *reinterpret_cast<uint32_t*>(rbp23 - 28);
        rax24 = addFloat64Sigs(rdi18, rsi20, edx22);
        *reinterpret_cast<uint64_t*>(rbp25 - 8) = rax24;
    }
    goto v26;
}

int32_t fun_609(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    uint64_t rdi4;
    int64_t rbp5;
    uint64_t rax6;
    int64_t rbp7;
    uint64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    uint64_t rax30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    uint64_t rdi36;
    int64_t rbp37;
    uint64_t rsi38;
    int64_t rbp39;
    uint64_t rax40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    uint64_t rdi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    uint64_t rax55;
    int64_t rbp56;
    uint64_t rdi57;
    int64_t rbp58;
    uint64_t rsi59;
    int64_t rbp60;
    uint64_t rax61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    uint64_t rdi69;
    int64_t rbp70;
    int64_t rsi71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    uint64_t rdi79;
    int64_t rbp80;
    uint64_t rsi81;
    int64_t rbp82;
    uint64_t rax83;
    int64_t rbp84;
    uint32_t edi85;
    int64_t rbp86;
    int32_t esi87;
    int64_t rbp88;
    uint64_t rdx89;
    int64_t rbp90;
    uint64_t rax91;
    int64_t rbp92;
    int64_t v93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rbp106;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 24);
    rax6 = fun_615(rdi4);
    *reinterpret_cast<uint64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
    eax10 = fun_622(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 36) = eax10;
    *reinterpret_cast<int32_t*>(rbp12 - 68) = *reinterpret_cast<int32_t*>(rbp13 - 32) - *reinterpret_cast<int32_t*>(rbp14 - 36);
    *reinterpret_cast<int64_t*>(rbp15 - 48) = *reinterpret_cast<int64_t*>(rbp16 - 48) << 9;
    *reinterpret_cast<int64_t*>(rbp17 - 56) = *reinterpret_cast<int64_t*>(rbp18 - 56) << 9;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp19 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp20 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp21 - 32) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 32) == gettimeofday)) {
                    *reinterpret_cast<int64_t*>(rbp23 - 64) = 0x4000000000000000 + *reinterpret_cast<int64_t*>(rbp24 - 48) + *reinterpret_cast<int64_t*>(rbp25 - 56);
                    *reinterpret_cast<int32_t*>(rbp26 - 40) = *reinterpret_cast<int32_t*>(rbp27 - 32);
                } else {
                    *reinterpret_cast<int32_t*>(&rdi28) = *reinterpret_cast<int32_t*>(rbp29 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax30 = fun_7cc(rdi28);
                    *reinterpret_cast<uint64_t*>(rbp31 - 8) = rax30;
                    goto addr_85e_10;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp32 - 48) | *reinterpret_cast<uint64_t*>(rbp33 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp34 - 8) = *reinterpret_cast<int64_t*>(rbp35 - 16);
                    goto addr_85e_10;
                } else {
                    rdi36 = *reinterpret_cast<uint64_t*>(rbp37 - 16);
                    rsi38 = *reinterpret_cast<uint64_t*>(rbp39 - 24);
                    rax40 = propagateFloat64NaN(rdi36, rsi38);
                    *reinterpret_cast<uint64_t*>(rbp41 - 8) = rax40;
                    goto addr_85e_10;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp42 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp43 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp44 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp45 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp46 - 68) = *reinterpret_cast<int32_t*>(rbp47 - 68) + 1;
                }
                rdi48 = *reinterpret_cast<uint64_t*>(rbp49 - 48);
                fun_75f(rdi48);
                *reinterpret_cast<int32_t*>(rbp50 - 40) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                goto addr_7fb_21;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp52 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax55 = fun_71a(rdi53, 0x7ff, gettimeofday);
                    *reinterpret_cast<uint64_t*>(rbp56 - 8) = rax55;
                    goto addr_85e_10;
                } else {
                    rdi57 = *reinterpret_cast<uint64_t*>(rbp58 - 16);
                    rsi59 = *reinterpret_cast<uint64_t*>(rbp60 - 24);
                    rax61 = propagateFloat64NaN(rdi57, rsi59);
                    *reinterpret_cast<uint64_t*>(rbp62 - 8) = rax61;
                    goto addr_85e_10;
                }
            }
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp63 - 32) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp64 - 36) == gettimeofday)) {
                *reinterpret_cast<uint64_t*>(rbp65 - 56) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp66 - 56);
            } else {
                *reinterpret_cast<int32_t*>(rbp67 - 68) = *reinterpret_cast<int32_t*>(rbp68 - 68) - 1;
            }
            rdi69 = *reinterpret_cast<uint64_t*>(rbp70 - 56);
            *reinterpret_cast<int32_t*>(&rsi71) = *reinterpret_cast<int32_t*>(rbp72 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi71) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_6c6(rdi69, rsi71, rbp73 - 56);
            *reinterpret_cast<int32_t*>(rbp74 - 40) = *reinterpret_cast<int32_t*>(rbp75 - 32);
            goto addr_7fb_21;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp76 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp77 - 8) = *reinterpret_cast<int64_t*>(rbp78 - 16);
                goto addr_85e_10;
            } else {
                rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
                rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
                rax83 = propagateFloat64NaN(rdi79, rsi81);
                *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
                goto addr_85e_10;
            }
        }
    }
    addr_84b_35:
    edi85 = *reinterpret_cast<uint32_t*>(rbp86 - 28);
    esi87 = *reinterpret_cast<int32_t*>(rbp88 - 40);
    rdx89 = *reinterpret_cast<uint64_t*>(rbp90 - 64);
    rax91 = roundAndPackFloat64(edi85, esi87, rdx89);
    *reinterpret_cast<uint64_t*>(rbp92 - 8) = rax91;
    addr_85e_10:
    goto v93;
    addr_7fb_21:
    *reinterpret_cast<uint64_t*>(rbp94 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp95 - 48);
    *reinterpret_cast<int64_t*>(rbp96 - 64) = *reinterpret_cast<int64_t*>(rbp97 - 48) + *reinterpret_cast<int64_t*>(rbp98 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp99 - 40) = *reinterpret_cast<int32_t*>(rbp100 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp101 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp102 - 64) = *reinterpret_cast<int64_t*>(rbp103 - 48) + *reinterpret_cast<int64_t*>(rbp104 - 56);
        *reinterpret_cast<int32_t*>(rbp105 - 40) = *reinterpret_cast<int32_t*>(rbp106 - 40) + 1;
    }
    goto addr_84b_35;
}

uint64_t fun_88c(uint64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    uint64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    uint64_t rdi8;
    int64_t rbp9;
    uint64_t rax10;
    int64_t rbp11;
    uint64_t rdi12;
    int64_t rbp13;
    int32_t eax14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    uint64_t rdi34;
    int64_t rbp35;
    uint64_t rsi36;
    int64_t rbp37;
    uint64_t rax38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int32_t* rax44;
    int64_t rdi45;
    uint64_t rax46;
    int64_t rbp47;
    int64_t v48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    uint32_t edi58;
    int64_t rbp59;
    int32_t esi60;
    int64_t rbp61;
    uint64_t rdx62;
    int64_t rbp63;
    uint64_t rax64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    uint64_t rdi76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    uint64_t rax81;
    int64_t rbp82;
    uint64_t rdi83;
    int64_t rbp84;
    uint64_t rsi85;
    int64_t rbp86;
    uint64_t rax87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    uint64_t rdi94;
    int64_t rbp95;
    int64_t rsi96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    uint64_t rdi104;
    int64_t rbp105;
    uint64_t rsi106;
    int64_t rbp107;
    uint64_t rax108;
    int64_t rbp109;

    *reinterpret_cast<int64_t*>(rbp2 - 48) = rax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 16);
    eax6 = fun_899(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
    rax10 = fun_8a5(rdi8);
    *reinterpret_cast<uint64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 24);
    eax14 = fun_8b2(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 36) = eax14;
    *reinterpret_cast<int32_t*>(rbp16 - 68) = *reinterpret_cast<int32_t*>(rbp17 - 32) - *reinterpret_cast<int32_t*>(rbp18 - 36);
    *reinterpret_cast<int64_t*>(rbp19 - 48) = *reinterpret_cast<int64_t*>(rbp20 - 48) << 10;
    *reinterpret_cast<int64_t*>(rbp21 - 56) = *reinterpret_cast<int64_t*>(rbp22 - 56) << 10;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp23 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp24 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp25 - 32) != 0x7ff) {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 32) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(rbp27 - 32) = 1;
                    *reinterpret_cast<int32_t*>(rbp28 - 36) = 1;
                }
                if (*reinterpret_cast<uint64_t*>(rbp29 - 56) < *reinterpret_cast<uint64_t*>(rbp30 - 48)) 
                    goto addr_96d_10;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp31 - 48) | *reinterpret_cast<uint64_t*>(rbp32 - 56)) == gettimeofday) {
                    fun_934(16);
                    *reinterpret_cast<int64_t*>(rbp33 - 8) = 0x7fffffffffffffff;
                    goto addr_b19_14;
                } else {
                    rdi34 = *reinterpret_cast<uint64_t*>(rbp35 - 16);
                    rsi36 = *reinterpret_cast<uint64_t*>(rbp37 - 24);
                    rax38 = propagateFloat64NaN(rdi34, rsi36);
                    *reinterpret_cast<uint64_t*>(rbp39 - 8) = rax38;
                    goto addr_b19_14;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp40 - 36) != 0x7ff) 
                goto addr_9f6_18; else 
                goto addr_9b8_19;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp41 - 32) != 0x7ff) 
            goto addr_a9f_22; else 
            goto addr_a71_23;
    }
    if (*reinterpret_cast<uint64_t*>(rbp42 - 48) >= *reinterpret_cast<uint64_t*>(rbp43 - 56)) {
        rax44 = g98c;
        *reinterpret_cast<uint32_t*>(&rdi45) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax44 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax46 = fun_9a2(rdi45);
        *reinterpret_cast<uint64_t*>(rbp47 - 8) = rax46;
    } else {
        goto addr_a44_28;
    }
    addr_b19_14:
    goto v48;
    addr_a44_28:
    *reinterpret_cast<int64_t*>(rbp49 - 64) = *reinterpret_cast<int64_t*>(rbp50 - 56) - *reinterpret_cast<int64_t*>(rbp51 - 48);
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 36);
    *reinterpret_cast<uint32_t*>(rbp54 - 28) = *reinterpret_cast<uint32_t*>(rbp55 - 28) ^ 1;
    addr_afd_29:
    *reinterpret_cast<int32_t*>(rbp56 - 40) = *reinterpret_cast<int32_t*>(rbp57 - 40) - 1;
    edi58 = *reinterpret_cast<uint32_t*>(rbp59 - 28);
    esi60 = *reinterpret_cast<int32_t*>(rbp61 - 40);
    rdx62 = *reinterpret_cast<uint64_t*>(rbp63 - 64);
    rax64 = normalizeRoundAndPackFloat64(edi58, esi60, rdx62);
    *reinterpret_cast<uint64_t*>(rbp65 - 8) = rax64;
    goto addr_b19_14;
    addr_96d_10:
    addr_aeb_30:
    *reinterpret_cast<int64_t*>(rbp66 - 64) = *reinterpret_cast<int64_t*>(rbp67 - 48) - *reinterpret_cast<int64_t*>(rbp68 - 56);
    *reinterpret_cast<int32_t*>(rbp69 - 40) = *reinterpret_cast<int32_t*>(rbp70 - 32);
    goto addr_afd_29;
    addr_9f6_18:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp71 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp72 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp73 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp74 - 68) = *reinterpret_cast<int32_t*>(rbp75 - 68) + 1;
    }
    rdi76 = *reinterpret_cast<uint64_t*>(rbp77 - 48);
    fun_a32(rdi76);
    *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    goto addr_a44_28;
    addr_9b8_19:
    if (*reinterpret_cast<int64_t*>(rbp80 - 56) == gettimeofday) {
        rax81 = fun_9ed();
        *reinterpret_cast<uint64_t*>(rbp82 - 8) = rax81;
        goto addr_b19_14;
    } else {
        rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
        rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
        rax87 = propagateFloat64NaN(rdi83, rsi85);
        *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
        goto addr_b19_14;
    }
    addr_a9f_22:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp89 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp90 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp92 - 68) = *reinterpret_cast<int32_t*>(rbp93 - 68) - 1;
    }
    rdi94 = *reinterpret_cast<uint64_t*>(rbp95 - 56);
    *reinterpret_cast<int32_t*>(&rsi96) = *reinterpret_cast<int32_t*>(rbp97 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi96) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_ad9(rdi94, rsi96, rbp98 - 56);
    *reinterpret_cast<uint64_t*>(rbp99 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp100 - 48);
    goto addr_aeb_30;
    addr_a71_23:
    if (*reinterpret_cast<int64_t*>(rbp101 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp102 - 8) = *reinterpret_cast<int64_t*>(rbp103 - 16);
        goto addr_b19_14;
    } else {
        rdi104 = *reinterpret_cast<uint64_t*>(rbp105 - 16);
        rsi106 = *reinterpret_cast<uint64_t*>(rbp107 - 24);
        rax108 = propagateFloat64NaN(rdi104, rsi106);
        *reinterpret_cast<uint64_t*>(rbp109 - 8) = rax108;
        goto addr_b19_14;
    }
}

uint32_t fun_de5(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    uint64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    uint64_t rdi8;
    int64_t rbp9;
    uint32_t eax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t v33;

    *reinterpret_cast<int32_t*>(rbp2 - 24) = eax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 16);
    eax6 = fun_df1(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_dfd(rdi8);
    *reinterpret_cast<uint32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint64_t*>(rbp12 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp13 - 8);
    *reinterpret_cast<uint64_t*>(rbp14 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp16 - 24) | *reinterpret_cast<uint32_t*>(rbp17 - 32)) != gettimeofday) {
        fun_e3d(16);
    }
    if (*reinterpret_cast<int32_t*>(rbp18 - 32) == gettimeofday) {
        if (*reinterpret_cast<int32_t*>(rbp19 - 24) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp20 - 28) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp21 - 56) = *reinterpret_cast<int64_t*>(rbp22 - 8);
            } else {
                *reinterpret_cast<int64_t*>(rbp23 - 56) = *reinterpret_cast<int64_t*>(rbp24 - 16);
            }
            *reinterpret_cast<int64_t*>(rbp25 - 48) = *reinterpret_cast<int64_t*>(rbp26 - 56);
        } else {
            *reinterpret_cast<int64_t*>(rbp27 - 48) = *reinterpret_cast<int64_t*>(rbp28 - 8);
        }
        *reinterpret_cast<int64_t*>(rbp29 - 40) = *reinterpret_cast<int64_t*>(rbp30 - 48);
    } else {
        *reinterpret_cast<int64_t*>(rbp31 - 40) = *reinterpret_cast<int64_t*>(rbp32 - 16);
    }
    goto v33;
}

int32_t fun_b56(int64_t rdi);

int32_t fun_b62(int64_t rdi);

int64_t fun_b6e(int64_t rdi);

int32_t fun_b7b(int64_t rdi);

int32_t fun_b87(int64_t rdi);

void fun_d62(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t fun_c90(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t fun_c19(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_b49(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rax14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int32_t eax22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rsi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    uint64_t rdi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rax51;
    int64_t rbp52;
    int64_t rbp53;
    uint64_t rdi54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rax60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rax67;
    int64_t rbp68;
    int64_t rbp69;
    uint64_t rdi70;
    int64_t rbp71;
    uint64_t rsi72;
    int64_t rbp73;
    uint64_t rax74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    uint64_t rdi79;
    int64_t rbp80;
    uint64_t rsi81;
    int64_t rbp82;
    uint64_t rax83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rbp86;
    int64_t rdi87;
    int64_t rbp88;
    int64_t rax89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    uint32_t edi100;
    int64_t rbp101;
    int32_t esi102;
    int64_t rbp103;
    uint64_t rdx104;
    int64_t rbp105;
    uint64_t rax106;
    int64_t rbp107;
    int64_t v108;

    *reinterpret_cast<int64_t*>(rbp2 - 56) = rax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_b56(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 40) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
    eax10 = fun_b62(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    rax14 = fun_b6e(rdi12);
    *reinterpret_cast<int64_t*>(rbp15 - 64) = rax14;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_b7b(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 44) = eax18;
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
    eax22 = fun_b87(rdi20);
    *reinterpret_cast<int32_t*>(rbp23 - 32) = eax22;
    *reinterpret_cast<uint32_t*>(rbp24 - 36) = *reinterpret_cast<uint32_t*>(rbp25 - 28) ^ *reinterpret_cast<uint32_t*>(rbp26 - 32);
    if (*reinterpret_cast<int32_t*>(rbp27 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp28 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp29 - 40) == gettimeofday)) {
                addr_cd6_9:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp30 - 44) == gettimeofday)) {
                    addr_d13_10:
                    *reinterpret_cast<int32_t*>(rbp31 - 48) = *reinterpret_cast<int32_t*>(rbp32 - 40) + *reinterpret_cast<int32_t*>(rbp33 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp34 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp35 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp36 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp37 - 64)) << 11;
                    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 56);
                    rsi40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
                    fun_d62(rdi38, rsi40, rbp42 - 72, rbp43 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp44 - 64) == gettimeofday)) {
                        rdi45 = *reinterpret_cast<uint64_t*>(rbp46 - 64);
                        normalizeFloat64Subnormal(rdi45, rbp47 - 44, rbp48 - 64);
                        goto addr_d13_10;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax51 = fun_cf9(rdi49);
                        *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                        goto addr_db4_15;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp53 - 56) == gettimeofday)) {
                    rdi54 = *reinterpret_cast<uint64_t*>(rbp55 - 56);
                    normalizeFloat64Subnormal(rdi54, rbp56 - 40, rbp57 - 56);
                    goto addr_cd6_9;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi58) = *reinterpret_cast<int32_t*>(rbp59 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax60 = fun_cbc(rdi58);
                    *reinterpret_cast<int64_t*>(rbp61 - 8) = rax60;
                    goto addr_db4_15;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp62 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp63 - 40))) | *reinterpret_cast<uint64_t*>(rbp64 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax67 = fun_c90(rdi65, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                    goto addr_db4_15;
                } else {
                    fun_c6c(16);
                    *reinterpret_cast<int64_t*>(rbp69 - 8) = 0x7fffffffffffffff;
                    goto addr_db4_15;
                }
            } else {
                rdi70 = *reinterpret_cast<uint64_t*>(rbp71 - 16);
                rsi72 = *reinterpret_cast<uint64_t*>(rbp73 - 24);
                rax74 = propagateFloat64NaN(rdi70, rsi72);
                *reinterpret_cast<uint64_t*>(rbp75 - 8) = rax74;
                goto addr_db4_15;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp77 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp78 - 64) != gettimeofday) {
            rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
            rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
            rax83 = propagateFloat64NaN(rdi79, rsi81);
            *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
            goto addr_db4_15;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp85 - 44))) | *reinterpret_cast<uint64_t*>(rbp86 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi87) = *reinterpret_cast<int32_t*>(rbp88 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi87) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax89 = fun_c19(rdi87, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp90 - 8) = rax89;
                goto addr_db4_15;
            } else {
                fun_bf5(16);
                *reinterpret_cast<int64_t*>(rbp91 - 8) = 0x7fffffffffffffff;
                goto addr_db4_15;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp92 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp93 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp94 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp95 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp96 - 72) = *reinterpret_cast<int64_t*>(rbp97 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp98 - 48) = *reinterpret_cast<int32_t*>(rbp99 - 48) - 1;
    }
    edi100 = *reinterpret_cast<uint32_t*>(rbp101 - 36);
    esi102 = *reinterpret_cast<int32_t*>(rbp103 - 48);
    rdx104 = *reinterpret_cast<uint64_t*>(rbp105 - 72);
    rax106 = roundAndPackFloat64(edi100, esi102, rdx104);
    *reinterpret_cast<uint64_t*>(rbp107 - 8) = rax106;
    addr_db4_15:
    goto v108;
}

int32_t countLeadingZeros64(uint64_t rdi) {
    uint64_t v2;
    int32_t v3;
    uint64_t rax4;
    int32_t eax5;

    v2 = rdi;
    v3 = reinterpret_cast<int32_t>(gettimeofday);
    if (v2 >= 0x100000000) {
        v2 = v2 >> 32;
    } else {
        v3 = 32;
    }
    rax4 = v2;
    eax5 = countLeadingZeros32(*reinterpret_cast<uint32_t*>(&rax4));
    return eax5 + v3;
}

int64_t fun_c19(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t fun_c90(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_d62(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    uint32_t edi13;
    int64_t rbp14;
    int32_t esi15;
    int64_t rbp16;
    uint64_t rdx17;
    int64_t rbp18;
    uint64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp5 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp6 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp7 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp8 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp11 - 48) = *reinterpret_cast<int32_t*>(rbp12 - 48) - 1;
    }
    edi13 = *reinterpret_cast<uint32_t*>(rbp14 - 36);
    esi15 = *reinterpret_cast<int32_t*>(rbp16 - 48);
    rdx17 = *reinterpret_cast<uint64_t*>(rbp18 - 72);
    rax19 = roundAndPackFloat64(edi13, esi15, rdx17);
    *reinterpret_cast<uint64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

int64_t fun_11fd(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t fun_12aa(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_15b9(int64_t rdi) {
    int32_t eax2;
    int64_t rdi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rax8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rax14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int1_t zf22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int1_t zf32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t v40;
    int64_t rbp41;

    if (eax2 != 0x7ff) {
        addr_15d7_2:
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 24);
        eax5 = fun_15e0(rdi3);
    } else {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 16);
        rax8 = fun_15cd(rdi6);
        if (!reinterpret_cast<int1_t>(rax8 == gettimeofday)) 
            goto addr_15fe_5; else 
            goto addr_15d7_2;
    }
    if (eax5 != 0x7ff) {
        addr_1614_7:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
        eax11 = fun_161d(rdi9);
    } else {
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
        rax14 = fun_15f4(rdi12);
        if (rax14 == gettimeofday) 
            goto addr_1614_7; else 
            goto addr_15fe_5;
    }
    *reinterpret_cast<int32_t*>(rbp15 - 28) = eax11;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_1629(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 32) = eax18;
    if (*reinterpret_cast<int32_t*>(rbp20 - 28) == *reinterpret_cast<int32_t*>(rbp21 - 32)) {
        zf22 = *reinterpret_cast<int64_t*>(rbp23 - 16) == *reinterpret_cast<int64_t*>(rbp24 - 24);
        *reinterpret_cast<signed char*>(rbp25 - 34) = 1;
        if (!zf22) {
            *reinterpret_cast<unsigned char*>(rbp26 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp27 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp28 - 16) < *reinterpret_cast<uint64_t*>(rbp29 - 24))) & 1))) == gettimeofday));
        }
        *reinterpret_cast<uint32_t*>(rbp30 - 4) = *reinterpret_cast<unsigned char*>(rbp31 - 34) & 1;
    } else {
        zf32 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp33 - 28) == gettimeofday);
        *reinterpret_cast<signed char*>(rbp34 - 33) = 1;
        if (zf32) {
            *reinterpret_cast<unsigned char*>(rbp35 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp36 - 16) | *reinterpret_cast<uint64_t*>(rbp37 - 24)) << 1 == gettimeofday);
        }
        *reinterpret_cast<uint32_t*>(rbp38 - 4) = *reinterpret_cast<unsigned char*>(rbp39 - 33) & 1;
    }
    addr_16aa_18:
    goto v40;
    addr_15fe_5:
    fun_1608(16);
    *reinterpret_cast<int32_t*>(rbp41 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto addr_16aa_18;
}

int32_t fun_161d(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int1_t zf10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int1_t zf20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t v28;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_1629(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    if (*reinterpret_cast<int32_t*>(rbp8 - 28) == *reinterpret_cast<int32_t*>(rbp9 - 32)) {
        zf10 = *reinterpret_cast<int64_t*>(rbp11 - 16) == *reinterpret_cast<int64_t*>(rbp12 - 24);
        *reinterpret_cast<signed char*>(rbp13 - 34) = 1;
        if (!zf10) {
            *reinterpret_cast<unsigned char*>(rbp14 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp15 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp16 - 16) < *reinterpret_cast<uint64_t*>(rbp17 - 24))) & 1))) == gettimeofday));
        }
        *reinterpret_cast<uint32_t*>(rbp18 - 4) = *reinterpret_cast<unsigned char*>(rbp19 - 34) & 1;
    } else {
        zf20 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp21 - 28) == gettimeofday);
        *reinterpret_cast<signed char*>(rbp22 - 33) = 1;
        if (zf20) {
            *reinterpret_cast<unsigned char*>(rbp23 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp24 - 16) | *reinterpret_cast<uint64_t*>(rbp25 - 24)) << 1 == gettimeofday);
        }
        *reinterpret_cast<uint32_t*>(rbp26 - 4) = *reinterpret_cast<unsigned char*>(rbp27 - 33) & 1;
    }
    goto v28;
}

int32_t g19bc = 0xe800b0;

int32_t fun_19a5() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rbp3;
    int32_t* rsi4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(rbp1 - 20) = eax2;
    if (*reinterpret_cast<int32_t*>(rbp3 - 20) != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_19c3(0x19bc, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    g19bc = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

int32_t fun_595(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    uint64_t rdi6;
    int64_t rbp7;
    uint64_t rsi8;
    int64_t rbp9;
    uint32_t edx10;
    int64_t rbp11;
    uint64_t rax12;
    int64_t rbp13;
    uint64_t rdi14;
    int64_t rbp15;
    uint64_t rsi16;
    int64_t rbp17;
    uint32_t edx18;
    int64_t rbp19;
    uint64_t rax20;
    int64_t rbp21;
    int64_t v22;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    if (*reinterpret_cast<int32_t*>(rbp4 - 28) != *reinterpret_cast<int32_t*>(rbp5 - 32)) {
        rdi6 = *reinterpret_cast<uint64_t*>(rbp7 - 16);
        rsi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
        edx10 = *reinterpret_cast<uint32_t*>(rbp11 - 28);
        rax12 = subFloat64Sigs(rdi6, rsi8, edx10);
        *reinterpret_cast<uint64_t*>(rbp13 - 8) = rax12;
    } else {
        rdi14 = *reinterpret_cast<uint64_t*>(rbp15 - 16);
        rsi16 = *reinterpret_cast<uint64_t*>(rbp17 - 24);
        edx18 = *reinterpret_cast<uint32_t*>(rbp19 - 28);
        rax20 = addFloat64Sigs(rdi14, rsi16, edx18);
        *reinterpret_cast<uint64_t*>(rbp21 - 8) = rax20;
    }
    goto v22;
}

uint64_t fun_615(uint64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    uint64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    uint64_t rax26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    uint64_t rdi32;
    int64_t rbp33;
    uint64_t rsi34;
    int64_t rbp35;
    uint64_t rax36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    uint64_t rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    uint64_t rax51;
    int64_t rbp52;
    uint64_t rdi53;
    int64_t rbp54;
    uint64_t rsi55;
    int64_t rbp56;
    uint64_t rax57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    uint64_t rdi65;
    int64_t rbp66;
    int64_t rsi67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    uint64_t rdi75;
    int64_t rbp76;
    uint64_t rsi77;
    int64_t rbp78;
    uint64_t rax79;
    int64_t rbp80;
    uint32_t edi81;
    int64_t rbp82;
    int32_t esi83;
    int64_t rbp84;
    uint64_t rdx85;
    int64_t rbp86;
    uint64_t rax87;
    int64_t rbp88;
    int64_t v89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;

    *reinterpret_cast<int64_t*>(rbp2 - 56) = rax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 24);
    eax6 = fun_622(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 36) = eax6;
    *reinterpret_cast<int32_t*>(rbp8 - 68) = *reinterpret_cast<int32_t*>(rbp9 - 32) - *reinterpret_cast<int32_t*>(rbp10 - 36);
    *reinterpret_cast<int64_t*>(rbp11 - 48) = *reinterpret_cast<int64_t*>(rbp12 - 48) << 9;
    *reinterpret_cast<int64_t*>(rbp13 - 56) = *reinterpret_cast<int64_t*>(rbp14 - 56) << 9;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp15 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp16 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp17 - 32) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 32) == gettimeofday)) {
                    *reinterpret_cast<int64_t*>(rbp19 - 64) = 0x4000000000000000 + *reinterpret_cast<int64_t*>(rbp20 - 48) + *reinterpret_cast<int64_t*>(rbp21 - 56);
                    *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 32);
                } else {
                    *reinterpret_cast<int32_t*>(&rdi24) = *reinterpret_cast<int32_t*>(rbp25 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax26 = fun_7cc(rdi24);
                    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
                    goto addr_85e_9;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp28 - 48) | *reinterpret_cast<uint64_t*>(rbp29 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp30 - 8) = *reinterpret_cast<int64_t*>(rbp31 - 16);
                    goto addr_85e_9;
                } else {
                    rdi32 = *reinterpret_cast<uint64_t*>(rbp33 - 16);
                    rsi34 = *reinterpret_cast<uint64_t*>(rbp35 - 24);
                    rax36 = propagateFloat64NaN(rdi32, rsi34);
                    *reinterpret_cast<uint64_t*>(rbp37 - 8) = rax36;
                    goto addr_85e_9;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp38 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp39 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp40 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp41 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp42 - 68) = *reinterpret_cast<int32_t*>(rbp43 - 68) + 1;
                }
                rdi44 = *reinterpret_cast<uint64_t*>(rbp45 - 48);
                fun_75f(rdi44);
                *reinterpret_cast<int32_t*>(rbp46 - 40) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                goto addr_7fb_20;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp48 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax51 = fun_71a(rdi49, 0x7ff, gettimeofday);
                    *reinterpret_cast<uint64_t*>(rbp52 - 8) = rax51;
                    goto addr_85e_9;
                } else {
                    rdi53 = *reinterpret_cast<uint64_t*>(rbp54 - 16);
                    rsi55 = *reinterpret_cast<uint64_t*>(rbp56 - 24);
                    rax57 = propagateFloat64NaN(rdi53, rsi55);
                    *reinterpret_cast<uint64_t*>(rbp58 - 8) = rax57;
                    goto addr_85e_9;
                }
            }
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp59 - 32) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp60 - 36) == gettimeofday)) {
                *reinterpret_cast<uint64_t*>(rbp61 - 56) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp62 - 56);
            } else {
                *reinterpret_cast<int32_t*>(rbp63 - 68) = *reinterpret_cast<int32_t*>(rbp64 - 68) - 1;
            }
            rdi65 = *reinterpret_cast<uint64_t*>(rbp66 - 56);
            *reinterpret_cast<int32_t*>(&rsi67) = *reinterpret_cast<int32_t*>(rbp68 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_6c6(rdi65, rsi67, rbp69 - 56);
            *reinterpret_cast<int32_t*>(rbp70 - 40) = *reinterpret_cast<int32_t*>(rbp71 - 32);
            goto addr_7fb_20;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp72 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp73 - 8) = *reinterpret_cast<int64_t*>(rbp74 - 16);
                goto addr_85e_9;
            } else {
                rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
                rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
                rax79 = propagateFloat64NaN(rdi75, rsi77);
                *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
                goto addr_85e_9;
            }
        }
    }
    addr_84b_34:
    edi81 = *reinterpret_cast<uint32_t*>(rbp82 - 28);
    esi83 = *reinterpret_cast<int32_t*>(rbp84 - 40);
    rdx85 = *reinterpret_cast<uint64_t*>(rbp86 - 64);
    rax87 = roundAndPackFloat64(edi81, esi83, rdx85);
    *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
    addr_85e_9:
    goto v89;
    addr_7fb_20:
    *reinterpret_cast<uint64_t*>(rbp90 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 48);
    *reinterpret_cast<int64_t*>(rbp92 - 64) = *reinterpret_cast<int64_t*>(rbp93 - 48) + *reinterpret_cast<int64_t*>(rbp94 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp95 - 40) = *reinterpret_cast<int32_t*>(rbp96 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp97 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp98 - 64) = *reinterpret_cast<int64_t*>(rbp99 - 48) + *reinterpret_cast<int64_t*>(rbp100 - 56);
        *reinterpret_cast<int32_t*>(rbp101 - 40) = *reinterpret_cast<int32_t*>(rbp102 - 40) + 1;
    }
    goto addr_84b_34;
}

int32_t fun_899(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    uint64_t rdi4;
    int64_t rbp5;
    uint64_t rax6;
    int64_t rbp7;
    uint64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    uint64_t rdi30;
    int64_t rbp31;
    uint64_t rsi32;
    int64_t rbp33;
    uint64_t rax34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int32_t* rax40;
    int64_t rdi41;
    uint64_t rax42;
    int64_t rbp43;
    int64_t v44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    uint32_t edi54;
    int64_t rbp55;
    int32_t esi56;
    int64_t rbp57;
    uint64_t rdx58;
    int64_t rbp59;
    uint64_t rax60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    uint64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    uint64_t rax77;
    int64_t rbp78;
    uint64_t rdi79;
    int64_t rbp80;
    uint64_t rsi81;
    int64_t rbp82;
    uint64_t rax83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rbp89;
    uint64_t rdi90;
    int64_t rbp91;
    int64_t rsi92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    uint64_t rdi100;
    int64_t rbp101;
    uint64_t rsi102;
    int64_t rbp103;
    uint64_t rax104;
    int64_t rbp105;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 24);
    rax6 = fun_8a5(rdi4);
    *reinterpret_cast<uint64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
    eax10 = fun_8b2(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 36) = eax10;
    *reinterpret_cast<int32_t*>(rbp12 - 68) = *reinterpret_cast<int32_t*>(rbp13 - 32) - *reinterpret_cast<int32_t*>(rbp14 - 36);
    *reinterpret_cast<int64_t*>(rbp15 - 48) = *reinterpret_cast<int64_t*>(rbp16 - 48) << 10;
    *reinterpret_cast<int64_t*>(rbp17 - 56) = *reinterpret_cast<int64_t*>(rbp18 - 56) << 10;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp19 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp20 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp21 - 32) != 0x7ff) {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 32) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(rbp23 - 32) = 1;
                    *reinterpret_cast<int32_t*>(rbp24 - 36) = 1;
                }
                if (*reinterpret_cast<uint64_t*>(rbp25 - 56) < *reinterpret_cast<uint64_t*>(rbp26 - 48)) 
                    goto addr_96d_9;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp27 - 48) | *reinterpret_cast<uint64_t*>(rbp28 - 56)) == gettimeofday) {
                    fun_934(16);
                    *reinterpret_cast<int64_t*>(rbp29 - 8) = 0x7fffffffffffffff;
                    goto addr_b19_13;
                } else {
                    rdi30 = *reinterpret_cast<uint64_t*>(rbp31 - 16);
                    rsi32 = *reinterpret_cast<uint64_t*>(rbp33 - 24);
                    rax34 = propagateFloat64NaN(rdi30, rsi32);
                    *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
                    goto addr_b19_13;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp36 - 36) != 0x7ff) 
                goto addr_9f6_17; else 
                goto addr_9b8_18;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp37 - 32) != 0x7ff) 
            goto addr_a9f_21; else 
            goto addr_a71_22;
    }
    if (*reinterpret_cast<uint64_t*>(rbp38 - 48) >= *reinterpret_cast<uint64_t*>(rbp39 - 56)) {
        rax40 = g98c;
        *reinterpret_cast<uint32_t*>(&rdi41) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax40 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax42 = fun_9a2(rdi41);
        *reinterpret_cast<uint64_t*>(rbp43 - 8) = rax42;
    } else {
        goto addr_a44_27;
    }
    addr_b19_13:
    goto v44;
    addr_a44_27:
    *reinterpret_cast<int64_t*>(rbp45 - 64) = *reinterpret_cast<int64_t*>(rbp46 - 56) - *reinterpret_cast<int64_t*>(rbp47 - 48);
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 36);
    *reinterpret_cast<uint32_t*>(rbp50 - 28) = *reinterpret_cast<uint32_t*>(rbp51 - 28) ^ 1;
    addr_afd_28:
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 40) - 1;
    edi54 = *reinterpret_cast<uint32_t*>(rbp55 - 28);
    esi56 = *reinterpret_cast<int32_t*>(rbp57 - 40);
    rdx58 = *reinterpret_cast<uint64_t*>(rbp59 - 64);
    rax60 = normalizeRoundAndPackFloat64(edi54, esi56, rdx58);
    *reinterpret_cast<uint64_t*>(rbp61 - 8) = rax60;
    goto addr_b19_13;
    addr_96d_9:
    addr_aeb_29:
    *reinterpret_cast<int64_t*>(rbp62 - 64) = *reinterpret_cast<int64_t*>(rbp63 - 48) - *reinterpret_cast<int64_t*>(rbp64 - 56);
    *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 32);
    goto addr_afd_28;
    addr_9f6_17:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp67 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp68 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp69 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp70 - 68) = *reinterpret_cast<int32_t*>(rbp71 - 68) + 1;
    }
    rdi72 = *reinterpret_cast<uint64_t*>(rbp73 - 48);
    fun_a32(rdi72);
    *reinterpret_cast<uint64_t*>(rbp74 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp75 - 56);
    goto addr_a44_27;
    addr_9b8_18:
    if (*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) {
        rax77 = fun_9ed();
        *reinterpret_cast<uint64_t*>(rbp78 - 8) = rax77;
        goto addr_b19_13;
    } else {
        rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
        rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
        rax83 = propagateFloat64NaN(rdi79, rsi81);
        *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
        goto addr_b19_13;
    }
    addr_a9f_21:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp85 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp86 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp88 - 68) = *reinterpret_cast<int32_t*>(rbp89 - 68) - 1;
    }
    rdi90 = *reinterpret_cast<uint64_t*>(rbp91 - 56);
    *reinterpret_cast<int32_t*>(&rsi92) = *reinterpret_cast<int32_t*>(rbp93 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi92) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_ad9(rdi90, rsi92, rbp94 - 56);
    *reinterpret_cast<uint64_t*>(rbp95 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp96 - 48);
    goto addr_aeb_29;
    addr_a71_22:
    if (*reinterpret_cast<int64_t*>(rbp97 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp98 - 8) = *reinterpret_cast<int64_t*>(rbp99 - 16);
        goto addr_b19_13;
    } else {
        rdi100 = *reinterpret_cast<uint64_t*>(rbp101 - 16);
        rsi102 = *reinterpret_cast<uint64_t*>(rbp103 - 24);
        rax104 = propagateFloat64NaN(rdi100, rsi102);
        *reinterpret_cast<uint64_t*>(rbp105 - 8) = rax104;
        goto addr_b19_13;
    }
}

int32_t fun_df1(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    uint64_t rdi4;
    int64_t rbp5;
    uint32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t v29;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 16);
    eax6 = fun_dfd(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint64_t*>(rbp8 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<uint64_t*>(rbp10 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp12 - 24) | *reinterpret_cast<uint32_t*>(rbp13 - 32)) != gettimeofday) {
        fun_e3d(16);
    }
    if (*reinterpret_cast<int32_t*>(rbp14 - 32) == gettimeofday) {
        if (*reinterpret_cast<int32_t*>(rbp15 - 24) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp16 - 28) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp17 - 56) = *reinterpret_cast<int64_t*>(rbp18 - 8);
            } else {
                *reinterpret_cast<int64_t*>(rbp19 - 56) = *reinterpret_cast<int64_t*>(rbp20 - 16);
            }
            *reinterpret_cast<int64_t*>(rbp21 - 48) = *reinterpret_cast<int64_t*>(rbp22 - 56);
        } else {
            *reinterpret_cast<int64_t*>(rbp23 - 48) = *reinterpret_cast<int64_t*>(rbp24 - 8);
        }
        *reinterpret_cast<int64_t*>(rbp25 - 40) = *reinterpret_cast<int64_t*>(rbp26 - 48);
    } else {
        *reinterpret_cast<int64_t*>(rbp27 - 40) = *reinterpret_cast<int64_t*>(rbp28 - 16);
    }
    goto v29;
}

int32_t fun_b56(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rax10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int32_t eax14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t rsi36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    uint64_t rdi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rax47;
    int64_t rbp48;
    int64_t rbp49;
    uint64_t rdi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rax56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rax63;
    int64_t rbp64;
    int64_t rbp65;
    uint64_t rdi66;
    int64_t rbp67;
    uint64_t rsi68;
    int64_t rbp69;
    uint64_t rax70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    uint64_t rdi75;
    int64_t rbp76;
    uint64_t rsi77;
    int64_t rbp78;
    uint64_t rax79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    int64_t rdi83;
    int64_t rbp84;
    int64_t rax85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    uint32_t edi96;
    int64_t rbp97;
    int32_t esi98;
    int64_t rbp99;
    uint64_t rdx100;
    int64_t rbp101;
    uint64_t rax102;
    int64_t rbp103;
    int64_t v104;

    *reinterpret_cast<int32_t*>(rbp2 - 40) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_b62(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_b6e(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 64) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_b7b(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 44) = eax14;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_b87(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 32) = eax18;
    *reinterpret_cast<uint32_t*>(rbp20 - 36) = *reinterpret_cast<uint32_t*>(rbp21 - 28) ^ *reinterpret_cast<uint32_t*>(rbp22 - 32);
    if (*reinterpret_cast<int32_t*>(rbp23 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp24 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp25 - 40) == gettimeofday)) {
                addr_cd6_8:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 44) == gettimeofday)) {
                    addr_d13_9:
                    *reinterpret_cast<int32_t*>(rbp27 - 48) = *reinterpret_cast<int32_t*>(rbp28 - 40) + *reinterpret_cast<int32_t*>(rbp29 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp30 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp31 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp32 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp33 - 64)) << 11;
                    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 56);
                    rsi36 = *reinterpret_cast<int64_t*>(rbp37 - 64);
                    fun_d62(rdi34, rsi36, rbp38 - 72, rbp39 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp40 - 64) == gettimeofday)) {
                        rdi41 = *reinterpret_cast<uint64_t*>(rbp42 - 64);
                        normalizeFloat64Subnormal(rdi41, rbp43 - 44, rbp44 - 64);
                        goto addr_d13_9;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax47 = fun_cf9(rdi45);
                        *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                        goto addr_db4_14;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp49 - 56) == gettimeofday)) {
                    rdi50 = *reinterpret_cast<uint64_t*>(rbp51 - 56);
                    normalizeFloat64Subnormal(rdi50, rbp52 - 40, rbp53 - 56);
                    goto addr_cd6_8;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi54) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax56 = fun_cbc(rdi54);
                    *reinterpret_cast<int64_t*>(rbp57 - 8) = rax56;
                    goto addr_db4_14;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp58 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp59 - 40))) | *reinterpret_cast<uint64_t*>(rbp60 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax63 = fun_c90(rdi61, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                    goto addr_db4_14;
                } else {
                    fun_c6c(16);
                    *reinterpret_cast<int64_t*>(rbp65 - 8) = 0x7fffffffffffffff;
                    goto addr_db4_14;
                }
            } else {
                rdi66 = *reinterpret_cast<uint64_t*>(rbp67 - 16);
                rsi68 = *reinterpret_cast<uint64_t*>(rbp69 - 24);
                rax70 = propagateFloat64NaN(rdi66, rsi68);
                *reinterpret_cast<uint64_t*>(rbp71 - 8) = rax70;
                goto addr_db4_14;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp73 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp74 - 64) != gettimeofday) {
            rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
            rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
            rax79 = propagateFloat64NaN(rdi75, rsi77);
            *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
            goto addr_db4_14;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp81 - 44))) | *reinterpret_cast<uint64_t*>(rbp82 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi83) = *reinterpret_cast<int32_t*>(rbp84 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi83) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax85 = fun_c19(rdi83, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp86 - 8) = rax85;
                goto addr_db4_14;
            } else {
                fun_bf5(16);
                *reinterpret_cast<int64_t*>(rbp87 - 8) = 0x7fffffffffffffff;
                goto addr_db4_14;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp88 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp89 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp90 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp91 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp92 - 72) = *reinterpret_cast<int64_t*>(rbp93 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp94 - 48) = *reinterpret_cast<int32_t*>(rbp95 - 48) - 1;
    }
    edi96 = *reinterpret_cast<uint32_t*>(rbp97 - 36);
    esi98 = *reinterpret_cast<int32_t*>(rbp99 - 48);
    rdx100 = *reinterpret_cast<uint64_t*>(rbp101 - 72);
    rax102 = roundAndPackFloat64(edi96, esi98, rdx100);
    *reinterpret_cast<uint64_t*>(rbp103 - 8) = rax102;
    addr_db4_14:
    goto v104;
}

int32_t fun_1629(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int1_t zf6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int1_t zf16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t v24;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    if (*reinterpret_cast<int32_t*>(rbp4 - 28) == *reinterpret_cast<int32_t*>(rbp5 - 32)) {
        zf6 = *reinterpret_cast<int64_t*>(rbp7 - 16) == *reinterpret_cast<int64_t*>(rbp8 - 24);
        *reinterpret_cast<signed char*>(rbp9 - 34) = 1;
        if (!zf6) {
            *reinterpret_cast<unsigned char*>(rbp10 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp11 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp12 - 16) < *reinterpret_cast<uint64_t*>(rbp13 - 24))) & 1))) == gettimeofday));
        }
        *reinterpret_cast<uint32_t*>(rbp14 - 4) = *reinterpret_cast<unsigned char*>(rbp15 - 34) & 1;
    } else {
        zf16 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp17 - 28) == gettimeofday);
        *reinterpret_cast<signed char*>(rbp18 - 33) = 1;
        if (zf16) {
            *reinterpret_cast<unsigned char*>(rbp19 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp20 - 16) | *reinterpret_cast<uint64_t*>(rbp21 - 24)) << 1 == gettimeofday);
        }
        *reinterpret_cast<uint32_t*>(rbp22 - 4) = *reinterpret_cast<unsigned char*>(rbp23 - 33) & 1;
    }
    goto v24;
}

int32_t fun_622(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    uint64_t rax22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    uint64_t rdi28;
    int64_t rbp29;
    uint64_t rsi30;
    int64_t rbp31;
    uint64_t rax32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    uint64_t rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    uint64_t rax47;
    int64_t rbp48;
    uint64_t rdi49;
    int64_t rbp50;
    uint64_t rsi51;
    int64_t rbp52;
    uint64_t rax53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    uint64_t rdi61;
    int64_t rbp62;
    int64_t rsi63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    uint64_t rdi71;
    int64_t rbp72;
    uint64_t rsi73;
    int64_t rbp74;
    uint64_t rax75;
    int64_t rbp76;
    uint32_t edi77;
    int64_t rbp78;
    int32_t esi79;
    int64_t rbp80;
    uint64_t rdx81;
    int64_t rbp82;
    uint64_t rax83;
    int64_t rbp84;
    int64_t v85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = eax3;
    *reinterpret_cast<int32_t*>(rbp4 - 68) = *reinterpret_cast<int32_t*>(rbp5 - 32) - *reinterpret_cast<int32_t*>(rbp6 - 36);
    *reinterpret_cast<int64_t*>(rbp7 - 48) = *reinterpret_cast<int64_t*>(rbp8 - 48) << 9;
    *reinterpret_cast<int64_t*>(rbp9 - 56) = *reinterpret_cast<int64_t*>(rbp10 - 56) << 9;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp11 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp12 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp13 - 32) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 32) == gettimeofday)) {
                    *reinterpret_cast<int64_t*>(rbp15 - 64) = 0x4000000000000000 + *reinterpret_cast<int64_t*>(rbp16 - 48) + *reinterpret_cast<int64_t*>(rbp17 - 56);
                    *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 32);
                } else {
                    *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(rbp21 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax22 = fun_7cc(rdi20);
                    *reinterpret_cast<uint64_t*>(rbp23 - 8) = rax22;
                    goto addr_85e_8;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp24 - 48) | *reinterpret_cast<uint64_t*>(rbp25 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp26 - 8) = *reinterpret_cast<int64_t*>(rbp27 - 16);
                    goto addr_85e_8;
                } else {
                    rdi28 = *reinterpret_cast<uint64_t*>(rbp29 - 16);
                    rsi30 = *reinterpret_cast<uint64_t*>(rbp31 - 24);
                    rax32 = propagateFloat64NaN(rdi28, rsi30);
                    *reinterpret_cast<uint64_t*>(rbp33 - 8) = rax32;
                    goto addr_85e_8;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp34 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp35 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp36 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp37 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp38 - 68) = *reinterpret_cast<int32_t*>(rbp39 - 68) + 1;
                }
                rdi40 = *reinterpret_cast<uint64_t*>(rbp41 - 48);
                fun_75f(rdi40);
                *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                goto addr_7fb_19;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp44 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax47 = fun_71a(rdi45, 0x7ff, gettimeofday);
                    *reinterpret_cast<uint64_t*>(rbp48 - 8) = rax47;
                    goto addr_85e_8;
                } else {
                    rdi49 = *reinterpret_cast<uint64_t*>(rbp50 - 16);
                    rsi51 = *reinterpret_cast<uint64_t*>(rbp52 - 24);
                    rax53 = propagateFloat64NaN(rdi49, rsi51);
                    *reinterpret_cast<uint64_t*>(rbp54 - 8) = rax53;
                    goto addr_85e_8;
                }
            }
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp55 - 32) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp56 - 36) == gettimeofday)) {
                *reinterpret_cast<uint64_t*>(rbp57 - 56) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp58 - 56);
            } else {
                *reinterpret_cast<int32_t*>(rbp59 - 68) = *reinterpret_cast<int32_t*>(rbp60 - 68) - 1;
            }
            rdi61 = *reinterpret_cast<uint64_t*>(rbp62 - 56);
            *reinterpret_cast<int32_t*>(&rsi63) = *reinterpret_cast<int32_t*>(rbp64 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi63) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_6c6(rdi61, rsi63, rbp65 - 56);
            *reinterpret_cast<int32_t*>(rbp66 - 40) = *reinterpret_cast<int32_t*>(rbp67 - 32);
            goto addr_7fb_19;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp68 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp69 - 8) = *reinterpret_cast<int64_t*>(rbp70 - 16);
                goto addr_85e_8;
            } else {
                rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
                rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
                rax75 = propagateFloat64NaN(rdi71, rsi73);
                *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
                goto addr_85e_8;
            }
        }
    }
    addr_84b_33:
    edi77 = *reinterpret_cast<uint32_t*>(rbp78 - 28);
    esi79 = *reinterpret_cast<int32_t*>(rbp80 - 40);
    rdx81 = *reinterpret_cast<uint64_t*>(rbp82 - 64);
    rax83 = roundAndPackFloat64(edi77, esi79, rdx81);
    *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
    addr_85e_8:
    goto v85;
    addr_7fb_19:
    *reinterpret_cast<uint64_t*>(rbp86 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 48);
    *reinterpret_cast<int64_t*>(rbp88 - 64) = *reinterpret_cast<int64_t*>(rbp89 - 48) + *reinterpret_cast<int64_t*>(rbp90 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp91 - 40) = *reinterpret_cast<int32_t*>(rbp92 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp93 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp94 - 64) = *reinterpret_cast<int64_t*>(rbp95 - 48) + *reinterpret_cast<int64_t*>(rbp96 - 56);
        *reinterpret_cast<int32_t*>(rbp97 - 40) = *reinterpret_cast<int32_t*>(rbp98 - 40) + 1;
    }
    goto addr_84b_33;
}

uint64_t fun_8a5(uint64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    uint64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    uint64_t rdi26;
    int64_t rbp27;
    uint64_t rsi28;
    int64_t rbp29;
    uint64_t rax30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int32_t* rax36;
    int64_t rdi37;
    uint64_t rax38;
    int64_t rbp39;
    int64_t v40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    uint32_t edi50;
    int64_t rbp51;
    int32_t esi52;
    int64_t rbp53;
    uint64_t rdx54;
    int64_t rbp55;
    uint64_t rax56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    uint64_t rdi68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    uint64_t rax73;
    int64_t rbp74;
    uint64_t rdi75;
    int64_t rbp76;
    uint64_t rsi77;
    int64_t rbp78;
    uint64_t rax79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    int64_t rbp83;
    int64_t rbp84;
    int64_t rbp85;
    uint64_t rdi86;
    int64_t rbp87;
    int64_t rsi88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    uint64_t rdi96;
    int64_t rbp97;
    uint64_t rsi98;
    int64_t rbp99;
    uint64_t rax100;
    int64_t rbp101;

    *reinterpret_cast<int64_t*>(rbp2 - 56) = rax3;
    rdi4 = *reinterpret_cast<uint64_t*>(rbp5 - 24);
    eax6 = fun_8b2(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 36) = eax6;
    *reinterpret_cast<int32_t*>(rbp8 - 68) = *reinterpret_cast<int32_t*>(rbp9 - 32) - *reinterpret_cast<int32_t*>(rbp10 - 36);
    *reinterpret_cast<int64_t*>(rbp11 - 48) = *reinterpret_cast<int64_t*>(rbp12 - 48) << 10;
    *reinterpret_cast<int64_t*>(rbp13 - 56) = *reinterpret_cast<int64_t*>(rbp14 - 56) << 10;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp15 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp16 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp17 - 32) != 0x7ff) {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 32) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(rbp19 - 32) = 1;
                    *reinterpret_cast<int32_t*>(rbp20 - 36) = 1;
                }
                if (*reinterpret_cast<uint64_t*>(rbp21 - 56) < *reinterpret_cast<uint64_t*>(rbp22 - 48)) 
                    goto addr_96d_8;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp23 - 48) | *reinterpret_cast<uint64_t*>(rbp24 - 56)) == gettimeofday) {
                    fun_934(16);
                    *reinterpret_cast<int64_t*>(rbp25 - 8) = 0x7fffffffffffffff;
                    goto addr_b19_12;
                } else {
                    rdi26 = *reinterpret_cast<uint64_t*>(rbp27 - 16);
                    rsi28 = *reinterpret_cast<uint64_t*>(rbp29 - 24);
                    rax30 = propagateFloat64NaN(rdi26, rsi28);
                    *reinterpret_cast<uint64_t*>(rbp31 - 8) = rax30;
                    goto addr_b19_12;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp32 - 36) != 0x7ff) 
                goto addr_9f6_16; else 
                goto addr_9b8_17;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp33 - 32) != 0x7ff) 
            goto addr_a9f_20; else 
            goto addr_a71_21;
    }
    if (*reinterpret_cast<uint64_t*>(rbp34 - 48) >= *reinterpret_cast<uint64_t*>(rbp35 - 56)) {
        rax36 = g98c;
        *reinterpret_cast<uint32_t*>(&rdi37) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax36 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax38 = fun_9a2(rdi37);
        *reinterpret_cast<uint64_t*>(rbp39 - 8) = rax38;
    } else {
        goto addr_a44_26;
    }
    addr_b19_12:
    goto v40;
    addr_a44_26:
    *reinterpret_cast<int64_t*>(rbp41 - 64) = *reinterpret_cast<int64_t*>(rbp42 - 56) - *reinterpret_cast<int64_t*>(rbp43 - 48);
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 36);
    *reinterpret_cast<uint32_t*>(rbp46 - 28) = *reinterpret_cast<uint32_t*>(rbp47 - 28) ^ 1;
    addr_afd_27:
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 40) - 1;
    edi50 = *reinterpret_cast<uint32_t*>(rbp51 - 28);
    esi52 = *reinterpret_cast<int32_t*>(rbp53 - 40);
    rdx54 = *reinterpret_cast<uint64_t*>(rbp55 - 64);
    rax56 = normalizeRoundAndPackFloat64(edi50, esi52, rdx54);
    *reinterpret_cast<uint64_t*>(rbp57 - 8) = rax56;
    goto addr_b19_12;
    addr_96d_8:
    addr_aeb_28:
    *reinterpret_cast<int64_t*>(rbp58 - 64) = *reinterpret_cast<int64_t*>(rbp59 - 48) - *reinterpret_cast<int64_t*>(rbp60 - 56);
    *reinterpret_cast<int32_t*>(rbp61 - 40) = *reinterpret_cast<int32_t*>(rbp62 - 32);
    goto addr_afd_27;
    addr_9f6_16:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp63 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp64 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp65 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp66 - 68) = *reinterpret_cast<int32_t*>(rbp67 - 68) + 1;
    }
    rdi68 = *reinterpret_cast<uint64_t*>(rbp69 - 48);
    fun_a32(rdi68);
    *reinterpret_cast<uint64_t*>(rbp70 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp71 - 56);
    goto addr_a44_26;
    addr_9b8_17:
    if (*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) {
        rax73 = fun_9ed();
        *reinterpret_cast<uint64_t*>(rbp74 - 8) = rax73;
        goto addr_b19_12;
    } else {
        rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
        rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
        rax79 = propagateFloat64NaN(rdi75, rsi77);
        *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
        goto addr_b19_12;
    }
    addr_a9f_20:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp81 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp82 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp83 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp84 - 68) = *reinterpret_cast<int32_t*>(rbp85 - 68) - 1;
    }
    rdi86 = *reinterpret_cast<uint64_t*>(rbp87 - 56);
    *reinterpret_cast<int32_t*>(&rsi88) = *reinterpret_cast<int32_t*>(rbp89 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_ad9(rdi86, rsi88, rbp90 - 56);
    *reinterpret_cast<uint64_t*>(rbp91 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp92 - 48);
    goto addr_aeb_28;
    addr_a71_21:
    if (*reinterpret_cast<int64_t*>(rbp93 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp94 - 8) = *reinterpret_cast<int64_t*>(rbp95 - 16);
        goto addr_b19_12;
    } else {
        rdi96 = *reinterpret_cast<uint64_t*>(rbp97 - 16);
        rsi98 = *reinterpret_cast<uint64_t*>(rbp99 - 24);
        rax100 = propagateFloat64NaN(rdi96, rsi98);
        *reinterpret_cast<uint64_t*>(rbp101 - 8) = rax100;
        goto addr_b19_12;
    }
}

uint32_t fun_dfd(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t v25;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    *reinterpret_cast<uint64_t*>(rbp4 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp5 - 8);
    *reinterpret_cast<uint64_t*>(rbp6 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp7 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp8 - 24) | *reinterpret_cast<uint32_t*>(rbp9 - 32)) != gettimeofday) {
        fun_e3d(16);
    }
    if (*reinterpret_cast<int32_t*>(rbp10 - 32) == gettimeofday) {
        if (*reinterpret_cast<int32_t*>(rbp11 - 24) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp12 - 28) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp13 - 56) = *reinterpret_cast<int64_t*>(rbp14 - 8);
            } else {
                *reinterpret_cast<int64_t*>(rbp15 - 56) = *reinterpret_cast<int64_t*>(rbp16 - 16);
            }
            *reinterpret_cast<int64_t*>(rbp17 - 48) = *reinterpret_cast<int64_t*>(rbp18 - 56);
        } else {
            *reinterpret_cast<int64_t*>(rbp19 - 48) = *reinterpret_cast<int64_t*>(rbp20 - 8);
        }
        *reinterpret_cast<int64_t*>(rbp21 - 40) = *reinterpret_cast<int64_t*>(rbp22 - 48);
    } else {
        *reinterpret_cast<int64_t*>(rbp23 - 40) = *reinterpret_cast<int64_t*>(rbp24 - 16);
    }
    goto v25;
}

int32_t fun_b62(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rax6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int32_t eax14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t rsi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    uint64_t rdi37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rax43;
    int64_t rbp44;
    int64_t rbp45;
    uint64_t rdi46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t rax52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rax59;
    int64_t rbp60;
    int64_t rbp61;
    uint64_t rdi62;
    int64_t rbp63;
    uint64_t rsi64;
    int64_t rbp65;
    uint64_t rax66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    uint64_t rdi71;
    int64_t rbp72;
    uint64_t rsi73;
    int64_t rbp74;
    uint64_t rax75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rdi79;
    int64_t rbp80;
    int64_t rax81;
    int64_t rbp82;
    int64_t rbp83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    uint32_t edi92;
    int64_t rbp93;
    int32_t esi94;
    int64_t rbp95;
    uint64_t rdx96;
    int64_t rbp97;
    uint64_t rax98;
    int64_t rbp99;
    int64_t v100;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    rax6 = fun_b6e(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 64) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_b7b(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 44) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_b87(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint32_t*>(rbp16 - 36) = *reinterpret_cast<uint32_t*>(rbp17 - 28) ^ *reinterpret_cast<uint32_t*>(rbp18 - 32);
    if (*reinterpret_cast<int32_t*>(rbp19 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp20 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp21 - 40) == gettimeofday)) {
                addr_cd6_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 44) == gettimeofday)) {
                    addr_d13_8:
                    *reinterpret_cast<int32_t*>(rbp23 - 48) = *reinterpret_cast<int32_t*>(rbp24 - 40) + *reinterpret_cast<int32_t*>(rbp25 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp26 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp27 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp28 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp29 - 64)) << 11;
                    rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 56);
                    rsi32 = *reinterpret_cast<int64_t*>(rbp33 - 64);
                    fun_d62(rdi30, rsi32, rbp34 - 72, rbp35 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp36 - 64) == gettimeofday)) {
                        rdi37 = *reinterpret_cast<uint64_t*>(rbp38 - 64);
                        normalizeFloat64Subnormal(rdi37, rbp39 - 44, rbp40 - 64);
                        goto addr_d13_8;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi41) = *reinterpret_cast<int32_t*>(rbp42 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax43 = fun_cf9(rdi41);
                        *reinterpret_cast<int64_t*>(rbp44 - 8) = rax43;
                        goto addr_db4_13;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp45 - 56) == gettimeofday)) {
                    rdi46 = *reinterpret_cast<uint64_t*>(rbp47 - 56);
                    normalizeFloat64Subnormal(rdi46, rbp48 - 40, rbp49 - 56);
                    goto addr_cd6_7;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi50) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax52 = fun_cbc(rdi50);
                    *reinterpret_cast<int64_t*>(rbp53 - 8) = rax52;
                    goto addr_db4_13;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp54 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp55 - 40))) | *reinterpret_cast<uint64_t*>(rbp56 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax59 = fun_c90(rdi57, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                    goto addr_db4_13;
                } else {
                    fun_c6c(16);
                    *reinterpret_cast<int64_t*>(rbp61 - 8) = 0x7fffffffffffffff;
                    goto addr_db4_13;
                }
            } else {
                rdi62 = *reinterpret_cast<uint64_t*>(rbp63 - 16);
                rsi64 = *reinterpret_cast<uint64_t*>(rbp65 - 24);
                rax66 = propagateFloat64NaN(rdi62, rsi64);
                *reinterpret_cast<uint64_t*>(rbp67 - 8) = rax66;
                goto addr_db4_13;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp69 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp70 - 64) != gettimeofday) {
            rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
            rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
            rax75 = propagateFloat64NaN(rdi71, rsi73);
            *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
            goto addr_db4_13;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp77 - 44))) | *reinterpret_cast<uint64_t*>(rbp78 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi79) = *reinterpret_cast<int32_t*>(rbp80 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi79) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax81 = fun_c19(rdi79, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp82 - 8) = rax81;
                goto addr_db4_13;
            } else {
                fun_bf5(16);
                *reinterpret_cast<int64_t*>(rbp83 - 8) = 0x7fffffffffffffff;
                goto addr_db4_13;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp84 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp85 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp86 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp87 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp88 - 72) = *reinterpret_cast<int64_t*>(rbp89 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp90 - 48) = *reinterpret_cast<int32_t*>(rbp91 - 48) - 1;
    }
    edi92 = *reinterpret_cast<uint32_t*>(rbp93 - 36);
    esi94 = *reinterpret_cast<int32_t*>(rbp95 - 48);
    rdx96 = *reinterpret_cast<uint64_t*>(rbp97 - 72);
    rax98 = roundAndPackFloat64(edi92, esi94, rdx96);
    *reinterpret_cast<uint64_t*>(rbp99 - 8) = rax98;
    addr_db4_13:
    goto v100;
}

int32_t fun_1136(int64_t rdi);

int32_t fun_1142(int64_t rdi);

int64_t fun_114e(int64_t rdi);

int32_t fun_115b(int64_t rdi);

int32_t fun_1167(int64_t rdi);

void fun_1129(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rbp6;
    int32_t eax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int32_t eax19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int32_t eax23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    uint64_t rdi47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rdi51;
    int64_t rbp52;
    int64_t rax53;
    int64_t rbp54;
    int64_t rbp55;
    uint64_t rdi56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rdi62;
    int64_t rbp63;
    int64_t rax64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rdi68;
    int64_t rbp69;
    int64_t rax70;
    int64_t rbp71;
    uint64_t rdi72;
    int64_t rbp73;
    uint64_t rsi74;
    int64_t rbp75;
    uint64_t rax76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rdi80;
    int64_t rbp81;
    int64_t rax82;
    int64_t rbp83;
    int64_t rbp84;
    int64_t rbp85;
    uint64_t rdi86;
    int64_t rbp87;
    uint64_t rsi88;
    int64_t rbp89;
    uint64_t rax90;
    int64_t rbp91;
    uint64_t rdi92;
    int64_t rbp93;
    uint64_t rsi94;
    int64_t rbp95;
    uint64_t rax96;
    int64_t rbp97;
    uint64_t rdi98;
    int64_t rbp99;
    uint64_t rdx100;
    int64_t rbp101;
    uint64_t rax102;
    int64_t rbp103;
    int64_t rbp104;
    int64_t rdi105;
    int64_t rbp106;
    int64_t rsi107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rbp110;
    int64_t rdi111;
    int64_t rbp112;
    int64_t rdx113;
    int64_t rbp114;
    int64_t rcx115;
    int64_t rbp116;
    int64_t rbp117;
    int64_t rbp118;
    int64_t rbp119;
    int64_t rbp120;
    int64_t rbp121;
    int64_t rdi122;
    int64_t rbp123;
    int64_t rsi124;
    int64_t rbp125;
    int64_t rcx126;
    int64_t rbp127;
    int64_t rbp128;
    int64_t rbp129;
    int64_t rbp130;
    int64_t rbp131;
    int64_t rbp132;
    uint32_t edi133;
    int64_t rbp134;
    int32_t esi135;
    int64_t rbp136;
    uint64_t rdx137;
    int64_t rbp138;
    uint64_t rax139;
    int64_t rbp140;
    int64_t v141;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    eax7 = fun_1136(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 40) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
    eax11 = fun_1142(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 28) = eax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    rax15 = fun_114e(rdi13);
    *reinterpret_cast<int64_t*>(rbp16 - 64) = rax15;
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
    eax19 = fun_115b(rdi17);
    *reinterpret_cast<int32_t*>(rbp20 - 44) = eax19;
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
    eax23 = fun_1167(rdi21);
    *reinterpret_cast<int32_t*>(rbp24 - 32) = eax23;
    *reinterpret_cast<uint32_t*>(rbp25 - 36) = *reinterpret_cast<uint32_t*>(rbp26 - 28) ^ *reinterpret_cast<uint32_t*>(rbp27 - 32);
    if (*reinterpret_cast<int32_t*>(rbp28 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp29 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp30 - 44) == gettimeofday)) {
                addr_12c4_9:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp31 - 40) == gettimeofday)) {
                    addr_1301_10:
                    *reinterpret_cast<int32_t*>(rbp32 - 48) = *reinterpret_cast<int32_t*>(rbp33 - 40) - *reinterpret_cast<int32_t*>(rbp34 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp35 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp36 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp37 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp38 - 64)) << 11;
                    if (*reinterpret_cast<uint64_t*>(rbp39 - 64) <= reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp40 - 56) + *reinterpret_cast<int64_t*>(rbp41 - 56))) {
                        *reinterpret_cast<uint64_t*>(rbp42 - 56) = *reinterpret_cast<uint64_t*>(rbp43 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp44 - 48) = *reinterpret_cast<int32_t*>(rbp45 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp46 - 56) == gettimeofday)) {
                        rdi47 = *reinterpret_cast<uint64_t*>(rbp48 - 56);
                        normalizeFloat64Subnormal(rdi47, rbp49 - 40, rbp50 - 56);
                        goto addr_1301_10;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi51) = *reinterpret_cast<int32_t*>(rbp52 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax53 = fun_12e7(rdi51);
                        *reinterpret_cast<int64_t*>(rbp54 - 8) = rax53;
                        goto addr_1423_16;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp55 - 64) == gettimeofday)) {
                    rdi56 = *reinterpret_cast<uint64_t*>(rbp57 - 64);
                    normalizeFloat64Subnormal(rdi56, rbp58 - 44, rbp59 - 64);
                    goto addr_12c4_9;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp60 - 40))) | *reinterpret_cast<uint64_t*>(rbp61 - 56)) == gettimeofday)) {
                        fun_1299(2);
                        *reinterpret_cast<int32_t*>(&rdi62) = *reinterpret_cast<int32_t*>(rbp63 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax64 = fun_12aa(rdi62, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp65 - 8) = rax64;
                        goto addr_1423_16;
                    } else {
                        fun_127c(16);
                        *reinterpret_cast<int64_t*>(rbp66 - 8) = 0x7fffffffffffffff;
                        goto addr_1423_16;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp67 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi68) = *reinterpret_cast<int32_t*>(rbp69 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi68) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax70 = fun_1242(rdi68);
                *reinterpret_cast<int64_t*>(rbp71 - 8) = rax70;
                goto addr_1423_16;
            } else {
                rdi72 = *reinterpret_cast<uint64_t*>(rbp73 - 16);
                rsi74 = *reinterpret_cast<uint64_t*>(rbp75 - 24);
                rax76 = propagateFloat64NaN(rdi72, rsi74);
                *reinterpret_cast<uint64_t*>(rbp77 - 8) = rax76;
                goto addr_1423_16;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp78 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp79 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi80) = *reinterpret_cast<int32_t*>(rbp81 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi80) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax82 = fun_11fd(rdi80, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp83 - 8) = rax82;
                goto addr_1423_16;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp84 - 64) == gettimeofday) {
                    fun_11d9(16);
                    *reinterpret_cast<int64_t*>(rbp85 - 8) = 0x7fffffffffffffff;
                    goto addr_1423_16;
                } else {
                    rdi86 = *reinterpret_cast<uint64_t*>(rbp87 - 16);
                    rsi88 = *reinterpret_cast<uint64_t*>(rbp89 - 24);
                    rax90 = propagateFloat64NaN(rdi86, rsi88);
                    *reinterpret_cast<uint64_t*>(rbp91 - 8) = rax90;
                    goto addr_1423_16;
                }
            }
        } else {
            rdi92 = *reinterpret_cast<uint64_t*>(rbp93 - 16);
            rsi94 = *reinterpret_cast<uint64_t*>(rbp95 - 24);
            rax96 = propagateFloat64NaN(rdi92, rsi94);
            *reinterpret_cast<uint64_t*>(rbp97 - 8) = rax96;
            goto addr_1423_16;
        }
    }
    rdi98 = *reinterpret_cast<uint64_t*>(rbp99 - 56);
    rdx100 = *reinterpret_cast<uint64_t*>(rbp101 - 64);
    rax102 = estimateDiv128To64(rdi98, gettimeofday, rdx100);
    *reinterpret_cast<uint64_t*>(rbp103 - 72) = rax102;
    if ((*reinterpret_cast<uint64_t*>(rbp104 - 72) & 0x1ff) <= 2) {
        rdi105 = *reinterpret_cast<int64_t*>(rbp106 - 64);
        rsi107 = *reinterpret_cast<int64_t*>(rbp108 - 72);
        fun_13a3(rdi105, rsi107, rbp109 - 96, rbp110 - 0x68);
        rdi111 = *reinterpret_cast<int64_t*>(rbp112 - 56);
        rdx113 = *reinterpret_cast<int64_t*>(rbp114 - 96);
        rcx115 = *reinterpret_cast<int64_t*>(rbp116 - 0x68);
        fun_13c0(rdi111, gettimeofday, rdx113, rcx115, rbp117 - 80, rbp118 - 88, v2);
        while (*reinterpret_cast<int64_t*>(rbp119 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp120 - 72) = *reinterpret_cast<int64_t*>(rbp121 - 72) - 1;
            rdi122 = *reinterpret_cast<int64_t*>(rbp123 - 80);
            rsi124 = *reinterpret_cast<int64_t*>(rbp125 - 88);
            rcx126 = *reinterpret_cast<int64_t*>(rbp127 - 64);
            fun_13f4(rdi122, rsi124, gettimeofday, rcx126, rbp128 - 80, rbp129 - 88, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp130 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp131 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp132 - 72);
    }
    edi133 = *reinterpret_cast<uint32_t*>(rbp134 - 36);
    esi135 = *reinterpret_cast<int32_t*>(rbp136 - 48);
    rdx137 = *reinterpret_cast<uint64_t*>(rbp138 - 72);
    rax139 = roundAndPackFloat64(edi133, esi135, rdx137, edi133, esi135, rdx137);
    *reinterpret_cast<uint64_t*>(rbp140 - 8) = rax139;
    addr_1423_16:
    goto v141;
}

int32_t fun_8b2(uint64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    uint64_t rdi22;
    int64_t rbp23;
    uint64_t rsi24;
    int64_t rbp25;
    uint64_t rax26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int32_t* rax32;
    int64_t rdi33;
    uint64_t rax34;
    int64_t rbp35;
    int64_t v36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    uint32_t edi46;
    int64_t rbp47;
    int32_t esi48;
    int64_t rbp49;
    uint64_t rdx50;
    int64_t rbp51;
    uint64_t rax52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    uint64_t rdi64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    uint64_t rax69;
    int64_t rbp70;
    uint64_t rdi71;
    int64_t rbp72;
    uint64_t rsi73;
    int64_t rbp74;
    uint64_t rax75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;
    uint64_t rdi82;
    int64_t rbp83;
    int64_t rsi84;
    int64_t rbp85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    uint64_t rdi92;
    int64_t rbp93;
    uint64_t rsi94;
    int64_t rbp95;
    uint64_t rax96;
    int64_t rbp97;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = eax3;
    *reinterpret_cast<int32_t*>(rbp4 - 68) = *reinterpret_cast<int32_t*>(rbp5 - 32) - *reinterpret_cast<int32_t*>(rbp6 - 36);
    *reinterpret_cast<int64_t*>(rbp7 - 48) = *reinterpret_cast<int64_t*>(rbp8 - 48) << 10;
    *reinterpret_cast<int64_t*>(rbp9 - 56) = *reinterpret_cast<int64_t*>(rbp10 - 56) << 10;
    if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp11 - 68)) {
        if (*reinterpret_cast<int32_t*>(rbp12 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
            if (*reinterpret_cast<int32_t*>(rbp13 - 32) != 0x7ff) {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 32) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(rbp15 - 32) = 1;
                    *reinterpret_cast<int32_t*>(rbp16 - 36) = 1;
                }
                if (*reinterpret_cast<uint64_t*>(rbp17 - 56) < *reinterpret_cast<uint64_t*>(rbp18 - 48)) 
                    goto addr_96d_7;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp19 - 48) | *reinterpret_cast<uint64_t*>(rbp20 - 56)) == gettimeofday) {
                    fun_934(16);
                    *reinterpret_cast<int64_t*>(rbp21 - 8) = 0x7fffffffffffffff;
                    goto addr_b19_11;
                } else {
                    rdi22 = *reinterpret_cast<uint64_t*>(rbp23 - 16);
                    rsi24 = *reinterpret_cast<uint64_t*>(rbp25 - 24);
                    rax26 = propagateFloat64NaN(rdi22, rsi24);
                    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
                    goto addr_b19_11;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp28 - 36) != 0x7ff) 
                goto addr_9f6_15; else 
                goto addr_9b8_16;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp29 - 32) != 0x7ff) 
            goto addr_a9f_19; else 
            goto addr_a71_20;
    }
    if (*reinterpret_cast<uint64_t*>(rbp30 - 48) >= *reinterpret_cast<uint64_t*>(rbp31 - 56)) {
        rax32 = g98c;
        *reinterpret_cast<uint32_t*>(&rdi33) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax32 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax34 = fun_9a2(rdi33);
        *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
    } else {
        goto addr_a44_25;
    }
    addr_b19_11:
    goto v36;
    addr_a44_25:
    *reinterpret_cast<int64_t*>(rbp37 - 64) = *reinterpret_cast<int64_t*>(rbp38 - 56) - *reinterpret_cast<int64_t*>(rbp39 - 48);
    *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 36);
    *reinterpret_cast<uint32_t*>(rbp42 - 28) = *reinterpret_cast<uint32_t*>(rbp43 - 28) ^ 1;
    addr_afd_26:
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 40) - 1;
    edi46 = *reinterpret_cast<uint32_t*>(rbp47 - 28);
    esi48 = *reinterpret_cast<int32_t*>(rbp49 - 40);
    rdx50 = *reinterpret_cast<uint64_t*>(rbp51 - 64);
    rax52 = normalizeRoundAndPackFloat64(edi46, esi48, rdx50);
    *reinterpret_cast<uint64_t*>(rbp53 - 8) = rax52;
    goto addr_b19_11;
    addr_96d_7:
    addr_aeb_27:
    *reinterpret_cast<int64_t*>(rbp54 - 64) = *reinterpret_cast<int64_t*>(rbp55 - 48) - *reinterpret_cast<int64_t*>(rbp56 - 56);
    *reinterpret_cast<int32_t*>(rbp57 - 40) = *reinterpret_cast<int32_t*>(rbp58 - 32);
    goto addr_afd_26;
    addr_9f6_15:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp59 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp60 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp61 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp62 - 68) = *reinterpret_cast<int32_t*>(rbp63 - 68) + 1;
    }
    rdi64 = *reinterpret_cast<uint64_t*>(rbp65 - 48);
    fun_a32(rdi64);
    *reinterpret_cast<uint64_t*>(rbp66 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp67 - 56);
    goto addr_a44_25;
    addr_9b8_16:
    if (*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) {
        rax69 = fun_9ed();
        *reinterpret_cast<uint64_t*>(rbp70 - 8) = rax69;
        goto addr_b19_11;
    } else {
        rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
        rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
        rax75 = propagateFloat64NaN(rdi71, rsi73);
        *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
        goto addr_b19_11;
    }
    addr_a9f_19:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp77 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp80 - 68) = *reinterpret_cast<int32_t*>(rbp81 - 68) - 1;
    }
    rdi82 = *reinterpret_cast<uint64_t*>(rbp83 - 56);
    *reinterpret_cast<int32_t*>(&rsi84) = *reinterpret_cast<int32_t*>(rbp85 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi84) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_ad9(rdi82, rsi84, rbp86 - 56);
    *reinterpret_cast<uint64_t*>(rbp87 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp88 - 48);
    goto addr_aeb_27;
    addr_a71_20:
    if (*reinterpret_cast<int64_t*>(rbp89 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp90 - 8) = *reinterpret_cast<int64_t*>(rbp91 - 16);
        goto addr_b19_11;
    } else {
        rdi92 = *reinterpret_cast<uint64_t*>(rbp93 - 16);
        rsi94 = *reinterpret_cast<uint64_t*>(rbp95 - 24);
        rax96 = propagateFloat64NaN(rdi92, rsi94);
        *reinterpret_cast<uint64_t*>(rbp97 - 8) = rax96;
        goto addr_b19_11;
    }
}

int64_t fun_b6e(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rsi28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    uint64_t rdi33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rax39;
    int64_t rbp40;
    int64_t rbp41;
    uint64_t rdi42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rdi46;
    int64_t rbp47;
    int64_t rax48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rax55;
    int64_t rbp56;
    int64_t rbp57;
    uint64_t rdi58;
    int64_t rbp59;
    uint64_t rsi60;
    int64_t rbp61;
    uint64_t rax62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    uint64_t rdi67;
    int64_t rbp68;
    uint64_t rsi69;
    int64_t rbp70;
    uint64_t rax71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t rax77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    int64_t rbp83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rbp86;
    int64_t rbp87;
    uint32_t edi88;
    int64_t rbp89;
    int32_t esi90;
    int64_t rbp91;
    uint64_t rdx92;
    int64_t rbp93;
    uint64_t rax94;
    int64_t rbp95;
    int64_t v96;

    *reinterpret_cast<int64_t*>(rbp2 - 64) = rax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_b7b(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 44) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_b87(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint32_t*>(rbp12 - 36) = *reinterpret_cast<uint32_t*>(rbp13 - 28) ^ *reinterpret_cast<uint32_t*>(rbp14 - 32);
    if (*reinterpret_cast<int32_t*>(rbp15 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp16 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp17 - 40) == gettimeofday)) {
                addr_cd6_6:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 44) == gettimeofday)) {
                    addr_d13_7:
                    *reinterpret_cast<int32_t*>(rbp19 - 48) = *reinterpret_cast<int32_t*>(rbp20 - 40) + *reinterpret_cast<int32_t*>(rbp21 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp22 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp23 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp24 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp25 - 64)) << 11;
                    rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 56);
                    rsi28 = *reinterpret_cast<int64_t*>(rbp29 - 64);
                    fun_d62(rdi26, rsi28, rbp30 - 72, rbp31 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp32 - 64) == gettimeofday)) {
                        rdi33 = *reinterpret_cast<uint64_t*>(rbp34 - 64);
                        normalizeFloat64Subnormal(rdi33, rbp35 - 44, rbp36 - 64);
                        goto addr_d13_7;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi37) = *reinterpret_cast<int32_t*>(rbp38 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax39 = fun_cf9(rdi37);
                        *reinterpret_cast<int64_t*>(rbp40 - 8) = rax39;
                        goto addr_db4_12;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp41 - 56) == gettimeofday)) {
                    rdi42 = *reinterpret_cast<uint64_t*>(rbp43 - 56);
                    normalizeFloat64Subnormal(rdi42, rbp44 - 40, rbp45 - 56);
                    goto addr_cd6_6;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi46) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax48 = fun_cbc(rdi46);
                    *reinterpret_cast<int64_t*>(rbp49 - 8) = rax48;
                    goto addr_db4_12;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp50 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp51 - 40))) | *reinterpret_cast<uint64_t*>(rbp52 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax55 = fun_c90(rdi53, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                    goto addr_db4_12;
                } else {
                    fun_c6c(16);
                    *reinterpret_cast<int64_t*>(rbp57 - 8) = 0x7fffffffffffffff;
                    goto addr_db4_12;
                }
            } else {
                rdi58 = *reinterpret_cast<uint64_t*>(rbp59 - 16);
                rsi60 = *reinterpret_cast<uint64_t*>(rbp61 - 24);
                rax62 = propagateFloat64NaN(rdi58, rsi60);
                *reinterpret_cast<uint64_t*>(rbp63 - 8) = rax62;
                goto addr_db4_12;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp64 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp65 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp66 - 64) != gettimeofday) {
            rdi67 = *reinterpret_cast<uint64_t*>(rbp68 - 16);
            rsi69 = *reinterpret_cast<uint64_t*>(rbp70 - 24);
            rax71 = propagateFloat64NaN(rdi67, rsi69);
            *reinterpret_cast<uint64_t*>(rbp72 - 8) = rax71;
            goto addr_db4_12;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp73 - 44))) | *reinterpret_cast<uint64_t*>(rbp74 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi75) = *reinterpret_cast<int32_t*>(rbp76 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi75) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax77 = fun_c19(rdi75, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp78 - 8) = rax77;
                goto addr_db4_12;
            } else {
                fun_bf5(16);
                *reinterpret_cast<int64_t*>(rbp79 - 8) = 0x7fffffffffffffff;
                goto addr_db4_12;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp80 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp81 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp82 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp83 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp84 - 72) = *reinterpret_cast<int64_t*>(rbp85 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp86 - 48) = *reinterpret_cast<int32_t*>(rbp87 - 48) - 1;
    }
    edi88 = *reinterpret_cast<uint32_t*>(rbp89 - 36);
    esi90 = *reinterpret_cast<int32_t*>(rbp91 - 48);
    rdx92 = *reinterpret_cast<uint64_t*>(rbp93 - 72);
    rax94 = roundAndPackFloat64(edi88, esi90, rdx92);
    *reinterpret_cast<uint64_t*>(rbp95 - 8) = rax94;
    addr_db4_12:
    goto v96;
}

int32_t fun_1136(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int32_t eax4;
    int64_t rdi5;
    int64_t rbp6;
    int32_t eax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int32_t eax15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int32_t eax19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    uint64_t rdi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t rax49;
    int64_t rbp50;
    int64_t rbp51;
    uint64_t rdi52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rax60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rdi64;
    int64_t rbp65;
    int64_t rax66;
    int64_t rbp67;
    uint64_t rdi68;
    int64_t rbp69;
    uint64_t rsi70;
    int64_t rbp71;
    uint64_t rax72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rdi76;
    int64_t rbp77;
    int64_t rax78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;
    uint64_t rdi82;
    int64_t rbp83;
    uint64_t rsi84;
    int64_t rbp85;
    uint64_t rax86;
    int64_t rbp87;
    uint64_t rdi88;
    int64_t rbp89;
    uint64_t rsi90;
    int64_t rbp91;
    uint64_t rax92;
    int64_t rbp93;
    uint64_t rdi94;
    int64_t rbp95;
    uint64_t rdx96;
    int64_t rbp97;
    uint64_t rax98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rdi101;
    int64_t rbp102;
    int64_t rsi103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rbp106;
    int64_t rdi107;
    int64_t rbp108;
    int64_t rdx109;
    int64_t rbp110;
    int64_t rcx111;
    int64_t rbp112;
    int64_t rbp113;
    int64_t rbp114;
    int64_t rbp115;
    int64_t rbp116;
    int64_t rbp117;
    int64_t rdi118;
    int64_t rbp119;
    int64_t rsi120;
    int64_t rbp121;
    int64_t rcx122;
    int64_t rbp123;
    int64_t rbp124;
    int64_t rbp125;
    int64_t rbp126;
    int64_t rbp127;
    int64_t rbp128;
    uint32_t edi129;
    int64_t rbp130;
    int32_t esi131;
    int64_t rbp132;
    uint64_t rdx133;
    int64_t rbp134;
    uint64_t rax135;
    int64_t rbp136;
    int64_t v137;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 40) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    eax7 = fun_1142(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    rax11 = fun_114e(rdi9);
    *reinterpret_cast<int64_t*>(rbp12 - 64) = rax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    eax15 = fun_115b(rdi13);
    *reinterpret_cast<int32_t*>(rbp16 - 44) = eax15;
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
    eax19 = fun_1167(rdi17);
    *reinterpret_cast<int32_t*>(rbp20 - 32) = eax19;
    *reinterpret_cast<uint32_t*>(rbp21 - 36) = *reinterpret_cast<uint32_t*>(rbp22 - 28) ^ *reinterpret_cast<uint32_t*>(rbp23 - 32);
    if (*reinterpret_cast<int32_t*>(rbp24 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp25 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 44) == gettimeofday)) {
                addr_12c4_8:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp27 - 40) == gettimeofday)) {
                    addr_1301_9:
                    *reinterpret_cast<int32_t*>(rbp28 - 48) = *reinterpret_cast<int32_t*>(rbp29 - 40) - *reinterpret_cast<int32_t*>(rbp30 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp31 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp32 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp33 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp34 - 64)) << 11;
                    if (*reinterpret_cast<uint64_t*>(rbp35 - 64) <= reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp36 - 56) + *reinterpret_cast<int64_t*>(rbp37 - 56))) {
                        *reinterpret_cast<uint64_t*>(rbp38 - 56) = *reinterpret_cast<uint64_t*>(rbp39 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp40 - 48) = *reinterpret_cast<int32_t*>(rbp41 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp42 - 56) == gettimeofday)) {
                        rdi43 = *reinterpret_cast<uint64_t*>(rbp44 - 56);
                        normalizeFloat64Subnormal(rdi43, rbp45 - 40, rbp46 - 56);
                        goto addr_1301_9;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi47) = *reinterpret_cast<int32_t*>(rbp48 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax49 = fun_12e7(rdi47);
                        *reinterpret_cast<int64_t*>(rbp50 - 8) = rax49;
                        goto addr_1423_15;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp51 - 64) == gettimeofday)) {
                    rdi52 = *reinterpret_cast<uint64_t*>(rbp53 - 64);
                    normalizeFloat64Subnormal(rdi52, rbp54 - 44, rbp55 - 64);
                    goto addr_12c4_8;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp56 - 40))) | *reinterpret_cast<uint64_t*>(rbp57 - 56)) == gettimeofday)) {
                        fun_1299(2);
                        *reinterpret_cast<int32_t*>(&rdi58) = *reinterpret_cast<int32_t*>(rbp59 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax60 = fun_12aa(rdi58, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp61 - 8) = rax60;
                        goto addr_1423_15;
                    } else {
                        fun_127c(16);
                        *reinterpret_cast<int64_t*>(rbp62 - 8) = 0x7fffffffffffffff;
                        goto addr_1423_15;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp63 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi64) = *reinterpret_cast<int32_t*>(rbp65 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi64) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax66 = fun_1242(rdi64);
                *reinterpret_cast<int64_t*>(rbp67 - 8) = rax66;
                goto addr_1423_15;
            } else {
                rdi68 = *reinterpret_cast<uint64_t*>(rbp69 - 16);
                rsi70 = *reinterpret_cast<uint64_t*>(rbp71 - 24);
                rax72 = propagateFloat64NaN(rdi68, rsi70);
                *reinterpret_cast<uint64_t*>(rbp73 - 8) = rax72;
                goto addr_1423_15;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp74 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp75 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi76) = *reinterpret_cast<int32_t*>(rbp77 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi76) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax78 = fun_11fd(rdi76, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp79 - 8) = rax78;
                goto addr_1423_15;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp80 - 64) == gettimeofday) {
                    fun_11d9(16);
                    *reinterpret_cast<int64_t*>(rbp81 - 8) = 0x7fffffffffffffff;
                    goto addr_1423_15;
                } else {
                    rdi82 = *reinterpret_cast<uint64_t*>(rbp83 - 16);
                    rsi84 = *reinterpret_cast<uint64_t*>(rbp85 - 24);
                    rax86 = propagateFloat64NaN(rdi82, rsi84);
                    *reinterpret_cast<uint64_t*>(rbp87 - 8) = rax86;
                    goto addr_1423_15;
                }
            }
        } else {
            rdi88 = *reinterpret_cast<uint64_t*>(rbp89 - 16);
            rsi90 = *reinterpret_cast<uint64_t*>(rbp91 - 24);
            rax92 = propagateFloat64NaN(rdi88, rsi90);
            *reinterpret_cast<uint64_t*>(rbp93 - 8) = rax92;
            goto addr_1423_15;
        }
    }
    rdi94 = *reinterpret_cast<uint64_t*>(rbp95 - 56);
    rdx96 = *reinterpret_cast<uint64_t*>(rbp97 - 64);
    rax98 = estimateDiv128To64(rdi94, gettimeofday, rdx96);
    *reinterpret_cast<uint64_t*>(rbp99 - 72) = rax98;
    if ((*reinterpret_cast<uint64_t*>(rbp100 - 72) & 0x1ff) <= 2) {
        rdi101 = *reinterpret_cast<int64_t*>(rbp102 - 64);
        rsi103 = *reinterpret_cast<int64_t*>(rbp104 - 72);
        fun_13a3(rdi101, rsi103, rbp105 - 96, rbp106 - 0x68);
        rdi107 = *reinterpret_cast<int64_t*>(rbp108 - 56);
        rdx109 = *reinterpret_cast<int64_t*>(rbp110 - 96);
        rcx111 = *reinterpret_cast<int64_t*>(rbp112 - 0x68);
        fun_13c0(rdi107, gettimeofday, rdx109, rcx111, rbp113 - 80, rbp114 - 88, v2);
        while (*reinterpret_cast<int64_t*>(rbp115 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp116 - 72) = *reinterpret_cast<int64_t*>(rbp117 - 72) - 1;
            rdi118 = *reinterpret_cast<int64_t*>(rbp119 - 80);
            rsi120 = *reinterpret_cast<int64_t*>(rbp121 - 88);
            rcx122 = *reinterpret_cast<int64_t*>(rbp123 - 64);
            fun_13f4(rdi118, rsi120, gettimeofday, rcx122, rbp124 - 80, rbp125 - 88, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp126 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp127 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp128 - 72);
    }
    edi129 = *reinterpret_cast<uint32_t*>(rbp130 - 36);
    esi131 = *reinterpret_cast<int32_t*>(rbp132 - 48);
    rdx133 = *reinterpret_cast<uint64_t*>(rbp134 - 72);
    rax135 = roundAndPackFloat64(edi129, esi131, rdx133, edi129, esi131, rdx133);
    *reinterpret_cast<uint64_t*>(rbp136 - 8) = rax135;
    addr_1423_15:
    goto v137;
}

int64_t fun_1774(int64_t rdi);

int64_t fun_1785(int64_t rdi, int64_t rsi);

int64_t fun_17a0(int64_t rdi, int64_t rsi);

int64_t fun_17ac(int64_t rdi, int64_t rsi);

int64_t fun_17bd(int64_t rdi, int64_t rsi);

int64_t fun_17d3(int64_t rdi, int64_t rsi);

int32_t fun_17e5(int64_t rdi, int64_t rsi);

void fun_176c(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rsi8;
    int64_t rbp9;
    int64_t rax10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rax18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rsi22;
    int64_t rbp23;
    int64_t rax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rax30;
    int32_t eax31;
    int64_t v32;

    rax4 = fun_1774(rax3);
    *reinterpret_cast<int64_t*>(rbp5 - 32) = rax4;
    do {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 24);
        rsi8 = *reinterpret_cast<int64_t*>(rbp9 - 32);
        rax10 = fun_1785(rdi6, rsi8);
        *reinterpret_cast<int64_t*>(rbp11 - 48) = rax10;
        *reinterpret_cast<int32_t*>(&rdi12) = (*reinterpret_cast<int32_t*>(rbp13 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp14 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax15 = fun_17a0(rdi12, rsi8);
        rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
        rax18 = fun_17ac(rdi16, rax15);
        *reinterpret_cast<int64_t*>(rbp19 - 24) = rax18;
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 16);
        rsi22 = *reinterpret_cast<int64_t*>(rbp23 - 24);
        rax24 = fun_17bd(rdi20, rsi22);
        *reinterpret_cast<int64_t*>(rbp25 - 16) = rax24;
        *reinterpret_cast<int32_t*>(rbp26 - 36) = *reinterpret_cast<int32_t*>(rbp27 - 36) + 1;
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 24);
        rax30 = fun_17d3(rdi28, rsi22);
        eax31 = fun_17e5(rax30, 0x3ee4f8b588e368f1);
    } while (!reinterpret_cast<int1_t>(eax31 == gettimeofday));
    goto v32;
}

int32_t fun_b7b(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rsi24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    uint64_t rdi29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rax35;
    int64_t rbp36;
    int64_t rbp37;
    uint64_t rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t rax44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rax51;
    int64_t rbp52;
    int64_t rbp53;
    uint64_t rdi54;
    int64_t rbp55;
    uint64_t rsi56;
    int64_t rbp57;
    uint64_t rax58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    uint64_t rdi63;
    int64_t rbp64;
    uint64_t rsi65;
    int64_t rbp66;
    uint64_t rax67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rax73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    int64_t rbp83;
    uint32_t edi84;
    int64_t rbp85;
    int32_t esi86;
    int64_t rbp87;
    uint64_t rdx88;
    int64_t rbp89;
    uint64_t rax90;
    int64_t rbp91;
    int64_t v92;

    *reinterpret_cast<int32_t*>(rbp2 - 44) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_b87(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint32_t*>(rbp8 - 36) = *reinterpret_cast<uint32_t*>(rbp9 - 28) ^ *reinterpret_cast<uint32_t*>(rbp10 - 32);
    if (*reinterpret_cast<int32_t*>(rbp11 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp12 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp13 - 40) == gettimeofday)) {
                addr_cd6_5:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 44) == gettimeofday)) {
                    addr_d13_6:
                    *reinterpret_cast<int32_t*>(rbp15 - 48) = *reinterpret_cast<int32_t*>(rbp16 - 40) + *reinterpret_cast<int32_t*>(rbp17 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp18 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp20 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp21 - 64)) << 11;
                    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 56);
                    rsi24 = *reinterpret_cast<int64_t*>(rbp25 - 64);
                    fun_d62(rdi22, rsi24, rbp26 - 72, rbp27 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp28 - 64) == gettimeofday)) {
                        rdi29 = *reinterpret_cast<uint64_t*>(rbp30 - 64);
                        normalizeFloat64Subnormal(rdi29, rbp31 - 44, rbp32 - 64);
                        goto addr_d13_6;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi33) = *reinterpret_cast<int32_t*>(rbp34 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax35 = fun_cf9(rdi33);
                        *reinterpret_cast<int64_t*>(rbp36 - 8) = rax35;
                        goto addr_db4_11;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp37 - 56) == gettimeofday)) {
                    rdi38 = *reinterpret_cast<uint64_t*>(rbp39 - 56);
                    normalizeFloat64Subnormal(rdi38, rbp40 - 40, rbp41 - 56);
                    goto addr_cd6_5;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax44 = fun_cbc(rdi42);
                    *reinterpret_cast<int64_t*>(rbp45 - 8) = rax44;
                    goto addr_db4_11;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp46 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp47 - 40))) | *reinterpret_cast<uint64_t*>(rbp48 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax51 = fun_c90(rdi49, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                    goto addr_db4_11;
                } else {
                    fun_c6c(16);
                    *reinterpret_cast<int64_t*>(rbp53 - 8) = 0x7fffffffffffffff;
                    goto addr_db4_11;
                }
            } else {
                rdi54 = *reinterpret_cast<uint64_t*>(rbp55 - 16);
                rsi56 = *reinterpret_cast<uint64_t*>(rbp57 - 24);
                rax58 = propagateFloat64NaN(rdi54, rsi56);
                *reinterpret_cast<uint64_t*>(rbp59 - 8) = rax58;
                goto addr_db4_11;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp60 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp61 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp62 - 64) != gettimeofday) {
            rdi63 = *reinterpret_cast<uint64_t*>(rbp64 - 16);
            rsi65 = *reinterpret_cast<uint64_t*>(rbp66 - 24);
            rax67 = propagateFloat64NaN(rdi63, rsi65);
            *reinterpret_cast<uint64_t*>(rbp68 - 8) = rax67;
            goto addr_db4_11;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp69 - 44))) | *reinterpret_cast<uint64_t*>(rbp70 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi71) = *reinterpret_cast<int32_t*>(rbp72 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax73 = fun_c19(rdi71, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp74 - 8) = rax73;
                goto addr_db4_11;
            } else {
                fun_bf5(16);
                *reinterpret_cast<int64_t*>(rbp75 - 8) = 0x7fffffffffffffff;
                goto addr_db4_11;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp76 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp77 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp78 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp79 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp80 - 72) = *reinterpret_cast<int64_t*>(rbp81 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp82 - 48) = *reinterpret_cast<int32_t*>(rbp83 - 48) - 1;
    }
    edi84 = *reinterpret_cast<uint32_t*>(rbp85 - 36);
    esi86 = *reinterpret_cast<int32_t*>(rbp87 - 48);
    rdx88 = *reinterpret_cast<uint64_t*>(rbp89 - 72);
    rax90 = roundAndPackFloat64(edi84, esi86, rdx88);
    *reinterpret_cast<uint64_t*>(rbp91 - 8) = rax90;
    addr_db4_11:
    goto v92;
}

int32_t fun_1142(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int32_t eax4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int32_t eax15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    uint64_t rdi39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rax45;
    int64_t rbp46;
    int64_t rbp47;
    uint64_t rdi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rax56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t rax62;
    int64_t rbp63;
    uint64_t rdi64;
    int64_t rbp65;
    uint64_t rsi66;
    int64_t rbp67;
    uint64_t rax68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rdi72;
    int64_t rbp73;
    int64_t rax74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    uint64_t rdi78;
    int64_t rbp79;
    uint64_t rsi80;
    int64_t rbp81;
    uint64_t rax82;
    int64_t rbp83;
    uint64_t rdi84;
    int64_t rbp85;
    uint64_t rsi86;
    int64_t rbp87;
    uint64_t rax88;
    int64_t rbp89;
    uint64_t rdi90;
    int64_t rbp91;
    uint64_t rdx92;
    int64_t rbp93;
    uint64_t rax94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rdi97;
    int64_t rbp98;
    int64_t rsi99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rdi103;
    int64_t rbp104;
    int64_t rdx105;
    int64_t rbp106;
    int64_t rcx107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rbp110;
    int64_t rbp111;
    int64_t rbp112;
    int64_t rbp113;
    int64_t rdi114;
    int64_t rbp115;
    int64_t rsi116;
    int64_t rbp117;
    int64_t rcx118;
    int64_t rbp119;
    int64_t rbp120;
    int64_t rbp121;
    int64_t rbp122;
    int64_t rbp123;
    int64_t rbp124;
    uint32_t edi125;
    int64_t rbp126;
    int32_t esi127;
    int64_t rbp128;
    uint64_t rdx129;
    int64_t rbp130;
    uint64_t rax131;
    int64_t rbp132;
    int64_t v133;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 28) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    rax7 = fun_114e(rdi5);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    eax11 = fun_115b(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 44) = eax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    eax15 = fun_1167(rdi13);
    *reinterpret_cast<int32_t*>(rbp16 - 32) = eax15;
    *reinterpret_cast<uint32_t*>(rbp17 - 36) = *reinterpret_cast<uint32_t*>(rbp18 - 28) ^ *reinterpret_cast<uint32_t*>(rbp19 - 32);
    if (*reinterpret_cast<int32_t*>(rbp20 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp21 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 44) == gettimeofday)) {
                addr_12c4_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 40) == gettimeofday)) {
                    addr_1301_8:
                    *reinterpret_cast<int32_t*>(rbp24 - 48) = *reinterpret_cast<int32_t*>(rbp25 - 40) - *reinterpret_cast<int32_t*>(rbp26 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp27 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp28 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp29 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp30 - 64)) << 11;
                    if (*reinterpret_cast<uint64_t*>(rbp31 - 64) <= reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp32 - 56) + *reinterpret_cast<int64_t*>(rbp33 - 56))) {
                        *reinterpret_cast<uint64_t*>(rbp34 - 56) = *reinterpret_cast<uint64_t*>(rbp35 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp36 - 48) = *reinterpret_cast<int32_t*>(rbp37 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp38 - 56) == gettimeofday)) {
                        rdi39 = *reinterpret_cast<uint64_t*>(rbp40 - 56);
                        normalizeFloat64Subnormal(rdi39, rbp41 - 40, rbp42 - 56);
                        goto addr_1301_8;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi43) = *reinterpret_cast<int32_t*>(rbp44 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax45 = fun_12e7(rdi43);
                        *reinterpret_cast<int64_t*>(rbp46 - 8) = rax45;
                        goto addr_1423_14;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp47 - 64) == gettimeofday)) {
                    rdi48 = *reinterpret_cast<uint64_t*>(rbp49 - 64);
                    normalizeFloat64Subnormal(rdi48, rbp50 - 44, rbp51 - 64);
                    goto addr_12c4_7;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp52 - 40))) | *reinterpret_cast<uint64_t*>(rbp53 - 56)) == gettimeofday)) {
                        fun_1299(2);
                        *reinterpret_cast<int32_t*>(&rdi54) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax56 = fun_12aa(rdi54, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp57 - 8) = rax56;
                        goto addr_1423_14;
                    } else {
                        fun_127c(16);
                        *reinterpret_cast<int64_t*>(rbp58 - 8) = 0x7fffffffffffffff;
                        goto addr_1423_14;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp59 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi60) = *reinterpret_cast<int32_t*>(rbp61 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax62 = fun_1242(rdi60);
                *reinterpret_cast<int64_t*>(rbp63 - 8) = rax62;
                goto addr_1423_14;
            } else {
                rdi64 = *reinterpret_cast<uint64_t*>(rbp65 - 16);
                rsi66 = *reinterpret_cast<uint64_t*>(rbp67 - 24);
                rax68 = propagateFloat64NaN(rdi64, rsi66);
                *reinterpret_cast<uint64_t*>(rbp69 - 8) = rax68;
                goto addr_1423_14;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp70 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp71 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi72) = *reinterpret_cast<int32_t*>(rbp73 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax74 = fun_11fd(rdi72, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp75 - 8) = rax74;
                goto addr_1423_14;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp76 - 64) == gettimeofday) {
                    fun_11d9(16);
                    *reinterpret_cast<int64_t*>(rbp77 - 8) = 0x7fffffffffffffff;
                    goto addr_1423_14;
                } else {
                    rdi78 = *reinterpret_cast<uint64_t*>(rbp79 - 16);
                    rsi80 = *reinterpret_cast<uint64_t*>(rbp81 - 24);
                    rax82 = propagateFloat64NaN(rdi78, rsi80);
                    *reinterpret_cast<uint64_t*>(rbp83 - 8) = rax82;
                    goto addr_1423_14;
                }
            }
        } else {
            rdi84 = *reinterpret_cast<uint64_t*>(rbp85 - 16);
            rsi86 = *reinterpret_cast<uint64_t*>(rbp87 - 24);
            rax88 = propagateFloat64NaN(rdi84, rsi86);
            *reinterpret_cast<uint64_t*>(rbp89 - 8) = rax88;
            goto addr_1423_14;
        }
    }
    rdi90 = *reinterpret_cast<uint64_t*>(rbp91 - 56);
    rdx92 = *reinterpret_cast<uint64_t*>(rbp93 - 64);
    rax94 = estimateDiv128To64(rdi90, gettimeofday, rdx92);
    *reinterpret_cast<uint64_t*>(rbp95 - 72) = rax94;
    if ((*reinterpret_cast<uint64_t*>(rbp96 - 72) & 0x1ff) <= 2) {
        rdi97 = *reinterpret_cast<int64_t*>(rbp98 - 64);
        rsi99 = *reinterpret_cast<int64_t*>(rbp100 - 72);
        fun_13a3(rdi97, rsi99, rbp101 - 96, rbp102 - 0x68);
        rdi103 = *reinterpret_cast<int64_t*>(rbp104 - 56);
        rdx105 = *reinterpret_cast<int64_t*>(rbp106 - 96);
        rcx107 = *reinterpret_cast<int64_t*>(rbp108 - 0x68);
        fun_13c0(rdi103, gettimeofday, rdx105, rcx107, rbp109 - 80, rbp110 - 88, v2);
        while (*reinterpret_cast<int64_t*>(rbp111 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp112 - 72) = *reinterpret_cast<int64_t*>(rbp113 - 72) - 1;
            rdi114 = *reinterpret_cast<int64_t*>(rbp115 - 80);
            rsi116 = *reinterpret_cast<int64_t*>(rbp117 - 88);
            rcx118 = *reinterpret_cast<int64_t*>(rbp119 - 64);
            fun_13f4(rdi114, rsi116, gettimeofday, rcx118, rbp120 - 80, rbp121 - 88, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp122 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp123 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp124 - 72);
    }
    edi125 = *reinterpret_cast<uint32_t*>(rbp126 - 36);
    esi127 = *reinterpret_cast<int32_t*>(rbp128 - 48);
    rdx129 = *reinterpret_cast<uint64_t*>(rbp130 - 72);
    rax131 = roundAndPackFloat64(edi125, esi127, rdx129, edi125, esi127, rdx129);
    *reinterpret_cast<uint64_t*>(rbp132 - 8) = rax131;
    addr_1423_14:
    goto v133;
}

int64_t fun_1774(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rsi6;
    int64_t rbp7;
    int64_t rax8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rax16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rbp21;
    int64_t rax22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rax28;
    int32_t eax29;
    int64_t v30;

    *reinterpret_cast<int64_t*>(rbp2 - 32) = rax3;
    do {
        rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
        rsi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
        rax8 = fun_1785(rdi4, rsi6);
        *reinterpret_cast<int64_t*>(rbp9 - 48) = rax8;
        *reinterpret_cast<int32_t*>(&rdi10) = (*reinterpret_cast<int32_t*>(rbp11 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp12 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax13 = fun_17a0(rdi10, rsi6);
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
        rax16 = fun_17ac(rdi14, rax13);
        *reinterpret_cast<int64_t*>(rbp17 - 24) = rax16;
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        rax22 = fun_17bd(rdi18, rsi20);
        *reinterpret_cast<int64_t*>(rbp23 - 16) = rax22;
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 24);
        rax28 = fun_17d3(rdi26, rsi20);
        eax29 = fun_17e5(rax28, 0x3ee4f8b588e368f1);
    } while (!reinterpret_cast<int1_t>(eax29 == gettimeofday));
    goto v30;
}

int32_t fun_b87(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    uint64_t rdi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rax31;
    int64_t rbp32;
    int64_t rbp33;
    uint64_t rdi34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rax40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rax47;
    int64_t rbp48;
    int64_t rbp49;
    uint64_t rdi50;
    int64_t rbp51;
    uint64_t rsi52;
    int64_t rbp53;
    uint64_t rax54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    uint64_t rdi59;
    int64_t rbp60;
    uint64_t rsi61;
    int64_t rbp62;
    uint64_t rax63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rax69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    uint32_t edi80;
    int64_t rbp81;
    int32_t esi82;
    int64_t rbp83;
    uint64_t rdx84;
    int64_t rbp85;
    uint64_t rax86;
    int64_t rbp87;
    int64_t v88;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    *reinterpret_cast<uint32_t*>(rbp4 - 36) = *reinterpret_cast<uint32_t*>(rbp5 - 28) ^ *reinterpret_cast<uint32_t*>(rbp6 - 32);
    if (*reinterpret_cast<int32_t*>(rbp7 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp8 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 40) == gettimeofday)) {
                addr_cd6_4:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp10 - 44) == gettimeofday)) {
                    addr_d13_5:
                    *reinterpret_cast<int32_t*>(rbp11 - 48) = *reinterpret_cast<int32_t*>(rbp12 - 40) + *reinterpret_cast<int32_t*>(rbp13 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp14 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp16 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 64)) << 11;
                    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
                    rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 64);
                    fun_d62(rdi18, rsi20, rbp22 - 72, rbp23 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp24 - 64) == gettimeofday)) {
                        rdi25 = *reinterpret_cast<uint64_t*>(rbp26 - 64);
                        normalizeFloat64Subnormal(rdi25, rbp27 - 44, rbp28 - 64);
                        goto addr_d13_5;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(rbp30 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax31 = fun_cf9(rdi29);
                        *reinterpret_cast<int64_t*>(rbp32 - 8) = rax31;
                        goto addr_db4_10;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp33 - 56) == gettimeofday)) {
                    rdi34 = *reinterpret_cast<uint64_t*>(rbp35 - 56);
                    normalizeFloat64Subnormal(rdi34, rbp36 - 40, rbp37 - 56);
                    goto addr_cd6_4;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi38) = *reinterpret_cast<int32_t*>(rbp39 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax40 = fun_cbc(rdi38);
                    *reinterpret_cast<int64_t*>(rbp41 - 8) = rax40;
                    goto addr_db4_10;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp42 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp43 - 40))) | *reinterpret_cast<uint64_t*>(rbp44 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax47 = fun_c90(rdi45, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                    goto addr_db4_10;
                } else {
                    fun_c6c(16);
                    *reinterpret_cast<int64_t*>(rbp49 - 8) = 0x7fffffffffffffff;
                    goto addr_db4_10;
                }
            } else {
                rdi50 = *reinterpret_cast<uint64_t*>(rbp51 - 16);
                rsi52 = *reinterpret_cast<uint64_t*>(rbp53 - 24);
                rax54 = propagateFloat64NaN(rdi50, rsi52);
                *reinterpret_cast<uint64_t*>(rbp55 - 8) = rax54;
                goto addr_db4_10;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp56 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp57 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp58 - 64) != gettimeofday) {
            rdi59 = *reinterpret_cast<uint64_t*>(rbp60 - 16);
            rsi61 = *reinterpret_cast<uint64_t*>(rbp62 - 24);
            rax63 = propagateFloat64NaN(rdi59, rsi61);
            *reinterpret_cast<uint64_t*>(rbp64 - 8) = rax63;
            goto addr_db4_10;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp65 - 44))) | *reinterpret_cast<uint64_t*>(rbp66 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi67) = *reinterpret_cast<int32_t*>(rbp68 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax69 = fun_c19(rdi67, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp70 - 8) = rax69;
                goto addr_db4_10;
            } else {
                fun_bf5(16);
                *reinterpret_cast<int64_t*>(rbp71 - 8) = 0x7fffffffffffffff;
                goto addr_db4_10;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp72 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp73 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp74 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp75 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp76 - 72) = *reinterpret_cast<int64_t*>(rbp77 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp78 - 48) = *reinterpret_cast<int32_t*>(rbp79 - 48) - 1;
    }
    edi80 = *reinterpret_cast<uint32_t*>(rbp81 - 36);
    esi82 = *reinterpret_cast<int32_t*>(rbp83 - 48);
    rdx84 = *reinterpret_cast<uint64_t*>(rbp85 - 72);
    rax86 = roundAndPackFloat64(edi80, esi82, rdx84);
    *reinterpret_cast<uint64_t*>(rbp87 - 8) = rax86;
    addr_db4_10:
    goto v88;
}

int64_t fun_114e(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rbp6;
    int32_t eax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    uint64_t rdi35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rax41;
    int64_t rbp42;
    int64_t rbp43;
    uint64_t rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t rax52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t rax58;
    int64_t rbp59;
    uint64_t rdi60;
    int64_t rbp61;
    uint64_t rsi62;
    int64_t rbp63;
    uint64_t rax64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rdi68;
    int64_t rbp69;
    int64_t rax70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;
    uint64_t rdi74;
    int64_t rbp75;
    uint64_t rsi76;
    int64_t rbp77;
    uint64_t rax78;
    int64_t rbp79;
    uint64_t rdi80;
    int64_t rbp81;
    uint64_t rsi82;
    int64_t rbp83;
    uint64_t rax84;
    int64_t rbp85;
    uint64_t rdi86;
    int64_t rbp87;
    uint64_t rdx88;
    int64_t rbp89;
    uint64_t rax90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rdi93;
    int64_t rbp94;
    int64_t rsi95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rdi99;
    int64_t rbp100;
    int64_t rdx101;
    int64_t rbp102;
    int64_t rcx103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rbp106;
    int64_t rbp107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rdi110;
    int64_t rbp111;
    int64_t rsi112;
    int64_t rbp113;
    int64_t rcx114;
    int64_t rbp115;
    int64_t rbp116;
    int64_t rbp117;
    int64_t rbp118;
    int64_t rbp119;
    int64_t rbp120;
    uint32_t edi121;
    int64_t rbp122;
    int32_t esi123;
    int64_t rbp124;
    uint64_t rdx125;
    int64_t rbp126;
    uint64_t rax127;
    int64_t rbp128;
    int64_t v129;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    eax7 = fun_115b(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 44) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    eax11 = fun_1167(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 32) = eax11;
    *reinterpret_cast<uint32_t*>(rbp13 - 36) = *reinterpret_cast<uint32_t*>(rbp14 - 28) ^ *reinterpret_cast<uint32_t*>(rbp15 - 32);
    if (*reinterpret_cast<int32_t*>(rbp16 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp17 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 44) == gettimeofday)) {
                addr_12c4_6:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp19 - 40) == gettimeofday)) {
                    addr_1301_7:
                    *reinterpret_cast<int32_t*>(rbp20 - 48) = *reinterpret_cast<int32_t*>(rbp21 - 40) - *reinterpret_cast<int32_t*>(rbp22 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp23 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp24 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp25 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp26 - 64)) << 11;
                    if (*reinterpret_cast<uint64_t*>(rbp27 - 64) <= reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp28 - 56) + *reinterpret_cast<int64_t*>(rbp29 - 56))) {
                        *reinterpret_cast<uint64_t*>(rbp30 - 56) = *reinterpret_cast<uint64_t*>(rbp31 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp32 - 48) = *reinterpret_cast<int32_t*>(rbp33 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp34 - 56) == gettimeofday)) {
                        rdi35 = *reinterpret_cast<uint64_t*>(rbp36 - 56);
                        normalizeFloat64Subnormal(rdi35, rbp37 - 40, rbp38 - 56);
                        goto addr_1301_7;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi39) = *reinterpret_cast<int32_t*>(rbp40 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax41 = fun_12e7(rdi39);
                        *reinterpret_cast<int64_t*>(rbp42 - 8) = rax41;
                        goto addr_1423_13;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp43 - 64) == gettimeofday)) {
                    rdi44 = *reinterpret_cast<uint64_t*>(rbp45 - 64);
                    normalizeFloat64Subnormal(rdi44, rbp46 - 44, rbp47 - 64);
                    goto addr_12c4_6;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp48 - 40))) | *reinterpret_cast<uint64_t*>(rbp49 - 56)) == gettimeofday)) {
                        fun_1299(2);
                        *reinterpret_cast<int32_t*>(&rdi50) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax52 = fun_12aa(rdi50, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp53 - 8) = rax52;
                        goto addr_1423_13;
                    } else {
                        fun_127c(16);
                        *reinterpret_cast<int64_t*>(rbp54 - 8) = 0x7fffffffffffffff;
                        goto addr_1423_13;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp55 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi56) = *reinterpret_cast<int32_t*>(rbp57 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax58 = fun_1242(rdi56);
                *reinterpret_cast<int64_t*>(rbp59 - 8) = rax58;
                goto addr_1423_13;
            } else {
                rdi60 = *reinterpret_cast<uint64_t*>(rbp61 - 16);
                rsi62 = *reinterpret_cast<uint64_t*>(rbp63 - 24);
                rax64 = propagateFloat64NaN(rdi60, rsi62);
                *reinterpret_cast<uint64_t*>(rbp65 - 8) = rax64;
                goto addr_1423_13;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp66 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp67 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi68) = *reinterpret_cast<int32_t*>(rbp69 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi68) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax70 = fun_11fd(rdi68, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp71 - 8) = rax70;
                goto addr_1423_13;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp72 - 64) == gettimeofday) {
                    fun_11d9(16);
                    *reinterpret_cast<int64_t*>(rbp73 - 8) = 0x7fffffffffffffff;
                    goto addr_1423_13;
                } else {
                    rdi74 = *reinterpret_cast<uint64_t*>(rbp75 - 16);
                    rsi76 = *reinterpret_cast<uint64_t*>(rbp77 - 24);
                    rax78 = propagateFloat64NaN(rdi74, rsi76);
                    *reinterpret_cast<uint64_t*>(rbp79 - 8) = rax78;
                    goto addr_1423_13;
                }
            }
        } else {
            rdi80 = *reinterpret_cast<uint64_t*>(rbp81 - 16);
            rsi82 = *reinterpret_cast<uint64_t*>(rbp83 - 24);
            rax84 = propagateFloat64NaN(rdi80, rsi82);
            *reinterpret_cast<uint64_t*>(rbp85 - 8) = rax84;
            goto addr_1423_13;
        }
    }
    rdi86 = *reinterpret_cast<uint64_t*>(rbp87 - 56);
    rdx88 = *reinterpret_cast<uint64_t*>(rbp89 - 64);
    rax90 = estimateDiv128To64(rdi86, gettimeofday, rdx88);
    *reinterpret_cast<uint64_t*>(rbp91 - 72) = rax90;
    if ((*reinterpret_cast<uint64_t*>(rbp92 - 72) & 0x1ff) <= 2) {
        rdi93 = *reinterpret_cast<int64_t*>(rbp94 - 64);
        rsi95 = *reinterpret_cast<int64_t*>(rbp96 - 72);
        fun_13a3(rdi93, rsi95, rbp97 - 96, rbp98 - 0x68);
        rdi99 = *reinterpret_cast<int64_t*>(rbp100 - 56);
        rdx101 = *reinterpret_cast<int64_t*>(rbp102 - 96);
        rcx103 = *reinterpret_cast<int64_t*>(rbp104 - 0x68);
        fun_13c0(rdi99, gettimeofday, rdx101, rcx103, rbp105 - 80, rbp106 - 88, v2);
        while (*reinterpret_cast<int64_t*>(rbp107 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp108 - 72) = *reinterpret_cast<int64_t*>(rbp109 - 72) - 1;
            rdi110 = *reinterpret_cast<int64_t*>(rbp111 - 80);
            rsi112 = *reinterpret_cast<int64_t*>(rbp113 - 88);
            rcx114 = *reinterpret_cast<int64_t*>(rbp115 - 64);
            fun_13f4(rdi110, rsi112, gettimeofday, rcx114, rbp116 - 80, rbp117 - 88, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp118 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp119 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp120 - 72);
    }
    edi121 = *reinterpret_cast<uint32_t*>(rbp122 - 36);
    esi123 = *reinterpret_cast<int32_t*>(rbp124 - 48);
    rdx125 = *reinterpret_cast<uint64_t*>(rbp126 - 72);
    rax127 = roundAndPackFloat64(edi121, esi123, rdx125, edi121, esi123, rdx125);
    *reinterpret_cast<uint64_t*>(rbp128 - 8) = rax127;
    addr_1423_13:
    goto v129;
}

int64_t fun_1785(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rax8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rax23;
    int32_t eax24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rsi27;
    int64_t rbp28;
    int64_t v29;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
        *reinterpret_cast<int32_t*>(&rdi5) = (*reinterpret_cast<int32_t*>(rbp6 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp7 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax8 = fun_17a0(rdi5, rsi);
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
        rax11 = fun_17ac(rdi9, rax8);
        *reinterpret_cast<int64_t*>(rbp12 - 24) = rax11;
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 16);
        rsi15 = *reinterpret_cast<int64_t*>(rbp16 - 24);
        rax17 = fun_17bd(rdi13, rsi15);
        *reinterpret_cast<int64_t*>(rbp18 - 16) = rax17;
        *reinterpret_cast<int32_t*>(rbp19 - 36) = *reinterpret_cast<int32_t*>(rbp20 - 36) + 1;
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
        rax23 = fun_17d3(rdi21, rsi15);
        eax24 = fun_17e5(rax23, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax24 == gettimeofday)) 
            break;
        rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 24);
        rsi27 = *reinterpret_cast<int64_t*>(rbp28 - 32);
        rax4 = fun_1785(rdi25, rsi27);
    }
    goto v29;
}

int32_t fun_115b(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int32_t eax4;
    int64_t rdi5;
    int64_t rbp6;
    int32_t eax7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    uint64_t rdi31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rax37;
    int64_t rbp38;
    int64_t rbp39;
    uint64_t rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rdi46;
    int64_t rbp47;
    int64_t rax48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rax54;
    int64_t rbp55;
    uint64_t rdi56;
    int64_t rbp57;
    uint64_t rsi58;
    int64_t rbp59;
    uint64_t rax60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rdi64;
    int64_t rbp65;
    int64_t rax66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    uint64_t rdi70;
    int64_t rbp71;
    uint64_t rsi72;
    int64_t rbp73;
    uint64_t rax74;
    int64_t rbp75;
    uint64_t rdi76;
    int64_t rbp77;
    uint64_t rsi78;
    int64_t rbp79;
    uint64_t rax80;
    int64_t rbp81;
    uint64_t rdi82;
    int64_t rbp83;
    uint64_t rdx84;
    int64_t rbp85;
    uint64_t rax86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rdi89;
    int64_t rbp90;
    int64_t rsi91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rdi95;
    int64_t rbp96;
    int64_t rdx97;
    int64_t rbp98;
    int64_t rcx99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rdi106;
    int64_t rbp107;
    int64_t rsi108;
    int64_t rbp109;
    int64_t rcx110;
    int64_t rbp111;
    int64_t rbp112;
    int64_t rbp113;
    int64_t rbp114;
    int64_t rbp115;
    int64_t rbp116;
    uint32_t edi117;
    int64_t rbp118;
    int32_t esi119;
    int64_t rbp120;
    uint64_t rdx121;
    int64_t rbp122;
    uint64_t rax123;
    int64_t rbp124;
    int64_t v125;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 44) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    eax7 = fun_1167(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 32) = eax7;
    *reinterpret_cast<uint32_t*>(rbp9 - 36) = *reinterpret_cast<uint32_t*>(rbp10 - 28) ^ *reinterpret_cast<uint32_t*>(rbp11 - 32);
    if (*reinterpret_cast<int32_t*>(rbp12 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp13 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 44) == gettimeofday)) {
                addr_12c4_5:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp15 - 40) == gettimeofday)) {
                    addr_1301_6:
                    *reinterpret_cast<int32_t*>(rbp16 - 48) = *reinterpret_cast<int32_t*>(rbp17 - 40) - *reinterpret_cast<int32_t*>(rbp18 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp19 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp20 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp21 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp22 - 64)) << 11;
                    if (*reinterpret_cast<uint64_t*>(rbp23 - 64) <= reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp24 - 56) + *reinterpret_cast<int64_t*>(rbp25 - 56))) {
                        *reinterpret_cast<uint64_t*>(rbp26 - 56) = *reinterpret_cast<uint64_t*>(rbp27 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp28 - 48) = *reinterpret_cast<int32_t*>(rbp29 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp30 - 56) == gettimeofday)) {
                        rdi31 = *reinterpret_cast<uint64_t*>(rbp32 - 56);
                        normalizeFloat64Subnormal(rdi31, rbp33 - 40, rbp34 - 56);
                        goto addr_1301_6;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi35) = *reinterpret_cast<int32_t*>(rbp36 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax37 = fun_12e7(rdi35);
                        *reinterpret_cast<int64_t*>(rbp38 - 8) = rax37;
                        goto addr_1423_12;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp39 - 64) == gettimeofday)) {
                    rdi40 = *reinterpret_cast<uint64_t*>(rbp41 - 64);
                    normalizeFloat64Subnormal(rdi40, rbp42 - 44, rbp43 - 64);
                    goto addr_12c4_5;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp44 - 40))) | *reinterpret_cast<uint64_t*>(rbp45 - 56)) == gettimeofday)) {
                        fun_1299(2);
                        *reinterpret_cast<int32_t*>(&rdi46) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax48 = fun_12aa(rdi46, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp49 - 8) = rax48;
                        goto addr_1423_12;
                    } else {
                        fun_127c(16);
                        *reinterpret_cast<int64_t*>(rbp50 - 8) = 0x7fffffffffffffff;
                        goto addr_1423_12;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp51 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi52) = *reinterpret_cast<int32_t*>(rbp53 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax54 = fun_1242(rdi52);
                *reinterpret_cast<int64_t*>(rbp55 - 8) = rax54;
                goto addr_1423_12;
            } else {
                rdi56 = *reinterpret_cast<uint64_t*>(rbp57 - 16);
                rsi58 = *reinterpret_cast<uint64_t*>(rbp59 - 24);
                rax60 = propagateFloat64NaN(rdi56, rsi58);
                *reinterpret_cast<uint64_t*>(rbp61 - 8) = rax60;
                goto addr_1423_12;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp62 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp63 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi64) = *reinterpret_cast<int32_t*>(rbp65 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi64) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax66 = fun_11fd(rdi64, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp67 - 8) = rax66;
                goto addr_1423_12;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp68 - 64) == gettimeofday) {
                    fun_11d9(16);
                    *reinterpret_cast<int64_t*>(rbp69 - 8) = 0x7fffffffffffffff;
                    goto addr_1423_12;
                } else {
                    rdi70 = *reinterpret_cast<uint64_t*>(rbp71 - 16);
                    rsi72 = *reinterpret_cast<uint64_t*>(rbp73 - 24);
                    rax74 = propagateFloat64NaN(rdi70, rsi72);
                    *reinterpret_cast<uint64_t*>(rbp75 - 8) = rax74;
                    goto addr_1423_12;
                }
            }
        } else {
            rdi76 = *reinterpret_cast<uint64_t*>(rbp77 - 16);
            rsi78 = *reinterpret_cast<uint64_t*>(rbp79 - 24);
            rax80 = propagateFloat64NaN(rdi76, rsi78);
            *reinterpret_cast<uint64_t*>(rbp81 - 8) = rax80;
            goto addr_1423_12;
        }
    }
    rdi82 = *reinterpret_cast<uint64_t*>(rbp83 - 56);
    rdx84 = *reinterpret_cast<uint64_t*>(rbp85 - 64);
    rax86 = estimateDiv128To64(rdi82, gettimeofday, rdx84);
    *reinterpret_cast<uint64_t*>(rbp87 - 72) = rax86;
    if ((*reinterpret_cast<uint64_t*>(rbp88 - 72) & 0x1ff) <= 2) {
        rdi89 = *reinterpret_cast<int64_t*>(rbp90 - 64);
        rsi91 = *reinterpret_cast<int64_t*>(rbp92 - 72);
        fun_13a3(rdi89, rsi91, rbp93 - 96, rbp94 - 0x68);
        rdi95 = *reinterpret_cast<int64_t*>(rbp96 - 56);
        rdx97 = *reinterpret_cast<int64_t*>(rbp98 - 96);
        rcx99 = *reinterpret_cast<int64_t*>(rbp100 - 0x68);
        fun_13c0(rdi95, gettimeofday, rdx97, rcx99, rbp101 - 80, rbp102 - 88, v2);
        while (*reinterpret_cast<int64_t*>(rbp103 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp104 - 72) = *reinterpret_cast<int64_t*>(rbp105 - 72) - 1;
            rdi106 = *reinterpret_cast<int64_t*>(rbp107 - 80);
            rsi108 = *reinterpret_cast<int64_t*>(rbp109 - 88);
            rcx110 = *reinterpret_cast<int64_t*>(rbp111 - 64);
            fun_13f4(rdi106, rsi108, gettimeofday, rcx110, rbp112 - 80, rbp113 - 88, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp114 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp115 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp116 - 72);
    }
    edi117 = *reinterpret_cast<uint32_t*>(rbp118 - 36);
    esi119 = *reinterpret_cast<int32_t*>(rbp120 - 48);
    rdx121 = *reinterpret_cast<uint64_t*>(rbp122 - 72);
    rax123 = roundAndPackFloat64(edi117, esi119, rdx121, edi117, esi119, rdx121);
    *reinterpret_cast<uint64_t*>(rbp124 - 8) = rax123;
    addr_1423_12:
    goto v125;
}

int64_t fun_17a0(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rax5;
    int64_t rax6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rsi10;
    int64_t rbp11;
    int64_t rax12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rax18;
    int32_t eax19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rsi22;
    int64_t rbp23;
    int64_t rax24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t v29;

    while (1) {
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 48);
        rax6 = fun_17ac(rdi3, rax5);
        *reinterpret_cast<int64_t*>(rbp7 - 24) = rax6;
        rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
        rsi10 = *reinterpret_cast<int64_t*>(rbp11 - 24);
        rax12 = fun_17bd(rdi8, rsi10);
        *reinterpret_cast<int64_t*>(rbp13 - 16) = rax12;
        *reinterpret_cast<int32_t*>(rbp14 - 36) = *reinterpret_cast<int32_t*>(rbp15 - 36) + 1;
        rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
        rax18 = fun_17d3(rdi16, rsi10);
        eax19 = fun_17e5(rax18, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax19 == gettimeofday)) 
            break;
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        rsi22 = *reinterpret_cast<int64_t*>(rbp23 - 32);
        rax24 = fun_1785(rdi20, rsi22);
        *reinterpret_cast<int64_t*>(rbp25 - 48) = rax24;
        *reinterpret_cast<int32_t*>(&rdi26) = (*reinterpret_cast<int32_t*>(rbp27 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp28 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax5 = fun_17a0(rdi26, rsi22);
    }
    goto v29;
}

int32_t fun_1167(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int32_t eax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    uint64_t rdi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rax33;
    int64_t rbp34;
    int64_t rbp35;
    uint64_t rdi36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t rax44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rax50;
    int64_t rbp51;
    uint64_t rdi52;
    int64_t rbp53;
    uint64_t rsi54;
    int64_t rbp55;
    uint64_t rax56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t rax62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    uint64_t rdi66;
    int64_t rbp67;
    uint64_t rsi68;
    int64_t rbp69;
    uint64_t rax70;
    int64_t rbp71;
    uint64_t rdi72;
    int64_t rbp73;
    uint64_t rsi74;
    int64_t rbp75;
    uint64_t rax76;
    int64_t rbp77;
    uint64_t rdi78;
    int64_t rbp79;
    uint64_t rdx80;
    int64_t rbp81;
    uint64_t rax82;
    int64_t rbp83;
    int64_t rbp84;
    int64_t rdi85;
    int64_t rbp86;
    int64_t rsi87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rdi91;
    int64_t rbp92;
    int64_t rdx93;
    int64_t rbp94;
    int64_t rcx95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rdi102;
    int64_t rbp103;
    int64_t rsi104;
    int64_t rbp105;
    int64_t rcx106;
    int64_t rbp107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rbp110;
    int64_t rbp111;
    int64_t rbp112;
    uint32_t edi113;
    int64_t rbp114;
    int32_t esi115;
    int64_t rbp116;
    uint64_t rdx117;
    int64_t rbp118;
    uint64_t rax119;
    int64_t rbp120;
    int64_t v121;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 32) = eax4;
    *reinterpret_cast<uint32_t*>(rbp5 - 36) = *reinterpret_cast<uint32_t*>(rbp6 - 28) ^ *reinterpret_cast<uint32_t*>(rbp7 - 32);
    if (*reinterpret_cast<int32_t*>(rbp8 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp9 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp10 - 44) == gettimeofday)) {
                addr_12c4_4:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 40) == gettimeofday)) {
                    addr_1301_5:
                    *reinterpret_cast<int32_t*>(rbp12 - 48) = *reinterpret_cast<int32_t*>(rbp13 - 40) - *reinterpret_cast<int32_t*>(rbp14 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp15 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp16 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp17 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp18 - 64)) << 11;
                    if (*reinterpret_cast<uint64_t*>(rbp19 - 64) <= reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp20 - 56) + *reinterpret_cast<int64_t*>(rbp21 - 56))) {
                        *reinterpret_cast<uint64_t*>(rbp22 - 56) = *reinterpret_cast<uint64_t*>(rbp23 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp24 - 48) = *reinterpret_cast<int32_t*>(rbp25 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp26 - 56) == gettimeofday)) {
                        rdi27 = *reinterpret_cast<uint64_t*>(rbp28 - 56);
                        normalizeFloat64Subnormal(rdi27, rbp29 - 40, rbp30 - 56);
                        goto addr_1301_5;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi31) = *reinterpret_cast<int32_t*>(rbp32 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax33 = fun_12e7(rdi31);
                        *reinterpret_cast<int64_t*>(rbp34 - 8) = rax33;
                        goto addr_1423_11;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp35 - 64) == gettimeofday)) {
                    rdi36 = *reinterpret_cast<uint64_t*>(rbp37 - 64);
                    normalizeFloat64Subnormal(rdi36, rbp38 - 44, rbp39 - 64);
                    goto addr_12c4_4;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp40 - 40))) | *reinterpret_cast<uint64_t*>(rbp41 - 56)) == gettimeofday)) {
                        fun_1299(2);
                        *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax44 = fun_12aa(rdi42, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp45 - 8) = rax44;
                        goto addr_1423_11;
                    } else {
                        fun_127c(16);
                        *reinterpret_cast<int64_t*>(rbp46 - 8) = 0x7fffffffffffffff;
                        goto addr_1423_11;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp47 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi48) = *reinterpret_cast<int32_t*>(rbp49 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax50 = fun_1242(rdi48);
                *reinterpret_cast<int64_t*>(rbp51 - 8) = rax50;
                goto addr_1423_11;
            } else {
                rdi52 = *reinterpret_cast<uint64_t*>(rbp53 - 16);
                rsi54 = *reinterpret_cast<uint64_t*>(rbp55 - 24);
                rax56 = propagateFloat64NaN(rdi52, rsi54);
                *reinterpret_cast<uint64_t*>(rbp57 - 8) = rax56;
                goto addr_1423_11;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp58 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp59 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi60) = *reinterpret_cast<int32_t*>(rbp61 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax62 = fun_11fd(rdi60, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp63 - 8) = rax62;
                goto addr_1423_11;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp64 - 64) == gettimeofday) {
                    fun_11d9(16);
                    *reinterpret_cast<int64_t*>(rbp65 - 8) = 0x7fffffffffffffff;
                    goto addr_1423_11;
                } else {
                    rdi66 = *reinterpret_cast<uint64_t*>(rbp67 - 16);
                    rsi68 = *reinterpret_cast<uint64_t*>(rbp69 - 24);
                    rax70 = propagateFloat64NaN(rdi66, rsi68);
                    *reinterpret_cast<uint64_t*>(rbp71 - 8) = rax70;
                    goto addr_1423_11;
                }
            }
        } else {
            rdi72 = *reinterpret_cast<uint64_t*>(rbp73 - 16);
            rsi74 = *reinterpret_cast<uint64_t*>(rbp75 - 24);
            rax76 = propagateFloat64NaN(rdi72, rsi74);
            *reinterpret_cast<uint64_t*>(rbp77 - 8) = rax76;
            goto addr_1423_11;
        }
    }
    rdi78 = *reinterpret_cast<uint64_t*>(rbp79 - 56);
    rdx80 = *reinterpret_cast<uint64_t*>(rbp81 - 64);
    rax82 = estimateDiv128To64(rdi78, gettimeofday, rdx80);
    *reinterpret_cast<uint64_t*>(rbp83 - 72) = rax82;
    if ((*reinterpret_cast<uint64_t*>(rbp84 - 72) & 0x1ff) <= 2) {
        rdi85 = *reinterpret_cast<int64_t*>(rbp86 - 64);
        rsi87 = *reinterpret_cast<int64_t*>(rbp88 - 72);
        fun_13a3(rdi85, rsi87, rbp89 - 96, rbp90 - 0x68);
        rdi91 = *reinterpret_cast<int64_t*>(rbp92 - 56);
        rdx93 = *reinterpret_cast<int64_t*>(rbp94 - 96);
        rcx95 = *reinterpret_cast<int64_t*>(rbp96 - 0x68);
        fun_13c0(rdi91, gettimeofday, rdx93, rcx95, rbp97 - 80, rbp98 - 88, v2);
        while (*reinterpret_cast<int64_t*>(rbp99 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp100 - 72) = *reinterpret_cast<int64_t*>(rbp101 - 72) - 1;
            rdi102 = *reinterpret_cast<int64_t*>(rbp103 - 80);
            rsi104 = *reinterpret_cast<int64_t*>(rbp105 - 88);
            rcx106 = *reinterpret_cast<int64_t*>(rbp107 - 64);
            fun_13f4(rdi102, rsi104, gettimeofday, rcx106, rbp108 - 80, rbp109 - 88, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp110 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp111 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp112 - 72);
    }
    edi113 = *reinterpret_cast<uint32_t*>(rbp114 - 36);
    esi115 = *reinterpret_cast<int32_t*>(rbp116 - 48);
    rdx117 = *reinterpret_cast<uint64_t*>(rbp118 - 72);
    rax119 = roundAndPackFloat64(edi113, esi115, rdx117, edi113, esi115, rdx117);
    *reinterpret_cast<uint64_t*>(rbp120 - 8) = rax119;
    addr_1423_11:
    goto v121;
}

int64_t fun_17ac(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rsi7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rax15;
    int32_t eax16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rax21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rax26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t v29;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp3 - 24) = rax4;
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
        rsi7 = *reinterpret_cast<int64_t*>(rbp8 - 24);
        rax9 = fun_17bd(rdi5, rsi7);
        *reinterpret_cast<int64_t*>(rbp10 - 16) = rax9;
        *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
        rax15 = fun_17d3(rdi13, rsi7);
        eax16 = fun_17e5(rax15, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax16 == gettimeofday)) 
            break;
        rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
        rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
        rax21 = fun_1785(rdi17, rsi19);
        *reinterpret_cast<int64_t*>(rbp22 - 48) = rax21;
        *reinterpret_cast<int32_t*>(&rdi23) = (*reinterpret_cast<int32_t*>(rbp24 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp25 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax26 = fun_17a0(rdi23, rsi19);
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
        rax4 = fun_17ac(rdi27, rax26);
    }
    goto v29;
}

int64_t fun_17bd(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rax9;
    int32_t eax10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rax20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rsi27;
    int64_t rbp28;
    int64_t v29;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp3 - 16) = rax4;
        *reinterpret_cast<int32_t*>(rbp5 - 36) = *reinterpret_cast<int32_t*>(rbp6 - 36) + 1;
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 24);
        rax9 = fun_17d3(rdi7, rsi);
        eax10 = fun_17e5(rax9, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax10 == gettimeofday)) 
            break;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 24);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
        rax15 = fun_1785(rdi11, rsi13);
        *reinterpret_cast<int64_t*>(rbp16 - 48) = rax15;
        *reinterpret_cast<int32_t*>(&rdi17) = (*reinterpret_cast<int32_t*>(rbp18 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp19 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax20 = fun_17a0(rdi17, rsi13);
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
        rax23 = fun_17ac(rdi21, rax20);
        *reinterpret_cast<int64_t*>(rbp24 - 24) = rax23;
        rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 16);
        rsi27 = *reinterpret_cast<int64_t*>(rbp28 - 24);
        rax4 = fun_17bd(rdi25, rsi27);
    }
    goto v29;
}

int64_t fun_17d3(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int32_t eax4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rsi7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rax14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rsi21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t v29;

    while (1) {
        eax4 = fun_17e5(rax3, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax4 == gettimeofday)) 
            break;
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
        rsi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
        rax9 = fun_1785(rdi5, rsi7);
        *reinterpret_cast<int64_t*>(rbp10 - 48) = rax9;
        *reinterpret_cast<int32_t*>(&rdi11) = (*reinterpret_cast<int32_t*>(rbp12 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp13 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax14 = fun_17a0(rdi11, rsi7);
        rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
        rax17 = fun_17ac(rdi15, rax14);
        *reinterpret_cast<int64_t*>(rbp18 - 24) = rax17;
        rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 16);
        rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
        rax23 = fun_17bd(rdi19, rsi21);
        *reinterpret_cast<int64_t*>(rbp24 - 16) = rax23;
        *reinterpret_cast<int32_t*>(rbp25 - 36) = *reinterpret_cast<int32_t*>(rbp26 - 36) + 1;
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 24);
        rax3 = fun_17d3(rdi27, rsi21);
    }
    goto v29;
}

int32_t fun_17e5(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rsi6;
    int64_t rbp7;
    int64_t rax8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rax16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rbp21;
    int64_t rax22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rax28;
    int64_t v29;

    while (!reinterpret_cast<int1_t>(eax3 == gettimeofday)) {
        rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
        rsi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
        rax8 = fun_1785(rdi4, rsi6);
        *reinterpret_cast<int64_t*>(rbp9 - 48) = rax8;
        *reinterpret_cast<int32_t*>(&rdi10) = (*reinterpret_cast<int32_t*>(rbp11 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp12 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax13 = fun_17a0(rdi10, rsi6);
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
        rax16 = fun_17ac(rdi14, rax13);
        *reinterpret_cast<int64_t*>(rbp17 - 24) = rax16;
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        rax22 = fun_17bd(rdi18, rsi20);
        *reinterpret_cast<int64_t*>(rbp23 - 16) = rax22;
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 24);
        rax28 = fun_17d3(rdi26, rsi20);
        eax3 = fun_17e5(rax28, 0x3ee4f8b588e368f1);
    }
    goto v29;
}

void gettimeofday(int64_t rdi) {
}

void fun_230() {
    return;
}

void fun_248() {
    int64_t rbp1;
    int64_t rsi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rcx6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rbp14;
    int64_t rbp15;
    uint64_t rax16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t rcx21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rax24;
    int64_t rbp25;
    int64_t rcx26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rax29;
    int64_t rbp30;
    int64_t rcx31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rax34;
    int64_t rbp35;
    int64_t rcx36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;

    *reinterpret_cast<int64_t*>(rbp1 - 16) = rsi2;
    *reinterpret_cast<int64_t*>(rbp3 - 24) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 32) = rcx6;
    rax7 = *reinterpret_cast<int64_t*>(rbp8 - 8);
    *reinterpret_cast<int32_t*>(rbp9 - 40) = *reinterpret_cast<int32_t*>(&rax7);
    rax10 = *reinterpret_cast<uint64_t*>(rbp11 - 8) >> 32;
    *reinterpret_cast<int32_t*>(rbp12 - 36) = *reinterpret_cast<int32_t*>(&rax10);
    rax13 = *reinterpret_cast<int64_t*>(rbp14 - 16);
    *reinterpret_cast<int32_t*>(rbp15 - 48) = *reinterpret_cast<int32_t*>(&rax13);
    rax16 = *reinterpret_cast<uint64_t*>(rbp17 - 16) >> 32;
    *reinterpret_cast<int32_t*>(rbp18 - 44) = *reinterpret_cast<int32_t*>(&rax16);
    *reinterpret_cast<int32_t*>(&rax19) = *reinterpret_cast<int32_t*>(rbp20 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(rbp22 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp23 - 80) = rax19 * rcx21;
    *reinterpret_cast<int32_t*>(&rax24) = *reinterpret_cast<int32_t*>(rbp25 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx26) = *reinterpret_cast<int32_t*>(rbp27 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp28 - 64) = rax24 * rcx26;
    *reinterpret_cast<int32_t*>(&rax29) = *reinterpret_cast<int32_t*>(rbp30 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(rbp32 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp33 - 72) = rax29 * rcx31;
    *reinterpret_cast<int32_t*>(&rax34) = *reinterpret_cast<int32_t*>(rbp35 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx36) = *reinterpret_cast<int32_t*>(rbp37 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp38 - 56) = rax34 * rcx36;
    *reinterpret_cast<int64_t*>(rbp39 - 64) = *reinterpret_cast<int64_t*>(rbp40 - 72) + *reinterpret_cast<int64_t*>(rbp41 - 64);
}

void fun_2c8(int32_t* rdi) {
    int32_t ecx2;
    int64_t rbp3;
    int32_t eax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t v20;

    *rdi = *rdi + ecx2;
    *reinterpret_cast<uint64_t*>(rbp3 - 56) = (static_cast<int64_t>(eax4) << 32) + (*reinterpret_cast<uint64_t*>(rbp5 - 64) >> 32) + *reinterpret_cast<int64_t*>(rbp6 - 56);
    *reinterpret_cast<int64_t*>(rbp7 - 64) = *reinterpret_cast<int64_t*>(rbp8 - 64) << 32;
    *reinterpret_cast<int64_t*>(rbp9 - 80) = *reinterpret_cast<int64_t*>(rbp10 - 64) + *reinterpret_cast<int64_t*>(rbp11 - 80);
    *reinterpret_cast<int64_t*>(rbp12 - 56) = reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp13 - 80) < *reinterpret_cast<uint64_t*>(rbp14 - 64))) & 1))) + *reinterpret_cast<int64_t*>(rbp15 - 56);
    **reinterpret_cast<int64_t**>(rbp16 - 32) = *reinterpret_cast<int64_t*>(rbp17 - 80);
    **reinterpret_cast<int64_t**>(rbp18 - 24) = *reinterpret_cast<int64_t*>(rbp19 - 56);
    goto v20;
}

void fun_368() {
    int64_t rcx1;
    int1_t zf2;
    int64_t v3;

    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx1 - 1 == gettimeofday)) & reinterpret_cast<uint1_t>(!zf2)) {
    }
    goto v3;
}

void fun_388() {
}

void fun_3a8() {
    int64_t rax1;
    int64_t rax2;
    signed char cl3;

    *reinterpret_cast<signed char*>(rax1 - 72) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax2 - 72) + cl3);
}

struct s2 {
    signed char[35] pad35;
    signed char f23;
};

struct s3 {
    signed char[35] pad35;
    signed char f23;
};

void fun_3b0(int32_t* rdi) {
    struct s2* rax2;
    struct s3* rax3;
    signed char cl4;
    int64_t rbp5;
    int64_t rax6;
    int64_t v7;

    *rdi = *rdi + 1;
    rax2->f23 = reinterpret_cast<signed char>(rax3->f23 + cl4);
    *reinterpret_cast<unsigned char*>(rbp5 - 9) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax6 == gettimeofday));
    goto v7;
}

void extractFloat64Sign(int64_t rdi) {
}

int64_t packFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    return (static_cast<int64_t>(edi) << 63) + (static_cast<int64_t>(esi) << 52) + rdx;
}

uint32_t* g341 = reinterpret_cast<uint32_t*>(0x58b48080b);

uint32_t* g34a = reinterpret_cast<uint32_t*>(0x48559066c35d0889);

void float_raise(uint32_t edi) {
    uint32_t* rax2;
    uint32_t* rax3;

    rax2 = g341;
    rax3 = g34a;
    *rax3 = edi | *rax2;
    return;
}

uint64_t extractFloat64Frac(uint64_t rdi) {
    return 0xfffffffffffff & rdi;
}

void int32_to_float64(uint32_t edi) {
    uint32_t v2;
    uint32_t v3;
    int64_t rdi4;

    if (!reinterpret_cast<int1_t>(edi == gettimeofday)) {
        v2 = static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi) < reinterpret_cast<int32_t>(gettimeofday))) & 1;
        if (v2 == gettimeofday) {
            v3 = edi;
        } else {
            v3 = reinterpret_cast<int32_t>(gettimeofday) - edi;
        }
        countLeadingZeros32(v3);
        *reinterpret_cast<uint32_t*>(&rdi4) = v2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_4e5(rdi4);
    } else {
        goto 0x4e9;
    }
}

void float64_ge(int64_t rdi, int64_t rsi) {
    fun_16dd(rsi, rdi);
}

int32_t* ullong_to_double(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    return rdi;
}

void submain(int32_t* rdi, int32_t* rsi) {
    rtclock();
    *rdi = *rsi;
}

void float64_is_nan(int64_t rdi) {
}

void extractFloat64Exp(int64_t rdi) {
}

void float64_add(int64_t rdi, int64_t rsi) {
    fun_589(rdi);
}

void float64_mul(int64_t rdi, int64_t rsi) {
    fun_b49(rdi);
}

void float64_le(int64_t rdi, int64_t rsi) {
    fun_15b9(rdi);
}

uint64_t float64_neg(uint64_t rdi) {
    return (rdi ^ 0xffffffffffffffff) & 0x8000000000000000 | 0x7fffffffffffffff & rdi;
}

void float64_div(int64_t rdi, int64_t rsi) {
    fun_1129(rdi);
}

uint64_t float64_abs(uint64_t rdi) {
    return 0x7fffffffffffffff & rdi;
}

void local_sin(int64_t rdi) {
    fun_176c(rdi, rdi);
}

