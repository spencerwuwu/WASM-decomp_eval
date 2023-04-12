
void fun_1d9(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
}

int64_t addFloat64Sigs(int64_t rdi, int64_t rsi, int64_t rdx) {
}

void fun_259(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
}

void gettimeofday(int64_t rdi);

int64_t fun_36a(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t fun_359() {
    int64_t rdi1;
    int64_t rbp2;
    int64_t rax3;
    int64_t rbp4;
    int64_t v5;

    *reinterpret_cast<int32_t*>(&rdi1) = *reinterpret_cast<int32_t*>(rbp2 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax3 = fun_36a(rdi1, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax3;
    goto v5;
}

int32_t fun_899(uint64_t rdi);

uint32_t fun_8a5(uint64_t rdi);

int32_t fun_8b1(uint64_t rdi);

uint32_t fun_8bd(uint64_t rdi);

void fun_8fd(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi) {
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;

    fun_899(rdi);
    eax3 = fun_8a5(rdi);
    eax4 = fun_8b1(rsi);
    eax5 = fun_8bd(rsi);
    v6 = 0x8000000000000 | rdi;
    v7 = 0x8000000000000 | rsi;
    if ((eax3 | eax5) != gettimeofday) {
        fun_8fd(16);
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

void fun_41c(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t* g816 = reinterpret_cast<int64_t*>(0x24c0950fd1043b48);

int64_t* g7db = reinterpret_cast<int64_t*>(0xf0458948c8048b48);

int64_t* g7ee = reinterpret_cast<int64_t*>(0xe8458948c8048b48);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void rtclock();

void fun_86a(int64_t rdi, int64_t rsi);

int64_t fun_803() {
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
        rcx3 = g816;
        *reinterpret_cast<uint32_t*>(rbp4 - 4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp5 - 32) != rcx3[*reinterpret_cast<int32_t*>(rbp6 - 8)])) & 1) + *reinterpret_cast<int32_t*>(rbp7 - 4);
        *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 8) >= 46) 
            break;
        rax11 = g7db;
        *reinterpret_cast<int64_t*>(rbp12 - 16) = rax11[*reinterpret_cast<int32_t*>(rbp13 - 8)];
        rax14 = g7ee;
        *reinterpret_cast<int64_t*>(rbp15 - 24) = rax14[*reinterpret_cast<int32_t*>(rbp16 - 8)];
        rdi17 = *reinterpret_cast<struct s0**>(rbp18 - 16);
        rsi19 = *reinterpret_cast<struct s1**>(rbp20 - 24);
        rax2 = fun_803();
    }
    rtclock();
    rdi17->f0 = rsi19->f0;
    rsi21 = &rsi19->f4;
    rdi17->f4 = *rsi21;
    __asm__("subsd xmm0, [rax]");
    fun_86a(0x863, rsi21 + 1);
    goto v22;
}

void fun_86a(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_8fd(int64_t rdi) {
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

int64_t fun_a76(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_a65(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_a76(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

void fun_ae7(int64_t rdi);

uint32_t* gb02 = reinterpret_cast<uint32_t*>(0x58b4801c983088b);

uint32_t* gb0e = reinterpret_cast<uint32_t*>(0x6348e8458b480889);

uint64_t fun_b67(int64_t rdi, int64_t rsi, uint64_t rdx);

void fun_ab5(uint64_t rdi) {
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
        fun_ae7(4);
    }
    if (*reinterpret_cast<int32_t*>(rbp8 - 44) != gettimeofday) {
        rax9 = gb02;
        rax10 = gb0e;
        *rax10 = *rax9 | 1;
    }
    *reinterpret_cast<uint64_t*>(rbp11 - 24) = *reinterpret_cast<int64_t*>(rbp12 - 24) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp13 - 40))) >> 10;
    *reinterpret_cast<uint64_t*>(rbp14 - 24) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(rbp15 - 44) ^ reinterpret_cast<uint32_t>(",")) == gettimeofday)) & 1)) & *reinterpret_cast<uint32_t*>(rbp16 - 32) ^ 0xffffffff))) & *reinterpret_cast<uint64_t*>(rbp17 - 24);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp18 - 24) == gettimeofday)) {
        *reinterpret_cast<int32_t*>(rbp19 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(rbp21 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi22) = *reinterpret_cast<int32_t*>(rbp23 - 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx24 = *reinterpret_cast<uint64_t*>(rbp25 - 24);
    rax26 = fun_b67(rdi20, rsi22, rdx24);
    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
    goto v28;
}

void fun_ae7(int64_t rdi) {
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
        rax3 = gb02;
        rax4 = gb0e;
        *rax4 = *rax3 | 1;
    }
    *reinterpret_cast<uint64_t*>(rbp5 - 24) = *reinterpret_cast<int64_t*>(rbp6 - 24) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp7 - 40))) >> 10;
    *reinterpret_cast<uint64_t*>(rbp8 - 24) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(rbp9 - 44) ^ reinterpret_cast<uint32_t>(",")) == gettimeofday)) & 1)) & *reinterpret_cast<uint32_t*>(rbp10 - 32) ^ 0xffffffff))) & *reinterpret_cast<uint64_t*>(rbp11 - 24);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp12 - 24) == gettimeofday)) {
        *reinterpret_cast<int32_t*>(rbp13 - 16) = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp17 - 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdx18 = *reinterpret_cast<uint64_t*>(rbp19 - 24);
    rax20 = fun_b67(rdi14, rsi16, rdx18);
    *reinterpret_cast<uint64_t*>(rbp21 - 8) = rax20;
    goto v22;
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

uint64_t fun_4dc(uint64_t rdi);

int32_t fun_4e9(uint64_t rdi);

uint64_t fun_4f5(uint64_t rdi);

int32_t fun_502(uint64_t rdi);

void fun_584(int64_t rdi);

int32_t* g5dc = reinterpret_cast<int32_t*>(0x124c0940f033883);

uint64_t fun_5f2(int64_t rdi);

uint64_t normalizeRoundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx);

