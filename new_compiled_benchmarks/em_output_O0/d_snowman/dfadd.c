
void gettimeofday(int64_t rdi);

int64_t fun_2c6(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2b5(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_2c6(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

void fun_337(int64_t rdi);

uint32_t* g352 = reinterpret_cast<uint32_t*>(0x58b4801c983088b);

uint32_t* g35e = reinterpret_cast<uint32_t*>(0x6348e8458b480889);

int64_t fun_3b7(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_305(int64_t rdi) {
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
        fun_337(4);
    }
    if (*reinterpret_cast<int32_t*>(rbp8 - 44) != gettimeofday) {
        rax9 = g352;
        rax10 = g35e;
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
    rax26 = fun_3b7(rdi20, rsi22, rdx24);
    *reinterpret_cast<int64_t*>(rbp27 - 8) = rax26;
    goto v28;
}

void fun_337(int64_t rdi) {
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
        rax3 = g352;
        rax4 = g35e;
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
    rax20 = fun_3b7(rdi14, rsi16, rdx18);
    *reinterpret_cast<int64_t*>(rbp21 - 8) = rax20;
    goto v22;
}

int32_t fun_729(uint64_t rdi);

uint32_t fun_735(uint64_t rdi);

int32_t fun_741(uint64_t rdi);

uint32_t fun_74d(uint64_t rdi);

void fun_78d(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi) {
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;

    fun_729(rdi);
    eax3 = fun_735(rdi);
    eax4 = fun_741(rsi);
    eax5 = fun_74d(rsi);
    v6 = 0x8000000000000 | rdi;
    v7 = 0x8000000000000 | rsi;
    if ((eax3 | eax5) != gettimeofday) {
        fun_78d(16);
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

int64_t fun_66c(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

void fun_78d(int64_t rdi) {
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

int64_t fun_b04(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t* gbc6 = reinterpret_cast<int64_t*>(0x24c0950fd1043b48);

int64_t* gb8b = reinterpret_cast<int64_t*>(0xf0458948c8048b48);

int64_t* gb9e = reinterpret_cast<int64_t*>(0xe8458948c8048b48);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void rtclock();

void fun_c1a(int64_t rdi, int64_t rsi);

int64_t fun_bb3() {
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
        rcx3 = gbc6;
        *reinterpret_cast<uint32_t*>(rbp4 - 4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp5 - 32) != rcx3[*reinterpret_cast<int32_t*>(rbp6 - 8)])) & 1) + *reinterpret_cast<int32_t*>(rbp7 - 4);
        *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 8) >= 46) 
            break;
        rax11 = gb8b;
        *reinterpret_cast<int64_t*>(rbp12 - 16) = rax11[*reinterpret_cast<int32_t*>(rbp13 - 8)];
        rax14 = gb9e;
        *reinterpret_cast<int64_t*>(rbp15 - 24) = rax14[*reinterpret_cast<int32_t*>(rbp16 - 8)];
        rdi17 = *reinterpret_cast<struct s0**>(rbp18 - 16);
        rsi19 = *reinterpret_cast<struct s1**>(rbp20 - 24);
        rax2 = fun_bb3();
    }
    rtclock();
    rdi17->f0 = rsi19->f0;
    rsi21 = &rsi19->f4;
    rdi17->f4 = *rsi21;
    __asm__("subsd xmm0, [rax]");
    fun_c1a(0xc13, rsi21 + 1);
    goto v22;
}

void fun_c1a(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_cd3(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

int64_t fun_2c6(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

int64_t fun_3b7(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
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
    v5 = *reinterpret_cast<int32_t*>(0xc8d + rcx4 * 4) + v3;
    return v5;
}

int32_t fun_729(uint64_t rdi) {
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
    eax6 = fun_735(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 24) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_741(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 16);
    eax14 = fun_74d(rdi12);
    *reinterpret_cast<uint32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint64_t*>(rbp16 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 8);
    *reinterpret_cast<uint64_t*>(rbp18 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp20 - 24) | *reinterpret_cast<uint32_t*>(rbp21 - 32)) != gettimeofday) {
        fun_78d(16);
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

int64_t fun_6fa(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_566(int64_t rdi, int64_t rsi, int64_t rdx) {
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
    rax25 = fun_6fa(rdi19, rsi21, rdx23);
    *reinterpret_cast<int64_t*>(rbp26 - 8) = rax25;
    goto v27;
}

int64_t fun_5ba(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_5ff(int64_t rdi) {
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
    rax23 = fun_6fa(rdi17, rsi19, rdx21);
    *reinterpret_cast<int64_t*>(rbp24 - 8) = rax23;
    goto v25;
}

int64_t fun_6fa(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

void fun_8c4(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_aa5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int64_t fun_932(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_97d() {
    int64_t rbp1;
    int64_t rax2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp1 - 8) = rax2;
    goto v3;
}

void fun_9c2(int64_t rdi) {
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
    rax19 = fun_aa5(rdi13, rsi15, rdx17);
    *reinterpret_cast<int64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

void fun_a69(int64_t rdi, int64_t rsi, int64_t rdx) {
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
    rax19 = fun_aa5(rdi13, rsi15, rdx17);
    *reinterpret_cast<int64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

int32_t fun_cb5();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_cb5();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0xccc);
        fun_cd3(0xccc, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

int32_t fun_4a9(int64_t rdi);

int64_t fun_4b5(int64_t rdi);

int32_t fun_4c2(int64_t rdi);

void fun_49c(int64_t rdi) {
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
    eax6 = fun_4a9(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_4b5(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_4c2(rdi12);
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
                    rax34 = fun_66c(rdi32);
                    *reinterpret_cast<int64_t*>(rbp35 - 8) = rax34;
                    goto addr_6fe_11;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp36 - 48) | *reinterpret_cast<uint64_t*>(rbp37 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp38 - 8) = *reinterpret_cast<int64_t*>(rbp39 - 16);
                    goto addr_6fe_11;
                } else {
                    rdi40 = *reinterpret_cast<uint64_t*>(rbp41 - 16);
                    rsi42 = *reinterpret_cast<uint64_t*>(rbp43 - 24);
                    rax44 = propagateFloat64NaN(rdi40, rsi42);
                    *reinterpret_cast<uint64_t*>(rbp45 - 8) = rax44;
                    goto addr_6fe_11;
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
                fun_5ff(rdi52);
                *reinterpret_cast<int32_t*>(rbp54 - 40) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                goto addr_69b_22;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp56 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax59 = fun_5ba(rdi57, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                    goto addr_6fe_11;
                } else {
                    rdi61 = *reinterpret_cast<uint64_t*>(rbp62 - 16);
                    rsi63 = *reinterpret_cast<uint64_t*>(rbp64 - 24);
                    rax65 = propagateFloat64NaN(rdi61, rsi63);
                    *reinterpret_cast<uint64_t*>(rbp66 - 8) = rax65;
                    goto addr_6fe_11;
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
            fun_566(rdi73, rsi75, rbp77 - 56);
            *reinterpret_cast<int32_t*>(rbp78 - 40) = *reinterpret_cast<int32_t*>(rbp79 - 32);
            goto addr_69b_22;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp80 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp81 - 8) = *reinterpret_cast<int64_t*>(rbp82 - 16);
                goto addr_6fe_11;
            } else {
                rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
                rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
                rax87 = propagateFloat64NaN(rdi83, rsi85);
                *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
                goto addr_6fe_11;
            }
        }
    }
    addr_6eb_36:
    *reinterpret_cast<int32_t*>(&rdi89) = *reinterpret_cast<int32_t*>(rbp90 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi89) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi91) = *reinterpret_cast<int32_t*>(rbp92 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi91) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx93 = *reinterpret_cast<int64_t*>(rbp94 - 64);
    rax95 = fun_6fa(rdi89, rsi91, rdx93);
    *reinterpret_cast<int64_t*>(rbp96 - 8) = rax95;
    addr_6fe_11:
    goto v97;
    addr_69b_22:
    *reinterpret_cast<uint64_t*>(rbp98 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp99 - 48);
    *reinterpret_cast<int64_t*>(rbp100 - 64) = *reinterpret_cast<int64_t*>(rbp101 - 48) + *reinterpret_cast<int64_t*>(rbp102 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp103 - 40) = *reinterpret_cast<int32_t*>(rbp104 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp105 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp106 - 64) = *reinterpret_cast<int64_t*>(rbp107 - 48) + *reinterpret_cast<int64_t*>(rbp108 - 56);
        *reinterpret_cast<int32_t*>(rbp109 - 40) = *reinterpret_cast<int32_t*>(rbp110 - 40) + 1;
    }
    goto addr_6eb_36;
}

uint32_t fun_735(uint64_t rdi) {
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
    eax6 = fun_741(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_74d(rdi8);
    *reinterpret_cast<uint32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint64_t*>(rbp12 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp13 - 8);
    *reinterpret_cast<uint64_t*>(rbp14 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp16 - 24) | *reinterpret_cast<uint32_t*>(rbp17 - 32)) != gettimeofday) {
        fun_78d(16);
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

int32_t fun_829(int64_t rdi);

int64_t fun_835(int64_t rdi);

int32_t fun_842(int64_t rdi);

int32_t* g91c = reinterpret_cast<int32_t*>(0x124c0940f033883);

void fun_81c(int64_t rdi) {
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
    eax6 = fun_829(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_835(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_842(rdi12);
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
                    goto addr_8fd_10;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp31 - 48) | *reinterpret_cast<uint64_t*>(rbp32 - 56)) == gettimeofday) {
                    fun_8c4(16);
                    *reinterpret_cast<int64_t*>(rbp33 - 8) = 0x7fffffffffffffff;
                    goto addr_aa9_14;
                } else {
                    rdi34 = *reinterpret_cast<uint64_t*>(rbp35 - 16);
                    rsi36 = *reinterpret_cast<uint64_t*>(rbp37 - 24);
                    rax38 = propagateFloat64NaN(rdi34, rsi36);
                    *reinterpret_cast<uint64_t*>(rbp39 - 8) = rax38;
                    goto addr_aa9_14;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp40 - 36) != 0x7ff) 
                goto addr_986_18; else 
                goto addr_948_19;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp41 - 32) != 0x7ff) 
            goto addr_a2f_22; else 
            goto addr_a01_23;
    }
    if (*reinterpret_cast<uint64_t*>(rbp42 - 48) >= *reinterpret_cast<uint64_t*>(rbp43 - 56)) {
        rax44 = g91c;
        *reinterpret_cast<uint32_t*>(&rdi45) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax44 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax46 = fun_932(rdi45);
        *reinterpret_cast<int64_t*>(rbp47 - 8) = rax46;
    } else {
        goto addr_9d4_28;
    }
    addr_aa9_14:
    goto v48;
    addr_9d4_28:
    *reinterpret_cast<int64_t*>(rbp49 - 64) = *reinterpret_cast<int64_t*>(rbp50 - 56) - *reinterpret_cast<int64_t*>(rbp51 - 48);
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 36);
    *reinterpret_cast<uint32_t*>(rbp54 - 28) = *reinterpret_cast<uint32_t*>(rbp55 - 28) ^ 1;
    addr_a8d_29:
    *reinterpret_cast<int32_t*>(rbp56 - 40) = *reinterpret_cast<int32_t*>(rbp57 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi58) = *reinterpret_cast<int32_t*>(rbp59 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi60) = *reinterpret_cast<int32_t*>(rbp61 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx62 = *reinterpret_cast<int64_t*>(rbp63 - 64);
    rax64 = fun_aa5(rdi58, rsi60, rdx62);
    *reinterpret_cast<int64_t*>(rbp65 - 8) = rax64;
    goto addr_aa9_14;
    addr_8fd_10:
    addr_a7b_31:
    *reinterpret_cast<int64_t*>(rbp66 - 64) = *reinterpret_cast<int64_t*>(rbp67 - 48) - *reinterpret_cast<int64_t*>(rbp68 - 56);
    *reinterpret_cast<int32_t*>(rbp69 - 40) = *reinterpret_cast<int32_t*>(rbp70 - 32);
    goto addr_a8d_29;
    addr_986_18:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp71 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp72 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp73 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp74 - 68) = *reinterpret_cast<int32_t*>(rbp75 - 68) + 1;
    }
    rdi76 = *reinterpret_cast<int64_t*>(rbp77 - 48);
    fun_9c2(rdi76);
    *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    goto addr_9d4_28;
    addr_948_19:
    if (*reinterpret_cast<int64_t*>(rbp80 - 56) == gettimeofday) {
        rax81 = fun_97d();
        *reinterpret_cast<int64_t*>(rbp82 - 8) = rax81;
        goto addr_aa9_14;
    } else {
        rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
        rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
        rax87 = propagateFloat64NaN(rdi83, rsi85);
        *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
        goto addr_aa9_14;
    }
    addr_a2f_22:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp89 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp90 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp92 - 68) = *reinterpret_cast<int32_t*>(rbp93 - 68) - 1;
    }
    rdi94 = *reinterpret_cast<int64_t*>(rbp95 - 56);
    *reinterpret_cast<int32_t*>(&rsi96) = *reinterpret_cast<int32_t*>(rbp97 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi96) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_a69(rdi94, rsi96, rbp98 - 56);
    *reinterpret_cast<uint64_t*>(rbp99 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp100 - 48);
    goto addr_a7b_31;
    addr_a01_23:
    if (*reinterpret_cast<int64_t*>(rbp101 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp102 - 8) = *reinterpret_cast<int64_t*>(rbp103 - 16);
        goto addr_aa9_14;
    } else {
        rdi104 = *reinterpret_cast<uint64_t*>(rbp105 - 16);
        rsi106 = *reinterpret_cast<uint64_t*>(rbp107 - 24);
        rax108 = propagateFloat64NaN(rdi104, rsi106);
        *reinterpret_cast<uint64_t*>(rbp109 - 8) = rax108;
        goto addr_aa9_14;
    }
}

