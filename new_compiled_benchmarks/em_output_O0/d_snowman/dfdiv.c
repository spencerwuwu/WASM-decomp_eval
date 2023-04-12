
int32_t fun_6a9(uint64_t rdi);

uint32_t fun_6b5(uint64_t rdi);

int32_t fun_6c1(uint64_t rdi);

uint32_t fun_6cd(uint64_t rdi);

void gettimeofday(int64_t rdi);

void fun_70d(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi) {
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;

    fun_6a9(rdi);
    eax3 = fun_6b5(rdi);
    eax4 = fun_6c1(rsi);
    eax5 = fun_6cd(rsi);
    v6 = 0x8000000000000 | rdi;
    v7 = 0x8000000000000 | rsi;
    if ((eax3 | eax5) != gettimeofday) {
        fun_70d(16);
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

void fun_4dc(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_547(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_861(uint64_t rdi, uint64_t rsi, void* rdx, void* rcx);

void fun_87e(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8, void* r9, int64_t a7);

void fun_8c7(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, void* r8, void* r9, int64_t a7);

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
        fun_861(v5, v8, reinterpret_cast<int64_t>(rbp4) - 72, reinterpret_cast<int64_t>(rbp4) - 80);
        fun_87e(rdi, rsi, v9, v10, reinterpret_cast<int64_t>(rbp4) - 56, reinterpret_cast<int64_t>(rbp4) - 64, v11);
        while (v12 < reinterpret_cast<int64_t>(gettimeofday)) {
            v8 = v8 - 0x100000000;
            fun_8c7(v13, v14, v6, v5 << 32, reinterpret_cast<int64_t>(rbp4) - 56, reinterpret_cast<int64_t>(rbp4) - 64, v15);
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

void fun_620(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_654(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int64_t roundAndPackFloat64(int32_t edi, int32_t esi, uint64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_603(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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
    int32_t edi29;
    int64_t rbp30;
    int32_t esi31;
    int64_t rbp32;
    uint64_t rdx33;
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
    fun_620(rdi6, gettimeofday, rdx8, rcx10, r8_12, r9_14, v5);
    while (*reinterpret_cast<int64_t*>(rbp16 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp17 - 72) = *reinterpret_cast<int64_t*>(rbp18 - 72) - 1;
        rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
        rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
        rcx10 = *reinterpret_cast<uint64_t*>(rbp23 - 64);
        r8_12 = rbp24 - 80;
        r9_14 = rbp25 - 88;
        fun_654(rdi19, rsi21, gettimeofday, rcx10, r8_12, r9_14, v5);
    }
    *reinterpret_cast<uint64_t*>(rbp26 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp27 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp28 - 72);
    edi29 = *reinterpret_cast<int32_t*>(rbp30 - 36);
    esi31 = *reinterpret_cast<int32_t*>(rbp32 - 48);
    rdx33 = *reinterpret_cast<uint64_t*>(rbp34 - 72);
    rax35 = roundAndPackFloat64(edi29, esi31, rdx33, rcx10, r8_12, r9_14, v5);
    *reinterpret_cast<int64_t*>(rbp36 - 8) = rax35;
    goto v37;
}

void fun_654(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int32_t edi22;
    int64_t rbp23;
    int32_t esi24;
    int64_t rbp25;
    uint64_t rdx26;
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
        fun_654(rdi11, rsi13, gettimeofday, rcx15, rbp17 - 80, rbp18 - 88, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp19 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp20 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp21 - 72);
    edi22 = *reinterpret_cast<int32_t*>(rbp23 - 36);
    esi24 = *reinterpret_cast<int32_t*>(rbp25 - 48);
    rdx26 = *reinterpret_cast<uint64_t*>(rbp27 - 72);
    rax28 = roundAndPackFloat64(edi22, esi24, rdx26, rcx, r8, r9, __return_address());
    *reinterpret_cast<int64_t*>(rbp29 - 8) = rax28;
    goto v30;
}

void fun_70d(int64_t rdi) {
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

void fun_8c7(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, void* r8, void* r9, int64_t a7) {
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
        fun_8c7(rdi13, rsi15, rdx17, rcx19, rbp21 - 56, rbp22 - 64, __return_address());
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

int64_t fun_a46(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_a35(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_a46(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

void fun_ab7(int64_t rdi);

uint32_t* gad2 = reinterpret_cast<uint32_t*>(0x58b4801c983088b);

uint32_t* gade = reinterpret_cast<uint32_t*>(0x6348e8458b480889);

int64_t fun_b37(int64_t rdi, int64_t rsi, uint64_t rdx);

void fun_a85(uint64_t rdi) {
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
    int64_t rax26;
    int64_t rbp27;
    int64_t v28;

    *reinterpret_cast<int32_t*>(rbp2 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    rax3 = *reinterpret_cast<uint64_t*>(rbp4 - 24) & 0x3ff;
    *reinterpret_cast<int32_t*>(rbp5 - 44) = *reinterpret_cast<int32_t*>(&rax3);
    if (*reinterpret_cast<int32_t*>(rbp6 - 36) != gettimeofday && *reinterpret_cast<int32_t*>(rbp7 - 44) != gettimeofday) {
        fun_ab7(4);
    }
    if (*reinterpret_cast<int32_t*>(rbp8 - 44) != gettimeofday) {
        rax9 = gad2;
        rax10 = gade;
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
    rax26 = fun_b37(rdi20, rsi22, rdx24);
    *reinterpret_cast<int64_t*>(rbp27 - 8) = rax26;
    goto v28;
}

void fun_ab7(int64_t rdi) {
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
    int64_t rax20;
    int64_t rbp21;
    int64_t v22;

    if (*reinterpret_cast<int32_t*>(rbp2 - 44) != gettimeofday) {
        rax3 = gad2;
        rax4 = gade;
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
    rax20 = fun_b37(rdi14, rsi16, rdx18);
    *reinterpret_cast<int64_t*>(rbp21 - 8) = rax20;
    goto v22;
}

int64_t* gbe6 = reinterpret_cast<int64_t*>(0x24c0950fd1043b48);

int64_t* gbab = reinterpret_cast<int64_t*>(0xf0458948c8048b48);

int64_t* gbbe = reinterpret_cast<int64_t*>(0xe8458948c8048b48);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void rtclock();

void fun_c3a(int64_t rdi, int64_t rsi);

int64_t fun_bd3() {
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
    int64_t* rax11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rbp15;
    int64_t rbp16;
    struct s0* rdi17;
    int64_t rbp18;
    struct s1* rsi19;
    int64_t rbp20;
    int32_t* rsi21;
    int64_t v22;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp1 - 32) = rax2;
        rcx3 = gbe6;
        *reinterpret_cast<uint32_t*>(rbp4 - 4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp5 - 32) != rcx3[*reinterpret_cast<int32_t*>(rbp6 - 8)])) & 1) + *reinterpret_cast<int32_t*>(rbp7 - 4);
        *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 8) >= 22) 
            break;
        rax11 = gbab;
        *reinterpret_cast<int64_t*>(rbp12 - 16) = rax11[*reinterpret_cast<int32_t*>(rbp13 - 8)];
        rax14 = gbbe;
        *reinterpret_cast<int64_t*>(rbp15 - 24) = rax14[*reinterpret_cast<int32_t*>(rbp16 - 8)];
        rdi17 = *reinterpret_cast<struct s0**>(rbp18 - 16);
        rsi19 = *reinterpret_cast<struct s1**>(rbp20 - 24);
        rax2 = fun_bd3();
    }
    rtclock();
    rdi17->f0 = rsi19->f0;
    rsi21 = &rsi19->f4;
    rdi17->f4 = *rsi21;
    __asm__("subsd xmm0, [rax]");
    fun_c3a(0xc33, rsi21 + 1);
    goto v22;
}

void fun_c3a(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_d53(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

int32_t fun_6a9(uint64_t rdi) {
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
    eax6 = fun_6b5(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 24) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_6c1(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 16);
    eax14 = fun_6cd(rdi12);
    *reinterpret_cast<uint32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint64_t*>(rbp16 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 8);
    *reinterpret_cast<uint64_t*>(rbp18 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp20 - 24) | *reinterpret_cast<uint32_t*>(rbp21 - 32)) != gettimeofday) {
        fun_70d(16);
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

void fun_439(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_4a2(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int32_t countLeadingZeros64(uint64_t rdi);

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

int64_t fun_50a(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_4f9(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_50a(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4;
    goto v6;
}

int32_t* g959 = reinterpret_cast<int32_t*>(0xe47d83e44589008b);

int64_t roundAndPackFloat64(int32_t edi, int32_t esi, uint64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t* rax9;
    int32_t v10;
    uint32_t v11;
    int32_t v12;
    uint64_t rax13;
    uint32_t v14;
    int32_t eax15;
    uint32_t* rax16;
    uint32_t* rax17;
    int64_t rdi18;
    int64_t rax19;
    int64_t v20;
    uint64_t rax21;
    uint64_t v22;
    int64_t rdi23;
    int64_t rsi24;
    int64_t rax25;

    v8 = esi;
    rax9 = g959;
    v10 = *rax9;
    v11 = static_cast<unsigned char>(reinterpret_cast<uint1_t>(v10 == gettimeofday)) & 1;
    v12 = 0x200;
    if (reinterpret_cast<int1_t>(v11 == gettimeofday)) {
        if (v10 != 1) {
            v12 = 0x3ff;
            if (edi == gettimeofday) {
                if (v10 == 3) {
                    v12 = reinterpret_cast<int32_t>(gettimeofday);
                }
            } else {
                if (v10 == 2) {
                    v12 = reinterpret_cast<int32_t>(gettimeofday);
                }
            }
        } else {
            v12 = reinterpret_cast<int32_t>(gettimeofday);
        }
    }
    rax13 = rdx & 0x3ff;
    v14 = *reinterpret_cast<uint32_t*>(&rax13);
    eax15 = v8;
    if (reinterpret_cast<int32_t>(0x7fd) > reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax15)))) {
        addr_ac1_14:
        if (v14 != gettimeofday) {
            rax16 = gad2;
            rax17 = gade;
            *rax17 = *rax16 | 1;
        }
    } else {
        if (0x7fd < v8 || v8 == 0x7fd && reinterpret_cast<int64_t>(rdx + static_cast<int64_t>(v12)) < reinterpret_cast<int64_t>(gettimeofday)) {
            fun_a35(9);
            *reinterpret_cast<int32_t*>(&rdi18) = edi;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            rax19 = fun_a46(rdi18, 0x7ff, gettimeofday);
            v20 = rax19 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v12 == gettimeofday)) & 1)));
            goto addr_b3b_20;
        } else {
            if (v8 >= reinterpret_cast<int32_t>(gettimeofday)) {
                addr_abc_22:
                goto addr_ac1_14;
            } else {
                fun_a85(rdx);
                v8 = reinterpret_cast<int32_t>(gettimeofday);
                rax21 = rdx & 0x3ff;
                v14 = *reinterpret_cast<uint32_t*>(&rax21);
                if (gettimeofday) 
                    goto addr_ab7_25;
                if (v14 == gettimeofday) 
                    goto addr_ab7_25; else 
                    goto addr_aad_27;
            }
        }
    }
    v22 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((v14 ^ 0x200) == gettimeofday)) & 1)) & v11 ^ 0xffffffff))) & rdx + static_cast<int64_t>(v12) >> 10;
    if (reinterpret_cast<int1_t>(v22 == gettimeofday)) {
        v8 = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<int32_t*>(&rdi23) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi24) = v8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax25 = fun_b37(rdi23, rsi24, v22);
    v20 = rax25;
    addr_b3b_20:
    return v20;
    addr_ab7_25:
    goto addr_abc_22;
    addr_aad_27:
    fun_ab7(4);
    goto addr_ab7_25;
}

void fun_620(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int32_t edi22;
    int64_t rbp23;
    int32_t esi24;
    int64_t rbp25;
    uint64_t rdx26;
    int64_t rbp27;
    int64_t rax28;
    int64_t rbp29;
    int64_t v30;

    while (*reinterpret_cast<int64_t*>(rbp8 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) - 1;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
        rcx15 = *reinterpret_cast<uint64_t*>(rbp16 - 64);
        fun_654(rdi11, rsi13, gettimeofday, rcx15, rbp17 - 80, rbp18 - 88, __return_address());
    }
    *reinterpret_cast<uint64_t*>(rbp19 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp20 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp21 - 72);
    edi22 = *reinterpret_cast<int32_t*>(rbp23 - 36);
    esi24 = *reinterpret_cast<int32_t*>(rbp25 - 48);
    rdx26 = *reinterpret_cast<uint64_t*>(rbp27 - 72);
    rax28 = roundAndPackFloat64(edi22, esi24, rdx26, rcx, r8, r9, __return_address());
    *reinterpret_cast<int64_t*>(rbp29 - 8) = rax28;
    goto v30;
}

void fun_861(uint64_t rdi, uint64_t rsi, void* rdx, void* rcx) {
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
    fun_87e(rdi6, rsi8, rdx10, rcx12, rbp14 - 56, rbp15 - 64, v5);
    while (*reinterpret_cast<int64_t*>(rbp16 - 56) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp17 - 88) = *reinterpret_cast<int64_t*>(rbp18 - 88) - 0x100000000;
        *reinterpret_cast<int64_t*>(rbp19 - 48) = *reinterpret_cast<int64_t*>(rbp20 - 32) << 32;
        rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
        rsi23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
        rdx25 = *reinterpret_cast<uint64_t*>(rbp26 - 40);
        rcx27 = *reinterpret_cast<uint64_t*>(rbp28 - 48);
        fun_8c7(rdi21, rsi23, rdx25, rcx27, rbp29 - 56, rbp30 - 64, v5);
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

void fun_87e(uint64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, void* r8, void* r9, int64_t a7) {
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
        fun_8c7(rdi13, rsi15, rdx17, rcx19, rbp21 - 56, rbp22 - 64, __return_address());
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

int64_t fun_a46(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

int64_t fun_b37(int64_t rdi, int64_t rsi, uint64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int32_t fun_d35();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_d35();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0xd4c);
        fun_d53(0xd4c, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
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
    v5 = *reinterpret_cast<int32_t*>(0xd0d + rcx4 * 4) + v3;
    return v5;
}

int64_t fun_45d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

uint32_t fun_6b5(uint64_t rdi) {
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
    eax6 = fun_6c1(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_6cd(rdi8);
    *reinterpret_cast<uint32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint64_t*>(rbp12 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp13 - 8);
    *reinterpret_cast<uint64_t*>(rbp14 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp16 - 24) | *reinterpret_cast<uint32_t*>(rbp17 - 32)) != gettimeofday) {
        fun_70d(16);
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

int64_t fun_50a(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int32_t gd4c = 0xe800b0;

int32_t fun_d35() {
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
        fun_d53(0xd4c, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    gd4c = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

int32_t fun_6c1(uint64_t rdi) {
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
    eax6 = fun_6cd(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint64_t*>(rbp8 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<uint64_t*>(rbp10 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp12 - 24) | *reinterpret_cast<uint32_t*>(rbp13 - 32)) != gettimeofday) {
        fun_70d(16);
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

uint32_t fun_6cd(uint64_t rdi) {
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
        fun_70d(16);
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

int32_t fun_396(int64_t rdi);

int32_t fun_3a2(int64_t rdi);

int64_t fun_3ae(int64_t rdi);

int32_t fun_3bb(int64_t rdi);

int32_t fun_3c7(int64_t rdi);

void fun_389(int64_t rdi) {
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
    uint64_t rdi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rax54;
    int64_t rbp55;
    int64_t rbp56;
    uint64_t rdi57;
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
    int32_t edi134;
    int64_t rbp135;
    int32_t esi136;
    int64_t rbp137;
    uint64_t rdx138;
    int64_t rbp139;
    int64_t rax140;
    int64_t rbp141;
    int64_t v142;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    eax7 = fun_396(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 40) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
    eax11 = fun_3a2(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 28) = eax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    rax15 = fun_3ae(rdi13);
    *reinterpret_cast<int64_t*>(rbp16 - 64) = rax15;
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
    eax19 = fun_3bb(rdi17);
    *reinterpret_cast<int32_t*>(rbp20 - 44) = eax19;
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 24);
    eax23 = fun_3c7(rdi21);
    *reinterpret_cast<int32_t*>(rbp24 - 32) = eax23;
    *reinterpret_cast<uint32_t*>(rbp25 - 36) = *reinterpret_cast<uint32_t*>(rbp26 - 28) ^ *reinterpret_cast<uint32_t*>(rbp27 - 32);
    if (*reinterpret_cast<int32_t*>(rbp28 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp29 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp30 - 44) == gettimeofday)) {
                addr_524_9:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp31 - 40) == gettimeofday)) {
                    addr_561_10:
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
                        rdi48 = *reinterpret_cast<uint64_t*>(rbp49 - 56);
                        normalizeFloat64Subnormal(rdi48, rbp50 - 40, rbp51 - 56);
                        goto addr_561_10;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi52) = *reinterpret_cast<int32_t*>(rbp53 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax54 = fun_547(rdi52);
                        *reinterpret_cast<int64_t*>(rbp55 - 8) = rax54;
                        goto addr_683_16;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp56 - 64) == gettimeofday)) {
                    rdi57 = *reinterpret_cast<uint64_t*>(rbp58 - 64);
                    normalizeFloat64Subnormal(rdi57, rbp59 - 44, rbp60 - 64);
                    goto addr_524_9;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp61 - 40))) | *reinterpret_cast<uint64_t*>(rbp62 - 56)) == gettimeofday)) {
                        fun_4f9(2);
                        *reinterpret_cast<int32_t*>(&rdi63) = *reinterpret_cast<int32_t*>(rbp64 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi63) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax65 = fun_50a(rdi63, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp66 - 8) = rax65;
                        goto addr_683_16;
                    } else {
                        fun_4dc(16);
                        *reinterpret_cast<int64_t*>(rbp67 - 8) = 0x7fffffffffffffff;
                        goto addr_683_16;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp68 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi69) = *reinterpret_cast<int32_t*>(rbp70 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax71 = fun_4a2(rdi69);
                *reinterpret_cast<int64_t*>(rbp72 - 8) = rax71;
                goto addr_683_16;
            } else {
                rdi73 = *reinterpret_cast<uint64_t*>(rbp74 - 16);
                rsi75 = *reinterpret_cast<uint64_t*>(rbp76 - 24);
                rax77 = propagateFloat64NaN(rdi73, rsi75);
                *reinterpret_cast<uint64_t*>(rbp78 - 8) = rax77;
                goto addr_683_16;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp79 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp80 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi81) = *reinterpret_cast<int32_t*>(rbp82 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax83 = fun_45d(rdi81, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp84 - 8) = rax83;
                goto addr_683_16;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp85 - 64) == gettimeofday) {
                    fun_439(16);
                    *reinterpret_cast<int64_t*>(rbp86 - 8) = 0x7fffffffffffffff;
                    goto addr_683_16;
                } else {
                    rdi87 = *reinterpret_cast<uint64_t*>(rbp88 - 16);
                    rsi89 = *reinterpret_cast<uint64_t*>(rbp90 - 24);
                    rax91 = propagateFloat64NaN(rdi87, rsi89);
                    *reinterpret_cast<uint64_t*>(rbp92 - 8) = rax91;
                    goto addr_683_16;
                }
            }
        } else {
            rdi93 = *reinterpret_cast<uint64_t*>(rbp94 - 16);
            rsi95 = *reinterpret_cast<uint64_t*>(rbp96 - 24);
            rax97 = propagateFloat64NaN(rdi93, rsi95);
            *reinterpret_cast<uint64_t*>(rbp98 - 8) = rax97;
            goto addr_683_16;
        }
    }
    rdi99 = *reinterpret_cast<uint64_t*>(rbp100 - 56);
    rdx101 = *reinterpret_cast<uint64_t*>(rbp102 - 64);
    rax103 = estimateDiv128To64(rdi99, gettimeofday, rdx101);
    *reinterpret_cast<uint64_t*>(rbp104 - 72) = rax103;
    if ((*reinterpret_cast<uint64_t*>(rbp105 - 72) & 0x1ff) <= 2) {
        rdi106 = *reinterpret_cast<int64_t*>(rbp107 - 64);
        rsi108 = *reinterpret_cast<int64_t*>(rbp109 - 72);
        fun_603(rdi106, rsi108, rbp110 - 96, rbp111 - 0x68);
        rdi112 = *reinterpret_cast<int64_t*>(rbp113 - 56);
        rdx114 = *reinterpret_cast<int64_t*>(rbp115 - 96);
        rcx39 = *reinterpret_cast<uint64_t*>(rbp116 - 0x68);
        r8_117 = rbp118 - 80;
        r9_119 = rbp120 - 88;
        fun_620(rdi112, gettimeofday, rdx114, rcx39, r8_117, r9_119, v2);
        while (*reinterpret_cast<int64_t*>(rbp121 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp122 - 72) = *reinterpret_cast<int64_t*>(rbp123 - 72) - 1;
            rdi124 = *reinterpret_cast<int64_t*>(rbp125 - 80);
            rsi126 = *reinterpret_cast<int64_t*>(rbp127 - 88);
            rcx39 = *reinterpret_cast<uint64_t*>(rbp128 - 64);
            r8_117 = rbp129 - 80;
            r9_119 = rbp130 - 88;
            fun_654(rdi124, rsi126, gettimeofday, rcx39, r8_117, r9_119, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp131 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp132 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp133 - 72);
    }
    edi134 = *reinterpret_cast<int32_t*>(rbp135 - 36);
    esi136 = *reinterpret_cast<int32_t*>(rbp137 - 48);
    rdx138 = *reinterpret_cast<uint64_t*>(rbp139 - 72);
    rax140 = roundAndPackFloat64(edi134, esi136, rdx138, rcx39, r8_117, r9_119, v2);
    *reinterpret_cast<int64_t*>(rbp141 - 8) = rax140;
    addr_683_16:
    goto v142;
}