void fun_682(uint64_t rdi);

uint64_t fun_63d();

void fun_729(uint64_t rdi, int64_t rsi, void* rdx);

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
    rax5 = fun_4dc(rdi);
    eax6 = fun_4e9(rdi);
    v7 = eax6;
    rax8 = fun_4f5(rsi);
    eax9 = fun_502(rsi);
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
                    goto addr_5bd_11;
            } else {
                if ((v12 | v13) == gettimeofday) {
                    fun_584(16);
                    v14 = 0x7fffffffffffffff;
                    goto addr_769_15;
                } else {
                    rax15 = propagateFloat64NaN(rdi, rsi);
                    v14 = rax15;
                    goto addr_769_15;
                }
            }
        } else {
            if (v10 != 0x7ff) 
                goto addr_646_19; else 
                goto addr_608_20;
        }
    } else {
        if (v7 != 0x7ff) 
            goto addr_6ef_23; else 
            goto addr_6c1_24;
    }
    if (v12 >= v13) {
        rax16 = g5dc;
        *reinterpret_cast<uint32_t*>(&rdi17) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax16 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax18 = fun_5f2(rdi17);
        v14 = rax18;
    } else {
        goto addr_694_29;
    }
    addr_769_15:
    return v14;
    addr_694_29:
    v19 = v13 - v12;
    v20 = v10;
    v4 = v4 ^ 1;
    addr_74d_30:
    rax21 = normalizeRoundAndPackFloat64(v4, v20 - 1, v19);
    v14 = rax21;
    goto addr_769_15;
    addr_5bd_11:
    addr_73b_31:
    v19 = v12 - v13;
    v20 = v7;
    goto addr_74d_30;
    addr_646_19:
    if (!reinterpret_cast<int1_t>(v7 == gettimeofday)) {
        v12 = 0x4000000000000000 | v12;
    }
    fun_682(v12);
    v13 = 0x4000000000000000 | v13;
    goto addr_694_29;
    addr_608_20:
    if (v13 == gettimeofday) {
        rax22 = fun_63d();
        v14 = rax22;
        goto addr_769_15;
    } else {
        rax23 = propagateFloat64NaN(rdi, rsi);
        v14 = rax23;
        goto addr_769_15;
    }
    addr_6ef_23:
    if (!reinterpret_cast<int1_t>(v10 == gettimeofday)) {
        v13 = 0x4000000000000000 | v13;
    } else {
        --v11;
    }
    *reinterpret_cast<int32_t*>(&rsi24) = v11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_729(v13, rsi24, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 56);
    v12 = 0x4000000000000000 | v12;
    goto addr_73b_31;
    addr_6c1_24:
    if (v12 == gettimeofday) {
        v14 = rdi;
        goto addr_769_15;
    } else {
        rax25 = propagateFloat64NaN(rdi, rsi);
        v14 = rax25;
        goto addr_769_15;
    }
}

int64_t fun_36a(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int32_t fun_899(uint64_t rdi) {
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
    eax6 = fun_8a5(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 24) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_8b1(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 16);
    eax14 = fun_8bd(rdi12);
    *reinterpret_cast<uint32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint64_t*>(rbp16 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 8);
    *reinterpret_cast<uint64_t*>(rbp18 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp20 - 24) | *reinterpret_cast<uint32_t*>(rbp21 - 32)) != gettimeofday) {
        fun_8fd(16);
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

uint64_t roundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx);