int32_t fun_ae5(int64_t rdi);

int64_t fun_b1d(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_ad9(int64_t rdi) {
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
    eax6 = fun_ae5(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    if (*reinterpret_cast<int32_t*>(rbp8 - 28) != *reinterpret_cast<int32_t*>(rbp9 - 32)) {
        rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 16);
        rsi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
        *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(rbp15 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax16 = fun_b1d(rdi10, rsi12, rdx14);
        *reinterpret_cast<int64_t*>(rbp17 - 8) = rax16;
    } else {
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 16);
        rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
        *reinterpret_cast<int32_t*>(&rdx22) = *reinterpret_cast<int32_t*>(rbp23 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax24 = fun_b04(rdi18, rsi20, rdx22);
        *reinterpret_cast<int64_t*>(rbp25 - 8) = rax24;
    }
    goto v26;
}

int64_t fun_b1d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int32_t gccc = 0xe800b0;

int32_t fun_cb5() {
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
        fun_cd3(0xccc, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    gccc = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

int32_t fun_4a9(int64_t rdi) {
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
    rax6 = fun_4b5(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_4c2(rdi8);
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
                    rax30 = fun_66c(rdi28);
                    *reinterpret_cast<int64_t*>(rbp31 - 8) = rax30;
                    goto addr_6fe_10;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp32 - 48) | *reinterpret_cast<uint64_t*>(rbp33 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp34 - 8) = *reinterpret_cast<int64_t*>(rbp35 - 16);
                    goto addr_6fe_10;
                } else {
                    rdi36 = *reinterpret_cast<uint64_t*>(rbp37 - 16);
                    rsi38 = *reinterpret_cast<uint64_t*>(rbp39 - 24);
                    rax40 = propagateFloat64NaN(rdi36, rsi38);
                    *reinterpret_cast<uint64_t*>(rbp41 - 8) = rax40;
                    goto addr_6fe_10;
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
                fun_5ff(rdi48);
                *reinterpret_cast<int32_t*>(rbp50 - 40) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                goto addr_69b_21;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp52 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax55 = fun_5ba(rdi53, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                    goto addr_6fe_10;
                } else {
                    rdi57 = *reinterpret_cast<uint64_t*>(rbp58 - 16);
                    rsi59 = *reinterpret_cast<uint64_t*>(rbp60 - 24);
                    rax61 = propagateFloat64NaN(rdi57, rsi59);
                    *reinterpret_cast<uint64_t*>(rbp62 - 8) = rax61;
                    goto addr_6fe_10;
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
            fun_566(rdi69, rsi71, rbp73 - 56);
            *reinterpret_cast<int32_t*>(rbp74 - 40) = *reinterpret_cast<int32_t*>(rbp75 - 32);
            goto addr_69b_21;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp76 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp77 - 8) = *reinterpret_cast<int64_t*>(rbp78 - 16);
                goto addr_6fe_10;
            } else {
                rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
                rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
                rax83 = propagateFloat64NaN(rdi79, rsi81);
                *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
                goto addr_6fe_10;
            }
        }
    }
    addr_6eb_35:
    *reinterpret_cast<int32_t*>(&rdi85) = *reinterpret_cast<int32_t*>(rbp86 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi85) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi87) = *reinterpret_cast<int32_t*>(rbp88 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx89 = *reinterpret_cast<int64_t*>(rbp90 - 64);
    rax91 = fun_6fa(rdi85, rsi87, rdx89);
    *reinterpret_cast<int64_t*>(rbp92 - 8) = rax91;
    addr_6fe_10:
    goto v93;
    addr_69b_21:
    *reinterpret_cast<uint64_t*>(rbp94 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp95 - 48);
    *reinterpret_cast<int64_t*>(rbp96 - 64) = *reinterpret_cast<int64_t*>(rbp97 - 48) + *reinterpret_cast<int64_t*>(rbp98 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp99 - 40) = *reinterpret_cast<int32_t*>(rbp100 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp101 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp102 - 64) = *reinterpret_cast<int64_t*>(rbp103 - 48) + *reinterpret_cast<int64_t*>(rbp104 - 56);
        *reinterpret_cast<int32_t*>(rbp105 - 40) = *reinterpret_cast<int32_t*>(rbp106 - 40) + 1;
    }
    goto addr_6eb_35;
}

