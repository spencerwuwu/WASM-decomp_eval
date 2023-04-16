
void gettimeofday(int64_t rdi);

int32_t countLeadingZeros32(uint32_t edi);

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

int64_t fun_616(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_605(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_616(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

void fun_687(int64_t rdi);

uint32_t* g6a2 = reinterpret_cast<uint32_t*>(0x58b4801c983088b);

uint32_t* g6ae = reinterpret_cast<uint32_t*>(0x6348e8458b480889);

int64_t fun_707(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_655(int64_t rdi) {
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
    int64_t rdx24;
    int64_t rbp25;
    int64_t rax26;
    int64_t rbp27;
    int64_t v28;

    *reinterpret_cast<int32_t*>(rbp2 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    rax3 = *reinterpret_cast<uint64_t*>(rbp4 - 24) & 0x3ff;
    *reinterpret_cast<int32_t*>(rbp5 - 44) = *reinterpret_cast<int32_t*>(&rax3);
    if (*reinterpret_cast<int32_t*>(rbp6 - 36) != gettimeofday && *reinterpret_cast<int32_t*>(rbp7 - 44) != gettimeofday) {
        fun_687(4);
    }
    if (*reinterpret_cast<int32_t*>(rbp8 - 44) != gettimeofday) {
        rax9 = g6a2;
        rax10 = g6ae;
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
    rdx24 = *reinterpret_cast<int64_t*>(rbp25 - 24);
    rax26 = fun_707(rdi20, rsi22, rdx24);
    *reinterpret_cast<int64_t*>(rbp27 - 8) = rax26;
    goto v28;
}

void fun_687(int64_t rdi) {
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
    int64_t rdx18;
    int64_t rbp19;
    int64_t rax20;
    int64_t rbp21;
    int64_t v22;

    if (*reinterpret_cast<int32_t*>(rbp2 - 44) != gettimeofday) {
        rax3 = g6a2;
        rax4 = g6ae;
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
    rdx18 = *reinterpret_cast<int64_t*>(rbp19 - 24);
    rax20 = fun_707(rdi14, rsi16, rdx18);
    *reinterpret_cast<int64_t*>(rbp21 - 8) = rax20;
    goto v22;
}

int32_t fun_b29(uint64_t rdi);

uint32_t fun_b35(uint64_t rdi);

int32_t fun_b41(uint64_t rdi);

uint32_t fun_b4d(uint64_t rdi);

void fun_b8d(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi) {
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;

    fun_b29(rdi);
    eax3 = fun_b35(rdi);
    eax4 = fun_b41(rsi);
    eax5 = fun_b4d(rsi);
    v6 = 0x8000000000000 | rdi;
    v7 = 0x8000000000000 | rsi;
    if ((eax3 | eax5) != gettimeofday) {
        fun_b8d(16);
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

int64_t fun_a6c(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_b8d(int64_t rdi) {
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

int64_t fun_f04(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_ff5(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

void fun_106c(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_10bc(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_10f9(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_11b0(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_132c(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_1397(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_1571(uint64_t rdi, uint64_t rsi, void* rdx, void* rcx);

void fun_158e(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8, void* r9, int64_t a7);

void fun_15d7(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, void* r8, void* r9, int64_t a7);

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
        fun_1571(v5, v8, reinterpret_cast<int64_t>(rbp4) - 72, reinterpret_cast<int64_t>(rbp4) - 80);
        fun_158e(rdi, rsi, v9, v10, reinterpret_cast<int64_t>(rbp4) - 56, reinterpret_cast<int64_t>(rbp4) - 64, v11);
        while (v12 < reinterpret_cast<int64_t>(gettimeofday)) {
            v8 = v8 - 0x100000000;
            fun_15d7(v13, v14, v6, v5 << 32, reinterpret_cast<int64_t>(rbp4) - 56, reinterpret_cast<int64_t>(rbp4) - 64, v15);
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

void fun_1470(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_14a4(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int64_t fun_14cf(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_1453(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdx8;
    int64_t rbp9;
    uint64_t rcx10;
    int64_t rbp11;
    int64_t r8_12;
    int64_t rbp13;
    int64_t r9_14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rsi21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rsi31;
    int64_t rbp32;
    int64_t rdx33;
    int64_t rbp34;
    int64_t rax35;
    int64_t rbp36;
    int64_t v37;

    v5 = reinterpret_cast<int64_t>(__return_address());
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    rdx8 = *reinterpret_cast<int64_t*>(rbp9 - 96);
    rcx10 = *reinterpret_cast<uint64_t*>(rbp11 - 0x68);
    r8_12 = rbp13 - 80;
    r9_14 = rbp15 - 88;
    fun_1470(rdi6, gettimeofday, rdx8, rcx10, r8_12, r9_14, v5);
    while (*reinterpret_cast<int64_t*>(rbp16 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp17 - 72) = *reinterpret_cast<int64_t*>(rbp18 - 72) - 1;
        rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
        rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
        rcx10 = *reinterpret_cast<uint64_t*>(rbp23 - 64);
        r8_12 = rbp24 - 80;
        r9_14 = rbp25 - 88;
        fun_14a4(rdi19, rsi21, gettimeofday, rcx10, r8_12, r9_14, v5);
    }
    *reinterpret_cast<uint64_t*>(rbp26 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp27 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp28 - 72);
    *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(rbp30 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi31) = *reinterpret_cast<int32_t*>(rbp32 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx33 = *reinterpret_cast<int64_t*>(rbp34 - 72);
    rax35 = fun_14cf(rdi29, rsi31, rdx33, rcx10, r8_12, r9_14, v5);
    *reinterpret_cast<int64_t*>(rbp36 - 8) = rax35;
    goto v37;
}

void fun_14a4(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    uint64_t rcx15;
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
    int64_t rdx26;
    int64_t rbp27;
    int64_t rax28;
    int64_t rbp29;
    int64_t v30;

    while (1) {
        if (*reinterpret_cast<int64_t*>(rbp8 - 80) >= reinterpret_cast<int64_t>(gettimeofday)) 
            break;
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) - 1;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
        rcx15 = *reinterpret_cast<uint64_t*>(rbp16 - 64);
        fun_14a4(rdi11, rsi13, gettimeofday, rcx15, rbp17 - 80, rbp18 - 88, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp19 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp20 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp21 - 72);
    *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(rbp23 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi24) = *reinterpret_cast<int32_t*>(rbp25 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx26 = *reinterpret_cast<int64_t*>(rbp27 - 72);
    rax28 = fun_14cf(rdi22, rsi24, rdx26, rcx, r8, r9, __return_address());
    *reinterpret_cast<int64_t*>(rbp29 - 8) = rax28;
    goto v30;
}

void fun_15d7(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, void* r8, void* r9, int64_t a7) {
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
        fun_15d7(rdi13, rsi15, rdx17, rcx19, rbp21 - 56, rbp22 - 64, __return_address());
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

void fun_16b8(int64_t rdi);

int32_t fun_1690(int64_t rdi);

int32_t fun_16cd(int64_t rdi);

int32_t fun_16d9(int64_t rdi);

int64_t fun_16a4(int64_t rdi);

int64_t fun_167d(int64_t rdi) {
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
        addr_16ae_2:
        fun_16b8(16);
    } else {
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 24);
        eax5 = fun_1690(rdi3);
        if (eax5 != 0x7ff) 
            goto addr_16c4_5; else 
            goto addr_169b_6;
    }
    *reinterpret_cast<int32_t*>(rbp6 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    addr_175a_8:
    goto v7;
    addr_16c4_5:
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
    eax10 = fun_16cd(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_16d9(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 32) = eax14;
    if (*reinterpret_cast<int32_t*>(rbp16 - 28) == *reinterpret_cast<int32_t*>(rbp17 - 32)) {
        zf18 = *reinterpret_cast<int64_t*>(rbp19 - 16) == *reinterpret_cast<int64_t*>(rbp20 - 24);
        *reinterpret_cast<signed char*>(rbp21 - 34) = 1;
        if (!zf18) {
            *reinterpret_cast<unsigned char*>(rbp22 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp23 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp24 - 16) < *reinterpret_cast<uint64_t*>(rbp25 - 24))) & 1))) == gettimeofday));
        }
        *reinterpret_cast<uint32_t*>(rbp26 - 4) = *reinterpret_cast<unsigned char*>(rbp27 - 34) & 1;
        goto addr_175a_8;
    } else {
        zf28 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp29 - 28) == gettimeofday);
        *reinterpret_cast<signed char*>(rbp30 - 33) = 1;
        if (zf28) {
            *reinterpret_cast<unsigned char*>(rbp31 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp32 - 16) | *reinterpret_cast<uint64_t*>(rbp33 - 24)) << 1 == gettimeofday);
        }
        *reinterpret_cast<uint32_t*>(rbp34 - 4) = *reinterpret_cast<unsigned char*>(rbp35 - 33) & 1;
        goto addr_175a_8;
    }
    addr_169b_6:
    rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 24);
    rax38 = fun_16a4(rdi36);
    if (rax38 == gettimeofday) 
        goto addr_16c4_5; else 
        goto addr_16ae_2;
}

int32_t fun_1690(int64_t rdi) {
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
        addr_16c4_2:
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 16);
        eax5 = fun_16cd(rdi3);
    } else {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 24);
        rax8 = fun_16a4(rdi6);
        if (rax8 == gettimeofday) 
            goto addr_16c4_2; else 
            goto addr_16ae_5;
    }
    *reinterpret_cast<int32_t*>(rbp9 - 28) = eax5;
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 24);
    eax12 = fun_16d9(rdi10);
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
    addr_175a_14:
    goto v34;
    addr_16ae_5:
    fun_16b8(16);
    *reinterpret_cast<int32_t*>(rbp35 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto addr_175a_14;
}

int64_t fun_16a4(int64_t rdi) {
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
        eax5 = fun_16cd(rdi3);
        *reinterpret_cast<int32_t*>(rbp6 - 28) = eax5;
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 24);
        eax9 = fun_16d9(rdi7);
        *reinterpret_cast<int32_t*>(rbp10 - 32) = eax9;
        if (*reinterpret_cast<int32_t*>(rbp11 - 28) != *reinterpret_cast<int32_t*>(rbp12 - 32)) 
            goto addr_16e8_5;
    } else {
        fun_16b8(16);
        *reinterpret_cast<int32_t*>(rbp13 - 4) = reinterpret_cast<int32_t>(gettimeofday);
        goto addr_175a_8;
    }
    zf14 = *reinterpret_cast<int64_t*>(rbp15 - 16) == *reinterpret_cast<int64_t*>(rbp16 - 24);
    *reinterpret_cast<signed char*>(rbp17 - 34) = 1;
    if (!zf14) {
        *reinterpret_cast<unsigned char*>(rbp18 - 34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((*reinterpret_cast<uint32_t*>(rbp19 - 28) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp20 - 16) < *reinterpret_cast<uint64_t*>(rbp21 - 24))) & 1))) == gettimeofday));
    }
    *reinterpret_cast<uint32_t*>(rbp22 - 4) = *reinterpret_cast<unsigned char*>(rbp23 - 34) & 1;
    addr_175a_8:
    goto v24;
    addr_16e8_5:
    zf25 = reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 28) == gettimeofday);
    *reinterpret_cast<signed char*>(rbp27 - 33) = 1;
    if (zf25) {
        *reinterpret_cast<unsigned char*>(rbp28 - 33) = reinterpret_cast<uint1_t>((*reinterpret_cast<uint64_t*>(rbp29 - 16) | *reinterpret_cast<uint64_t*>(rbp30 - 24)) << 1 == gettimeofday);
    }
    *reinterpret_cast<uint32_t*>(rbp31 - 4) = *reinterpret_cast<unsigned char*>(rbp32 - 33) & 1;
    goto addr_175a_8;
}

void fun_16b8(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int32_t*>(rbp2 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v3;
}

int64_t* g1927 = reinterpret_cast<int64_t*>(0x24c0950fd1043b48);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0** g190b = reinterpret_cast<struct s0**>(0xe8c83c8b48);

void rtclock();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_197b(int64_t rdi, int64_t rsi);

int64_t fun_1914() {
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
        rcx3 = g1927;
        *reinterpret_cast<uint32_t*>(rbp4 - 4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp5 - 16) != rcx3[*reinterpret_cast<int32_t*>(rbp6 - 8)])) & 1) + *reinterpret_cast<int32_t*>(rbp7 - 4);
        *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 8) >= 36) 
            break;
        rax11 = g190b;
        rdi12 = rax11[*reinterpret_cast<int32_t*>(rbp13 - 8)];
        rax2 = fun_1914();
    }
    rtclock();
    rdi12->f0 = *rsi14;
    rsi15 = &rsi16->f4;
    rdi12->f4 = *rsi15;
    __asm__("subsd xmm0, [rax]");
    fun_197b(0x1974, rsi15 + 1);
    goto v17;
}

void fun_197b(int64_t rdi, int64_t rsi) {
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
    v5 = *reinterpret_cast<int32_t*>(0x86d + rcx4 * 4) + v3;
    return v5;
}

int64_t fun_616(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

int64_t fun_707(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_7f5(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int32_t fun_b29(uint64_t rdi) {
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
    eax6 = fun_b35(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 24) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_b41(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 16);
    eax14 = fun_b4d(rdi12);
    *reinterpret_cast<uint32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint64_t*>(rbp16 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 8);
    *reinterpret_cast<uint64_t*>(rbp18 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp20 - 24) | *reinterpret_cast<uint32_t*>(rbp21 - 32)) != gettimeofday) {
        fun_b8d(16);
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

int64_t fun_afa(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_966(int64_t rdi, int64_t rsi, int64_t rdx) {
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
    int64_t rdi19;
    int64_t rbp20;
    int64_t rsi21;
    int64_t rbp22;
    int64_t rdx23;
    int64_t rbp24;
    int64_t rax25;
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
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
    rax25 = fun_afa(rdi19, rsi21, rdx23);
    *reinterpret_cast<int64_t*>(rbp26 - 8) = rax25;
    goto v27;
}

int64_t fun_9ba(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_9ff(int64_t rdi) {
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
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t rax23;
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
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
    rax23 = fun_afa(rdi17, rsi19, rdx21);
    *reinterpret_cast<int64_t*>(rbp24 - 8) = rax23;
    goto v25;
}

int64_t fun_afa(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_cc4(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_ea5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t fun_d32(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_d7d() {
    int64_t rbp1;
    int64_t rax2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp1 - 8) = rax2;
    goto v3;
}

void fun_dc2(int64_t rdi) {
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
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp2 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp3 - 56);
    *reinterpret_cast<int64_t*>(rbp4 - 64) = *reinterpret_cast<int64_t*>(rbp5 - 56) - *reinterpret_cast<int64_t*>(rbp6 - 48);
    *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 36);
    *reinterpret_cast<uint32_t*>(rbp9 - 28) = *reinterpret_cast<uint32_t*>(rbp10 - 28) ^ 1;
    *reinterpret_cast<int32_t*>(rbp11 - 40) = *reinterpret_cast<int32_t*>(rbp12 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    rax19 = fun_ea5(rdi13, rsi15, rdx17);
    *reinterpret_cast<int64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

void fun_e69(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp4 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp5 - 48);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = *reinterpret_cast<int64_t*>(rbp7 - 48) - *reinterpret_cast<int64_t*>(rbp8 - 56);
    *reinterpret_cast<int32_t*>(rbp9 - 40) = *reinterpret_cast<int32_t*>(rbp10 - 32);
    *reinterpret_cast<int32_t*>(rbp11 - 40) = *reinterpret_cast<int32_t*>(rbp12 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    rax19 = fun_ea5(rdi13, rsi15, rdx17);
    *reinterpret_cast<int64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

void fun_1162(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1113(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_10d6(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rsi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rax25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rsi37;
    int64_t rbp38;
    int64_t rdx39;
    int64_t rbp40;
    int64_t rax41;
    int64_t rbp42;
    int64_t v43;

    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp4 - 44) == gettimeofday)) {
        addr_1113_2:
        *reinterpret_cast<int32_t*>(rbp5 - 48) = *reinterpret_cast<int32_t*>(rbp6 - 40) + *reinterpret_cast<int32_t*>(rbp7 - 44) - 0x3ff;
        *reinterpret_cast<uint64_t*>(rbp8 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 56)) << 10;
        *reinterpret_cast<uint64_t*>(rbp10 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 64)) << 11;
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
        rsi14 = *reinterpret_cast<int64_t*>(rbp15 - 64);
        fun_1162(rdi12, rsi14, rbp16 - 72, rbp17 - 80);
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp18 - 64) == gettimeofday)) {
            rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 64);
            fun_1113(rdi19, rbp21 - 44, rbp22 - 64);
            goto addr_1113_2;
        } else {
            *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 36);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            rax25 = fun_10f9(rdi23);
            *reinterpret_cast<int64_t*>(rbp26 - 8) = rax25;
            goto addr_11b4_7;
        }
    }
    *reinterpret_cast<uint64_t*>(rbp27 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp28 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp29 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp30 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp31 - 72) = *reinterpret_cast<int64_t*>(rbp32 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp33 - 48) = *reinterpret_cast<int32_t*>(rbp34 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi35) = *reinterpret_cast<int32_t*>(rbp36 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi37) = *reinterpret_cast<int32_t*>(rbp38 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx39 = *reinterpret_cast<int64_t*>(rbp40 - 72);
    rax41 = fun_11b0(rdi35, rsi37, rdx39);
    *reinterpret_cast<int64_t*>(rbp42 - 8) = rax41;
    addr_11b4_7:
    goto v43;
}

void fun_1113(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
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
    int64_t rdi25;
    int64_t rbp26;
    int64_t rsi27;
    int64_t rbp28;
    int64_t rdx29;
    int64_t rbp30;
    int64_t rax31;
    int64_t rbp32;
    int64_t v33;

    *reinterpret_cast<int32_t*>(rbp4 - 48) = *reinterpret_cast<int32_t*>(rbp5 - 40) + *reinterpret_cast<int32_t*>(rbp6 - 44) - 0x3ff;
    *reinterpret_cast<uint64_t*>(rbp7 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp8 - 56)) << 10;
    *reinterpret_cast<uint64_t*>(rbp9 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp10 - 64)) << 11;
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 64);
    fun_1162(rdi11, rsi13, rbp15 - 72, rbp16 - 80);
    *reinterpret_cast<uint64_t*>(rbp17 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp18 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp19 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp20 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp21 - 72) = *reinterpret_cast<int64_t*>(rbp22 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp23 - 48) = *reinterpret_cast<int32_t*>(rbp24 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi25) = *reinterpret_cast<int32_t*>(rbp26 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp28 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx29 = *reinterpret_cast<int64_t*>(rbp30 - 72);
    rax31 = fun_11b0(rdi25, rsi27, rdx29);
    *reinterpret_cast<int64_t*>(rbp32 - 8) = rax31;
    goto v33;
}