void fun_316(int64_t rdi, int64_t rsi, int64_t rdx) {
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

void fun_3af(int64_t rdi) {
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

int32_t* g989 = reinterpret_cast<int32_t*>(0xe47d83e44589008b);

uint64_t roundAndPackFloat64(uint32_t edi, int32_t esi, uint64_t rdx) {
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
    rax5 = g989;
    v6 = *rax5;
    v7 = static_cast<unsigned char>(reinterpret_cast<uint1_t>(v6 == gettimeofday)) & 1;
    v8 = reinterpret_cast<int32_t>(",");
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
        addr_af1_14:
        if (v10 != gettimeofday) {
            rax12 = gb02;
            rax13 = gb0e;
            *rax13 = *rax12 | 1;
        }
    } else {
        if (0x7fd < v4 || v4 == 0x7fd && reinterpret_cast<int64_t>(rdx + static_cast<int64_t>(v8)) < reinterpret_cast<int64_t>(gettimeofday)) {
            fun_a65(9);
            *reinterpret_cast<uint32_t*>(&rdi14) = edi;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            rax15 = fun_a76(rdi14, 0x7ff, gettimeofday);
            v16 = rax15 - reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v8 == gettimeofday)) & 1)))));
            goto addr_b6b_20;
        } else {
            if (v4 >= reinterpret_cast<int32_t>(gettimeofday)) {
                addr_aec_22:
                goto addr_af1_14;
            } else {
                fun_ab5(rdx);
                v4 = reinterpret_cast<int32_t>(gettimeofday);
                rax17 = rdx & 0x3ff;
                v10 = *reinterpret_cast<uint32_t*>(&rax17);
                if (gettimeofday) 
                    goto addr_ae7_25;
                if (v10 == gettimeofday) 
                    goto addr_ae7_25; else 
                    goto addr_add_27;
            }
        }
    }
    v18 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((v10 ^ reinterpret_cast<uint32_t>(",")) == gettimeofday)) & 1)) & v7 ^ 0xffffffff))) & rdx + static_cast<int64_t>(v8) >> 10;
    if (reinterpret_cast<int1_t>(v18 == gettimeofday)) {
        v4 = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<uint32_t*>(&rdi19) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi20) = v4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax21 = fun_b67(rdi19, rsi20, v18);
    v16 = rax21;
    addr_b6b_20:
    return v16;
    addr_ae7_25:
    goto addr_aec_22;
    addr_add_27:
    fun_ae7(4);
    goto addr_ae7_25;
}

void fun_584(int64_t rdi) {
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

uint64_t fun_5f2(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

uint64_t fun_63d() {
    int64_t rbp1;
    int64_t rax2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp1 - 8) = rax2;
    goto v3;
}

void fun_682(uint64_t rdi) {
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

void fun_729(uint64_t rdi, int64_t rsi, void* rdx) {
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

int64_t fun_a76(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

uint64_t fun_b67(int64_t rdi, int64_t rsi, uint64_t rdx) {
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

uint64_t fun_4dc(uint64_t rdi) {
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
    eax6 = fun_4e9(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
    rax10 = fun_4f5(rdi8);
    *reinterpret_cast<uint64_t*>(rbp11 - 56) = rax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 24);
    eax14 = fun_502(rdi12);
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
                    goto addr_5bd_10;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp31 - 48) | *reinterpret_cast<uint64_t*>(rbp32 - 56)) == gettimeofday) {
                    fun_584(16);
                    *reinterpret_cast<int64_t*>(rbp33 - 8) = 0x7fffffffffffffff;
                    goto addr_769_14;
                } else {
                    rdi34 = *reinterpret_cast<uint64_t*>(rbp35 - 16);
                    rsi36 = *reinterpret_cast<uint64_t*>(rbp37 - 24);
                    rax38 = propagateFloat64NaN(rdi34, rsi36);
                    *reinterpret_cast<uint64_t*>(rbp39 - 8) = rax38;
                    goto addr_769_14;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp40 - 36) != 0x7ff) 
                goto addr_646_18; else 
                goto addr_608_19;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp41 - 32) != 0x7ff) 
            goto addr_6ef_22; else 
            goto addr_6c1_23;
    }
    if (*reinterpret_cast<uint64_t*>(rbp42 - 48) >= *reinterpret_cast<uint64_t*>(rbp43 - 56)) {
        rax44 = g5dc;
        *reinterpret_cast<uint32_t*>(&rdi45) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax44 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax46 = fun_5f2(rdi45);
        *reinterpret_cast<uint64_t*>(rbp47 - 8) = rax46;
    } else {
        goto addr_694_28;
    }
    addr_769_14:
    goto v48;
    addr_694_28:
    *reinterpret_cast<int64_t*>(rbp49 - 64) = *reinterpret_cast<int64_t*>(rbp50 - 56) - *reinterpret_cast<int64_t*>(rbp51 - 48);
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 36);
    *reinterpret_cast<uint32_t*>(rbp54 - 28) = *reinterpret_cast<uint32_t*>(rbp55 - 28) ^ 1;
    addr_74d_29:
    *reinterpret_cast<int32_t*>(rbp56 - 40) = *reinterpret_cast<int32_t*>(rbp57 - 40) - 1;
    edi58 = *reinterpret_cast<uint32_t*>(rbp59 - 28);
    esi60 = *reinterpret_cast<int32_t*>(rbp61 - 40);
    rdx62 = *reinterpret_cast<uint64_t*>(rbp63 - 64);
    rax64 = normalizeRoundAndPackFloat64(edi58, esi60, rdx62);
    *reinterpret_cast<uint64_t*>(rbp65 - 8) = rax64;
    goto addr_769_14;
    addr_5bd_10:
    addr_73b_30:
    *reinterpret_cast<int64_t*>(rbp66 - 64) = *reinterpret_cast<int64_t*>(rbp67 - 48) - *reinterpret_cast<int64_t*>(rbp68 - 56);
    *reinterpret_cast<int32_t*>(rbp69 - 40) = *reinterpret_cast<int32_t*>(rbp70 - 32);
    goto addr_74d_29;
    addr_646_18:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp71 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp72 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp73 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp74 - 68) = *reinterpret_cast<int32_t*>(rbp75 - 68) + 1;
    }
    rdi76 = *reinterpret_cast<uint64_t*>(rbp77 - 48);
    fun_682(rdi76);
    *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    goto addr_694_28;
    addr_608_19:
    if (*reinterpret_cast<int64_t*>(rbp80 - 56) == gettimeofday) {
        rax81 = fun_63d();
        *reinterpret_cast<uint64_t*>(rbp82 - 8) = rax81;
        goto addr_769_14;
    } else {
        rdi83 = *reinterpret_cast<uint64_t*>(rbp84 - 16);
        rsi85 = *reinterpret_cast<uint64_t*>(rbp86 - 24);
        rax87 = propagateFloat64NaN(rdi83, rsi85);
        *reinterpret_cast<uint64_t*>(rbp88 - 8) = rax87;
        goto addr_769_14;
    }
    addr_6ef_22:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp89 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp90 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp91 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp92 - 68) = *reinterpret_cast<int32_t*>(rbp93 - 68) - 1;
    }
    rdi94 = *reinterpret_cast<uint64_t*>(rbp95 - 56);
    *reinterpret_cast<int32_t*>(&rsi96) = *reinterpret_cast<int32_t*>(rbp97 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi96) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_729(rdi94, rsi96, rbp98 - 56);
    *reinterpret_cast<uint64_t*>(rbp99 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp100 - 48);
    goto addr_73b_30;
    addr_6c1_23:
    if (*reinterpret_cast<int64_t*>(rbp101 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp102 - 8) = *reinterpret_cast<int64_t*>(rbp103 - 16);
        goto addr_769_14;
    } else {
        rdi104 = *reinterpret_cast<uint64_t*>(rbp105 - 16);
        rsi106 = *reinterpret_cast<uint64_t*>(rbp107 - 24);
        rax108 = propagateFloat64NaN(rdi104, rsi106);
        *reinterpret_cast<uint64_t*>(rbp109 - 8) = rax108;
        goto addr_769_14;
    }
}

