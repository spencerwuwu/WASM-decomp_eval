
int32_t fun_559(uint64_t rdi);

uint32_t fun_565(uint64_t rdi);

int32_t fun_571(uint64_t rdi);

uint32_t fun_57d(uint64_t rdi);

void gettimeofday(int64_t rdi);

void fun_5bd(int64_t rdi);

uint64_t propagateFloat64NaN(uint64_t rdi, uint64_t rsi) {
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;

    fun_559(rdi);
    eax3 = fun_565(rdi);
    eax4 = fun_571(rsi);
    eax5 = fun_57d(rsi);
    v6 = 0x8000000000000 | rdi;
    v7 = 0x8000000000000 | rsi;
    if ((eax3 | eax5) != gettimeofday) {
        fun_5bd(16);
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

void fun_375(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

void fun_3ec(int64_t rdi) {
    int64_t rbp2;
    int64_t v3;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = 0x7fffffffffffffff;
    goto v3;
}

int64_t fun_43c(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int64_t fun_479(int64_t rdi) {
    int64_t rbp2;
    int64_t rax3;
    int64_t v4;

    *reinterpret_cast<int64_t*>(rbp2 - 8) = rax3;
    goto v4;
}

int32_t* g699 = reinterpret_cast<int32_t*>(0xe47d83e44589008b);

uint32_t* g812 = reinterpret_cast<uint32_t*>(0x58b4801c983088b);

uint32_t* g81e = reinterpret_cast<uint32_t*>(0x6348e8458b480889);

void fun_775(int64_t rdi);

int64_t fun_786(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_7c5(uint64_t rdi);

int64_t fun_877(int64_t rdi, int64_t rsi, uint64_t rdx);

void fun_7f7(int64_t rdi);

int64_t roundAndPackFloat64(int32_t edi, int32_t esi, uint64_t rdx) {
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
    int64_t v16;
    uint64_t rax17;
    uint64_t v18;
    int64_t rdi19;
    int64_t rsi20;
    int64_t rax21;

    v4 = esi;
    rax5 = g699;
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
        addr_801_14:
        if (v10 != gettimeofday) {
            rax12 = g812;
            rax13 = g81e;
            *rax13 = *rax12 | 1;
        }
    } else {
        if (0x7fd < v4 || v4 == 0x7fd && reinterpret_cast<int64_t>(rdx + static_cast<int64_t>(v8)) < reinterpret_cast<int64_t>(gettimeofday)) {
            fun_775(9);
            *reinterpret_cast<int32_t*>(&rdi14) = edi;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            rax15 = fun_786(rdi14, 0x7ff, gettimeofday);
            v16 = rax15 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v8 == gettimeofday)) & 1)));
            goto addr_87b_20;
        } else {
            if (v4 >= reinterpret_cast<int32_t>(gettimeofday)) {
                addr_7fc_22:
                goto addr_801_14;
            } else {
                fun_7c5(rdx);
                v4 = reinterpret_cast<int32_t>(gettimeofday);
                rax17 = rdx & 0x3ff;
                v10 = *reinterpret_cast<uint32_t*>(&rax17);
                if (gettimeofday) 
                    goto addr_7f7_25;
                if (v10 == gettimeofday) 
                    goto addr_7f7_25; else 
                    goto addr_7ed_27;
            }
        }
    }
    v18 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((v10 ^ 0x200) == gettimeofday)) & 1)) & v7 ^ 0xffffffff))) & rdx + static_cast<int64_t>(v8) >> 10;
    if (reinterpret_cast<int1_t>(v18 == gettimeofday)) {
        v4 = reinterpret_cast<int32_t>(gettimeofday);
    }
    *reinterpret_cast<int32_t*>(&rdi19) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rsi20) = v4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax21 = fun_877(rdi19, rsi20, v18);
    v16 = rax21;
    addr_87b_20:
    return v16;
    addr_7f7_25:
    goto addr_7fc_22;
    addr_7ed_27:
    fun_7f7(4);
    goto addr_7f7_25;
}