void fun_1289(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_12f2(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_13b1(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1374(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    uint64_t rcx13;
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
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rax28;
    int64_t rbp29;
    uint64_t rdi30;
    int64_t rbp31;
    uint64_t rdx32;
    int64_t rbp33;
    uint64_t rax34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rsi39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rdx45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t r8_48;
    int64_t rbp49;
    int64_t r9_50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rdi55;
    int64_t rbp56;
    int64_t rsi57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rsi67;
    int64_t rbp68;
    int64_t rdx69;
    int64_t rbp70;
    int64_t rax71;
    int64_t rbp72;
    int64_t v73;

    v4 = reinterpret_cast<int64_t>(__return_address());
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 40) == gettimeofday)) {
        addr_13b1_2:
        *reinterpret_cast<int32_t*>(rbp6 - 48) = *reinterpret_cast<int32_t*>(rbp7 - 40) - *reinterpret_cast<int32_t*>(rbp8 - 44) + 0x3fd;
        *reinterpret_cast<uint64_t*>(rbp9 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp10 - 56)) << 10;
        *reinterpret_cast<uint64_t*>(rbp11 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp12 - 64)) << 11;
        rcx13 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp14 - 56) + *reinterpret_cast<int64_t*>(rbp15 - 56));
        if (*reinterpret_cast<uint64_t*>(rbp16 - 64) <= rcx13) {
            *reinterpret_cast<uint64_t*>(rbp17 - 56) = *reinterpret_cast<uint64_t*>(rbp18 - 56) >> 1;
            *reinterpret_cast<int32_t*>(rbp19 - 48) = *reinterpret_cast<int32_t*>(rbp20 - 48) + 1;
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp21 - 56) == gettimeofday)) {
            rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 56);
            fun_13b1(rdi22, rbp24 - 40, rbp25 - 56);
            goto addr_13b1_2;
        } else {
            *reinterpret_cast<int32_t*>(&rdi26) = *reinterpret_cast<int32_t*>(rbp27 - 36);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            rax28 = fun_1397(rdi26);
            *reinterpret_cast<int64_t*>(rbp29 - 8) = rax28;
            goto addr_14d3_8;
        }
    }
    rdi30 = *reinterpret_cast<uint64_t*>(rbp31 - 56);
    rdx32 = *reinterpret_cast<uint64_t*>(rbp33 - 64);
    rax34 = estimateDiv128To64(rdi30, gettimeofday, rdx32);
    *reinterpret_cast<uint64_t*>(rbp35 - 72) = rax34;
    if ((*reinterpret_cast<uint64_t*>(rbp36 - 72) & 0x1ff) <= 2) {
        rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 64);
        rsi39 = *reinterpret_cast<int64_t*>(rbp40 - 72);
        fun_1453(rdi37, rsi39, rbp41 - 96, rbp42 - 0x68);
        rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 56);
        rdx45 = *reinterpret_cast<int64_t*>(rbp46 - 96);
        rcx13 = *reinterpret_cast<uint64_t*>(rbp47 - 0x68);
        r8_48 = rbp49 - 80;
        r9_50 = rbp51 - 88;
        fun_1470(rdi43, gettimeofday, rdx45, rcx13, r8_48, r9_50, v4);
        while (*reinterpret_cast<int64_t*>(rbp52 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp53 - 72) = *reinterpret_cast<int64_t*>(rbp54 - 72) - 1;
            rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 80);
            rsi57 = *reinterpret_cast<int64_t*>(rbp58 - 88);
            rcx13 = *reinterpret_cast<uint64_t*>(rbp59 - 64);
            r8_48 = rbp60 - 80;
            r9_50 = rbp61 - 88;
            fun_14a4(rdi55, rsi57, gettimeofday, rcx13, r8_48, r9_50, v4);
        }
        *reinterpret_cast<uint64_t*>(rbp62 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp63 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp64 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi67) = *reinterpret_cast<int32_t*>(rbp68 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx69 = *reinterpret_cast<int64_t*>(rbp70 - 72);
    rax71 = fun_14cf(rdi65, rsi67, rdx69, rcx13, r8_48, r9_50, v4);
    *reinterpret_cast<int64_t*>(rbp72 - 8) = rax71;
    addr_14d3_8:
    goto v73;
}

int64_t fun_135a(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1349(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_135a(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4;
    goto v6;
}

void fun_13b1(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    uint64_t rcx12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    uint64_t rdi20;
    int64_t rbp21;
    uint64_t rdx22;
    int64_t rbp23;
    uint64_t rax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rsi29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdx35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t r8_38;
    int64_t rbp39;
    int64_t r9_40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rsi47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rdi55;
    int64_t rbp56;
    int64_t rsi57;
    int64_t rbp58;
    int64_t rdx59;
    int64_t rbp60;
    int64_t rax61;
    int64_t rbp62;
    int64_t v63;

    v4 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp5 - 48) = *reinterpret_cast<int32_t*>(rbp6 - 40) - *reinterpret_cast<int32_t*>(rbp7 - 44) + 0x3fd;
    *reinterpret_cast<uint64_t*>(rbp8 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 56)) << 10;
    *reinterpret_cast<uint64_t*>(rbp10 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 64)) << 11;
    rcx12 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp13 - 56) + *reinterpret_cast<int64_t*>(rbp14 - 56));
    if (*reinterpret_cast<uint64_t*>(rbp15 - 64) <= rcx12) {
        *reinterpret_cast<uint64_t*>(rbp16 - 56) = *reinterpret_cast<uint64_t*>(rbp17 - 56) >> 1;
        *reinterpret_cast<int32_t*>(rbp18 - 48) = *reinterpret_cast<int32_t*>(rbp19 - 48) + 1;
    }
    rdi20 = *reinterpret_cast<uint64_t*>(rbp21 - 56);
    rdx22 = *reinterpret_cast<uint64_t*>(rbp23 - 64);
    rax24 = estimateDiv128To64(rdi20, gettimeofday, rdx22);
    *reinterpret_cast<uint64_t*>(rbp25 - 72) = rax24;
    if ((*reinterpret_cast<uint64_t*>(rbp26 - 72) & 0x1ff) <= 2) {
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 64);
        rsi29 = *reinterpret_cast<int64_t*>(rbp30 - 72);
        fun_1453(rdi27, rsi29, rbp31 - 96, rbp32 - 0x68);
        rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 56);
        rdx35 = *reinterpret_cast<int64_t*>(rbp36 - 96);
        rcx12 = *reinterpret_cast<uint64_t*>(rbp37 - 0x68);
        r8_38 = rbp39 - 80;
        r9_40 = rbp41 - 88;
        fun_1470(rdi33, gettimeofday, rdx35, rcx12, r8_38, r9_40, v4);
        while (*reinterpret_cast<int64_t*>(rbp42 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp43 - 72) = *reinterpret_cast<int64_t*>(rbp44 - 72) - 1;
            rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 80);
            rsi47 = *reinterpret_cast<int64_t*>(rbp48 - 88);
            rcx12 = *reinterpret_cast<uint64_t*>(rbp49 - 64);
            r8_38 = rbp50 - 80;
            r9_40 = rbp51 - 88;
            fun_14a4(rdi45, rsi47, gettimeofday, rcx12, r8_38, r9_40, v4);
        }
        *reinterpret_cast<uint64_t*>(rbp52 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp53 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp54 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi55) = *reinterpret_cast<int32_t*>(rbp56 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi55) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi57) = *reinterpret_cast<int32_t*>(rbp58 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx59 = *reinterpret_cast<int64_t*>(rbp60 - 72);
    rax61 = fun_14cf(rdi55, rsi57, rdx59, rcx12, r8_38, r9_40, v4);
    *reinterpret_cast<int64_t*>(rbp62 - 8) = rax61;
    goto v63;
}

int64_t fun_14cf(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rax9;
    int64_t v10;

    *reinterpret_cast<int64_t*>(rbp8 - 8) = rax9;
    goto v10;
}

void fun_1470(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    uint64_t rcx15;
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
    int64_t rdx26;
    int64_t rbp27;
    int64_t rax28;
    int64_t rbp29;
    int64_t v30;

    while (*reinterpret_cast<int64_t*>(rbp8 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) - 1;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
        rcx15 = *reinterpret_cast<uint64_t*>(rbp16 - 64);
        fun_14a4(rdi11, rsi13, gettimeofday, rcx15, rbp17 - 80, rbp18 - 88, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp19 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp20 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp21 - 72);
    *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(rbp23 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi24) = *reinterpret_cast<int32_t*>(rbp25 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx26 = *reinterpret_cast<int64_t*>(rbp27 - 72);
    rax28 = fun_14cf(rdi22, rsi24, rdx26, rcx, r8, r9, __return_address());
    *reinterpret_cast<int64_t*>(rbp29 - 8) = rax28;
    goto v30;
}

void fun_1571(uint64_t rdi, uint64_t rsi, void* rdx, void* rcx) {
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
    fun_158e(rdi6, rsi8, rdx10, rcx12, rbp14 - 56, rbp15 - 64, v5);
    while (*reinterpret_cast<int64_t*>(rbp16 - 56) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp17 - 88) = *reinterpret_cast<int64_t*>(rbp18 - 88) - 0x100000000;
        *reinterpret_cast<int64_t*>(rbp19 - 48) = *reinterpret_cast<int64_t*>(rbp20 - 32) << 32;
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
        rsi23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
        rdx25 = *reinterpret_cast<uint64_t*>(rbp26 - 40);
        rcx27 = *reinterpret_cast<uint64_t*>(rbp28 - 48);
        fun_15d7(rdi21, rsi23, rdx25, rcx27, rbp29 - 56, rbp30 - 64, v5);
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

void fun_158e(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8, void* r9, int64_t a7) {
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
        fun_15d7(rdi13, rsi15, rdx17, rcx19, rbp21 - 56, rbp22 - 64, __return_address());
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

void fun_178d(int64_t rdi, int64_t rsi) {
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

int32_t fun_8a9(int64_t rdi);

int64_t fun_8b5(int64_t rdi);

int32_t fun_8c2(int64_t rdi);

void fun_89c(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
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
    int64_t rax34;
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
    int64_t rdi52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rax59;
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
    int64_t rdi73;
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
    int64_t rdi89;
    int64_t rbp90;
    int64_t rsi91;
    int64_t rbp92;
    int64_t rdx93;
    int64_t rbp94;
    int64_t rax95;
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
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_8a9(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_8b5(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_8c2(rdi12);
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
                    rax34 = fun_a6c(rdi32);
                    *reinterpret_cast<int64_t*>(rbp35 - 8) = rax34;
                    goto addr_afe_11;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp36 - 48) | *reinterpret_cast<uint64_t*>(rbp37 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp38 - 8) = *reinterpret_cast<int64_t*>(rbp39 - 16);
                    goto addr_afe_11;
                } else {
                    rdi40 = *reinterpret_cast<uint64_t*>(rbp41 - 16);
                    rsi42 = *reinterpret_cast<uint64_t*>(rbp43 - 24);
                    rax44 = propagateFloat64NaN(rdi40, rsi42);
                    *reinterpret_cast<uint64_t*>(rbp45 - 8) = rax44;
                    goto addr_afe_11;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp46 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp47 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp48 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp49 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp50 - 68) = *reinterpret_cast<int32_t*>(rbp51 - 68) + 1;
                }
                rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 48);
                fun_9ff(rdi52);
                *reinterpret_cast<int32_t*>(rbp54 - 40) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                goto addr_a9b_22;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp56 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax59 = fun_9ba(rdi57, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                    goto addr_afe_11;
                } else {
                    rdi61 = *reinterpret_cast<uint64_t*>(rbp62 - 16);
                    rsi63 = *reinterpret_cast<uint64_t*>(rbp64 - 24);
                    rax65 = propagateFloat64NaN(rdi61, rsi63);
                    *reinterpret_cast<uint64_t*>(rbp66 - 8) = rax65;
                    goto addr_afe_11;
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
            rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 56);
            *reinterpret_cast<int32_t*>(&rsi75) = *reinterpret_cast<int32_t*>(rbp76 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi75) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_966(rdi73, rsi75, rbp77 - 56);
            *reinterpret_cast<int32_t*>(rbp78 - 40) = *reinterpret_cast<int32_t*>(rbp79 - 32);
            goto addr_a9b_22;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp80 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp81 - 8) = *reinterpret_cast<int64_t*>(rbp82 - 16);
                goto addr_afe_11;
            } else {
                rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
                rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
                rax87 = propagateFloat64NaN(rdi83, rsi85);
                *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
                goto addr_afe_11;
            }
        }
    }
    addr_aeb_36:
    *reinterpret_cast<int32_t*>(&rdi89) = *reinterpret_cast<int32_t*>(rbp90 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi89) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi91) = *reinterpret_cast<int32_t*>(rbp92 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi91) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx93 = *reinterpret_cast<int64_t*>(rbp94 - 64);
    rax95 = fun_afa(rdi89, rsi91, rdx93);
    *reinterpret_cast<int64_t*>(rbp96 - 8) = rax95;
    addr_afe_11:
    goto v97;
    addr_a9b_22:
    *reinterpret_cast<uint64_t*>(rbp98 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp99 - 48);
    *reinterpret_cast<int64_t*>(rbp100 - 64) = *reinterpret_cast<int64_t*>(rbp101 - 48) + *reinterpret_cast<int64_t*>(rbp102 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp103 - 40) = *reinterpret_cast<int32_t*>(rbp104 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp105 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp106 - 64) = *reinterpret_cast<int64_t*>(rbp107 - 48) + *reinterpret_cast<int64_t*>(rbp108 - 56);
        *reinterpret_cast<int32_t*>(rbp109 - 40) = *reinterpret_cast<int32_t*>(rbp110 - 40) + 1;
    }
    goto addr_aeb_36;
}

uint32_t fun_b35(uint64_t rdi) {
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
    eax6 = fun_b41(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_b4d(rdi8);
    *reinterpret_cast<uint32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint64_t*>(rbp12 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp13 - 8);
    *reinterpret_cast<uint64_t*>(rbp14 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp16 - 24) | *reinterpret_cast<uint32_t*>(rbp17 - 32)) != gettimeofday) {
        fun_b8d(16);
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

int32_t fun_c29(int64_t rdi);

int64_t fun_c35(int64_t rdi);

int32_t fun_c42(int64_t rdi);

int32_t* gd1c = reinterpret_cast<int32_t*>(0x124c0940f033883);

void fun_c1c(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
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
    int64_t rax46;
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
    int64_t rdi58;
    int64_t rbp59;
    int64_t rsi60;
    int64_t rbp61;
    int64_t rdx62;
    int64_t rbp63;
    int64_t rax64;
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
    int64_t rdi76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rax81;
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
    int64_t rdi94;
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
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_c29(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_c35(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_c42(rdi12);
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
                    goto addr_cfd_10;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp31 - 48) | *reinterpret_cast<uint64_t*>(rbp32 - 56)) == gettimeofday) {
                    fun_cc4(16);
                    *reinterpret_cast<int64_t*>(rbp33 - 8) = 0x7fffffffffffffff;
                    goto addr_ea9_14;
                } else {
                    rdi34 = *reinterpret_cast<uint64_t*>(rbp35 - 16);
                    rsi36 = *reinterpret_cast<uint64_t*>(rbp37 - 24);
                    rax38 = propagateFloat64NaN(rdi34, rsi36);
                    *reinterpret_cast<uint64_t*>(rbp39 - 8) = rax38;
                    goto addr_ea9_14;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp40 - 36) != 0x7ff) 
                goto addr_d86_18; else 
                goto addr_d48_19;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp41 - 32) != 0x7ff) 
            goto addr_e2f_22; else 
            goto addr_e01_23;
    }
    if (*reinterpret_cast<uint64_t*>(rbp42 - 48) >= *reinterpret_cast<uint64_t*>(rbp43 - 56)) {
        rax44 = gd1c;
        *reinterpret_cast<uint32_t*>(&rdi45) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax44 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax46 = fun_d32(rdi45);
        *reinterpret_cast<int64_t*>(rbp47 - 8) = rax46;
    } else {
        goto addr_dd4_28;
    }
    addr_ea9_14:
    goto v48;
    addr_dd4_28:
    *reinterpret_cast<int64_t*>(rbp49 - 64) = *reinterpret_cast<int64_t*>(rbp50 - 56) - *reinterpret_cast<int64_t*>(rbp51 - 48);
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 36);
    *reinterpret_cast<uint32_t*>(rbp54 - 28) = *reinterpret_cast<uint32_t*>(rbp55 - 28) ^ 1;
    addr_e8d_29:
    *reinterpret_cast<int32_t*>(rbp56 - 40) = *reinterpret_cast<int32_t*>(rbp57 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi58) = *reinterpret_cast<int32_t*>(rbp59 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi60) = *reinterpret_cast<int32_t*>(rbp61 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx62 = *reinterpret_cast<int64_t*>(rbp63 - 64);
    rax64 = fun_ea5(rdi58, rsi60, rdx62);
    *reinterpret_cast<int64_t*>(rbp65 - 8) = rax64;
    goto addr_ea9_14;
    addr_cfd_10:
    addr_e7b_31:
    *reinterpret_cast<int64_t*>(rbp66 - 64) = *reinterpret_cast<int64_t*>(rbp67 - 48) - *reinterpret_cast<int64_t*>(rbp68 - 56);
    *reinterpret_cast<int32_t*>(rbp69 - 40) = *reinterpret_cast<int32_t*>(rbp70 - 32);
    goto addr_e8d_29;
    addr_d86_18:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp71 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp72 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp73 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp74 - 68) = *reinterpret_cast<int32_t*>(rbp75 - 68) + 1;
    }
    rdi76 = *reinterpret_cast<int64_t*>(rbp77 - 48);
    fun_dc2(rdi76);
    *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    goto addr_dd4_28;
    addr_d48_19:
    if (*reinterpret_cast<int64_t*>(rbp80 - 56) == gettimeofday) {
        rax81 = fun_d7d();
        *reinterpret_cast<int64_t*>(rbp82 - 8) = rax81;
        goto addr_ea9_14;
    } else {
        rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
        rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
        rax87 = propagateFloat64NaN(rdi83, rsi85);
        *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
        goto addr_ea9_14;
    }
    addr_e2f_22:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp89 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp90 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp92 - 68) = *reinterpret_cast<int32_t*>(rbp93 - 68) - 1;
    }
    rdi94 = *reinterpret_cast<int64_t*>(rbp95 - 56);
    *reinterpret_cast<int32_t*>(&rsi96) = *reinterpret_cast<int32_t*>(rbp97 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi96) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_e69(rdi94, rsi96, rbp98 - 56);
    *reinterpret_cast<uint64_t*>(rbp99 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp100 - 48);
    goto addr_e7b_31;
    addr_e01_23:
    if (*reinterpret_cast<int64_t*>(rbp101 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp102 - 8) = *reinterpret_cast<int64_t*>(rbp103 - 16);
        goto addr_ea9_14;
    } else {
        rdi104 = *reinterpret_cast<uint64_t*>(rbp105 - 16);
        rsi106 = *reinterpret_cast<uint64_t*>(rbp107 - 24);
        rax108 = propagateFloat64NaN(rdi104, rsi106);
        *reinterpret_cast<uint64_t*>(rbp109 - 8) = rax108;
        goto addr_ea9_14;
    }
}

