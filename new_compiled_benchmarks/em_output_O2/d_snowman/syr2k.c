
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_90a(int32_t* rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8);

void fun_912(int32_t* rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8);

void fun_902(void* rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8) {
    int32_t* r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_90a(r14_6, rsi, rdx, rcx, r8);
    fun_912(r15_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_9ae();

void fputc(int32_t edi, int32_t esi, int64_t rdx);

void fun_9de(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8);

void fun_9f7(int64_t rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8);

void fun_98b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int64_t r12_4;
    int64_t rbp5;
    int64_t r13_6;
    int32_t* rbx7;
    int32_t* rbx8;
    int32_t* rcx9;
    int32_t* r8_10;
    int32_t* rbx11;
    int32_t* r8_12;
    void* v13;
    int32_t* r8_14;
    int32_t* r14_15;
    int32_t* r8_16;
    int32_t* r15_17;
    int32_t* r8_18;
    int64_t v19;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x9a7);
        fun_9ae();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x4b0) 
                break;
            r13_6 = rbp5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = rbx7;
        fun_98b();
    }
    fun_9de(rbx8, 0x9cd, 0x9d4, rcx9, r8_10);
    fun_9f7(0x9e5, 22, 1, rbx11, r8_12);
    fun_902(v13, 22, 1, rbx11, r8_14);
    fun_90a(r14_15, 22, 1, rbx11, r8_16);
    fun_912(r15_17, 22, 1, rbx11, r8_18);
    goto v19;
}

void fun_9ae() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    int32_t* rbx7;
    int32_t* rbx8;
    int32_t* rcx9;
    int32_t* r8_10;
    int32_t* rbx11;
    int32_t* r8_12;
    void* v13;
    int32_t* r8_14;
    int32_t* r14_15;
    int32_t* r8_16;
    int32_t* r15_17;
    int32_t* r8_18;
    int64_t v19;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x4b0) 
                break;
            r13_3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = rbx6;
            fun_98b();
        }
        *rdi4 = *rsi5;
        rdi4 = rbx7;
        rsi5 = reinterpret_cast<int32_t*>(0x9a7);
        fun_9ae();
    }
    fun_9de(rbx8, 0x9cd, 0x9d4, rcx9, r8_10);
    fun_9f7(0x9e5, 22, 1, rbx11, r8_12);
    fun_902(v13, 22, 1, rbx11, r8_14);
    fun_90a(r14_15, 22, 1, rbx11, r8_16);
    fun_912(r15_17, 22, 1, rbx11, r8_18);
    goto v19;
}

void fun_960() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    int32_t* rbx7;
    int32_t* rbx8;
    int32_t* rcx9;
    int32_t* r8_10;
    int32_t* rbx11;
    int32_t* r8_12;
    void* v13;
    int32_t* r8_14;
    int32_t* r14_15;
    int32_t* r8_16;
    int32_t* r15_17;
    int32_t* r8_18;
    int64_t v19;

    do {
        r13_1 = rbp2 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = rbx6;
                fun_98b();
            }
            *rdi4 = *rsi5;
            rdi4 = rbx7;
            rsi5 = reinterpret_cast<int32_t*>(0x9a7);
            fun_9ae();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x4b0);
    fun_9de(rbx8, 0x9cd, 0x9d4, rcx9, r8_10);
    fun_9f7(0x9e5, 22, 1, rbx11, r8_12);
    fun_902(v13, 22, 1, rbx11, r8_14);
    fun_90a(r14_15, 22, 1, rbx11, r8_16);
    fun_912(r15_17, 22, 1, rbx11, r8_18);
    goto v19;
}

void fun_9de(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8) {
    int32_t* rbx6;
    void* v7;
    int32_t* r14_8;
    int32_t* r15_9;
    int64_t v10;

    fun_9f7(0x9e5, 22, 1, rbx6, r8);
    fun_902(v7, 22, 1, rbx6, r8);
    fun_90a(r14_8, 22, 1, rbx6, r8);
    fun_912(r15_9, 22, 1, rbx6, r8);
    goto v10;
}

void fun_946(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8) {
    int32_t* rsi6;
    int64_t rbp7;
    int32_t* rdi8;
    int32_t* rbx9;
    int64_t r13_10;
    int64_t r12_11;
    int32_t* rbx12;
    int32_t* rbx13;
    int32_t* rbx14;
    int32_t* rbx15;
    void* v16;
    int32_t* r14_17;
    int32_t* r15_18;
    int64_t v19;

    rsi6 = reinterpret_cast<int32_t*>(0x94d);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8 = rbx9;
    fun_960();
    do {
        r13_10 = rbp7 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_11 + r13_10) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi8) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = rbx12;
                fun_98b();
            }
            *rdi8 = *rsi6;
            rdi8 = rbx13;
            rsi6 = reinterpret_cast<int32_t*>(0x9a7);
            fun_9ae();
            ++r12_11;
        } while (r12_11 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x4b0);
    fun_9de(rbx14, 0x9cd, 0x9d4, rcx, r8);
    fun_9f7(0x9e5, 22, 1, rbx15, r8);
    fun_902(v16, 22, 1, rbx15, r8);
    fun_90a(r14_17, 22, 1, rbx15, r8);
    fun_912(r15_18, 22, 1, rbx15, r8);
    goto v19;
}