void fun_5bd(int64_t rdi) {
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

void fun_775(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int32_t*>(&rdi2) = *reinterpret_cast<int32_t*>(rbp3 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax4 = fun_786(rdi2, 0x7ff, gettimeofday);
    *reinterpret_cast<int64_t*>(rbp5 - 8) = rax4 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

void fun_7c5(uint64_t rdi) {
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
        fun_7f7(4);
    }
    if (*reinterpret_cast<int32_t*>(rbp8 - 44) != gettimeofday) {
        rax9 = g812;
        rax10 = g81e;
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
    rax26 = fun_877(rdi20, rsi22, rdx24);
    *reinterpret_cast<int64_t*>(rbp27 - 8) = rax26;
    goto v28;
}

void fun_7f7(int64_t rdi) {
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
        rax3 = g812;
        rax4 = g81e;
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
    rax20 = fun_877(rdi14, rsi16, rdx18);
    *reinterpret_cast<int64_t*>(rbp21 - 8) = rax20;
    goto v22;
}

int64_t* g926 = reinterpret_cast<int64_t*>(0x24c0950fd1043b48);

int64_t* g8eb = reinterpret_cast<int64_t*>(0xf0458948c8048b48);

int64_t* g8fe = reinterpret_cast<int64_t*>(0xe8458948c8048b48);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void rtclock();

void fun_97a(int64_t rdi, int64_t rsi);

int64_t fun_913() {
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
        rcx3 = g926;
        *reinterpret_cast<uint32_t*>(rbp4 - 4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int64_t*>(rbp5 - 32) != rcx3[*reinterpret_cast<int32_t*>(rbp6 - 8)])) & 1) + *reinterpret_cast<int32_t*>(rbp7 - 4);
        *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 8) >= 20) 
            break;
        rax11 = g8eb;
        *reinterpret_cast<int64_t*>(rbp12 - 16) = rax11[*reinterpret_cast<int32_t*>(rbp13 - 8)];
        rax14 = g8fe;
        *reinterpret_cast<int64_t*>(rbp15 - 24) = rax14[*reinterpret_cast<int32_t*>(rbp16 - 8)];
        rdi17 = *reinterpret_cast<struct s0**>(rbp18 - 16);
        rsi19 = *reinterpret_cast<struct s1**>(rbp20 - 24);
        rax2 = fun_913();
    }
    rtclock();
    rdi17->f0 = rsi19->f0;
    rsi21 = &rsi19->f4;
    rdi17->f4 = *rsi21;
    __asm__("subsd xmm0, [rax]");
    fun_97a(0x973, rsi21 + 1);
    goto v22;
}

void fun_97a(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_a93(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

int32_t fun_559(uint64_t rdi) {
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
    eax6 = fun_565(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 24) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_571(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<uint64_t*>(rbp13 - 16);
    eax14 = fun_57d(rdi12);
    *reinterpret_cast<uint32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint64_t*>(rbp16 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 8);
    *reinterpret_cast<uint64_t*>(rbp18 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp20 - 24) | *reinterpret_cast<uint32_t*>(rbp21 - 32)) != gettimeofday) {
        fun_5bd(16);
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

int64_t fun_786(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t v7;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5 - reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp6 - 40) == gettimeofday)) & 1)));
    goto v7;
}

int64_t fun_877(int64_t rdi, int64_t rsi, uint64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

int32_t fun_a75();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_a75();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0xa8c);
        fun_a93(0xa8c, rsi2);
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
    v5 = *reinterpret_cast<int32_t*>(0xa4d + rcx4 * 4) + v3;
    return v5;
}

int64_t fun_399(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
}

uint32_t fun_565(uint64_t rdi) {
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
    eax6 = fun_571(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<uint64_t*>(rbp9 - 16);
    eax10 = fun_57d(rdi8);
    *reinterpret_cast<uint32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint64_t*>(rbp12 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp13 - 8);
    *reinterpret_cast<uint64_t*>(rbp14 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp16 - 24) | *reinterpret_cast<uint32_t*>(rbp17 - 32)) != gettimeofday) {
        fun_5bd(16);
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

int64_t fun_410(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;

    *reinterpret_cast<int64_t*>(rbp4 - 8) = rax5;
    goto v6;
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

void fun_4e2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int32_t edi13;
    int64_t rbp14;
    int32_t esi15;
    int64_t rbp16;
    uint64_t rdx17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t v21;

    *reinterpret_cast<uint64_t*>(rbp5 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp6 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp7 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp8 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp9 - 72) = *reinterpret_cast<int64_t*>(rbp10 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp11 - 48) = *reinterpret_cast<int32_t*>(rbp12 - 48) - 1;
    }
    edi13 = *reinterpret_cast<int32_t*>(rbp14 - 36);
    esi15 = *reinterpret_cast<int32_t*>(rbp16 - 48);
    rdx17 = *reinterpret_cast<uint64_t*>(rbp18 - 72);
    rax19 = roundAndPackFloat64(edi13, esi15, rdx17);
    *reinterpret_cast<int64_t*>(rbp20 - 8) = rax19;
    goto v21;
}

int32_t ga8c = 0xe800b0;

