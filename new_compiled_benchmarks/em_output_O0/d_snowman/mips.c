
void fun_908(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_953(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

int32_t fun_935();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
    eax3 = fun_935();
    if (eax3) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
        rdi1 = reinterpret_cast<int32_t*>(0x94c);
        fun_953(0x94c, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

int32_t g94c = 0xe800b0;

int32_t fun_935() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rbp3;
    int32_t* rsi4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(rbp1 - 20) = eax2;
    if (*reinterpret_cast<int32_t*>(rbp3 - 20)) {
        *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0;
        fun_953(0x94c, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    g94c = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

void imem() {
    int64_t rbx1;
    int64_t rbx2;
    signed char cl3;
    int64_t rbx4;
    int64_t rbx5;

    *reinterpret_cast<signed char*>(rbx1 - 0x1a77b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbx2 - 0x1a77b) + cl3);
    *reinterpret_cast<int32_t*>(rbx4 - 0x7a76c020) = *reinterpret_cast<int32_t*>(rbx5 - 0x7a76c020) + 1;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t fun_1fe08484();

int32_t* g865 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g86e = reinterpret_cast<uint32_t*>(0xfffffe5c85c70889);

int32_t* g8a3 = reinterpret_cast<int32_t*>(0x124c0950f91043b);

int32_t* g8b5 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g8be = reinterpret_cast<uint32_t*>(0xfffffe5c858b0889);

void fun_171(struct s0* rdi, struct s1* rsi) {
    int64_t rbx3;
    int64_t rbx4;
    int32_t eax5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    uint64_t rax13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int32_t* rax22;
    uint32_t* rax23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int32_t* rcx27;
    int32_t* rax28;
    uint32_t* rax29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int32_t* rsi35;

    *reinterpret_cast<int32_t*>(rbx3 - 0x1a77b) = *reinterpret_cast<int32_t*>(rbx4 - 0x1a77b) - 1;
    eax5 = fun_1fe08484();
    *reinterpret_cast<int32_t*>(rbp6 - 0x1bc) = eax5;
    *reinterpret_cast<uint32_t*>(rbp7 - 0x1b8) = *reinterpret_cast<uint32_t*>(rbp8 - 0x1a8) >> 11 & 31;
    *reinterpret_cast<uint32_t*>(rbp9 - 0x1b4) = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbp10 - 0x1a6)) & 31;
    *reinterpret_cast<uint32_t*>(rbp11 - 0x1b0) = *reinterpret_cast<uint32_t*>(rbp12 - 0x1a8) >> 21 & 31;
    *reinterpret_cast<int32_t*>(&rax13) = *reinterpret_cast<int32_t*>(rbp14 - 0x1c0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    *reinterpret_cast<uint64_t*>(rbp15 - 0x1e0) = rax13;
    if (rax13 <= 43) {
        goto *reinterpret_cast<int32_t*>(0x1dd + *reinterpret_cast<int64_t*>(rbp16 - 0x1e0) * 4) + 0x1dd;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 0x9c) = 0;
    *reinterpret_cast<int32_t*>(rbp18 - 0x90) = 0;
    *reinterpret_cast<int32_t*>(rbp19 - 0x1d0) = *reinterpret_cast<int32_t*>(rbp20 - 0x1d0) + 1;
    if (!*reinterpret_cast<int32_t*>(rbp21 - 0x9c)) 
        goto addr_84c_6;
    addr_84c_6:
    rax22 = g865;
    rax23 = g86e;
    *rax23 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp24 - 0x1d0) != 0x263)) & 1) + *rax22;
    *reinterpret_cast<int32_t*>(rbp25 - 0x1a4) = 0;
    while (*reinterpret_cast<int32_t*>(rbp26 - 0x1a4) < 8) {
        rcx27 = g8a3;
        rax28 = g8b5;
        rax29 = g8be;
        *rax29 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp30 + *reinterpret_cast<int32_t*>(rbp31 - 0x1a4) * 4 - 0x1a0) != rcx27[*reinterpret_cast<int32_t*>(rbp32 - 0x1a4)])) & 1) + *rax28;
        *reinterpret_cast<int32_t*>(rbp33 - 0x1a4) = *reinterpret_cast<int32_t*>(rbp34 - 0x1a4) + 1;
    }
    rtclock();
    rdi->f0 = rsi->f0;
    rsi35 = &rsi->f4;
    rdi->f4 = *rsi35;
    __asm__("subsd xmm0, [rax]");
    fun_908(0x901, rsi35 + 1);
}