void fun_90a(int32_t* rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8) {
    int32_t* r15_6;
    int64_t v7;

    fun_912(r15_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_9f7(int64_t rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8) {
    void* v6;
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_902(v6, rsi, rdx, rcx, r8);
    fun_90a(r14_7, rsi, rdx, rcx, r8);
    fun_912(r15_8, rsi, rdx, rcx, r8);
    goto v9;
}

int32_t* fun_328(int64_t rdi, int64_t rsi);

int32_t* fun_33a(int64_t rdi, int64_t rsi);

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x41574155;

int32_t g4 = 0x41554156;

struct s4 {
    signed char[8] pad8;
    int32_t f8;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

int32_t** g92a = reinterpret_cast<int32_t**>(0x3d8d48188b48);

void fun_316(int64_t rdi, int64_t rsi) {
    void* rbx3;
    void* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rcx9;
    int64_t rax10;
    void* rdx11;
    struct s1* rsi12;
    struct s2* rdi13;
    int32_t* rdi14;
    struct s3* rsi15;
    int64_t rdx16;
    int32_t* rcx17;
    struct s0* rsi18;
    void* v19;
    void* rdx20;
    int32_t* rdi21;
    struct s0* v22;
    struct s4* r13_23;
    int32_t* r8_24;
    int32_t* r9_25;
    int32_t* v26;
    struct s5* v27;
    int32_t* rbp28;
    int64_t r10_29;
    struct s4* v30;
    int32_t* r8_31;
    int32_t* r9_32;
    void* rax33;
    struct s5* rsi34;
    int32_t* r8_35;
    unsigned char r9b36;
    unsigned char r13b37;
    unsigned char bl38;
    struct s6* rsi39;
    int32_t* rdi40;
    struct s7* rsi41;
    int32_t* rdi42;
    int32_t* r9_43;
    int32_t* rsi44;
    struct s8* rdi45;
    struct s9* rdi46;
    int32_t* rdi47;
    struct s10* rsi48;
    int32_t v49;
    signed char** v50;
    int32_t** rax51;
    int32_t* rbx52;
    int32_t* rcx53;
    int32_t* rsi54;
    int64_t rbp55;
    int32_t* rdi56;
    int64_t r13_57;
    int64_t r12_58;
    int64_t v59;

    rbx3 = rax4;
    rax5 = fun_328(0x124f80, 8);
    r14_6 = rax5;
    rax7 = fun_33a(0x124f80, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("movdqa xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    __asm__("movdqa xmm11, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx11 = reinterpret_cast<void*>(rax10 * 0x1f40);
        rsi12 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdx11) + reinterpret_cast<int64_t>(r14_6));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx11) + reinterpret_cast<int64_t>(r15_8) - reinterpret_cast<int64_t>(rsi12)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm12, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm13, [rip+0x0]");
            do {
                __asm__("movdqa xmm6, xmm13");
                __asm__("pmuludq xmm6, xmm12");
                __asm__("pshufd xmm15, xmm6, 0xe8");
                __asm__("movdqa xmm5, xmm15");
                __asm__("psubd xmm5, [rip+0x0]");
                __asm__("movdqa xmm6, xmm5");
                __asm__("pmuludq xmm6, xmm0");
                __asm__("pshufd xmm6, xmm6, 0xed");
                __asm__("pshufd xmm4, xmm5, 0x55");
                __asm__("pmuludq xmm4, xmm0");
                __asm__("pshufd xmm4, xmm4, 0xed");
                __asm__("punpckldq xmm6, xmm4");
                __asm__("psrld xmm6, 0x7");
                __asm__("pshufd xmm4, xmm6, 0xf5");
                __asm__("pmuludq xmm6, xmm1");
                __asm__("paddd xmm15, xmm9");
                __asm__("movdqa xmm14, xmm15");
                __asm__("pmuludq xmm14, xmm10");
                __asm__("pmuludq xmm4, xmm1");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm7, xmm15, 0x55");
                __asm__("pmuludq xmm7, xmm10");
                __asm__("punpckldq xmm6, xmm4");
                __asm__("pshufd xmm4, xmm7, 0xed");
                __asm__("punpckldq xmm14, xmm4");
                __asm__("psrld xmm14, 0x6");
                __asm__("psubd xmm5, xmm6");
                __asm__("pshufd xmm4, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm11");
                __asm__("cvtdq2pd xmm5, xmm5");
                __asm__("pmuludq xmm4, xmm11");
                __asm__("punpckldq xmm14, xmm4");
                __asm__("psubd xmm15, xmm14");
                __asm__("divpd xmm5, xmm8");
                __asm__("cvtdq2pd xmm4, xmm15");
                __asm__("divpd xmm4, xmm2");
                __asm__("movupd [rsi+rdi*8], xmm5");
                __asm__("movupd [rdx+rdi*8], xmm4");
                rdi13 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rdi13) + 2);
                __asm__("paddq xmm13, xmm3");
            } while (!reinterpret_cast<int1_t>(rdi13 == 0x3e8));
        } else {
            *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r9d");
                __asm__("divsd xmm4, [rip+0x0]");
                rdi13->f0 = rsi12->f0;
                rdi14 = &rdi13->f4;
                rsi15 = reinterpret_cast<struct s3*>(&rsi12->f4);
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r8d");
                __asm__("divsd xmm4, [rip+0x0]");
                *rdi14 = rsi15->f0;
                rsi12 = reinterpret_cast<struct s1*>(&rsi15->f4);
                rdi13 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rdi14 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi13 == 0x3e8));
        }
        ++rax10;
    } while (rax10 != 0x4b0);
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm4");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("paddd xmm8, xmm5");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm0");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0x55");
            __asm__("pmuludq xmm10, xmm0");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psrld xmm9, 0x7");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm2");
            __asm__("movupd [rax+rdx*8], xmm8");
            rdx16 = rdx16 + 2;
            __asm__("paddq xmm7, xmm3");
        } while (rdx16 != 0x4b0);
        ++rcx9;
    } while (rcx9 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx17) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi13->f0 = fputc;
    rdi13->f4 = g4;
    rsi18 = reinterpret_cast<struct s0*>(8);
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    v19 = rbx3;
    do {
        rdx20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi18) * 0x2580 + reinterpret_cast<int64_t>(rbx3));
        rdi21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi18) * 0x2588);
        v22 = rsi18;
        r13_23 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi18) * 0x1f40);
        if (reinterpret_cast<uint64_t>(rcx17) >= 4) {
            r8_24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx17) & 0x7ffffffffffffffc);
            *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm4, [rdx+r9*8]");
                __asm__("movupd xmm5, [rdx+r9*8+0x10]");
                __asm__("mulpd xmm4, xmm3");
                __asm__("mulpd xmm5, xmm3");
                __asm__("movupd [rdx+r9*8], xmm4");
                __asm__("movupd [rdx+r9*8+0x10], xmm5");
                ++r9_25;
            } while (r9_25 != r8_24);
            if (rcx17 != r8_24) 
                goto addr_6e0_33;
        } else {
            *reinterpret_cast<int32_t*>(&r8_24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_6e0_33;
        }
        addr_6f8_35:
        v26 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi21) + reinterpret_cast<int64_t>(rbx3) + 8);
        v27 = reinterpret_cast<struct s5*>(&r13_23->f8);
        rbp28 = reinterpret_cast<int32_t*>(0x7ffffffffffffffe & reinterpret_cast<uint64_t>(rcx17));
        *reinterpret_cast<int32_t*>(&r10_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_29) + 4) = reinterpret_cast<int32_t>(fputc);
        v30 = r13_23;
        do {
            r8_31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_6) + reinterpret_cast<int64_t>(r13_23));
            if (reinterpret_cast<uint64_t>(rcx17) < 8) {
                *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_760_38;
            }
            rax33 = reinterpret_cast<void*>(r10_29 * 8 + reinterpret_cast<int64_t>(r13_23));
            rsi34 = v27;
            r8_35 = &(rsi34 + r10_29)->f0;
            rdi21 = r15_8 + r10_29 * 2;
            r9b36 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx20) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_35) + reinterpret_cast<int64_t>(r14_6)));
            r8_31 = v26;
            *reinterpret_cast<unsigned char*>(&rsi34) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_6 + r10_29 * 2) < reinterpret_cast<uint64_t>(r8_31));
            r13b37 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx20) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_8) + reinterpret_cast<int64_t>(r8_35)));
            bl38 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi21) < reinterpret_cast<uint64_t>(r8_31));
            *reinterpret_cast<unsigned char*>(&rdi21) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_8) + reinterpret_cast<int64_t>(rax33)) < reinterpret_cast<uint64_t>(r8_31));
            if (!reinterpret_cast<int1_t>((r9b36 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax33) + reinterpret_cast<int64_t>(r14_6)) < reinterpret_cast<uint64_t>(r8_31)))) == fputc) || (!reinterpret_cast<int1_t>((r9b36 & *reinterpret_cast<unsigned char*>(&rsi34)) == fputc) || !reinterpret_cast<int1_t>((bl38 & r13b37) == fputc))) {
                *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
                r13_23 = v30;
                goto addr_760_38;
            }
            *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
            r13_23 = v30;
            if (!reinterpret_cast<int1_t>((r13b37 & *reinterpret_cast<unsigned char*>(&rdi21)) == fputc)) {
                do {
                    addr_760_38:
                    rsi39 = reinterpret_cast<struct s6*>(r14_6 + reinterpret_cast<uint64_t>(r9_32) * 0x7d0);
                    *rdi21 = rsi39->f0;
                    rdi40 = rdi21 + 1;
                    rsi41 = reinterpret_cast<struct s7*>(&rsi39->f4);
                    __asm__("mulsd xmm4, xmm1");
                    *rdi40 = rsi41->f0;
                    rdi42 = rdi40 + 1;
                    __asm__("mulsd xmm5, xmm1");
                    __asm__("mulsd xmm5, [r12]");
                    __asm__("mulsd xmm4, [r11]");
                    __asm__("addsd xmm4, xmm5");
                    __asm__("addsd xmm4, [rdx+r9*8]");
                    *rdi42 = rsi41->f4;
                    rdi21 = rdi42 + 1;
                    r9_32 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_32) + 1);
                } while (r9_32 != rcx17);
            } else {
                *rdi21 = rsi34->f0;
                __asm__("unpcklpd xmm4, xmm4");
                rdi21[1] = rsi34->f4;
                __asm__("unpcklpd xmm5, xmm5");
                *reinterpret_cast<int32_t*>(&r9_43) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_43) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi44 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_43) * 0x1f40);
                    rdi45 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(r14_6) + reinterpret_cast<uint64_t>(rsi44));
                    r8_31 = r14_6 + (reinterpret_cast<uint64_t>(r9_43) | 1) * 0x7d0;
                    rdi45->f0 = *rsi44;
                    rdi46 = reinterpret_cast<struct s9*>(&rdi45->f4);
                    __asm__("movhpd xmm6, [r8+r10*8]");
                    __asm__("mulpd xmm6, xmm2");
                    __asm__("mulpd xmm6, xmm4");
                    rdi46->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi44 + 1) + reinterpret_cast<int64_t>(r15_8));
                    rdi21 = &rdi46->f4;
                    __asm__("movhpd xmm7, [rax+r10*8]");
                    __asm__("mulpd xmm7, xmm2");
                    __asm__("mulpd xmm7, xmm5");
                    __asm__("addpd xmm7, xmm6");
                    __asm__("movupd xmm6, [rdx+r9*8]");
                    __asm__("addpd xmm6, xmm7");
                    __asm__("movupd [rdx+r9*8], xmm6");
                    r9_43 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_43) + 2);
                } while (r9_43 != rbp28);
                r9_32 = rbp28;
                if (rcx17 != rbp28) 
                    goto addr_760_38; else 
                    goto addr_8d4_66;
            }
            continue;
            addr_8d4_66:
            ++r10_29;
        } while (r10_29 != 0x3e8);
        continue;
        do {
            addr_6e0_33:
            *rdi21 = rsi18->f0;
            rdi47 = rdi21 + 1;
            rsi48 = reinterpret_cast<struct s10*>(&rsi18->f4);
            __asm__("mulsd xmm4, xmm0");
            *rdi47 = rsi48->f0;
            rdi21 = rdi47 + 1;
            rsi18 = reinterpret_cast<struct s0*>(&rsi48->f4);
            r8_24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_24) + 1);
        } while (r8_24 != rcx17);
        goto addr_6f8_35;
        rsi18 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v22) + 1);
        rcx17 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx17) + 1);
        rbx3 = v19;
    } while (rsi18 != 0x4b0);
    if (v49 >= 43 && **v50 == fputc) {
        rax51 = g92a;
        rbx52 = *rax51;
        rcx53 = rbx52;
        fun_946(0x934, 22, 1, rcx53, r8_31);
        rsi54 = reinterpret_cast<int32_t*>(0x94d);
        *reinterpret_cast<int32_t*>(&rbp55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp55) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi56 = rbx52;
        fun_960();
        do {
            r13_57 = rbp55 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_58) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_58 + r13_57) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi56) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi54 = rbx52;
                    fun_98b();
                }
                *rdi56 = *rsi54;
                rdi56 = rbx52;
                rsi54 = reinterpret_cast<int32_t*>(0x9a7);
                fun_9ae();
                ++r12_58;
            } while (r12_58 != 0x4b0);
            ++rbp55;
        } while (rbp55 != 0x4b0);
        fun_9de(rbx52, 0x9cd, 0x9d4, rcx53, r8_31);
        *reinterpret_cast<int32_t*>(&rsi18) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx17 = rbx52;
        fun_9f7(0x9e5, 22, 1, rcx17, r8_31);
        rbx3 = v19;
    }
    fun_902(rbx3, rsi18, rdx20, rcx17, r8_31);
    fun_90a(r14_6, rsi18, rdx20, rcx17, r8_31);
    fun_912(r15_8, rsi18, rdx20, rcx17, r8_31);
    goto v59;
}