int32_t fun_a75() {
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
        fun_a93(0xa8c, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    ga8c = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

int32_t fun_2d6(int64_t rdi);

int32_t fun_2e2(int64_t rdi);

int64_t fun_2ee(int64_t rdi);

int32_t fun_2fb(int64_t rdi);

int32_t fun_307(int64_t rdi);

void fun_2c9(int64_t rdi) {
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
    int32_t edi100;
    int64_t rbp101;
    int32_t esi102;
    int64_t rbp103;
    uint64_t rdx104;
    int64_t rbp105;
    int64_t rax106;
    int64_t rbp107;
    int64_t v108;

    *reinterpret_cast<int64_t*>(rbp2 - 56) = rax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_2d6(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 40) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 16);
    eax10 = fun_2e2(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 28) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    rax14 = fun_2ee(rdi12);
    *reinterpret_cast<int64_t*>(rbp15 - 64) = rax14;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_2fb(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 44) = eax18;
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 24);
    eax22 = fun_307(rdi20);
    *reinterpret_cast<int32_t*>(rbp23 - 32) = eax22;
    *reinterpret_cast<uint32_t*>(rbp24 - 36) = *reinterpret_cast<uint32_t*>(rbp25 - 28) ^ *reinterpret_cast<uint32_t*>(rbp26 - 32);
    if (*reinterpret_cast<int32_t*>(rbp27 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp28 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp29 - 40) == gettimeofday)) {
                addr_456_9:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp30 - 44) == gettimeofday)) {
                    addr_493_10:
                    *reinterpret_cast<int32_t*>(rbp31 - 48) = *reinterpret_cast<int32_t*>(rbp32 - 40) + *reinterpret_cast<int32_t*>(rbp33 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp34 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp35 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp36 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp37 - 64)) << 11;
                    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 56);
                    rsi40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
                    fun_4e2(rdi38, rsi40, rbp42 - 72, rbp43 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp44 - 64) == gettimeofday)) {
                        rdi45 = *reinterpret_cast<uint64_t*>(rbp46 - 64);
                        normalizeFloat64Subnormal(rdi45, rbp47 - 44, rbp48 - 64);
                        goto addr_493_10;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax51 = fun_479(rdi49);
                        *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                        goto addr_534_15;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp53 - 56) == gettimeofday)) {
                    rdi54 = *reinterpret_cast<uint64_t*>(rbp55 - 56);
                    normalizeFloat64Subnormal(rdi54, rbp56 - 40, rbp57 - 56);
                    goto addr_456_9;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi58) = *reinterpret_cast<int32_t*>(rbp59 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax60 = fun_43c(rdi58);
                    *reinterpret_cast<int64_t*>(rbp61 - 8) = rax60;
                    goto addr_534_15;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp62 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp63 - 40))) | *reinterpret_cast<uint64_t*>(rbp64 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax67 = fun_410(rdi65, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp68 - 8) = rax67;
                    goto addr_534_15;
                } else {
                    fun_3ec(16);
                    *reinterpret_cast<int64_t*>(rbp69 - 8) = 0x7fffffffffffffff;
                    goto addr_534_15;
                }
            } else {
                rdi70 = *reinterpret_cast<uint64_t*>(rbp71 - 16);
                rsi72 = *reinterpret_cast<uint64_t*>(rbp73 - 24);
                rax74 = propagateFloat64NaN(rdi70, rsi72);
                *reinterpret_cast<uint64_t*>(rbp75 - 8) = rax74;
                goto addr_534_15;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp76 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp77 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp78 - 64) != gettimeofday) {
            rdi79 = *reinterpret_cast<uint64_t*>(rbp80 - 16);
            rsi81 = *reinterpret_cast<uint64_t*>(rbp82 - 24);
            rax83 = propagateFloat64NaN(rdi79, rsi81);
            *reinterpret_cast<uint64_t*>(rbp84 - 8) = rax83;
            goto addr_534_15;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp85 - 44))) | *reinterpret_cast<uint64_t*>(rbp86 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi87) = *reinterpret_cast<int32_t*>(rbp88 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi87) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax89 = fun_399(rdi87, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp90 - 8) = rax89;
                goto addr_534_15;
            } else {
                fun_375(16);
                *reinterpret_cast<int64_t*>(rbp91 - 8) = 0x7fffffffffffffff;
                goto addr_534_15;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp92 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp93 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp94 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp95 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp96 - 72) = *reinterpret_cast<int64_t*>(rbp97 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp98 - 48) = *reinterpret_cast<int32_t*>(rbp99 - 48) - 1;
    }
    edi100 = *reinterpret_cast<int32_t*>(rbp101 - 36);
    esi102 = *reinterpret_cast<int32_t*>(rbp103 - 48);
    rdx104 = *reinterpret_cast<uint64_t*>(rbp105 - 72);
    rax106 = roundAndPackFloat64(edi100, esi102, rdx104);
    *reinterpret_cast<int64_t*>(rbp107 - 8) = rax106;
    addr_534_15:
    goto v108;
}

