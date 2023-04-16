
struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

void fun_806(void* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_80e(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_7fe(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    void* r14_5;
    int32_t* r15_6;
    int64_t v7;

    fun_806(r14_5, rsi, rdx, rcx);
    fun_80e(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_8ae();

void fputc(int32_t edi);

void fun_8e2(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_8fb(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_88c() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int32_t* rcx6;
    int32_t* rbx7;
    void* r14_8;
    int32_t* r15_9;
    int64_t v10;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x8a7);
        fun_8ae();
        ++r12_3;
        if (r12_3 == 0x44c) {
            ++rbp4;
            if (reinterpret_cast<int1_t>(rbp4 == "`\"")) 
                break;
            r13_5 = rbp4 * reinterpret_cast<int64_t>("`\"");
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_88c();
    }
    fun_8e2(__return_address(), 0x8cd, 0x8d4, rcx6);
    fun_8fb(0x8e9, 22, 1, __return_address());
    fun_7fe(rbx7, 22, 1, __return_address());
    fun_806(r14_8, 22, 1, __return_address());
    fun_80e(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_8ae() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rcx6;
    int32_t* rbx7;
    void* r14_8;
    int32_t* r15_9;
    int64_t v10;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x44c) {
            ++rbp2;
            if (reinterpret_cast<int1_t>(rbp2 == "`\"")) 
                break;
            r13_3 = rbp2 * reinterpret_cast<int64_t>("`\"");
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_88c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x8a7);
        fun_8ae();
    }
    fun_8e2(__return_address(), 0x8cd, 0x8d4, rcx6);
    fun_8fb(0x8e9, 22, 1, __return_address());
    fun_7fe(rbx7, 22, 1, __return_address());
    fun_806(r14_8, 22, 1, __return_address());
    fun_80e(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_860() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rcx7;
    int32_t* rbx8;
    void* r14_9;
    int32_t* r15_10;
    int64_t v11;

    do {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        r13_2 = rbp3 * reinterpret_cast<int64_t>("`\"");
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_88c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x8a7);
            fun_8ae();
            ++r12_4;
        } while (r12_4 != 0x44c);
        ++rbp3;
    } while (!reinterpret_cast<int1_t>(rbp3 == "`\""));
    fun_8e2(v1, 0x8cd, 0x8d4, rcx7);
    fun_8fb(0x8e9, 22, 1, v1);
    fun_7fe(rbx8, 22, 1, v1);
    fun_806(r14_9, 22, 1, v1);
    fun_80e(r15_10, 22, 1, v1);
    goto v11;
}

void fun_8e2(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r12_5;
    int32_t* rbx6;
    void* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_8fb(0x8e9, 22, 1, r12_5);
    fun_7fe(rbx6, 22, 1, r12_5);
    fun_806(r14_7, 22, 1, r12_5);
    fun_80e(r15_8, 22, 1, r12_5);
    goto v9;
}

void fun_842(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int32_t* rbx13;
    void* r14_14;
    int32_t* r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x849);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_860();
    do {
        r13_11 = rbp6 * reinterpret_cast<int64_t>("`\"");
        *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_88c();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x8a7);
            fun_8ae();
            ++r12_12;
        } while (r12_12 != 0x44c);
        ++rbp6;
    } while (!reinterpret_cast<int1_t>(rbp6 == "`\""));
    fun_8e2(v7, 0x8cd, 0x8d4, rcx);
    fun_8fb(0x8e9, 22, 1, v7);
    fun_7fe(rbx13, 22, 1, v7);
    fun_806(r14_14, 22, 1, v7);
    fun_80e(r15_15, 22, 1, v7);
    goto v16;
}

