
void fun_516(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_51e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_50e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_516(r14_5, rsi, rdx, rcx);
    fun_51e(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_5be();

void fputc(int32_t edi, int64_t rsi);

void fun_5f2(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_60b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_59c() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x5b7);
        fun_5be();
        ++r12_3;
        if (r12_3 == 0x44c) {
            ++rbp4;
            if (rbp4 == 0x3e8) 
                break;
            r13_5 = rbp4 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_59c();
    }
    fun_5f2(__return_address(), 0x5dd, 0x5e4);
    fun_60b(0x5f9, 22, 1, __return_address());
    fun_50e(rbx6, 22, 1, __return_address());
    fun_516(r14_7, 22, 1, __return_address());
    fun_51e(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_5be() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x44c) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            r13_3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_59c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x5b7);
        fun_5be();
    }
    fun_5f2(__return_address(), 0x5dd, 0x5e4);
    fun_60b(0x5f9, 22, 1, __return_address());
    fun_50e(rbx6, 22, 1, __return_address());
    fun_516(r14_7, 22, 1, __return_address());
    fun_51e(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_570() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t v10;

    do {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        r13_2 = rbp3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_59c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x5b7);
            fun_5be();
            ++r12_4;
        } while (r12_4 != 0x44c);
        ++rbp3;
    } while (rbp3 != 0x3e8);
    fun_5f2(v1, 0x5dd, 0x5e4);
    fun_60b(0x5f9, 22, 1, v1);
    fun_50e(rbx7, 22, 1, v1);
    fun_516(r14_8, 22, 1, v1);
    fun_51e(r15_9, 22, 1, v1);
    goto v10;
}

void fun_5f2(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_60b(0x5f9, 22, 1, r12_4);
    fun_50e(rbx5, 22, 1, r12_4);
    fun_516(r14_6, 22, 1, r12_4);
    fun_51e(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_552(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x559);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_570();
    do {
        r13_11 = rbp6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_59c();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x5b7);
            fun_5be();
            ++r12_12;
        } while (r12_12 != 0x44c);
        ++rbp6;
    } while (rbp6 != 0x3e8);
    fun_5f2(v7, 0x5dd, 0x5e4);
    fun_60b(0x5f9, 22, 1, v7);
    fun_50e(rbx13, 22, 1, v7);
    fun_516(r14_14, 22, 1, v7);
    fun_51e(r15_15, 22, 1, v7);
    goto v16;
}

