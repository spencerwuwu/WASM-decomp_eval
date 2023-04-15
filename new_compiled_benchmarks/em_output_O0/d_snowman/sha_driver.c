
void fun_5f8(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t g5e9 = 0xe800000040ba;

void gettimeofday(int64_t rdi);

int64_t g620 = 0xc4834800000000e8;

void fun_625(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_5f3(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rsi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rsi12;
    int64_t rbp13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t v17;

    while (1) {
        fun_5f8(rdi, rsi, rdx);
        *reinterpret_cast<int64_t*>(rbp4 - 8) = *reinterpret_cast<int64_t*>(rbp5 - 8) + 64;
        *reinterpret_cast<int32_t*>(rbp6 - 12) = *reinterpret_cast<int32_t*>(rbp7 - 12) - 64;
        if (*reinterpret_cast<int32_t*>(rbp8 - 12) < 64) 
            break;
        rsi9 = *reinterpret_cast<int64_t*>(rbp10 - 8);
        rdi11 = g5e9;
        fun_5f3(rdi11, rsi9, 64);
    }
    rsi12 = *reinterpret_cast<int64_t*>(rbp13 - 8);
    *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(rbp15 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdi16 = g620;
    fun_625(rdi16, rsi12, rdx14);
    goto v17;
}

void fun_6a0();

int64_t g6a7 = 0x8900000038bac931;

void fun_6b5(int64_t rdi, int64_t rsi, int64_t rdx);

struct s0 {
    signed char[56] pad56;
    int32_t f38;
};

struct s0* g6dd = reinterpret_cast<struct s0*>(0x8b48f84d8b384889);

struct s1 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s1* g6ea = reinterpret_cast<struct s1*>(0xe83c4889);

void fun_6f2(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_69b(int64_t rdi) {
    int64_t rdi2;
    struct s0* rax3;
    int64_t rbp4;
    struct s1* rax5;
    int64_t rbp6;
    int64_t v7;

    fun_6a0();
    rdi2 = g6a7;
    fun_6b5(rdi2, gettimeofday, 56);
    rax3 = g6dd;
    rax3->f38 = *reinterpret_cast<int32_t*>(rbp4 - 12);
    rax5 = g6ea;
    rax5->f3c = *reinterpret_cast<int32_t*>(rbp6 - 8);
    fun_6f2(rdi2, gettimeofday, 56);
    goto v7;
}

int32_t* g729 = reinterpret_cast<int32_t*>(0x6348fc458988048b);

int64_t g73a = 0x48c801480de1c148;

void fun_764(int64_t rdi, int64_t rsi);

void fun_751(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rsi14;
    int64_t rbp15;
    int64_t v16;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp3 - 8) = *reinterpret_cast<int32_t*>(rbp4 - 8) + 1;
        if (*reinterpret_cast<int32_t*>(rbp5 - 8) >= 2) 
            break;
        rax6 = g729;
        *reinterpret_cast<int32_t*>(rbp7 - 4) = rax6[*reinterpret_cast<int32_t*>(rbp8 - 8)];
        rax9 = g73a;
        *reinterpret_cast<int64_t*>(rbp10 - 16) = rax9 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp11 - 8)) << 13);
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 16);
        *reinterpret_cast<int32_t*>(&rsi14) = *reinterpret_cast<int32_t*>(rbp15 - 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_751(rdi12, rsi14);
    }
    fun_764(rdi, rsi);
    goto v16;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t* g7b0 = reinterpret_cast<int32_t*>(0x48fc55634888048b);

int32_t* g7be = reinterpret_cast<int32_t*>(0x124c0950f91043b);

void rtclock();

void fun_811(int64_t rdi, int64_t rsi);