void fun_806(void* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t v6;

    fun_80e(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_8fb(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    void* r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_7fe(rbx5, rsi, rdx, rcx);
    fun_806(r14_6, rsi, rdx, rcx);
    fun_80e(r15_7, rsi, rdx, rcx);
    goto v8;
}

void* fun_328(int64_t rdi, int64_t rsi);

int32_t* fun_33a(int32_t* rdi, int64_t rsi);

int32_t g142440;

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

struct s4 {
    int32_t f0;
    int32_t f4;
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

int32_t** g826 = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_316(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    void* rax5;
    void* r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t rdx11;
    int64_t rcx12;
    int64_t rdx13;
    int64_t rax14;
    int64_t rdx15;
    int32_t* rsi16;
    void* rdx17;
    int32_t* rcx18;
    int32_t* rdx19;
    struct s0* rsi20;
    struct s1* rdi21;
    uint64_t r8_22;
    int64_t v23;
    int64_t r8_24;
    void* r9_25;
    int64_t r11_26;
    struct s2* rdi27;
    struct s3* rsi28;
    struct s4* rdi29;
    struct s5* rsi30;
    struct s6* rdi31;
    struct s7* rsi32;
    int64_t r10_33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r12_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t rbp40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t r13_43;
    int64_t r12_44;
    int64_t v45;

    rbx3 = rax4;
    rax5 = fun_328(0x124f80, 8);
    r14_6 = rax5;
    rax7 = fun_33a(0x142440, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0x55");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psrld xmm9, 0x6");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx11 = rdx11 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx11 != 0x44c);
        ++rcx10;
    } while (!reinterpret_cast<int1_t>(rcx10 == "`\""));
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psubq xmm8, xmm2");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("movdqa xmm10, xmm8");
            __asm__("psrlq xmm10, 0x20");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pmuludq xmm10, xmm6");
            __asm__("paddq xmm10, xmm9");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm10, 0x20");
            __asm__("paddq xmm8, xmm10");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx13 = rdx13 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx13 != 0x4b0);
        ++rax9;
    } while (!reinterpret_cast<int1_t>(rax9 == "`\""));
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, rcx");
        __asm__("pshufd xmm5, xmm5, 0x44");
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddq xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrld xmm8, 0x2");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psrld xmm8, 0x5");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            rsi16 = r15_8 + rcx12 * 0x898;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx15 = rdx15 + 2;
        } while (rdx15 != 0x44c);
        ++rcx12;
    } while (rcx12 != 0x4b0);
    __asm__("movapd xmm0, [rip+0x0]");
    g142440 = *rsi16;
    do {
        rdx17 = reinterpret_cast<void*>(rax14 * 0x2260);
        rcx18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rdx17));
        rdx19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx17) + reinterpret_cast<int64_t>(rbx3) + 0x2260);
        rsi20 = reinterpret_cast<struct s0*>(rax14 * 0x2580);
        rdi21 = reinterpret_cast<struct s1*>(&rsi20->f8);
        *reinterpret_cast<int32_t*>(&r8_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(fputc);
        while ((r8_22 | 4) != 0x44c) {
            __asm__("movupd xmm2, [rcx+r9*8]");
            __asm__("movupd xmm3, [rcx+r9*8+0x10]");
            __asm__("mulpd xmm2, xmm0");
            __asm__("mulpd xmm3, xmm0");
            __asm__("movupd [rcx+r9*8], xmm2");
            __asm__("movupd [rcx+r9*8+0x10], xmm3");
            r8_22 = r8_22 + 8;
        }
        v23 = rax14;
        *reinterpret_cast<int32_t*>(&r8_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_25 = reinterpret_cast<void*>(r8_24 * 0x2260);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx18) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdi21 + r8_24) + reinterpret_cast<int64_t>(r14_6)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi20) + r8_24 * 8 + reinterpret_cast<int64_t>(r14_6)) < reinterpret_cast<uint64_t>(rdx19)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_790_25;
            }
            *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx18) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_8) + reinterpret_cast<int64_t>(r9_25) + 0x2260))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_25) + reinterpret_cast<int64_t>(r15_8)) < reinterpret_cast<uint64_t>(rdx19)))) == fputc)) {
                do {
                    addr_790_25:
                    rdi21->f0 = rsi20->f0;
                    rdi27 = reinterpret_cast<struct s2*>(&rdi21->f4);
                    rsi28 = reinterpret_cast<struct s3*>(&rsi20->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [r9+r11*8]");
                    __asm__("addsd xmm2, [rcx+r11*8]");
                    rdi27->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s4*>(&rdi27->f4);
                    rsi30 = reinterpret_cast<struct s5*>(&rsi28->f4);
                    rdi29->f0 = rsi30->f0;
                    rdi31 = reinterpret_cast<struct s6*>(&rdi29->f4);
                    rsi32 = reinterpret_cast<struct s7*>(&rsi30->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [rax+r9]");
                    __asm__("addsd xmm2, [rax+rcx]");
                    rdi31->f0 = rsi32->f0;
                    rdi21 = reinterpret_cast<struct s1*>(&rdi31->f4);
                    rsi20 = reinterpret_cast<struct s0*>(&rsi32->f4);
                    r11_26 = r11_26 + 2;
                } while (r11_26 != 0x44c);
            } else {
                rdi21->f0 = rsi20->f0;
                rdi21 = reinterpret_cast<struct s1*>(&rdi21->f4);
                rsi20 = reinterpret_cast<struct s0*>(&rsi20->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("unpcklpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r10_33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_33) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("movupd xmm5, [rcx+r10*8]");
                    __asm__("movupd xmm6, [rcx+r10*8+0x10]");
                    __asm__("mulpd xmm3, xmm2");
                    __asm__("addpd xmm3, xmm5");
                    __asm__("mulpd xmm4, xmm2");
                    __asm__("addpd xmm4, xmm6");
                    __asm__("movupd [rcx+r10*8], xmm3");
                    __asm__("movupd [rcx+r10*8+0x10], xmm4");
                    r10_33 = r10_33 + 4;
                } while (r10_33 != 0x44c);
                continue;
            }
            ++r8_24;
        } while (r8_24 != 0x4b0);
        rax14 = v23 + 1;
    } while (rax14 != "`\"");
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g826;
        r12_37 = *rax36;
        rcx38 = r12_37;
        fun_842(0x830, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x849);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r12_37;
        rdi42 = r12_37;
        fun_860();
        do {
            r13_43 = rbp40 * reinterpret_cast<int64_t>("`\"");
            *reinterpret_cast<int32_t*>(&r12_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_44 + r13_43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_88c();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x8a7);
                fun_8ae();
                ++r12_44;
            } while (r12_44 != 0x44c);
            ++rbp40;
        } while (!reinterpret_cast<int1_t>(rbp40 == "`\""));
        fun_8e2(v41, 0x8cd, 0x8d4, rcx38);
        *reinterpret_cast<int32_t*>(&rsi20) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx19) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = v41;
        fun_8fb(0x8e9, 22, 1, rcx18);
    }
    fun_7fe(rbx3, rsi20, rdx19, rcx18);
    fun_806(r14_6, rsi20, rdx19, rcx18);
    fun_80e(r15_8, rsi20, rdx19, rcx18);
    goto v45;
}