int32_t fun_396(int64_t rdi) {
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
    uint64_t rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rax50;
    int64_t rbp51;
    int64_t rbp52;
    uint64_t rdi53;
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
    int32_t edi130;
    int64_t rbp131;
    int32_t esi132;
    int64_t rbp133;
    uint64_t rdx134;
    int64_t rbp135;
    int64_t rax136;
    int64_t rbp137;
    int64_t v138;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 40) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    eax7 = fun_3a2(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    rax11 = fun_3ae(rdi9);
    *reinterpret_cast<int64_t*>(rbp12 - 64) = rax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    eax15 = fun_3bb(rdi13);
    *reinterpret_cast<int32_t*>(rbp16 - 44) = eax15;
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 24);
    eax19 = fun_3c7(rdi17);
    *reinterpret_cast<int32_t*>(rbp20 - 32) = eax19;
    *reinterpret_cast<uint32_t*>(rbp21 - 36) = *reinterpret_cast<uint32_t*>(rbp22 - 28) ^ *reinterpret_cast<uint32_t*>(rbp23 - 32);
    if (*reinterpret_cast<int32_t*>(rbp24 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp25 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 44) == gettimeofday)) {
                addr_524_8:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp27 - 40) == gettimeofday)) {
                    addr_561_9:
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
                        rdi44 = *reinterpret_cast<uint64_t*>(rbp45 - 56);
                        normalizeFloat64Subnormal(rdi44, rbp46 - 40, rbp47 - 56);
                        goto addr_561_9;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi48) = *reinterpret_cast<int32_t*>(rbp49 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax50 = fun_547(rdi48);
                        *reinterpret_cast<int64_t*>(rbp51 - 8) = rax50;
                        goto addr_683_15;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp52 - 64) == gettimeofday)) {
                    rdi53 = *reinterpret_cast<uint64_t*>(rbp54 - 64);
                    normalizeFloat64Subnormal(rdi53, rbp55 - 44, rbp56 - 64);
                    goto addr_524_8;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp57 - 40))) | *reinterpret_cast<uint64_t*>(rbp58 - 56)) == gettimeofday)) {
                        fun_4f9(2);
                        *reinterpret_cast<int32_t*>(&rdi59) = *reinterpret_cast<int32_t*>(rbp60 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax61 = fun_50a(rdi59, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp62 - 8) = rax61;
                        goto addr_683_15;
                    } else {
                        fun_4dc(16);
                        *reinterpret_cast<int64_t*>(rbp63 - 8) = 0x7fffffffffffffff;
                        goto addr_683_15;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp64 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax67 = fun_4a2(rdi65);
                *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                goto addr_683_15;
            } else {
                rdi69 = *reinterpret_cast<uint64_t*>(rbp70 - 16);
                rsi71 = *reinterpret_cast<uint64_t*>(rbp72 - 24);
                rax73 = propagateFloat64NaN(rdi69, rsi71);
                *reinterpret_cast<uint64_t*>(rbp74 - 8) = rax73;
                goto addr_683_15;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp75 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp76 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi77) = *reinterpret_cast<int32_t*>(rbp78 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax79 = fun_45d(rdi77, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp80 - 8) = rax79;
                goto addr_683_15;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp81 - 64) == gettimeofday) {
                    fun_439(16);
                    *reinterpret_cast<int64_t*>(rbp82 - 8) = 0x7fffffffffffffff;
                    goto addr_683_15;
                } else {
                    rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
                    rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
                    rax87 = propagateFloat64NaN(rdi83, rsi85);
                    *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
                    goto addr_683_15;
                }
            }
        } else {
            rdi89 = *reinterpret_cast<uint64_t*>(rbp90 - 16);
            rsi91 = *reinterpret_cast<uint64_t*>(rbp92 - 24);
            rax93 = propagateFloat64NaN(rdi89, rsi91);
            *reinterpret_cast<uint64_t*>(rbp94 - 8) = rax93;
            goto addr_683_15;
        }
    }
    rdi95 = *reinterpret_cast<uint64_t*>(rbp96 - 56);
    rdx97 = *reinterpret_cast<uint64_t*>(rbp98 - 64);
    rax99 = estimateDiv128To64(rdi95, gettimeofday, rdx97);
    *reinterpret_cast<uint64_t*>(rbp100 - 72) = rax99;
    if ((*reinterpret_cast<uint64_t*>(rbp101 - 72) & 0x1ff) <= 2) {
        rdi102 = *reinterpret_cast<int64_t*>(rbp103 - 64);
        rsi104 = *reinterpret_cast<int64_t*>(rbp105 - 72);
        fun_603(rdi102, rsi104, rbp106 - 96, rbp107 - 0x68);
        rdi108 = *reinterpret_cast<int64_t*>(rbp109 - 56);
        rdx110 = *reinterpret_cast<int64_t*>(rbp111 - 96);
        rcx35 = *reinterpret_cast<uint64_t*>(rbp112 - 0x68);
        r8_113 = rbp114 - 80;
        r9_115 = rbp116 - 88;
        fun_620(rdi108, gettimeofday, rdx110, rcx35, r8_113, r9_115, v2);
        while (*reinterpret_cast<int64_t*>(rbp117 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp118 - 72) = *reinterpret_cast<int64_t*>(rbp119 - 72) - 1;
            rdi120 = *reinterpret_cast<int64_t*>(rbp121 - 80);
            rsi122 = *reinterpret_cast<int64_t*>(rbp123 - 88);
            rcx35 = *reinterpret_cast<uint64_t*>(rbp124 - 64);
            r8_113 = rbp125 - 80;
            r9_115 = rbp126 - 88;
            fun_654(rdi120, rsi122, gettimeofday, rcx35, r8_113, r9_115, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp127 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp128 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp129 - 72);
    }
    edi130 = *reinterpret_cast<int32_t*>(rbp131 - 36);
    esi132 = *reinterpret_cast<int32_t*>(rbp133 - 48);
    rdx134 = *reinterpret_cast<uint64_t*>(rbp135 - 72);
    rax136 = roundAndPackFloat64(edi130, esi132, rdx134, rcx35, r8_113, r9_115, v2);
    *reinterpret_cast<int64_t*>(rbp137 - 8) = rax136;
    addr_683_15:
    goto v138;
}