int32_t fun_571(uint64_t rdi) {
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
    eax6 = fun_57d(rdi4);
    *reinterpret_cast<uint32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint64_t*>(rbp8 - 8) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<uint64_t*>(rbp10 - 16) = 0x8000000000000 | *reinterpret_cast<uint64_t*>(rbp11 - 16);
    if ((*reinterpret_cast<uint32_t*>(rbp12 - 24) | *reinterpret_cast<uint32_t*>(rbp13 - 32)) != gettimeofday) {
        fun_5bd(16);
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

int32_t fun_2d6(int64_t rdi) {
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
    int32_t edi96;
    int64_t rbp97;
    int32_t esi98;
    int64_t rbp99;
    uint64_t rdx100;
    int64_t rbp101;
    int64_t rax102;
    int64_t rbp103;
    int64_t v104;

    *reinterpret_cast<int32_t*>(rbp2 - 40) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 16);
    eax6 = fun_2e2(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 28) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    rax10 = fun_2ee(rdi8);
    *reinterpret_cast<int64_t*>(rbp11 - 64) = rax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_2fb(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 44) = eax14;
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 24);
    eax18 = fun_307(rdi16);
    *reinterpret_cast<int32_t*>(rbp19 - 32) = eax18;
    *reinterpret_cast<uint32_t*>(rbp20 - 36) = *reinterpret_cast<uint32_t*>(rbp21 - 28) ^ *reinterpret_cast<uint32_t*>(rbp22 - 32);
    if (*reinterpret_cast<int32_t*>(rbp23 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp24 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp25 - 40) == gettimeofday)) {
                addr_456_8:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 44) == gettimeofday)) {
                    addr_493_9:
                    *reinterpret_cast<int32_t*>(rbp27 - 48) = *reinterpret_cast<int32_t*>(rbp28 - 40) + *reinterpret_cast<int32_t*>(rbp29 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp30 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp31 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp32 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp33 - 64)) << 11;
                    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 56);
                    rsi36 = *reinterpret_cast<int64_t*>(rbp37 - 64);
                    fun_4e2(rdi34, rsi36, rbp38 - 72, rbp39 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp40 - 64) == gettimeofday)) {
                        rdi41 = *reinterpret_cast<uint64_t*>(rbp42 - 64);
                        normalizeFloat64Subnormal(rdi41, rbp43 - 44, rbp44 - 64);
                        goto addr_493_9;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax47 = fun_479(rdi45);
                        *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                        goto addr_534_14;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp49 - 56) == gettimeofday)) {
                    rdi50 = *reinterpret_cast<uint64_t*>(rbp51 - 56);
                    normalizeFloat64Subnormal(rdi50, rbp52 - 40, rbp53 - 56);
                    goto addr_456_8;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi54) = *reinterpret_cast<int32_t*>(rbp55 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax56 = fun_43c(rdi54);
                    *reinterpret_cast<int64_t*>(rbp57 - 8) = rax56;
                    goto addr_534_14;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp58 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp59 - 40))) | *reinterpret_cast<uint64_t*>(rbp60 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax63 = fun_410(rdi61, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp64 - 8) = rax63;
                    goto addr_534_14;
                } else {
                    fun_3ec(16);
                    *reinterpret_cast<int64_t*>(rbp65 - 8) = 0x7fffffffffffffff;
                    goto addr_534_14;
                }
            } else {
                rdi66 = *reinterpret_cast<uint64_t*>(rbp67 - 16);
                rsi68 = *reinterpret_cast<uint64_t*>(rbp69 - 24);
                rax70 = propagateFloat64NaN(rdi66, rsi68);
                *reinterpret_cast<uint64_t*>(rbp71 - 8) = rax70;
                goto addr_534_14;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp72 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp73 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp74 - 64) != gettimeofday) {
            rdi75 = *reinterpret_cast<uint64_t*>(rbp76 - 16);
            rsi77 = *reinterpret_cast<uint64_t*>(rbp78 - 24);
            rax79 = propagateFloat64NaN(rdi75, rsi77);
            *reinterpret_cast<uint64_t*>(rbp80 - 8) = rax79;
            goto addr_534_14;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp81 - 44))) | *reinterpret_cast<uint64_t*>(rbp82 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi83) = *reinterpret_cast<int32_t*>(rbp84 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi83) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax85 = fun_399(rdi83, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp86 - 8) = rax85;
                goto addr_534_14;
            } else {
                fun_375(16);
                *reinterpret_cast<int64_t*>(rbp87 - 8) = 0x7fffffffffffffff;
                goto addr_534_14;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp88 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp89 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp90 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp91 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp92 - 72) = *reinterpret_cast<int64_t*>(rbp93 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp94 - 48) = *reinterpret_cast<int32_t*>(rbp95 - 48) - 1;
    }
    edi96 = *reinterpret_cast<int32_t*>(rbp97 - 36);
    esi98 = *reinterpret_cast<int32_t*>(rbp99 - 48);
    rdx100 = *reinterpret_cast<uint64_t*>(rbp101 - 72);
    rax102 = roundAndPackFloat64(edi96, esi98, rdx100);
    *reinterpret_cast<int64_t*>(rbp103 - 8) = rax102;
    addr_534_14:
    goto v104;
}