int32_t fun_ee5(int64_t rdi);

int64_t fun_f1d(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_ed9(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rsi12;
    int64_t rbp13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rax16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rbp21;
    int64_t rdx22;
    int64_t rbp23;
    int64_t rax24;
    int64_t rbp25;
    int64_t v26;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_ee5(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    if (*reinterpret_cast<int32_t*>(rbp8 - 28) != *reinterpret_cast<int32_t*>(rbp9 - 32)) {
        rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 16);
        rsi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
        *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(rbp15 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax16 = fun_f1d(rdi10, rsi12, rdx14);
        *reinterpret_cast<int64_t*>(rbp17 - 8) = rax16;
    } else {
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        *reinterpret_cast<int32_t*>(&rdx22) = *reinterpret_cast<int32_t*>(rbp23 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax24 = fun_f04(rdi18, rsi20, rdx22);
        *reinterpret_cast<int64_t*>(rbp25 - 8) = rax24;
    }
    goto v26;
}

int64_t fun_f1d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t fun_1019(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int32_t fun_11e6(int64_t rdi);

int32_t fun_11f2(int64_t rdi);

int64_t fun_11fe(int64_t rdi);

int32_t fun_120b(int64_t rdi);

int32_t fun_1217(int64_t rdi);

int64_t fun_12ad(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_11d9(int64_t rdi) {
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
    uint64_t rcx39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rax54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rax65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rax71;
    int64_t rbp72;
    uint64_t rdi73;
    int64_t rbp74;
    uint64_t rsi75;
    int64_t rbp76;
    uint64_t rax77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rdi81;
    int64_t rbp82;
    int64_t rax83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rbp86;
    uint64_t rdi87;
    int64_t rbp88;
    uint64_t rsi89;
    int64_t rbp90;
    uint64_t rax91;
    int64_t rbp92;
    uint64_t rdi93;
    int64_t rbp94;
    uint64_t rsi95;
    int64_t rbp96;
    uint64_t rax97;
    int64_t rbp98;
    uint64_t rdi99;
    int64_t rbp100;
    uint64_t rdx101;
    int64_t rbp102;
    uint64_t rax103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rdi106;
    int64_t rbp107;
    int64_t rsi108;
    int64_t rbp109;
    int64_t rbp110;
    int64_t rbp111;
    int64_t rdi112;
    int64_t rbp113;
    int64_t rdx114;
    int64_t rbp115;
    int64_t rbp116;
    int64_t r8_117;
    int64_t rbp118;
    int64_t r9_119;
    int64_t rbp120;
    int64_t rbp121;
    int64_t rbp122;
    int64_t rbp123;
    int64_t rdi124;
    int64_t rbp125;
    int64_t rsi126;
    int64_t rbp127;
    int64_t rbp128;
    int64_t rbp129;
    int64_t rbp130;
    int64_t rbp131;
    int64_t rbp132;
    int64_t rbp133;
    int64_t rdi134;
    int64_t rbp135;
    int64_t rsi136;
    int64_t rbp137;
    int64_t rdx138;
    int64_t rbp139;
    int64_t rax140;
    int64_t rbp141;
    int64_t v142;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    eax7 = fun_11e6(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 40) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
    eax11 = fun_11f2(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 28) = eax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    rax15 = fun_11fe(rdi13);
    *reinterpret_cast<int64_t*>(rbp16 - 64) = rax15;
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
    eax19 = fun_120b(rdi17);
    *reinterpret_cast<int32_t*>(rbp20 - 44) = eax19;
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
    eax23 = fun_1217(rdi21);
    *reinterpret_cast<int32_t*>(rbp24 - 32) = eax23;
    *reinterpret_cast<uint32_t*>(rbp25 - 36) = *reinterpret_cast<uint32_t*>(rbp26 - 28) ^ *reinterpret_cast<uint32_t*>(rbp27 - 32);
    if (*reinterpret_cast<int32_t*>(rbp28 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp29 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp30 - 44) == gettimeofday)) {
                addr_1374_9:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp31 - 40) == gettimeofday)) {
                    addr_13b1_10:
                    *reinterpret_cast<int32_t*>(rbp32 - 48) = *reinterpret_cast<int32_t*>(rbp33 - 40) - *reinterpret_cast<int32_t*>(rbp34 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp35 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp36 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp37 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp38 - 64)) << 11;
                    rcx39 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp40 - 56) + *reinterpret_cast<int64_t*>(rbp41 - 56));
                    if (*reinterpret_cast<uint64_t*>(rbp42 - 64) <= rcx39) {
                        *reinterpret_cast<uint64_t*>(rbp43 - 56) = *reinterpret_cast<uint64_t*>(rbp44 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp45 - 48) = *reinterpret_cast<int32_t*>(rbp46 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp47 - 56) == gettimeofday)) {
                        rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 56);
                        fun_13b1(rdi48, rbp50 - 40, rbp51 - 56);
                        goto addr_13b1_10;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi52) = *reinterpret_cast<int32_t*>(rbp53 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax54 = fun_1397(rdi52);
                        *reinterpret_cast<int64_t*>(rbp55 - 8) = rax54;
                        goto addr_14d3_16;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp56 - 64) == gettimeofday)) {
                    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 64);
                    fun_1374(rdi57, rbp59 - 44, rbp60 - 64);
                    goto addr_1374_9;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp61 - 40))) | *reinterpret_cast<uint64_t*>(rbp62 - 56)) == gettimeofday)) {
                        fun_1349(2);
                        *reinterpret_cast<int32_t*>(&rdi63) = *reinterpret_cast<int32_t*>(rbp64 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi63) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax65 = fun_135a(rdi63, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp66 - 8) = rax65;
                        goto addr_14d3_16;
                    } else {
                        fun_132c(16);
                        *reinterpret_cast<int64_t*>(rbp67 - 8) = 0x7fffffffffffffff;
                        goto addr_14d3_16;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp68 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi69) = *reinterpret_cast<int32_t*>(rbp70 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax71 = fun_12f2(rdi69);
                *reinterpret_cast<int64_t*>(rbp72 - 8) = rax71;
                goto addr_14d3_16;
            } else {
                rdi73 = *reinterpret_cast<uint64_t*>(rbp74 - 16);
                rsi75 = *reinterpret_cast<uint64_t*>(rbp76 - 24);
                rax77 = propagateFloat64NaN(rdi73, rsi75);
                *reinterpret_cast<uint64_t*>(rbp78 - 8) = rax77;
                goto addr_14d3_16;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp79 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp80 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi81) = *reinterpret_cast<int32_t*>(rbp82 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax83 = fun_12ad(rdi81, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp84 - 8) = rax83;
                goto addr_14d3_16;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp85 - 64) == gettimeofday) {
                    fun_1289(16);
                    *reinterpret_cast<int64_t*>(rbp86 - 8) = 0x7fffffffffffffff;
                    goto addr_14d3_16;
                } else {
                    rdi87 = *reinterpret_cast<uint64_t*>(rbp88 - 16);
                    rsi89 = *reinterpret_cast<uint64_t*>(rbp90 - 24);
                    rax91 = propagateFloat64NaN(rdi87, rsi89);
                    *reinterpret_cast<uint64_t*>(rbp92 - 8) = rax91;
                    goto addr_14d3_16;
                }
            }
        } else {
            rdi93 = *reinterpret_cast<uint64_t*>(rbp94 - 16);
            rsi95 = *reinterpret_cast<uint64_t*>(rbp96 - 24);
            rax97 = propagateFloat64NaN(rdi93, rsi95);
            *reinterpret_cast<uint64_t*>(rbp98 - 8) = rax97;
            goto addr_14d3_16;
        }
    }
    rdi99 = *reinterpret_cast<uint64_t*>(rbp100 - 56);
    rdx101 = *reinterpret_cast<uint64_t*>(rbp102 - 64);
    rax103 = estimateDiv128To64(rdi99, gettimeofday, rdx101);
    *reinterpret_cast<uint64_t*>(rbp104 - 72) = rax103;
    if ((*reinterpret_cast<uint64_t*>(rbp105 - 72) & 0x1ff) <= 2) {
        rdi106 = *reinterpret_cast<int64_t*>(rbp107 - 64);
        rsi108 = *reinterpret_cast<int64_t*>(rbp109 - 72);
        fun_1453(rdi106, rsi108, rbp110 - 96, rbp111 - 0x68);
        rdi112 = *reinterpret_cast<int64_t*>(rbp113 - 56);
        rdx114 = *reinterpret_cast<int64_t*>(rbp115 - 96);
        rcx39 = *reinterpret_cast<uint64_t*>(rbp116 - 0x68);
        r8_117 = rbp118 - 80;
        r9_119 = rbp120 - 88;
        fun_1470(rdi112, gettimeofday, rdx114, rcx39, r8_117, r9_119, v2);
        while (*reinterpret_cast<int64_t*>(rbp121 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp122 - 72) = *reinterpret_cast<int64_t*>(rbp123 - 72) - 1;
            rdi124 = *reinterpret_cast<int64_t*>(rbp125 - 80);
            rsi126 = *reinterpret_cast<int64_t*>(rbp127 - 88);
            rcx39 = *reinterpret_cast<uint64_t*>(rbp128 - 64);
            r8_117 = rbp129 - 80;
            r9_119 = rbp130 - 88;
            fun_14a4(rdi124, rsi126, gettimeofday, rcx39, r8_117, r9_119, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp131 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp132 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp133 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi134) = *reinterpret_cast<int32_t*>(rbp135 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi134) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi136) = *reinterpret_cast<int32_t*>(rbp137 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi136) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx138 = *reinterpret_cast<int64_t*>(rbp139 - 72);
    rax140 = fun_14cf(rdi134, rsi136, rdx138, rcx39, r8_117, r9_119, v2);
    *reinterpret_cast<int64_t*>(rbp141 - 8) = rax140;
    addr_14d3_16:
    goto v142;
}

int64_t fun_1090(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_1162(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp5 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp6 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp7 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp8 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp11 - 48) = *reinterpret_cast<int32_t*>(rbp12 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    rax19 = fun_11b0(rdi13, rsi15, rdx17);
    *reinterpret_cast<int64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

int64_t fun_12ad(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t fun_135a(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_1669(int64_t rdi) {
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
        addr_1687_2:
        rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 24);
        eax5 = fun_1690(rdi3);
    } else {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 16);
        rax8 = fun_167d(rdi6);
        if (!reinterpret_cast<int1_t>(rax8 == gettimeofday)) 
            goto addr_16ae_5; else 
            goto addr_1687_2;
    }
    if (eax5 != 0x7ff) {
        addr_16c4_7:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
        eax11 = fun_16cd(rdi9);
    } else {
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
        rax14 = fun_16a4(rdi12);
        if (rax14 == gettimeofday) 
            goto addr_16c4_7; else 
            goto addr_16ae_5;
    }
    *reinterpret_cast<int32_t*>(rbp15 - 28) = eax11;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_16d9(rdi16);
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
    addr_175a_18:
    goto v40;
    addr_16ae_5:
    fun_16b8(16);
    *reinterpret_cast<int32_t*>(rbp41 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto addr_175a_18;
}

int32_t fun_16cd(int64_t rdi) {
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
    eax6 = fun_16d9(rdi4);
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

int32_t fun_8a9(int64_t rdi) {
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
    int64_t rax30;
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
    int64_t rdi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rax55;
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
    int64_t rdi69;
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
    int64_t rdi85;
    int64_t rbp86;
    int64_t rsi87;
    int64_t rbp88;
    int64_t rdx89;
    int64_t rbp90;
    int64_t rax91;
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
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    rax6 = fun_8b5(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_8c2(rdi8);
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
                    rax30 = fun_a6c(rdi28);
                    *reinterpret_cast<int64_t*>(rbp31 - 8) = rax30;
                    goto addr_afe_10;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp32 - 48) | *reinterpret_cast<uint64_t*>(rbp33 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp34 - 8) = *reinterpret_cast<int64_t*>(rbp35 - 16);
                    goto addr_afe_10;
                } else {
                    rdi36 = *reinterpret_cast<uint64_t*>(rbp37 - 16);
                    rsi38 = *reinterpret_cast<uint64_t*>(rbp39 - 24);
                    rax40 = propagateFloat64NaN(rdi36, rsi38);
                    *reinterpret_cast<uint64_t*>(rbp41 - 8) = rax40;
                    goto addr_afe_10;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp42 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp43 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp44 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp45 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp46 - 68) = *reinterpret_cast<int32_t*>(rbp47 - 68) + 1;
                }
                rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 48);
                fun_9ff(rdi48);
                *reinterpret_cast<int32_t*>(rbp50 - 40) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                goto addr_a9b_21;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp52 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax55 = fun_9ba(rdi53, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                    goto addr_afe_10;
                } else {
                    rdi57 = *reinterpret_cast<uint64_t*>(rbp58 - 16);
                    rsi59 = *reinterpret_cast<uint64_t*>(rbp60 - 24);
                    rax61 = propagateFloat64NaN(rdi57, rsi59);
                    *reinterpret_cast<uint64_t*>(rbp62 - 8) = rax61;
                    goto addr_afe_10;
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
            rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 56);
            *reinterpret_cast<int32_t*>(&rsi71) = *reinterpret_cast<int32_t*>(rbp72 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi71) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_966(rdi69, rsi71, rbp73 - 56);
            *reinterpret_cast<int32_t*>(rbp74 - 40) = *reinterpret_cast<int32_t*>(rbp75 - 32);
            goto addr_a9b_21;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp76 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp77 - 8) = *reinterpret_cast<int64_t*>(rbp78 - 16);
                goto addr_afe_10;
            } else {
                rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
                rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
                rax83 = propagateFloat64NaN(rdi79, rsi81);
                *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
                goto addr_afe_10;
            }
        }
    }
    addr_aeb_35:
    *reinterpret_cast<int32_t*>(&rdi85) = *reinterpret_cast<int32_t*>(rbp86 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi85) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi87) = *reinterpret_cast<int32_t*>(rbp88 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx89 = *reinterpret_cast<int64_t*>(rbp90 - 64);
    rax91 = fun_afa(rdi85, rsi87, rdx89);
    *reinterpret_cast<int64_t*>(rbp92 - 8) = rax91;
    addr_afe_10:
    goto v93;
    addr_a9b_21:
    *reinterpret_cast<uint64_t*>(rbp94 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp95 - 48);
    *reinterpret_cast<int64_t*>(rbp96 - 64) = *reinterpret_cast<int64_t*>(rbp97 - 48) + *reinterpret_cast<int64_t*>(rbp98 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp99 - 40) = *reinterpret_cast<int32_t*>(rbp100 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp101 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp102 - 64) = *reinterpret_cast<int64_t*>(rbp103 - 48) + *reinterpret_cast<int64_t*>(rbp104 - 56);
        *reinterpret_cast<int32_t*>(rbp105 - 40) = *reinterpret_cast<int32_t*>(rbp106 - 40) + 1;
    }
    goto addr_aeb_35;
}

int32_t fun_b41(uint64_t rdi) {
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
    eax6 = fun_b4d(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint64_t*>(rbp8 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<uint64_t*>(rbp10 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp12 - 24) | *reinterpret_cast<uint32_t*>(rbp13 - 32)) != gettimeofday) {
        fun_b8d(16);
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

int32_t fun_c29(int64_t rdi) {
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
    int64_t rax42;
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
    int64_t rdi54;
    int64_t rbp55;
    int64_t rsi56;
    int64_t rbp57;
    int64_t rdx58;
    int64_t rbp59;
    int64_t rax60;
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
    int64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rax77;
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
    int64_t rdi90;
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
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    rax6 = fun_c35(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_c42(rdi8);
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
                    goto addr_cfd_9;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp27 - 48) | *reinterpret_cast<uint64_t*>(rbp28 - 56)) == gettimeofday) {
                    fun_cc4(16);
                    *reinterpret_cast<int64_t*>(rbp29 - 8) = 0x7fffffffffffffff;
                    goto addr_ea9_13;
                } else {
                    rdi30 = *reinterpret_cast<uint64_t*>(rbp31 - 16);
                    rsi32 = *reinterpret_cast<uint64_t*>(rbp33 - 24);
                    rax34 = propagateFloat64NaN(rdi30, rsi32);
                    *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
                    goto addr_ea9_13;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp36 - 36) != 0x7ff) 
                goto addr_d86_17; else 
                goto addr_d48_18;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp37 - 32) != 0x7ff) 
            goto addr_e2f_21; else 
            goto addr_e01_22;
    }
    if (*reinterpret_cast<uint64_t*>(rbp38 - 48) >= *reinterpret_cast<uint64_t*>(rbp39 - 56)) {
        rax40 = gd1c;
        *reinterpret_cast<uint32_t*>(&rdi41) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax40 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax42 = fun_d32(rdi41);
        *reinterpret_cast<int64_t*>(rbp43 - 8) = rax42;
    } else {
        goto addr_dd4_27;
    }
    addr_ea9_13:
    goto v44;
    addr_dd4_27:
    *reinterpret_cast<int64_t*>(rbp45 - 64) = *reinterpret_cast<int64_t*>(rbp46 - 56) - *reinterpret_cast<int64_t*>(rbp47 - 48);
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 36);
    *reinterpret_cast<uint32_t*>(rbp50 - 28) = *reinterpret_cast<uint32_t*>(rbp51 - 28) ^ 1;
    addr_e8d_28:
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi54) = *reinterpret_cast<int32_t*>(rbp55 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi56) = *reinterpret_cast<int32_t*>(rbp57 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx58 = *reinterpret_cast<int64_t*>(rbp59 - 64);
    rax60 = fun_ea5(rdi54, rsi56, rdx58);
    *reinterpret_cast<int64_t*>(rbp61 - 8) = rax60;
    goto addr_ea9_13;
    addr_cfd_9:
    addr_e7b_30:
    *reinterpret_cast<int64_t*>(rbp62 - 64) = *reinterpret_cast<int64_t*>(rbp63 - 48) - *reinterpret_cast<int64_t*>(rbp64 - 56);
    *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 32);
    goto addr_e8d_28;
    addr_d86_17:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp67 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp68 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp69 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp70 - 68) = *reinterpret_cast<int32_t*>(rbp71 - 68) + 1;
    }
    rdi72 = *reinterpret_cast<int64_t*>(rbp73 - 48);
    fun_dc2(rdi72);
    *reinterpret_cast<uint64_t*>(rbp74 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp75 - 56);
    goto addr_dd4_27;
    addr_d48_18:
    if (*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) {
        rax77 = fun_d7d();
        *reinterpret_cast<int64_t*>(rbp78 - 8) = rax77;
        goto addr_ea9_13;
    } else {
        rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
        rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
        rax83 = propagateFloat64NaN(rdi79, rsi81);
        *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
        goto addr_ea9_13;
    }
    addr_e2f_21:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp85 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp86 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp88 - 68) = *reinterpret_cast<int32_t*>(rbp89 - 68) - 1;
    }
    rdi90 = *reinterpret_cast<int64_t*>(rbp91 - 56);
    *reinterpret_cast<int32_t*>(&rsi92) = *reinterpret_cast<int32_t*>(rbp93 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi92) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_e69(rdi90, rsi92, rbp94 - 56);
    *reinterpret_cast<uint64_t*>(rbp95 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp96 - 48);
    goto addr_e7b_30;
    addr_e01_22:
    if (*reinterpret_cast<int64_t*>(rbp97 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp98 - 8) = *reinterpret_cast<int64_t*>(rbp99 - 16);
        goto addr_ea9_13;
    } else {
        rdi100 = *reinterpret_cast<uint64_t*>(rbp101 - 16);
        rsi102 = *reinterpret_cast<uint64_t*>(rbp103 - 24);
        rax104 = propagateFloat64NaN(rdi100, rsi102);
        *reinterpret_cast<uint64_t*>(rbp105 - 8) = rax104;
        goto addr_ea9_13;
    }
}