int32_t fun_3a2(int64_t rdi) {
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
    uint64_t rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t rax46;
    int64_t rbp47;
    int64_t rbp48;
    uint64_t rdi49;
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
    int32_t edi126;
    int64_t rbp127;
    int32_t esi128;
    int64_t rbp129;
    uint64_t rdx130;
    int64_t rbp131;
    int64_t rax132;
    int64_t rbp133;
    int64_t v134;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 28) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    rax7 = fun_3ae(rdi5);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    eax11 = fun_3bb(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 44) = eax11;
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
    eax15 = fun_3c7(rdi13);
    *reinterpret_cast<int32_t*>(rbp16 - 32) = eax15;
    *reinterpret_cast<uint32_t*>(rbp17 - 36) = *reinterpret_cast<uint32_t*>(rbp18 - 28) ^ *reinterpret_cast<uint32_t*>(rbp19 - 32);
    if (*reinterpret_cast<int32_t*>(rbp20 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp21 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 44) == gettimeofday)) {
                addr_524_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 40) == gettimeofday)) {
                    addr_561_8:
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
                        rdi40 = *reinterpret_cast<uint64_t*>(rbp41 - 56);
                        normalizeFloat64Subnormal(rdi40, rbp42 - 40, rbp43 - 56);
                        goto addr_561_8;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi44) = *reinterpret_cast<int32_t*>(rbp45 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax46 = fun_547(rdi44);
                        *reinterpret_cast<int64_t*>(rbp47 - 8) = rax46;
                        goto addr_683_14;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp48 - 64) == gettimeofday)) {
                    rdi49 = *reinterpret_cast<uint64_t*>(rbp50 - 64);
                    normalizeFloat64Subnormal(rdi49, rbp51 - 44, rbp52 - 64);
                    goto addr_524_7;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp53 - 40))) | *reinterpret_cast<uint64_t*>(rbp54 - 56)) == gettimeofday)) {
                        fun_4f9(2);
                        *reinterpret_cast<int32_t*>(&rdi55) = *reinterpret_cast<int32_t*>(rbp56 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi55) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax57 = fun_50a(rdi55, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp58 - 8) = rax57;
                        goto addr_683_14;
                    } else {
                        fun_4dc(16);
                        *reinterpret_cast<int64_t*>(rbp59 - 8) = 0x7fffffffffffffff;
                        goto addr_683_14;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp60 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax63 = fun_4a2(rdi61);
                *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                goto addr_683_14;
            } else {
                rdi65 = *reinterpret_cast<uint64_t*>(rbp66 - 16);
                rsi67 = *reinterpret_cast<uint64_t*>(rbp68 - 24);
                rax69 = propagateFloat64NaN(rdi65, rsi67);
                *reinterpret_cast<uint64_t*>(rbp70 - 8) = rax69;
                goto addr_683_14;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp71 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp72 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi73) = *reinterpret_cast<int32_t*>(rbp74 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi73) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax75 = fun_45d(rdi73, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp76 - 8) = rax75;
                goto addr_683_14;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp77 - 64) == gettimeofday) {
                    fun_439(16);
                    *reinterpret_cast<int64_t*>(rbp78 - 8) = 0x7fffffffffffffff;
                    goto addr_683_14;
                } else {
                    rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
                    rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
                    rax83 = propagateFloat64NaN(rdi79, rsi81);
                    *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
                    goto addr_683_14;
                }
            }
        } else {
            rdi85 = *reinterpret_cast<uint64_t*>(rbp86 - 16);
            rsi87 = *reinterpret_cast<uint64_t*>(rbp88 - 24);
            rax89 = propagateFloat64NaN(rdi85, rsi87);
            *reinterpret_cast<uint64_t*>(rbp90 - 8) = rax89;
            goto addr_683_14;
        }
    }
    rdi91 = *reinterpret_cast<uint64_t*>(rbp92 - 56);
    rdx93 = *reinterpret_cast<uint64_t*>(rbp94 - 64);
    rax95 = estimateDiv128To64(rdi91, gettimeofday, rdx93);
    *reinterpret_cast<uint64_t*>(rbp96 - 72) = rax95;
    if ((*reinterpret_cast<uint64_t*>(rbp97 - 72) & 0x1ff) <= 2) {
        rdi98 = *reinterpret_cast<int64_t*>(rbp99 - 64);
        rsi100 = *reinterpret_cast<int64_t*>(rbp101 - 72);
        fun_603(rdi98, rsi100, rbp102 - 96, rbp103 - 0x68);
        rdi104 = *reinterpret_cast<int64_t*>(rbp105 - 56);
        rdx106 = *reinterpret_cast<int64_t*>(rbp107 - 96);
        rcx31 = *reinterpret_cast<uint64_t*>(rbp108 - 0x68);
        r8_109 = rbp110 - 80;
        r9_111 = rbp112 - 88;
        fun_620(rdi104, gettimeofday, rdx106, rcx31, r8_109, r9_111, v2);
        while (*reinterpret_cast<int64_t*>(rbp113 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp114 - 72) = *reinterpret_cast<int64_t*>(rbp115 - 72) - 1;
            rdi116 = *reinterpret_cast<int64_t*>(rbp117 - 80);
            rsi118 = *reinterpret_cast<int64_t*>(rbp119 - 88);
            rcx31 = *reinterpret_cast<uint64_t*>(rbp120 - 64);
            r8_109 = rbp121 - 80;
            r9_111 = rbp122 - 88;
            fun_654(rdi116, rsi118, gettimeofday, rcx31, r8_109, r9_111, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp123 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp124 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp125 - 72);
    }
    edi126 = *reinterpret_cast<int32_t*>(rbp127 - 36);
    esi128 = *reinterpret_cast<int32_t*>(rbp129 - 48);
    rdx130 = *reinterpret_cast<uint64_t*>(rbp131 - 72);
    rax132 = roundAndPackFloat64(edi126, esi128, rdx130, rcx31, r8_109, r9_111, v2);
    *reinterpret_cast<int64_t*>(rbp133 - 8) = rax132;
    addr_683_14:
    goto v134;
}

