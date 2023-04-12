
void fun_61a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_622(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_612(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_61a(r14_5, rsi, rdx, rcx);
    fun_622(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_6be();

void fputc(int32_t edi, int64_t rsi);

void fun_6ee(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_707(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_69b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int64_t r12_4;
    int64_t rbp5;
    int64_t r13_6;
    int32_t* rbx7;
    int64_t rbx8;
    int64_t rbx9;
    int64_t v10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x6b7);
        fun_6be();
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
        fun_69b();
    }
    fun_6ee(rbx8, 0x6dd, 0x6e4);
    fun_707(0x6f5, 22, 1, rbx9);
    fun_612(v10, 22, 1, rbx9);
    fun_61a(r14_11, 22, 1, rbx9);
    fun_622(r15_12, 22, 1, rbx9);
    goto v13;
}

void fun_6be() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    int32_t* rbx7;
    int64_t rbx8;
    int64_t rbx9;
    int64_t v10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;

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
            fun_69b();
        }
        *rdi4 = *rsi5;
        rdi4 = rbx7;
        rsi5 = reinterpret_cast<int32_t*>(0x6b7);
        fun_6be();
    }
    fun_6ee(rbx8, 0x6dd, 0x6e4);
    fun_707(0x6f5, 22, 1, rbx9);
    fun_612(v10, 22, 1, rbx9);
    fun_61a(r14_11, 22, 1, rbx9);
    fun_622(r15_12, 22, 1, rbx9);
    goto v13;
}

void fun_670() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    int32_t* rbx7;
    int64_t rbx8;
    int64_t rbx9;
    int64_t v10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;

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
                fun_69b();
            }
            *rdi4 = *rsi5;
            rdi4 = rbx7;
            rsi5 = reinterpret_cast<int32_t*>(0x6b7);
            fun_6be();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x4b0);
    fun_6ee(rbx8, 0x6dd, 0x6e4);
    fun_707(0x6f5, 22, 1, rbx9);
    fun_612(v10, 22, 1, rbx9);
    fun_61a(r14_11, 22, 1, rbx9);
    fun_622(r15_12, 22, 1, rbx9);
    goto v13;
}

void fun_6ee(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t v5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_707(0x6f5, 22, 1, rbx4);
    fun_612(v5, 22, 1, rbx4);
    fun_61a(r14_6, 22, 1, rbx4);
    fun_622(r15_7, 22, 1, rbx4);
    goto v8;
}

void fun_656(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int32_t* r8) {
    int32_t* rsi6;
    int64_t rbp7;
    int32_t* rdi8;
    int32_t* rbx9;
    int64_t r13_10;
    int64_t r12_11;
    int32_t* rbx12;
    int32_t* rbx13;
    int64_t rbx14;
    int64_t rbx15;
    int64_t v16;
    int64_t r14_17;
    int64_t r15_18;
    int64_t v19;

    rsi6 = reinterpret_cast<int32_t*>(0x65d);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8 = rbx9;
    fun_670();
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
                fun_69b();
            }
            *rdi8 = *rsi6;
            rdi8 = rbx13;
            rsi6 = reinterpret_cast<int32_t*>(0x6b7);
            fun_6be();
            ++r12_11;
        } while (r12_11 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x4b0);
    fun_6ee(rbx14, 0x6dd, 0x6e4);
    fun_707(0x6f5, 22, 1, rbx15);
    fun_612(v16, 22, 1, rbx15);
    fun_61a(r14_17, 22, 1, rbx15);
    fun_622(r15_18, 22, 1, rbx15);
    goto v19;
}

