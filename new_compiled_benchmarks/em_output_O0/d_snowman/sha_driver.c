
void sha_transform(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t g279 = 0xe800000040ba;

void gettimeofday(int64_t rdi);

int64_t g2b0 = 0xc4834800000000e8;

void fun_2b5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_283(int64_t rdi, int64_t rsi, int64_t rdx) {
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
        sha_transform(rdi, rsi, rdx);
        *reinterpret_cast<int64_t*>(rbp4 - 8) = *reinterpret_cast<int64_t*>(rbp5 - 8) + 64;
        *reinterpret_cast<int32_t*>(rbp6 - 12) = *reinterpret_cast<int32_t*>(rbp7 - 12) - 64;
        if (*reinterpret_cast<int32_t*>(rbp8 - 12) < 64) 
            break;
        rsi9 = *reinterpret_cast<int64_t*>(rbp10 - 8);
        rdi11 = g279;
        fun_283(rdi11, rsi9, 64);
    }
    rsi12 = *reinterpret_cast<int64_t*>(rbp13 - 8);
    *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(rbp15 - 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rdi16 = g2b0;
    fun_2b5(rdi16, rsi12, rdx14);
    goto v17;
}

int64_t g337 = 0x8900000038bac931;

void fun_345(int64_t rdi, int64_t rsi, int64_t rdx);

struct s0 {
    signed char[56] pad56;
    int32_t f38;
};

struct s0* g36d = reinterpret_cast<struct s0*>(0x8b48f84d8b384889);

struct s1 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s1* g37a = reinterpret_cast<struct s1*>(0x12ee83c4889);

void fun_32b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    struct s0* rax6;
    int64_t rbp7;
    struct s1* rax8;
    int64_t rbp9;
    int64_t v10;

    sha_transform(rdi, rsi, rdx);
    rdi5 = g337;
    fun_345(rdi5, gettimeofday, 56);
    rax6 = g36d;
    rax6->f38 = *reinterpret_cast<int32_t*>(rbp7 - 12);
    rax8 = g37a;
    rax8->f3c = *reinterpret_cast<int32_t*>(rbp9 - 8);
    sha_transform(rdi5, gettimeofday, 56);
    goto v10;
}

int32_t* g3b9 = reinterpret_cast<int32_t*>(0x6348fc458988048b);

int64_t g3ca = 0x48c801480de1c148;

void fun_3f4(int64_t rdi, int64_t rsi);

void fun_3e1(int64_t rdi, int64_t rsi) {
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
        rax6 = g3b9;
        *reinterpret_cast<int32_t*>(rbp7 - 4) = rax6[*reinterpret_cast<int32_t*>(rbp8 - 8)];
        rax9 = g3ca;
        *reinterpret_cast<int64_t*>(rbp10 - 16) = rax9 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp11 - 8)) << 13);
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 16);
        *reinterpret_cast<int32_t*>(&rsi14) = *reinterpret_cast<int32_t*>(rbp15 - 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_3e1(rdi12, rsi14);
    }
    fun_3f4(rdi, rsi);
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

int32_t* g440 = reinterpret_cast<int32_t*>(0x48fc55634888048b);

int32_t* g44e = reinterpret_cast<int32_t*>(0x124c0950f91043b);

void rtclock();

void fun_4a1(int64_t rdi, int64_t rsi);

void fun_424(struct s2* rdi, struct s3* rsi) {
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
        rax5 = g440;
        rcx6 = g44e;
        *reinterpret_cast<uint32_t*>(rbp7 - 8) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax5[*reinterpret_cast<int32_t*>(rbp8 - 4)] != rcx6[*reinterpret_cast<int32_t*>(rbp9 - 4)])) & 1) + *reinterpret_cast<int32_t*>(rbp10 - 8);
        *reinterpret_cast<int32_t*>(rbp11 - 4) = *reinterpret_cast<int32_t*>(rbp12 - 4) + 1;
    }
    rtclock();
    rdi->f0 = rsi->f0;
    rsi13 = &rsi->f4;
    rdi->f4 = *rsi13;
    __asm__("subsd xmm0, [rax]");
    fun_4a1(0x49a, rsi13 + 1);
    goto v14;
}