uint32_t fun_8a5(uint64_t rdi) {
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
    eax6 = fun_8b1(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_8bd(rdi8);
    *reinterpret_cast<uint32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint64_t*>(rbp12 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp13 - 8);
    *reinterpret_cast<uint64_t*>(rbp14 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp16 - 24) | *reinterpret_cast<uint32_t*>(rbp17 - 32)) != gettimeofday) {
        fun_8fd(16);
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

int32_t fun_4e9(uint64_t rdi) {
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
    rax6 = fun_4f5(rdi4);
    *reinterpret_cast<uint64_t*>(rbp7 - 56) = rax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 24);
    eax10 = fun_502(rdi8);
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
                    goto addr_5bd_9;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp27 - 48) | *reinterpret_cast<uint64_t*>(rbp28 - 56)) == gettimeofday) {
                    fun_584(16);
                    *reinterpret_cast<int64_t*>(rbp29 - 8) = 0x7fffffffffffffff;
                    goto addr_769_13;
                } else {
                    rdi30 = *reinterpret_cast<uint64_t*>(rbp31 - 16);
                    rsi32 = *reinterpret_cast<uint64_t*>(rbp33 - 24);
                    rax34 = propagateFloat64NaN(rdi30, rsi32);
                    *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
                    goto addr_769_13;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp36 - 36) != 0x7ff) 
                goto addr_646_17; else 
                goto addr_608_18;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp37 - 32) != 0x7ff) 
            goto addr_6ef_21; else 
            goto addr_6c1_22;
    }
    if (*reinterpret_cast<uint64_t*>(rbp38 - 48) >= *reinterpret_cast<uint64_t*>(rbp39 - 56)) {
        rax40 = g5dc;
        *reinterpret_cast<uint32_t*>(&rdi41) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax40 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax42 = fun_5f2(rdi41);
        *reinterpret_cast<uint64_t*>(rbp43 - 8) = rax42;
    } else {
        goto addr_694_27;
    }
    addr_769_13:
    goto v44;
    addr_694_27:
    *reinterpret_cast<int64_t*>(rbp45 - 64) = *reinterpret_cast<int64_t*>(rbp46 - 56) - *reinterpret_cast<int64_t*>(rbp47 - 48);
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 36);
    *reinterpret_cast<uint32_t*>(rbp50 - 28) = *reinterpret_cast<uint32_t*>(rbp51 - 28) ^ 1;
    addr_74d_28:
    *reinterpret_cast<int32_t*>(rbp52 - 40) = *reinterpret_cast<int32_t*>(rbp53 - 40) - 1;
    edi54 = *reinterpret_cast<uint32_t*>(rbp55 - 28);
    esi56 = *reinterpret_cast<int32_t*>(rbp57 - 40);
    rdx58 = *reinterpret_cast<uint64_t*>(rbp59 - 64);
    rax60 = normalizeRoundAndPackFloat64(edi54, esi56, rdx58);
    *reinterpret_cast<uint64_t*>(rbp61 - 8) = rax60;
    goto addr_769_13;
    addr_5bd_9:
    addr_73b_29:
    *reinterpret_cast<int64_t*>(rbp62 - 64) = *reinterpret_cast<int64_t*>(rbp63 - 48) - *reinterpret_cast<int64_t*>(rbp64 - 56);
    *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 32);
    goto addr_74d_28;
    addr_646_17:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp67 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp68 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp69 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp70 - 68) = *reinterpret_cast<int32_t*>(rbp71 - 68) + 1;
    }
    rdi72 = *reinterpret_cast<uint64_t*>(rbp73 - 48);
    fun_682(rdi72);
    *reinterpret_cast<uint64_t*>(rbp74 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp75 - 56);
    goto addr_694_27;
    addr_608_18:
    if (*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) {
        rax77 = fun_63d();
        *reinterpret_cast<uint64_t*>(rbp78 - 8) = rax77;
        goto addr_769_13;
    } else {
        rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
        rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
        rax83 = propagateFloat64NaN(rdi79, rsi81);
        *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
        goto addr_769_13;
    }
    addr_6ef_21:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp85 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp86 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp87 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp88 - 68) = *reinterpret_cast<int32_t*>(rbp89 - 68) - 1;
    }
    rdi90 = *reinterpret_cast<uint64_t*>(rbp91 - 56);
    *reinterpret_cast<int32_t*>(&rsi92) = *reinterpret_cast<int32_t*>(rbp93 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi92) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_729(rdi90, rsi92, rbp94 - 56);
    *reinterpret_cast<uint64_t*>(rbp95 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp96 - 48);
    goto addr_73b_29;
    addr_6c1_22:
    if (*reinterpret_cast<int64_t*>(rbp97 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp98 - 8) = *reinterpret_cast<int64_t*>(rbp99 - 16);
        goto addr_769_13;
    } else {
        rdi100 = *reinterpret_cast<uint64_t*>(rbp101 - 16);
        rsi102 = *reinterpret_cast<uint64_t*>(rbp103 - 24);
        rax104 = propagateFloat64NaN(rdi100, rsi102);
        *reinterpret_cast<uint64_t*>(rbp105 - 8) = rax104;
        goto addr_769_13;
    }
}