int32_t fun_741(uint64_t rdi) {
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
    eax6 = fun_74d(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint64_t*>(rbp8 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<uint64_t*>(rbp10 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp12 - 24) | *reinterpret_cast<uint32_t*>(rbp13 - 32)) != gettimeofday) {
        fun_78d(16);
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

int32_t fun_829(int64_t rdi) {
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
    rax6 = fun_835(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_842(rdi8);
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
                    goto addr_8fd_9;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp27 - 48) | *reinterpret_cast<uint64_t*>(rbp28 - 56)) == gettimeofday) {
                    fun_8c4(16);
                    *reinterpret_cast<int64_t*>(rbp29 - 8) = 0x7fffffffffffffff;
                    goto addr_aa9_13;
                } else {
                    rdi30 = *reinterpret_cast<uint64_t*>(rbp31 - 16);
                    rsi32 = *reinterpret_cast<uint64_t*>(rbp33 - 24);
                    rax34 = propagateFloat64NaN(rdi30, rsi32);
                    *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
                    goto addr_aa9_13;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp36 - 36) != 0x7ff) 
                goto addr_986_17; else 
                goto addr_948_18;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp37 - 32) != 0x7ff) 
            goto addr_a2f_21; else 
            goto addr_a01_22;
    }
    if (*reinterpret_cast<uint64_t*>(rbp38 - 48) >= *reinterpret_cast<uint64_t*>(rbp39 - 56)) {
        rax40 = g91c;
        *reinterpret_cast<uint32_t*>(&rdi41) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax40 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax42 = fun_932(rdi41);
        *reinterpret_cast<int64_t*>(rbp43 - 8) = rax42;
    } else {
        goto addr_9d4_27;
    }
    addr_aa9_13:
    goto v44;
    addr_9d4_27:
    *reinterpret_cast<int64_t*>(rbp45 - 64) = *reinterpret_cast<int64_t*>(rbp46 - 56) - *reinterpret_cast<int64_t*>(rbp47 - 48);
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 36);
    *reinterpret_cast<uint32_t*>(rbp50 - 28) = *reinterpret_cast<uint32_t*>(rbp51 - 28) ^ 1;
    addr_a8d_28:
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi54) = *reinterpret_cast<int32_t*>(rbp55 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi56) = *reinterpret_cast<int32_t*>(rbp57 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx58 = *reinterpret_cast<int64_t*>(rbp59 - 64);
    rax60 = fun_aa5(rdi54, rsi56, rdx58);
    *reinterpret_cast<int64_t*>(rbp61 - 8) = rax60;
    goto addr_aa9_13;
    addr_8fd_9:
    addr_a7b_30:
    *reinterpret_cast<int64_t*>(rbp62 - 64) = *reinterpret_cast<int64_t*>(rbp63 - 48) - *reinterpret_cast<int64_t*>(rbp64 - 56);
    *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 32);
    goto addr_a8d_28;
    addr_986_17:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp67 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp68 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp69 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp70 - 68) = *reinterpret_cast<int32_t*>(rbp71 - 68) + 1;
    }
    rdi72 = *reinterpret_cast<int64_t*>(rbp73 - 48);
    fun_9c2(rdi72);
    *reinterpret_cast<uint64_t*>(rbp74 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp75 - 56);
    goto addr_9d4_27;
    addr_948_18:
    if (*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) {
        rax77 = fun_97d();
        *reinterpret_cast<int64_t*>(rbp78 - 8) = rax77;
        goto addr_aa9_13;
    } else {
        rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
        rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
        rax83 = propagateFloat64NaN(rdi79, rsi81);
        *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
        goto addr_aa9_13;
    }
    addr_a2f_21:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp85 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp86 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp88 - 68) = *reinterpret_cast<int32_t*>(rbp89 - 68) - 1;
    }
    rdi90 = *reinterpret_cast<int64_t*>(rbp91 - 56);
    *reinterpret_cast<int32_t*>(&rsi92) = *reinterpret_cast<int32_t*>(rbp93 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi92) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_a69(rdi90, rsi92, rbp94 - 56);
    *reinterpret_cast<uint64_t*>(rbp95 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp96 - 48);
    goto addr_a7b_30;
    addr_a01_22:
    if (*reinterpret_cast<int64_t*>(rbp97 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp98 - 8) = *reinterpret_cast<int64_t*>(rbp99 - 16);
        goto addr_aa9_13;
    } else {
        rdi100 = *reinterpret_cast<uint64_t*>(rbp101 - 16);
        rsi102 = *reinterpret_cast<uint64_t*>(rbp103 - 24);
        rax104 = propagateFloat64NaN(rdi100, rsi102);
        *reinterpret_cast<uint64_t*>(rbp105 - 8) = rax104;
        goto addr_aa9_13;
    }
}