void fun_794(struct s2* rdi, struct s3* rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int32_t* rax5;
    int32_t* rcx6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int32_t* rsi13;
    int64_t v14;

    *reinterpret_cast<int32_t*>(rbp3 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp4 - 4) < 5) {
        rax5 = g7b0;
        rcx6 = g7be;
        *reinterpret_cast<uint32_t*>(rbp7 - 8) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax5[*reinterpret_cast<int32_t*>(rbp8 - 4)] != rcx6[*reinterpret_cast<int32_t*>(rbp9 - 4)])) & 1) + *reinterpret_cast<int32_t*>(rbp10 - 8);
        *reinterpret_cast<int32_t*>(rbp11 - 4) = *reinterpret_cast<int32_t*>(rbp12 - 4) + 1;
    }
    rtclock();
    rdi->f0 = rsi->f0;
    rsi13 = &rsi->f4;
    rdi->f4 = *rsi13;
    __asm__("subsd xmm0, [rax]");
    fun_811(0x80a, rsi13 + 1);
    goto v14;
}

void fun_811(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_853(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

void fun_625(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_5f8(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rsi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rsi12;
    int64_t rbp13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t v17;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp4 - 8) = *reinterpret_cast<int64_t*>(rbp5 - 8) + 64;
        *reinterpret_cast<int32_t*>(rbp6 - 12) = *reinterpret_cast<int32_t*>(rbp7 - 12) - 64;
        if (*reinterpret_cast<int32_t*>(rbp8 - 12) < 64) 
            break;
        rsi9 = *reinterpret_cast<int64_t*>(rbp10 - 8);
        rdi11 = g5e9;
        fun_5f3(rdi11, rsi9, 64);
        fun_5f8(rdi11, rsi9, 64);
    }
    rsi12 = *reinterpret_cast<int64_t*>(rbp13 - 8);
    *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(rbp15 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdi16 = g620;
    fun_625(rdi16, rsi12, rdx14);
    goto v17;
}

void fun_6a0() {
    int64_t rdi1;
    struct s0* rax2;
    int64_t rbp3;
    struct s1* rax4;
    int64_t rbp5;
    int64_t v6;

    rdi1 = g6a7;
    fun_6b5(rdi1, gettimeofday, 56);
    rax2 = g6dd;
    rax2->f38 = *reinterpret_cast<int32_t*>(rbp3 - 12);
    rax4 = g6ea;
    rax4->f3c = *reinterpret_cast<int32_t*>(rbp5 - 8);
    fun_6f2(rdi1, gettimeofday, 56);
    goto v6;
}

int32_t fun_835();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_835();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0x84c);
        fun_853(0x84c, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

void fun_6b5(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s0* rax4;
    int64_t rbp5;
    struct s1* rax6;
    int64_t rbp7;
    int64_t v8;

    rax4 = g6dd;
    rax4->f38 = *reinterpret_cast<int32_t*>(rbp5 - 12);
    rax6 = g6ea;
    rax6->f3c = *reinterpret_cast<int32_t*>(rbp7 - 8);
    fun_6f2(rdi, rsi, rdx);
    goto v8;
}

void fun_764(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

int32_t g84c = 0xe800b0;

int32_t fun_835() {
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
        fun_853(0x84c, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    g84c = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

void fun_6d3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    struct s0* rax5;
    int64_t rbp6;
    struct s1* rax7;
    int64_t rbp8;
    int64_t v9;

    rax5 = g6dd;
    rax5->f38 = *reinterpret_cast<int32_t*>(rbp6 - 12);
    rax7 = g6ea;
    rax7->f3c = *reinterpret_cast<int32_t*>(rbp8 - 8);
    fun_6f2(rdi, rsi, rdx);
    goto v9;
}

void fun_6f2(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_70d() {
    int64_t rbp1;
    int64_t rbp2;
    int32_t* rax3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t v15;

    *reinterpret_cast<int32_t*>(rbp1 - 8) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp2 - 8) < 2) {
        rax3 = g729;
        *reinterpret_cast<int32_t*>(rbp4 - 4) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8)];
        rax6 = g73a;
        *reinterpret_cast<int64_t*>(rbp7 - 16) = rax6 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp8 - 8)) << 13);
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
        *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_751(rdi9, rsi11);
        *reinterpret_cast<int32_t*>(rbp13 - 8) = *reinterpret_cast<int32_t*>(rbp14 - 8) + 1;
    }
    fun_764(rdi9, rsi11);
    goto v15;
}