void fun_1e6() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) + *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    goto 0x506;
}

void fun_5bf() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) + *reinterpret_cast<int16_t*>(rbp5 - 0x1c2);
    goto 0x826;
}

void fun_73c() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;

    if (*reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b0) * 4 - 0x90) != *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b4) * 4 - 0x90)) {
        *reinterpret_cast<int32_t*>(rbp5 - 0x9c) = *reinterpret_cast<int32_t*>(rbp6 - 0x9c) - 4 + (static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp7 - 0x1c2)) << 2);
    }
    goto 0x821;
}

void fun_77e() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    if (*reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b0) * 4 - 0x90) >= 0) {
        *reinterpret_cast<int32_t*>(rbp3 - 0x9c) = *reinterpret_cast<int32_t*>(rbp4 - 0x9c) - 4 + (static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp5 - 0x1c2)) << 2);
    }
    goto 0x821;
}

void fun_7b3() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) < static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp5 - 0x1c2)))) & 1;
    goto 0x821;
}

void fun_50b() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;

    *reinterpret_cast<uint32_t*>(rbp1 - 0x1c8) = *reinterpret_cast<uint32_t*>(rbp2 - 0x1a8) & 0x3ffffff;
    *reinterpret_cast<int32_t*>(rbp3 - 0x9c) = *reinterpret_cast<int32_t*>(rbp4 - 0x1c8) << 2;
    goto 0x826;
}

void fun_215() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) - *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    goto 0x506;
}

void fun_5e9() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = *reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) & static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbp5 - 0x1c2));
    goto 0x821;
}

void fun_7e5() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) < static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbp5 - 0x1c2)))) & 1;
    goto 0x821;
}

void fun_530() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<uint32_t*>(rbp1 - 0x1c8) = *reinterpret_cast<uint32_t*>(rbp2 - 0x1a8) & 0x3ffffff;
    *reinterpret_cast<int32_t*>(rbp3 - 20) = *reinterpret_cast<int32_t*>(rbp4 - 0x9c);
    *reinterpret_cast<int32_t*>(rbp5 - 0x9c) = *reinterpret_cast<int32_t*>(rbp6 - 0x1c8) << 2;
    goto 0x826;
}

void fun_244() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    uint64_t rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    uint64_t rax11;
    int64_t rbp12;

    *reinterpret_cast<int64_t*>(rbp1 - 8) = *reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 0x1b0) * 4 - 0x90) * static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp4 + *reinterpret_cast<int32_t*>(rbp5 - 0x1b4) * 4 - 0x90));
    rax6 = 0xffffffff & *reinterpret_cast<uint64_t*>(rbp7 - 8);
    *reinterpret_cast<int32_t*>(rbp8 - 0x98) = *reinterpret_cast<int32_t*>(&rax6);
    rax9 = *reinterpret_cast<int64_t*>(rbp10 - 8) >> 32;
    rax11 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax9))) & 0xffffffff;
    *reinterpret_cast<int32_t*>(rbp12 - 0x94) = *reinterpret_cast<int32_t*>(&rax11);
    goto 0x506;
}

void fun_613() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = *reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbp5 - 0x1c2));
    goto 0x821;
}

void fun_55e() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    uint32_t eax7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;

    *reinterpret_cast<int16_t*>(rbp1 - 0x1c2) = *reinterpret_cast<int16_t*>(rbp2 - 0x1a8);
    *reinterpret_cast<uint32_t*>(rbp3 - 0x1b4) = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbp4 - 0x1a6)) & 31;
    *reinterpret_cast<uint32_t*>(rbp5 - 0x1b0) = *reinterpret_cast<uint32_t*>(rbp6 - 0x1a8) >> 21 & 31;
    eax7 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(rbp8 - 0x1ac) - 1);
    *reinterpret_cast<uint32_t*>(&rcx9) = eax7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    *reinterpret_cast<int64_t*>(rbp10 - 0x1e8) = rcx9;
    if (eax7 > 42) {
        *reinterpret_cast<int32_t*>(rbp11 - 0x9c) = 0;
    } else {
        goto *reinterpret_cast<int32_t*>(0x5b6 + *reinterpret_cast<int64_t*>(rbp12 - 0x1e8) * 4) + 0x5b6;
    }
}