int32_t fun_ae5(int64_t rdi) {
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
        rax12 = fun_b1d(rdi6, rsi8, rdx10);
        *reinterpret_cast<int64_t*>(rbp13 - 8) = rax12;
    } else {
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 16);
        rsi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
        *reinterpret_cast<int32_t*>(&rdx18) = *reinterpret_cast<int32_t*>(rbp19 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax20 = fun_b04(rdi14, rsi16, rdx18);
        *reinterpret_cast<int64_t*>(rbp21 - 8) = rax20;
    }
    goto v22;
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

void fun_40b(int64_t rdi) {
    int64_t v2;

    goto v2;
}

int64_t fun_4b5(int64_t rdi) {
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
    eax6 = fun_4c2(rdi4);
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
                    rax26 = fun_66c(rdi24);
                    *reinterpret_cast<int64_t*>(rbp27 - 8) = rax26;
                    goto addr_6fe_9;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp28 - 48) | *reinterpret_cast<uint64_t*>(rbp29 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp30 - 8) = *reinterpret_cast<int64_t*>(rbp31 - 16);
                    goto addr_6fe_9;
                } else {
                    rdi32 = *reinterpret_cast<uint64_t*>(rbp33 - 16);
                    rsi34 = *reinterpret_cast<uint64_t*>(rbp35 - 24);
                    rax36 = propagateFloat64NaN(rdi32, rsi34);
                    *reinterpret_cast<uint64_t*>(rbp37 - 8) = rax36;
                    goto addr_6fe_9;
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
                fun_5ff(rdi44);
                *reinterpret_cast<int32_t*>(rbp46 - 40) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                goto addr_69b_20;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp48 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax51 = fun_5ba(rdi49, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                    goto addr_6fe_9;
                } else {
                    rdi53 = *reinterpret_cast<uint64_t*>(rbp54 - 16);
                    rsi55 = *reinterpret_cast<uint64_t*>(rbp56 - 24);
                    rax57 = propagateFloat64NaN(rdi53, rsi55);
                    *reinterpret_cast<uint64_t*>(rbp58 - 8) = rax57;
                    goto addr_6fe_9;
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
            fun_566(rdi65, rsi67, rbp69 - 56);
            *reinterpret_cast<int32_t*>(rbp70 - 40) = *reinterpret_cast<int32_t*>(rbp71 - 32);
            goto addr_69b_20;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp72 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp73 - 8) = *reinterpret_cast<int64_t*>(rbp74 - 16);
                goto addr_6fe_9;
            } else {
                rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
                rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
                rax79 = propagateFloat64NaN(rdi75, rsi77);
                *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
                goto addr_6fe_9;
            }
        }
    }
    addr_6eb_34:
    *reinterpret_cast<int32_t*>(&rdi81) = *reinterpret_cast<int32_t*>(rbp82 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi83) = *reinterpret_cast<int32_t*>(rbp84 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi83) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx85 = *reinterpret_cast<int64_t*>(rbp86 - 64);
    rax87 = fun_6fa(rdi81, rsi83, rdx85);
    *reinterpret_cast<int64_t*>(rbp88 - 8) = rax87;
    addr_6fe_9:
    goto v89;
    addr_69b_20:
    *reinterpret_cast<uint64_t*>(rbp90 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 48);
    *reinterpret_cast<int64_t*>(rbp92 - 64) = *reinterpret_cast<int64_t*>(rbp93 - 48) + *reinterpret_cast<int64_t*>(rbp94 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp95 - 40) = *reinterpret_cast<int32_t*>(rbp96 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp97 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp98 - 64) = *reinterpret_cast<int64_t*>(rbp99 - 48) + *reinterpret_cast<int64_t*>(rbp100 - 56);
        *reinterpret_cast<int32_t*>(rbp101 - 40) = *reinterpret_cast<int32_t*>(rbp102 - 40) + 1;
    }
    goto addr_6eb_34;
}