void gettimeofday(int64_t rdi) {
}

void fun_108() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    int64_t rbp6;
    uint32_t eax7;
    int64_t rbp8;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *reinterpret_cast<uint32_t*>(rbp6 - 44) = eax7 << 8 | *reinterpret_cast<uint32_t*>(rbp8 - 44);
}

void fun_128() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    int64_t rbp6;
    uint32_t eax7;
    int64_t rbp8;
    unsigned char* rax9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *reinterpret_cast<uint32_t*>(rbp6 - 44) = eax7 << 16 | *reinterpret_cast<uint32_t*>(rbp8 - 44);
    rax9 = *reinterpret_cast<unsigned char**>(rbp10 - 40);
    *reinterpret_cast<int64_t*>(rbp11 - 40) = reinterpret_cast<int64_t>(rax9 + 1);
    *reinterpret_cast<uint32_t*>(rbp12 - 44) = (static_cast<uint32_t>(*rax9) & 0xff) << 24 | *reinterpret_cast<uint32_t*>(rbp13 - 44);
    **reinterpret_cast<int32_t**>(rbp14 - 32) = *reinterpret_cast<int32_t*>(rbp15 - 44);
    *reinterpret_cast<int64_t*>(rbp16 - 32) = *reinterpret_cast<int64_t*>(rbp17 - 32) + 4;
}

void fun_16f() {
    int64_t v1;

    goto v1;
}

int32_t* g1a7 = reinterpret_cast<int32_t*>(0x89fc456348880c8b);

uint32_t* g230 = reinterpret_cast<uint32_t*>(0x58b48f44589008b);

struct s4 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s4* g23c = reinterpret_cast<struct s4*>(0x8b48f0458904408b);

struct s5 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s5* g249 = reinterpret_cast<struct s5*>(0x8b48ec458908408b);

struct s6 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s6* g256 = reinterpret_cast<struct s6*>(0x8b48e845890c408b);

struct s7 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s7* g263 = reinterpret_cast<struct s7*>(0x45c7e4458910408b);

int32_t* g47e = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g487 = reinterpret_cast<uint32_t*>(0x58b48f04d8b0889);

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8* g493 = reinterpret_cast<struct s8*>(0x58b48044803);

struct s9 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s9* g49d = reinterpret_cast<struct s9*>(0x8b48ec4d8b044889);

struct s10 {
    signed char[8] pad8;
    int32_t f8;
};

struct s10* g4aa = reinterpret_cast<struct s10*>(0x58b48084803);

struct s11 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s11* g4b4 = reinterpret_cast<struct s11*>(0x8b48e84d8b084889);

struct s12 {
    signed char[12] pad12;
    int32_t fc;
};

struct s12* g4c1 = reinterpret_cast<struct s12*>(0x58b480c4803);

struct s13 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s13* g4cb = reinterpret_cast<struct s13*>(0x8b48e44d8b0c4889);

struct s14 {
    signed char[16] pad16;
    int32_t f10;
};

struct s14* g4d8 = reinterpret_cast<struct s14*>(0x58b48104803);

struct s15 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s15* g4e2 = reinterpret_cast<struct s15*>(0xe0c48148104889);