void fun_2a0() {
    int64_t rax1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rcx4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    uint64_t rax8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    uint64_t rax13;
    int64_t rbp14;

    *reinterpret_cast<int32_t*>(&rax1) = *reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 0x1b0) * 4 - 0x90);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    *reinterpret_cast<int64_t*>(rbp7 - 8) = rax1 * rcx4;
    rax8 = 0xffffffff & *reinterpret_cast<uint64_t*>(rbp9 - 8);
    *reinterpret_cast<int32_t*>(rbp10 - 0x98) = *reinterpret_cast<int32_t*>(&rax8);
    rax11 = *reinterpret_cast<int64_t*>(rbp12 - 8) >> 32;
    rax13 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax11))) & 0xffffffff;
    *reinterpret_cast<int32_t*>(rbp14 - 0x94) = *reinterpret_cast<int32_t*>(&rax13);
    goto 0x506;
}

void fun_63d() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = *reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) ^ static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbp5 - 0x1c2));
    goto 0x821;
}

void fun_2fa() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp3 - 0x94);
    goto 0x506;
}

void fun_667() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp3 + (reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(rbp4 + *reinterpret_cast<int32_t*>(rbp5 - 0x1b0) * 4 - 0x90) + reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp6 - 0x1c2))) & 0xff) >> 2) * 4 - 0x1a0);
    goto 0x821;
}

void fun_313() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp3 - 0x98);
    goto 0x506;
}

void fun_6a2() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<int32_t*>(rbp1 + (reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 0x1b0) * 4 - 0x90) + reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp4 - 0x1c2))) & 0xff) >> 2) * 4 - 0x1a0) = *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    goto 0x821;
}

void fun_32c() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) & *reinterpret_cast<uint32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    goto 0x506;
}

void fun_6dd() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;

    *reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b4) * 4 - 0x90) = static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp3 - 0x1c2)) << 16;
    goto 0x821;
}

void fun_35b() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) | *reinterpret_cast<uint32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    goto 0x506;
}

void fun_6fa() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;

    if (*reinterpret_cast<int32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b0) * 4 - 0x90) == *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b4) * 4 - 0x90)) {
        *reinterpret_cast<int32_t*>(rbp5 - 0x9c) = *reinterpret_cast<int32_t*>(rbp6 - 0x9c) - 4 + (static_cast<int32_t>(*reinterpret_cast<int16_t*>(rbp7 - 0x1c2)) << 2);
    }
    goto 0x821;
}

void fun_38a() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) ^ *reinterpret_cast<uint32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90);
    goto 0x506;
}

void fun_3b9() {
    int32_t ecx1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    ecx1 = *reinterpret_cast<int32_t*>(rbp2 - 0x1bc);
    *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90) << *reinterpret_cast<unsigned char*>(&ecx1);
    goto 0x506;
}

void fun_3e4() {
    int32_t ecx1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    ecx1 = *reinterpret_cast<int32_t*>(rbp2 - 0x1bc);
    *reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90) >> *reinterpret_cast<signed char*>(&ecx1);
    goto 0x506;
}

void fun_40f() {
    int32_t ecx1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;

    ecx1 = *reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 0x1b0) * 4 - 0x90);
    *reinterpret_cast<int32_t*>(rbp4 + *reinterpret_cast<int32_t*>(rbp5 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp6 + *reinterpret_cast<int32_t*>(rbp7 - 0x1b4) * 4 - 0x90) << *reinterpret_cast<unsigned char*>(&ecx1);
    goto 0x506;
}

void fun_442() {
    int32_t ecx1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;

    ecx1 = *reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 0x1b0) * 4 - 0x90);
    *reinterpret_cast<int32_t*>(rbp4 + *reinterpret_cast<int32_t*>(rbp5 - 0x1b8) * 4 - 0x90) = *reinterpret_cast<int32_t*>(rbp6 + *reinterpret_cast<int32_t*>(rbp7 - 0x1b4) * 4 - 0x90) >> *reinterpret_cast<signed char*>(&ecx1);
    goto 0x506;
}

void fun_475() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) < *reinterpret_cast<int32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90))) & 1;
    goto 0x506;
}

void fun_4ac() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<uint32_t*>(rbp1 + *reinterpret_cast<int32_t*>(rbp2 - 0x1b8) * 4 - 0x90) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(rbp3 + *reinterpret_cast<int32_t*>(rbp4 - 0x1b0) * 4 - 0x90) < *reinterpret_cast<uint32_t*>(rbp5 + *reinterpret_cast<int32_t*>(rbp6 - 0x1b4) * 4 - 0x90))) & 1;
    goto 0x506;
}

void fun_4e3() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x9c) = *reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 0x1b0) * 4 - 0x90);
    goto 0x506;
}