int32_t fun_ee5(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rsi8;
    int64_t rbp9;
    int64_t rdx10;
    int64_t rbp11;
    int64_t rax12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rsi16;
    int64_t rbp17;
    int64_t rdx18;
    int64_t rbp19;
    int64_t rax20;
    int64_t rbp21;
    int64_t v22;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    if (*reinterpret_cast<int32_t*>(rbp4 - 28) != *reinterpret_cast<int32_t*>(rbp5 - 32)) {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 16);
        rsi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
        *reinterpret_cast<int32_t*>(&rdx10) = *reinterpret_cast<int32_t*>(rbp11 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax12 = fun_f1d(rdi6, rsi8, rdx10);
        *reinterpret_cast<int64_t*>(rbp13 - 8) = rax12;
    } else {
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 16);
        rsi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
        *reinterpret_cast<int32_t*>(&rdx18) = *reinterpret_cast<int32_t*>(rbp19 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax20 = fun_f04(rdi14, rsi16, rdx18);
        *reinterpret_cast<int64_t*>(rbp21 - 8) = rax20;
    }
    goto v22;
}

int32_t fun_f56(int64_t rdi);

int32_t fun_f62(int64_t rdi);

int64_t fun_f6e(int64_t rdi);

int32_t fun_f7b(int64_t rdi);

int32_t fun_f87(int64_t rdi);

void fun_f49(int64_t rdi) {
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
    int64_t rdi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rax51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rdi54;
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
    int64_t rdi100;
    int64_t rbp101;
    int64_t rsi102;
    int64_t rbp103;
    int64_t rdx104;
    int64_t rbp105;
    int64_t rax106;
    int64_t rbp107;
    int64_t v108;

    *reinterpret_cast<int64_t*>(rbp2 - 56) = rax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_f56(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 40) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
    eax10 = fun_f62(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    rax14 = fun_f6e(rdi12);
    *reinterpret_cast<int64_t*>(rbp15 - 64) = rax14;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_f7b(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 44) = eax18;
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
    eax22 = fun_f87(rdi20);
    *reinterpret_cast<int32_t*>(rbp23 - 32) = eax22;
    *reinterpret_cast<uint32_t*>(rbp24 - 36) = *reinterpret_cast<uint32_t*>(rbp25 - 28) ^ *reinterpret_cast<uint32_t*>(rbp26 - 32);
    if (*reinterpret_cast<int32_t*>(rbp27 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp28 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp29 - 40) == gettimeofday)) {
                addr_10d6_9:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp30 - 44) == gettimeofday)) {
                    addr_1113_10:
                    *reinterpret_cast<int32_t*>(rbp31 - 48) = *reinterpret_cast<int32_t*>(rbp32 - 40) + *reinterpret_cast<int32_t*>(rbp33 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp34 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp35 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp36 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp37 - 64)) << 11;
                    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 56);
                    rsi40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
                    fun_1162(rdi38, rsi40, rbp42 - 72, rbp43 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp44 - 64) == gettimeofday)) {
                        rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
                        fun_1113(rdi45, rbp47 - 44, rbp48 - 64);
                        goto addr_1113_10;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax51 = fun_10f9(rdi49);
                        *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                        goto addr_11b4_15;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp53 - 56) == gettimeofday)) {
                    rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 56);
                    fun_10d6(rdi54, rbp56 - 40, rbp57 - 56);
                    goto addr_10d6_9;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi58) = *reinterpret_cast<int32_t*>(rbp59 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax60 = fun_10bc(rdi58);
                    *reinterpret_cast<int64_t*>(rbp61 - 8) = rax60;
                    goto addr_11b4_15;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp62 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp63 - 40))) | *reinterpret_cast<uint64_t*>(rbp64 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax67 = fun_1090(rdi65, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                    goto addr_11b4_15;
                } else {
                    fun_106c(16);
                    *reinterpret_cast<int64_t*>(rbp69 - 8) = 0x7fffffffffffffff;
                    goto addr_11b4_15;
                }
            } else {
                rdi70 = *reinterpret_cast<uint64_t*>(rbp71 - 16);
                rsi72 = *reinterpret_cast<uint64_t*>(rbp73 - 24);
                rax74 = propagateFloat64NaN(rdi70, rsi72);
                *reinterpret_cast<uint64_t*>(rbp75 - 8) = rax74;
                goto addr_11b4_15;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp77 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp78 - 64) != gettimeofday) {
            rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
            rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
            rax83 = propagateFloat64NaN(rdi79, rsi81);
            *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
            goto addr_11b4_15;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp85 - 44))) | *reinterpret_cast<uint64_t*>(rbp86 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi87) = *reinterpret_cast<int32_t*>(rbp88 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi87) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax89 = fun_1019(rdi87, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp90 - 8) = rax89;
                goto addr_11b4_15;
            } else {
                fun_ff5(16);
                *reinterpret_cast<int64_t*>(rbp91 - 8) = 0x7fffffffffffffff;
                goto addr_11b4_15;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp92 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp93 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp94 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp95 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp96 - 72) = *reinterpret_cast<int64_t*>(rbp97 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp98 - 48) = *reinterpret_cast<int32_t*>(rbp99 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi100) = *reinterpret_cast<int32_t*>(rbp101 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi100) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi102) = *reinterpret_cast<int32_t*>(rbp103 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi102) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx104 = *reinterpret_cast<int64_t*>(rbp105 - 72);
    rax106 = fun_11b0(rdi100, rsi102, rdx104);
    *reinterpret_cast<int64_t*>(rbp107 - 8) = rax106;
    addr_11b4_15:
    goto v108;
}

int32_t fun_11e6(int64_t rdi) {
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
    uint64_t rcx35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rax50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rax61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rax67;
    int64_t rbp68;
    uint64_t rdi69;
    int64_t rbp70;
    uint64_t rsi71;
    int64_t rbp72;
    uint64_t rax73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rdi77;
    int64_t rbp78;
    int64_t rax79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    uint64_t rdi83;
    int64_t rbp84;
    uint64_t rsi85;
    int64_t rbp86;
    uint64_t rax87;
    int64_t rbp88;
    uint64_t rdi89;
    int64_t rbp90;
    uint64_t rsi91;
    int64_t rbp92;
    uint64_t rax93;
    int64_t rbp94;
    uint64_t rdi95;
    int64_t rbp96;
    uint64_t rdx97;
    int64_t rbp98;
    uint64_t rax99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rdi102;
    int64_t rbp103;
    int64_t rsi104;
    int64_t rbp105;
    int64_t rbp106;
    int64_t rbp107;
    int64_t rdi108;
    int64_t rbp109;
    int64_t rdx110;
    int64_t rbp111;
    int64_t rbp112;
    int64_t r8_113;
    int64_t rbp114;
    int64_t r9_115;
    int64_t rbp116;
    int64_t rbp117;
    int64_t rbp118;
    int64_t rbp119;
    int64_t rdi120;
    int64_t rbp121;
    int64_t rsi122;
    int64_t rbp123;
    int64_t rbp124;
    int64_t rbp125;
    int64_t rbp126;
    int64_t rbp127;
    int64_t rbp128;
    int64_t rbp129;
    int64_t rdi130;
    int64_t rbp131;
    int64_t rsi132;
    int64_t rbp133;
    int64_t rdx134;
    int64_t rbp135;
    int64_t rax136;
    int64_t rbp137;
    int64_t v138;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 40) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    eax7 = fun_11f2(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    rax11 = fun_11fe(rdi9);
    *reinterpret_cast<int64_t*>(rbp12 - 64) = rax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    eax15 = fun_120b(rdi13);
    *reinterpret_cast<int32_t*>(rbp16 - 44) = eax15;
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
    eax19 = fun_1217(rdi17);
    *reinterpret_cast<int32_t*>(rbp20 - 32) = eax19;
    *reinterpret_cast<uint32_t*>(rbp21 - 36) = *reinterpret_cast<uint32_t*>(rbp22 - 28) ^ *reinterpret_cast<uint32_t*>(rbp23 - 32);
    if (*reinterpret_cast<int32_t*>(rbp24 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp25 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 44) == gettimeofday)) {
                addr_1374_8:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp27 - 40) == gettimeofday)) {
                    addr_13b1_9:
                    *reinterpret_cast<int32_t*>(rbp28 - 48) = *reinterpret_cast<int32_t*>(rbp29 - 40) - *reinterpret_cast<int32_t*>(rbp30 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp31 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp32 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp33 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp34 - 64)) << 11;
                    rcx35 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp36 - 56) + *reinterpret_cast<int64_t*>(rbp37 - 56));
                    if (*reinterpret_cast<uint64_t*>(rbp38 - 64) <= rcx35) {
                        *reinterpret_cast<uint64_t*>(rbp39 - 56) = *reinterpret_cast<uint64_t*>(rbp40 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp41 - 48) = *reinterpret_cast<int32_t*>(rbp42 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp43 - 56) == gettimeofday)) {
                        rdi44 = *reinterpret_cast<int64_t*>(rbp45 - 56);
                        fun_13b1(rdi44, rbp46 - 40, rbp47 - 56);
                        goto addr_13b1_9;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi48) = *reinterpret_cast<int32_t*>(rbp49 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax50 = fun_1397(rdi48);
                        *reinterpret_cast<int64_t*>(rbp51 - 8) = rax50;
                        goto addr_14d3_15;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp52 - 64) == gettimeofday)) {
                    rdi53 = *reinterpret_cast<int64_t*>(rbp54 - 64);
                    fun_1374(rdi53, rbp55 - 44, rbp56 - 64);
                    goto addr_1374_8;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp57 - 40))) | *reinterpret_cast<uint64_t*>(rbp58 - 56)) == gettimeofday)) {
                        fun_1349(2);
                        *reinterpret_cast<int32_t*>(&rdi59) = *reinterpret_cast<int32_t*>(rbp60 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax61 = fun_135a(rdi59, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp62 - 8) = rax61;
                        goto addr_14d3_15;
                    } else {
                        fun_132c(16);
                        *reinterpret_cast<int64_t*>(rbp63 - 8) = 0x7fffffffffffffff;
                        goto addr_14d3_15;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp64 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax67 = fun_12f2(rdi65);
                *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                goto addr_14d3_15;
            } else {
                rdi69 = *reinterpret_cast<uint64_t*>(rbp70 - 16);
                rsi71 = *reinterpret_cast<uint64_t*>(rbp72 - 24);
                rax73 = propagateFloat64NaN(rdi69, rsi71);
                *reinterpret_cast<uint64_t*>(rbp74 - 8) = rax73;
                goto addr_14d3_15;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp75 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp76 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi77) = *reinterpret_cast<int32_t*>(rbp78 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax79 = fun_12ad(rdi77, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp80 - 8) = rax79;
                goto addr_14d3_15;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp81 - 64) == gettimeofday) {
                    fun_1289(16);
                    *reinterpret_cast<int64_t*>(rbp82 - 8) = 0x7fffffffffffffff;
                    goto addr_14d3_15;
                } else {
                    rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
                    rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
                    rax87 = propagateFloat64NaN(rdi83, rsi85);
                    *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
                    goto addr_14d3_15;
                }
            }
        } else {
            rdi89 = *reinterpret_cast<uint64_t*>(rbp90 - 16);
            rsi91 = *reinterpret_cast<uint64_t*>(rbp92 - 24);
            rax93 = propagateFloat64NaN(rdi89, rsi91);
            *reinterpret_cast<uint64_t*>(rbp94 - 8) = rax93;
            goto addr_14d3_15;
        }
    }
    rdi95 = *reinterpret_cast<uint64_t*>(rbp96 - 56);
    rdx97 = *reinterpret_cast<uint64_t*>(rbp98 - 64);
    rax99 = estimateDiv128To64(rdi95, gettimeofday, rdx97);
    *reinterpret_cast<uint64_t*>(rbp100 - 72) = rax99;
    if ((*reinterpret_cast<uint64_t*>(rbp101 - 72) & 0x1ff) <= 2) {
        rdi102 = *reinterpret_cast<int64_t*>(rbp103 - 64);
        rsi104 = *reinterpret_cast<int64_t*>(rbp105 - 72);
        fun_1453(rdi102, rsi104, rbp106 - 96, rbp107 - 0x68);
        rdi108 = *reinterpret_cast<int64_t*>(rbp109 - 56);
        rdx110 = *reinterpret_cast<int64_t*>(rbp111 - 96);
        rcx35 = *reinterpret_cast<uint64_t*>(rbp112 - 0x68);
        r8_113 = rbp114 - 80;
        r9_115 = rbp116 - 88;
        fun_1470(rdi108, gettimeofday, rdx110, rcx35, r8_113, r9_115, v2);
        while (*reinterpret_cast<int64_t*>(rbp117 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp118 - 72) = *reinterpret_cast<int64_t*>(rbp119 - 72) - 1;
            rdi120 = *reinterpret_cast<int64_t*>(rbp121 - 80);
            rsi122 = *reinterpret_cast<int64_t*>(rbp123 - 88);
            rcx35 = *reinterpret_cast<uint64_t*>(rbp124 - 64);
            r8_113 = rbp125 - 80;
            r9_115 = rbp126 - 88;
            fun_14a4(rdi120, rsi122, gettimeofday, rcx35, r8_113, r9_115, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp127 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp128 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp129 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi130) = *reinterpret_cast<int32_t*>(rbp131 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi130) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi132) = *reinterpret_cast<int32_t*>(rbp133 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi132) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx134 = *reinterpret_cast<int64_t*>(rbp135 - 72);
    rax136 = fun_14cf(rdi130, rsi132, rdx134, rcx35, r8_113, r9_115, v2);
    *reinterpret_cast<int64_t*>(rbp137 - 8) = rax136;
    addr_14d3_15:
    goto v138;
}

int32_t fun_16d9(int64_t rdi) {
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

void fun_75b(int64_t rdi) {
    int64_t v2;

    goto v2;
}

int64_t fun_8b5(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
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
    int64_t rbp22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int64_t rax26;
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
    int64_t rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rax51;
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
    int64_t rdi65;
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
    int64_t rdi81;
    int64_t rbp82;
    int64_t rsi83;
    int64_t rbp84;
    int64_t rdx85;
    int64_t rbp86;
    int64_t rax87;
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
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_8c2(rdi4);
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
                    rax26 = fun_a6c(rdi24);
                    *reinterpret_cast<int64_t*>(rbp27 - 8) = rax26;
                    goto addr_afe_9;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp28 - 48) | *reinterpret_cast<uint64_t*>(rbp29 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp30 - 8) = *reinterpret_cast<int64_t*>(rbp31 - 16);
                    goto addr_afe_9;
                } else {
                    rdi32 = *reinterpret_cast<uint64_t*>(rbp33 - 16);
                    rsi34 = *reinterpret_cast<uint64_t*>(rbp35 - 24);
                    rax36 = propagateFloat64NaN(rdi32, rsi34);
                    *reinterpret_cast<uint64_t*>(rbp37 - 8) = rax36;
                    goto addr_afe_9;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp38 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp39 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp40 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp41 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp42 - 68) = *reinterpret_cast<int32_t*>(rbp43 - 68) + 1;
                }
                rdi44 = *reinterpret_cast<int64_t*>(rbp45 - 48);
                fun_9ff(rdi44);
                *reinterpret_cast<int32_t*>(rbp46 - 40) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                goto addr_a9b_20;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp48 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax51 = fun_9ba(rdi49, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                    goto addr_afe_9;
                } else {
                    rdi53 = *reinterpret_cast<uint64_t*>(rbp54 - 16);
                    rsi55 = *reinterpret_cast<uint64_t*>(rbp56 - 24);
                    rax57 = propagateFloat64NaN(rdi53, rsi55);
                    *reinterpret_cast<uint64_t*>(rbp58 - 8) = rax57;
                    goto addr_afe_9;
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
            rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 56);
            *reinterpret_cast<int32_t*>(&rsi67) = *reinterpret_cast<int32_t*>(rbp68 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_966(rdi65, rsi67, rbp69 - 56);
            *reinterpret_cast<int32_t*>(rbp70 - 40) = *reinterpret_cast<int32_t*>(rbp71 - 32);
            goto addr_a9b_20;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp72 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp73 - 8) = *reinterpret_cast<int64_t*>(rbp74 - 16);
                goto addr_afe_9;
            } else {
                rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
                rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
                rax79 = propagateFloat64NaN(rdi75, rsi77);
                *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
                goto addr_afe_9;
            }
        }
    }
    addr_aeb_34:
    *reinterpret_cast<int32_t*>(&rdi81) = *reinterpret_cast<int32_t*>(rbp82 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi83) = *reinterpret_cast<int32_t*>(rbp84 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi83) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx85 = *reinterpret_cast<int64_t*>(rbp86 - 64);
    rax87 = fun_afa(rdi81, rsi83, rdx85);
    *reinterpret_cast<int64_t*>(rbp88 - 8) = rax87;
    addr_afe_9:
    goto v89;
    addr_a9b_20:
    *reinterpret_cast<uint64_t*>(rbp90 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 48);
    *reinterpret_cast<int64_t*>(rbp92 - 64) = *reinterpret_cast<int64_t*>(rbp93 - 48) + *reinterpret_cast<int64_t*>(rbp94 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp95 - 40) = *reinterpret_cast<int32_t*>(rbp96 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp97 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp98 - 64) = *reinterpret_cast<int64_t*>(rbp99 - 48) + *reinterpret_cast<int64_t*>(rbp100 - 56);
        *reinterpret_cast<int32_t*>(rbp101 - 40) = *reinterpret_cast<int32_t*>(rbp102 - 40) + 1;
    }
    goto addr_aeb_34;
}