uint32_t fun_74d(uint64_t rdi) {
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
        fun_78d(16);
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

int64_t fun_835(int64_t rdi) {
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
    eax6 = fun_842(rdi4);
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
                    goto addr_8fd_8;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp23 - 48) | *reinterpret_cast<uint64_t*>(rbp24 - 56)) == gettimeofday) {
                    fun_8c4(16);
                    *reinterpret_cast<int64_t*>(rbp25 - 8) = 0x7fffffffffffffff;
                    goto addr_aa9_12;
                } else {
                    rdi26 = *reinterpret_cast<uint64_t*>(rbp27 - 16);
                    rsi28 = *reinterpret_cast<uint64_t*>(rbp29 - 24);
                    rax30 = propagateFloat64NaN(rdi26, rsi28);
                    *reinterpret_cast<uint64_t*>(rbp31 - 8) = rax30;
                    goto addr_aa9_12;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp32 - 36) != 0x7ff) 
                goto addr_986_16; else 
                goto addr_948_17;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp33 - 32) != 0x7ff) 
            goto addr_a2f_20; else 
            goto addr_a01_21;
    }
    if (*reinterpret_cast<uint64_t*>(rbp34 - 48) >= *reinterpret_cast<uint64_t*>(rbp35 - 56)) {
        rax36 = g91c;
        *reinterpret_cast<uint32_t*>(&rdi37) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax36 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax38 = fun_932(rdi37);
        *reinterpret_cast<int64_t*>(rbp39 - 8) = rax38;
    } else {
        goto addr_9d4_26;
    }
    addr_aa9_12:
    goto v40;
    addr_9d4_26:
    *reinterpret_cast<int64_t*>(rbp41 - 64) = *reinterpret_cast<int64_t*>(rbp42 - 56) - *reinterpret_cast<int64_t*>(rbp43 - 48);
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 36);
    *reinterpret_cast<uint32_t*>(rbp46 - 28) = *reinterpret_cast<uint32_t*>(rbp47 - 28) ^ 1;
    addr_a8d_27:
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi50) = *reinterpret_cast<int32_t*>(rbp51 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi52) = *reinterpret_cast<int32_t*>(rbp53 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi52) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx54 = *reinterpret_cast<int64_t*>(rbp55 - 64);
    rax56 = fun_aa5(rdi50, rsi52, rdx54);
    *reinterpret_cast<int64_t*>(rbp57 - 8) = rax56;
    goto addr_aa9_12;
    addr_8fd_8:
    addr_a7b_29:
    *reinterpret_cast<int64_t*>(rbp58 - 64) = *reinterpret_cast<int64_t*>(rbp59 - 48) - *reinterpret_cast<int64_t*>(rbp60 - 56);
    *reinterpret_cast<int32_t*>(rbp61 - 40) = *reinterpret_cast<int32_t*>(rbp62 - 32);
    goto addr_a8d_27;
    addr_986_16:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp63 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp64 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp65 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp66 - 68) = *reinterpret_cast<int32_t*>(rbp67 - 68) + 1;
    }
    rdi68 = *reinterpret_cast<int64_t*>(rbp69 - 48);
    fun_9c2(rdi68);
    *reinterpret_cast<uint64_t*>(rbp70 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp71 - 56);
    goto addr_9d4_26;
    addr_948_17:
    if (*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) {
        rax73 = fun_97d();
        *reinterpret_cast<int64_t*>(rbp74 - 8) = rax73;
        goto addr_aa9_12;
    } else {
        rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
        rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
        rax79 = propagateFloat64NaN(rdi75, rsi77);
        *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
        goto addr_aa9_12;
    }
    addr_a2f_20:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp81 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp82 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp83 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp84 - 68) = *reinterpret_cast<int32_t*>(rbp85 - 68) - 1;
    }
    rdi86 = *reinterpret_cast<int64_t*>(rbp87 - 56);
    *reinterpret_cast<int32_t*>(&rsi88) = *reinterpret_cast<int32_t*>(rbp89 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_a69(rdi86, rsi88, rbp90 - 56);
    *reinterpret_cast<uint64_t*>(rbp91 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp92 - 48);
    goto addr_a7b_29;
    addr_a01_21:
    if (*reinterpret_cast<int64_t*>(rbp93 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp94 - 8) = *reinterpret_cast<int64_t*>(rbp95 - 16);
        goto addr_aa9_12;
    } else {
        rdi96 = *reinterpret_cast<uint64_t*>(rbp97 - 16);
        rsi98 = *reinterpret_cast<uint64_t*>(rbp99 - 24);
        rax100 = propagateFloat64NaN(rdi96, rsi98);
        *reinterpret_cast<uint64_t*>(rbp101 - 8) = rax100;
        goto addr_aa9_12;
    }
}