void fun_4a1(int64_t rdi, int64_t rsi) {
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

void fun_2b5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

int32_t* g4d7 = reinterpret_cast<int32_t*>(0x89fc456348880c8b);

uint32_t* g560 = reinterpret_cast<uint32_t*>(0x58b48f44589008b);

struct s4 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s4* g56c = reinterpret_cast<struct s4*>(0x8b48f0458904408b);

struct s5 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s5* g579 = reinterpret_cast<struct s5*>(0x8b48ec458908408b);

struct s6 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s6* g586 = reinterpret_cast<struct s6*>(0x8b48e845890c408b);

struct s7 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s7* g593 = reinterpret_cast<struct s7*>(0x45c7e4458910408b);

int32_t* g7ae = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g7b7 = reinterpret_cast<uint32_t*>(0x58b48f04d8b0889);

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8* g7c3 = reinterpret_cast<struct s8*>(0x58b48044803);

struct s9 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s9* g7cd = reinterpret_cast<struct s9*>(0x8b48ec4d8b044889);

struct s10 {
    signed char[8] pad8;
    int32_t f8;
};

struct s10* g7da = reinterpret_cast<struct s10*>(0x58b48084803);

struct s11 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s11* g7e4 = reinterpret_cast<struct s11*>(0x8b48e84d8b084889);

struct s12 {
    signed char[12] pad12;
    int32_t fc;
};

struct s12* g7f1 = reinterpret_cast<struct s12*>(0x58b480c4803);

struct s13 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s13* g7fb = reinterpret_cast<struct s13*>(0x8b48e44d8b0c4889);

struct s14 {
    signed char[16] pad16;
    int32_t f10;
};

struct s14* g808 = reinterpret_cast<struct s14*>(0x58b48104803);

struct s15 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s15* g812 = reinterpret_cast<struct s15*>(0xe0c48148104889);

void sha_transform(int64_t rdi, int64_t rsi, int64_t rdx) {
    void* rbp4;
    int32_t v5;
    int32_t* rax6;
    int32_t v7;
    uint32_t* rax8;
    uint32_t v9;
    struct s4* rax10;
    uint32_t v11;
    struct s5* rax12;
    uint32_t v13;
    struct s6* rax14;
    uint32_t v15;
    struct s7* rax16;
    uint32_t v17;
    int32_t v18;
    int64_t rax19;
    int64_t rax20;
    int32_t v21;
    int64_t rax22;
    int64_t rax23;
    int32_t v24;
    int64_t rax25;
    int64_t rax26;
    int32_t v27;
    int64_t rax28;
    int64_t rax29;
    int32_t* rax30;
    uint32_t* rax31;
    struct s8* rax32;
    struct s9* rax33;
    struct s10* rax34;
    struct s11* rax35;
    struct s12* rax36;
    struct s13* rax37;
    struct s14* rax38;
    struct s15* rax39;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = reinterpret_cast<int32_t>(gettimeofday);
    while (v5 < 16) {
        rax6 = g4d7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + v5 * 4 - 0x160) = rax6[v5];
        ++v5;
    }
    v7 = 16;
    while (v7 < 80) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + v7 * 4 - 0x160) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v7 - 3) * 4 - 0x160) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v7 - 8) * 4 - 0x160) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v7 - 14) * 4 - 0x160) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v7 - 16) * 4 - 0x160);
        ++v7;
    }
    rax8 = g560;
    v9 = *rax8;
    rax10 = g56c;
    v11 = rax10->f4;
    rax12 = g579;
    v13 = rax12->f8;
    rax14 = g586;
    v15 = rax14->fc;
    rax16 = g593;
    v17 = rax16->f10;
    v18 = reinterpret_cast<int32_t>(gettimeofday);
    while (v18 < 20) {
        *reinterpret_cast<uint32_t*>(&rax19) = (v9 << 5 | v9 >> 27) + (v11 & v13 | (v11 ^ 0xffffffff) & v15) + v17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + v18 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax20 = rax19 + 0x5a827999;
        v17 = v15;
        v15 = v13;
        v13 = v11 << 30 | v11 >> 2;
        v11 = v9;
        v9 = *reinterpret_cast<uint32_t*>(&rax20);
        ++v18;
    }
    v21 = 20;
    while (v21 < 40) {
        *reinterpret_cast<uint32_t*>(&rax22) = (v9 << 5 | v9 >> 27) + (v11 ^ v13 ^ v15) + v17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + v21 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax23 = rax22 + 0x6ed9eba1;
        v17 = v15;
        v15 = v13;
        v13 = v11 << 30 | v11 >> 2;
        v11 = v9;
        v9 = *reinterpret_cast<uint32_t*>(&rax23);
        ++v21;
    }
    v24 = 40;
    while (v24 < 60) {
        *reinterpret_cast<uint32_t*>(&rax25) = (v9 << 5 | v9 >> 27) + (v11 & v13 | v11 & v15 | v13 & v15) + v17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + v24 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax26 = rax25 + 0x8f1bbcdc;
        v17 = v15;
        v15 = v13;
        v13 = v11 << 30 | v11 >> 2;
        v11 = v9;
        v9 = *reinterpret_cast<uint32_t*>(&rax26);
        ++v24;
    }
    v27 = 60;
    while (v27 < 80) {
        *reinterpret_cast<uint32_t*>(&rax28) = (v9 << 5 | v9 >> 27) + (v11 ^ v13 ^ v15) + v17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + v27 * 4 - 0x160);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rax29 = rax28 + 0xca62c1d6;
        v17 = v15;
        v15 = v13;
        v13 = v11 << 30 | v11 >> 2;
        v11 = v9;
        v9 = *reinterpret_cast<uint32_t*>(&rax29);
        ++v27;
    }
    rax30 = g7ae;
    rax31 = g7b7;
    *rax31 = v9 + *rax30;
    rax32 = g7c3;
    rax33 = g7cd;
    rax33->f4 = v11 + rax32->f4;
    rax34 = g7da;
    rax35 = g7e4;
    rax35->f8 = v13 + rax34->f8;
    rax36 = g7f1;
    rax37 = g7fb;
    rax37->fc = v15 + rax36->fc;
    rax38 = g808;
    rax39 = g812;
    rax39->f10 = v17 + rax38->f10;
    return;
}