uint32_t fun_b4d(uint64_t rdi) {
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
        fun_b8d(16);
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

int64_t fun_c35(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
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
    int64_t rax38;
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
    int64_t rdi50;
    int64_t rbp51;
    int64_t rsi52;
    int64_t rbp53;
    int64_t rdx54;
    int64_t rbp55;
    int64_t rax56;
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
    int64_t rdi68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rax73;
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
    int64_t rdi86;
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
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_c42(rdi4);
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
                    goto addr_cfd_8;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp23 - 48) | *reinterpret_cast<uint64_t*>(rbp24 - 56)) == gettimeofday) {
                    fun_cc4(16);
                    *reinterpret_cast<int64_t*>(rbp25 - 8) = 0x7fffffffffffffff;
                    goto addr_ea9_12;
                } else {
                    rdi26 = *reinterpret_cast<uint64_t*>(rbp27 - 16);
                    rsi28 = *reinterpret_cast<uint64_t*>(rbp29 - 24);
                    rax30 = propagateFloat64NaN(rdi26, rsi28);
                    *reinterpret_cast<uint64_t*>(rbp31 - 8) = rax30;
                    goto addr_ea9_12;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp32 - 36) != 0x7ff) 
                goto addr_d86_16; else 
                goto addr_d48_17;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp33 - 32) != 0x7ff) 
            goto addr_e2f_20; else 
            goto addr_e01_21;
    }
    if (*reinterpret_cast<uint64_t*>(rbp34 - 48) >= *reinterpret_cast<uint64_t*>(rbp35 - 56)) {
        rax36 = gd1c;
        *reinterpret_cast<uint32_t*>(&rdi37) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax36 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax38 = fun_d32(rdi37);
        *reinterpret_cast<int64_t*>(rbp39 - 8) = rax38;
    } else {
        goto addr_dd4_26;
    }
    addr_ea9_12:
    goto v40;
    addr_dd4_26:
    *reinterpret_cast<int64_t*>(rbp41 - 64) = *reinterpret_cast<int64_t*>(rbp42 - 56) - *reinterpret_cast<int64_t*>(rbp43 - 48);
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 36);
    *reinterpret_cast<uint32_t*>(rbp46 - 28) = *reinterpret_cast<uint32_t*>(rbp47 - 28) ^ 1;
    addr_e8d_27:
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi50) = *reinterpret_cast<int32_t*>(rbp51 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi52) = *reinterpret_cast<int32_t*>(rbp53 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi52) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx54 = *reinterpret_cast<int64_t*>(rbp55 - 64);
    rax56 = fun_ea5(rdi50, rsi52, rdx54);
    *reinterpret_cast<int64_t*>(rbp57 - 8) = rax56;
    goto addr_ea9_12;
    addr_cfd_8:
    addr_e7b_29:
    *reinterpret_cast<int64_t*>(rbp58 - 64) = *reinterpret_cast<int64_t*>(rbp59 - 48) - *reinterpret_cast<int64_t*>(rbp60 - 56);
    *reinterpret_cast<int32_t*>(rbp61 - 40) = *reinterpret_cast<int32_t*>(rbp62 - 32);
    goto addr_e8d_27;
    addr_d86_16:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp63 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp64 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp65 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp66 - 68) = *reinterpret_cast<int32_t*>(rbp67 - 68) + 1;
    }
    rdi68 = *reinterpret_cast<int64_t*>(rbp69 - 48);
    fun_dc2(rdi68);
    *reinterpret_cast<uint64_t*>(rbp70 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp71 - 56);
    goto addr_dd4_26;
    addr_d48_17:
    if (*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) {
        rax73 = fun_d7d();
        *reinterpret_cast<int64_t*>(rbp74 - 8) = rax73;
        goto addr_ea9_12;
    } else {
        rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
        rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
        rax79 = propagateFloat64NaN(rdi75, rsi77);
        *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
        goto addr_ea9_12;
    }
    addr_e2f_20:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp81 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp82 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp83 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp84 - 68) = *reinterpret_cast<int32_t*>(rbp85 - 68) - 1;
    }
    rdi86 = *reinterpret_cast<int64_t*>(rbp87 - 56);
    *reinterpret_cast<int32_t*>(&rsi88) = *reinterpret_cast<int32_t*>(rbp89 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_e69(rdi86, rsi88, rbp90 - 56);
    *reinterpret_cast<uint64_t*>(rbp91 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp92 - 48);
    goto addr_e7b_29;
    addr_e01_21:
    if (*reinterpret_cast<int64_t*>(rbp93 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp94 - 8) = *reinterpret_cast<int64_t*>(rbp95 - 16);
        goto addr_ea9_12;
    } else {
        rdi96 = *reinterpret_cast<uint64_t*>(rbp97 - 16);
        rsi98 = *reinterpret_cast<uint64_t*>(rbp99 - 24);
        rax100 = propagateFloat64NaN(rdi96, rsi98);
        *reinterpret_cast<uint64_t*>(rbp101 - 8) = rax100;
        goto addr_ea9_12;
    }
}

int32_t fun_f56(int64_t rdi) {
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
    int64_t rdi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rax47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
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
    int64_t rdi96;
    int64_t rbp97;
    int64_t rsi98;
    int64_t rbp99;
    int64_t rdx100;
    int64_t rbp101;
    int64_t rax102;
    int64_t rbp103;
    int64_t v104;

    *reinterpret_cast<int32_t*>(rbp2 - 40) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_f62(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_f6e(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 64) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_f7b(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 44) = eax14;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_f87(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 32) = eax18;
    *reinterpret_cast<uint32_t*>(rbp20 - 36) = *reinterpret_cast<uint32_t*>(rbp21 - 28) ^ *reinterpret_cast<uint32_t*>(rbp22 - 32);
    if (*reinterpret_cast<int32_t*>(rbp23 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp24 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp25 - 40) == gettimeofday)) {
                addr_10d6_8:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 44) == gettimeofday)) {
                    addr_1113_9:
                    *reinterpret_cast<int32_t*>(rbp27 - 48) = *reinterpret_cast<int32_t*>(rbp28 - 40) + *reinterpret_cast<int32_t*>(rbp29 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp30 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp31 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp32 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp33 - 64)) << 11;
                    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 56);
                    rsi36 = *reinterpret_cast<int64_t*>(rbp37 - 64);
                    fun_1162(rdi34, rsi36, rbp38 - 72, rbp39 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp40 - 64) == gettimeofday)) {
                        rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 64);
                        fun_1113(rdi41, rbp43 - 44, rbp44 - 64);
                        goto addr_1113_9;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax47 = fun_10f9(rdi45);
                        *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                        goto addr_11b4_14;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp49 - 56) == gettimeofday)) {
                    rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 56);
                    fun_10d6(rdi50, rbp52 - 40, rbp53 - 56);
                    goto addr_10d6_8;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi54) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax56 = fun_10bc(rdi54);
                    *reinterpret_cast<int64_t*>(rbp57 - 8) = rax56;
                    goto addr_11b4_14;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp58 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp59 - 40))) | *reinterpret_cast<uint64_t*>(rbp60 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax63 = fun_1090(rdi61, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                    goto addr_11b4_14;
                } else {
                    fun_106c(16);
                    *reinterpret_cast<int64_t*>(rbp65 - 8) = 0x7fffffffffffffff;
                    goto addr_11b4_14;
                }
            } else {
                rdi66 = *reinterpret_cast<uint64_t*>(rbp67 - 16);
                rsi68 = *reinterpret_cast<uint64_t*>(rbp69 - 24);
                rax70 = propagateFloat64NaN(rdi66, rsi68);
                *reinterpret_cast<uint64_t*>(rbp71 - 8) = rax70;
                goto addr_11b4_14;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp73 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp74 - 64) != gettimeofday) {
            rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
            rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
            rax79 = propagateFloat64NaN(rdi75, rsi77);
            *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
            goto addr_11b4_14;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp81 - 44))) | *reinterpret_cast<uint64_t*>(rbp82 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi83) = *reinterpret_cast<int32_t*>(rbp84 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi83) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax85 = fun_1019(rdi83, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp86 - 8) = rax85;
                goto addr_11b4_14;
            } else {
                fun_ff5(16);
                *reinterpret_cast<int64_t*>(rbp87 - 8) = 0x7fffffffffffffff;
                goto addr_11b4_14;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp88 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp89 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp90 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp91 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp92 - 72) = *reinterpret_cast<int64_t*>(rbp93 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp94 - 48) = *reinterpret_cast<int32_t*>(rbp95 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi96) = *reinterpret_cast<int32_t*>(rbp97 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi96) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi98) = *reinterpret_cast<int32_t*>(rbp99 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi98) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx100 = *reinterpret_cast<int64_t*>(rbp101 - 72);
    rax102 = fun_11b0(rdi96, rsi98, rdx100);
    *reinterpret_cast<int64_t*>(rbp103 - 8) = rax102;
    addr_11b4_14:
    goto v104;
}

int32_t fun_11f2(int64_t rdi) {
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
    uint64_t rcx31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t rax46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rdi55;
    int64_t rbp56;
    int64_t rax57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rax63;
    int64_t rbp64;
    uint64_t rdi65;
    int64_t rbp66;
    uint64_t rsi67;
    int64_t rbp68;
    uint64_t rax69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rax75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    uint64_t rdi79;
    int64_t rbp80;
    uint64_t rsi81;
    int64_t rbp82;
    uint64_t rax83;
    int64_t rbp84;
    uint64_t rdi85;
    int64_t rbp86;
    uint64_t rsi87;
    int64_t rbp88;
    uint64_t rax89;
    int64_t rbp90;
    uint64_t rdi91;
    int64_t rbp92;
    uint64_t rdx93;
    int64_t rbp94;
    uint64_t rax95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rdi98;
    int64_t rbp99;
    int64_t rsi100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    int64_t rdi104;
    int64_t rbp105;
    int64_t rdx106;
    int64_t rbp107;
    int64_t rbp108;
    int64_t r8_109;
    int64_t rbp110;
    int64_t r9_111;
    int64_t rbp112;
    int64_t rbp113;
    int64_t rbp114;
    int64_t rbp115;
    int64_t rdi116;
    int64_t rbp117;
    int64_t rsi118;
    int64_t rbp119;
    int64_t rbp120;
    int64_t rbp121;
    int64_t rbp122;
    int64_t rbp123;
    int64_t rbp124;
    int64_t rbp125;
    int64_t rdi126;
    int64_t rbp127;
    int64_t rsi128;
    int64_t rbp129;
    int64_t rdx130;
    int64_t rbp131;
    int64_t rax132;
    int64_t rbp133;
    int64_t v134;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 28) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    rax7 = fun_11fe(rdi5);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    eax11 = fun_120b(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 44) = eax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    eax15 = fun_1217(rdi13);
    *reinterpret_cast<int32_t*>(rbp16 - 32) = eax15;
    *reinterpret_cast<uint32_t*>(rbp17 - 36) = *reinterpret_cast<uint32_t*>(rbp18 - 28) ^ *reinterpret_cast<uint32_t*>(rbp19 - 32);
    if (*reinterpret_cast<int32_t*>(rbp20 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp21 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 44) == gettimeofday)) {
                addr_1374_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 40) == gettimeofday)) {
                    addr_13b1_8:
                    *reinterpret_cast<int32_t*>(rbp24 - 48) = *reinterpret_cast<int32_t*>(rbp25 - 40) - *reinterpret_cast<int32_t*>(rbp26 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp27 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp28 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp29 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp30 - 64)) << 11;
                    rcx31 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp32 - 56) + *reinterpret_cast<int64_t*>(rbp33 - 56));
                    if (*reinterpret_cast<uint64_t*>(rbp34 - 64) <= rcx31) {
                        *reinterpret_cast<uint64_t*>(rbp35 - 56) = *reinterpret_cast<uint64_t*>(rbp36 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp37 - 48) = *reinterpret_cast<int32_t*>(rbp38 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp39 - 56) == gettimeofday)) {
                        rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 56);
                        fun_13b1(rdi40, rbp42 - 40, rbp43 - 56);
                        goto addr_13b1_8;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi44) = *reinterpret_cast<int32_t*>(rbp45 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax46 = fun_1397(rdi44);
                        *reinterpret_cast<int64_t*>(rbp47 - 8) = rax46;
                        goto addr_14d3_14;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp48 - 64) == gettimeofday)) {
                    rdi49 = *reinterpret_cast<int64_t*>(rbp50 - 64);
                    fun_1374(rdi49, rbp51 - 44, rbp52 - 64);
                    goto addr_1374_7;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp53 - 40))) | *reinterpret_cast<uint64_t*>(rbp54 - 56)) == gettimeofday)) {
                        fun_1349(2);
                        *reinterpret_cast<int32_t*>(&rdi55) = *reinterpret_cast<int32_t*>(rbp56 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi55) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax57 = fun_135a(rdi55, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp58 - 8) = rax57;
                        goto addr_14d3_14;
                    } else {
                        fun_132c(16);
                        *reinterpret_cast<int64_t*>(rbp59 - 8) = 0x7fffffffffffffff;
                        goto addr_14d3_14;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp60 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax63 = fun_12f2(rdi61);
                *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                goto addr_14d3_14;
            } else {
                rdi65 = *reinterpret_cast<uint64_t*>(rbp66 - 16);
                rsi67 = *reinterpret_cast<uint64_t*>(rbp68 - 24);
                rax69 = propagateFloat64NaN(rdi65, rsi67);
                *reinterpret_cast<uint64_t*>(rbp70 - 8) = rax69;
                goto addr_14d3_14;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp71 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp72 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi73) = *reinterpret_cast<int32_t*>(rbp74 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi73) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax75 = fun_12ad(rdi73, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp76 - 8) = rax75;
                goto addr_14d3_14;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp77 - 64) == gettimeofday) {
                    fun_1289(16);
                    *reinterpret_cast<int64_t*>(rbp78 - 8) = 0x7fffffffffffffff;
                    goto addr_14d3_14;
                } else {
                    rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
                    rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
                    rax83 = propagateFloat64NaN(rdi79, rsi81);
                    *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
                    goto addr_14d3_14;
                }
            }
        } else {
            rdi85 = *reinterpret_cast<uint64_t*>(rbp86 - 16);
            rsi87 = *reinterpret_cast<uint64_t*>(rbp88 - 24);
            rax89 = propagateFloat64NaN(rdi85, rsi87);
            *reinterpret_cast<uint64_t*>(rbp90 - 8) = rax89;
            goto addr_14d3_14;
        }
    }
    rdi91 = *reinterpret_cast<uint64_t*>(rbp92 - 56);
    rdx93 = *reinterpret_cast<uint64_t*>(rbp94 - 64);
    rax95 = estimateDiv128To64(rdi91, gettimeofday, rdx93);
    *reinterpret_cast<uint64_t*>(rbp96 - 72) = rax95;
    if ((*reinterpret_cast<uint64_t*>(rbp97 - 72) & 0x1ff) <= 2) {
        rdi98 = *reinterpret_cast<int64_t*>(rbp99 - 64);
        rsi100 = *reinterpret_cast<int64_t*>(rbp101 - 72);
        fun_1453(rdi98, rsi100, rbp102 - 96, rbp103 - 0x68);
        rdi104 = *reinterpret_cast<int64_t*>(rbp105 - 56);
        rdx106 = *reinterpret_cast<int64_t*>(rbp107 - 96);
        rcx31 = *reinterpret_cast<uint64_t*>(rbp108 - 0x68);
        r8_109 = rbp110 - 80;
        r9_111 = rbp112 - 88;
        fun_1470(rdi104, gettimeofday, rdx106, rcx31, r8_109, r9_111, v2);
        while (*reinterpret_cast<int64_t*>(rbp113 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp114 - 72) = *reinterpret_cast<int64_t*>(rbp115 - 72) - 1;
            rdi116 = *reinterpret_cast<int64_t*>(rbp117 - 80);
            rsi118 = *reinterpret_cast<int64_t*>(rbp119 - 88);
            rcx31 = *reinterpret_cast<uint64_t*>(rbp120 - 64);
            r8_109 = rbp121 - 80;
            r9_111 = rbp122 - 88;
            fun_14a4(rdi116, rsi118, gettimeofday, rcx31, r8_109, r9_111, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp123 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp124 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp125 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi126) = *reinterpret_cast<int32_t*>(rbp127 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi126) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi128) = *reinterpret_cast<int32_t*>(rbp129 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi128) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx130 = *reinterpret_cast<int64_t*>(rbp131 - 72);
    rax132 = fun_14cf(rdi126, rsi128, rdx130, rcx31, r8_109, r9_111, v2);
    *reinterpret_cast<int64_t*>(rbp133 - 8) = rax132;
    addr_14d3_14:
    goto v134;
}