int32_t fun_8b1(uint64_t rdi) {
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
    eax6 = fun_8bd(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint64_t*>(rbp8 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<uint64_t*>(rbp10 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp12 - 24) | *reinterpret_cast<uint32_t*>(rbp13 - 32)) != gettimeofday) {
        fun_8fd(16);
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

uint64_t fun_4f5(uint64_t rdi) {
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
    eax6 = fun_502(rdi4);
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
                    goto addr_5bd_8;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp23 - 48) | *reinterpret_cast<uint64_t*>(rbp24 - 56)) == gettimeofday) {
                    fun_584(16);
                    *reinterpret_cast<int64_t*>(rbp25 - 8) = 0x7fffffffffffffff;
                    goto addr_769_12;
                } else {
                    rdi26 = *reinterpret_cast<uint64_t*>(rbp27 - 16);
                    rsi28 = *reinterpret_cast<uint64_t*>(rbp29 - 24);
                    rax30 = propagateFloat64NaN(rdi26, rsi28);
                    *reinterpret_cast<uint64_t*>(rbp31 - 8) = rax30;
                    goto addr_769_12;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp32 - 36) != 0x7ff) 
                goto addr_646_16; else 
                goto addr_608_17;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp33 - 32) != 0x7ff) 
            goto addr_6ef_20; else 
            goto addr_6c1_21;
    }
    if (*reinterpret_cast<uint64_t*>(rbp34 - 48) >= *reinterpret_cast<uint64_t*>(rbp35 - 56)) {
        rax36 = g5dc;
        *reinterpret_cast<uint32_t*>(&rdi37) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax36 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax38 = fun_5f2(rdi37);
        *reinterpret_cast<uint64_t*>(rbp39 - 8) = rax38;
    } else {
        goto addr_694_26;
    }
    addr_769_12:
    goto v40;
    addr_694_26:
    *reinterpret_cast<int64_t*>(rbp41 - 64) = *reinterpret_cast<int64_t*>(rbp42 - 56) - *reinterpret_cast<int64_t*>(rbp43 - 48);
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 36);
    *reinterpret_cast<uint32_t*>(rbp46 - 28) = *reinterpret_cast<uint32_t*>(rbp47 - 28) ^ 1;
    addr_74d_27:
    *reinterpret_cast<int32_t*>(rbp48 - 40) = *reinterpret_cast<int32_t*>(rbp49 - 40) - 1;
    edi50 = *reinterpret_cast<uint32_t*>(rbp51 - 28);
    esi52 = *reinterpret_cast<int32_t*>(rbp53 - 40);
    rdx54 = *reinterpret_cast<uint64_t*>(rbp55 - 64);
    rax56 = normalizeRoundAndPackFloat64(edi50, esi52, rdx54);
    *reinterpret_cast<uint64_t*>(rbp57 - 8) = rax56;
    goto addr_769_12;
    addr_5bd_8:
    addr_73b_28:
    *reinterpret_cast<int64_t*>(rbp58 - 64) = *reinterpret_cast<int64_t*>(rbp59 - 48) - *reinterpret_cast<int64_t*>(rbp60 - 56);
    *reinterpret_cast<int32_t*>(rbp61 - 40) = *reinterpret_cast<int32_t*>(rbp62 - 32);
    goto addr_74d_27;
    addr_646_16:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp63 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp64 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp65 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp66 - 68) = *reinterpret_cast<int32_t*>(rbp67 - 68) + 1;
    }
    rdi68 = *reinterpret_cast<uint64_t*>(rbp69 - 48);
    fun_682(rdi68);
    *reinterpret_cast<uint64_t*>(rbp70 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp71 - 56);
    goto addr_694_26;
    addr_608_17:
    if (*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) {
        rax73 = fun_63d();
        *reinterpret_cast<uint64_t*>(rbp74 - 8) = rax73;
        goto addr_769_12;
    } else {
        rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
        rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
        rax79 = propagateFloat64NaN(rdi75, rsi77);
        *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
        goto addr_769_12;
    }
    addr_6ef_20:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp81 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp82 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp83 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp84 - 68) = *reinterpret_cast<int32_t*>(rbp85 - 68) - 1;
    }
    rdi86 = *reinterpret_cast<uint64_t*>(rbp87 - 56);
    *reinterpret_cast<int32_t*>(&rsi88) = *reinterpret_cast<int32_t*>(rbp89 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_729(rdi86, rsi88, rbp90 - 56);
    *reinterpret_cast<uint64_t*>(rbp91 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp92 - 48);
    goto addr_73b_28;
    addr_6c1_21:
    if (*reinterpret_cast<int64_t*>(rbp93 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp94 - 8) = *reinterpret_cast<int64_t*>(rbp95 - 16);
        goto addr_769_12;
    } else {
        rdi96 = *reinterpret_cast<uint64_t*>(rbp97 - 16);
        rsi98 = *reinterpret_cast<uint64_t*>(rbp99 - 24);
        rax100 = propagateFloat64NaN(rdi96, rsi98);
        *reinterpret_cast<uint64_t*>(rbp101 - 8) = rax100;
        goto addr_769_12;
    }
}