int64_t fun_3ae(int64_t rdi) {
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
    uint64_t rdi36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rax42;
    int64_t rbp43;
    int64_t rbp44;
    uint64_t rdi45;
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
    int32_t edi122;
    int64_t rbp123;
    int32_t esi124;
    int64_t rbp125;
    uint64_t rdx126;
    int64_t rbp127;
    int64_t rax128;
    int64_t rbp129;
    int64_t v130;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    eax7 = fun_3bb(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 44) = eax7;
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 24);
    eax11 = fun_3c7(rdi9);
    *reinterpret_cast<int32_t*>(rbp12 - 32) = eax11;
    *reinterpret_cast<uint32_t*>(rbp13 - 36) = *reinterpret_cast<uint32_t*>(rbp14 - 28) ^ *reinterpret_cast<uint32_t*>(rbp15 - 32);
    if (*reinterpret_cast<int32_t*>(rbp16 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp17 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 44) == gettimeofday)) {
                addr_524_6:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp19 - 40) == gettimeofday)) {
                    addr_561_7:
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
                        rdi36 = *reinterpret_cast<uint64_t*>(rbp37 - 56);
                        normalizeFloat64Subnormal(rdi36, rbp38 - 40, rbp39 - 56);
                        goto addr_561_7;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<int32_t*>(rbp41 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax42 = fun_547(rdi40);
                        *reinterpret_cast<int64_t*>(rbp43 - 8) = rax42;
                        goto addr_683_13;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp44 - 64) == gettimeofday)) {
                    rdi45 = *reinterpret_cast<uint64_t*>(rbp46 - 64);
                    normalizeFloat64Subnormal(rdi45, rbp47 - 44, rbp48 - 64);
                    goto addr_524_6;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp49 - 40))) | *reinterpret_cast<uint64_t*>(rbp50 - 56)) == gettimeofday)) {
                        fun_4f9(2);
                        *reinterpret_cast<int32_t*>(&rdi51) = *reinterpret_cast<int32_t*>(rbp52 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax53 = fun_50a(rdi51, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp54 - 8) = rax53;
                        goto addr_683_13;
                    } else {
                        fun_4dc(16);
                        *reinterpret_cast<int64_t*>(rbp55 - 8) = 0x7fffffffffffffff;
                        goto addr_683_13;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp56 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax59 = fun_4a2(rdi57);
                *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                goto addr_683_13;
            } else {
                rdi61 = *reinterpret_cast<uint64_t*>(rbp62 - 16);
                rsi63 = *reinterpret_cast<uint64_t*>(rbp64 - 24);
                rax65 = propagateFloat64NaN(rdi61, rsi63);
                *reinterpret_cast<uint64_t*>(rbp66 - 8) = rax65;
                goto addr_683_13;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp67 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp68 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi69) = *reinterpret_cast<int32_t*>(rbp70 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax71 = fun_45d(rdi69, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp72 - 8) = rax71;
                goto addr_683_13;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp73 - 64) == gettimeofday) {
                    fun_439(16);
                    *reinterpret_cast<int64_t*>(rbp74 - 8) = 0x7fffffffffffffff;
                    goto addr_683_13;
                } else {
                    rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
                    rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
                    rax79 = propagateFloat64NaN(rdi75, rsi77);
                    *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
                    goto addr_683_13;
                }
            }
        } else {
            rdi81 = *reinterpret_cast<uint64_t*>(rbp82 - 16);
            rsi83 = *reinterpret_cast<uint64_t*>(rbp84 - 24);
            rax85 = propagateFloat64NaN(rdi81, rsi83);
            *reinterpret_cast<uint64_t*>(rbp86 - 8) = rax85;
            goto addr_683_13;
        }
    }
    rdi87 = *reinterpret_cast<uint64_t*>(rbp88 - 56);
    rdx89 = *reinterpret_cast<uint64_t*>(rbp90 - 64);
    rax91 = estimateDiv128To64(rdi87, gettimeofday, rdx89);
    *reinterpret_cast<uint64_t*>(rbp92 - 72) = rax91;
    if ((*reinterpret_cast<uint64_t*>(rbp93 - 72) & 0x1ff) <= 2) {
        rdi94 = *reinterpret_cast<int64_t*>(rbp95 - 64);
        rsi96 = *reinterpret_cast<int64_t*>(rbp97 - 72);
        fun_603(rdi94, rsi96, rbp98 - 96, rbp99 - 0x68);
        rdi100 = *reinterpret_cast<int64_t*>(rbp101 - 56);
        rdx102 = *reinterpret_cast<int64_t*>(rbp103 - 96);
        rcx27 = *reinterpret_cast<uint64_t*>(rbp104 - 0x68);
        r8_105 = rbp106 - 80;
        r9_107 = rbp108 - 88;
        fun_620(rdi100, gettimeofday, rdx102, rcx27, r8_105, r9_107, v2);
        while (*reinterpret_cast<int64_t*>(rbp109 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp110 - 72) = *reinterpret_cast<int64_t*>(rbp111 - 72) - 1;
            rdi112 = *reinterpret_cast<int64_t*>(rbp113 - 80);
            rsi114 = *reinterpret_cast<int64_t*>(rbp115 - 88);
            rcx27 = *reinterpret_cast<uint64_t*>(rbp116 - 64);
            r8_105 = rbp117 - 80;
            r9_107 = rbp118 - 88;
            fun_654(rdi112, rsi114, gettimeofday, rcx27, r8_105, r9_107, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp119 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp120 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp121 - 72);
    }
    edi122 = *reinterpret_cast<int32_t*>(rbp123 - 36);
    esi124 = *reinterpret_cast<int32_t*>(rbp125 - 48);
    rdx126 = *reinterpret_cast<uint64_t*>(rbp127 - 72);
    rax128 = roundAndPackFloat64(edi122, esi124, rdx126, rcx27, r8_105, r9_107, v2);
    *reinterpret_cast<int64_t*>(rbp129 - 8) = rax128;
    addr_683_13:
    goto v130;
}