int32_t fun_8c2(int64_t rdi) {
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
    int64_t rax22;
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
    int64_t rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rax47;
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
    int64_t rdi61;
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
    int64_t rdi77;
    int64_t rbp78;
    int64_t rsi79;
    int64_t rbp80;
    int64_t rdx81;
    int64_t rbp82;
    int64_t rax83;
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
                    rax22 = fun_a6c(rdi20);
                    *reinterpret_cast<int64_t*>(rbp23 - 8) = rax22;
                    goto addr_afe_8;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp24 - 48) | *reinterpret_cast<uint64_t*>(rbp25 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp26 - 8) = *reinterpret_cast<int64_t*>(rbp27 - 16);
                    goto addr_afe_8;
                } else {
                    rdi28 = *reinterpret_cast<uint64_t*>(rbp29 - 16);
                    rsi30 = *reinterpret_cast<uint64_t*>(rbp31 - 24);
                    rax32 = propagateFloat64NaN(rdi28, rsi30);
                    *reinterpret_cast<uint64_t*>(rbp33 - 8) = rax32;
                    goto addr_afe_8;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp34 - 36) != 0x7ff) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp35 - 32) == gettimeofday)) {
                    *reinterpret_cast<uint64_t*>(rbp36 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp37 - 48);
                } else {
                    *reinterpret_cast<int32_t*>(rbp38 - 68) = *reinterpret_cast<int32_t*>(rbp39 - 68) + 1;
                }
                rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 48);
                fun_9ff(rdi40);
                *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                goto addr_a9b_19;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp44 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax47 = fun_9ba(rdi45, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                    goto addr_afe_8;
                } else {
                    rdi49 = *reinterpret_cast<uint64_t*>(rbp50 - 16);
                    rsi51 = *reinterpret_cast<uint64_t*>(rbp52 - 24);
                    rax53 = propagateFloat64NaN(rdi49, rsi51);
                    *reinterpret_cast<uint64_t*>(rbp54 - 8) = rax53;
                    goto addr_afe_8;
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
            rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 56);
            *reinterpret_cast<int32_t*>(&rsi63) = *reinterpret_cast<int32_t*>(rbp64 - 68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi63) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_966(rdi61, rsi63, rbp65 - 56);
            *reinterpret_cast<int32_t*>(rbp66 - 40) = *reinterpret_cast<int32_t*>(rbp67 - 32);
            goto addr_a9b_19;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp68 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp69 - 8) = *reinterpret_cast<int64_t*>(rbp70 - 16);
                goto addr_afe_8;
            } else {
                rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
                rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
                rax75 = propagateFloat64NaN(rdi71, rsi73);
                *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
                goto addr_afe_8;
            }
        }
    }
    addr_aeb_33:
    *reinterpret_cast<int32_t*>(&rdi77) = *reinterpret_cast<int32_t*>(rbp78 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi79) = *reinterpret_cast<int32_t*>(rbp80 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi79) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx81 = *reinterpret_cast<int64_t*>(rbp82 - 64);
    rax83 = fun_afa(rdi77, rsi79, rdx81);
    *reinterpret_cast<int64_t*>(rbp84 - 8) = rax83;
    addr_afe_8:
    goto v85;
    addr_a9b_19:
    *reinterpret_cast<uint64_t*>(rbp86 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 48);
    *reinterpret_cast<int64_t*>(rbp88 - 64) = *reinterpret_cast<int64_t*>(rbp89 - 48) + *reinterpret_cast<int64_t*>(rbp90 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp91 - 40) = *reinterpret_cast<int32_t*>(rbp92 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp93 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp94 - 64) = *reinterpret_cast<int64_t*>(rbp95 - 48) + *reinterpret_cast<int64_t*>(rbp96 - 56);
        *reinterpret_cast<int32_t*>(rbp97 - 40) = *reinterpret_cast<int32_t*>(rbp98 - 40) + 1;
    }
    goto addr_aeb_33;
}

int32_t fun_c42(int64_t rdi) {
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
    int64_t rax34;
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
    int64_t rdi46;
    int64_t rbp47;
    int64_t rsi48;
    int64_t rbp49;
    int64_t rdx50;
    int64_t rbp51;
    int64_t rax52;
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
    int64_t rdi64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rax69;
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
    int64_t rdi82;
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
                    goto addr_cfd_7;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp19 - 48) | *reinterpret_cast<uint64_t*>(rbp20 - 56)) == gettimeofday) {
                    fun_cc4(16);
                    *reinterpret_cast<int64_t*>(rbp21 - 8) = 0x7fffffffffffffff;
                    goto addr_ea9_11;
                } else {
                    rdi22 = *reinterpret_cast<uint64_t*>(rbp23 - 16);
                    rsi24 = *reinterpret_cast<uint64_t*>(rbp25 - 24);
                    rax26 = propagateFloat64NaN(rdi22, rsi24);
                    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
                    goto addr_ea9_11;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp28 - 36) != 0x7ff) 
                goto addr_d86_15; else 
                goto addr_d48_16;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp29 - 32) != 0x7ff) 
            goto addr_e2f_19; else 
            goto addr_e01_20;
    }
    if (*reinterpret_cast<uint64_t*>(rbp30 - 48) >= *reinterpret_cast<uint64_t*>(rbp31 - 56)) {
        rax32 = gd1c;
        *reinterpret_cast<uint32_t*>(&rdi33) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax32 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax34 = fun_d32(rdi33);
        *reinterpret_cast<int64_t*>(rbp35 - 8) = rax34;
    } else {
        goto addr_dd4_25;
    }
    addr_ea9_11:
    goto v36;
    addr_dd4_25:
    *reinterpret_cast<int64_t*>(rbp37 - 64) = *reinterpret_cast<int64_t*>(rbp38 - 56) - *reinterpret_cast<int64_t*>(rbp39 - 48);
    *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 36);
    *reinterpret_cast<uint32_t*>(rbp42 - 28) = *reinterpret_cast<uint32_t*>(rbp43 - 28) ^ 1;
    addr_e8d_26:
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi46) = *reinterpret_cast<int32_t*>(rbp47 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi48) = *reinterpret_cast<int32_t*>(rbp49 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx50 = *reinterpret_cast<int64_t*>(rbp51 - 64);
    rax52 = fun_ea5(rdi46, rsi48, rdx50);
    *reinterpret_cast<int64_t*>(rbp53 - 8) = rax52;
    goto addr_ea9_11;
    addr_cfd_7:
    addr_e7b_28:
    *reinterpret_cast<int64_t*>(rbp54 - 64) = *reinterpret_cast<int64_t*>(rbp55 - 48) - *reinterpret_cast<int64_t*>(rbp56 - 56);
    *reinterpret_cast<int32_t*>(rbp57 - 40) = *reinterpret_cast<int32_t*>(rbp58 - 32);
    goto addr_e8d_26;
    addr_d86_15:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp59 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp60 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp61 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp62 - 68) = *reinterpret_cast<int32_t*>(rbp63 - 68) + 1;
    }
    rdi64 = *reinterpret_cast<int64_t*>(rbp65 - 48);
    fun_dc2(rdi64);
    *reinterpret_cast<uint64_t*>(rbp66 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp67 - 56);
    goto addr_dd4_25;
    addr_d48_16:
    if (*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) {
        rax69 = fun_d7d();
        *reinterpret_cast<int64_t*>(rbp70 - 8) = rax69;
        goto addr_ea9_11;
    } else {
        rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
        rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
        rax75 = propagateFloat64NaN(rdi71, rsi73);
        *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
        goto addr_ea9_11;
    }
    addr_e2f_19:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp77 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp80 - 68) = *reinterpret_cast<int32_t*>(rbp81 - 68) - 1;
    }
    rdi82 = *reinterpret_cast<int64_t*>(rbp83 - 56);
    *reinterpret_cast<int32_t*>(&rsi84) = *reinterpret_cast<int32_t*>(rbp85 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi84) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_e69(rdi82, rsi84, rbp86 - 56);
    *reinterpret_cast<uint64_t*>(rbp87 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp88 - 48);
    goto addr_e7b_28;
    addr_e01_20:
    if (*reinterpret_cast<int64_t*>(rbp89 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp90 - 8) = *reinterpret_cast<int64_t*>(rbp91 - 16);
        goto addr_ea9_11;
    } else {
        rdi92 = *reinterpret_cast<uint64_t*>(rbp93 - 16);
        rsi94 = *reinterpret_cast<uint64_t*>(rbp95 - 24);
        rax96 = propagateFloat64NaN(rdi92, rsi94);
        *reinterpret_cast<uint64_t*>(rbp97 - 8) = rax96;
        goto addr_ea9_11;
    }
}

int32_t fun_f62(int64_t rdi) {
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
    int64_t rdi37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rax43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rdi46;
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
    int64_t rdi92;
    int64_t rbp93;
    int64_t rsi94;
    int64_t rbp95;
    int64_t rdx96;
    int64_t rbp97;
    int64_t rax98;
    int64_t rbp99;
    int64_t v100;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    rax6 = fun_f6e(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 64) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_f7b(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 44) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_f87(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint32_t*>(rbp16 - 36) = *reinterpret_cast<uint32_t*>(rbp17 - 28) ^ *reinterpret_cast<uint32_t*>(rbp18 - 32);
    if (*reinterpret_cast<int32_t*>(rbp19 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp20 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp21 - 40) == gettimeofday)) {
                addr_10d6_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 44) == gettimeofday)) {
                    addr_1113_8:
                    *reinterpret_cast<int32_t*>(rbp23 - 48) = *reinterpret_cast<int32_t*>(rbp24 - 40) + *reinterpret_cast<int32_t*>(rbp25 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp26 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp27 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp28 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp29 - 64)) << 11;
                    rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 56);
                    rsi32 = *reinterpret_cast<int64_t*>(rbp33 - 64);
                    fun_1162(rdi30, rsi32, rbp34 - 72, rbp35 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp36 - 64) == gettimeofday)) {
                        rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 64);
                        fun_1113(rdi37, rbp39 - 44, rbp40 - 64);
                        goto addr_1113_8;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi41) = *reinterpret_cast<int32_t*>(rbp42 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax43 = fun_10f9(rdi41);
                        *reinterpret_cast<int64_t*>(rbp44 - 8) = rax43;
                        goto addr_11b4_13;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp45 - 56) == gettimeofday)) {
                    rdi46 = *reinterpret_cast<int64_t*>(rbp47 - 56);
                    fun_10d6(rdi46, rbp48 - 40, rbp49 - 56);
                    goto addr_10d6_7;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi50) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax52 = fun_10bc(rdi50);
                    *reinterpret_cast<int64_t*>(rbp53 - 8) = rax52;
                    goto addr_11b4_13;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp54 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp55 - 40))) | *reinterpret_cast<uint64_t*>(rbp56 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax59 = fun_1090(rdi57, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                    goto addr_11b4_13;
                } else {
                    fun_106c(16);
                    *reinterpret_cast<int64_t*>(rbp61 - 8) = 0x7fffffffffffffff;
                    goto addr_11b4_13;
                }
            } else {
                rdi62 = *reinterpret_cast<uint64_t*>(rbp63 - 16);
                rsi64 = *reinterpret_cast<uint64_t*>(rbp65 - 24);
                rax66 = propagateFloat64NaN(rdi62, rsi64);
                *reinterpret_cast<uint64_t*>(rbp67 - 8) = rax66;
                goto addr_11b4_13;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp69 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp70 - 64) != gettimeofday) {
            rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
            rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
            rax75 = propagateFloat64NaN(rdi71, rsi73);
            *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
            goto addr_11b4_13;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp77 - 44))) | *reinterpret_cast<uint64_t*>(rbp78 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi79) = *reinterpret_cast<int32_t*>(rbp80 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi79) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax81 = fun_1019(rdi79, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp82 - 8) = rax81;
                goto addr_11b4_13;
            } else {
                fun_ff5(16);
                *reinterpret_cast<int64_t*>(rbp83 - 8) = 0x7fffffffffffffff;
                goto addr_11b4_13;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp84 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp85 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp86 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp87 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp88 - 72) = *reinterpret_cast<int64_t*>(rbp89 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp90 - 48) = *reinterpret_cast<int32_t*>(rbp91 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi92) = *reinterpret_cast<int32_t*>(rbp93 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi92) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi94) = *reinterpret_cast<int32_t*>(rbp95 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi94) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx96 = *reinterpret_cast<int64_t*>(rbp97 - 72);
    rax98 = fun_11b0(rdi92, rsi94, rdx96);
    *reinterpret_cast<int64_t*>(rbp99 - 8) = rax98;
    addr_11b4_13:
    goto v100;
}

int64_t fun_11fe(int64_t rdi) {
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
    uint64_t rcx27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rax42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rdi51;
    int64_t rbp52;
    int64_t rax53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rax59;
    int64_t rbp60;
    uint64_t rdi61;
    int64_t rbp62;
    uint64_t rsi63;
    int64_t rbp64;
    uint64_t rax65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rax71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    uint64_t rdi75;
    int64_t rbp76;
    uint64_t rsi77;
    int64_t rbp78;
    uint64_t rax79;
    int64_t rbp80;
    uint64_t rdi81;
    int64_t rbp82;
    uint64_t rsi83;
    int64_t rbp84;
    uint64_t rax85;
    int64_t rbp86;
    uint64_t rdi87;
    int64_t rbp88;
    uint64_t rdx89;
    int64_t rbp90;
    uint64_t rax91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rdi94;
    int64_t rbp95;
    int64_t rsi96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rdi100;
    int64_t rbp101;
    int64_t rdx102;
    int64_t rbp103;
    int64_t rbp104;
    int64_t r8_105;
    int64_t rbp106;
    int64_t r9_107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rbp110;
    int64_t rbp111;
    int64_t rdi112;
    int64_t rbp113;
    int64_t rsi114;
    int64_t rbp115;
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
    int64_t rdx126;
    int64_t rbp127;
    int64_t rax128;
    int64_t rbp129;
    int64_t v130;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    eax7 = fun_120b(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 44) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    eax11 = fun_1217(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 32) = eax11;
    *reinterpret_cast<uint32_t*>(rbp13 - 36) = *reinterpret_cast<uint32_t*>(rbp14 - 28) ^ *reinterpret_cast<uint32_t*>(rbp15 - 32);
    if (*reinterpret_cast<int32_t*>(rbp16 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp17 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 44) == gettimeofday)) {
                addr_1374_6:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp19 - 40) == gettimeofday)) {
                    addr_13b1_7:
                    *reinterpret_cast<int32_t*>(rbp20 - 48) = *reinterpret_cast<int32_t*>(rbp21 - 40) - *reinterpret_cast<int32_t*>(rbp22 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp23 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp24 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp25 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp26 - 64)) << 11;
                    rcx27 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp28 - 56) + *reinterpret_cast<int64_t*>(rbp29 - 56));
                    if (*reinterpret_cast<uint64_t*>(rbp30 - 64) <= rcx27) {
                        *reinterpret_cast<uint64_t*>(rbp31 - 56) = *reinterpret_cast<uint64_t*>(rbp32 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp33 - 48) = *reinterpret_cast<int32_t*>(rbp34 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp35 - 56) == gettimeofday)) {
                        rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 56);
                        fun_13b1(rdi36, rbp38 - 40, rbp39 - 56);
                        goto addr_13b1_7;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<int32_t*>(rbp41 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax42 = fun_1397(rdi40);
                        *reinterpret_cast<int64_t*>(rbp43 - 8) = rax42;
                        goto addr_14d3_13;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp44 - 64) == gettimeofday)) {
                    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
                    fun_1374(rdi45, rbp47 - 44, rbp48 - 64);
                    goto addr_1374_6;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp49 - 40))) | *reinterpret_cast<uint64_t*>(rbp50 - 56)) == gettimeofday)) {
                        fun_1349(2);
                        *reinterpret_cast<int32_t*>(&rdi51) = *reinterpret_cast<int32_t*>(rbp52 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax53 = fun_135a(rdi51, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp54 - 8) = rax53;
                        goto addr_14d3_13;
                    } else {
                        fun_132c(16);
                        *reinterpret_cast<int64_t*>(rbp55 - 8) = 0x7fffffffffffffff;
                        goto addr_14d3_13;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp56 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax59 = fun_12f2(rdi57);
                *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                goto addr_14d3_13;
            } else {
                rdi61 = *reinterpret_cast<uint64_t*>(rbp62 - 16);
                rsi63 = *reinterpret_cast<uint64_t*>(rbp64 - 24);
                rax65 = propagateFloat64NaN(rdi61, rsi63);
                *reinterpret_cast<uint64_t*>(rbp66 - 8) = rax65;
                goto addr_14d3_13;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp67 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp68 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi69) = *reinterpret_cast<int32_t*>(rbp70 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax71 = fun_12ad(rdi69, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp72 - 8) = rax71;
                goto addr_14d3_13;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp73 - 64) == gettimeofday) {
                    fun_1289(16);
                    *reinterpret_cast<int64_t*>(rbp74 - 8) = 0x7fffffffffffffff;
                    goto addr_14d3_13;
                } else {
                    rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
                    rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
                    rax79 = propagateFloat64NaN(rdi75, rsi77);
                    *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
                    goto addr_14d3_13;
                }
            }
        } else {
            rdi81 = *reinterpret_cast<uint64_t*>(rbp82 - 16);
            rsi83 = *reinterpret_cast<uint64_t*>(rbp84 - 24);
            rax85 = propagateFloat64NaN(rdi81, rsi83);
            *reinterpret_cast<uint64_t*>(rbp86 - 8) = rax85;
            goto addr_14d3_13;
        }
    }
    rdi87 = *reinterpret_cast<uint64_t*>(rbp88 - 56);
    rdx89 = *reinterpret_cast<uint64_t*>(rbp90 - 64);
    rax91 = estimateDiv128To64(rdi87, gettimeofday, rdx89);
    *reinterpret_cast<uint64_t*>(rbp92 - 72) = rax91;
    if ((*reinterpret_cast<uint64_t*>(rbp93 - 72) & 0x1ff) <= 2) {
        rdi94 = *reinterpret_cast<int64_t*>(rbp95 - 64);
        rsi96 = *reinterpret_cast<int64_t*>(rbp97 - 72);
        fun_1453(rdi94, rsi96, rbp98 - 96, rbp99 - 0x68);
        rdi100 = *reinterpret_cast<int64_t*>(rbp101 - 56);
        rdx102 = *reinterpret_cast<int64_t*>(rbp103 - 96);
        rcx27 = *reinterpret_cast<uint64_t*>(rbp104 - 0x68);
        r8_105 = rbp106 - 80;
        r9_107 = rbp108 - 88;
        fun_1470(rdi100, gettimeofday, rdx102, rcx27, r8_105, r9_107, v2);
        while (*reinterpret_cast<int64_t*>(rbp109 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp110 - 72) = *reinterpret_cast<int64_t*>(rbp111 - 72) - 1;
            rdi112 = *reinterpret_cast<int64_t*>(rbp113 - 80);
            rsi114 = *reinterpret_cast<int64_t*>(rbp115 - 88);
            rcx27 = *reinterpret_cast<uint64_t*>(rbp116 - 64);
            r8_105 = rbp117 - 80;
            r9_107 = rbp118 - 88;
            fun_14a4(rdi112, rsi114, gettimeofday, rcx27, r8_105, r9_107, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp119 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp120 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp121 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi122) = *reinterpret_cast<int32_t*>(rbp123 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi122) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi124) = *reinterpret_cast<int32_t*>(rbp125 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi124) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx126 = *reinterpret_cast<int64_t*>(rbp127 - 72);
    rax128 = fun_14cf(rdi122, rsi124, rdx126, rcx27, r8_105, r9_107, v2);
    *reinterpret_cast<int64_t*>(rbp129 - 8) = rax128;
    addr_14d3_13:
    goto v130;
}

int64_t fun_1824(int64_t rdi);

int64_t fun_1835(int64_t rdi, int64_t rsi);

int64_t fun_1850(int64_t rdi, int64_t rsi);

int64_t fun_185c(int64_t rdi, int64_t rsi);

int64_t fun_186d(int64_t rdi, int64_t rsi);

int64_t fun_1883(int64_t rdi, int64_t rsi);

int32_t fun_1895(int64_t rdi, int64_t rsi);