uint32_t fun_57d(uint64_t rdi) {
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
        fun_5bd(16);
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

int32_t fun_2e2(int64_t rdi) {
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
    int32_t edi92;
    int64_t rbp93;
    int32_t esi94;
    int64_t rbp95;
    uint64_t rdx96;
    int64_t rbp97;
    int64_t rax98;
    int64_t rbp99;
    int64_t v100;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    rax6 = fun_2ee(rdi4);
    *reinterpret_cast<int64_t*>(rbp7 - 64) = rax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_2fb(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 44) = eax10;
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 24);
    eax14 = fun_307(rdi12);
    *reinterpret_cast<int32_t*>(rbp15 - 32) = eax14;
    *reinterpret_cast<uint32_t*>(rbp16 - 36) = *reinterpret_cast<uint32_t*>(rbp17 - 28) ^ *reinterpret_cast<uint32_t*>(rbp18 - 32);
    if (*reinterpret_cast<int32_t*>(rbp19 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp20 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp21 - 40) == gettimeofday)) {
                addr_456_7:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 44) == gettimeofday)) {
                    addr_493_8:
                    *reinterpret_cast<int32_t*>(rbp23 - 48) = *reinterpret_cast<int32_t*>(rbp24 - 40) + *reinterpret_cast<int32_t*>(rbp25 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp26 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp27 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp28 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp29 - 64)) << 11;
                    rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 56);
                    rsi32 = *reinterpret_cast<int64_t*>(rbp33 - 64);
                    fun_4e2(rdi30, rsi32, rbp34 - 72, rbp35 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp36 - 64) == gettimeofday)) {
                        rdi37 = *reinterpret_cast<uint64_t*>(rbp38 - 64);
                        normalizeFloat64Subnormal(rdi37, rbp39 - 44, rbp40 - 64);
                        goto addr_493_8;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi41) = *reinterpret_cast<int32_t*>(rbp42 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax43 = fun_479(rdi41);
                        *reinterpret_cast<int64_t*>(rbp44 - 8) = rax43;
                        goto addr_534_13;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp45 - 56) == gettimeofday)) {
                    rdi46 = *reinterpret_cast<uint64_t*>(rbp47 - 56);
                    normalizeFloat64Subnormal(rdi46, rbp48 - 40, rbp49 - 56);
                    goto addr_456_7;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi50) = *reinterpret_cast<int32_t*>(rbp51 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax52 = fun_43c(rdi50);
                    *reinterpret_cast<int64_t*>(rbp53 - 8) = rax52;
                    goto addr_534_13;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp54 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp55 - 40))) | *reinterpret_cast<uint64_t*>(rbp56 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(rbp58 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax59 = fun_410(rdi57, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp60 - 8) = rax59;
                    goto addr_534_13;
                } else {
                    fun_3ec(16);
                    *reinterpret_cast<int64_t*>(rbp61 - 8) = 0x7fffffffffffffff;
                    goto addr_534_13;
                }
            } else {
                rdi62 = *reinterpret_cast<uint64_t*>(rbp63 - 16);
                rsi64 = *reinterpret_cast<uint64_t*>(rbp65 - 24);
                rax66 = propagateFloat64NaN(rdi62, rsi64);
                *reinterpret_cast<uint64_t*>(rbp67 - 8) = rax66;
                goto addr_534_13;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp68 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp69 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp70 - 64) != gettimeofday) {
            rdi71 = *reinterpret_cast<uint64_t*>(rbp72 - 16);
            rsi73 = *reinterpret_cast<uint64_t*>(rbp74 - 24);
            rax75 = propagateFloat64NaN(rdi71, rsi73);
            *reinterpret_cast<uint64_t*>(rbp76 - 8) = rax75;
            goto addr_534_13;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp77 - 44))) | *reinterpret_cast<uint64_t*>(rbp78 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi79) = *reinterpret_cast<int32_t*>(rbp80 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi79) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax81 = fun_399(rdi79, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp82 - 8) = rax81;
                goto addr_534_13;
            } else {
                fun_375(16);
                *reinterpret_cast<int64_t*>(rbp83 - 8) = 0x7fffffffffffffff;
                goto addr_534_13;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp84 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp85 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp86 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp87 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp88 - 72) = *reinterpret_cast<int64_t*>(rbp89 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp90 - 48) = *reinterpret_cast<int32_t*>(rbp91 - 48) - 1;
    }
    edi92 = *reinterpret_cast<int32_t*>(rbp93 - 36);
    esi94 = *reinterpret_cast<int32_t*>(rbp95 - 48);
    rdx96 = *reinterpret_cast<uint64_t*>(rbp97 - 72);
    rax98 = roundAndPackFloat64(edi92, esi94, rdx96);
    *reinterpret_cast<int64_t*>(rbp99 - 8) = rax98;
    addr_534_13:
    goto v100;
}