int32_t fun_3bb(int64_t rdi) {
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
    uint64_t rdi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rax38;
    int64_t rbp39;
    int64_t rbp40;
    uint64_t rdi41;
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
    int32_t edi118;
    int64_t rbp119;
    int32_t esi120;
    int64_t rbp121;
    uint64_t rdx122;
    int64_t rbp123;
    int64_t rax124;
    int64_t rbp125;
    int64_t v126;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp3 - 44) = eax4;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 24);
    eax7 = fun_3c7(rdi5);
    *reinterpret_cast<int32_t*>(rbp8 - 32) = eax7;
    *reinterpret_cast<uint32_t*>(rbp9 - 36) = *reinterpret_cast<uint32_t*>(rbp10 - 28) ^ *reinterpret_cast<uint32_t*>(rbp11 - 32);
    if (*reinterpret_cast<int32_t*>(rbp12 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp13 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 44) == gettimeofday)) {
                addr_524_5:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp15 - 40) == gettimeofday)) {
                    addr_561_6:
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
                        rdi32 = *reinterpret_cast<uint64_t*>(rbp33 - 56);
                        normalizeFloat64Subnormal(rdi32, rbp34 - 40, rbp35 - 56);
                        goto addr_561_6;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi36) = *reinterpret_cast<int32_t*>(rbp37 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax38 = fun_547(rdi36);
                        *reinterpret_cast<int64_t*>(rbp39 - 8) = rax38;
                        goto addr_683_12;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp40 - 64) == gettimeofday)) {
                    rdi41 = *reinterpret_cast<uint64_t*>(rbp42 - 64);
                    normalizeFloat64Subnormal(rdi41, rbp43 - 44, rbp44 - 64);
                    goto addr_524_5;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp45 - 40))) | *reinterpret_cast<uint64_t*>(rbp46 - 56)) == gettimeofday)) {
                        fun_4f9(2);
                        *reinterpret_cast<int32_t*>(&rdi47) = *reinterpret_cast<int32_t*>(rbp48 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax49 = fun_50a(rdi47, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp50 - 8) = rax49;
                        goto addr_683_12;
                    } else {
                        fun_4dc(16);
                        *reinterpret_cast<int64_t*>(rbp51 - 8) = 0x7fffffffffffffff;
                        goto addr_683_12;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp52 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax55 = fun_4a2(rdi53);
                *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                goto addr_683_12;
            } else {
                rdi57 = *reinterpret_cast<uint64_t*>(rbp58 - 16);
                rsi59 = *reinterpret_cast<uint64_t*>(rbp60 - 24);
                rax61 = propagateFloat64NaN(rdi57, rsi59);
                *reinterpret_cast<uint64_t*>(rbp62 - 8) = rax61;
                goto addr_683_12;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp63 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp64 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax67 = fun_45d(rdi65, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                goto addr_683_12;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp69 - 64) == gettimeofday) {
                    fun_439(16);
                    *reinterpret_cast<int64_t*>(rbp70 - 8) = 0x7fffffffffffffff;
                    goto addr_683_12;
                } else {
                    rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
                    rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
                    rax75 = propagateFloat64NaN(rdi71, rsi73);
                    *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
                    goto addr_683_12;
                }
            }
        } else {
            rdi77 = *reinterpret_cast<uint64_t*>(rbp78 - 16);
            rsi79 = *reinterpret_cast<uint64_t*>(rbp80 - 24);
            rax81 = propagateFloat64NaN(rdi77, rsi79);
            *reinterpret_cast<uint64_t*>(rbp82 - 8) = rax81;
            goto addr_683_12;
        }
    }
    rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 56);
    rdx85 = *reinterpret_cast<uint64_t*>(rbp86 - 64);
    rax87 = estimateDiv128To64(rdi83, gettimeofday, rdx85);
    *reinterpret_cast<uint64_t*>(rbp88 - 72) = rax87;
    if ((*reinterpret_cast<uint64_t*>(rbp89 - 72) & 0x1ff) <= 2) {
        rdi90 = *reinterpret_cast<int64_t*>(rbp91 - 64);
        rsi92 = *reinterpret_cast<int64_t*>(rbp93 - 72);
        fun_603(rdi90, rsi92, rbp94 - 96, rbp95 - 0x68);
        rdi96 = *reinterpret_cast<int64_t*>(rbp97 - 56);
        rdx98 = *reinterpret_cast<int64_t*>(rbp99 - 96);
        rcx23 = *reinterpret_cast<uint64_t*>(rbp100 - 0x68);
        r8_101 = rbp102 - 80;
        r9_103 = rbp104 - 88;
        fun_620(rdi96, gettimeofday, rdx98, rcx23, r8_101, r9_103, v2);
        while (*reinterpret_cast<int64_t*>(rbp105 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp106 - 72) = *reinterpret_cast<int64_t*>(rbp107 - 72) - 1;
            rdi108 = *reinterpret_cast<int64_t*>(rbp109 - 80);
            rsi110 = *reinterpret_cast<int64_t*>(rbp111 - 88);
            rcx23 = *reinterpret_cast<uint64_t*>(rbp112 - 64);
            r8_101 = rbp113 - 80;
            r9_103 = rbp114 - 88;
            fun_654(rdi108, rsi110, gettimeofday, rcx23, r8_101, r9_103, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp115 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp116 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp117 - 72);
    }
    edi118 = *reinterpret_cast<int32_t*>(rbp119 - 36);
    esi120 = *reinterpret_cast<int32_t*>(rbp121 - 48);
    rdx122 = *reinterpret_cast<uint64_t*>(rbp123 - 72);
    rax124 = roundAndPackFloat64(edi118, esi120, rdx122, rcx23, r8_101, r9_103, v2);
    *reinterpret_cast<int64_t*>(rbp125 - 8) = rax124;
    addr_683_12:
    goto v126;
}