void fun_181c(int64_t rdi, int64_t rsi) {
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

    rax4 = fun_1824(rax3);
    *reinterpret_cast<int64_t*>(rbp5 - 32) = rax4;
    do {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 24);
        rsi8 = *reinterpret_cast<int64_t*>(rbp9 - 32);
        rax10 = fun_1835(rdi6, rsi8);
        *reinterpret_cast<int64_t*>(rbp11 - 48) = rax10;
        *reinterpret_cast<int32_t*>(&rdi12) = (*reinterpret_cast<int32_t*>(rbp13 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp14 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax15 = fun_1850(rdi12, rsi8);
        rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
        rax18 = fun_185c(rdi16, rax15);
        *reinterpret_cast<int64_t*>(rbp19 - 24) = rax18;
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 16);
        rsi22 = *reinterpret_cast<int64_t*>(rbp23 - 24);
        rax24 = fun_186d(rdi20, rsi22);
        *reinterpret_cast<int64_t*>(rbp25 - 16) = rax24;
        *reinterpret_cast<int32_t*>(rbp26 - 36) = *reinterpret_cast<int32_t*>(rbp27 - 36) + 1;
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 24);
        rax30 = fun_1883(rdi28, rsi22);
        eax31 = fun_1895(rax30, 0x3ee4f8b588e368f1);
    } while (!reinterpret_cast<int1_t>(eax31 == gettimeofday));
    goto v32;
}

int64_t fun_f6e(int64_t rdi) {
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
    int64_t rdi33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rax39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rdi42;
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
    int64_t rdi88;
    int64_t rbp89;
    int64_t rsi90;
    int64_t rbp91;
    int64_t rdx92;
    int64_t rbp93;
    int64_t rax94;
    int64_t rbp95;
    int64_t v96;

    *reinterpret_cast<int64_t*>(rbp2 - 64) = rax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_f7b(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 44) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_f87(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint32_t*>(rbp12 - 36) = *reinterpret_cast<uint32_t*>(rbp13 - 28) ^ *reinterpret_cast<uint32_t*>(rbp14 - 32);
    if (*reinterpret_cast<int32_t*>(rbp15 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp16 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp17 - 40) == gettimeofday)) {
                addr_10d6_6:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 44) == gettimeofday)) {
                    addr_1113_7:
                    *reinterpret_cast<int32_t*>(rbp19 - 48) = *reinterpret_cast<int32_t*>(rbp20 - 40) + *reinterpret_cast<int32_t*>(rbp21 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp22 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp23 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp24 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp25 - 64)) << 11;
                    rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 56);
                    rsi28 = *reinterpret_cast<int64_t*>(rbp29 - 64);
                    fun_1162(rdi26, rsi28, rbp30 - 72, rbp31 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp32 - 64) == gettimeofday)) {
                        rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 64);
                        fun_1113(rdi33, rbp35 - 44, rbp36 - 64);
                        goto addr_1113_7;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi37) = *reinterpret_cast<int32_t*>(rbp38 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax39 = fun_10f9(rdi37);
                        *reinterpret_cast<int64_t*>(rbp40 - 8) = rax39;
                        goto addr_11b4_12;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp41 - 56) == gettimeofday)) {
                    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 56);
                    fun_10d6(rdi42, rbp44 - 40, rbp45 - 56);
                    goto addr_10d6_6;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi46) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax48 = fun_10bc(rdi46);
                    *reinterpret_cast<int64_t*>(rbp49 - 8) = rax48;
                    goto addr_11b4_12;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp50 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp51 - 40))) | *reinterpret_cast<uint64_t*>(rbp52 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax55 = fun_1090(rdi53, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                    goto addr_11b4_12;
                } else {
                    fun_106c(16);
                    *reinterpret_cast<int64_t*>(rbp57 - 8) = 0x7fffffffffffffff;
                    goto addr_11b4_12;
                }
            } else {
                rdi58 = *reinterpret_cast<uint64_t*>(rbp59 - 16);
                rsi60 = *reinterpret_cast<uint64_t*>(rbp61 - 24);
                rax62 = propagateFloat64NaN(rdi58, rsi60);
                *reinterpret_cast<uint64_t*>(rbp63 - 8) = rax62;
                goto addr_11b4_12;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp64 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp65 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp66 - 64) != gettimeofday) {
            rdi67 = *reinterpret_cast<uint64_t*>(rbp68 - 16);
            rsi69 = *reinterpret_cast<uint64_t*>(rbp70 - 24);
            rax71 = propagateFloat64NaN(rdi67, rsi69);
            *reinterpret_cast<uint64_t*>(rbp72 - 8) = rax71;
            goto addr_11b4_12;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp73 - 44))) | *reinterpret_cast<uint64_t*>(rbp74 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi75) = *reinterpret_cast<int32_t*>(rbp76 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi75) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax77 = fun_1019(rdi75, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp78 - 8) = rax77;
                goto addr_11b4_12;
            } else {
                fun_ff5(16);
                *reinterpret_cast<int64_t*>(rbp79 - 8) = 0x7fffffffffffffff;
                goto addr_11b4_12;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp80 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp81 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp82 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp83 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp84 - 72) = *reinterpret_cast<int64_t*>(rbp85 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp86 - 48) = *reinterpret_cast<int32_t*>(rbp87 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi88) = *reinterpret_cast<int32_t*>(rbp89 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi88) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi90) = *reinterpret_cast<int32_t*>(rbp91 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi90) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx92 = *reinterpret_cast<int64_t*>(rbp93 - 72);
    rax94 = fun_11b0(rdi88, rsi90, rdx92);
    *reinterpret_cast<int64_t*>(rbp95 - 8) = rax94;
    addr_11b4_12:
    goto v96;
}

int32_t fun_120b(int64_t rdi) {
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
    uint64_t rcx23;
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
    int64_t rbp34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rax38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t rax49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rax55;
    int64_t rbp56;
    uint64_t rdi57;
    int64_t rbp58;
    uint64_t rsi59;
    int64_t rbp60;
    uint64_t rax61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rax67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    uint64_t rdi71;
    int64_t rbp72;
    uint64_t rsi73;
    int64_t rbp74;
    uint64_t rax75;
    int64_t rbp76;
    uint64_t rdi77;
    int64_t rbp78;
    uint64_t rsi79;
    int64_t rbp80;
    uint64_t rax81;
    int64_t rbp82;
    uint64_t rdi83;
    int64_t rbp84;
    uint64_t rdx85;
    int64_t rbp86;
    uint64_t rax87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rdi90;
    int64_t rbp91;
    int64_t rsi92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rdi96;
    int64_t rbp97;
    int64_t rdx98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t r8_101;
    int64_t rbp102;
    int64_t r9_103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rbp106;
    int64_t rbp107;
    int64_t rdi108;
    int64_t rbp109;
    int64_t rsi110;
    int64_t rbp111;
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
    int64_t rdx122;
    int64_t rbp123;
    int64_t rax124;
    int64_t rbp125;
    int64_t v126;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 44) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    eax7 = fun_1217(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 32) = eax7;
    *reinterpret_cast<uint32_t*>(rbp9 - 36) = *reinterpret_cast<uint32_t*>(rbp10 - 28) ^ *reinterpret_cast<uint32_t*>(rbp11 - 32);
    if (*reinterpret_cast<int32_t*>(rbp12 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp13 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 44) == gettimeofday)) {
                addr_1374_5:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp15 - 40) == gettimeofday)) {
                    addr_13b1_6:
                    *reinterpret_cast<int32_t*>(rbp16 - 48) = *reinterpret_cast<int32_t*>(rbp17 - 40) - *reinterpret_cast<int32_t*>(rbp18 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp19 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp20 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp21 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp22 - 64)) << 11;
                    rcx23 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp24 - 56) + *reinterpret_cast<int64_t*>(rbp25 - 56));
                    if (*reinterpret_cast<uint64_t*>(rbp26 - 64) <= rcx23) {
                        *reinterpret_cast<uint64_t*>(rbp27 - 56) = *reinterpret_cast<uint64_t*>(rbp28 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp29 - 48) = *reinterpret_cast<int32_t*>(rbp30 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp31 - 56) == gettimeofday)) {
                        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 56);
                        fun_13b1(rdi32, rbp34 - 40, rbp35 - 56);
                        goto addr_13b1_6;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi36) = *reinterpret_cast<int32_t*>(rbp37 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax38 = fun_1397(rdi36);
                        *reinterpret_cast<int64_t*>(rbp39 - 8) = rax38;
                        goto addr_14d3_12;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp40 - 64) == gettimeofday)) {
                    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 64);
                    fun_1374(rdi41, rbp43 - 44, rbp44 - 64);
                    goto addr_1374_5;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp45 - 40))) | *reinterpret_cast<uint64_t*>(rbp46 - 56)) == gettimeofday)) {
                        fun_1349(2);
                        *reinterpret_cast<int32_t*>(&rdi47) = *reinterpret_cast<int32_t*>(rbp48 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax49 = fun_135a(rdi47, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp50 - 8) = rax49;
                        goto addr_14d3_12;
                    } else {
                        fun_132c(16);
                        *reinterpret_cast<int64_t*>(rbp51 - 8) = 0x7fffffffffffffff;
                        goto addr_14d3_12;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp52 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax55 = fun_12f2(rdi53);
                *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                goto addr_14d3_12;
            } else {
                rdi57 = *reinterpret_cast<uint64_t*>(rbp58 - 16);
                rsi59 = *reinterpret_cast<uint64_t*>(rbp60 - 24);
                rax61 = propagateFloat64NaN(rdi57, rsi59);
                *reinterpret_cast<uint64_t*>(rbp62 - 8) = rax61;
                goto addr_14d3_12;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp63 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp64 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax67 = fun_12ad(rdi65, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                goto addr_14d3_12;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp69 - 64) == gettimeofday) {
                    fun_1289(16);
                    *reinterpret_cast<int64_t*>(rbp70 - 8) = 0x7fffffffffffffff;
                    goto addr_14d3_12;
                } else {
                    rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
                    rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
                    rax75 = propagateFloat64NaN(rdi71, rsi73);
                    *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
                    goto addr_14d3_12;
                }
            }
        } else {
            rdi77 = *reinterpret_cast<uint64_t*>(rbp78 - 16);
            rsi79 = *reinterpret_cast<uint64_t*>(rbp80 - 24);
            rax81 = propagateFloat64NaN(rdi77, rsi79);
            *reinterpret_cast<uint64_t*>(rbp82 - 8) = rax81;
            goto addr_14d3_12;
        }
    }
    rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 56);
    rdx85 = *reinterpret_cast<uint64_t*>(rbp86 - 64);
    rax87 = estimateDiv128To64(rdi83, gettimeofday, rdx85);
    *reinterpret_cast<uint64_t*>(rbp88 - 72) = rax87;
    if ((*reinterpret_cast<uint64_t*>(rbp89 - 72) & 0x1ff) <= 2) {
        rdi90 = *reinterpret_cast<int64_t*>(rbp91 - 64);
        rsi92 = *reinterpret_cast<int64_t*>(rbp93 - 72);
        fun_1453(rdi90, rsi92, rbp94 - 96, rbp95 - 0x68);
        rdi96 = *reinterpret_cast<int64_t*>(rbp97 - 56);
        rdx98 = *reinterpret_cast<int64_t*>(rbp99 - 96);
        rcx23 = *reinterpret_cast<uint64_t*>(rbp100 - 0x68);
        r8_101 = rbp102 - 80;
        r9_103 = rbp104 - 88;
        fun_1470(rdi96, gettimeofday, rdx98, rcx23, r8_101, r9_103, v2);
        while (*reinterpret_cast<int64_t*>(rbp105 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp106 - 72) = *reinterpret_cast<int64_t*>(rbp107 - 72) - 1;
            rdi108 = *reinterpret_cast<int64_t*>(rbp109 - 80);
            rsi110 = *reinterpret_cast<int64_t*>(rbp111 - 88);
            rcx23 = *reinterpret_cast<uint64_t*>(rbp112 - 64);
            r8_101 = rbp113 - 80;
            r9_103 = rbp114 - 88;
            fun_14a4(rdi108, rsi110, gettimeofday, rcx23, r8_101, r9_103, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp115 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp116 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp117 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi118) = *reinterpret_cast<int32_t*>(rbp119 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi118) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi120) = *reinterpret_cast<int32_t*>(rbp121 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi120) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx122 = *reinterpret_cast<int64_t*>(rbp123 - 72);
    rax124 = fun_14cf(rdi118, rsi120, rdx122, rcx23, r8_101, r9_103, v2);
    *reinterpret_cast<int64_t*>(rbp125 - 8) = rax124;
    addr_14d3_12:
    goto v126;
}

int64_t fun_1824(int64_t rdi) {
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
        rax8 = fun_1835(rdi4, rsi6);
        *reinterpret_cast<int64_t*>(rbp9 - 48) = rax8;
        *reinterpret_cast<int32_t*>(&rdi10) = (*reinterpret_cast<int32_t*>(rbp11 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp12 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax13 = fun_1850(rdi10, rsi6);
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
        rax16 = fun_185c(rdi14, rax13);
        *reinterpret_cast<int64_t*>(rbp17 - 24) = rax16;
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        rax22 = fun_186d(rdi18, rsi20);
        *reinterpret_cast<int64_t*>(rbp23 - 16) = rax22;
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 24);
        rax28 = fun_1883(rdi26, rsi20);
        eax29 = fun_1895(rax28, 0x3ee4f8b588e368f1);
    } while (!reinterpret_cast<int1_t>(eax29 == gettimeofday));
    goto v30;
}

int32_t fun_f7b(int64_t rdi) {
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
    int64_t rdi29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rax35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rdi38;
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
    int64_t rdi84;
    int64_t rbp85;
    int64_t rsi86;
    int64_t rbp87;
    int64_t rdx88;
    int64_t rbp89;
    int64_t rax90;
    int64_t rbp91;
    int64_t v92;

    *reinterpret_cast<int32_t*>(rbp2 - 44) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_f87(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint32_t*>(rbp8 - 36) = *reinterpret_cast<uint32_t*>(rbp9 - 28) ^ *reinterpret_cast<uint32_t*>(rbp10 - 32);
    if (*reinterpret_cast<int32_t*>(rbp11 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp12 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp13 - 40) == gettimeofday)) {
                addr_10d6_5:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 44) == gettimeofday)) {
                    addr_1113_6:
                    *reinterpret_cast<int32_t*>(rbp15 - 48) = *reinterpret_cast<int32_t*>(rbp16 - 40) + *reinterpret_cast<int32_t*>(rbp17 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp18 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp20 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp21 - 64)) << 11;
                    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 56);
                    rsi24 = *reinterpret_cast<int64_t*>(rbp25 - 64);
                    fun_1162(rdi22, rsi24, rbp26 - 72, rbp27 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp28 - 64) == gettimeofday)) {
                        rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 64);
                        fun_1113(rdi29, rbp31 - 44, rbp32 - 64);
                        goto addr_1113_6;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi33) = *reinterpret_cast<int32_t*>(rbp34 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax35 = fun_10f9(rdi33);
                        *reinterpret_cast<int64_t*>(rbp36 - 8) = rax35;
                        goto addr_11b4_11;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp37 - 56) == gettimeofday)) {
                    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 56);
                    fun_10d6(rdi38, rbp40 - 40, rbp41 - 56);
                    goto addr_10d6_5;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax44 = fun_10bc(rdi42);
                    *reinterpret_cast<int64_t*>(rbp45 - 8) = rax44;
                    goto addr_11b4_11;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp46 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp47 - 40))) | *reinterpret_cast<uint64_t*>(rbp48 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax51 = fun_1090(rdi49, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                    goto addr_11b4_11;
                } else {
                    fun_106c(16);
                    *reinterpret_cast<int64_t*>(rbp53 - 8) = 0x7fffffffffffffff;
                    goto addr_11b4_11;
                }
            } else {
                rdi54 = *reinterpret_cast<uint64_t*>(rbp55 - 16);
                rsi56 = *reinterpret_cast<uint64_t*>(rbp57 - 24);
                rax58 = propagateFloat64NaN(rdi54, rsi56);
                *reinterpret_cast<uint64_t*>(rbp59 - 8) = rax58;
                goto addr_11b4_11;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp60 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp61 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp62 - 64) != gettimeofday) {
            rdi63 = *reinterpret_cast<uint64_t*>(rbp64 - 16);
            rsi65 = *reinterpret_cast<uint64_t*>(rbp66 - 24);
            rax67 = propagateFloat64NaN(rdi63, rsi65);
            *reinterpret_cast<uint64_t*>(rbp68 - 8) = rax67;
            goto addr_11b4_11;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp69 - 44))) | *reinterpret_cast<uint64_t*>(rbp70 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi71) = *reinterpret_cast<int32_t*>(rbp72 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax73 = fun_1019(rdi71, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp74 - 8) = rax73;
                goto addr_11b4_11;
            } else {
                fun_ff5(16);
                *reinterpret_cast<int64_t*>(rbp75 - 8) = 0x7fffffffffffffff;
                goto addr_11b4_11;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp76 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp77 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp78 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp79 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp80 - 72) = *reinterpret_cast<int64_t*>(rbp81 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp82 - 48) = *reinterpret_cast<int32_t*>(rbp83 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi84) = *reinterpret_cast<int32_t*>(rbp85 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi84) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi86) = *reinterpret_cast<int32_t*>(rbp87 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi86) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx88 = *reinterpret_cast<int64_t*>(rbp89 - 72);
    rax90 = fun_11b0(rdi84, rsi86, rdx88);
    *reinterpret_cast<int64_t*>(rbp91 - 8) = rax90;
    addr_11b4_11:
    goto v92;
}