void fun_80e(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void* fun_328(int64_t rdi, int64_t rsi) {
    void* r14_3;
    void* rax4;
    int32_t* rax5;
    int32_t* r15_6;
    int64_t rax7;
    int64_t rcx8;
    int64_t rdx9;
    int64_t rcx10;
    int64_t rdx11;
    int64_t rax12;
    int64_t rdx13;
    int32_t* rsi14;
    void* rdx15;
    int32_t* rcx16;
    int32_t* rbx17;
    int32_t* rdx18;
    void* rbx19;
    struct s0* rsi20;
    struct s1* rdi21;
    uint64_t r8_22;
    int64_t v23;
    int64_t r8_24;
    void* r9_25;
    int64_t r11_26;
    struct s2* rdi27;
    struct s3* rsi28;
    struct s4* rdi29;
    struct s5* rsi30;
    struct s6* rdi31;
    struct s7* rsi32;
    int64_t r10_33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r12_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t rbp40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t r13_43;
    int64_t r12_44;
    int32_t* rbx45;
    int64_t v46;

    r14_3 = rax4;
    rax5 = fun_33a(0x142440, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0x55");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psrld xmm9, 0x6");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx9 = rdx9 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx9 != 0x44c);
        ++rcx8;
    } while (!reinterpret_cast<int1_t>(rcx8 == "`\""));
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psubq xmm8, xmm2");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("movdqa xmm10, xmm8");
            __asm__("psrlq xmm10, 0x20");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pmuludq xmm10, xmm6");
            __asm__("paddq xmm10, xmm9");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm10, 0x20");
            __asm__("paddq xmm8, xmm10");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx11 = rdx11 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx11 != 0x4b0);
        ++rax7;
    } while (!reinterpret_cast<int1_t>(rax7 == "`\""));
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, rcx");
        __asm__("pshufd xmm5, xmm5, 0x44");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddq xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrld xmm8, 0x2");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psrld xmm8, 0x5");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            rsi14 = r15_6 + rcx10 * 0x898;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx13 = rdx13 + 2;
        } while (rdx13 != 0x44c);
        ++rcx10;
    } while (rcx10 != 0x4b0);
    __asm__("movapd xmm0, [rip+0x0]");
    g142440 = *rsi14;
    do {
        rdx15 = reinterpret_cast<void*>(rax12 * 0x2260);
        rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx17) + reinterpret_cast<int64_t>(rdx15));
        rdx18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx15) + reinterpret_cast<int64_t>(rbx19) + 0x2260);
        rsi20 = reinterpret_cast<struct s0*>(rax12 * 0x2580);
        rdi21 = reinterpret_cast<struct s1*>(&rsi20->f8);
        *reinterpret_cast<int32_t*>(&r8_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(fputc);
        while ((r8_22 | 4) != 0x44c) {
            __asm__("movupd xmm2, [rcx+r9*8]");
            __asm__("movupd xmm3, [rcx+r9*8+0x10]");
            __asm__("mulpd xmm2, xmm0");
            __asm__("mulpd xmm3, xmm0");
            __asm__("movupd [rcx+r9*8], xmm2");
            __asm__("movupd [rcx+r9*8+0x10], xmm3");
            r8_22 = r8_22 + 8;
        }
        v23 = rax12;
        *reinterpret_cast<int32_t*>(&r8_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_25 = reinterpret_cast<void*>(r8_24 * 0x2260);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdi21 + r8_24) + reinterpret_cast<int64_t>(r14_3)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi20) + r8_24 * 8 + reinterpret_cast<int64_t>(r14_3)) < reinterpret_cast<uint64_t>(rdx18)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_790_24;
            }
            *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_6) + reinterpret_cast<int64_t>(r9_25) + 0x2260))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_25) + reinterpret_cast<int64_t>(r15_6)) < reinterpret_cast<uint64_t>(rdx18)))) == fputc)) {
                do {
                    addr_790_24:
                    rdi21->f0 = rsi20->f0;
                    rdi27 = reinterpret_cast<struct s2*>(&rdi21->f4);
                    rsi28 = reinterpret_cast<struct s3*>(&rsi20->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [r9+r11*8]");
                    __asm__("addsd xmm2, [rcx+r11*8]");
                    rdi27->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s4*>(&rdi27->f4);
                    rsi30 = reinterpret_cast<struct s5*>(&rsi28->f4);
                    rdi29->f0 = rsi30->f0;
                    rdi31 = reinterpret_cast<struct s6*>(&rdi29->f4);
                    rsi32 = reinterpret_cast<struct s7*>(&rsi30->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [rax+r9]");
                    __asm__("addsd xmm2, [rax+rcx]");
                    rdi31->f0 = rsi32->f0;
                    rdi21 = reinterpret_cast<struct s1*>(&rdi31->f4);
                    rsi20 = reinterpret_cast<struct s0*>(&rsi32->f4);
                    r11_26 = r11_26 + 2;
                } while (r11_26 != 0x44c);
            } else {
                rdi21->f0 = rsi20->f0;
                rdi21 = reinterpret_cast<struct s1*>(&rdi21->f4);
                rsi20 = reinterpret_cast<struct s0*>(&rsi20->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("unpcklpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r10_33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_33) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("movupd xmm5, [rcx+r10*8]");
                    __asm__("movupd xmm6, [rcx+r10*8+0x10]");
                    __asm__("mulpd xmm3, xmm2");
                    __asm__("addpd xmm3, xmm5");
                    __asm__("mulpd xmm4, xmm2");
                    __asm__("addpd xmm4, xmm6");
                    __asm__("movupd [rcx+r10*8], xmm3");
                    __asm__("movupd [rcx+r10*8+0x10], xmm4");
                    r10_33 = r10_33 + 4;
                } while (r10_33 != 0x44c);
                continue;
            }
            ++r8_24;
        } while (r8_24 != 0x4b0);
        rax12 = v23 + 1;
    } while (rax12 != "`\"");
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g826;
        r12_37 = *rax36;
        rcx38 = r12_37;
        fun_842(0x830, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x849);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r12_37;
        rdi42 = r12_37;
        fun_860();
        do {
            r13_43 = rbp40 * reinterpret_cast<int64_t>("`\"");
            *reinterpret_cast<int32_t*>(&r12_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_44 + r13_43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_88c();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x8a7);
                fun_8ae();
                ++r12_44;
            } while (r12_44 != 0x44c);
            ++rbp40;
        } while (!reinterpret_cast<int1_t>(rbp40 == "`\""));
        fun_8e2(v41, 0x8cd, 0x8d4, rcx38);
        *reinterpret_cast<int32_t*>(&rsi20) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = v41;
        fun_8fb(0x8e9, 22, 1, rcx16);
    }
    fun_7fe(rbx45, rsi20, rdx18, rcx16);
    fun_806(r14_3, rsi20, rdx18, rcx16);
    fun_80e(r15_6, rsi20, rdx18, rcx16);
    goto v46;
}