int32_t fun_3c7(int64_t rdi) {
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
    uint64_t rdi28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rax34;
    int64_t rbp35;
    int64_t rbp36;
    uint64_t rdi37;
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
    int32_t edi114;
    int64_t rbp115;
    int32_t esi116;
    int64_t rbp117;
    uint64_t rdx118;
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
                addr_524_4:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 40) == gettimeofday)) {
                    addr_561_5:
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
                        rdi28 = *reinterpret_cast<uint64_t*>(rbp29 - 56);
                        normalizeFloat64Subnormal(rdi28, rbp30 - 40, rbp31 - 56);
                        goto addr_561_5;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi32) = *reinterpret_cast<int32_t*>(rbp33 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax34 = fun_547(rdi32);
                        *reinterpret_cast<int64_t*>(rbp35 - 8) = rax34;
                        goto addr_683_11;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp36 - 64) == gettimeofday)) {
                    rdi37 = *reinterpret_cast<uint64_t*>(rbp38 - 64);
                    normalizeFloat64Subnormal(rdi37, rbp39 - 44, rbp40 - 64);
                    goto addr_524_4;
                } else {
                    if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp41 - 40))) | *reinterpret_cast<uint64_t*>(rbp42 - 56)) == gettimeofday)) {
                        fun_4f9(2);
                        *reinterpret_cast<int32_t*>(&rdi43) = *reinterpret_cast<int32_t*>(rbp44 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax45 = fun_50a(rdi43, 0x7ff, gettimeofday);
                        *reinterpret_cast<int64_t*>(rbp46 - 8) = rax45;
                        goto addr_683_11;
                    } else {
                        fun_4dc(16);
                        *reinterpret_cast<int64_t*>(rbp47 - 8) = 0x7fffffffffffffff;
                        goto addr_683_11;
                    }
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp48 - 64) == gettimeofday) {
                *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax51 = fun_4a2(rdi49);
                *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                goto addr_683_11;
            } else {
                rdi53 = *reinterpret_cast<uint64_t*>(rbp54 - 16);
                rsi55 = *reinterpret_cast<uint64_t*>(rbp56 - 24);
                rax57 = propagateFloat64NaN(rdi53, rsi55);
                *reinterpret_cast<uint64_t*>(rbp58 - 8) = rax57;
                goto addr_683_11;
            }
        }
    } else {
        if (*reinterpret_cast<int64_t*>(rbp59 - 56) == gettimeofday) {
            if (*reinterpret_cast<int32_t*>(rbp60 - 44) != 0x7ff) {
                *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax63 = fun_45d(rdi61, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                goto addr_683_11;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp65 - 64) == gettimeofday) {
                    fun_439(16);
                    *reinterpret_cast<int64_t*>(rbp66 - 8) = 0x7fffffffffffffff;
                    goto addr_683_11;
                } else {
                    rdi67 = *reinterpret_cast<uint64_t*>(rbp68 - 16);
                    rsi69 = *reinterpret_cast<uint64_t*>(rbp70 - 24);
                    rax71 = propagateFloat64NaN(rdi67, rsi69);
                    *reinterpret_cast<uint64_t*>(rbp72 - 8) = rax71;
                    goto addr_683_11;
                }
            }
        } else {
            rdi73 = *reinterpret_cast<uint64_t*>(rbp74 - 16);
            rsi75 = *reinterpret_cast<uint64_t*>(rbp76 - 24);
            rax77 = propagateFloat64NaN(rdi73, rsi75);
            *reinterpret_cast<uint64_t*>(rbp78 - 8) = rax77;
            goto addr_683_11;
        }
    }
    rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 56);
    rdx81 = *reinterpret_cast<uint64_t*>(rbp82 - 64);
    rax83 = estimateDiv128To64(rdi79, gettimeofday, rdx81);
    *reinterpret_cast<uint64_t*>(rbp84 - 72) = rax83;
    if ((*reinterpret_cast<uint64_t*>(rbp85 - 72) & 0x1ff) <= 2) {
        rdi86 = *reinterpret_cast<int64_t*>(rbp87 - 64);
        rsi88 = *reinterpret_cast<int64_t*>(rbp89 - 72);
        fun_603(rdi86, rsi88, rbp90 - 96, rbp91 - 0x68);
        rdi92 = *reinterpret_cast<int64_t*>(rbp93 - 56);
        rdx94 = *reinterpret_cast<int64_t*>(rbp95 - 96);
        rcx19 = *reinterpret_cast<uint64_t*>(rbp96 - 0x68);
        r8_97 = rbp98 - 80;
        r9_99 = rbp100 - 88;
        fun_620(rdi92, gettimeofday, rdx94, rcx19, r8_97, r9_99, v2);
        while (*reinterpret_cast<int64_t*>(rbp101 - 80) < reinterpret_cast<int64_t>(gettimeofday)) {
            *reinterpret_cast<int64_t*>(rbp102 - 72) = *reinterpret_cast<int64_t*>(rbp103 - 72) - 1;
            rdi104 = *reinterpret_cast<int64_t*>(rbp105 - 80);
            rsi106 = *reinterpret_cast<int64_t*>(rbp107 - 88);
            rcx19 = *reinterpret_cast<uint64_t*>(rbp108 - 64);
            r8_97 = rbp109 - 80;
            r9_99 = rbp110 - 88;
            fun_654(rdi104, rsi106, gettimeofday, rcx19, r8_97, r9_99, v2);
        }
        *reinterpret_cast<uint64_t*>(rbp111 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp112 - 88) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp113 - 72);
    }
    edi114 = *reinterpret_cast<int32_t*>(rbp115 - 36);
    esi116 = *reinterpret_cast<int32_t*>(rbp117 - 48);
    rdx118 = *reinterpret_cast<uint64_t*>(rbp119 - 72);
    rax120 = roundAndPackFloat64(edi114, esi116, rdx118, rcx19, r8_97, r9_99, v2);
    *reinterpret_cast<int64_t*>(rbp121 - 8) = rax120;
    addr_683_11:
    goto v122;
}