void fun_912(int32_t* rdi, struct s0* rsi, void* rdx, int32_t* rcx, int32_t* r8) {
    int64_t v6;

    goto v6;
}

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    signed char[8] pad8;
    int32_t f8;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_328(int64_t rdi, int64_t rsi) {
    int32_t* r14_3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r15_6;
    int64_t rcx7;
    int64_t rax8;
    void* rdx9;
    struct s11* rsi10;
    struct s12* rdi11;
    int32_t* rdi12;
    struct s13* rsi13;
    int64_t rdx14;
    int32_t* rcx15;
    struct s0* rsi16;
    void* v17;
    void* rbx18;
    void* rdx19;
    void* rbx20;
    int32_t* rdi21;
    struct s0* v22;
    struct s14* r13_23;
    int32_t* r8_24;
    int32_t* r9_25;
    int32_t* v26;
    struct s15* v27;
    int32_t* rbp28;
    int64_t r10_29;
    struct s14* v30;
    int32_t* r8_31;
    int32_t* r9_32;
    void* rax33;
    struct s15* rsi34;
    int32_t* r8_35;
    unsigned char r9b36;
    unsigned char r13b37;
    unsigned char bl38;
    struct s16* rsi39;
    int32_t* rdi40;
    struct s17* rsi41;
    int32_t* rdi42;
    int32_t* r9_43;
    int32_t* rsi44;
    struct s18* rdi45;
    struct s19* rdi46;
    int32_t* rdi47;
    struct s10* rsi48;
    int32_t v49;
    signed char** v50;
    int32_t** rax51;
    int32_t* rbx52;
    int32_t* rcx53;
    int32_t* rsi54;
    int64_t rbp55;
    int32_t* rdi56;
    int64_t r13_57;
    int64_t r12_58;
    int64_t v59;

    r14_3 = rax4;
    rax5 = fun_33a(0x124f80, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("movdqa xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    __asm__("movdqa xmm11, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx9 = reinterpret_cast<void*>(rax8 * 0x1f40);
        rsi10 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rdx9) + reinterpret_cast<int64_t>(r14_3));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx9) + reinterpret_cast<int64_t>(r15_6) - reinterpret_cast<int64_t>(rsi10)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm12, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm13, [rip+0x0]");
            do {
                __asm__("movdqa xmm6, xmm13");
                __asm__("pmuludq xmm6, xmm12");
                __asm__("pshufd xmm15, xmm6, 0xe8");
                __asm__("movdqa xmm5, xmm15");
                __asm__("psubd xmm5, [rip+0x0]");
                __asm__("movdqa xmm6, xmm5");
                __asm__("pmuludq xmm6, xmm0");
                __asm__("pshufd xmm6, xmm6, 0xed");
                __asm__("pshufd xmm4, xmm5, 0x55");
                __asm__("pmuludq xmm4, xmm0");
                __asm__("pshufd xmm4, xmm4, 0xed");
                __asm__("punpckldq xmm6, xmm4");
                __asm__("psrld xmm6, 0x7");
                __asm__("pshufd xmm4, xmm6, 0xf5");
                __asm__("pmuludq xmm6, xmm1");
                __asm__("paddd xmm15, xmm9");
                __asm__("movdqa xmm14, xmm15");
                __asm__("pmuludq xmm14, xmm10");
                __asm__("pmuludq xmm4, xmm1");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm7, xmm15, 0x55");
                __asm__("pmuludq xmm7, xmm10");
                __asm__("punpckldq xmm6, xmm4");
                __asm__("pshufd xmm4, xmm7, 0xed");
                __asm__("punpckldq xmm14, xmm4");
                __asm__("psrld xmm14, 0x6");
                __asm__("psubd xmm5, xmm6");
                __asm__("pshufd xmm4, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm11");
                __asm__("cvtdq2pd xmm5, xmm5");
                __asm__("pmuludq xmm4, xmm11");
                __asm__("punpckldq xmm14, xmm4");
                __asm__("psubd xmm15, xmm14");
                __asm__("divpd xmm5, xmm8");
                __asm__("cvtdq2pd xmm4, xmm15");
                __asm__("divpd xmm4, xmm2");
                __asm__("movupd [rsi+rdi*8], xmm5");
                __asm__("movupd [rdx+rdi*8], xmm4");
                rdi11 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rdi11) + 2);
                __asm__("paddq xmm13, xmm3");
            } while (!reinterpret_cast<int1_t>(rdi11 == 0x3e8));
        } else {
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r9d");
                __asm__("divsd xmm4, [rip+0x0]");
                rdi11->f0 = rsi10->f0;
                rdi12 = &rdi11->f4;
                rsi13 = reinterpret_cast<struct s13*>(&rsi10->f4);
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r8d");
                __asm__("divsd xmm4, [rip+0x0]");
                *rdi12 = rsi13->f0;
                rsi10 = reinterpret_cast<struct s11*>(&rsi13->f4);
                rdi11 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rdi12 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi11 == 0x3e8));
        }
        ++rax8;
    } while (rax8 != 0x4b0);
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm4");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("paddd xmm8, xmm5");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm0");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0x55");
            __asm__("pmuludq xmm10, xmm0");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psrld xmm9, 0x7");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm2");
            __asm__("movupd [rax+rdx*8], xmm8");
            rdx14 = rdx14 + 2;
            __asm__("paddq xmm7, xmm3");
        } while (rdx14 != 0x4b0);
        ++rcx7;
    } while (rcx7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx15) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi11->f0 = fputc;
    rdi11->f4 = g4;
    rsi16 = reinterpret_cast<struct s0*>(8);
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    v17 = rbx18;
    do {
        rdx19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi16) * 0x2580 + reinterpret_cast<int64_t>(rbx20));
        rdi21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi16) * 0x2588);
        v22 = rsi16;
        r13_23 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rsi16) * 0x1f40);
        if (reinterpret_cast<uint64_t>(rcx15) >= 4) {
            r8_24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx15) & 0x7ffffffffffffffc);
            *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm4, [rdx+r9*8]");
                __asm__("movupd xmm5, [rdx+r9*8+0x10]");
                __asm__("mulpd xmm4, xmm3");
                __asm__("mulpd xmm5, xmm3");
                __asm__("movupd [rdx+r9*8], xmm4");
                __asm__("movupd [rdx+r9*8+0x10], xmm5");
                ++r9_25;
            } while (r9_25 != r8_24);
            if (rcx15 != r8_24) 
                goto addr_6e0_32;
        } else {
            *reinterpret_cast<int32_t*>(&r8_24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_6e0_32;
        }
        addr_6f8_34:
        v26 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi21) + reinterpret_cast<int64_t>(rbx20) + 8);
        v27 = reinterpret_cast<struct s15*>(&r13_23->f8);
        rbp28 = reinterpret_cast<int32_t*>(0x7ffffffffffffffe & reinterpret_cast<uint64_t>(rcx15));
        *reinterpret_cast<int32_t*>(&r10_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_29) + 4) = reinterpret_cast<int32_t>(fputc);
        v30 = r13_23;
        do {
            r8_31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_3) + reinterpret_cast<int64_t>(r13_23));
            if (reinterpret_cast<uint64_t>(rcx15) < 8) {
                *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_760_37;
            }
            rax33 = reinterpret_cast<void*>(r10_29 * 8 + reinterpret_cast<int64_t>(r13_23));
            rsi34 = v27;
            r8_35 = &(rsi34 + r10_29)->f0;
            rdi21 = r15_6 + r10_29 * 2;
            r9b36 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx19) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_35) + reinterpret_cast<int64_t>(r14_3)));
            r8_31 = v26;
            *reinterpret_cast<unsigned char*>(&rsi34) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_3 + r10_29 * 2) < reinterpret_cast<uint64_t>(r8_31));
            r13b37 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx19) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_6) + reinterpret_cast<int64_t>(r8_35)));
            bl38 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi21) < reinterpret_cast<uint64_t>(r8_31));
            *reinterpret_cast<unsigned char*>(&rdi21) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_6) + reinterpret_cast<int64_t>(rax33)) < reinterpret_cast<uint64_t>(r8_31));
            if (!reinterpret_cast<int1_t>((r9b36 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax33) + reinterpret_cast<int64_t>(r14_3)) < reinterpret_cast<uint64_t>(r8_31)))) == fputc) || (!reinterpret_cast<int1_t>((r9b36 & *reinterpret_cast<unsigned char*>(&rsi34)) == fputc) || !reinterpret_cast<int1_t>((bl38 & r13b37) == fputc))) {
                *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
                r13_23 = v30;
                goto addr_760_37;
            }
            *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
            r13_23 = v30;
            if (!reinterpret_cast<int1_t>((r13b37 & *reinterpret_cast<unsigned char*>(&rdi21)) == fputc)) {
                do {
                    addr_760_37:
                    rsi39 = reinterpret_cast<struct s16*>(r14_3 + reinterpret_cast<uint64_t>(r9_32) * 0x7d0);
                    *rdi21 = rsi39->f0;
                    rdi40 = rdi21 + 1;
                    rsi41 = reinterpret_cast<struct s17*>(&rsi39->f4);
                    __asm__("mulsd xmm4, xmm1");
                    *rdi40 = rsi41->f0;
                    rdi42 = rdi40 + 1;
                    __asm__("mulsd xmm5, xmm1");
                    __asm__("mulsd xmm5, [r12]");
                    __asm__("mulsd xmm4, [r11]");
                    __asm__("addsd xmm4, xmm5");
                    __asm__("addsd xmm4, [rdx+r9*8]");
                    *rdi42 = rsi41->f4;
                    rdi21 = rdi42 + 1;
                    r9_32 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_32) + 1);
                } while (r9_32 != rcx15);
            } else {
                *rdi21 = rsi34->f0;
                __asm__("unpcklpd xmm4, xmm4");
                rdi21[1] = rsi34->f4;
                __asm__("unpcklpd xmm5, xmm5");
                *reinterpret_cast<int32_t*>(&r9_43) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_43) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi44 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_43) * 0x1f40);
                    rdi45 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(r14_3) + reinterpret_cast<uint64_t>(rsi44));
                    r8_31 = r14_3 + (reinterpret_cast<uint64_t>(r9_43) | 1) * 0x7d0;
                    rdi45->f0 = *rsi44;
                    rdi46 = reinterpret_cast<struct s19*>(&rdi45->f4);
                    __asm__("movhpd xmm6, [r8+r10*8]");
                    __asm__("mulpd xmm6, xmm2");
                    __asm__("mulpd xmm6, xmm4");
                    rdi46->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi44 + 1) + reinterpret_cast<int64_t>(r15_6));
                    rdi21 = &rdi46->f4;
                    __asm__("movhpd xmm7, [rax+r10*8]");
                    __asm__("mulpd xmm7, xmm2");
                    __asm__("mulpd xmm7, xmm5");
                    __asm__("addpd xmm7, xmm6");
                    __asm__("movupd xmm6, [rdx+r9*8]");
                    __asm__("addpd xmm6, xmm7");
                    __asm__("movupd [rdx+r9*8], xmm6");
                    r9_43 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_43) + 2);
                } while (r9_43 != rbp28);
                r9_32 = rbp28;
                if (rcx15 != rbp28) 
                    goto addr_760_37; else 
                    goto addr_8d4_65;
            }
            continue;
            addr_8d4_65:
            ++r10_29;
        } while (r10_29 != 0x3e8);
        continue;
        do {
            addr_6e0_32:
            *rdi21 = rsi16->f0;
            rdi47 = rdi21 + 1;
            rsi48 = reinterpret_cast<struct s10*>(&rsi16->f4);
            __asm__("mulsd xmm4, xmm0");
            *rdi47 = rsi48->f0;
            rdi21 = rdi47 + 1;
            rsi16 = reinterpret_cast<struct s0*>(&rsi48->f4);
            r8_24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_24) + 1);
        } while (r8_24 != rcx15);
        goto addr_6f8_34;
        rsi16 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v22) + 1);
        rcx15 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx15) + 1);
        rbx20 = v17;
    } while (rsi16 != 0x4b0);
    if (v49 >= 43 && **v50 == fputc) {
        rax51 = g92a;
        rbx52 = *rax51;
        rcx53 = rbx52;
        fun_946(0x934, 22, 1, rcx53, r8_31);
        rsi54 = reinterpret_cast<int32_t*>(0x94d);
        *reinterpret_cast<int32_t*>(&rbp55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp55) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi56 = rbx52;
        fun_960();
        do {
            r13_57 = rbp55 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_58) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_58 + r13_57) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi56) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi54 = rbx52;
                    fun_98b();
                }
                *rdi56 = *rsi54;
                rdi56 = rbx52;
                rsi54 = reinterpret_cast<int32_t*>(0x9a7);
                fun_9ae();
                ++r12_58;
            } while (r12_58 != 0x4b0);
            ++rbp55;
        } while (rbp55 != 0x4b0);
        fun_9de(rbx52, 0x9cd, 0x9d4, rcx53, r8_31);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx19) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = rbx52;
        fun_9f7(0x9e5, 22, 1, rcx15, r8_31);
        rbx20 = v17;
    }
    fun_902(rbx20, rsi16, rdx19, rcx15, r8_31);
    fun_90a(r14_3, rsi16, rdx19, rcx15, r8_31);
    fun_912(r15_6, rsi16, rdx19, rcx15, r8_31);
    goto v59;
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    signed char[8] pad8;
    int32_t f8;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_33a(int64_t rdi, int64_t rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t rcx5;
    int64_t rax6;
    void* rdx7;
    struct s20* rsi8;
    int32_t* r14_9;
    struct s21* rdi10;
    int32_t* rdi11;
    struct s22* rsi12;
    int64_t rdx13;
    int32_t* rcx14;
    struct s0* rsi15;
    void* v16;
    void* rbx17;
    void* rdx18;
    void* rbx19;
    int32_t* rdi20;
    struct s0* v21;
    struct s23* r13_22;
    int32_t* r8_23;
    int32_t* r9_24;
    int32_t* v25;
    struct s24* v26;
    int32_t* rbp27;
    int64_t r10_28;
    struct s23* v29;
    int32_t* r8_30;
    int32_t* r14_31;
    int32_t* r9_32;
    void* rax33;
    struct s24* rsi34;
    int32_t* r8_35;
    unsigned char r9b36;
    void* r14_37;
    int32_t* r14_38;
    unsigned char r13b39;
    unsigned char bl40;
    void* r14_41;
    struct s25* rsi42;
    int32_t* r14_43;
    int32_t* rdi44;
    struct s26* rsi45;
    int32_t* rdi46;
    int32_t* r9_47;
    int32_t* rsi48;
    struct s27* rdi49;
    int32_t* r14_50;
    int32_t* r14_51;
    struct s28* rdi52;
    int32_t* rdi53;
    struct s10* rsi54;
    int32_t v55;
    signed char** v56;
    int32_t** rax57;
    int32_t* rbx58;
    int32_t* rcx59;
    int32_t* rsi60;
    int64_t rbp61;
    int32_t* rdi62;
    int64_t r13_63;
    int64_t r12_64;
    int32_t* r14_65;
    int64_t v66;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("movdqa xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    __asm__("movdqa xmm11, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx7 = reinterpret_cast<void*>(rax6 * 0x1f40);
        rsi8 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rdx7) + reinterpret_cast<int64_t>(r14_9));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx7) + reinterpret_cast<int64_t>(r15_3) - reinterpret_cast<int64_t>(rsi8)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm12, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm13, [rip+0x0]");
            do {
                __asm__("movdqa xmm6, xmm13");
                __asm__("pmuludq xmm6, xmm12");
                __asm__("pshufd xmm15, xmm6, 0xe8");
                __asm__("movdqa xmm5, xmm15");
                __asm__("psubd xmm5, [rip+0x0]");
                __asm__("movdqa xmm6, xmm5");
                __asm__("pmuludq xmm6, xmm0");
                __asm__("pshufd xmm6, xmm6, 0xed");
                __asm__("pshufd xmm4, xmm5, 0x55");
                __asm__("pmuludq xmm4, xmm0");
                __asm__("pshufd xmm4, xmm4, 0xed");
                __asm__("punpckldq xmm6, xmm4");
                __asm__("psrld xmm6, 0x7");
                __asm__("pshufd xmm4, xmm6, 0xf5");
                __asm__("pmuludq xmm6, xmm1");
                __asm__("paddd xmm15, xmm9");
                __asm__("movdqa xmm14, xmm15");
                __asm__("pmuludq xmm14, xmm10");
                __asm__("pmuludq xmm4, xmm1");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm7, xmm15, 0x55");
                __asm__("pmuludq xmm7, xmm10");
                __asm__("punpckldq xmm6, xmm4");
                __asm__("pshufd xmm4, xmm7, 0xed");
                __asm__("punpckldq xmm14, xmm4");
                __asm__("psrld xmm14, 0x6");
                __asm__("psubd xmm5, xmm6");
                __asm__("pshufd xmm4, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm11");
                __asm__("cvtdq2pd xmm5, xmm5");
                __asm__("pmuludq xmm4, xmm11");
                __asm__("punpckldq xmm14, xmm4");
                __asm__("psubd xmm15, xmm14");
                __asm__("divpd xmm5, xmm8");
                __asm__("cvtdq2pd xmm4, xmm15");
                __asm__("divpd xmm4, xmm2");
                __asm__("movupd [rsi+rdi*8], xmm5");
                __asm__("movupd [rdx+rdi*8], xmm4");
                rdi10 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rdi10) + 2);
                __asm__("paddq xmm13, xmm3");
            } while (!reinterpret_cast<int1_t>(rdi10 == 0x3e8));
        } else {
            *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r9d");
                __asm__("divsd xmm4, [rip+0x0]");
                rdi10->f0 = rsi8->f0;
                rdi11 = &rdi10->f4;
                rsi12 = reinterpret_cast<struct s22*>(&rsi8->f4);
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r8d");
                __asm__("divsd xmm4, [rip+0x0]");
                *rdi11 = rsi12->f0;
                rsi8 = reinterpret_cast<struct s20*>(&rsi12->f4);
                rdi10 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rdi11 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi10 == 0x3e8));
        }
        ++rax6;
    } while (rax6 != 0x4b0);
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm4");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("paddd xmm8, xmm5");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm0");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0x55");
            __asm__("pmuludq xmm10, xmm0");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psrld xmm9, 0x7");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm2");
            __asm__("movupd [rax+rdx*8], xmm8");
            rdx13 = rdx13 + 2;
            __asm__("paddq xmm7, xmm3");
        } while (rdx13 != 0x4b0);
        ++rcx5;
    } while (rcx5 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx14) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi10->f0 = fputc;
    rdi10->f4 = g4;
    rsi15 = reinterpret_cast<struct s0*>(8);
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    v16 = rbx17;
    do {
        rdx18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi15) * 0x2580 + reinterpret_cast<int64_t>(rbx19));
        rdi20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi15) * 0x2588);
        v21 = rsi15;
        r13_22 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rsi15) * 0x1f40);
        if (reinterpret_cast<uint64_t>(rcx14) >= 4) {
            r8_23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx14) & 0x7ffffffffffffffc);
            *reinterpret_cast<int32_t*>(&r9_24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm4, [rdx+r9*8]");
                __asm__("movupd xmm5, [rdx+r9*8+0x10]");
                __asm__("mulpd xmm4, xmm3");
                __asm__("mulpd xmm5, xmm3");
                __asm__("movupd [rdx+r9*8], xmm4");
                __asm__("movupd [rdx+r9*8+0x10], xmm5");
                ++r9_24;
            } while (r9_24 != r8_23);
            if (rcx14 != r8_23) 
                goto addr_6e0_31;
        } else {
            *reinterpret_cast<int32_t*>(&r8_23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_6e0_31;
        }
        addr_6f8_33:
        v25 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi20) + reinterpret_cast<int64_t>(rbx19) + 8);
        v26 = reinterpret_cast<struct s24*>(&r13_22->f8);
        rbp27 = reinterpret_cast<int32_t*>(0x7ffffffffffffffe & reinterpret_cast<uint64_t>(rcx14));
        *reinterpret_cast<int32_t*>(&r10_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_28) + 4) = reinterpret_cast<int32_t>(fputc);
        v29 = r13_22;
        do {
            r8_30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_31) + reinterpret_cast<int64_t>(r13_22));
            if (reinterpret_cast<uint64_t>(rcx14) < 8) {
                *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_760_36;
            }
            rax33 = reinterpret_cast<void*>(r10_28 * 8 + reinterpret_cast<int64_t>(r13_22));
            rsi34 = v26;
            r8_35 = &(rsi34 + r10_28)->f0;
            rdi20 = r15_3 + r10_28 * 2;
            r9b36 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx18) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_35) + reinterpret_cast<int64_t>(r14_37)));
            r8_30 = v25;
            *reinterpret_cast<unsigned char*>(&rsi34) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_38 + r10_28 * 2) < reinterpret_cast<uint64_t>(r8_30));
            r13b39 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx18) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_3) + reinterpret_cast<int64_t>(r8_35)));
            bl40 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi20) < reinterpret_cast<uint64_t>(r8_30));
            *reinterpret_cast<unsigned char*>(&rdi20) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_3) + reinterpret_cast<int64_t>(rax33)) < reinterpret_cast<uint64_t>(r8_30));
            if (!reinterpret_cast<int1_t>((r9b36 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax33) + reinterpret_cast<int64_t>(r14_41)) < reinterpret_cast<uint64_t>(r8_30)))) == fputc) || (!reinterpret_cast<int1_t>((r9b36 & *reinterpret_cast<unsigned char*>(&rsi34)) == fputc) || !reinterpret_cast<int1_t>((bl40 & r13b39) == fputc))) {
                *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
                r13_22 = v29;
                goto addr_760_36;
            }
            *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
            r13_22 = v29;
            if (!reinterpret_cast<int1_t>((r13b39 & *reinterpret_cast<unsigned char*>(&rdi20)) == fputc)) {
                do {
                    addr_760_36:
                    rsi42 = reinterpret_cast<struct s25*>(r14_43 + reinterpret_cast<uint64_t>(r9_32) * 0x7d0);
                    *rdi20 = rsi42->f0;
                    rdi44 = rdi20 + 1;
                    rsi45 = reinterpret_cast<struct s26*>(&rsi42->f4);
                    __asm__("mulsd xmm4, xmm1");
                    *rdi44 = rsi45->f0;
                    rdi46 = rdi44 + 1;
                    __asm__("mulsd xmm5, xmm1");
                    __asm__("mulsd xmm5, [r12]");
                    __asm__("mulsd xmm4, [r11]");
                    __asm__("addsd xmm4, xmm5");
                    __asm__("addsd xmm4, [rdx+r9*8]");
                    *rdi46 = rsi45->f4;
                    rdi20 = rdi46 + 1;
                    r9_32 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_32) + 1);
                } while (r9_32 != rcx14);
            } else {
                *rdi20 = rsi34->f0;
                __asm__("unpcklpd xmm4, xmm4");
                rdi20[1] = rsi34->f4;
                __asm__("unpcklpd xmm5, xmm5");
                *reinterpret_cast<int32_t*>(&r9_47) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_47) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi48 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_47) * 0x1f40);
                    rdi49 = reinterpret_cast<struct s27*>(reinterpret_cast<int64_t>(r14_50) + reinterpret_cast<uint64_t>(rsi48));
                    r8_30 = r14_51 + (reinterpret_cast<uint64_t>(r9_47) | 1) * 0x7d0;
                    rdi49->f0 = *rsi48;
                    rdi52 = reinterpret_cast<struct s28*>(&rdi49->f4);
                    __asm__("movhpd xmm6, [r8+r10*8]");
                    __asm__("mulpd xmm6, xmm2");
                    __asm__("mulpd xmm6, xmm4");
                    rdi52->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi48 + 1) + reinterpret_cast<int64_t>(r15_3));
                    rdi20 = &rdi52->f4;
                    __asm__("movhpd xmm7, [rax+r10*8]");
                    __asm__("mulpd xmm7, xmm2");
                    __asm__("mulpd xmm7, xmm5");
                    __asm__("addpd xmm7, xmm6");
                    __asm__("movupd xmm6, [rdx+r9*8]");
                    __asm__("addpd xmm6, xmm7");
                    __asm__("movupd [rdx+r9*8], xmm6");
                    r9_47 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_47) + 2);
                } while (r9_47 != rbp27);
                r9_32 = rbp27;
                if (rcx14 != rbp27) 
                    goto addr_760_36; else 
                    goto addr_8d4_64;
            }
            continue;
            addr_8d4_64:
            ++r10_28;
        } while (r10_28 != 0x3e8);
        continue;
        do {
            addr_6e0_31:
            *rdi20 = rsi15->f0;
            rdi53 = rdi20 + 1;
            rsi54 = reinterpret_cast<struct s10*>(&rsi15->f4);
            __asm__("mulsd xmm4, xmm0");
            *rdi53 = rsi54->f0;
            rdi20 = rdi53 + 1;
            rsi15 = reinterpret_cast<struct s0*>(&rsi54->f4);
            r8_23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_23) + 1);
        } while (r8_23 != rcx14);
        goto addr_6f8_33;
        rsi15 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v21) + 1);
        rcx14 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx14) + 1);
        rbx19 = v16;
    } while (rsi15 != 0x4b0);
    if (v55 >= 43 && **v56 == fputc) {
        rax57 = g92a;
        rbx58 = *rax57;
        rcx59 = rbx58;
        fun_946(0x934, 22, 1, rcx59, r8_30);
        rsi60 = reinterpret_cast<int32_t*>(0x94d);
        *reinterpret_cast<int32_t*>(&rbp61) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp61) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi62 = rbx58;
        fun_960();
        do {
            r13_63 = rbp61 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_64) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_64) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_64 + r13_63) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi62) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi60 = rbx58;
                    fun_98b();
                }
                *rdi62 = *rsi60;
                rdi62 = rbx58;
                rsi60 = reinterpret_cast<int32_t*>(0x9a7);
                fun_9ae();
                ++r12_64;
            } while (r12_64 != 0x4b0);
            ++rbp61;
        } while (rbp61 != 0x4b0);
        fun_9de(rbx58, 0x9cd, 0x9d4, rcx59, r8_30);
        *reinterpret_cast<int32_t*>(&rsi15) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = rbx58;
        fun_9f7(0x9e5, 22, 1, rcx14, r8_30);
        rbx19 = v16;
    }
    fun_902(rbx19, rsi15, rdx18, rcx14, r8_30);
    fun_90a(r14_65, rsi15, rdx18, rcx14, r8_30);
    fun_912(r15_3, rsi15, rdx18, rcx14, r8_30);
    goto v66;
}