int32_t fun_4c2(int64_t rdi) {
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
                    rax22 = fun_66c(rdi20);
                    *reinterpret_cast<int64_t*>(rbp23 - 8) = rax22;
                    goto addr_6fe_8;
                }
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp24 - 48) | *reinterpret_cast<uint64_t*>(rbp25 - 56)) == gettimeofday) {
                    *reinterpret_cast<int64_t*>(rbp26 - 8) = *reinterpret_cast<int64_t*>(rbp27 - 16);
                    goto addr_6fe_8;
                } else {
                    rdi28 = *reinterpret_cast<uint64_t*>(rbp29 - 16);
                    rsi30 = *reinterpret_cast<uint64_t*>(rbp31 - 24);
                    rax32 = propagateFloat64NaN(rdi28, rsi30);
                    *reinterpret_cast<uint64_t*>(rbp33 - 8) = rax32;
                    goto addr_6fe_8;
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
                fun_5ff(rdi40);
                *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                goto addr_69b_19;
            } else {
                if (*reinterpret_cast<int64_t*>(rbp44 - 56) == gettimeofday) {
                    *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax47 = fun_5ba(rdi45, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                    goto addr_6fe_8;
                } else {
                    rdi49 = *reinterpret_cast<uint64_t*>(rbp50 - 16);
                    rsi51 = *reinterpret_cast<uint64_t*>(rbp52 - 24);
                    rax53 = propagateFloat64NaN(rdi49, rsi51);
                    *reinterpret_cast<uint64_t*>(rbp54 - 8) = rax53;
                    goto addr_6fe_8;
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
            fun_566(rdi61, rsi63, rbp65 - 56);
            *reinterpret_cast<int32_t*>(rbp66 - 40) = *reinterpret_cast<int32_t*>(rbp67 - 32);
            goto addr_69b_19;
        } else {
            if (*reinterpret_cast<int64_t*>(rbp68 - 48) == gettimeofday) {
                *reinterpret_cast<int64_t*>(rbp69 - 8) = *reinterpret_cast<int64_t*>(rbp70 - 16);
                goto addr_6fe_8;
            } else {
                rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
                rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
                rax75 = propagateFloat64NaN(rdi71, rsi73);
                *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
                goto addr_6fe_8;
            }
        }
    }
    addr_6eb_33:
    *reinterpret_cast<int32_t*>(&rdi77) = *reinterpret_cast<int32_t*>(rbp78 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi79) = *reinterpret_cast<int32_t*>(rbp80 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi79) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx81 = *reinterpret_cast<int64_t*>(rbp82 - 64);
    rax83 = fun_6fa(rdi77, rsi79, rdx81);
    *reinterpret_cast<int64_t*>(rbp84 - 8) = rax83;
    addr_6fe_8:
    goto v85;
    addr_69b_19:
    *reinterpret_cast<uint64_t*>(rbp86 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 48);
    *reinterpret_cast<int64_t*>(rbp88 - 64) = *reinterpret_cast<int64_t*>(rbp89 - 48) + *reinterpret_cast<int64_t*>(rbp90 - 56) << 1;
    *reinterpret_cast<int32_t*>(rbp91 - 40) = *reinterpret_cast<int32_t*>(rbp92 - 40) - 1;
    if (*reinterpret_cast<int64_t*>(rbp93 - 64) < reinterpret_cast<int64_t>(gettimeofday)) {
        *reinterpret_cast<int64_t*>(rbp94 - 64) = *reinterpret_cast<int64_t*>(rbp95 - 48) + *reinterpret_cast<int64_t*>(rbp96 - 56);
        *reinterpret_cast<int32_t*>(rbp97 - 40) = *reinterpret_cast<int32_t*>(rbp98 - 40) + 1;
    }
    goto addr_6eb_33;
}