int32_t* fun_33a(int32_t* rdi, int64_t rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rdx7;
    int64_t rcx8;
    int64_t rdx9;
    int64_t rax10;
    int64_t rdx11;
    int32_t* rsi12;
    void* rdx13;
    int32_t* rcx14;
    int32_t* rbx15;
    int32_t* rdx16;
    void* rbx17;
    struct s0* rsi18;
    struct s1* rdi19;
    uint64_t r8_20;
    int64_t v21;
    int64_t r8_22;
    void* r9_23;
    void* r14_24;
    void* r14_25;
    int64_t r11_26;
    struct s2* rdi27;
    struct s3* rsi28;
    struct s4* rdi29;
    struct s5* rsi30;
    struct s6* rdi31;
    struct s7* rsi32;
    int64_t r10_33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r12_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t rbp40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t r13_43;
    int64_t r12_44;
    int32_t* rbx45;
    void* r14_46;
    int64_t v47;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0x55");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psrld xmm9, 0x6");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx7 = rdx7 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx7 != 0x44c);
        ++rcx6;
    } while (!reinterpret_cast<int1_t>(rcx6 == "`\""));
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psubq xmm8, xmm2");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("movdqa xmm10, xmm8");
            __asm__("psrlq xmm10, 0x20");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pmuludq xmm10, xmm6");
            __asm__("paddq xmm10, xmm9");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm10, 0x20");
            __asm__("paddq xmm8, xmm10");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx9 = rdx9 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx9 != 0x4b0);
        ++rax5;
    } while (!reinterpret_cast<int1_t>(rax5 == "`\""));
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, rcx");
        __asm__("pshufd xmm5, xmm5, 0x44");
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddq xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrld xmm8, 0x2");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psrld xmm8, 0x5");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            rsi12 = r15_3 + rcx8 * 0x898;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx11 = rdx11 + 2;
        } while (rdx11 != 0x44c);
        ++rcx8;
    } while (rcx8 != 0x4b0);
    __asm__("movapd xmm0, [rip+0x0]");
    *rdi = *rsi12;
    do {
        rdx13 = reinterpret_cast<void*>(rax10 * 0x2260);
        rcx14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx15) + reinterpret_cast<int64_t>(rdx13));
        rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx13) + reinterpret_cast<int64_t>(rbx17) + 0x2260);
        rsi18 = reinterpret_cast<struct s0*>(rax10 * 0x2580);
        rdi19 = reinterpret_cast<struct s1*>(&rsi18->f8);
        *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(fputc);
        while ((r8_20 | 4) != 0x44c) {
            __asm__("movupd xmm2, [rcx+r9*8]");
            __asm__("movupd xmm3, [rcx+r9*8+0x10]");
            __asm__("mulpd xmm2, xmm0");
            __asm__("mulpd xmm3, xmm0");
            __asm__("movupd [rcx+r9*8], xmm2");
            __asm__("movupd [rcx+r9*8+0x10], xmm3");
            r8_20 = r8_20 + 8;
        }
        v21 = rax10;
        *reinterpret_cast<int32_t*>(&r8_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_23 = reinterpret_cast<void*>(r8_22 * 0x2260);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx14) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdi19 + r8_22) + reinterpret_cast<int64_t>(r14_24)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi18) + r8_22 * 8 + reinterpret_cast<int64_t>(r14_25)) < reinterpret_cast<uint64_t>(rdx16)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_790_23;
            }
            *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx14) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_3) + reinterpret_cast<int64_t>(r9_23) + 0x2260))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_23) + reinterpret_cast<int64_t>(r15_3)) < reinterpret_cast<uint64_t>(rdx16)))) == fputc)) {
                do {
                    addr_790_23:
                    rdi19->f0 = rsi18->f0;
                    rdi27 = reinterpret_cast<struct s2*>(&rdi19->f4);
                    rsi28 = reinterpret_cast<struct s3*>(&rsi18->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [r9+r11*8]");
                    __asm__("addsd xmm2, [rcx+r11*8]");
                    rdi27->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s4*>(&rdi27->f4);
                    rsi30 = reinterpret_cast<struct s5*>(&rsi28->f4);
                    rdi29->f0 = rsi30->f0;
                    rdi31 = reinterpret_cast<struct s6*>(&rdi29->f4);
                    rsi32 = reinterpret_cast<struct s7*>(&rsi30->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [rax+r9]");
                    __asm__("addsd xmm2, [rax+rcx]");
                    rdi31->f0 = rsi32->f0;
                    rdi19 = reinterpret_cast<struct s1*>(&rdi31->f4);
                    rsi18 = reinterpret_cast<struct s0*>(&rsi32->f4);
                    r11_26 = r11_26 + 2;
                } while (r11_26 != 0x44c);
            } else {
                rdi19->f0 = rsi18->f0;
                rdi19 = reinterpret_cast<struct s1*>(&rdi19->f4);
                rsi18 = reinterpret_cast<struct s0*>(&rsi18->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("unpcklpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r10_33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_33) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("movupd xmm5, [rcx+r10*8]");
                    __asm__("movupd xmm6, [rcx+r10*8+0x10]");
                    __asm__("mulpd xmm3, xmm2");
                    __asm__("addpd xmm3, xmm5");
                    __asm__("mulpd xmm4, xmm2");
                    __asm__("addpd xmm4, xmm6");
                    __asm__("movupd [rcx+r10*8], xmm3");
                    __asm__("movupd [rcx+r10*8+0x10], xmm4");
                    r10_33 = r10_33 + 4;
                } while (r10_33 != 0x44c);
                continue;
            }
            ++r8_22;
        } while (r8_22 != 0x4b0);
        rax10 = v21 + 1;
    } while (rax10 != "`\"");
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g826;
        r12_37 = *rax36;
        rcx38 = r12_37;
        fun_842(0x830, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x849);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r12_37;
        rdi42 = r12_37;
        fun_860();
        do {
            r13_43 = rbp40 * reinterpret_cast<int64_t>("`\"");
            *reinterpret_cast<int32_t*>(&r12_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_44 + r13_43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_88c();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x8a7);
                fun_8ae();
                ++r12_44;
            } while (r12_44 != 0x44c);
            ++rbp40;
        } while (!reinterpret_cast<int1_t>(rbp40 == "`\""));
        fun_8e2(v41, 0x8cd, 0x8d4, rcx38);
        *reinterpret_cast<int32_t*>(&rsi18) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = v41;
        fun_8fb(0x8e9, 22, 1, rcx14);
    }
    fun_7fe(rbx45, rsi18, rdx16, rcx14);
    fun_806(r14_46, rsi18, rdx16, rcx14);
    fun_80e(r15_3, rsi18, rdx16, rcx14);
    goto v47;
}