void fputc(int32_t edi, int32_t esi, int64_t rdx) {
}

void fun_1d() {
}

void fun_32() {
    __asm__("fsub dword [rsi+0xf]");
}

void fun_7c() {
}

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

void fun_a8() {
    struct s29* rsi1;
    struct s29* rax2;
    int64_t r10_3;
    int64_t rax4;
    struct s30* rdi5;
    struct s31* rdi6;
    struct s32* rsi7;
    int64_t rax8;
    int64_t r10_9;
    int32_t v10;
    void* r12_11;
    int64_t v12;
    struct s33* v13;
    void* v14;
    int64_t v15;
    uint64_t r11_16;
    uint64_t r10_17;
    int64_t rbp18;
    void* v19;
    int32_t* rdi20;
    int32_t* rcx21;
    uint64_t r10_22;
    uint64_t r13_23;
    void* rdx24;
    int64_t rsi25;
    unsigned char r13b26;
    uint64_t rbx27;
    int64_t rcx28;
    unsigned char r15b29;
    uint64_t rbx30;
    int64_t r8_31;
    void* rcx32;
    int32_t* rcx33;
    int32_t* r8_34;
    int64_t r15_35;
    int64_t v36;
    int64_t v37;
    void* r8_38;
    struct s34* rsi39;
    int32_t* rcx40;
    int32_t* rdi41;
    struct s35* rsi42;
    int32_t* rdi43;
    uint64_t r10_44;
    int32_t* rdi45;
    uint64_t r13_46;
    int32_t* rsi47;
    int32_t* rdi48;
    void* r8_49;
    uint64_t r10_50;

    do {
        __asm__("movupd xmm4, [rbx+rsi*8]");
        __asm__("movupd xmm5, [rbx+rsi*8+0x10]");
        __asm__("mulpd xmm4, xmm2");
        __asm__("mulpd xmm5, xmm2");
        __asm__("movupd [rbx+rsi*8], xmm4");
        __asm__("movupd [rbx+rsi*8+0x10], xmm5");
        rsi1 = reinterpret_cast<struct s29*>(&rsi1->f4);
    } while (rsi1 != rax2);
    if (r10_3 != rax4) {
        do {
            rdi5->f0 = rsi1->f0;
            rdi6 = reinterpret_cast<struct s31*>(&rdi5->f4);
            rsi7 = reinterpret_cast<struct s32*>(&rsi1->f4);
            __asm__("mulsd xmm4, xmm1");
            rdi6->f0 = rsi7->f0;
            rdi5 = reinterpret_cast<struct s30*>(&rdi6->f4);
            rsi1 = reinterpret_cast<struct s29*>(&rsi7->f4);
            ++rax8;
        } while (rax8 != r10_9);
    }
    if (v10 > reinterpret_cast<int32_t>(fputc)) {
        r12_11 = reinterpret_cast<void*>(v12 * 0x1f40);
        v13 = reinterpret_cast<struct s33*>(v12 * 0x2588 + reinterpret_cast<int64_t>(v14) + 8);
        v15 = reinterpret_cast<int64_t>(r12_11) + 8;
        r11_16 = 0x7ffffffffffffffe & r10_17;
        *reinterpret_cast<int32_t*>(&rbp18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp18) + 4) = reinterpret_cast<int32_t>(fputc);
        v19 = r12_11;
        do {
            rdi20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx21) + reinterpret_cast<int64_t>(r12_11) + rbp18 * 8);
            if (r10_22 < 8) {
                *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_2a0_16;
            }
            rdx24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_11) + rbp18 * 8);
            rsi25 = v15 + rbp18 * 8;
            r13b26 = reinterpret_cast<uint1_t>(rbx27 < reinterpret_cast<uint64_t>(rsi25 + rcx28));
            r15b29 = reinterpret_cast<uint1_t>(rbx30 < reinterpret_cast<uint64_t>(r8_31 + rsi25));
            if (!reinterpret_cast<int1_t>((r13b26 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx24) + reinterpret_cast<int64_t>(rcx32)) < reinterpret_cast<uint64_t>(v13)))) == fputc) || (!reinterpret_cast<int1_t>((r13b26 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx33 + rbp18 * 2) < reinterpret_cast<uint64_t>(v13)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r8_34 + rbp18 * 2) < reinterpret_cast<uint64_t>(v13))) & r15b29) == fputc))) {
                *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(fputc);
                r15_35 = v36;
                r12_11 = v19;
                goto addr_2a0_16;
            }
            *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(fputc);
            r15_35 = v37;
            r12_11 = v19;
            if (!reinterpret_cast<int1_t>((r15b29 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_38) + reinterpret_cast<int64_t>(rdx24)) < reinterpret_cast<uint64_t>(v13)))) == fputc)) {
                do {
                    addr_2a0_16:
                    rsi39 = reinterpret_cast<struct s34*>(rcx40 + r13_23 * 0x7d0);
                    *rdi20 = rsi39->f0;
                    rdi41 = rdi20 + 1;
                    rsi42 = reinterpret_cast<struct s35*>(&rsi39->f4);
                    __asm__("mulsd xmm4, xmm0");
                    *rdi41 = rsi42->f0;
                    rdi43 = rdi41 + 1;
                    __asm__("mulsd xmm5, xmm0");
                    __asm__("mulsd xmm5, [rdi]");
                    __asm__("mulsd xmm4, [rax]");
                    __asm__("addsd xmm4, xmm5");
                    __asm__("addsd xmm4, [rbx+r13*8]");
                    *rdi43 = rsi42->f4;
                    rdi20 = rdi43 + 1;
                    ++r13_23;
                } while (r13_23 != r10_44);
            } else {
                *rdi20 = v13->f0;
                rdi45 = rdi20 + 1;
                __asm__("unpcklpd xmm4, xmm4");
                *rdi45 = v13->f4;
                rdi20 = rdi45 + 1;
                __asm__("unpcklpd xmm5, xmm5");
                *reinterpret_cast<int32_t*>(&r13_46) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_46) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi47 = reinterpret_cast<int32_t*>(r13_46 * 0x1f40);
                    *rdi20 = *rsi47;
                    rdi48 = rdi20 + 1;
                    __asm__("movhpd xmm6, [r14+rbp*8]");
                    __asm__("mulpd xmm6, xmm3");
                    __asm__("mulpd xmm6, xmm4");
                    *rdi48 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi47 + 1) + reinterpret_cast<int64_t>(r8_49));
                    rdi20 = rdi48 + 1;
                    __asm__("movhpd xmm7, [rdx+rbp*8]");
                    __asm__("mulpd xmm7, xmm3");
                    __asm__("mulpd xmm7, xmm5");
                    __asm__("addpd xmm7, xmm6");
                    __asm__("movupd xmm6, [rbx+r13*8]");
                    __asm__("addpd xmm6, xmm7");
                    __asm__("movupd [rbx+r13*8], xmm6");
                    r13_46 = r13_46 + 2;
                } while (r13_46 != r11_16);
                r13_23 = r11_16;
                if (r10_50 != r11_16) 
                    goto addr_2a0_16; else 
                    goto addr_28e_44;
            }
            continue;
            addr_28e_44:
            ++rbp18;
        } while (rbp18 != r15_35);
    }
}

void fun_2e5() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_316(0x15f900, 8);
}