void fun_345(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s0* rax4;
    int64_t rbp5;
    struct s1* rax6;
    int64_t rbp7;
    int64_t v8;

    rax4 = g36d;
    rax4->f38 = *reinterpret_cast<int32_t*>(rbp5 - 12);
    rax6 = g37a;
    rax6->f3c = *reinterpret_cast<int32_t*>(rbp7 - 8);
    sha_transform(rdi, rsi, rdx);
    goto v8;
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

void fun_363(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    struct s0* rax5;
    int64_t rbp6;
    struct s1* rax7;
    int64_t rbp8;
    int64_t v9;

    rax5 = g36d;
    rax5->f38 = *reinterpret_cast<int32_t*>(rbp6 - 12);
    rax7 = g37a;
    rax7->f3c = *reinterpret_cast<int32_t*>(rbp8 - 8);
    sha_transform(rdi, rsi, rdx);
    goto v9;
}

void fun_3f4(int64_t rdi, int64_t rsi) {
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

void fun_39d() {
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
        rax3 = g3b9;
        *reinterpret_cast<int32_t*>(rbp4 - 4) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8)];
        rax6 = g3ca;
        *reinterpret_cast<int64_t*>(rbp7 - 16) = rax6 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp8 - 8)) << 13);
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 16);
        *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_3e1(rdi9, rsi11);
        *reinterpret_cast<int32_t*>(rbp13 - 8) = *reinterpret_cast<int32_t*>(rbp14 - 8) + 1;
    }
    fun_3f4(rdi9, rsi11);
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

int32_t* g18b = reinterpret_cast<int32_t*>(0x8b486745230100c7);

struct s16 {
    signed char[4] pad4;
    int32_t f4;
};

struct s16* g198 = reinterpret_cast<struct s16*>(0x48efcdab890440c7);

struct s17 {
    signed char[8] pad8;
    int32_t f8;
};