void sha_transform() {
    void* rbp1;
    int32_t v2;
    int32_t* rax3;
    int32_t v4;
    uint32_t* rax5;
    uint32_t v6;
    struct s4* rax7;
    uint32_t v8;
    struct s5* rax9;
    uint32_t v10;
    struct s6* rax11;
    uint32_t v12;
    struct s7* rax13;
    uint32_t v14;
    int32_t v15;
    int64_t rax16;
    int64_t rax17;
    int32_t v18;
    int64_t rax19;
    int64_t rax20;
    int32_t v21;
    int64_t rax22;
    int64_t rax23;
    int32_t v24;
    int64_t rax25;
    int64_t rax26;
    int32_t* rax27;
    uint32_t* rax28;
    struct s8* rax29;
    struct s9* rax30;
    struct s10* rax31;
    struct s11* rax32;
    struct s12* rax33;
    struct s13* rax34;
    struct s14* rax35;
    struct s15* rax36;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v2 = reinterpret_cast<int32_t>(gettimeofday);
    while (v2 < 16) {
        rax3 = g1a7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp1) + v2 * 4 - 0x160) = rax3[v2];
        ++v2;
    }
    v4 = 16;
    while (v4 < 80) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) + v4 * 4 - 0x160) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) + (v4 - 3) * 4 - 0x160) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) + (v4 - 8) * 4 - 0x160) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) + (v4 - 14) * 4 - 0x160) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) + (v4 - 16) * 4 - 0x160);
        ++v4;
    }
    rax5 = g230;
    v6 = *rax5;
    rax7 = g23c;
    v8 = rax7->f4;
    rax9 = g249;
    v10 = rax9->f8;
    rax11 = g256;
    v12 = rax11->fc;
    rax13 = g263;
    v14 = rax13->f10;
    v15 = reinterpret_cast<int32_t>(gettimeofday);
    while (v15 < 20) {
        *reinterpret_cast<uint32_t*>(&rax16) = (v6 << 5 | v6 >> 27) + (v8 & v10 | (v8 ^ 0xffffffff) & v12) + v14 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp1) + v15 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax17 = rax16 + 0x5a827999;
        v14 = v12;
        v12 = v10;
        v10 = v8 << 30 | v8 >> 2;
        v8 = v6;
        v6 = *reinterpret_cast<uint32_t*>(&rax17);
        ++v15;
    }
    v18 = 20;
    while (v18 < 40) {
        *reinterpret_cast<uint32_t*>(&rax19) = (v6 << 5 | v6 >> 27) + (v8 ^ v10 ^ v12) + v14 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp1) + v18 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax20 = rax19 + 0x6ed9eba1;
        v14 = v12;
        v12 = v10;
        v10 = v8 << 30 | v8 >> 2;
        v8 = v6;
        v6 = *reinterpret_cast<uint32_t*>(&rax20);
        ++v18;
    }
    v21 = 40;
    while (v21 < 60) {
        *reinterpret_cast<uint32_t*>(&rax22) = (v6 << 5 | v6 >> 27) + (v8 & v10 | v8 & v12 | v10 & v12) + v14 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp1) + v21 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax23 = rax22 + 0x8f1bbcdc;
        v14 = v12;
        v12 = v10;
        v10 = v8 << 30 | v8 >> 2;
        v8 = v6;
        v6 = *reinterpret_cast<uint32_t*>(&rax23);
        ++v21;
    }
    v24 = 60;
    while (v24 < 80) {
        *reinterpret_cast<uint32_t*>(&rax25) = (v6 << 5 | v6 >> 27) + (v8 ^ v10 ^ v12) + v14 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp1) + v24 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax26 = rax25 + 0xca62c1d6;
        v14 = v12;
        v12 = v10;
        v10 = v8 << 30 | v8 >> 2;
        v8 = v6;
        v6 = *reinterpret_cast<uint32_t*>(&rax26);
        ++v24;
    }
    rax27 = g47e;
    rax28 = g487;
    *rax28 = v6 + *rax27;
    rax29 = g493;
    rax30 = g49d;
    rax30->f4 = v8 + rax29->f4;
    rax31 = g4aa;
    rax32 = g4b4;
    rax32->f8 = v10 + rax31->f8;
    rax33 = g4c1;
    rax34 = g4cb;
    rax34->fc = v12 + rax33->fc;
    rax35 = g4d8;
    rax36 = g4e2;
    rax36->f10 = v14 + rax35->f10;
    return;
}

int32_t* g4fb = reinterpret_cast<int32_t*>(0x8b486745230100c7);

struct s16 {
    signed char[4] pad4;
    int32_t f4;
};

struct s16* g508 = reinterpret_cast<struct s16*>(0x48efcdab890440c7);

struct s17 {
    signed char[8] pad8;
    int32_t f8;
};