int64_t fun_2ee(int64_t rdi) {
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
    int32_t edi88;
    int64_t rbp89;
    int32_t esi90;
    int64_t rbp91;
    uint64_t rdx92;
    int64_t rbp93;
    int64_t rax94;
    int64_t rbp95;
    int64_t v96;

    *reinterpret_cast<int64_t*>(rbp2 - 64) = rax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_2fb(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 44) = eax6;
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 24);
    eax10 = fun_307(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 32) = eax10;
    *reinterpret_cast<uint32_t*>(rbp12 - 36) = *reinterpret_cast<uint32_t*>(rbp13 - 28) ^ *reinterpret_cast<uint32_t*>(rbp14 - 32);
    if (*reinterpret_cast<int32_t*>(rbp15 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp16 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp17 - 40) == gettimeofday)) {
                addr_456_6:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp18 - 44) == gettimeofday)) {
                    addr_493_7:
                    *reinterpret_cast<int32_t*>(rbp19 - 48) = *reinterpret_cast<int32_t*>(rbp20 - 40) + *reinterpret_cast<int32_t*>(rbp21 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp22 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp23 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp24 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp25 - 64)) << 11;
                    rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 56);
                    rsi28 = *reinterpret_cast<int64_t*>(rbp29 - 64);
                    fun_4e2(rdi26, rsi28, rbp30 - 72, rbp31 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp32 - 64) == gettimeofday)) {
                        rdi33 = *reinterpret_cast<uint64_t*>(rbp34 - 64);
                        normalizeFloat64Subnormal(rdi33, rbp35 - 44, rbp36 - 64);
                        goto addr_493_7;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi37) = *reinterpret_cast<int32_t*>(rbp38 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax39 = fun_479(rdi37);
                        *reinterpret_cast<int64_t*>(rbp40 - 8) = rax39;
                        goto addr_534_12;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp41 - 56) == gettimeofday)) {
                    rdi42 = *reinterpret_cast<uint64_t*>(rbp43 - 56);
                    normalizeFloat64Subnormal(rdi42, rbp44 - 40, rbp45 - 56);
                    goto addr_456_6;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi46) = *reinterpret_cast<int32_t*>(rbp47 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax48 = fun_43c(rdi46);
                    *reinterpret_cast<int64_t*>(rbp49 - 8) = rax48;
                    goto addr_534_12;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp50 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp51 - 40))) | *reinterpret_cast<uint64_t*>(rbp52 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax55 = fun_410(rdi53, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp56 - 8) = rax55;
                    goto addr_534_12;
                } else {
                    fun_3ec(16);
                    *reinterpret_cast<int64_t*>(rbp57 - 8) = 0x7fffffffffffffff;
                    goto addr_534_12;
                }
            } else {
                rdi58 = *reinterpret_cast<uint64_t*>(rbp59 - 16);
                rsi60 = *reinterpret_cast<uint64_t*>(rbp61 - 24);
                rax62 = propagateFloat64NaN(rdi58, rsi60);
                *reinterpret_cast<uint64_t*>(rbp63 - 8) = rax62;
                goto addr_534_12;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp64 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp65 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp66 - 64) != gettimeofday) {
            rdi67 = *reinterpret_cast<uint64_t*>(rbp68 - 16);
            rsi69 = *reinterpret_cast<uint64_t*>(rbp70 - 24);
            rax71 = propagateFloat64NaN(rdi67, rsi69);
            *reinterpret_cast<uint64_t*>(rbp72 - 8) = rax71;
            goto addr_534_12;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp73 - 44))) | *reinterpret_cast<uint64_t*>(rbp74 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi75) = *reinterpret_cast<int32_t*>(rbp76 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi75) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax77 = fun_399(rdi75, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp78 - 8) = rax77;
                goto addr_534_12;
            } else {
                fun_375(16);
                *reinterpret_cast<int64_t*>(rbp79 - 8) = 0x7fffffffffffffff;
                goto addr_534_12;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp80 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp81 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp82 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp83 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp84 - 72) = *reinterpret_cast<int64_t*>(rbp85 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp86 - 48) = *reinterpret_cast<int32_t*>(rbp87 - 48) - 1;
    }
    edi88 = *reinterpret_cast<int32_t*>(rbp89 - 36);
    esi90 = *reinterpret_cast<int32_t*>(rbp91 - 48);
    rdx92 = *reinterpret_cast<uint64_t*>(rbp93 - 72);
    rax94 = roundAndPackFloat64(edi88, esi90, rdx92);
    *reinterpret_cast<int64_t*>(rbp95 - 8) = rax94;
    addr_534_12:
    goto v96;
}