struct s17* g1a6 = reinterpret_cast<struct s17*>(0x4898badcfe0840c7);

struct s18 {
    signed char[12] pad12;
    int32_t fc;
};

struct s18* g1b4 = reinterpret_cast<struct s18*>(0x48103254760c40c7);

struct s19 {
    signed char[16] pad16;
    int32_t f10;
};

struct s19* g1c2 = reinterpret_cast<struct s19*>(0x48c3d2e1f01040c7);

int32_t* g1d0 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1dd = reinterpret_cast<int32_t*>(0xc35d0000000000c7);

void sha_init() {
    int32_t* rax1;
    struct s16* rax2;
    struct s17* rax3;
    struct s18* rax4;
    struct s19* rax5;
    int32_t* rax6;
    int32_t* rax7;

    rax1 = g18b;
    *rax1 = 0x67452301;
    rax2 = g198;
    rax2->f4 = 0xefcdab89;
    rax3 = g1a6;
    rax3->f8 = 0x98badcfe;
    rax4 = g1b4;
    rax4->fc = 0x10325476;
    rax5 = g1c2;
    rax5->f10 = 0xc3d2e1f0;
    rax6 = g1d0;
    *rax6 = reinterpret_cast<int32_t>(gettimeofday);
    rax7 = g1dd;
    *rax7 = reinterpret_cast<int32_t>(gettimeofday);
    return;
}

int32_t* g206 = reinterpret_cast<int32_t*>(0x3e1c1f44d8b008b);

uint32_t* g217 = reinterpret_cast<uint32_t*>(0x15830f013b);

int32_t* g226 = reinterpret_cast<int32_t*>(0x58b4801c183088b);

int32_t* g232 = reinterpret_cast<int32_t*>(0x3e1c1f44d8b0889);

int32_t* g241 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g24a = reinterpret_cast<uint32_t*>(0x1de9c1f44d8b0889);

int32_t* g259 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g262 = reinterpret_cast<uint32_t*>(0x8c0f40f47d830889);

void sha_update(int64_t rdi, uint32_t esi) {
    int32_t* rax3;
    uint32_t* rcx4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* rax7;
    uint32_t* rax8;
    int32_t* rax9;
    uint32_t* rax10;

    rax3 = g206;
    rcx4 = g217;
    if (*rax3 + (esi << 3) < *rcx4) {
        rax5 = g226;
        rax6 = g232;
        *rax6 = *rax5 + 1;
    }
    rax7 = g241;
    rax8 = g24a;
    *rax8 = (esi << 3) + *rax7;
    rax9 = g259;
    rax10 = g262;
    *rax10 = (esi >> 29) + *rax9;
}

uint32_t* g2cf = reinterpret_cast<uint32_t*>(0x58b48f84589008b);

int32_t* g301 = reinterpret_cast<int32_t*>(0x83000000808804c7);

int64_t g35c = 0x8b00000000e8f631;

int64_t g324 = 0xe800000000e8f631;

void sha_final() {
    uint32_t* rax1;
    uint32_t v2;
    int32_t* rax3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t rdi6;
    int64_t rdx7;
    int64_t rcx8;
    int64_t rdi9;

    rax1 = g2cf;
    v2 = *rax1;
    rax3 = g301;
    rax3[v2 >> 3 & 63] = 0x80;
    if (reinterpret_cast<int32_t>((v2 >> 3 & 63) + 1) <= reinterpret_cast<int32_t>(56)) {
        *reinterpret_cast<uint32_t*>(&rdx4) = 56 - ((v2 >> 3 & 63) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint32_t*>(&rcx5) = (v2 >> 3 & 63) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi6 = g35c;
        fun_363(rdi6, gettimeofday, rdx4, rcx5);
    } else {
        *reinterpret_cast<uint32_t*>(&rdx7) = 64 - ((v2 >> 3 & 63) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint32_t*>(&rcx8) = (v2 >> 3 & 63) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi9 = g324;
        fun_32b(rdi9, gettimeofday, rdx7, rcx8);
    }
}

void sha_stream() {
    fun_39d();
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
    fun_424(&rdi->f4, &rsi->f4);
}