void fun_61a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_622(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_707(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_612(v5, rsi, rdx, rcx);
    fun_61a(r14_6, rsi, rdx, rcx);
    fun_622(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_622(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x41574155;

int32_t g4 = 0x41554156;

struct s3 {
    int32_t f0;
    int32_t f4;
};

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

int64_t* g63a = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void fun_7c() {
    int64_t rax1;
    int64_t rdx2;
    struct s0* rsi3;
    int32_t* r14_4;
    int64_t r15_5;
    struct s1* rdi6;
    int32_t* rdi7;
    struct s2* rsi8;
    int64_t rdx9;
    int64_t rcx10;
    uint64_t rcx11;
    struct s3* rsi12;
    void* v13;
    void* rbx14;
    void* rdx15;
    void* rbx16;
    int32_t* rdi17;
    struct s3* v18;
    struct s4* r13_19;
    uint64_t r8_20;
    uint64_t r9_21;
    int32_t* v22;
    struct s5* v23;
    uint64_t rbp24;
    int64_t r10_25;
    struct s4* v26;
    int32_t* r8_27;
    int32_t* r14_28;
    uint64_t r9_29;
    void* rax30;
    struct s5* rsi31;
    int32_t* r8_32;
    int32_t* r15_33;
    unsigned char r9b34;
    void* r14_35;
    int32_t* r14_36;
    unsigned char r13b37;
    void* r15_38;
    unsigned char bl39;
    void* r15_40;
    void* r14_41;
    struct s6* rsi42;
    int32_t* r14_43;
    int32_t* rdi44;
    struct s7* rsi45;
    int32_t* rdi46;
    uint64_t r9_47;
    int32_t* rsi48;
    struct s8* rdi49;
    int32_t* r14_50;
    int32_t* r14_51;
    struct s9* rdi52;
    void* r15_53;
    int32_t* rdi54;
    struct s10* rsi55;
    int32_t v56;
    signed char** v57;
    int64_t* rax58;
    int64_t rcx59;

    __asm__("movq mm3, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx2 = rax1 * 0x1f40;
        rsi3 = reinterpret_cast<struct s0*>(rdx2 + reinterpret_cast<int64_t>(r14_4));
        if (reinterpret_cast<uint64_t>(rdx2 + r15_5 - reinterpret_cast<int64_t>(rsi3)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm12, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rdi6 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi6) + 2);
                __asm__("paddq xmm13, xmm3");
            } while (!reinterpret_cast<int1_t>(rdi6 == 0x3e8));
        } else {
            *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r9d");
                __asm__("divsd xmm4, [rip+0x0]");
                rdi6->f0 = rsi3->f0;
                rdi7 = &rdi6->f4;
                rsi8 = reinterpret_cast<struct s2*>(&rsi3->f4);
                __asm__("xorps xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, r8d");
                __asm__("divsd xmm4, [rip+0x0]");
                *rdi7 = rsi8->f0;
                rsi3 = reinterpret_cast<struct s0*>(&rsi8->f4);
                rdi6 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi7 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi6 == 0x3e8));
        }
        ++rax1;
    } while (rax1 != 0x4b0);
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
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
            rdx9 = rdx9 + 2;
            __asm__("paddq xmm7, xmm3");
        } while (rdx9 != 0x4b0);
        ++rcx10;
    } while (rcx10 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx11) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi6->f0 = fputc;
    rdi6->f4 = g4;
    rsi12 = reinterpret_cast<struct s3*>(8);
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    v13 = rbx14;
    do {
        rdx15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi12) * 0x2580 + reinterpret_cast<int64_t>(rbx16));
        rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi12) * 0x2588);
        v18 = rsi12;
        r13_19 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi12) * 0x1f40);
        if (rcx11 >= 4) {
            r8_20 = rcx11 & 0x7ffffffffffffffc;
            *reinterpret_cast<int32_t*>(&r9_21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm4, [rdx+r9*8]");
                __asm__("movupd xmm5, [rdx+r9*8+0x10]");
                __asm__("mulpd xmm4, xmm3");
                __asm__("mulpd xmm5, xmm3");
                __asm__("movupd [rdx+r9*8], xmm4");
                __asm__("movupd [rdx+r9*8+0x10], xmm5");
                r9_21 = r9_21 + 4;
            } while (r9_21 != r8_20);
            if (rcx11 != r8_20) 
                goto addr_3f0_31;
        } else {
            *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_3f0_31;
        }
        addr_408_33:
        v22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi17) + reinterpret_cast<int64_t>(rbx16) + 8);
        v23 = reinterpret_cast<struct s5*>(&r13_19->f8);
        rbp24 = 0x7ffffffffffffffe & rcx11;
        *reinterpret_cast<int32_t*>(&r10_25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(fputc);
        v26 = r13_19;
        do {
            r8_27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_28) + reinterpret_cast<int64_t>(r13_19));
            if (rcx11 < 8) {
                *reinterpret_cast<int32_t*>(&r9_29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_470_36;
            }
            rax30 = reinterpret_cast<void*>(r10_25 * 8 + reinterpret_cast<int64_t>(r13_19));
            rsi31 = v23;
            r8_32 = &(rsi31 + r10_25)->f0;
            rdi17 = r15_33 + r10_25 * 2;
            r9b34 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx15) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_32) + reinterpret_cast<int64_t>(r14_35)));
            r8_27 = v22;
            *reinterpret_cast<unsigned char*>(&rsi31) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_36 + r10_25 * 2) < reinterpret_cast<uint64_t>(r8_27));
            r13b37 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx15) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_38) + reinterpret_cast<int64_t>(r8_32)));
            bl39 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi17) < reinterpret_cast<uint64_t>(r8_27));
            *reinterpret_cast<unsigned char*>(&rdi17) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_40) + reinterpret_cast<int64_t>(rax30)) < reinterpret_cast<uint64_t>(r8_27));
            if (!reinterpret_cast<int1_t>((r9b34 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax30) + reinterpret_cast<int64_t>(r14_41)) < reinterpret_cast<uint64_t>(r8_27)))) == fputc) || (!reinterpret_cast<int1_t>((r9b34 & *reinterpret_cast<unsigned char*>(&rsi31)) == fputc) || !reinterpret_cast<int1_t>((bl39 & r13b37) == fputc))) {
                *reinterpret_cast<int32_t*>(&r9_29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(fputc);
                r13_19 = v26;
                goto addr_470_36;
            }
            *reinterpret_cast<int32_t*>(&r9_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(fputc);
            r13_19 = v26;
            if (!reinterpret_cast<int1_t>((r13b37 & *reinterpret_cast<unsigned char*>(&rdi17)) == fputc)) {
                do {
                    addr_470_36:
                    rsi42 = reinterpret_cast<struct s6*>(r14_43 + r9_29 * 0x7d0);
                    *rdi17 = rsi42->f0;
                    rdi44 = rdi17 + 1;
                    rsi45 = reinterpret_cast<struct s7*>(&rsi42->f4);
                    __asm__("mulsd xmm4, xmm1");
                    *rdi44 = rsi45->f0;
                    rdi46 = rdi44 + 1;
                    __asm__("mulsd xmm5, xmm1");
                    __asm__("mulsd xmm5, [r12]");
                    __asm__("mulsd xmm4, [r11]");
                    __asm__("addsd xmm4, xmm5");
                    __asm__("addsd xmm4, [rdx+r9*8]");
                    *rdi46 = rsi45->f4;
                    rdi17 = rdi46 + 1;
                    ++r9_29;
                } while (r9_29 != rcx11);
            } else {
                *rdi17 = rsi31->f0;
                __asm__("unpcklpd xmm4, xmm4");
                rdi17[1] = rsi31->f4;
                __asm__("unpcklpd xmm5, xmm5");
                *reinterpret_cast<int32_t*>(&r9_47) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_47) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi48 = reinterpret_cast<int32_t*>(r9_47 * 0x1f40);
                    rdi49 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(r14_50) + reinterpret_cast<uint64_t>(rsi48));
                    r8_27 = r14_51 + (r9_47 | 1) * 0x7d0;
                    rdi49->f0 = *rsi48;
                    rdi52 = reinterpret_cast<struct s9*>(&rdi49->f4);
                    __asm__("movhpd xmm6, [r8+r10*8]");
                    __asm__("mulpd xmm6, xmm2");
                    __asm__("mulpd xmm6, xmm4");
                    rdi52->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi48 + 1) + reinterpret_cast<int64_t>(r15_53));
                    rdi17 = &rdi52->f4;
                    __asm__("movhpd xmm7, [rax+r10*8]");
                    __asm__("mulpd xmm7, xmm2");
                    __asm__("mulpd xmm7, xmm5");
                    __asm__("addpd xmm7, xmm6");
                    __asm__("movupd xmm6, [rdx+r9*8]");
                    __asm__("addpd xmm6, xmm7");
                    __asm__("movupd [rdx+r9*8], xmm6");
                    r9_47 = r9_47 + 2;
                } while (r9_47 != rbp24);
                r9_29 = rbp24;
                if (rcx11 != rbp24) 
                    goto addr_470_36; else 
                    goto addr_5e4_64;
            }
            continue;
            addr_5e4_64:
            ++r10_25;
        } while (r10_25 != 0x3e8);
        continue;
        do {
            addr_3f0_31:
            *rdi17 = rsi12->f0;
            rdi54 = rdi17 + 1;
            rsi55 = reinterpret_cast<struct s10*>(&rsi12->f4);
            __asm__("mulsd xmm4, xmm0");
            *rdi54 = rsi55->f0;
            rdi17 = rdi54 + 1;
            rsi12 = reinterpret_cast<struct s3*>(&rsi55->f4);
            ++r8_20;
        } while (r8_20 != rcx11);
        goto addr_408_33;
        rsi12 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(v18) + 1);
        ++rcx11;
        rbx16 = v13;
    } while (rsi12 != 0x4b0);
    if (v56 < 43) 
        goto 0x60a;
    if (**v57 != fputc) 
        goto "???";
    rax58 = g63a;
    rcx59 = *rax58;
    fun_656(0x644, 22, 1, rcx59, r8_27);
}

