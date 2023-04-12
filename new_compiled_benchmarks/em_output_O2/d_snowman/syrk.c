
void fun_4c2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_4ba(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_4c2(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_569();

void fputc(int32_t edi, int64_t rsi);

void fun_599(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_5b2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_54b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* rbx4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int32_t* r15_8;
    int64_t r15_9;
    int64_t r15_10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = rbx4;
        fun_569();
        ++r12_5;
        if (r12_5 == 0x4b0) {
            ++r13_6;
            if (r13_6 == 0x4b0) 
                break;
            rbp7 = r13_6 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_5 + rbp7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_8;
        fun_54b();
    }
    fun_599(r15_9, 0x588, 0x58f);
    fun_5b2(0x5a0, 22, 1, r15_10);
    fun_4ba(__return_address(), 22, 1, r15_10);
    fun_4c2(r14_11, 22, 1, r15_10);
    goto v12;
}

void fun_569() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rbx8;
    int64_t r15_9;
    int64_t r15_10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++r13_2;
            if (r13_2 == 0x4b0) 
                break;
            rbp3 = r13_2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_54b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = rbx8;
        fun_569();
    }
    fun_599(r15_9, 0x588, 0x58f);
    fun_5b2(0x5a0, 22, 1, r15_10);
    fun_4ba(__return_address(), 22, 1, r15_10);
    fun_4c2(r14_11, 22, 1, r15_10);
    goto v12;
}

void fun_599(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t r14_5;
    int64_t v6;

    fun_5b2(0x5a0, 22, 1, r15_4);
    fun_4ba(__return_address(), 22, 1, r15_4);
    fun_4c2(r14_5, 22, 1, r15_4);
    goto v6;
}

void fun_511();

void fun_4f6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;
    int32_t* rsi6;
    int64_t r13_7;
    int32_t* rdi8;
    int32_t* r15_9;
    int64_t rbp10;
    int64_t r12_11;
    int32_t* r15_12;
    int32_t* r15_13;
    int64_t r15_14;
    int64_t r15_15;
    int64_t r14_16;
    int64_t v17;

    v5 = reinterpret_cast<int64_t>(__return_address());
    rsi6 = reinterpret_cast<int32_t*>(0x4fd);
    *reinterpret_cast<int32_t*>(&r13_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8 = r15_9;
    fun_511();
    do {
        rbp10 = r13_7 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_11 + rbp10) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi8) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r15_12;
                fun_54b();
            }
            *rdi8 = *rsi6;
            rdi8 = r15_13;
            rsi6 = reinterpret_cast<int32_t*>(0x518);
            fun_569();
            ++r12_11;
        } while (r12_11 != 0x4b0);
        ++r13_7;
    } while (r13_7 != 0x4b0);
    fun_599(r15_14, 0x588, 0x58f);
    fun_5b2(0x5a0, 22, 1, r15_15);
    fun_4ba(v5, 22, 1, r15_15);
    fun_4c2(r14_16, 22, 1, r15_15);
    goto v17;
}