int32_t fun_842(int64_t rdi) {
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
                    goto addr_8fd_7;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp19 - 48) | *reinterpret_cast<uint64_t*>(rbp20 - 56)) == gettimeofday) {
                    fun_8c4(16);
                    *reinterpret_cast<int64_t*>(rbp21 - 8) = 0x7fffffffffffffff;
                    goto addr_aa9_11;
                } else {
                    rdi22 = *reinterpret_cast<uint64_t*>(rbp23 - 16);
                    rsi24 = *reinterpret_cast<uint64_t*>(rbp25 - 24);
                    rax26 = propagateFloat64NaN(rdi22, rsi24);
                    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
                    goto addr_aa9_11;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp28 - 36) != 0x7ff) 
                goto addr_986_15; else 
                goto addr_948_16;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp29 - 32) != 0x7ff) 
            goto addr_a2f_19; else 
            goto addr_a01_20;
    }
    if (*reinterpret_cast<uint64_t*>(rbp30 - 48) >= *reinterpret_cast<uint64_t*>(rbp31 - 56)) {
        rax32 = g91c;
        *reinterpret_cast<uint32_t*>(&rdi33) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax32 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax34 = fun_932(rdi33);
        *reinterpret_cast<int64_t*>(rbp35 - 8) = rax34;
    } else {
        goto addr_9d4_25;
    }
    addr_aa9_11:
    goto v36;
    addr_9d4_25:
    *reinterpret_cast<int64_t*>(rbp37 - 64) = *reinterpret_cast<int64_t*>(rbp38 - 56) - *reinterpret_cast<int64_t*>(rbp39 - 48);
    *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 36);
    *reinterpret_cast<uint32_t*>(rbp42 - 28) = *reinterpret_cast<uint32_t*>(rbp43 - 28) ^ 1;
    addr_a8d_26:
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 40) - 1;
    *reinterpret_cast<int32_t*>(&rdi46) = *reinterpret_cast<int32_t*>(rbp47 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi48) = *reinterpret_cast<int32_t*>(rbp49 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx50 = *reinterpret_cast<int64_t*>(rbp51 - 64);
    rax52 = fun_aa5(rdi46, rsi48, rdx50);
    *reinterpret_cast<int64_t*>(rbp53 - 8) = rax52;
    goto addr_aa9_11;
    addr_8fd_7:
    addr_a7b_28:
    *reinterpret_cast<int64_t*>(rbp54 - 64) = *reinterpret_cast<int64_t*>(rbp55 - 48) - *reinterpret_cast<int64_t*>(rbp56 - 56);
    *reinterpret_cast<int32_t*>(rbp57 - 40) = *reinterpret_cast<int32_t*>(rbp58 - 32);
    goto addr_a8d_26;
    addr_986_15:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp59 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp60 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp61 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp62 - 68) = *reinterpret_cast<int32_t*>(rbp63 - 68) + 1;
    }
    rdi64 = *reinterpret_cast<int64_t*>(rbp65 - 48);
    fun_9c2(rdi64);
    *reinterpret_cast<uint64_t*>(rbp66 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp67 - 56);
    goto addr_9d4_25;
    addr_948_16:
    if (*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) {
        rax69 = fun_97d();
        *reinterpret_cast<int64_t*>(rbp70 - 8) = rax69;
        goto addr_aa9_11;
    } else {
        rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
        rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
        rax75 = propagateFloat64NaN(rdi71, rsi73);
        *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
        goto addr_aa9_11;
    }
    addr_a2f_19:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp77 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp80 - 68) = *reinterpret_cast<int32_t*>(rbp81 - 68) - 1;
    }
    rdi82 = *reinterpret_cast<int64_t*>(rbp83 - 56);
    *reinterpret_cast<int32_t*>(&rsi84) = *reinterpret_cast<int32_t*>(rbp85 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi84) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_a69(rdi82, rsi84, rbp86 - 56);
    *reinterpret_cast<uint64_t*>(rbp87 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp88 - 48);
    goto addr_a7b_28;
    addr_a01_20:
    if (*reinterpret_cast<int64_t*>(rbp89 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp90 - 8) = *reinterpret_cast<int64_t*>(rbp91 - 16);
        goto addr_aa9_11;
    } else {
        rdi92 = *reinterpret_cast<uint64_t*>(rbp93 - 16);
        rsi94 = *reinterpret_cast<uint64_t*>(rbp95 - 24);
        rax96 = propagateFloat64NaN(rdi92, rsi94);
        *reinterpret_cast<uint64_t*>(rbp97 - 8) = rax96;
        goto addr_aa9_11;
    }
}