int32_t fun_2fb(int64_t rdi) {
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
    int32_t edi84;
    int64_t rbp85;
    int32_t esi86;
    int64_t rbp87;
    uint64_t rdx88;
    int64_t rbp89;
    int64_t rax90;
    int64_t rbp91;
    int64_t v92;

    *reinterpret_cast<int32_t*>(rbp2 - 44) = eax3;
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 24);
    eax6 = fun_307(rdi4);
    *reinterpret_cast<int32_t*>(rbp7 - 32) = eax6;
    *reinterpret_cast<uint32_t*>(rbp8 - 36) = *reinterpret_cast<uint32_t*>(rbp9 - 28) ^ *reinterpret_cast<uint32_t*>(rbp10 - 32);
    if (*reinterpret_cast<int32_t*>(rbp11 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp12 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp13 - 40) == gettimeofday)) {
                addr_456_5:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp14 - 44) == gettimeofday)) {
                    addr_493_6:
                    *reinterpret_cast<int32_t*>(rbp15 - 48) = *reinterpret_cast<int32_t*>(rbp16 - 40) + *reinterpret_cast<int32_t*>(rbp17 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp18 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp19 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp20 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp21 - 64)) << 11;
                    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 56);
                    rsi24 = *reinterpret_cast<int64_t*>(rbp25 - 64);
                    fun_4e2(rdi22, rsi24, rbp26 - 72, rbp27 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp28 - 64) == gettimeofday)) {
                        rdi29 = *reinterpret_cast<uint64_t*>(rbp30 - 64);
                        normalizeFloat64Subnormal(rdi29, rbp31 - 44, rbp32 - 64);
                        goto addr_493_6;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi33) = *reinterpret_cast<int32_t*>(rbp34 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax35 = fun_479(rdi33);
                        *reinterpret_cast<int64_t*>(rbp36 - 8) = rax35;
                        goto addr_534_11;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp37 - 56) == gettimeofday)) {
                    rdi38 = *reinterpret_cast<uint64_t*>(rbp39 - 56);
                    normalizeFloat64Subnormal(rdi38, rbp40 - 40, rbp41 - 56);
                    goto addr_456_5;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(rbp43 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax44 = fun_43c(rdi42);
                    *reinterpret_cast<int64_t*>(rbp45 - 8) = rax44;
                    goto addr_534_11;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp46 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp47 - 40))) | *reinterpret_cast<uint64_t*>(rbp48 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi49) = *reinterpret_cast<int32_t*>(rbp50 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax51 = fun_410(rdi49, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp52 - 8) = rax51;
                    goto addr_534_11;
                } else {
                    fun_3ec(16);
                    *reinterpret_cast<int64_t*>(rbp53 - 8) = 0x7fffffffffffffff;
                    goto addr_534_11;
                }
            } else {
                rdi54 = *reinterpret_cast<uint64_t*>(rbp55 - 16);
                rsi56 = *reinterpret_cast<uint64_t*>(rbp57 - 24);
                rax58 = propagateFloat64NaN(rdi54, rsi56);
                *reinterpret_cast<uint64_t*>(rbp59 - 8) = rax58;
                goto addr_534_11;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp60 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp61 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp62 - 64) != gettimeofday) {
            rdi63 = *reinterpret_cast<uint64_t*>(rbp64 - 16);
            rsi65 = *reinterpret_cast<uint64_t*>(rbp66 - 24);
            rax67 = propagateFloat64NaN(rdi63, rsi65);
            *reinterpret_cast<uint64_t*>(rbp68 - 8) = rax67;
            goto addr_534_11;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp69 - 44))) | *reinterpret_cast<uint64_t*>(rbp70 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi71) = *reinterpret_cast<int32_t*>(rbp72 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax73 = fun_399(rdi71, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp74 - 8) = rax73;
                goto addr_534_11;
            } else {
                fun_375(16);
                *reinterpret_cast<int64_t*>(rbp75 - 8) = 0x7fffffffffffffff;
                goto addr_534_11;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp76 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp77 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp78 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp79 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp80 - 72) = *reinterpret_cast<int64_t*>(rbp81 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp82 - 48) = *reinterpret_cast<int32_t*>(rbp83 - 48) - 1;
    }
    edi84 = *reinterpret_cast<int32_t*>(rbp85 - 36);
    esi86 = *reinterpret_cast<int32_t*>(rbp87 - 48);
    rdx88 = *reinterpret_cast<uint64_t*>(rbp89 - 72);
    rax90 = roundAndPackFloat64(edi84, esi86, rdx88);
    *reinterpret_cast<int64_t*>(rbp91 - 8) = rax90;
    addr_534_11:
    goto v92;
}