void fun_4c2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_5b2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_4ba(__return_address(), rsi, rdx, rcx);
    fun_4c2(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_511() {
    int64_t v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r15_7;
    int32_t* r15_8;
    int64_t r15_9;
    int64_t r15_10;
    int64_t r14_11;
    int64_t v12;

    v1 = reinterpret_cast<int64_t>(__return_address());
    do {
        rbp2 = r13_3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r15_7;
                fun_54b();
            }
            *rdi5 = *rsi6;
            rdi5 = r15_8;
            rsi6 = reinterpret_cast<int32_t*>(0x518);
            fun_569();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++r13_3;
    } while (r13_3 != 0x4b0);
    fun_599(r15_9, 0x588, 0x58f);
    fun_5b2(0x5a0, 22, 1, r15_10);
    fun_4ba(v1, 22, 1, r15_10);
    fun_4c2(r14_11, 22, 1, r15_10);
    goto v12;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c() {
    __asm__("movdqa xmm7, xmm1");
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

int64_t* g4da = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

/* .LCPI0_9 */
void LCPI0_9(struct s0* rdi) {
    int64_t rdx2;
    int64_t rax3;
    uint64_t rax4;
    int64_t rdx5;
    struct s1* rsi6;
    int64_t rcx7;
    int32_t* rbx8;
    uint64_t rcx9;
    void* v10;
    void* rbx11;
    void* rdx12;
    void* rbx13;
    struct s2* rdi14;
    struct s3* rsi15;
    uint64_t r8_16;
    uint64_t r9_17;
    struct s4* rdi18;
    void* r8_19;
    uint64_t r15_20;
    int64_t r10_21;
    unsigned char r13b22;
    void* r14_23;
    int32_t* r14_24;
    uint64_t r9_25;
    void* r14_26;
    uint64_t r13_27;
    struct s5* rdi28;
    struct s6* rsi29;
    uint64_t r13_30;
    struct s5* rdi31;
    struct s6* rsi32;
    struct s5* rdi33;
    struct s6* rsi34;
    struct s4* rdi35;
    struct s3* rsi36;
    struct s5* rdi37;
    struct s6* rsi38;
    struct s7* rdi39;
    struct s6* rsi40;
    int32_t v41;
    signed char** v42;
    int64_t* rax43;
    int64_t rcx44;

    __asm__("psubd xmm8, xmm2");
    __asm__("movdqa xmm9, xmm8");
    __asm__("pmuludq xmm9, xmm3");
    __asm__("pshufd xmm9, xmm9, 0xed");
    __asm__("pshufd xmm10, xmm8, 0x55");
    __asm__("pmuludq xmm10, xmm3");
    __asm__("pshufd xmm10, xmm10, 0xed");
    __asm__("punpckldq xmm9, xmm10");
    __asm__("psrld xmm9, 0x7");
    __asm__("pshufd xmm10, xmm9, 0xf5");
    __asm__("pmuludq xmm9, xmm4");
    __asm__("pmuludq xmm10, xmm4");
    __asm__("punpckldq xmm9, xmm10");
    __asm__("psubd xmm8, xmm9");
    __asm__("cvtdq2pd xmm8, xmm8");
    __asm__("divpd xmm8, xmm5");
    __asm__("movupd [rsi+rdx*8], xmm8");
    __asm__("paddq xmm7, xmm0");
    if (rdx2 + 2 != 0x3e8) 
        goto 0x80;
    if (rax3 + 1 == 0x4b0) {
        __asm__("movdqa xmm1, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm2, [rip+0x0]");
        __asm__("movdqa xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        do {
            __asm__("movd xmm6, rcx");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm7, xmm1");
            do {
                __asm__("movdqa xmm8, xmm7");
                __asm__("pmuludq xmm8, xmm6");
                __asm__("pshufd xmm8, xmm8, 0xe8");
                __asm__("paddd xmm8, xmm2");
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
                rsi6 = reinterpret_cast<struct s1*>(rbx8 + rcx7 * 0x960);
                __asm__("movupd [rsi+rdx*8], xmm8");
                rdx5 = rdx5 + 2;
                __asm__("paddq xmm7, xmm0");
            } while (rdx5 != 0x4b0);
            ++rcx7;
        } while (rcx7 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rcx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi->f0 = rsi6->f0;
        rdi->f4 = rsi6->f4;
        __asm__("movapd xmm2, [rip+0x0]");
        v10 = rbx11;
        do {
            rdx12 = reinterpret_cast<void*>(rax4 * 0x2580 + reinterpret_cast<int64_t>(rbx13));
            rdi14 = reinterpret_cast<struct s2*>(rax4 * 0x2588);
            rsi15 = reinterpret_cast<struct s3*>(rax4 * 0x1f40);
            if (rcx9 >= 4) {
                r8_16 = rcx9 & 0x7ffffffffffffffc;
                *reinterpret_cast<int32_t*>(&r9_17) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm3, [rdx+r9*8]");
                    __asm__("movupd xmm4, [rdx+r9*8+0x10]");
                    __asm__("mulpd xmm3, xmm2");
                    __asm__("mulpd xmm4, xmm2");
                    __asm__("movupd [rdx+r9*8], xmm3");
                    __asm__("movupd [rdx+r9*8+0x10], xmm4");
                    r9_17 = r9_17 + 4;
                } while (r9_17 != r8_16);
                if (rcx9 != r8_16) 
                    goto addr_2b0_19;
            } else {
                *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_2b0_19;
            }
            addr_2c8_21:
            rdi18 = reinterpret_cast<struct s4*>(reinterpret_cast<uint64_t>(rdi14) + reinterpret_cast<int64_t>(rbx13) + 8);
            r8_19 = reinterpret_cast<void*>(&(rsi15 + 1)->f0);
            r15_20 = rcx9 & 0x7ffffffffffffffc;
            *reinterpret_cast<int32_t*>(&r10_21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx9 < 6 || (r13b22 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx12) < reinterpret_cast<uint64_t>(r8_19) + r10_21 * 8 + reinterpret_cast<int64_t>(r14_23)), !reinterpret_cast<int1_t>((r13b22 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_24 + r10_21 * 2) < reinterpret_cast<uint64_t>(rdi18)))) == fputc))) {
                    *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_315_24;
                }
                *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(fputc);
                if (!reinterpret_cast<int1_t>((r13b22 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi15 + r10_21) + reinterpret_cast<int64_t>(r14_26) < reinterpret_cast<uint64_t>(rdi18)))) == fputc)) {
                    addr_315_24:
                    r13_27 = r9_25;
                    if ((*reinterpret_cast<unsigned char*>(&rcx9) & 1) != fputc) {
                        rdi18->f0 = rsi15->f0;
                        rdi28 = reinterpret_cast<struct s5*>(&rdi18->f4);
                        rsi29 = reinterpret_cast<struct s6*>(&rsi15->f4);
                        __asm__("mulsd xmm3, xmm1");
                        __asm__("mulsd xmm3, [rbx+r10*8]");
                        __asm__("addsd xmm3, [rdx+r9*8]");
                        rdi28->f0 = rsi29->f0;
                        rdi18 = reinterpret_cast<struct s4*>(&rdi28->f4);
                        rsi15 = reinterpret_cast<struct s3*>(&rsi29->f4);
                        r13_27 = r9_25 | 1;
                    }
                } else {
                    rdi18->f0 = rsi15->f0;
                    rdi18 = reinterpret_cast<struct s4*>(&rdi18->f4);
                    rsi15 = reinterpret_cast<struct s3*>(&rsi15->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("unpcklpd xmm3, xmm3");
                    *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi18->f0 = rsi15->f0;
                        rdi31 = reinterpret_cast<struct s5*>(&rdi18->f4);
                        rsi32 = reinterpret_cast<struct s6*>(&rsi15->f4);
                        __asm__("movhpd xmm4, [r9+r10*8]");
                        rdi31->f0 = rsi32->f0;
                        rdi18 = reinterpret_cast<struct s4*>(&rdi31->f4);
                        rsi15 = reinterpret_cast<struct s3*>(&rsi32->f4);
                        __asm__("movhpd xmm5, [rbp+r10*8+0x0]");
                        __asm__("movupd xmm6, [rdx+r13*8]");
                        __asm__("movupd xmm7, [rdx+r13*8+0x10]");
                        __asm__("mulpd xmm4, xmm3");
                        __asm__("addpd xmm4, xmm6");
                        __asm__("mulpd xmm5, xmm3");
                        __asm__("addpd xmm5, xmm7");
                        __asm__("movupd [rdx+r13*8], xmm4");
                        __asm__("movupd [rdx+r13*8+0x10], xmm5");
                        r13_30 = r13_30 + 4;
                    } while (r13_30 != r15_20);
                    r9_25 = r15_20;
                    if (rcx9 == r15_20) 
                        continue; else 
                        goto addr_499_45;
                }
                if (rax4 != r9_25) {
                    do {
                        rdi18->f0 = rsi15->f0;
                        rdi33 = reinterpret_cast<struct s5*>(&rdi18->f4);
                        rsi34 = reinterpret_cast<struct s6*>(&rsi15->f4);
                        __asm__("mulsd xmm3, xmm1");
                        __asm__("mulsd xmm3, [r9+r10*8]");
                        __asm__("addsd xmm3, [rdx+r13*8]");
                        rdi33->f0 = rsi34->f0;
                        rdi35 = reinterpret_cast<struct s4*>(&rdi33->f4);
                        rsi36 = reinterpret_cast<struct s3*>(&rsi34->f4);
                        rdi35->f0 = rsi36->f0;
                        rdi37 = reinterpret_cast<struct s5*>(&rdi35->f4);
                        rsi38 = reinterpret_cast<struct s6*>(&rsi36->f4);
                        __asm__("mulsd xmm3, xmm1");
                        __asm__("mulsd xmm3, [r9+r10*8+0x1f40]");
                        __asm__("addsd xmm3, [rdx+r13*8+0x8]");
                        rdi37->f0 = rsi38->f0;
                        rdi18 = reinterpret_cast<struct s4*>(&rdi37->f4);
                        rsi15 = reinterpret_cast<struct s3*>(&rsi38->f4);
                        r13_27 = r13_27 + 2;
                    } while (r13_27 != rcx9);
                    continue;
                }
                addr_499_45:
                goto addr_315_24;
                ++r10_21;
            } while (r10_21 != 0x3e8);
            continue;
            do {
                addr_2b0_19:
                rdi14->f0 = rsi15->f0;
                rdi39 = reinterpret_cast<struct s7*>(&rdi14->f4);
                rsi40 = reinterpret_cast<struct s6*>(&rsi15->f4);
                __asm__("mulsd xmm3, xmm0");
                rdi39->f0 = rsi40->f0;
                rdi14 = reinterpret_cast<struct s2*>(&rdi39->f4);
                rsi15 = reinterpret_cast<struct s3*>(&rsi40->f4);
                ++r8_16;
            } while (r8_16 != rcx9);
            goto addr_2c8_21;
            ++rax4;
            ++rcx9;
            rbx13 = v10;
        } while (rax4 != 0x4b0);
        if (v41 < 43) 
            goto 0x4b2;
        if (**v42 != fputc) 
            goto "???";
        rax43 = g4da;
        rcx44 = *rax43;
        fun_4f6(0x4e4, 22, 1, rcx44);
    }
}