uint32_t fun_8bd(uint64_t rdi) {
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
        fun_8fd(16);
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

int32_t fun_502(uint64_t rdi) {
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
                    goto addr_5bd_7;
            } else {
                if ((*reinterpret_cast<uint64_t*>(rbp19 - 48) | *reinterpret_cast<uint64_t*>(rbp20 - 56)) == gettimeofday) {
                    fun_584(16);
                    *reinterpret_cast<int64_t*>(rbp21 - 8) = 0x7fffffffffffffff;
                    goto addr_769_11;
                } else {
                    rdi22 = *reinterpret_cast<uint64_t*>(rbp23 - 16);
                    rsi24 = *reinterpret_cast<uint64_t*>(rbp25 - 24);
                    rax26 = propagateFloat64NaN(rdi22, rsi24);
                    *reinterpret_cast<uint64_t*>(rbp27 - 8) = rax26;
                    goto addr_769_11;
                }
            }
        } else {
            if (*reinterpret_cast<int32_t*>(rbp28 - 36) != 0x7ff) 
                goto addr_646_15; else 
                goto addr_608_16;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(rbp29 - 32) != 0x7ff) 
            goto addr_6ef_19; else 
            goto addr_6c1_20;
    }
    if (*reinterpret_cast<uint64_t*>(rbp30 - 48) >= *reinterpret_cast<uint64_t*>(rbp31 - 56)) {
        rax32 = g5dc;
        *reinterpret_cast<uint32_t*>(&rdi33) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rax32 == 3)) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax34 = fun_5f2(rdi33);
        *reinterpret_cast<uint64_t*>(rbp35 - 8) = rax34;
    } else {
        goto addr_694_25;
    }
    addr_769_11:
    goto v36;
    addr_694_25:
    *reinterpret_cast<int64_t*>(rbp37 - 64) = *reinterpret_cast<int64_t*>(rbp38 - 56) - *reinterpret_cast<int64_t*>(rbp39 - 48);
    *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 36);
    *reinterpret_cast<uint32_t*>(rbp42 - 28) = *reinterpret_cast<uint32_t*>(rbp43 - 28) ^ 1;
    addr_74d_26:
    *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 40) - 1;
    edi46 = *reinterpret_cast<uint32_t*>(rbp47 - 28);
    esi48 = *reinterpret_cast<int32_t*>(rbp49 - 40);
    rdx50 = *reinterpret_cast<uint64_t*>(rbp51 - 64);
    rax52 = normalizeRoundAndPackFloat64(edi46, esi48, rdx50);
    *reinterpret_cast<uint64_t*>(rbp53 - 8) = rax52;
    goto addr_769_11;
    addr_5bd_7:
    addr_73b_27:
    *reinterpret_cast<int64_t*>(rbp54 - 64) = *reinterpret_cast<int64_t*>(rbp55 - 48) - *reinterpret_cast<int64_t*>(rbp56 - 56);
    *reinterpret_cast<int32_t*>(rbp57 - 40) = *reinterpret_cast<int32_t*>(rbp58 - 32);
    goto addr_74d_26;
    addr_646_15:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp59 - 32) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp60 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp61 - 48);
    } else {
        *reinterpret_cast<int32_t*>(rbp62 - 68) = *reinterpret_cast<int32_t*>(rbp63 - 68) + 1;
    }
    rdi64 = *reinterpret_cast<uint64_t*>(rbp65 - 48);
    fun_682(rdi64);
    *reinterpret_cast<uint64_t*>(rbp66 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp67 - 56);
    goto addr_694_25;
    addr_608_16:
    if (*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) {
        rax69 = fun_63d();
        *reinterpret_cast<uint64_t*>(rbp70 - 8) = rax69;
        goto addr_769_11;
    } else {
        rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
        rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
        rax75 = propagateFloat64NaN(rdi71, rsi73);
        *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
        goto addr_769_11;
    }
    addr_6ef_19:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp77 - 36) == gettimeofday)) {
        *reinterpret_cast<uint64_t*>(rbp78 - 56) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp79 - 56);
    } else {
        *reinterpret_cast<int32_t*>(rbp80 - 68) = *reinterpret_cast<int32_t*>(rbp81 - 68) - 1;
    }
    rdi82 = *reinterpret_cast<uint64_t*>(rbp83 - 56);
    *reinterpret_cast<int32_t*>(&rsi84) = *reinterpret_cast<int32_t*>(rbp85 - 68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi84) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_729(rdi82, rsi84, rbp86 - 56);
    *reinterpret_cast<uint64_t*>(rbp87 - 48) = 0x4000000000000000 | *reinterpret_cast<uint64_t*>(rbp88 - 48);
    goto addr_73b_27;
    addr_6c1_20:
    if (*reinterpret_cast<int64_t*>(rbp89 - 48) == gettimeofday) {
        *reinterpret_cast<int64_t*>(rbp90 - 8) = *reinterpret_cast<int64_t*>(rbp91 - 16);
        goto addr_769_11;
    } else {
        rdi92 = *reinterpret_cast<uint64_t*>(rbp93 - 16);
        rsi94 = *reinterpret_cast<uint64_t*>(rbp95 - 24);
        rax96 = propagateFloat64NaN(rdi92, rsi94);
        *reinterpret_cast<uint64_t*>(rbp97 - 8) = rax96;
        goto addr_769_11;
    }
}