void gettimeofday(int64_t rdi) {
}

void fun_1c8() {
    int64_t rbp1;
    int64_t rax2;
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
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<int64_t*>(rbp1 - 64) = rax2;
    *reinterpret_cast<uint64_t*>(rbp3 - 56) = (static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp4 - 64) < *reinterpret_cast<uint64_t*>(rbp5 - 72))) & 1)))) << 32) + (*reinterpret_cast<uint64_t*>(rbp6 - 64) >> 32) + *reinterpret_cast<int64_t*>(rbp7 - 56);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = *reinterpret_cast<int64_t*>(rbp9 - 64) << 32;
    *reinterpret_cast<int64_t*>(rbp10 - 80) = *reinterpret_cast<int64_t*>(rbp11 - 64) + *reinterpret_cast<int64_t*>(rbp12 - 80);
    *reinterpret_cast<int64_t*>(rbp13 - 56) = reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint64_t*>(rbp14 - 80) < *reinterpret_cast<uint64_t*>(rbp15 - 64))) & 1))) + *reinterpret_cast<int64_t*>(rbp16 - 56);
    **reinterpret_cast<int64_t**>(rbp17 - 32) = *reinterpret_cast<int64_t*>(rbp18 - 80);
    **reinterpret_cast<int64_t**>(rbp19 - 24) = *reinterpret_cast<int64_t*>(rbp20 - 56);
    goto v21;
}