int32_t fun_307(int64_t rdi) {
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
    int32_t edi80;
    int64_t rbp81;
    int32_t esi82;
    int64_t rbp83;
    uint64_t rdx84;
    int64_t rbp85;
    int64_t rax86;
    int64_t rbp87;
    int64_t v88;

    *reinterpret_cast<int32_t*>(rbp2 - 32) = eax3;
    *reinterpret_cast<uint32_t*>(rbp4 - 36) = *reinterpret_cast<uint32_t*>(rbp5 - 28) ^ *reinterpret_cast<uint32_t*>(rbp6 - 32);
    if (*reinterpret_cast<int32_t*>(rbp7 - 40) != 0x7ff) {
        if (*reinterpret_cast<int32_t*>(rbp8 - 44) != 0x7ff) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 40) == gettimeofday)) {
                addr_456_4:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp10 - 44) == gettimeofday)) {
                    addr_493_5:
                    *reinterpret_cast<int32_t*>(rbp11 - 48) = *reinterpret_cast<int32_t*>(rbp12 - 40) + *reinterpret_cast<int32_t*>(rbp13 - 44) - 0x3ff;
                    *reinterpret_cast<uint64_t*>(rbp14 - 56) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp15 - 56)) << 10;
                    *reinterpret_cast<uint64_t*>(rbp16 - 64) = (0x10000000000000 | *reinterpret_cast<uint64_t*>(rbp17 - 64)) << 11;
                    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
                    rsi20 = *reinterpret_cast<int64_t*>(rbp21 - 64);
                    fun_4e2(rdi18, rsi20, rbp22 - 72, rbp23 - 80);
                } else {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp24 - 64) == gettimeofday)) {
                        rdi25 = *reinterpret_cast<uint64_t*>(rbp26 - 64);
                        normalizeFloat64Subnormal(rdi25, rbp27 - 44, rbp28 - 64);
                        goto addr_493_5;
                    } else {
                        *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(rbp30 - 36);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                        rax31 = fun_479(rdi29);
                        *reinterpret_cast<int64_t*>(rbp32 - 8) = rax31;
                        goto addr_534_10;
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp33 - 56) == gettimeofday)) {
                    rdi34 = *reinterpret_cast<uint64_t*>(rbp35 - 56);
                    normalizeFloat64Subnormal(rdi34, rbp36 - 40, rbp37 - 56);
                    goto addr_456_4;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi38) = *reinterpret_cast<int32_t*>(rbp39 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax40 = fun_43c(rdi38);
                    *reinterpret_cast<int64_t*>(rbp41 - 8) = rax40;
                    goto addr_534_10;
                }
            }
        } else {
            if (*reinterpret_cast<int64_t*>(rbp42 - 64) == gettimeofday) {
                if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp43 - 40))) | *reinterpret_cast<uint64_t*>(rbp44 - 56)) == gettimeofday)) {
                    *reinterpret_cast<int32_t*>(&rdi45) = *reinterpret_cast<int32_t*>(rbp46 - 36);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    rax47 = fun_410(rdi45, 0x7ff, gettimeofday);
                    *reinterpret_cast<int64_t*>(rbp48 - 8) = rax47;
                    goto addr_534_10;
                } else {
                    fun_3ec(16);
                    *reinterpret_cast<int64_t*>(rbp49 - 8) = 0x7fffffffffffffff;
                    goto addr_534_10;
                }
            } else {
                rdi50 = *reinterpret_cast<uint64_t*>(rbp51 - 16);
                rsi52 = *reinterpret_cast<uint64_t*>(rbp53 - 24);
                rax54 = propagateFloat64NaN(rdi50, rsi52);
                *reinterpret_cast<uint64_t*>(rbp55 - 8) = rax54;
                goto addr_534_10;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp56 - 56) == gettimeofday) || *reinterpret_cast<int32_t*>(rbp57 - 44) == 0x7ff && *reinterpret_cast<int64_t*>(rbp58 - 64) != gettimeofday) {
            rdi59 = *reinterpret_cast<uint64_t*>(rbp60 - 16);
            rsi61 = *reinterpret_cast<uint64_t*>(rbp62 - 24);
            rax63 = propagateFloat64NaN(rdi59, rsi61);
            *reinterpret_cast<uint64_t*>(rbp64 - 8) = rax63;
            goto addr_534_10;
        } else {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp65 - 44))) | *reinterpret_cast<uint64_t*>(rbp66 - 64)) == gettimeofday)) {
                *reinterpret_cast<int32_t*>(&rdi67) = *reinterpret_cast<int32_t*>(rbp68 - 36);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                rax69 = fun_399(rdi67, 0x7ff, gettimeofday);
                *reinterpret_cast<int64_t*>(rbp70 - 8) = rax69;
                goto addr_534_10;
            } else {
                fun_375(16);
                *reinterpret_cast<int64_t*>(rbp71 - 8) = 0x7fffffffffffffff;
                goto addr_534_10;
            }
        }
    }
    *reinterpret_cast<uint64_t*>(rbp72 - 72) = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int64_t*>(rbp73 - 80) == gettimeofday))) & 1))))) | *reinterpret_cast<uint64_t*>(rbp74 - 72);
    if (reinterpret_cast<int64_t>(gettimeofday) <= *reinterpret_cast<int64_t*>(rbp75 - 72) << 1) {
        *reinterpret_cast<int64_t*>(rbp76 - 72) = *reinterpret_cast<int64_t*>(rbp77 - 72) << 1;
        *reinterpret_cast<int32_t*>(rbp78 - 48) = *reinterpret_cast<int32_t*>(rbp79 - 48) - 1;
    }
    edi80 = *reinterpret_cast<int32_t*>(rbp81 - 36);
    esi82 = *reinterpret_cast<int32_t*>(rbp83 - 48);
    rdx84 = *reinterpret_cast<uint64_t*>(rbp85 - 72);
    rax86 = roundAndPackFloat64(edi80, esi82, rdx84);
    *reinterpret_cast<int64_t*>(rbp87 - 8) = rax86;
    addr_534_10:
    goto v88;
}

void gettimeofday(int64_t rdi) {
}

void fun_1a8() {
}

void float64_is_signaling_nan(int64_t rdi) {
}

void fun_1e8(signed char* rdi) {
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

void fun_228() {
    int64_t v1;

    goto v1;
}

void fun_248() {
    int64_t v1;

    goto v1;
}

uint64_t extractFloat64Sign(uint64_t rdi) {
    return rdi >> 63;
}

void submain(int32_t* rdi, int32_t* rsi) {
    rtclock();
    *rdi = *rsi;
}

int64_t packFloat64(int32_t edi, int32_t esi, int64_t rdx) {
    return (static_cast<int64_t>(edi) << 63) + (static_cast<int64_t>(esi) << 52) + rdx;
}

void float64_mul(int64_t rdi, int64_t rsi) {
    fun_2c9(rdi);
}

int32_t* ullong_to_double(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
    return rdi;
}