void gettimeofday(int64_t rdi) {
}

int64_t packFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    return (static_cast<int64_t>(edi) << 63) + (static_cast<int64_t>(esi) << 52) + rdx;
}

void fun_1c8(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;

    *reinterpret_cast<int64_t*>(rbp3 - 16) = rdi;
    *reinterpret_cast<int64_t*>(rbp4 - 24) = rsi;
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 16);
    fun_1d9(rdi5);
}

void fun_1e8() {
    int64_t rbp1;
    int64_t rbp2;
    uint64_t rdi3;
    int64_t rbp4;
    uint64_t rsi5;
    int64_t rbp6;
    uint32_t edx7;
    int64_t rbp8;
    uint64_t rax9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t v19;

    if (*reinterpret_cast<int32_t*>(rbp1 - 28) != *reinterpret_cast<int32_t*>(rbp2 - 32)) {
        rdi3 = *reinterpret_cast<uint64_t*>(rbp4 - 16);
        rsi5 = *reinterpret_cast<uint64_t*>(rbp6 - 24);
        edx7 = *reinterpret_cast<uint32_t*>(rbp8 - 28);
        rax9 = subFloat64Sigs(rdi3, rsi5, edx7);
        *reinterpret_cast<uint64_t*>(rbp10 - 8) = rax9;
    } else {
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 16);
        rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 24);
        *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(rbp16 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax17 = addFloat64Sigs(rdi11, rsi13, rdx15);
        *reinterpret_cast<int64_t*>(rbp18 - 8) = rax17;
    }
    goto v19;
}

void fun_250() {
    int64_t rdi1;
    int64_t rbp2;

    rdi1 = *reinterpret_cast<int64_t*>(rbp2 - 16);
    fun_259(rdi1);
}