void fun_516(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_51e(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_60b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_50e(rbx5, rsi, rdx, rcx);
    fun_516(r14_6, rsi, rdx, rcx);
    fun_51e(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_51e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_84() {
    __asm__("int1 ");
    __asm__("pshufd xmm6, xmm6, 0x44");
}

struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

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

int64_t* g536 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_92(int32_t* rdi) {
    int64_t rdx2;
    int64_t rcx3;
    int64_t rcx4;
    int64_t rdx5;
    int64_t rax6;
    int64_t rax7;
    int64_t rdx8;
    int32_t* rsi9;
    int32_t* r15_10;
    int64_t rdx11;
    uint64_t rcx12;
    int64_t rbx13;
    uint64_t rdx14;
    int64_t rbx15;
    struct s0* rsi16;
    struct s1* rdi17;
    uint64_t r8_18;
    int64_t v19;
    int64_t r8_20;
    int64_t r9_21;
    int64_t r14_22;
    int64_t r14_23;
    int64_t r11_24;
    int64_t r15_25;
    int64_t r15_26;
    struct s2* rdi27;
    struct s3* rsi28;
    struct s4* rdi29;
    struct s5* rsi30;
    struct s6* rdi31;
    struct s7* rsi32;
    int64_t r10_33;
    int32_t v34;
    signed char** v35;
    int64_t* rax36;
    int64_t rcx37;

    __asm__("movq mm0, mm7");
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
    __asm__("paddq xmm7, xmm0");
    if (rdx2 + 2 == 0x44c) {
        if (rcx3 + 1 == 0x3e8) {
            __asm__("movdqa xmm1, [rip+0x0]");
            *reinterpret_cast<int32_t*>(&rcx4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("pcmpeqd xmm2, xmm2");
            __asm__("movdqa xmm3, [rip+0x0]");
            __asm__("movdqa xmm4, [rip+0x0]");
            __asm__("movapd xmm5, [rip+0x0]");
            do {
                __asm__("movd xmm6, rax");
                __asm__("pshufd xmm6, xmm6, 0x44");
                *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    rdx5 = rdx5 + 2;
                    __asm__("paddq xmm7, xmm0");
                } while (rdx5 != 0x4b0);
                ++rax6;
            } while (rax6 != 0x3e8);
            __asm__("movdqa xmm1, [rip+0x0]");
            *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm2, [rip+0x0]");
            __asm__("movdqa xmm3, [rip+0x0]");
            __asm__("movapd xmm4, [rip+0x0]");
            do {
                __asm__("movd xmm5, rcx");
                __asm__("pshufd xmm5, xmm5, 0x44");
                *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    rsi9 = r15_10 + rcx4 * 0x898;
                    __asm__("movupd [rsi+rdx*8], xmm7");
                    rdx8 = rdx8 + 2;
                } while (rdx8 != 0x44c);
                ++rcx4;
            } while (rcx4 != 0x4b0);
            __asm__("movapd xmm0, [rip+0x0]");
            *rdi = *rsi9;
            do {
                rdx11 = rax7 * 0x2260;
                rcx12 = reinterpret_cast<uint64_t>(rbx13 + rdx11);
                rdx14 = reinterpret_cast<uint64_t>(rdx11 + rbx15 + 0x2260);
                rsi16 = reinterpret_cast<struct s0*>(rax7 * 0x2580);
                rdi17 = reinterpret_cast<struct s1*>(&rsi16->f8);
                *reinterpret_cast<int32_t*>(&r8_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(fputc);
                while ((r8_18 | 4) != 0x44c) {
                    __asm__("movupd xmm2, [rcx+r9*8]");
                    __asm__("movupd xmm3, [rcx+r9*8+0x10]");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("movupd [rcx+r9*8], xmm2");
                    __asm__("movupd [rcx+r9*8+0x10], xmm3");
                    r8_18 = r8_18 + 8;
                }
                v19 = rax7;
                *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    r9_21 = r8_20 * 0x2260;
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx12 < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdi17 + r8_20) + r14_22))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi16) + r8_20 * 8 + r14_23) < rdx14))) == fputc)) {
                        *reinterpret_cast<int32_t*>(&r11_24) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = reinterpret_cast<int32_t>(fputc);
                        goto addr_4a0_23;
                    }
                    *reinterpret_cast<int32_t*>(&r11_24) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx12 < reinterpret_cast<uint64_t>(r15_25 + r9_21 + 0x2260))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_21 + r15_26) < rdx14))) == fputc)) {
                        do {
                            addr_4a0_23:
                            rdi17->f0 = rsi16->f0;
                            rdi27 = reinterpret_cast<struct s2*>(&rdi17->f4);
                            rsi28 = reinterpret_cast<struct s3*>(&rsi16->f4);
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
                            rdi17 = reinterpret_cast<struct s1*>(&rdi31->f4);
                            rsi16 = reinterpret_cast<struct s0*>(&rsi32->f4);
                            r11_24 = r11_24 + 2;
                        } while (r11_24 != 0x44c);
                    } else {
                        rdi17->f0 = rsi16->f0;
                        rdi17 = reinterpret_cast<struct s1*>(&rdi17->f4);
                        rsi16 = reinterpret_cast<struct s0*>(&rsi16->f4);
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
                    ++r8_20;
                } while (r8_20 != 0x4b0);
                rax7 = v19 + 1;
            } while (rax7 != 0x3e8);
            if (v34 < 43) 
                goto 0x506;
            if (**v35 != fputc) 
                goto "???";
            rax36 = g536;
            rcx37 = *rax36;
            fun_552(0x540, 22, 1, rcx37);
        }
    }
}