void fputc(int32_t edi) {
}

void fun_1d() {
    __asm__("retf 0x894d");
}

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

struct s11 {
    int32_t f0;
    int32_t f4;
};

void fun_a8(struct s8* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    int64_t rbx5;
    int64_t rbx6;
    signed char al7;
    int64_t rdx8;
    int64_t tmp64_9;
    int64_t rax10;
    struct s8* rcx11;
    struct s8* rax12;
    struct s8* rax13;
    struct s9* rsi14;
    struct s10* rdi15;
    struct s11* rsi16;
    int32_t v17;
    int64_t r8_18;
    int64_t v19;
    uint64_t v20;
    int64_t v21;
    int64_t v22;
    int64_t v23;
    int64_t r11_24;
    int64_t v25;
    int64_t r9_26;
    int64_t rbx27;
    struct s8* rbx28;
    uint64_t rbp29;
    int64_t r13_30;
    int64_t r10_31;
    uint32_t v32;
    int1_t zf33;
    uint64_t rbp34;
    int64_t v35;
    uint32_t v36;
    struct s8* r15_37;
    struct s10* rdi38;
    struct s11* rsi39;
    int64_t rbx40;
    int64_t rax41;
    struct s8* rax42;
    struct s8* rax43;
    int64_t v44;
    struct s10* rdi45;
    struct s11* rsi46;
    struct s8* rdi47;
    struct s9* rsi48;
    struct s10* rdi49;
    struct s11* rsi50;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *reinterpret_cast<signed char*>(rbx5 + 0x407204fe) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbx6 + 0x407204fe) + al7);
    do {
        __asm__("movupd xmm3, [rbp+rdx*8+0x0]");
        __asm__("movupd xmm4, [rbp+rdx*8+0x10]");
        __asm__("mulpd xmm3, xmm2");
        __asm__("mulpd xmm4, xmm2");
        __asm__("movupd [rbp+rdx*8+0x0], xmm3");
        __asm__("movupd [rbp+rdx*8+0x10], xmm4");
        rdx8 = tmp64_9;
    } while (rdx8 != rax10);
    rcx11 = rax12;
    if (rax13 != rdi) {
        do {
            rdi->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s10*>(&rdi->f4);
            rsi16 = reinterpret_cast<struct s11*>(&rsi14->f4);
            __asm__("mulsd xmm3, xmm1");
            rdi15->f0 = rsi16->f0;
            rdi = reinterpret_cast<struct s8*>(&rdi15->f4);
            rsi14 = reinterpret_cast<struct s9*>(&rsi16->f4);
            rcx11 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rcx11) + 1);
        } while (rcx11 != rdi);
    }
    if (v17 > reinterpret_cast<int32_t>(fputc)) {
        r8_18 = v19 * 0x2580;
        v20 = reinterpret_cast<uint64_t>(v21 + v22);
        v23 = r8_18 + 8;
        *reinterpret_cast<int32_t*>(&r11_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = reinterpret_cast<int32_t>(fputc);
        v25 = r8_18;
        while (1) {
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi14) == fputc)) {
                addr_140_15:
                ++r11_24;
                if (r11_24 == r9_26) 
                    break; else 
                    continue;
            } else {
                rbx27 = r11_24 * 0x2260;
                if (*reinterpret_cast<uint32_t*>(&rsi14) < 6) {
                    *reinterpret_cast<int32_t*>(&rbx28) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx28) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_250_18;
                }
                if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp29 < reinterpret_cast<uint64_t>(v23 + r11_24 * 8 + r13_30))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r8_18 + r11_24 * 8 + r13_30) < v20))) == fputc)) {
                    *reinterpret_cast<int32_t*>(&rbx28) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx28) + 4) = reinterpret_cast<int32_t>(fputc);
                    r10_31 = r10_31;
                    r9_26 = r9_26;
                    r13_30 = r13_30;
                    *reinterpret_cast<uint32_t*>(&rsi14) = v32;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
                    r8_18 = v25;
                    goto addr_250_18;
                }
                *reinterpret_cast<int32_t*>(&rbx28) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx28) + 4) = reinterpret_cast<int32_t>(fputc);
                zf33 = reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp34 < reinterpret_cast<uint64_t>(rbx27 + (v35 + r10_31)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r10_31 + rbx27) < v20))) == fputc);
                r10_31 = r10_31;
                r9_26 = r9_26;
                r13_30 = r13_30;
                *reinterpret_cast<uint32_t*>(&rsi14) = v36;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
                r8_18 = v25;
                if (!zf33) {
                    addr_250_18:
                    r15_37 = rbx28;
                    if ((*reinterpret_cast<unsigned char*>(&rdi) & 1) != fputc) {
                        rdi->f0 = rsi14->f0;
                        rdi38 = reinterpret_cast<struct s10*>(&rdi->f4);
                        rsi39 = reinterpret_cast<struct s11*>(&rsi14->f4);
                        __asm__("mulsd xmm3, xmm0");
                        __asm__("mulsd xmm3, [rcx+rbx*8]");
                        __asm__("addsd xmm3, [rbp+rbx*8+0x0]");
                        rdi38->f0 = rsi39->f0;
                        rdi = reinterpret_cast<struct s8*>(&rdi38->f4);
                        rsi14 = reinterpret_cast<struct s9*>(&rsi39->f4);
                        r15_37 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rbx28) | 1);
                    }
                } else {
                    rdi->f0 = rsi14->f0;
                    rdi = reinterpret_cast<struct s8*>(&rdi->f4);
                    rsi14 = reinterpret_cast<struct s9*>(&rsi14->f4);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("unpcklpd xmm3, xmm3");
                    *reinterpret_cast<int32_t*>(&rbx40) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx40) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        __asm__("movupd xmm4, [rcx+rbx*8]");
                        __asm__("movupd xmm5, [rcx+rbx*8+0x10]");
                        __asm__("movupd xmm6, [rbp+rbx*8+0x0]");
                        __asm__("movupd xmm7, [rbp+rbx*8+0x10]");
                        __asm__("mulpd xmm4, xmm3");
                        __asm__("addpd xmm4, xmm6");
                        __asm__("mulpd xmm5, xmm3");
                        __asm__("addpd xmm5, xmm7");
                        __asm__("movupd [rbp+rbx*8+0x0], xmm4");
                        __asm__("movupd [rbp+rbx*8+0x10], xmm5");
                        rbx40 = rbx40 + 4;
                    } while (rbx40 != rax41);
                    rbx28 = rax42;
                    if (rax43 == rdi) 
                        goto addr_140_15; else 
                        goto addr_238_35;
                }
            }
            if (~reinterpret_cast<uint64_t>(rbx28) != v44) {
                do {
                    rdi->f0 = rsi14->f0;
                    rdi45 = reinterpret_cast<struct s10*>(&rdi->f4);
                    rsi46 = reinterpret_cast<struct s11*>(&rsi14->f4);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r15*8]");
                    __asm__("addsd xmm3, [rbp+r15*8+0x0]");
                    rdi45->f0 = rsi46->f0;
                    rdi47 = reinterpret_cast<struct s8*>(&rdi45->f4);
                    rsi48 = reinterpret_cast<struct s9*>(&rsi46->f4);
                    rdi47->f0 = rsi48->f0;
                    rdi49 = reinterpret_cast<struct s10*>(&rdi47->f4);
                    rsi50 = reinterpret_cast<struct s11*>(&rsi48->f4);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r15*8+0x8]");
                    __asm__("addsd xmm3, [rbp+r15*8+0x8]");
                    rdi49->f0 = rsi50->f0;
                    rdi = reinterpret_cast<struct s8*>(&rdi49->f4);
                    rsi14 = reinterpret_cast<struct s9*>(&rsi50->f4);
                    r15_37 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(r15_37) + 2);
                } while (r15_37 != rdi);
                goto addr_140_15;
            }
            addr_238_35:
            goto addr_250_18;
        }
    }
}

void fun_2d7() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_316(0x10c8e0, 8);
}