struct s17* g516 = reinterpret_cast<struct s17*>(0x4898badcfe0840c7);

struct s18 {
    signed char[12] pad12;
    int32_t fc;
};

struct s18* g524 = reinterpret_cast<struct s18*>(0x48103254760c40c7);

struct s19 {
    signed char[16] pad16;
    int32_t f10;
};

struct s19* g532 = reinterpret_cast<struct s19*>(0x48c3d2e1f01040c7);

int32_t* g540 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g54d = reinterpret_cast<int32_t*>(0xc35d0000000000c7);

void sha_init() {
    int32_t* rax1;
    struct s16* rax2;
    struct s17* rax3;
    struct s18* rax4;
    struct s19* rax5;
    int32_t* rax6;
    int32_t* rax7;

    rax1 = g4fb;
    *rax1 = 0x67452301;
    rax2 = g508;
    rax2->f4 = 0xefcdab89;
    rax3 = g516;
    rax3->f8 = 0x98badcfe;
    rax4 = g524;
    rax4->fc = 0x10325476;
    rax5 = g532;
    rax5->f10 = 0xc3d2e1f0;
    rax6 = g540;
    *rax6 = reinterpret_cast<int32_t>(gettimeofday);
    rax7 = g54d;
    *rax7 = reinterpret_cast<int32_t>(gettimeofday);
    return;
}

int32_t* g576 = reinterpret_cast<int32_t*>(0x3e1c1f44d8b008b);

uint32_t* g587 = reinterpret_cast<uint32_t*>(0x15830f013b);

int32_t* g596 = reinterpret_cast<int32_t*>(0x58b4801c183088b);

int32_t* g5a2 = reinterpret_cast<int32_t*>(0x3e1c1f44d8b0889);

int32_t* g5b1 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g5ba = reinterpret_cast<uint32_t*>(0x1de9c1f44d8b0889);

int32_t* g5c9 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g5d2 = reinterpret_cast<uint32_t*>(0x8c0f40f47d830889);

void sha_update(int64_t rdi, uint32_t esi) {
    int32_t* rax3;
    uint32_t* rcx4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* rax7;
    uint32_t* rax8;
    int32_t* rax9;
    uint32_t* rax10;

    rax3 = g576;
    rcx4 = g587;
    if (*rax3 + (esi << 3) < *rcx4) {
        rax5 = g596;
        rax6 = g5a2;
        *rax6 = *rax5 + 1;
    }
    rax7 = g5b1;
    rax8 = g5ba;
    *rax8 = (esi << 3) + *rax7;
    rax9 = g5c9;
    rax10 = g5d2;
    *rax10 = (esi >> 29) + *rax9;
}

uint32_t* g63f = reinterpret_cast<uint32_t*>(0x58b48f84589008b);

int32_t* g671 = reinterpret_cast<int32_t*>(0x83000000808804c7);

int64_t g6cc = 0x8b00000000e8f631;

int64_t g694 = 0xe800000000e8f631;

void sha_final() {
    uint32_t* rax1;
    uint32_t v2;
    int32_t* rax3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t rdi6;
    int64_t rdi7;

    rax1 = g63f;
    v2 = *rax1;
    rax3 = g671;
    rax3[v2 >> 3 & 63] = 0x80;
    if (reinterpret_cast<int32_t>((v2 >> 3 & 63) + 1) <= reinterpret_cast<int32_t>(56)) {
        *reinterpret_cast<uint32_t*>(&rdx4) = 56 - ((v2 >> 3 & 63) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint32_t*>(&rcx5) = (v2 >> 3 & 63) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi6 = g6cc;
        fun_6d3(rdi6, gettimeofday, rdx4, rcx5);
    } else {
        rdi7 = g694;
        fun_69b(rdi7);
    }
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

void submain(struct s20* rdi, struct s21* rsi) {
    rtclock();
    rdi->f0 = rsi->f0;
    fun_794(&rdi->f4, &rsi->f4);
}

void sha_stream() {
    fun_70d();
}