void gettimeofday(int64_t rdi) {
}

int64_t packFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    return (static_cast<int64_t>(edi) << 63) + (static_cast<int64_t>(esi) << 52) + rdx;
}

int32_t* g1d9 = reinterpret_cast<int32_t*>(0xe47d83e44589008b);

void fun_1c8(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int32_t* rax7;
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
    uint64_t rax21;
    int64_t rbp22;
    int64_t rbp23;
    int32_t eax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;

    *reinterpret_cast<int32_t*>(rbp4 - 12) = edi;
    *reinterpret_cast<int32_t*>(rbp5 - 16) = esi;
    *reinterpret_cast<int64_t*>(rbp6 - 24) = rdx;
    rax7 = g1d9;
    *reinterpret_cast<int32_t*>(rbp8 - 28) = *rax7;
    *reinterpret_cast<uint32_t*>(rbp9 - 32) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp10 - 28) == gettimeofday)) & 1;
    *reinterpret_cast<int32_t*>(rbp11 - 40) = 0x200;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp12 - 32) == gettimeofday)) {
        if (*reinterpret_cast<int32_t*>(rbp13 - 28) != 1) {
            *reinterpret_cast<int32_t*>(rbp14 - 40) = 0x3ff;
            if (*reinterpret_cast<int32_t*>(rbp15 - 12) == gettimeofday) {
                if (*reinterpret_cast<int32_t*>(rbp16 - 28) == 3) {
                    *reinterpret_cast<int32_t*>(rbp17 - 40) = reinterpret_cast<int32_t>(gettimeofday);
                }
            } else {
                if (*reinterpret_cast<int32_t*>(rbp18 - 28) == 2) {
                    *reinterpret_cast<int32_t*>(rbp19 - 40) = reinterpret_cast<int32_t>(gettimeofday);
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(rbp20 - 40) = reinterpret_cast<int32_t>(gettimeofday);
        }
    }
    rax21 = *reinterpret_cast<uint64_t*>(rbp22 - 24) & 0x3ff;
    *reinterpret_cast<int32_t*>(rbp23 - 44) = *reinterpret_cast<int32_t*>(&rax21);
    eax24 = *reinterpret_cast<int32_t*>(rbp25 - 16);
    if (reinterpret_cast<int32_t>(0x7fd) > reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax24)))) 
        goto 0x341;
    if (0x7fd < *reinterpret_cast<int32_t*>(rbp26 - 16) || *reinterpret_cast<int32_t*>(rbp27 - 16) == 0x7fd && *reinterpret_cast<int64_t*>(rbp28 - 24) + *reinterpret_cast<int32_t*>(rbp29 - 40) < reinterpret_cast<int64_t>(gettimeofday)) {
        fun_2b5(9);
    } else {
        if (*reinterpret_cast<int32_t*>(rbp30 - 16) >= reinterpret_cast<int32_t>(gettimeofday)) 
            goto 0x33c;
        *reinterpret_cast<int32_t*>(rbp31 - 36) = 1;
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 24);
        fun_305(rdi32);
    }
}

void submain(int32_t* rdi, int32_t* rsi) {
    rtclock();
    *rdi = *rsi;
}

void addFloat64Sigs(int64_t rdi, int64_t rsi, int32_t edx) {
    fun_49c(rdi);
}

void subFloat64Sigs(int64_t rdi, int64_t rsi, int32_t edx) {
    fun_81c(rdi);
}

void float64_add(int64_t rdi, int64_t rsi) {
    fun_ad9(rdi);
}

int32_t* ullong_to_double(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    return rdi;
}

void normalizeRoundAndPackFloat64(int32_t edi, int32_t esi, uint64_t rdx) {
    int64_t rdi4;

    countLeadingZeros64(rdx);
    *reinterpret_cast<int32_t*>(&rdi4) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_40b(rdi4);
}