uint32_t* g251 = reinterpret_cast<uint32_t*>(0x58b48080b);

uint32_t* g25a = reinterpret_cast<uint32_t*>(0x48559066c35d0889);

void fun_248() {
    uint32_t* rax1;
    uint32_t* rax2;
    uint32_t ecx3;
    int64_t v4;

    rax1 = g251;
    rax2 = g25a;
    *rax2 = ecx3 | *rax1;
    goto v4;
}

void fun_268() {
}

void float64_is_signaling_nan(int64_t rdi) {
}

void fun_2a8(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    int1_t zf5;
    signed char* rax6;
    int64_t rbp7;
    signed char al8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    __asm__("ror byte [rax-0x7f], 0xf9");
    *rdi = reinterpret_cast<signed char>(*rdi - 1);
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    zf5 = reinterpret_cast<int1_t>(*rax6 == gettimeofday);
    *reinterpret_cast<signed char*>(rbp7 - 9) = al8;
    if (zf5) {
        *reinterpret_cast<unsigned char*>(rbp9 - 9) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>((0x7ffffffffffff & *reinterpret_cast<uint64_t*>(rbp10 - 8)) == gettimeofday));
    }
    goto v11;
}

void submain(int32_t* rdi, int32_t* rsi) {
    rtclock();
    *rdi = *rsi;
}

uint64_t extractFloat64Frac(uint64_t rdi) {
    return 0xfffffffffffff & rdi;
}

uint64_t extractFloat64Exp(uint64_t rdi) {
    return rdi >> 52 & 0x7ff;
}

uint64_t extractFloat64Sign(uint64_t rdi) {
    return rdi >> 63;
}

int32_t* ullong_to_double(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    return rdi;
}

int64_t packFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    return (static_cast<int64_t>(edi) << 63) + (static_cast<int64_t>(esi) << 52) + rdx;
}

void float64_div(int64_t rdi, int64_t rsi) {
    fun_389(rdi);
}