void fun_268() {
    int64_t rax1;
    int64_t rcx2;
    int64_t rcx3;
    signed char cl4;
    int1_t zf5;
    int64_t rcx6;
    int64_t rcx7;
    int64_t rcx8;
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
    int64_t rdi21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    uint64_t rdi27;
    int64_t rbp28;
    uint64_t rsi29;
    int64_t rbp30;
    uint64_t rax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rbp41;
    uint64_t rdi42;
    int64_t rbp43;
    uint64_t rsi44;
    int64_t rbp45;
    uint64_t rax46;
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
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    uint64_t rdi62;
    int64_t rbp63;
    uint64_t rsi64;
    int64_t rbp65;
    uint64_t rax66;
    int64_t rbp67;

    __asm__("enter 0x8b48, 0x7d");
    rax1 = fun_359();
    *reinterpret_cast<signed char*>(rcx2 + 0x458bdc45) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx3 + 0x458bdc45) + cl4);
    zf5 = reinterpret_cast<int1_t>(*reinterpret_cast<signed char*>(rcx6 + 0x458bdc45) == gettimeofday);
    rcx7 = rcx8 - 1;
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx7 == gettimeofday)) & reinterpret_cast<uint1_t>(!zf5))) {
        __asm__("fmul qword [r9-0x74b743bb]");
        __asm__("ror byte [r8-0x3f], 1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx7 - 1 == gettimeofday)) & reinterpret_cast<uint1_t>(!zf5))) {
            *reinterpret_cast<int64_t*>(rbp9 - 48) = rax1;
            rax1 = *reinterpret_cast<int64_t*>(rbp10 - 56) << 9;
        }
        *reinterpret_cast<int64_t*>(rbp11 - 56) = rax1;
        if (reinterpret_cast<int32_t>(gettimeofday) >= *reinterpret_cast<int32_t*>(rbp12 - 68)) {
            if (*reinterpret_cast<int32_t*>(rbp13 - 68) >= reinterpret_cast<int32_t>(gettimeofday)) {
                if (*reinterpret_cast<int32_t*>(rbp14 - 32) != 0x7ff) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp15 - 32) == gettimeofday)) {
                        *reinterpret_cast<int64_t*>(rbp16 - 64) = 0x4000000000000000 + *reinterpret_cast<int64_t*>(rbp17 - 48) + *reinterpret_cast<int64_t*>(rbp18 - 56);
                        *reinterpret_cast<int32_t*>(rbp19 - 40) = *reinterpret_cast<int32_t*>(rbp20 - 32);
                        goto 0x49b;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 28);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        fun_41c(rdi21);
                    }
                } else {
                    if ((*reinterpret_cast<uint64_t*>(rbp23 - 48) | *reinterpret_cast<uint64_t*>(rbp24 - 56)) == gettimeofday) {
                        *reinterpret_cast<int64_t*>(rbp25 - 8) = *reinterpret_cast<int64_t*>(rbp26 - 16);
                        goto 0x4ae;
                    } else {
                        rdi27 = *reinterpret_cast<uint64_t*>(rbp28 - 16);
                        rsi29 = *reinterpret_cast<uint64_t*>(rbp30 - 24);
                        rax31 = propagateFloat64NaN(rdi27, rsi29);
                        *reinterpret_cast<uint64_t*>(rbp32 - 8) = rax31;
                        goto 0x4ae;
                    }
                }
            } else {
                if (*reinterpret_cast<int32_t*>(rbp33 - 36) != 0x7ff) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp34 - 32) == gettimeofday)) {
                        *reinterpret_cast<uint64_t*>(rbp35 - 48) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp36 - 48);
                    } else {
                        *reinterpret_cast<int32_t*>(rbp37 - 68) = *reinterpret_cast<int32_t*>(rbp38 - 68) + 1;
                    }
                    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 48);
                    fun_3af(rdi39);
                } else {
                    if (*reinterpret_cast<int64_t*>(rbp41 - 56) == gettimeofday) 
                        goto fun_359;
                    rdi42 = *reinterpret_cast<uint64_t*>(rbp43 - 16);
                    rsi44 = *reinterpret_cast<uint64_t*>(rbp45 - 24);
                    rax46 = propagateFloat64NaN(rdi42, rsi44);
                    *reinterpret_cast<uint64_t*>(rbp47 - 8) = rax46;
                    goto 0x4ae;
                }
            }
        } else {
            zf5 = *reinterpret_cast<int32_t*>(rbp48 - 32) == 0x7ff;
        }
    }
    if (!zf5) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp49 - 36) == gettimeofday)) {
            *reinterpret_cast<uint64_t*>(rbp50 - 56) = 0x2000000000000000 | *reinterpret_cast<uint64_t*>(rbp51 - 56);
        } else {
            *reinterpret_cast<int32_t*>(rbp52 - 68) = *reinterpret_cast<int32_t*>(rbp53 - 68) - 1;
        }
        rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 56);
        *reinterpret_cast<int32_t*>(&rsi56) = *reinterpret_cast<int32_t*>(rbp57 - 68);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_316(rdi54, rsi56, rbp58 - 56);
    } else {
        if (*reinterpret_cast<int64_t*>(rbp59 - 48) == gettimeofday) {
            *reinterpret_cast<int64_t*>(rbp60 - 8) = *reinterpret_cast<int64_t*>(rbp61 - 16);
            goto 0x4ae;
        } else {
            rdi62 = *reinterpret_cast<uint64_t*>(rbp63 - 16);
            rsi64 = *reinterpret_cast<uint64_t*>(rbp65 - 24);
            rax66 = propagateFloat64NaN(rdi62, rsi64);
            *reinterpret_cast<uint64_t*>(rbp67 - 8) = rax66;
            goto 0x4ae;
        }
    }
}

void submain(int32_t* rdi, int32_t* rsi) {
    rtclock();
    *rdi = *rsi;
}

int32_t* ullong_to_double(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    return rdi;
}