int32_t fun_1217(int64_t rdi) {
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
    uint64_t rcx19;
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
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rax34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rax45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rax51;
    int64_t rbp52;
    uint64_t rdi53;
    int64_t rbp54;
    uint64_t rsi55;
    int64_t rbp56;
    uint64_t rax57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rax63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    uint64_t rdi67;
    int64_t rbp68;
    uint64_t rsi69;
    int64_t rbp70;
    uint64_t rax71;
    int64_t rbp72;
    uint64_t rdi73;
    int64_t rbp74;
    uint64_t rsi75;
    int64_t rbp76;
    uint64_t rax77;
    int64_t rbp78;
    uint64_t rdi79;
    int64_t rbp80;
    uint64_t rdx81;
    int64_t rbp82;
    uint64_t rax83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rdi86;
    int64_t rbp87;
    int64_t rsi88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rdi92;
    int64_t rbp93;
    int64_t rdx94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t r8_97;
    int64_t rbp98;
    int64_t r9_99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    int64_t rdi104;
    int64_t rbp105;
    int64_t rsi106;
    int64_t rbp107;
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
    int64_t rdx118;
    int64_t rbp119;
    int64_t rax120;
    int64_t rbp121;
    int64_t v122;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 32) = eax4;
    *reinterpret_cast<uint32_t*>(rbp5 - 36) = *reinterpret_cast<uint32_t*>(rbp6 - 28) ^ *reinterpret_cast<uint32_t*>(rbp7 - 32);
    if (*reinterpret_cast<int32_t*>(rbp8 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp9 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp10 - 44) == gettimeofday)) {
                addr_1374_4:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 40) == gettimeofday)) {
                    addr_13b1_5:
                    *reinterpret_cast<int32_t*>(rbp12 - 48) = *reinterpret_cast<int32_t*>(rbp13 - 40) - *reinterpret_cast<int32_t*>(rbp14 - 44) + 0x3fd;
                    *reinterpret_cast<uint64_t*>(rbp15 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp16 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp17 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp18 - 64)) << 11;
                    rcx19 = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(rbp20 - 56) + *reinterpret_cast<int64_t*>(rbp21 - 56));
                    if (*reinterpret_cast<uint64_t*>(rbp22 - 64) <= rcx19) {
                        *reinterpret_cast<uint64_t*>(rbp23 - 56) = *reinterpret_cast<uint64_t*>(rbp24 - 56) >> 1;
                        *reinterpret_cast<int32_t*>(rbp25 - 48) = *reinterpret_cast<int32_t*>(rbp26 - 48) + 1;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp27 - 56) == gettimeofday)) {
                        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 56);
                        fun_13b1(rdi28, rbp30 - 40, rbp31 - 56);
                        goto addr_13b1_5;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi32) = *reinterpret_cast<int32_t*>(rbp33 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax34 = fun_1397(rdi32);
                        *reinterpret_cast<int64_t*>(rbp35 - 8) = rax34;
                        goto addr_14d3_11;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp36 - 64) == gettimeofday)) {
                    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 64);
                    fun_1374(rdi37, rbp39 - 44, rbp40 - 64);
                    goto addr_1374_4;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp41 - 40))) | *reinterpret_cast<uint64_t*>(rbp42 - 56)) == gettimeofday)) {
                        fun_1349(2);
                        *reinterpret_cast<int32_t*>(&rdi43) = *reinterpret_cast<int32_t*>(rbp44 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax45 = fun_135a(rdi43, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp46 - 8) = rax45;
                        goto addr_14d3_11;
                    } else {
                        fun_132c(16);
                        *reinterpret_cast<int64_t*>(rbp47 - 8) = 0x7fffffffffffffff;
                        goto addr_14d3_11;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp48 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax51 = fun_12f2(rdi49);
                *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                goto addr_14d3_11;
            } else {
                rdi53 = *reinterpret_cast<uint64_t*>(rbp54 - 16);
                rsi55 = *reinterpret_cast<uint64_t*>(rbp56 - 24);
                rax57 = propagateFloat64NaN(rdi53, rsi55);
                *reinterpret_cast<uint64_t*>(rbp58 - 8) = rax57;
                goto addr_14d3_11;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp59 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp60 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax63 = fun_12ad(rdi61, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                goto addr_14d3_11;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp65 - 64) == gettimeofday) {
                    fun_1289(16);
                    *reinterpret_cast<int64_t*>(rbp66 - 8) = 0x7fffffffffffffff;
                    goto addr_14d3_11;
                } else {
                    rdi67 = *reinterpret_cast<uint64_t*>(rbp68 - 16);
                    rsi69 = *reinterpret_cast<uint64_t*>(rbp70 - 24);
                    rax71 = propagateFloat64NaN(rdi67, rsi69);
                    *reinterpret_cast<uint64_t*>(rbp72 - 8) = rax71;
                    goto addr_14d3_11;
                }
            }
        } else {
            rdi73 = *reinterpret_cast<uint64_t*>(rbp74 - 16);
            rsi75 = *reinterpret_cast<uint64_t*>(rbp76 - 24);
            rax77 = propagateFloat64NaN(rdi73, rsi75);
            *reinterpret_cast<uint64_t*>(rbp78 - 8) = rax77;
            goto addr_14d3_11;
        }
    }
    rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 56);
    rdx81 = *reinterpret_cast<uint64_t*>(rbp82 - 64);
    rax83 = estimateDiv128To64(rdi79, gettimeofday, rdx81);
    *reinterpret_cast<uint64_t*>(rbp84 - 72) = rax83;
    if ((*reinterpret_cast<uint64_t*>(rbp85 - 72) & 0x1ff) <= 2) {
        rdi86 = *reinterpret_cast<int64_t*>(rbp87 - 64);
        rsi88 = *reinterpret_cast<int64_t*>(rbp89 - 72);
        fun_1453(rdi86, rsi88, rbp90 - 96, rbp91 - 0x68);
        rdi92 = *reinterpret_cast<int64_t*>(rbp93 - 56);
        rdx94 = *reinterpret_cast<int64_t*>(rbp95 - 96);
        rcx19 = *reinterpret_cast<uint64_t*>(rbp96 - 0x68);
        r8_97 = rbp98 - 80;
        r9_99 = rbp100 - 88;
        fun_1470(rdi92, gettimeofday, rdx94, rcx19, r8_97, r9_99, v2);
        while (*reinterpret_cast<int64_t*>(rbp101 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp102 - 72) = *reinterpret_cast<int64_t*>(rbp103 - 72) - 1;
            rdi104 = *reinterpret_cast<int64_t*>(rbp105 - 80);
            rsi106 = *reinterpret_cast<int64_t*>(rbp107 - 88);
            rcx19 = *reinterpret_cast<uint64_t*>(rbp108 - 64);
            r8_97 = rbp109 - 80;
            r9_99 = rbp110 - 88;
            fun_14a4(rdi104, rsi106, gettimeofday, rcx19, r8_97, r9_99, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp111 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp112 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp113 - 72);
    }
    *reinterpret_cast<int32_t*>(&rdi114) = *reinterpret_cast<int32_t*>(rbp115 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi114) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi116) = *reinterpret_cast<int32_t*>(rbp117 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi116) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx118 = *reinterpret_cast<int64_t*>(rbp119 - 72);
    rax120 = fun_14cf(rdi114, rsi116, rdx118, rcx19, r8_97, r9_99, v2);
    *reinterpret_cast<int64_t*>(rbp121 - 8) = rax120;
    addr_14d3_11:
    goto v122;
}

int64_t fun_1835(int64_t rdi, int64_t rsi) {
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
        rax8 = fun_1850(rdi5, rsi);
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
        rax11 = fun_185c(rdi9, rax8);
        *reinterpret_cast<int64_t*>(rbp12 - 24) = rax11;
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 16);
        rsi15 = *reinterpret_cast<int64_t*>(rbp16 - 24);
        rax17 = fun_186d(rdi13, rsi15);
        *reinterpret_cast<int64_t*>(rbp18 - 16) = rax17;
        *reinterpret_cast<int32_t*>(rbp19 - 36) = *reinterpret_cast<int32_t*>(rbp20 - 36) + 1;
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
        rax23 = fun_1883(rdi21, rsi15);
        eax24 = fun_1895(rax23, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax24 == gettimeofday)) 
            break;
        rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 24);
        rsi27 = *reinterpret_cast<int64_t*>(rbp28 - 32);
        rax4 = fun_1835(rdi25, rsi27);
    }
    goto v29;
}

int32_t fun_f87(int64_t rdi) {
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
    int64_t rdi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rdi34;
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
    int64_t rdi80;
    int64_t rbp81;
    int64_t rsi82;
    int64_t rbp83;
    int64_t rdx84;
    int64_t rbp85;
    int64_t rax86;
    int64_t rbp87;
    int64_t v88;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    *reinterpret_cast<uint32_t*>(rbp4 - 36) = *reinterpret_cast<uint32_t*>(rbp5 - 28) ^ *reinterpret_cast<uint32_t*>(rbp6 - 32);
    if (*reinterpret_cast<int32_t*>(rbp7 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp8 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 40) == gettimeofday)) {
                addr_10d6_4:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp10 - 44) == gettimeofday)) {
                    addr_1113_5:
                    *reinterpret_cast<int32_t*>(rbp11 - 48) = *reinterpret_cast<int32_t*>(rbp12 - 40) + *reinterpret_cast<int32_t*>(rbp13 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp14 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp16 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 64)) << 11;
                    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
                    rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 64);
                    fun_1162(rdi18, rsi20, rbp22 - 72, rbp23 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp24 - 64) == gettimeofday)) {
                        rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 64);
                        fun_1113(rdi25, rbp27 - 44, rbp28 - 64);
                        goto addr_1113_5;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(rbp30 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax31 = fun_10f9(rdi29);
                        *reinterpret_cast<int64_t*>(rbp32 - 8) = rax31;
                        goto addr_11b4_10;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp33 - 56) == gettimeofday)) {
                    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 56);
                    fun_10d6(rdi34, rbp36 - 40, rbp37 - 56);
                    goto addr_10d6_4;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi38) = *reinterpret_cast<int32_t*>(rbp39 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax40 = fun_10bc(rdi38);
                    *reinterpret_cast<int64_t*>(rbp41 - 8) = rax40;
                    goto addr_11b4_10;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp42 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp43 - 40))) | *reinterpret_cast<uint64_t*>(rbp44 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax47 = fun_1090(rdi45, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                    goto addr_11b4_10;
                } else {
                    fun_106c(16);
                    *reinterpret_cast<int64_t*>(rbp49 - 8) = 0x7fffffffffffffff;
                    goto addr_11b4_10;
                }
            } else {
                rdi50 = *reinterpret_cast<uint64_t*>(rbp51 - 16);
                rsi52 = *reinterpret_cast<uint64_t*>(rbp53 - 24);
                rax54 = propagateFloat64NaN(rdi50, rsi52);
                *reinterpret_cast<uint64_t*>(rbp55 - 8) = rax54;
                goto addr_11b4_10;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp56 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp57 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp58 - 64) != gettimeofday) {
            rdi59 = *reinterpret_cast<uint64_t*>(rbp60 - 16);
            rsi61 = *reinterpret_cast<uint64_t*>(rbp62 - 24);
            rax63 = propagateFloat64NaN(rdi59, rsi61);
            *reinterpret_cast<uint64_t*>(rbp64 - 8) = rax63;
            goto addr_11b4_10;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp65 - 44))) | *reinterpret_cast<uint64_t*>(rbp66 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi67) = *reinterpret_cast<int32_t*>(rbp68 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax69 = fun_1019(rdi67, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp70 - 8) = rax69;
                goto addr_11b4_10;
            } else {
                fun_ff5(16);
                *reinterpret_cast<int64_t*>(rbp71 - 8) = 0x7fffffffffffffff;
                goto addr_11b4_10;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp72 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp73 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp74 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp75 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp76 - 72) = *reinterpret_cast<int64_t*>(rbp77 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp78 - 48) = *reinterpret_cast<int32_t*>(rbp79 - 48) - 1;
    }
    *reinterpret_cast<int32_t*>(&rdi80) = *reinterpret_cast<int32_t*>(rbp81 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi80) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi82) = *reinterpret_cast<int32_t*>(rbp83 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi82) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx84 = *reinterpret_cast<int64_t*>(rbp85 - 72);
    rax86 = fun_11b0(rdi80, rsi82, rdx84);
    *reinterpret_cast<int64_t*>(rbp87 - 8) = rax86;
    addr_11b4_10:
    goto v88;
}

int64_t fun_1850(int64_t rdi, int64_t rsi) {
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
        rax6 = fun_185c(rdi3, rax5);
        *reinterpret_cast<int64_t*>(rbp7 - 24) = rax6;
        rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
        rsi10 = *reinterpret_cast<int64_t*>(rbp11 - 24);
        rax12 = fun_186d(rdi8, rsi10);
        *reinterpret_cast<int64_t*>(rbp13 - 16) = rax12;
        *reinterpret_cast<int32_t*>(rbp14 - 36) = *reinterpret_cast<int32_t*>(rbp15 - 36) + 1;
        rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
        rax18 = fun_1883(rdi16, rsi10);
        eax19 = fun_1895(rax18, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax19 == gettimeofday)) 
            break;
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        rsi22 = *reinterpret_cast<int64_t*>(rbp23 - 32);
        rax24 = fun_1835(rdi20, rsi22);
        *reinterpret_cast<int64_t*>(rbp25 - 48) = rax24;
        *reinterpret_cast<int32_t*>(&rdi26) = (*reinterpret_cast<int32_t*>(rbp27 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp28 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax5 = fun_1850(rdi26, rsi22);
    }
    goto v29;
}

int64_t fun_185c(int64_t rdi, int64_t rsi) {
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
        rax9 = fun_186d(rdi5, rsi7);
        *reinterpret_cast<int64_t*>(rbp10 - 16) = rax9;
        *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
        rax15 = fun_1883(rdi13, rsi7);
        eax16 = fun_1895(rax15, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax16 == gettimeofday)) 
            break;
        rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
        rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
        rax21 = fun_1835(rdi17, rsi19);
        *reinterpret_cast<int64_t*>(rbp22 - 48) = rax21;
        *reinterpret_cast<int32_t*>(&rdi23) = (*reinterpret_cast<int32_t*>(rbp24 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp25 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax26 = fun_1850(rdi23, rsi19);
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
        rax4 = fun_185c(rdi27, rax26);
    }
    goto v29;
}

int64_t fun_186d(int64_t rdi, int64_t rsi) {
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
        rax9 = fun_1883(rdi7, rsi);
        eax10 = fun_1895(rax9, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax10 == gettimeofday)) 
            break;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 24);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
        rax15 = fun_1835(rdi11, rsi13);
        *reinterpret_cast<int64_t*>(rbp16 - 48) = rax15;
        *reinterpret_cast<int32_t*>(&rdi17) = (*reinterpret_cast<int32_t*>(rbp18 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp19 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax20 = fun_1850(rdi17, rsi13);
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
        rax23 = fun_185c(rdi21, rax20);
        *reinterpret_cast<int64_t*>(rbp24 - 24) = rax23;
        rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 16);
        rsi27 = *reinterpret_cast<int64_t*>(rbp28 - 24);
        rax4 = fun_186d(rdi25, rsi27);
    }
    goto v29;
}

int64_t fun_1883(int64_t rdi, int64_t rsi) {
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
        eax4 = fun_1895(rax3, 0x3ee4f8b588e368f1);
        if (reinterpret_cast<int1_t>(eax4 == gettimeofday)) 
            break;
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
        rsi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
        rax9 = fun_1835(rdi5, rsi7);
        *reinterpret_cast<int64_t*>(rbp10 - 48) = rax9;
        *reinterpret_cast<int32_t*>(&rdi11) = (*reinterpret_cast<int32_t*>(rbp12 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp13 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax14 = fun_1850(rdi11, rsi7);
        rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
        rax17 = fun_185c(rdi15, rax14);
        *reinterpret_cast<int64_t*>(rbp18 - 24) = rax17;
        rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 16);
        rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
        rax23 = fun_186d(rdi19, rsi21);
        *reinterpret_cast<int64_t*>(rbp24 - 16) = rax23;
        *reinterpret_cast<int32_t*>(rbp25 - 36) = *reinterpret_cast<int32_t*>(rbp26 - 36) + 1;
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 24);
        rax3 = fun_1883(rdi27, rsi21);
    }
    goto v29;
}

int32_t fun_1895(int64_t rdi, int64_t rsi) {
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
        rax8 = fun_1835(rdi4, rsi6);
        *reinterpret_cast<int64_t*>(rbp9 - 48) = rax8;
        *reinterpret_cast<int32_t*>(&rdi10) = (*reinterpret_cast<int32_t*>(rbp11 - 36) << 1) * ((*reinterpret_cast<int32_t*>(rbp12 - 36) << 1) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax13 = fun_1850(rdi10, rsi6);
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
        rax16 = fun_185c(rdi14, rax13);
        *reinterpret_cast<int64_t*>(rbp17 - 24) = rax16;
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        rax22 = fun_186d(rdi18, rsi20);
        *reinterpret_cast<int64_t*>(rbp23 - 16) = rax22;
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 24);
        rax28 = fun_1883(rdi26, rsi20);
        eax3 = fun_1895(rax28, 0x3ee4f8b588e368f1);
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

void float64_ge(int64_t rdi, int64_t rsi) {
    fun_178d(rsi, rdi);
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

int64_t packFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    return (static_cast<int64_t>(edi) << 63) + (static_cast<int64_t>(esi) << 52) + rdx;
}

void addFloat64Sigs(int64_t rdi, int64_t rsi, int32_t edx) {
    fun_89c(rdi);
}

void subFloat64Sigs(int64_t rdi, int64_t rsi, int32_t edx) {
    fun_c1c(rdi);
}

void float64_add(int64_t rdi, int64_t rsi) {
    fun_ed9(rdi);
}

void float64_div(int64_t rdi, int64_t rsi) {
    fun_11d9(rdi);
}

void float64_le(int64_t rdi, int64_t rsi) {
    fun_1669(rdi);
}

int32_t* g529 = reinterpret_cast<int32_t*>(0xe47d83e44589008b);

void roundAndPackFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    int32_t* rax4;
    int32_t v5;
    int32_t v6;
    int32_t eax7;

    rax4 = g529;
    v5 = *rax4;
    v6 = 0x200;
    if (reinterpret_cast<int1_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v5 == gettimeofday)) & 1)) == gettimeofday)) {
        if (v5 != 1) {
            v6 = 0x3ff;
            if (edi == gettimeofday) {
                if (v5 == 3) {
                    v6 = reinterpret_cast<int32_t>(gettimeofday);
                }
            } else {
                if (v5 == 2) {
                    v6 = reinterpret_cast<int32_t>(gettimeofday);
                }
            }
        } else {
            v6 = reinterpret_cast<int32_t>(gettimeofday);
        }
    }
    eax7 = esi;
    if (reinterpret_cast<int32_t>(0x7fd) > reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)))) 
        goto 0x691;
    if (0x7fd < esi || esi == 0x7fd && rdx + v6 < reinterpret_cast<int64_t>(gettimeofday)) {
        fun_605(9);
    } else {
        if (esi >= reinterpret_cast<int32_t>(gettimeofday)) 
            goto 0x68c;
        fun_655(rdx);
    }
}

void float64_mul(int64_t rdi, int64_t rsi) {
    fun_f49(rdi);
}

uint64_t float64_neg(uint64_t rdi) {
    return (rdi ^ 0xffffffffffffffff) & 0x8000000000000000 | 0x7fffffffffffffff & rdi;
}

void normalizeRoundAndPackFloat64(int32_t edi, int32_t esi, uint64_t rdx) {
    int64_t rdi4;

    countLeadingZeros64(rdx);
    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_75b(rdi4);
}

uint64_t float64_abs(uint64_t rdi) {
    return 0x7fffffffffffffff & rdi;
}

void local_sin(int64_t rdi) {
    fun_181c(rdi, rdi);
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
        fun_7f5(rdi4);
    } else {
        goto 0x7f9;
    }
}

